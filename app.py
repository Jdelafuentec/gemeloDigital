import streamlit as st
from pathlib import Path
import re
import pandas as pd
import matplotlib.pyplot as plt
from fmpy import simulate_fmu, read_model_description

# Configuración de la página
st.set_page_config(page_title="Gemelo Digital - Simulación Térmica", layout="wide")

st.title("❄️ Simulador de Congelamiento de Tuberías")
st.markdown("""
Esta aplicación utiliza un **Gemelo Digital (FMU)** para simular el comportamiento térmico de un circuito de agua 
expuesto a condiciones extremas. Puedes ajustar el material y el largo de la tubería para ver si el sistema resiste.
""")

# --- FUNCIONES DE APOYO (Lógica de Daniel) ---
def parse_unsettable_from_exception(exc: Exception):
    text = str(exc)
    m = re.search(r"could not be set:\s*(.+)$", text)
    if not m:
        return []
    return [x.strip() for x in m.group(1).split(",") if x.strip()]

def simulate_with_retry(fmu_path, start_values, outputs, stop_time, interval):
    current_values = dict(start_values)
    while True:
        try:
            result = simulate_fmu(
                filename=str(fmu_path),
                start_time=0.0,
                stop_time=stop_time,
                output_interval=interval,
                start_values=current_values,
                output=outputs,
            )
            return result, current_values
        except Exception as exc:
            bad = parse_unsettable_from_exception(exc)
            if not bad: raise exc
            removed_any = False
            for name in bad:
                if name in current_values:
                    current_values.pop(name, None)
                    removed_any = True
            if not removed_any: raise exc

# --- BARRA LATERAL: PARÁMETROS INTERACTIVOS ---
st.sidebar.header("Configuración del Experimento")

with st.sidebar.expander("🛠️ Parámetros de Tubería", expanded=True):
    material_opt = {"Cobre": 1, "PVC": 2, "HDPE": 3, "Valco": 4}
    mat_cold = st.selectbox("Material tramo frío", list(material_opt.keys()), index=1)
    l_cold = st.slider("Longitud expuesta al frío (m)", 0.1, 5.0, 1.0)

with st.sidebar.expander("🌡️ Condiciones Ambientales"):
    t_cold_c = st.number_input("Temperatura ambiente frío (°C)", value=-18.0)
    t_amb_c = st.number_input("Temperatura suelo/aire tramos enlace (°C)", value=21.0)
    t_init_c = st.number_input("Temperatura inicial agua (°C)", value=2.3)

# Diccionario base de parámetros
START_VALUES = {
    "T_init": 273.15 + t_init_c,
    "m_flow_nominal": 0.114,
    "Tcold": 273.15 + t_cold_c,
    "T_amb": 273.15 + t_amb_c,
    "T_water": 273.15 + 7.4,
    "T_ground": 273.15 + 8.0,
    "material_cold": material_opt[mat_cold],
    "material_heat": 1,
    "L_cold": l_cold,
    "L": 1.0,
    "L_heat": 1.5,
    "P_pumpHeat": 19.0,
}

# --- EJECUCIÓN DE LA SIMULACIÓN ---
FMU_PATH = Path("pump_v3_basicCold_t_linux.fmu").resolve()

if not FMU_PATH.exists():
    st.error(f"Archivo {FMU_PATH.name} no encontrado. Por favor súbelo al repositorio.")
else:
    if st.sidebar.button("🚀 Ejecutar Simulación"):
        with st.spinner("Simulando 72 horas de operación..."):
            try:
                # Configuración técnica
                STOP_TIME = 72 * 3600
                OUTPUT_INTERVAL = 5.0 # Pasos cortos para evitar error CVode de "mxstep"
                CANDIDATE_OUTPUTS = [
                    "SenTempIn_cold.T", "senTemOut_cold.T", 
                    "senTemIn_heat.T", "senTemOut_heat.T",
                    "Water_Reserv.T", "Q_cold_W", "Q_heat_total_W"
                ]

                # Leer descripción y filtrar variables
                md = read_model_description(str(FMU_PATH))
                variable_names = [v.name for v in md.modelVariables]
                outputs = [n for n in CANDIDATE_OUTPUTS if n in variable_names]

                # Simular
                result, applied = simulate_with_retry(FMU_PATH, START_VALUES, outputs, STOP_TIME, OUTPUT_INTERVAL)
                
                # Procesar datos
                df = pd.DataFrame({name: result[name] for name in result.dtype.names})
                df["Hora"] = df["time"] / 3600.0
                
                # Convertir a Celsius
                for col in [c for c in df.columns if c.endswith(".T")]:
                    df[col.replace(".T", " (°C)")] = df[col] - 273.15

                # Desmuestreo (downsampling) de 1 dato por minuto (cada 12 pasos de 5s) para gráficos rápidos
                df_plot = df.iloc[::12, :]

                # --- VISUALIZACIÓN ---
                col1, col2 = st.columns(2)

                with col1:
                    st.subheader("Gráfico de Temperaturas")
                    temp_cols = [c for c in df_plot.columns if " (°C)" in c]
                    st.line_chart(df_plot.set_index("Hora")[temp_cols])

                with col2:
                    st.subheader("Balance Energético (W)")
                    q_cols = [c for c in ["Q_cold_W", "Q_heat_total_W"] if c in df_plot.columns]
                    st.area_chart(df_plot.set_index("Hora")[q_cols])

                # Métricas finales
                st.divider()
                m1, m2, m3 = st.columns(3)
                m1.metric("Temp. Salida Frío", f"{df.iloc[-1, df.columns.get_loc('senTemOut_cold (°C)')]:.2f} °C")
                m2.metric("Temp. Reservorio", f"{df.iloc[-1, df.columns.get_loc('Water_Reserv (°C)')]:.2f} °C")
                m3.metric("Pérdida Térmica (Q)", f"{df.iloc[-1, df.columns.get_loc('Q_cold_W')]:.2f} W")

            except Exception as e:
                st.error(f"Error en la simulación: {e}")
    else:
        st.info("Ajusta los parámetros en la barra lateral y presiona 'Ejecutar Simulación'.")

st.sidebar.markdown("---")
st.sidebar.caption("Desarrollado para el proyecto de monitoreo térmico - Patagonia.")