/* Main Simulation File */

#if defined(__cplusplus)
extern "C" {
#endif

#include "pump_v3_basicCold_t_model.h"
#include "simulation/solver/events.h"
#include "util/real_array.h"



/* dummy VARINFO and FILEINFO */
const VAR_INFO dummyVAR_INFO = omc_dummyVarInfo;

int pump_v3_basicCold_t_input_function(DATA *data, threadData_t *threadData)
{
  
  return 0;
}

int pump_v3_basicCold_t_input_function_init(DATA *data, threadData_t *threadData)
{
  
  return 0;
}

int pump_v3_basicCold_t_input_function_updateStartValues(DATA *data, threadData_t *threadData)
{
  
  return 0;
}

int pump_v3_basicCold_t_inputNames(DATA *data, char ** names){
  
  return 0;
}

int pump_v3_basicCold_t_data_function(DATA *data, threadData_t *threadData)
{
  return 0;
}

int pump_v3_basicCold_t_dataReconciliationInputNames(DATA *data, char ** names){
  
  return 0;
}

int pump_v3_basicCold_t_dataReconciliationUnmeasuredVariables(DATA *data, char ** names)
{
  
  return 0;
}

int pump_v3_basicCold_t_output_function(DATA *data, threadData_t *threadData)
{
  data->simulationInfo->outputVars[0] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[136]] /* Q_cold_W variable */);
  data->simulationInfo->outputVars[1] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[137]] /* Q_heat_pipe_W variable */);
  data->simulationInfo->outputVars[2] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[138]] /* Q_heat_total_W variable */);
  data->simulationInfo->outputVars[3] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[139]] /* Q_pump_W variable */);
  
  return 0;
}

int pump_v3_basicCold_t_setc_function(DATA *data, threadData_t *threadData)
{
  
  return 0;
}

int pump_v3_basicCold_t_setb_function(DATA *data, threadData_t *threadData)
{
  
  return 0;
}


/*
equation index: 805
type: SIMPLE_ASSIGN
bou1.X_in_internal[1] = bou1.X[1]
*/
void pump_v3_basicCold_t_eqFunction_805(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,805};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[146]] /* bou1.X_in_internal[1] variable */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[49]] /* bou1.X[1] PARAM */);
  threadData->lastEquationSolved = 805;
}

/*
equation index: 806
type: SIMPLE_ASSIGN
bou1.p_in_internal = bou1.p
*/
void pump_v3_basicCold_t_eqFunction_806(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,806};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[147]] /* bou1.p_in_internal variable */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[50]] /* bou1.p PARAM */);
  threadData->lastEquationSolved = 806;
}

/*
equation index: 807
type: ALGORITHM

  (plugFlowPipe.del.port_a.h_outflow, plugFlowPipe.del.port_b.h_outflow) := spatialDistribution(0, plugFlowPipe.port_a.h_outflow, senTemOut_cold.port_b.h_outflow, plugFlowPipe.del.x, plugFlowPipe.v >= 0.0, {0.0, 1.0}, {plugFlowPipe.del.h_ini_in, plugFlowPipe.del.h_ini_out});
*/
void pump_v3_basicCold_t_eqFunction_807(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,807};
  modelica_real tmp0;
  modelica_boolean tmp1;
  modelica_real tmp2;
  modelica_real tmp3;
  tmp2 = 1.0;
  tmp3 = 0.0;
  relationhysteresis(data, &tmp1, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[180]] /* plugFlowPipe.v variable */), 0.0, tmp2, tmp3, 14, GreaterEq, GreaterEqZC);
  tmp0 = spatialDistribution(data, threadData, 0 /* index */, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[171]] /* plugFlowPipe.port_a.h_outflow variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[439]] /* senTemOut_cold.port_b.h_outflow variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1]] /* plugFlowPipe.del.x STATE(1,plugFlowPipe.v) */), tmp1 ,&(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[158]] /* plugFlowPipe.del.port_b.h_outflow variable */));
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[157]] /* plugFlowPipe.del.port_a.h_outflow variable */) = tmp0;
  threadData->lastEquationSolved = 807;
}

/*
equation index: 808
type: SIMPLE_ASSIGN
plugFlowPipe.timDel.u = 5.1229151622319185 * pump.motSpe.y
*/
void pump_v3_basicCold_t_eqFunction_808(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,808};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[179]] /* plugFlowPipe.timDel.u variable */) = (5.1229151622319185) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[17]] /* pump.motSpe.y STATE(1) */));
  threadData->lastEquationSolved = 808;
}

/*
equation index: 809
type: SIMPLE_ASSIGN
$DER.plugFlowPipe.timDel.x = plugFlowPipe.timDel.u
*/
void pump_v3_basicCold_t_eqFunction_809(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,809};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[23]] /* der(plugFlowPipe.timDel.x) STATE_DER */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[179]] /* plugFlowPipe.timDel.u variable */);
  threadData->lastEquationSolved = 809;
}

/*
equation index: 810
type: ALGORITHM

  (plugFlowPipe.timDel.time_out_rev, plugFlowPipe.timDel.time_out_des) := spatialDistribution(1, time, time, plugFlowPipe.timDel.x, plugFlowPipe.timDel.u >= 0.0, {0.0, 1.0}, {plugFlowPipe.timDel.t0, plugFlowPipe.timDel.t0 + plugFlowPipe.timDel.t_out_start});
*/
void pump_v3_basicCold_t_eqFunction_810(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,810};
  modelica_real tmp4;
  modelica_boolean tmp5;
  modelica_real tmp6;
  modelica_real tmp7;
  tmp6 = 1.0;
  tmp7 = 0.0;
  relationhysteresis(data, &tmp5, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[179]] /* plugFlowPipe.timDel.u variable */), 0.0, tmp6, tmp7, 12, GreaterEq, GreaterEqZC);
  tmp4 = spatialDistribution(data, threadData, 1 /* index */, data->localData[0]->timeValue, data->localData[0]->timeValue, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2]] /* plugFlowPipe.timDel.x STATE(1,plugFlowPipe.timDel.u) */), tmp5 ,&(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[177]] /* plugFlowPipe.timDel.time_out_des variable */));
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[178]] /* plugFlowPipe.timDel.time_out_rev variable */) = tmp4;
  threadData->lastEquationSolved = 810;
}

/*
equation index: 811
type: SIMPLE_ASSIGN
plugFlowPipe.timDel.tauRev = max(0.0, time - plugFlowPipe.timDel.time_out_rev)
*/
void pump_v3_basicCold_t_eqFunction_811(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,811};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[176]] /* plugFlowPipe.timDel.tauRev variable */) = fmax(0.0,data->localData[0]->timeValue - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[178]] /* plugFlowPipe.timDel.time_out_rev variable */));
  threadData->lastEquationSolved = 811;
}

/*
equation index: 812
type: SIMPLE_ASSIGN
$cse3 = exp((-plugFlowPipe.timDel.tauRev) / plugFlowPipe.heaLos_a.tau_char)
*/
void pump_v3_basicCold_t_eqFunction_812(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,812};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[77]] /* $cse3 variable */) = exp(DIVISION_SIM((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[176]] /* plugFlowPipe.timDel.tauRev variable */)),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[115]] /* plugFlowPipe.heaLos_a.tau_char PARAM */),"plugFlowPipe.heaLos_a.tau_char",equationIndexes));
  threadData->lastEquationSolved = 812;
}

/*
equation index: 813
type: SIMPLE_ASSIGN
plugFlowPipe.timDel.tau = max(0.0, time - plugFlowPipe.timDel.time_out_des)
*/
void pump_v3_basicCold_t_eqFunction_813(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,813};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[175]] /* plugFlowPipe.timDel.tau variable */) = fmax(0.0,data->localData[0]->timeValue - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[177]] /* plugFlowPipe.timDel.time_out_des variable */));
  threadData->lastEquationSolved = 813;
}

/*
equation index: 814
type: SIMPLE_ASSIGN
$cse7 = exp((-plugFlowPipe.timDel.tau) / plugFlowPipe.heaLos_b.tau_char)
*/
void pump_v3_basicCold_t_eqFunction_814(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,814};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[132]] /* $cse7 variable */) = exp(DIVISION_SIM((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[175]] /* plugFlowPipe.timDel.tau variable */)),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[126]] /* plugFlowPipe.heaLos_b.tau_char PARAM */),"plugFlowPipe.heaLos_b.tau_char",equationIndexes));
  threadData->lastEquationSolved = 814;
}

/*
equation index: 815
type: SIMPLE_ASSIGN
senTemOut_cold.port_b.h_outflow = plugFlowPipe.vol_b.dynBal.U / plugFlowPipe.vol_b.dynBal.m
*/
void pump_v3_basicCold_t_eqFunction_815(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,815};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[439]] /* senTemOut_cold.port_b.h_outflow variable */) = DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4]] /* plugFlowPipe.vol_b.dynBal.U STATE(1) */),(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[199]] /* plugFlowPipe.vol_b.dynBal.m DUMMY_STATE */),"plugFlowPipe.vol_b.dynBal.m",equationIndexes);
  threadData->lastEquationSolved = 815;
}

/*
equation index: 816
type: SIMPLE_ASSIGN
plugFlowPipe.vol_b.dynBal.ports_H_flow[2] = -semiLinear(pump.motSpe.y, senTemOut_cold.port_b.h_outflow, senTemOut_cold.port_b.h_outflow)
*/
void pump_v3_basicCold_t_eqFunction_816(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,816};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[210]] /* plugFlowPipe.vol_b.dynBal.ports_H_flow[2] variable */) = (-semiLinear((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[17]] /* pump.motSpe.y STATE(1) */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[439]] /* senTemOut_cold.port_b.h_outflow variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[439]] /* senTemOut_cold.port_b.h_outflow variable */)));
  threadData->lastEquationSolved = 816;
}

/*
equation index: 817
type: SIMPLE_ASSIGN
plugFlowPipe.vol_b.dynBal.medium.T_degC = (-senTemOut_cold.port_b.h_outflow) / (-4184.0)
*/
void pump_v3_basicCold_t_eqFunction_817(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,817};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[205]] /* plugFlowPipe.vol_b.dynBal.medium.T_degC variable */) = DIVISION_SIM((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[439]] /* senTemOut_cold.port_b.h_outflow variable */)),-4184.0,"-4184.0",equationIndexes);
  threadData->lastEquationSolved = 817;
}

/*
equation index: 818
type: SIMPLE_ASSIGN
plugFlowPipe.vol_b.dynBal.medium.T = plugFlowPipe.vol_b.dynBal.medium.T_degC - -273.15
*/
void pump_v3_basicCold_t_eqFunction_818(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,818};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[204]] /* plugFlowPipe.vol_b.dynBal.medium.T variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[205]] /* plugFlowPipe.vol_b.dynBal.medium.T_degC variable */) - (-273.15);
  threadData->lastEquationSolved = 818;
}

/*
equation index: 819
type: SIMPLE_ASSIGN
plugFlowPipe.port_a.h_outflow = plugFlowPipe.vol_a.dynBal.U / plugFlowPipe.vol_a.dynBal.m
*/
void pump_v3_basicCold_t_eqFunction_819(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,819};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[171]] /* plugFlowPipe.port_a.h_outflow variable */) = DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3]] /* plugFlowPipe.vol_a.dynBal.U STATE(1) */),(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[183]] /* plugFlowPipe.vol_a.dynBal.m DUMMY_STATE */),"plugFlowPipe.vol_a.dynBal.m",equationIndexes);
  threadData->lastEquationSolved = 819;
}

/*
equation index: 820
type: SIMPLE_ASSIGN
plugFlowPipe.vol_a.T = pump_v3_basicCold_t.plugFlowPipe.vol_a.Medium.temperature_phX(bou1.p, plugFlowPipe.port_a.h_outflow, {1.0})
*/
void pump_v3_basicCold_t_eqFunction_820(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,820};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[181]] /* plugFlowPipe.vol_a.T variable */) = omc_pump__v3__basicCold__t_plugFlowPipe_vol__a_Medium_temperature__phX(threadData, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[50]] /* bou1.p PARAM */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[171]] /* plugFlowPipe.port_a.h_outflow variable */), _OMC_LIT47);
  threadData->lastEquationSolved = 820;
}

/*
equation index: 821
type: ALGORITHM

  $cse2 := pump_v3_basicCold_t.plugFlowPipe.heaLos_a.Medium.setState_phX(bou1.p, plugFlowPipe.port_a.h_outflow, {});
*/
void pump_v3_basicCold_t_eqFunction_821(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,821};
  base_array_t tmp8;
  pump__v3__basicCold__t_plugFlowPipe_heaLos__a_Medium_ThermodynamicState tmp9;
  simple_alloc_1d_base_array(&tmp8, 0, NULL);
  tmp9 = omc_pump__v3__basicCold__t_plugFlowPipe_heaLos__a_Medium_setState__phX(threadData, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[50]] /* bou1.p PARAM */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[171]] /* plugFlowPipe.port_a.h_outflow variable */), tmp8);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[60]] /* $cse2.p variable */) = tmp9._p;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[59]] /* $cse2.T variable */) = tmp9._T;
  ;
  threadData->lastEquationSolved = 821;
}

/*
equation index: 822
type: SIMPLE_ASSIGN
plugFlowPipe.heaLos_a.T_a_inflow = pump_v3_basicCold_t.plugFlowPipe.heaLos_a.Medium.temperature($cse2)
*/
void pump_v3_basicCold_t_eqFunction_822(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,822};
  pump__v3__basicCold__t_plugFlowPipe_heaLos__a_Medium_ThermodynamicState tmp10;
  pump__v3__basicCold__t_plugFlowPipe_heaLos__a_Medium_ThermodynamicState_wrap_vars(threadData,tmp10, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[60]] /* $cse2.p variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[59]] /* $cse2.T variable */));
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[160]] /* plugFlowPipe.heaLos_a.T_a_inflow variable */) = omc_pump__v3__basicCold__t_plugFlowPipe_heaLos__a_Medium_temperature(threadData, tmp10);
  threadData->lastEquationSolved = 822;
}

/*
equation index: 823
type: SIMPLE_ASSIGN
plugFlowPipe.vol_a.dynBal.medium.T_degC = (-plugFlowPipe.port_a.h_outflow) / (-4184.0)
*/
void pump_v3_basicCold_t_eqFunction_823(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,823};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[189]] /* plugFlowPipe.vol_a.dynBal.medium.T_degC variable */) = DIVISION_SIM((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[171]] /* plugFlowPipe.port_a.h_outflow variable */)),-4184.0,"-4184.0",equationIndexes);
  threadData->lastEquationSolved = 823;
}

/*
equation index: 824
type: SIMPLE_ASSIGN
plugFlowPipe.vol_a.dynBal.medium.T = plugFlowPipe.vol_a.dynBal.medium.T_degC - -273.15
*/
void pump_v3_basicCold_t_eqFunction_824(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,824};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[188]] /* plugFlowPipe.vol_a.dynBal.medium.T variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[189]] /* plugFlowPipe.vol_a.dynBal.medium.T_degC variable */) - (-273.15);
  threadData->lastEquationSolved = 824;
}

/*
equation index: 825
type: ALGORITHM

  (plugFlowPipe1.del.port_a.h_outflow, plugFlowPipe1.del.port_b.h_outflow) := spatialDistribution(2, plugFlowPipe1.port_a.h_outflow, senTemIn_heat.port_b.h_outflow, plugFlowPipe1.del.x, plugFlowPipe1.v >= 0.0, {0.0, 1.0}, {plugFlowPipe1.del.h_ini_in, plugFlowPipe1.del.h_ini_out});
*/
void pump_v3_basicCold_t_eqFunction_825(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,825};
  modelica_real tmp11;
  modelica_boolean tmp12;
  modelica_real tmp13;
  modelica_real tmp14;
  tmp13 = 1.0;
  tmp14 = 0.0;
  relationhysteresis(data, &tmp12, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[238]] /* plugFlowPipe1.v variable */), 0.0, tmp13, tmp14, 10, GreaterEq, GreaterEqZC);
  tmp11 = spatialDistribution(data, threadData, 2 /* index */, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[229]] /* plugFlowPipe1.port_a.h_outflow variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[434]] /* senTemIn_heat.port_b.h_outflow variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5]] /* plugFlowPipe1.del.x STATE(1,plugFlowPipe1.v) */), tmp12 ,&(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[216]] /* plugFlowPipe1.del.port_b.h_outflow variable */));
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[215]] /* plugFlowPipe1.del.port_a.h_outflow variable */) = tmp11;
  threadData->lastEquationSolved = 825;
}

/*
equation index: 826
type: SIMPLE_ASSIGN
plugFlowPipe1.timDel.u = 5.1229151622319185 * pump.motSpe.y
*/
void pump_v3_basicCold_t_eqFunction_826(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,826};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[237]] /* plugFlowPipe1.timDel.u variable */) = (5.1229151622319185) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[17]] /* pump.motSpe.y STATE(1) */));
  threadData->lastEquationSolved = 826;
}

/*
equation index: 827
type: SIMPLE_ASSIGN
$DER.plugFlowPipe1.timDel.x = plugFlowPipe1.timDel.u
*/
void pump_v3_basicCold_t_eqFunction_827(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,827};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[27]] /* der(plugFlowPipe1.timDel.x) STATE_DER */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[237]] /* plugFlowPipe1.timDel.u variable */);
  threadData->lastEquationSolved = 827;
}

/*
equation index: 828
type: ALGORITHM

  (plugFlowPipe1.timDel.time_out_rev, plugFlowPipe1.timDel.time_out_des) := spatialDistribution(3, time, time, plugFlowPipe1.timDel.x, plugFlowPipe1.timDel.u >= 0.0, {0.0, 1.0}, {plugFlowPipe1.timDel.t0, plugFlowPipe1.timDel.t0 + plugFlowPipe1.timDel.t_out_start});
*/
void pump_v3_basicCold_t_eqFunction_828(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,828};
  modelica_real tmp15;
  modelica_boolean tmp16;
  modelica_real tmp17;
  modelica_real tmp18;
  tmp17 = 1.0;
  tmp18 = 0.0;
  relationhysteresis(data, &tmp16, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[237]] /* plugFlowPipe1.timDel.u variable */), 0.0, tmp17, tmp18, 8, GreaterEq, GreaterEqZC);
  tmp15 = spatialDistribution(data, threadData, 3 /* index */, data->localData[0]->timeValue, data->localData[0]->timeValue, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[6]] /* plugFlowPipe1.timDel.x STATE(1,plugFlowPipe1.timDel.u) */), tmp16 ,&(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[235]] /* plugFlowPipe1.timDel.time_out_des variable */));
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[236]] /* plugFlowPipe1.timDel.time_out_rev variable */) = tmp15;
  threadData->lastEquationSolved = 828;
}

/*
equation index: 829
type: SIMPLE_ASSIGN
plugFlowPipe1.timDel.tau = max(0.0, time - plugFlowPipe1.timDel.time_out_des)
*/
void pump_v3_basicCold_t_eqFunction_829(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,829};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[233]] /* plugFlowPipe1.timDel.tau variable */) = fmax(0.0,data->localData[0]->timeValue - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[235]] /* plugFlowPipe1.timDel.time_out_des variable */));
  threadData->lastEquationSolved = 829;
}

/*
equation index: 830
type: SIMPLE_ASSIGN
$cse18 = exp((-plugFlowPipe1.timDel.tau) / plugFlowPipe1.heaLos_b.tau_char)
*/
void pump_v3_basicCold_t_eqFunction_830(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,830};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[57]] /* $cse18 variable */) = exp(DIVISION_SIM((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[233]] /* plugFlowPipe1.timDel.tau variable */)),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[280]] /* plugFlowPipe1.heaLos_b.tau_char PARAM */),"plugFlowPipe1.heaLos_b.tau_char",equationIndexes));
  threadData->lastEquationSolved = 830;
}

/*
equation index: 831
type: SIMPLE_ASSIGN
plugFlowPipe1.timDel.tauRev = max(0.0, time - plugFlowPipe1.timDel.time_out_rev)
*/
void pump_v3_basicCold_t_eqFunction_831(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,831};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[234]] /* plugFlowPipe1.timDel.tauRev variable */) = fmax(0.0,data->localData[0]->timeValue - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[236]] /* plugFlowPipe1.timDel.time_out_rev variable */));
  threadData->lastEquationSolved = 831;
}

/*
equation index: 832
type: SIMPLE_ASSIGN
$cse14 = exp((-plugFlowPipe1.timDel.tauRev) / plugFlowPipe1.heaLos_a.tau_char)
*/
void pump_v3_basicCold_t_eqFunction_832(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,832};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[51]] /* $cse14 variable */) = exp(DIVISION_SIM((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[234]] /* plugFlowPipe1.timDel.tauRev variable */)),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[269]] /* plugFlowPipe1.heaLos_a.tau_char PARAM */),"plugFlowPipe1.heaLos_a.tau_char",equationIndexes));
  threadData->lastEquationSolved = 832;
}

/*
equation index: 833
type: SIMPLE_ASSIGN
senTemIn_heat.port_b.h_outflow = plugFlowPipe1.vol_b.dynBal.U / plugFlowPipe1.vol_b.dynBal.m
*/
void pump_v3_basicCold_t_eqFunction_833(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,833};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[434]] /* senTemIn_heat.port_b.h_outflow variable */) = DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[8]] /* plugFlowPipe1.vol_b.dynBal.U STATE(1) */),(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[257]] /* plugFlowPipe1.vol_b.dynBal.m DUMMY_STATE */),"plugFlowPipe1.vol_b.dynBal.m",equationIndexes);
  threadData->lastEquationSolved = 833;
}

/*
equation index: 834
type: SIMPLE_ASSIGN
plugFlowPipe1.vol_b.dynBal.ports_H_flow[2] = -semiLinear(pump.motSpe.y, senTemIn_heat.port_b.h_outflow, senTemIn_heat.port_b.h_outflow)
*/
void pump_v3_basicCold_t_eqFunction_834(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,834};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[267]] /* plugFlowPipe1.vol_b.dynBal.ports_H_flow[2] variable */) = (-semiLinear((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[17]] /* pump.motSpe.y STATE(1) */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[434]] /* senTemIn_heat.port_b.h_outflow variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[434]] /* senTemIn_heat.port_b.h_outflow variable */)));
  threadData->lastEquationSolved = 834;
}

/*
equation index: 835
type: SIMPLE_ASSIGN
plugFlowPipe1.vol_b.dynBal.medium.T_degC = (-senTemIn_heat.port_b.h_outflow) / (-4184.0)
*/
void pump_v3_basicCold_t_eqFunction_835(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,835};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[263]] /* plugFlowPipe1.vol_b.dynBal.medium.T_degC variable */) = DIVISION_SIM((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[434]] /* senTemIn_heat.port_b.h_outflow variable */)),-4184.0,"-4184.0",equationIndexes);
  threadData->lastEquationSolved = 835;
}

/*
equation index: 836
type: SIMPLE_ASSIGN
plugFlowPipe1.vol_b.dynBal.medium.T = plugFlowPipe1.vol_b.dynBal.medium.T_degC - -273.15
*/
void pump_v3_basicCold_t_eqFunction_836(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,836};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[262]] /* plugFlowPipe1.vol_b.dynBal.medium.T variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[263]] /* plugFlowPipe1.vol_b.dynBal.medium.T_degC variable */) - (-273.15);
  threadData->lastEquationSolved = 836;
}

/*
equation index: 837
type: SIMPLE_ASSIGN
plugFlowPipe1.port_a.h_outflow = plugFlowPipe1.vol_a.dynBal.U / plugFlowPipe1.vol_a.dynBal.m
*/
void pump_v3_basicCold_t_eqFunction_837(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,837};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[229]] /* plugFlowPipe1.port_a.h_outflow variable */) = DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[7]] /* plugFlowPipe1.vol_a.dynBal.U STATE(1) */),(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[241]] /* plugFlowPipe1.vol_a.dynBal.m DUMMY_STATE */),"plugFlowPipe1.vol_a.dynBal.m",equationIndexes);
  threadData->lastEquationSolved = 837;
}

/*
equation index: 838
type: SIMPLE_ASSIGN
plugFlowPipe1.vol_a.dynBal.medium.T_degC = (-plugFlowPipe1.port_a.h_outflow) / (-4184.0)
*/
void pump_v3_basicCold_t_eqFunction_838(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,838};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[247]] /* plugFlowPipe1.vol_a.dynBal.medium.T_degC variable */) = DIVISION_SIM((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[229]] /* plugFlowPipe1.port_a.h_outflow variable */)),-4184.0,"-4184.0",equationIndexes);
  threadData->lastEquationSolved = 838;
}

/*
equation index: 839
type: SIMPLE_ASSIGN
plugFlowPipe1.vol_a.dynBal.medium.T = plugFlowPipe1.vol_a.dynBal.medium.T_degC - -273.15
*/
void pump_v3_basicCold_t_eqFunction_839(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,839};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[246]] /* plugFlowPipe1.vol_a.dynBal.medium.T variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[247]] /* plugFlowPipe1.vol_a.dynBal.medium.T_degC variable */) - (-273.15);
  threadData->lastEquationSolved = 839;
}

/*
equation index: 840
type: SIMPLE_ASSIGN
plugFlowPipe1.vol_a.dynBal.ports_H_flow[1] = semiLinear(pump.motSpe.y, senTemOut_cold.port_b.h_outflow, plugFlowPipe1.port_a.h_outflow)
*/
void pump_v3_basicCold_t_eqFunction_840(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,840};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[251]] /* plugFlowPipe1.vol_a.dynBal.ports_H_flow[1] variable */) = semiLinear((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[17]] /* pump.motSpe.y STATE(1) */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[439]] /* senTemOut_cold.port_b.h_outflow variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[229]] /* plugFlowPipe1.port_a.h_outflow variable */));
  threadData->lastEquationSolved = 840;
}

/*
equation index: 841
type: SIMPLE_ASSIGN
senTemIn_heat.mNor_flow = 8.771929824561402 * pump.motSpe.y
*/
void pump_v3_basicCold_t_eqFunction_841(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,841};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[433]] /* senTemIn_heat.mNor_flow variable */) = (8.771929824561402) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[17]] /* pump.motSpe.y STATE(1) */));
  threadData->lastEquationSolved = 841;
}

/*
equation index: 842
type: SIMPLE_ASSIGN
senTemIn_heat.k = Modelica.Fluid.Utilities.regStep(pump.motSpe.y, senTemIn_heat.mNor_flow, -senTemIn_heat.mNor_flow, senTemIn_heat.m_flow_small)
*/
void pump_v3_basicCold_t_eqFunction_842(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,842};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[432]] /* senTemIn_heat.k variable */) = omc_Modelica_Fluid_Utilities_regStep(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[17]] /* pump.motSpe.y STATE(1) */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[433]] /* senTemIn_heat.mNor_flow variable */), (-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[433]] /* senTemIn_heat.mNor_flow variable */)), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[959]] /* senTemIn_heat.m_flow_small PARAM */));
  threadData->lastEquationSolved = 842;
}

/*
equation index: 843
type: ALGORITHM

  (plugFlowPipe_heat.del.port_a.h_outflow, plugFlowPipe_heat.del.port_b.h_outflow) := spatialDistribution(4, plugFlowPipe_heat.port_a.h_outflow, plugFlowPipe_heat.port_b.h_outflow, plugFlowPipe_heat.del.x / 1.5, plugFlowPipe_heat.v >= 0.0, {0.0, 1.0}, {plugFlowPipe_heat.del.h_ini_in, plugFlowPipe_heat.del.h_ini_out});
*/
void pump_v3_basicCold_t_eqFunction_843(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,843};
  modelica_real tmp19;
  modelica_boolean tmp20;
  modelica_real tmp21;
  modelica_real tmp22;
  tmp21 = 1.0;
  tmp22 = 0.0;
  relationhysteresis(data, &tmp20, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[355]] /* plugFlowPipe_heat.v variable */), 0.0, tmp21, tmp22, 6, GreaterEq, GreaterEqZC);
  tmp19 = spatialDistribution(data, threadData, 4 /* index */, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[345]] /* plugFlowPipe_heat.port_a.h_outflow variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[347]] /* plugFlowPipe_heat.port_b.h_outflow variable */), DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[13]] /* plugFlowPipe_heat.del.x STATE(1,plugFlowPipe_heat.v) */),1.5,"1.5",equationIndexes), tmp20 ,&(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[332]] /* plugFlowPipe_heat.del.port_b.h_outflow variable */));
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[331]] /* plugFlowPipe_heat.del.port_a.h_outflow variable */) = tmp19;
  threadData->lastEquationSolved = 843;
}

/*
equation index: 844
type: SIMPLE_ASSIGN
plugFlowPipe_heat.timDel.u = 3.415276774821279 * pump.motSpe.y
*/
void pump_v3_basicCold_t_eqFunction_844(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,844};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[354]] /* plugFlowPipe_heat.timDel.u variable */) = (3.415276774821279) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[17]] /* pump.motSpe.y STATE(1) */));
  threadData->lastEquationSolved = 844;
}

/*
equation index: 845
type: SIMPLE_ASSIGN
$DER.plugFlowPipe_heat.timDel.x = plugFlowPipe_heat.timDel.u
*/
void pump_v3_basicCold_t_eqFunction_845(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,845};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[35]] /* der(plugFlowPipe_heat.timDel.x) STATE_DER */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[354]] /* plugFlowPipe_heat.timDel.u variable */);
  threadData->lastEquationSolved = 845;
}

/*
equation index: 846
type: ALGORITHM

  (plugFlowPipe_heat.timDel.time_out_rev, plugFlowPipe_heat.timDel.time_out_des) := spatialDistribution(5, time, time, plugFlowPipe_heat.timDel.x, plugFlowPipe_heat.timDel.u >= 0.0, {0.0, 1.0}, {plugFlowPipe_heat.timDel.t0, plugFlowPipe_heat.timDel.t0 + plugFlowPipe_heat.timDel.t_out_start});
*/
void pump_v3_basicCold_t_eqFunction_846(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,846};
  modelica_real tmp23;
  modelica_boolean tmp24;
  modelica_real tmp25;
  modelica_real tmp26;
  tmp25 = 1.0;
  tmp26 = 0.0;
  relationhysteresis(data, &tmp24, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[354]] /* plugFlowPipe_heat.timDel.u variable */), 0.0, tmp25, tmp26, 4, GreaterEq, GreaterEqZC);
  tmp23 = spatialDistribution(data, threadData, 5 /* index */, data->localData[0]->timeValue, data->localData[0]->timeValue, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[14]] /* plugFlowPipe_heat.timDel.x STATE(1,plugFlowPipe_heat.timDel.u) */), tmp24 ,&(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[352]] /* plugFlowPipe_heat.timDel.time_out_des variable */));
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[353]] /* plugFlowPipe_heat.timDel.time_out_rev variable */) = tmp23;
  threadData->lastEquationSolved = 846;
}

/*
equation index: 847
type: SIMPLE_ASSIGN
plugFlowPipe_heat.timDel.tau = max(0.0, time - plugFlowPipe_heat.timDel.time_out_des)
*/
void pump_v3_basicCold_t_eqFunction_847(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,847};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[350]] /* plugFlowPipe_heat.timDel.tau variable */) = fmax(0.0,data->localData[0]->timeValue - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[352]] /* plugFlowPipe_heat.timDel.time_out_des variable */));
  threadData->lastEquationSolved = 847;
}

/*
equation index: 848
type: SIMPLE_ASSIGN
$cse27 = exp((-plugFlowPipe_heat.timDel.tau) / plugFlowPipe_heat.heaLos_b.tau_char)
*/
void pump_v3_basicCold_t_eqFunction_848(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,848};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[73]] /* $cse27 variable */) = exp(DIVISION_SIM((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[350]] /* plugFlowPipe_heat.timDel.tau variable */)),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[579]] /* plugFlowPipe_heat.heaLos_b.tau_char PARAM */),"plugFlowPipe_heat.heaLos_b.tau_char",equationIndexes));
  threadData->lastEquationSolved = 848;
}

/*
equation index: 849
type: SIMPLE_ASSIGN
plugFlowPipe_heat.timDel.tauRev = max(0.0, time - plugFlowPipe_heat.timDel.time_out_rev)
*/
void pump_v3_basicCold_t_eqFunction_849(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,849};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[351]] /* plugFlowPipe_heat.timDel.tauRev variable */) = fmax(0.0,data->localData[0]->timeValue - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[353]] /* plugFlowPipe_heat.timDel.time_out_rev variable */));
  threadData->lastEquationSolved = 849;
}

/*
equation index: 850
type: SIMPLE_ASSIGN
$cse23 = exp((-plugFlowPipe_heat.timDel.tauRev) / plugFlowPipe_heat.heaLos_a.tau_char)
*/
void pump_v3_basicCold_t_eqFunction_850(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,850};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[67]] /* $cse23 variable */) = exp(DIVISION_SIM((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[351]] /* plugFlowPipe_heat.timDel.tauRev variable */)),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[568]] /* plugFlowPipe_heat.heaLos_a.tau_char PARAM */),"plugFlowPipe_heat.heaLos_a.tau_char",equationIndexes));
  threadData->lastEquationSolved = 850;
}

/*
equation index: 851
type: SIMPLE_ASSIGN
plugFlowPipe_heat.port_b.h_outflow = plugFlowPipe_heat.vol_b.dynBal.U / plugFlowPipe_heat.vol_b.dynBal.m
*/
void pump_v3_basicCold_t_eqFunction_851(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,851};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[347]] /* plugFlowPipe_heat.port_b.h_outflow variable */) = DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[16]] /* plugFlowPipe_heat.vol_b.dynBal.U STATE(1) */),(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[374]] /* plugFlowPipe_heat.vol_b.dynBal.m DUMMY_STATE */),"plugFlowPipe_heat.vol_b.dynBal.m",equationIndexes);
  threadData->lastEquationSolved = 851;
}

/*
equation index: 852
type: SIMPLE_ASSIGN
plugFlowPipe_heat.vol_b.dynBal.ports_H_flow[2] = -semiLinear(pump.motSpe.y, plugFlowPipe_heat.port_b.h_outflow, plugFlowPipe_heat.port_b.h_outflow)
*/
void pump_v3_basicCold_t_eqFunction_852(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,852};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[384]] /* plugFlowPipe_heat.vol_b.dynBal.ports_H_flow[2] variable */) = (-semiLinear((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[17]] /* pump.motSpe.y STATE(1) */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[347]] /* plugFlowPipe_heat.port_b.h_outflow variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[347]] /* plugFlowPipe_heat.port_b.h_outflow variable */)));
  threadData->lastEquationSolved = 852;
}

/*
equation index: 853
type: SIMPLE_ASSIGN
plugFlowPipe_heat.vol_b.dynBal.medium.T_degC = (-plugFlowPipe_heat.port_b.h_outflow) / (-4184.0)
*/
void pump_v3_basicCold_t_eqFunction_853(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,853};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[380]] /* plugFlowPipe_heat.vol_b.dynBal.medium.T_degC variable */) = DIVISION_SIM((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[347]] /* plugFlowPipe_heat.port_b.h_outflow variable */)),-4184.0,"-4184.0",equationIndexes);
  threadData->lastEquationSolved = 853;
}

/*
equation index: 854
type: SIMPLE_ASSIGN
plugFlowPipe_heat.vol_b.dynBal.medium.T = plugFlowPipe_heat.vol_b.dynBal.medium.T_degC - -273.15
*/
void pump_v3_basicCold_t_eqFunction_854(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,854};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[379]] /* plugFlowPipe_heat.vol_b.dynBal.medium.T variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[380]] /* plugFlowPipe_heat.vol_b.dynBal.medium.T_degC variable */) - (-273.15);
  threadData->lastEquationSolved = 854;
}

/*
equation index: 855
type: SIMPLE_ASSIGN
plugFlowPipe_heat.port_a.h_outflow = plugFlowPipe_heat.vol_a.dynBal.U / plugFlowPipe_heat.vol_a.dynBal.m
*/
void pump_v3_basicCold_t_eqFunction_855(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,855};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[345]] /* plugFlowPipe_heat.port_a.h_outflow variable */) = DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[15]] /* plugFlowPipe_heat.vol_a.dynBal.U STATE(1) */),(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[358]] /* plugFlowPipe_heat.vol_a.dynBal.m DUMMY_STATE */),"plugFlowPipe_heat.vol_a.dynBal.m",equationIndexes);
  threadData->lastEquationSolved = 855;
}

/*
equation index: 856
type: SIMPLE_ASSIGN
plugFlowPipe_heat.vol_a.dynBal.medium.T_degC = (-plugFlowPipe_heat.port_a.h_outflow) / (-4184.0)
*/
void pump_v3_basicCold_t_eqFunction_856(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,856};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[364]] /* plugFlowPipe_heat.vol_a.dynBal.medium.T_degC variable */) = DIVISION_SIM((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[345]] /* plugFlowPipe_heat.port_a.h_outflow variable */)),-4184.0,"-4184.0",equationIndexes);
  threadData->lastEquationSolved = 856;
}

/*
equation index: 857
type: SIMPLE_ASSIGN
plugFlowPipe_heat.vol_a.dynBal.medium.T = plugFlowPipe_heat.vol_a.dynBal.medium.T_degC - -273.15
*/
void pump_v3_basicCold_t_eqFunction_857(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,857};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[363]] /* plugFlowPipe_heat.vol_a.dynBal.medium.T variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[364]] /* plugFlowPipe_heat.vol_a.dynBal.medium.T_degC variable */) - (-273.15);
  threadData->lastEquationSolved = 857;
}

/*
equation index: 858
type: SIMPLE_ASSIGN
plugFlowPipe_heat.vol_a.dynBal.ports_H_flow[1] = semiLinear(pump.motSpe.y, senTemIn_heat.port_b.h_outflow, plugFlowPipe_heat.port_a.h_outflow)
*/
void pump_v3_basicCold_t_eqFunction_858(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,858};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[368]] /* plugFlowPipe_heat.vol_a.dynBal.ports_H_flow[1] variable */) = semiLinear((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[17]] /* pump.motSpe.y STATE(1) */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[434]] /* senTemIn_heat.port_b.h_outflow variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[345]] /* plugFlowPipe_heat.port_a.h_outflow variable */));
  threadData->lastEquationSolved = 858;
}

/*
equation index: 859
type: SIMPLE_ASSIGN
senTemOut_heat.mNor_flow = 8.771929824561402 * pump.motSpe.y
*/
void pump_v3_basicCold_t_eqFunction_859(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,859};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[443]] /* senTemOut_heat.mNor_flow variable */) = (8.771929824561402) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[17]] /* pump.motSpe.y STATE(1) */));
  threadData->lastEquationSolved = 859;
}

/*
equation index: 860
type: SIMPLE_ASSIGN
senTemOut_heat.k = Modelica.Fluid.Utilities.regStep(pump.motSpe.y, senTemOut_heat.mNor_flow, -senTemOut_heat.mNor_flow, senTemOut_heat.m_flow_small)
*/
void pump_v3_basicCold_t_eqFunction_860(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,860};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[442]] /* senTemOut_heat.k variable */) = omc_Modelica_Fluid_Utilities_regStep(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[17]] /* pump.motSpe.y STATE(1) */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[443]] /* senTemOut_heat.mNor_flow variable */), (-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[443]] /* senTemOut_heat.mNor_flow variable */)), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[977]] /* senTemOut_heat.m_flow_small PARAM */));
  threadData->lastEquationSolved = 860;
}

/*
equation index: 861
type: SIMPLE_ASSIGN
convectiveResistor_wAir.dT = Water_Reserv.T - T_air_G_reserv.T
*/
void pump_v3_basicCold_t_eqFunction_861(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,861};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[155]] /* convectiveResistor_wAir.dT variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[0]] /* Water_Reserv.T STATE(1,Water_Reserv.der_T) */) - (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[35]] /* T_air_G_reserv.T PARAM */);
  threadData->lastEquationSolved = 861;
}

/*
equation index: 862
type: SIMPLE_ASSIGN
convectiveResistor_wAir.Q_flow = convectiveResistor_wAir.dT / R_wAir.k
*/
void pump_v3_basicCold_t_eqFunction_862(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,862};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[154]] /* convectiveResistor_wAir.Q_flow variable */) = DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[155]] /* convectiveResistor_wAir.dT variable */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[12]] /* R_wAir.k PARAM */),"R_wAir.k",equationIndexes);
  threadData->lastEquationSolved = 862;
}

/*
equation index: 863
type: ALGORITHM

  (plugFlowPipe2.del.port_a.h_outflow, plugFlowPipe2.del.port_b.h_outflow) := spatialDistribution(6, plugFlowPipe2.port_a.h_outflow, plugFlowPipe2.port_b.h_outflow, plugFlowPipe2.del.x, plugFlowPipe2.v >= 0.0, {0.0, 1.0}, {plugFlowPipe2.del.h_ini_in, plugFlowPipe2.del.h_ini_out});
*/
void pump_v3_basicCold_t_eqFunction_863(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,863};
  modelica_real tmp27;
  modelica_boolean tmp28;
  modelica_real tmp29;
  modelica_real tmp30;
  tmp29 = 1.0;
  tmp30 = 0.0;
  relationhysteresis(data, &tmp28, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[297]] /* plugFlowPipe2.v variable */), 0.0, tmp29, tmp30, 2, GreaterEq, GreaterEqZC);
  tmp27 = spatialDistribution(data, threadData, 6 /* index */, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[286]] /* plugFlowPipe2.port_a.h_outflow variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[288]] /* plugFlowPipe2.port_b.h_outflow variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[9]] /* plugFlowPipe2.del.x STATE(1,plugFlowPipe2.v) */), tmp28 ,&(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[273]] /* plugFlowPipe2.del.port_b.h_outflow variable */));
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[272]] /* plugFlowPipe2.del.port_a.h_outflow variable */) = tmp27;
  threadData->lastEquationSolved = 863;
}

/*
equation index: 864
type: ALGORITHM

  $cse35 := pump_v3_basicCold_t.plugFlowPipe2.heaLos_b.Medium.setState_phX(bou1.p, plugFlowPipe2.del.port_b.h_outflow, {});
*/
void pump_v3_basicCold_t_eqFunction_864(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,864};
  base_array_t tmp31;
  pump__v3__basicCold__t_plugFlowPipe2_heaLos__b_Medium_ThermodynamicState tmp32;
  simple_alloc_1d_base_array(&tmp31, 0, NULL);
  tmp32 = omc_pump__v3__basicCold__t_plugFlowPipe2_heaLos__b_Medium_setState__phX(threadData, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[50]] /* bou1.p PARAM */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[273]] /* plugFlowPipe2.del.port_b.h_outflow variable */), tmp31);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[87]] /* $cse35.p variable */) = tmp32._p;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[86]] /* $cse35.T variable */) = tmp32._T;
  ;
  threadData->lastEquationSolved = 864;
}

/*
equation index: 865
type: SIMPLE_ASSIGN
plugFlowPipe2.heaLos_b.T_a_inflow = pump_v3_basicCold_t.plugFlowPipe2.heaLos_b.Medium.temperature($cse35)
*/
void pump_v3_basicCold_t_eqFunction_865(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,865};
  pump__v3__basicCold__t_plugFlowPipe2_heaLos__b_Medium_ThermodynamicState tmp33;
  pump__v3__basicCold__t_plugFlowPipe2_heaLos__b_Medium_ThermodynamicState_wrap_vars(threadData,tmp33, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[87]] /* $cse35.p variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[86]] /* $cse35.T variable */));
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[280]] /* plugFlowPipe2.heaLos_b.T_a_inflow variable */) = omc_pump__v3__basicCold__t_plugFlowPipe2_heaLos__b_Medium_temperature(threadData, tmp33);
  threadData->lastEquationSolved = 865;
}

/*
equation index: 866
type: SIMPLE_ASSIGN
plugFlowPipe2.timDel.u = 5.1229151622319185 * pump.motSpe.y
*/
void pump_v3_basicCold_t_eqFunction_866(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,866};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[296]] /* plugFlowPipe2.timDel.u variable */) = (5.1229151622319185) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[17]] /* pump.motSpe.y STATE(1) */));
  threadData->lastEquationSolved = 866;
}

/*
equation index: 867
type: SIMPLE_ASSIGN
$DER.plugFlowPipe2.timDel.x = plugFlowPipe2.timDel.u
*/
void pump_v3_basicCold_t_eqFunction_867(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,867};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[31]] /* der(plugFlowPipe2.timDel.x) STATE_DER */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[296]] /* plugFlowPipe2.timDel.u variable */);
  threadData->lastEquationSolved = 867;
}

/*
equation index: 868
type: ALGORITHM

  (plugFlowPipe2.timDel.time_out_rev, plugFlowPipe2.timDel.time_out_des) := spatialDistribution(7, time, time, plugFlowPipe2.timDel.x, plugFlowPipe2.timDel.u >= 0.0, {0.0, 1.0}, {plugFlowPipe2.timDel.t0, plugFlowPipe2.timDel.t0 + plugFlowPipe2.timDel.t_out_start});
*/
void pump_v3_basicCold_t_eqFunction_868(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,868};
  modelica_real tmp34;
  modelica_boolean tmp35;
  modelica_real tmp36;
  modelica_real tmp37;
  tmp36 = 1.0;
  tmp37 = 0.0;
  relationhysteresis(data, &tmp35, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[296]] /* plugFlowPipe2.timDel.u variable */), 0.0, tmp36, tmp37, 0, GreaterEq, GreaterEqZC);
  tmp34 = spatialDistribution(data, threadData, 7 /* index */, data->localData[0]->timeValue, data->localData[0]->timeValue, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[10]] /* plugFlowPipe2.timDel.x STATE(1,plugFlowPipe2.timDel.u) */), tmp35 ,&(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[294]] /* plugFlowPipe2.timDel.time_out_des variable */));
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[295]] /* plugFlowPipe2.timDel.time_out_rev variable */) = tmp34;
  threadData->lastEquationSolved = 868;
}

/*
equation index: 869
type: SIMPLE_ASSIGN
plugFlowPipe2.timDel.tauRev = max(0.0, time - plugFlowPipe2.timDel.time_out_rev)
*/
void pump_v3_basicCold_t_eqFunction_869(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,869};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[293]] /* plugFlowPipe2.timDel.tauRev variable */) = fmax(0.0,data->localData[0]->timeValue - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[295]] /* plugFlowPipe2.timDel.time_out_rev variable */));
  threadData->lastEquationSolved = 869;
}

/*
equation index: 870
type: SIMPLE_ASSIGN
$cse32 = exp((-plugFlowPipe2.timDel.tauRev) / plugFlowPipe2.heaLos_a.tau_char)
*/
void pump_v3_basicCold_t_eqFunction_870(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,870};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[82]] /* $cse32 variable */) = exp(DIVISION_SIM((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[293]] /* plugFlowPipe2.timDel.tauRev variable */)),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[414]] /* plugFlowPipe2.heaLos_a.tau_char PARAM */),"plugFlowPipe2.heaLos_a.tau_char",equationIndexes));
  threadData->lastEquationSolved = 870;
}

/*
equation index: 871
type: SIMPLE_ASSIGN
plugFlowPipe2.timDel.tau = max(0.0, time - plugFlowPipe2.timDel.time_out_des)
*/
void pump_v3_basicCold_t_eqFunction_871(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,871};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[292]] /* plugFlowPipe2.timDel.tau variable */) = fmax(0.0,data->localData[0]->timeValue - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[294]] /* plugFlowPipe2.timDel.time_out_des variable */));
  threadData->lastEquationSolved = 871;
}

/*
equation index: 872
type: SIMPLE_ASSIGN
$cse36 = exp((-plugFlowPipe2.timDel.tau) / plugFlowPipe2.heaLos_b.tau_char)
*/
void pump_v3_basicCold_t_eqFunction_872(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,872};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[88]] /* $cse36 variable */) = exp(DIVISION_SIM((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[292]] /* plugFlowPipe2.timDel.tau variable */)),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[427]] /* plugFlowPipe2.heaLos_b.tau_char PARAM */),"plugFlowPipe2.heaLos_b.tau_char",equationIndexes));
  threadData->lastEquationSolved = 872;
}

/*
equation index: 873
type: SIMPLE_ASSIGN
plugFlowPipe2.port_b.h_outflow = plugFlowPipe2.vol_b.dynBal.U / plugFlowPipe2.vol_b.dynBal.m
*/
void pump_v3_basicCold_t_eqFunction_873(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,873};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[288]] /* plugFlowPipe2.port_b.h_outflow variable */) = DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[12]] /* plugFlowPipe2.vol_b.dynBal.U STATE(1) */),(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[316]] /* plugFlowPipe2.vol_b.dynBal.m DUMMY_STATE */),"plugFlowPipe2.vol_b.dynBal.m",equationIndexes);
  threadData->lastEquationSolved = 873;
}

/*
equation index: 874
type: SIMPLE_ASSIGN
plugFlowPipe2.vol_b.dynBal.ports_H_flow[2] = -semiLinear(pump.motSpe.y, plugFlowPipe2.port_b.h_outflow, plugFlowPipe2.port_b.h_outflow)
*/
void pump_v3_basicCold_t_eqFunction_874(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,874};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[327]] /* plugFlowPipe2.vol_b.dynBal.ports_H_flow[2] variable */) = (-semiLinear((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[17]] /* pump.motSpe.y STATE(1) */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[288]] /* plugFlowPipe2.port_b.h_outflow variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[288]] /* plugFlowPipe2.port_b.h_outflow variable */)));
  threadData->lastEquationSolved = 874;
}

/*
equation index: 875
type: SIMPLE_ASSIGN
plugFlowPipe2.vol_b.T = pump_v3_basicCold_t.plugFlowPipe2.vol_b.Medium.temperature_phX(bou1.p, plugFlowPipe2.port_b.h_outflow, {1.0})
*/
void pump_v3_basicCold_t_eqFunction_875(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,875};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[314]] /* plugFlowPipe2.vol_b.T variable */) = omc_pump__v3__basicCold__t_plugFlowPipe2_vol__b_Medium_temperature__phX(threadData, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[50]] /* bou1.p PARAM */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[288]] /* plugFlowPipe2.port_b.h_outflow variable */), _OMC_LIT47);
  threadData->lastEquationSolved = 875;
}

/*
equation index: 876
type: ALGORITHM

  $cse58 := pump_v3_basicCold_t.plugFlowPipe2.del.Medium.setState_phX(bou1.p, plugFlowPipe2.port_b.h_outflow, {});
*/
void pump_v3_basicCold_t_eqFunction_876(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,876};
  base_array_t tmp38;
  pump__v3__basicCold__t_plugFlowPipe2_del_Medium_ThermodynamicState tmp39;
  simple_alloc_1d_base_array(&tmp38, 0, NULL);
  tmp39 = omc_pump__v3__basicCold__t_plugFlowPipe2_del_Medium_setState__phX(threadData, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[50]] /* bou1.p PARAM */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[288]] /* plugFlowPipe2.port_b.h_outflow variable */), tmp38);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[122]] /* $cse58.p variable */) = tmp39._p;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[121]] /* $cse58.T variable */) = tmp39._T;
  ;
  threadData->lastEquationSolved = 876;
}

/*
equation index: 877
type: SIMPLE_ASSIGN
$cse57 = pump_v3_basicCold_t.plugFlowPipe2.del.Medium.density($cse58)
*/
void pump_v3_basicCold_t_eqFunction_877(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,877};
  pump__v3__basicCold__t_plugFlowPipe2_del_Medium_ThermodynamicState tmp40;
  pump__v3__basicCold__t_plugFlowPipe2_del_Medium_ThermodynamicState_wrap_vars(threadData,tmp40, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[122]] /* $cse58.p variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[121]] /* $cse58.T variable */));
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[120]] /* $cse57 variable */) = omc_pump__v3__basicCold__t_plugFlowPipe2_del_Medium_density(threadData, tmp40);
  threadData->lastEquationSolved = 877;
}

/*
equation index: 878
type: SIMPLE_ASSIGN
plugFlowPipe2.vol_b.dynBal.medium.T_degC = (-plugFlowPipe2.port_b.h_outflow) / (-4184.0)
*/
void pump_v3_basicCold_t_eqFunction_878(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,878};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[322]] /* plugFlowPipe2.vol_b.dynBal.medium.T_degC variable */) = DIVISION_SIM((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[288]] /* plugFlowPipe2.port_b.h_outflow variable */)),-4184.0,"-4184.0",equationIndexes);
  threadData->lastEquationSolved = 878;
}

/*
equation index: 879
type: SIMPLE_ASSIGN
plugFlowPipe2.vol_b.dynBal.medium.T = plugFlowPipe2.vol_b.dynBal.medium.T_degC - -273.15
*/
void pump_v3_basicCold_t_eqFunction_879(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,879};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[321]] /* plugFlowPipe2.vol_b.dynBal.medium.T variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[322]] /* plugFlowPipe2.vol_b.dynBal.medium.T_degC variable */) - (-273.15);
  threadData->lastEquationSolved = 879;
}

/*
equation index: 880
type: SIMPLE_ASSIGN
plugFlowPipe2.port_a.h_outflow = plugFlowPipe2.vol_a.dynBal.U / plugFlowPipe2.vol_a.dynBal.m
*/
void pump_v3_basicCold_t_eqFunction_880(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,880};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[286]] /* plugFlowPipe2.port_a.h_outflow variable */) = DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[11]] /* plugFlowPipe2.vol_a.dynBal.U STATE(1) */),(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[300]] /* plugFlowPipe2.vol_a.dynBal.m DUMMY_STATE */),"plugFlowPipe2.vol_a.dynBal.m",equationIndexes);
  threadData->lastEquationSolved = 880;
}

/*
equation index: 881
type: ALGORITHM

  $cse56 := pump_v3_basicCold_t.plugFlowPipe2.del.Medium.setState_phX(bou1.p, plugFlowPipe2.port_a.h_outflow, {});
*/
void pump_v3_basicCold_t_eqFunction_881(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,881};
  base_array_t tmp41;
  pump__v3__basicCold__t_plugFlowPipe2_del_Medium_ThermodynamicState tmp42;
  simple_alloc_1d_base_array(&tmp41, 0, NULL);
  tmp42 = omc_pump__v3__basicCold__t_plugFlowPipe2_del_Medium_setState__phX(threadData, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[50]] /* bou1.p PARAM */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[286]] /* plugFlowPipe2.port_a.h_outflow variable */), tmp41);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[119]] /* $cse56.p variable */) = tmp42._p;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[118]] /* $cse56.T variable */) = tmp42._T;
  ;
  threadData->lastEquationSolved = 881;
}

/*
equation index: 882
type: SIMPLE_ASSIGN
$cse55 = pump_v3_basicCold_t.plugFlowPipe2.del.Medium.density($cse56)
*/
void pump_v3_basicCold_t_eqFunction_882(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,882};
  pump__v3__basicCold__t_plugFlowPipe2_del_Medium_ThermodynamicState tmp43;
  pump__v3__basicCold__t_plugFlowPipe2_del_Medium_ThermodynamicState_wrap_vars(threadData,tmp43, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[119]] /* $cse56.p variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[118]] /* $cse56.T variable */));
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[117]] /* $cse55 variable */) = omc_pump__v3__basicCold__t_plugFlowPipe2_del_Medium_density(threadData, tmp43);
  threadData->lastEquationSolved = 882;
}

/*
equation index: 883
type: SIMPLE_ASSIGN
$cse54 = Modelica.Fluid.Utilities.regStep(pump.motSpe.y, $cse55, $cse57, plugFlowPipe2.del.m_flow_small)
*/
void pump_v3_basicCold_t_eqFunction_883(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,883};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[116]] /* $cse54 variable */) = omc_Modelica_Fluid_Utilities_regStep(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[17]] /* pump.motSpe.y STATE(1) */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[117]] /* $cse55 variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[120]] /* $cse57 variable */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[399]] /* plugFlowPipe2.del.m_flow_small PARAM */));
  threadData->lastEquationSolved = 883;
}

/*
equation index: 884
type: SIMPLE_ASSIGN
plugFlowPipe2.del.V_flow = pump.motSpe.y / $cse54
*/
void pump_v3_basicCold_t_eqFunction_884(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,884};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[271]] /* plugFlowPipe2.del.V_flow variable */) = DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[17]] /* pump.motSpe.y STATE(1) */),(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[116]] /* $cse54 variable */),"$cse54",equationIndexes);
  threadData->lastEquationSolved = 884;
}

/*
equation index: 885
type: SIMPLE_ASSIGN
plugFlowPipe2.v = 5100.302614705827 * plugFlowPipe2.del.V_flow
*/
void pump_v3_basicCold_t_eqFunction_885(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,885};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[297]] /* plugFlowPipe2.v variable */) = (5100.302614705827) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[271]] /* plugFlowPipe2.del.V_flow variable */));
  threadData->lastEquationSolved = 885;
}

/*
equation index: 886
type: SIMPLE_ASSIGN
$DER.plugFlowPipe2.del.x = plugFlowPipe2.v
*/
void pump_v3_basicCold_t_eqFunction_886(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,886};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[30]] /* der(plugFlowPipe2.del.x) STATE_DER */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[297]] /* plugFlowPipe2.v variable */);
  threadData->lastEquationSolved = 886;
}

/*
equation index: 887
type: SIMPLE_ASSIGN
plugFlowPipe2.vol_a.dynBal.medium.T_degC = (-plugFlowPipe2.port_a.h_outflow) / (-4184.0)
*/
void pump_v3_basicCold_t_eqFunction_887(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,887};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[306]] /* plugFlowPipe2.vol_a.dynBal.medium.T_degC variable */) = DIVISION_SIM((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[286]] /* plugFlowPipe2.port_a.h_outflow variable */)),-4184.0,"-4184.0",equationIndexes);
  threadData->lastEquationSolved = 887;
}

/*
equation index: 888
type: SIMPLE_ASSIGN
plugFlowPipe2.vol_a.dynBal.medium.T = plugFlowPipe2.vol_a.dynBal.medium.T_degC - -273.15
*/
void pump_v3_basicCold_t_eqFunction_888(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,888};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[305]] /* plugFlowPipe2.vol_a.dynBal.medium.T variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[306]] /* plugFlowPipe2.vol_a.dynBal.medium.T_degC variable */) - (-273.15);
  threadData->lastEquationSolved = 888;
}

/*
equation index: 889
type: SIMPLE_ASSIGN
pump.port_b.h_outflow = pump.vol.dynBal.U / pump.vol.dynBal.m
*/
void pump_v3_basicCold_t_eqFunction_889(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,889};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[404]] /* pump.port_b.h_outflow variable */) = DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[18]] /* pump.vol.dynBal.U STATE(1) */),(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[415]] /* pump.vol.dynBal.m DUMMY_STATE */),"pump.vol.dynBal.m",equationIndexes);
  threadData->lastEquationSolved = 889;
}

/*
equation index: 890
type: SIMPLE_ASSIGN
pump.vol.dynBal.ports_H_flow[2] = -semiLinear(pump.motSpe.y, pump.port_b.h_outflow, pump.port_b.h_outflow)
*/
void pump_v3_basicCold_t_eqFunction_890(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,890};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[426]] /* pump.vol.dynBal.ports_H_flow[2] variable */) = (-semiLinear((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[17]] /* pump.motSpe.y STATE(1) */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[404]] /* pump.port_b.h_outflow variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[404]] /* pump.port_b.h_outflow variable */)));
  threadData->lastEquationSolved = 890;
}

/*
equation index: 891
type: SIMPLE_ASSIGN
pump.vol.dynBal.medium.T_degC = (-pump.port_b.h_outflow) / (-4184.0)
*/
void pump_v3_basicCold_t_eqFunction_891(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,891};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[421]] /* pump.vol.dynBal.medium.T_degC variable */) = DIVISION_SIM((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[404]] /* pump.port_b.h_outflow variable */)),-4184.0,"-4184.0",equationIndexes);
  threadData->lastEquationSolved = 891;
}

/*
equation index: 892
type: SIMPLE_ASSIGN
pump.vol.dynBal.medium.T = pump.vol.dynBal.medium.T_degC - -273.15
*/
void pump_v3_basicCold_t_eqFunction_892(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,892};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[420]] /* pump.vol.dynBal.medium.T variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[421]] /* pump.vol.dynBal.medium.T_degC variable */) - (-273.15);
  threadData->lastEquationSolved = 892;
}

/*
equation index: 893
type: SIMPLE_ASSIGN
plugFlowPipe2.vol_a.dynBal.ports_H_flow[1] = semiLinear(pump.motSpe.y, pump.port_b.h_outflow, plugFlowPipe2.port_a.h_outflow)
*/
void pump_v3_basicCold_t_eqFunction_893(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,893};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[310]] /* plugFlowPipe2.vol_a.dynBal.ports_H_flow[1] variable */) = semiLinear((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[17]] /* pump.motSpe.y STATE(1) */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[404]] /* pump.port_b.h_outflow variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[286]] /* plugFlowPipe2.port_a.h_outflow variable */));
  threadData->lastEquationSolved = 893;
}

/*
equation index: 894
type: SIMPLE_ASSIGN
pump.vol.dynBal.ports_H_flow[1] = semiLinear(pump.motSpe.y, plugFlowPipe_heat.port_b.h_outflow, pump.port_b.h_outflow)
*/
void pump_v3_basicCold_t_eqFunction_894(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,894};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[425]] /* pump.vol.dynBal.ports_H_flow[1] variable */) = semiLinear((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[17]] /* pump.motSpe.y STATE(1) */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[347]] /* plugFlowPipe_heat.port_b.h_outflow variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[404]] /* pump.port_b.h_outflow variable */));
  threadData->lastEquationSolved = 894;
}

/*
equation index: 895
type: SIMPLE_ASSIGN
pump.vol.dynBal.Hb_flow = pump.vol.dynBal.ports_H_flow[1] + pump.vol.dynBal.ports_H_flow[2]
*/
void pump_v3_basicCold_t_eqFunction_895(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,895};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[414]] /* pump.vol.dynBal.Hb_flow variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[425]] /* pump.vol.dynBal.ports_H_flow[1] variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[426]] /* pump.vol.dynBal.ports_H_flow[2] variable */);
  threadData->lastEquationSolved = 895;
}

/*
equation index: 896
type: SIMPLE_ASSIGN
pump.VMachine_flow = 0.0010044335697769957 * pump.motSpe.y
*/
void pump_v3_basicCold_t_eqFunction_896(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,896};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[389]] /* pump.VMachine_flow variable */) = (0.0010044335697769957) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[17]] /* pump.motSpe.y STATE(1) */));
  threadData->lastEquationSolved = 896;
}

/*
equation index: 897
type: SIMPLE_ASSIGN
pump.eff.r_V = 4366.605263157895 * pump.VMachine_flow
*/
void pump_v3_basicCold_t_eqFunction_897(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,897};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[396]] /* pump.eff.r_V variable */) = (4366.605263157895) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[389]] /* pump.VMachine_flow variable */));
  threadData->lastEquationSolved = 897;
}

/*
equation index: 898
type: SIMPLE_ASSIGN
plugFlowPipe.res.v = 5.1229151622319185 * pump.motSpe.y
*/
void pump_v3_basicCold_t_eqFunction_898(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,898};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[174]] /* plugFlowPipe.res.v variable */) = (5.1229151622319185) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[17]] /* pump.motSpe.y STATE(1) */));
  threadData->lastEquationSolved = 898;
}

/*
equation index: 899
type: SIMPLE_ASSIGN
plugFlowPipe1.res.v = 5.1229151622319185 * pump.motSpe.y
*/
void pump_v3_basicCold_t_eqFunction_899(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,899};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[232]] /* plugFlowPipe1.res.v variable */) = (5.1229151622319185) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[17]] /* pump.motSpe.y STATE(1) */));
  threadData->lastEquationSolved = 899;
}

/*
equation index: 900
type: SIMPLE_ASSIGN
plugFlowPipe_heat.res.v = 5.1229151622319185 * pump.motSpe.y
*/
void pump_v3_basicCold_t_eqFunction_900(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,900};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[349]] /* plugFlowPipe_heat.res.v variable */) = (5.1229151622319185) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[17]] /* pump.motSpe.y STATE(1) */));
  threadData->lastEquationSolved = 900;
}

/*
equation index: 901
type: SIMPLE_ASSIGN
plugFlowPipe2.res.v = 5.1229151622319185 * pump.motSpe.y
*/
void pump_v3_basicCold_t_eqFunction_901(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,901};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[291]] /* plugFlowPipe2.res.v variable */) = (5.1229151622319185) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[17]] /* pump.motSpe.y STATE(1) */));
  threadData->lastEquationSolved = 901;
}

/*
equation index: 902
type: SIMPLE_ASSIGN
pump.motSpe.val = (0.114 - pump.motSpe.y) / pump.motSpe.Td
*/
void pump_v3_basicCold_t_eqFunction_902(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,902};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[402]] /* pump.motSpe.val variable */) = DIVISION_SIM(0.114 - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[17]] /* pump.motSpe.y STATE(1) */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[857]] /* pump.motSpe.Td PARAM */),"pump.motSpe.Td",equationIndexes);
  threadData->lastEquationSolved = 902;
}

/*
equation index: 903
type: SIMPLE_ASSIGN
$DER.pump.motSpe.y = smooth(1, if noEvent(pump.motSpe.val < pump.motSpe.Falling) then pump.motSpe.Falling else if noEvent(pump.motSpe.val > pump.motSpe.Rising) then pump.motSpe.Rising else pump.motSpe.val)
*/
void pump_v3_basicCold_t_eqFunction_903(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,903};
  modelica_boolean tmp44;
  modelica_boolean tmp45;
  modelica_boolean tmp46;
  modelica_real tmp47;
  tmp44 = Less((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[402]] /* pump.motSpe.val variable */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[855]] /* pump.motSpe.Falling PARAM */));
  tmp46 = (modelica_boolean)tmp44;
  if(tmp46)
  {
    tmp47 = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[855]] /* pump.motSpe.Falling PARAM */);
  }
  else
  {
    tmp45 = Greater((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[402]] /* pump.motSpe.val variable */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[856]] /* pump.motSpe.Rising PARAM */));
    tmp47 = (tmp45?(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[856]] /* pump.motSpe.Rising PARAM */):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[402]] /* pump.motSpe.val variable */));
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[38]] /* der(pump.motSpe.y) STATE_DER */) = tmp47;
  threadData->lastEquationSolved = 903;
}

/*
equation index: 904
type: ALGORITHM

  $cse43 := pump_v3_basicCold_t.bou1.Medium.setState_pTX(bou1.p, bou1.T, {bou1.X[1]});
*/
void pump_v3_basicCold_t_eqFunction_904(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,904};
  real_array tmp48;
  pump__v3__basicCold__t_bou1_Medium_ThermodynamicState tmp49;
  array_alloc_scalar_real_array(&tmp48, 1, (modelica_real)(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[49]] /* bou1.X[1] PARAM */));
  tmp49 = omc_pump__v3__basicCold__t_bou1_Medium_setState__pTX(threadData, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[50]] /* bou1.p PARAM */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[47]] /* bou1.T PARAM */), tmp48);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[99]] /* $cse43.p variable */) = tmp49._p;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[98]] /* $cse43.T variable */) = tmp49._T;
  ;
  threadData->lastEquationSolved = 904;
}

/*
equation index: 905
type: SIMPLE_ASSIGN
bou1.ports[1].h_outflow = pump_v3_basicCold_t.bou1.Medium.specificEnthalpy($cse43)
*/
void pump_v3_basicCold_t_eqFunction_905(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,905};
  pump__v3__basicCold__t_bou1_Medium_ThermodynamicState tmp50;
  pump__v3__basicCold__t_bou1_Medium_ThermodynamicState_wrap_vars(threadData,tmp50, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[99]] /* $cse43.p variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[98]] /* $cse43.T variable */));
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[148]] /* bou1.ports[1].h_outflow variable */) = omc_pump__v3__basicCold__t_bou1_Medium_specificEnthalpy(threadData, tmp50);
  threadData->lastEquationSolved = 905;
}

/*
equation index: 906
type: SIMPLE_ASSIGN
plugFlowPipe_heat.dp = IDEAS.Fluid.BaseClasses.FlowModels.basicFlowFunction_m_flow(pump.motSpe.y, 0.004853279864824038, 0.04963716392671873)
*/
void pump_v3_basicCold_t_eqFunction_906(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,906};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[333]] /* plugFlowPipe_heat.dp variable */) = omc_IDEAS_Fluid_BaseClasses_FlowModels_basicFlowFunction__m__flow(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[17]] /* pump.motSpe.y STATE(1) */), 0.004853279864824038, 0.04963716392671873);
  threadData->lastEquationSolved = 906;
}

/*
equation index: 907
type: SIMPLE_ASSIGN
$cse11 = max(pump.motSpe.y, 1e-7)
*/
void pump_v3_basicCold_t_eqFunction_907(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,907};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[46]] /* $cse11 variable */) = fmax((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[17]] /* pump.motSpe.y STATE(1) */),1e-7);
  threadData->lastEquationSolved = 907;
}

/*
equation index: 908
type: SIMPLE_ASSIGN
senMasFlo.port_a.h_outflow = (1e-7 * bou1.ports[1].h_outflow + $cse11 * plugFlowPipe2.port_b.h_outflow) / (1e-7 + $cse11)
*/
void pump_v3_basicCold_t_eqFunction_908(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,908};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[429]] /* senMasFlo.port_a.h_outflow variable */) = DIVISION_SIM((1e-7) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[148]] /* bou1.ports[1].h_outflow variable */)) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[46]] /* $cse11 variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[288]] /* plugFlowPipe2.port_b.h_outflow variable */)),1e-7 + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[46]] /* $cse11 variable */),"1e-7 + $cse11",equationIndexes);
  threadData->lastEquationSolved = 908;
}

/*
equation index: 909
type: ALGORITHM

  $cse9 := pump_v3_basicCold_t.SenTempIn_cold.Medium.setState_phX(bou1.p, senMasFlo.port_a.h_outflow, {});
*/
void pump_v3_basicCold_t_eqFunction_909(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,909};
  base_array_t tmp51;
  pump__v3__basicCold__t_SenTempIn__cold_Medium_ThermodynamicState tmp52;
  simple_alloc_1d_base_array(&tmp51, 0, NULL);
  tmp52 = omc_pump__v3__basicCold__t_SenTempIn__cold_Medium_setState__phX(threadData, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[50]] /* bou1.p PARAM */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[429]] /* senMasFlo.port_a.h_outflow variable */), tmp51);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[135]] /* $cse9.p variable */) = tmp52._p;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[134]] /* $cse9.T variable */) = tmp52._T;
  ;
  threadData->lastEquationSolved = 909;
}

/*
equation index: 910
type: SIMPLE_ASSIGN
SenTempIn_cold.T_b_inflow = pump_v3_basicCold_t.SenTempIn_cold.Medium.temperature($cse9)
*/
void pump_v3_basicCold_t_eqFunction_910(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,910};
  pump__v3__basicCold__t_SenTempIn__cold_Medium_ThermodynamicState tmp53;
  pump__v3__basicCold__t_SenTempIn__cold_Medium_ThermodynamicState_wrap_vars(threadData,tmp53, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[135]] /* $cse9.p variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[134]] /* $cse9.T variable */));
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[141]] /* SenTempIn_cold.T_b_inflow variable */) = omc_pump__v3__basicCold__t_SenTempIn__cold_Medium_temperature(threadData, tmp53);
  threadData->lastEquationSolved = 910;
}

/*
equation index: 911
type: SIMPLE_ASSIGN
SenTempIn_cold.T = Modelica.Fluid.Utilities.regStep(pump.motSpe.y, SenTempIn_cold.T_b_inflow, SenTempIn_cold.T_b_inflow, SenTempIn_cold.m_flow_small)
*/
void pump_v3_basicCold_t_eqFunction_911(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,911};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[140]] /* SenTempIn_cold.T variable */) = omc_Modelica_Fluid_Utilities_regStep(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[17]] /* pump.motSpe.y STATE(1) */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[141]] /* SenTempIn_cold.T_b_inflow variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[141]] /* SenTempIn_cold.T_b_inflow variable */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[27]] /* SenTempIn_cold.m_flow_small PARAM */));
  threadData->lastEquationSolved = 911;
}

/*
equation index: 912
type: SIMPLE_ASSIGN
plugFlowPipe.vol_a.dynBal.ports_H_flow[1] = semiLinear(pump.motSpe.y, senMasFlo.port_a.h_outflow, plugFlowPipe.port_a.h_outflow)
*/
void pump_v3_basicCold_t_eqFunction_912(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,912};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[193]] /* plugFlowPipe.vol_a.dynBal.ports_H_flow[1] variable */) = semiLinear((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[17]] /* pump.motSpe.y STATE(1) */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[429]] /* senMasFlo.port_a.h_outflow variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[171]] /* plugFlowPipe.port_a.h_outflow variable */));
  threadData->lastEquationSolved = 912;
}

/*
equation index: 913
type: SIMPLE_ASSIGN
plugFlowPipe1.dp = IDEAS.Fluid.BaseClasses.FlowModels.basicFlowFunction_m_flow(pump.motSpe.y, 0.005944029623871306, 0.04963716392671873)
*/
void pump_v3_basicCold_t_eqFunction_913(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,913};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[217]] /* plugFlowPipe1.dp variable */) = omc_IDEAS_Fluid_BaseClasses_FlowModels_basicFlowFunction__m__flow(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[17]] /* pump.motSpe.y STATE(1) */), 0.005944029623871306, 0.04963716392671873);
  threadData->lastEquationSolved = 913;
}

/*
equation index: 914
type: SIMPLE_ASSIGN
plugFlowPipe2.port_a.p = bou1.p + plugFlowPipe1.dp
*/
void pump_v3_basicCold_t_eqFunction_914(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,914};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[287]] /* plugFlowPipe2.port_a.p variable */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[50]] /* bou1.p PARAM */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[217]] /* plugFlowPipe1.dp variable */);
  threadData->lastEquationSolved = 914;
}

/*
equation index: 915
type: SIMPLE_ASSIGN
plugFlowPipe2.vol_a.dynBal.medium.p_bar = 1e-5 * plugFlowPipe2.port_a.p
*/
void pump_v3_basicCold_t_eqFunction_915(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,915};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[309]] /* plugFlowPipe2.vol_a.dynBal.medium.p_bar variable */) = (1e-5) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[287]] /* plugFlowPipe2.port_a.p variable */));
  threadData->lastEquationSolved = 915;
}

/*
equation index: 916
type: SIMPLE_ASSIGN
plugFlowPipe2.dp = plugFlowPipe2.port_a.p - bou1.p
*/
void pump_v3_basicCold_t_eqFunction_916(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,916};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[274]] /* plugFlowPipe2.dp variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[287]] /* plugFlowPipe2.port_a.p variable */) - (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[50]] /* bou1.p PARAM */);
  threadData->lastEquationSolved = 916;
}

/*
equation index: 917
type: ALGORITHM

  $cse63 := pump_v3_basicCold_t.pump.preSou.Medium.setState_phX(plugFlowPipe2.port_a.p, pump.port_b.h_outflow, {});
*/
void pump_v3_basicCold_t_eqFunction_917(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,917};
  base_array_t tmp54;
  pump__v3__basicCold__t_pump_preSou_Medium_ThermodynamicState tmp55;
  simple_alloc_1d_base_array(&tmp54, 0, NULL);
  tmp55 = omc_pump__v3__basicCold__t_pump_preSou_Medium_setState__phX(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[287]] /* plugFlowPipe2.port_a.p variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[404]] /* pump.port_b.h_outflow variable */), tmp54);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[131]] /* $cse63.p variable */) = tmp55._p;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[130]] /* $cse63.T variable */) = tmp55._T;
  ;
  threadData->lastEquationSolved = 917;
}

/*
equation index: 918
type: SIMPLE_ASSIGN
$cse62 = pump_v3_basicCold_t.pump.preSou.Medium.density($cse63)
*/
void pump_v3_basicCold_t_eqFunction_918(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,918};
  pump__v3__basicCold__t_pump_preSou_Medium_ThermodynamicState tmp56;
  pump__v3__basicCold__t_pump_preSou_Medium_ThermodynamicState_wrap_vars(threadData,tmp56, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[131]] /* $cse63.p variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[130]] /* $cse63.T variable */));
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[129]] /* $cse62 variable */) = omc_pump__v3__basicCold__t_pump_preSou_Medium_density(threadData, tmp56);
  threadData->lastEquationSolved = 918;
}

/*
equation index: 919
type: ALGORITHM

  $cse29 := pump_v3_basicCold_t.senTemOut_heat.Medium.setState_phX(plugFlowPipe2.port_a.p, pump.port_b.h_outflow, {});
*/
void pump_v3_basicCold_t_eqFunction_919(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,919};
  base_array_t tmp57;
  pump__v3__basicCold__t_senTemOut__heat_Medium_ThermodynamicState tmp58;
  simple_alloc_1d_base_array(&tmp57, 0, NULL);
  tmp58 = omc_pump__v3__basicCold__t_senTemOut__heat_Medium_setState__phX(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[287]] /* plugFlowPipe2.port_a.p variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[404]] /* pump.port_b.h_outflow variable */), tmp57);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[76]] /* $cse29.p variable */) = tmp58._p;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[75]] /* $cse29.T variable */) = tmp58._T;
  ;
  threadData->lastEquationSolved = 919;
}

/*
equation index: 920
type: SIMPLE_ASSIGN
senTemOut_heat.T_b_inflow = pump_v3_basicCold_t.senTemOut_heat.Medium.temperature($cse29)
*/
void pump_v3_basicCold_t_eqFunction_920(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,920};
  pump__v3__basicCold__t_senTemOut__heat_Medium_ThermodynamicState tmp59;
  pump__v3__basicCold__t_senTemOut__heat_Medium_ThermodynamicState_wrap_vars(threadData,tmp59, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[76]] /* $cse29.p variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[75]] /* $cse29.T variable */));
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[441]] /* senTemOut_heat.T_b_inflow variable */) = omc_pump__v3__basicCold__t_senTemOut__heat_Medium_temperature(threadData, tmp59);
  threadData->lastEquationSolved = 920;
}

/*
equation index: 921
type: SIMPLE_ASSIGN
senTemOut_heat.TMed = Modelica.Fluid.Utilities.regStep(pump.motSpe.y, senTemOut_heat.T_b_inflow, senTemOut_heat.T_b_inflow, senTemOut_heat.m_flow_small)
*/
void pump_v3_basicCold_t_eqFunction_921(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,921};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[440]] /* senTemOut_heat.TMed variable */) = omc_Modelica_Fluid_Utilities_regStep(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[17]] /* pump.motSpe.y STATE(1) */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[441]] /* senTemOut_heat.T_b_inflow variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[441]] /* senTemOut_heat.T_b_inflow variable */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[977]] /* senTemOut_heat.m_flow_small PARAM */));
  threadData->lastEquationSolved = 921;
}

/*
equation index: 922
type: SIMPLE_ASSIGN
$DER.senTemOut_heat.T = (senTemOut_heat.TMed - senTemOut_heat.T) * senTemOut_heat.k
*/
void pump_v3_basicCold_t_eqFunction_922(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,922};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[41]] /* der(senTemOut_heat.T) STATE_DER */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[440]] /* senTemOut_heat.TMed variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[20]] /* senTemOut_heat.T STATE(1) */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[442]] /* senTemOut_heat.k variable */));
  threadData->lastEquationSolved = 922;
}

/*
equation index: 923
type: SIMPLE_ASSIGN
plugFlowPipe2.vol_a.T = pump_v3_basicCold_t.plugFlowPipe2.vol_a.Medium.temperature_phX(plugFlowPipe2.port_a.p, plugFlowPipe2.port_a.h_outflow, {1.0})
*/
void pump_v3_basicCold_t_eqFunction_923(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,923};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[298]] /* plugFlowPipe2.vol_a.T variable */) = omc_pump__v3__basicCold__t_plugFlowPipe2_vol__a_Medium_temperature__phX(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[287]] /* plugFlowPipe2.port_a.p variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[286]] /* plugFlowPipe2.port_a.h_outflow variable */), _OMC_LIT47);
  threadData->lastEquationSolved = 923;
}

/*
equation index: 924
type: ALGORITHM

  $cse31 := pump_v3_basicCold_t.plugFlowPipe2.heaLos_a.Medium.setState_phX(plugFlowPipe2.port_a.p, plugFlowPipe2.port_a.h_outflow, {});
*/
void pump_v3_basicCold_t_eqFunction_924(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,924};
  base_array_t tmp60;
  pump__v3__basicCold__t_plugFlowPipe2_heaLos__a_Medium_ThermodynamicState tmp61;
  simple_alloc_1d_base_array(&tmp60, 0, NULL);
  tmp61 = omc_pump__v3__basicCold__t_plugFlowPipe2_heaLos__a_Medium_setState__phX(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[287]] /* plugFlowPipe2.port_a.p variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[286]] /* plugFlowPipe2.port_a.h_outflow variable */), tmp60);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[81]] /* $cse31.p variable */) = tmp61._p;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[80]] /* $cse31.T variable */) = tmp61._T;
  ;
  threadData->lastEquationSolved = 924;
}

/*
equation index: 925
type: SIMPLE_ASSIGN
plugFlowPipe2.heaLos_a.T_a_inflow = pump_v3_basicCold_t.plugFlowPipe2.heaLos_a.Medium.temperature($cse31)
*/
void pump_v3_basicCold_t_eqFunction_925(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,925};
  pump__v3__basicCold__t_plugFlowPipe2_heaLos__a_Medium_ThermodynamicState tmp62;
  pump__v3__basicCold__t_plugFlowPipe2_heaLos__a_Medium_ThermodynamicState_wrap_vars(threadData,tmp62, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[81]] /* $cse31.p variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[80]] /* $cse31.T variable */));
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[275]] /* plugFlowPipe2.heaLos_a.T_a_inflow variable */) = omc_pump__v3__basicCold__t_plugFlowPipe2_heaLos__a_Medium_temperature(threadData, tmp62);
  threadData->lastEquationSolved = 925;
}

void pump_v3_basicCold_t_eqFunction_926(DATA*, threadData_t*);
void pump_v3_basicCold_t_eqFunction_927(DATA*, threadData_t*);
void pump_v3_basicCold_t_eqFunction_928(DATA*, threadData_t*);
void pump_v3_basicCold_t_eqFunction_929(DATA*, threadData_t*);
void pump_v3_basicCold_t_eqFunction_930(DATA*, threadData_t*);
void pump_v3_basicCold_t_eqFunction_931(DATA*, threadData_t*);
void pump_v3_basicCold_t_eqFunction_932(DATA*, threadData_t*);
void pump_v3_basicCold_t_eqFunction_933(DATA*, threadData_t*);
void pump_v3_basicCold_t_eqFunction_934(DATA*, threadData_t*);
/*
equation index: 935
indexNonlinear: 8
type: NONLINEAR

vars: {plugFlowPipe2.heatPort.T}
eqns: {926, 927, 928, 929, 930, 931, 932, 933, 934}
*/
void pump_v3_basicCold_t_eqFunction_935(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,935};
  int retValue;
  infoStreamPrint(OMC_LOG_DT, 0, "Solving nonlinear system 935 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
  /* get old value */
  data->simulationInfo->nonlinearSystemData[8].nlsxOld[0] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[285]] /* plugFlowPipe2.heatPort.T variable */);
  retValue = solve_nonlinear_system(data, threadData, 8);
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,935};
    throwStreamPrintWithEquationIndexes(threadData, omc_dummyFileInfo, indexes, "Solving non-linear system 935 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
  }
  /* write solution */
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[285]] /* plugFlowPipe2.heatPort.T variable */) = data->simulationInfo->nonlinearSystemData[8].nlsx[0];
  threadData->lastEquationSolved = 935;
}

/*
equation index: 936
type: ALGORITHM

  $cse34 := pump_v3_basicCold_t.plugFlowPipe2.heaLos_b.Medium.setState_pTX(bou1.p, plugFlowPipe2.heaLos_b.T_b_outflow, {});
*/
void pump_v3_basicCold_t_eqFunction_936(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,936};
  base_array_t tmp63;
  pump__v3__basicCold__t_plugFlowPipe2_heaLos__b_Medium_ThermodynamicState tmp64;
  simple_alloc_1d_base_array(&tmp63, 0, NULL);
  tmp64 = omc_pump__v3__basicCold__t_plugFlowPipe2_heaLos__b_Medium_setState__pTX(threadData, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[50]] /* bou1.p PARAM */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[281]] /* plugFlowPipe2.heaLos_b.T_b_outflow variable */), tmp63);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[85]] /* $cse34.p variable */) = tmp64._p;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[84]] /* $cse34.T variable */) = tmp64._T;
  ;
  threadData->lastEquationSolved = 936;
}

/*
equation index: 937
type: SIMPLE_ASSIGN
plugFlowPipe2.heaLos_b.port_b.h_outflow = pump_v3_basicCold_t.plugFlowPipe2.heaLos_b.Medium.specificEnthalpy($cse34)
*/
void pump_v3_basicCold_t_eqFunction_937(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,937};
  pump__v3__basicCold__t_plugFlowPipe2_heaLos__b_Medium_ThermodynamicState tmp65;
  pump__v3__basicCold__t_plugFlowPipe2_heaLos__b_Medium_ThermodynamicState_wrap_vars(threadData,tmp65, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[85]] /* $cse34.p variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[84]] /* $cse34.T variable */));
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[284]] /* plugFlowPipe2.heaLos_b.port_b.h_outflow variable */) = omc_pump__v3__basicCold__t_plugFlowPipe2_heaLos__b_Medium_specificEnthalpy(threadData, tmp65);
  threadData->lastEquationSolved = 937;
}

/*
equation index: 938
type: SIMPLE_ASSIGN
plugFlowPipe2.vol_b.dynBal.ports_H_flow[1] = semiLinear(pump.motSpe.y, plugFlowPipe2.heaLos_b.port_b.h_outflow, plugFlowPipe2.port_b.h_outflow)
*/
void pump_v3_basicCold_t_eqFunction_938(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,938};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[326]] /* plugFlowPipe2.vol_b.dynBal.ports_H_flow[1] variable */) = semiLinear((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[17]] /* pump.motSpe.y STATE(1) */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[284]] /* plugFlowPipe2.heaLos_b.port_b.h_outflow variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[288]] /* plugFlowPipe2.port_b.h_outflow variable */));
  threadData->lastEquationSolved = 938;
}

/*
equation index: 939
type: SIMPLE_ASSIGN
plugFlowPipe2.vol_b.dynBal.Hb_flow = plugFlowPipe2.vol_b.dynBal.ports_H_flow[1] + plugFlowPipe2.vol_b.dynBal.ports_H_flow[2]
*/
void pump_v3_basicCold_t_eqFunction_939(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,939};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[315]] /* plugFlowPipe2.vol_b.dynBal.Hb_flow variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[326]] /* plugFlowPipe2.vol_b.dynBal.ports_H_flow[1] variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[327]] /* plugFlowPipe2.vol_b.dynBal.ports_H_flow[2] variable */);
  threadData->lastEquationSolved = 939;
}

/*
equation index: 940
type: SIMPLE_ASSIGN
$DER.plugFlowPipe2.vol_b.dynBal.U = plugFlowPipe2.vol_b.dynBal.Hb_flow
*/
void pump_v3_basicCold_t_eqFunction_940(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,940};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[33]] /* der(plugFlowPipe2.vol_b.dynBal.U) STATE_DER */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[315]] /* plugFlowPipe2.vol_b.dynBal.Hb_flow variable */);
  threadData->lastEquationSolved = 940;
}

/*
equation index: 941
type: ALGORITHM

  $cse30 := pump_v3_basicCold_t.plugFlowPipe2.heaLos_a.Medium.setState_pTX(plugFlowPipe2.port_a.p, plugFlowPipe2.heaLos_a.T_b_outflow, {});
*/
void pump_v3_basicCold_t_eqFunction_941(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,941};
  base_array_t tmp66;
  pump__v3__basicCold__t_plugFlowPipe2_heaLos__a_Medium_ThermodynamicState tmp67;
  simple_alloc_1d_base_array(&tmp66, 0, NULL);
  tmp67 = omc_pump__v3__basicCold__t_plugFlowPipe2_heaLos__a_Medium_setState__pTX(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[287]] /* plugFlowPipe2.port_a.p variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[276]] /* plugFlowPipe2.heaLos_a.T_b_outflow variable */), tmp66);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[79]] /* $cse30.p variable */) = tmp67._p;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[78]] /* $cse30.T variable */) = tmp67._T;
  ;
  threadData->lastEquationSolved = 941;
}

/*
equation index: 942
type: SIMPLE_ASSIGN
plugFlowPipe2.heaLos_a.port_b.h_outflow = pump_v3_basicCold_t.plugFlowPipe2.heaLos_a.Medium.specificEnthalpy($cse30)
*/
void pump_v3_basicCold_t_eqFunction_942(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,942};
  pump__v3__basicCold__t_plugFlowPipe2_heaLos__a_Medium_ThermodynamicState tmp68;
  pump__v3__basicCold__t_plugFlowPipe2_heaLos__a_Medium_ThermodynamicState_wrap_vars(threadData,tmp68, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[79]] /* $cse30.p variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[78]] /* $cse30.T variable */));
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[279]] /* plugFlowPipe2.heaLos_a.port_b.h_outflow variable */) = omc_pump__v3__basicCold__t_plugFlowPipe2_heaLos__a_Medium_specificEnthalpy(threadData, tmp68);
  threadData->lastEquationSolved = 942;
}

/*
equation index: 943
type: SIMPLE_ASSIGN
plugFlowPipe2.vol_a.dynBal.ports_H_flow[2] = -semiLinear(pump.motSpe.y, plugFlowPipe2.port_a.h_outflow, plugFlowPipe2.heaLos_a.port_b.h_outflow)
*/
void pump_v3_basicCold_t_eqFunction_943(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,943};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[311]] /* plugFlowPipe2.vol_a.dynBal.ports_H_flow[2] variable */) = (-semiLinear((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[17]] /* pump.motSpe.y STATE(1) */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[286]] /* plugFlowPipe2.port_a.h_outflow variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[279]] /* plugFlowPipe2.heaLos_a.port_b.h_outflow variable */)));
  threadData->lastEquationSolved = 943;
}

/*
equation index: 944
type: SIMPLE_ASSIGN
plugFlowPipe2.vol_a.dynBal.Hb_flow = plugFlowPipe2.vol_a.dynBal.ports_H_flow[1] + plugFlowPipe2.vol_a.dynBal.ports_H_flow[2]
*/
void pump_v3_basicCold_t_eqFunction_944(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,944};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[299]] /* plugFlowPipe2.vol_a.dynBal.Hb_flow variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[310]] /* plugFlowPipe2.vol_a.dynBal.ports_H_flow[1] variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[311]] /* plugFlowPipe2.vol_a.dynBal.ports_H_flow[2] variable */);
  threadData->lastEquationSolved = 944;
}

/*
equation index: 945
type: SIMPLE_ASSIGN
$DER.plugFlowPipe2.vol_a.dynBal.U = plugFlowPipe2.vol_a.dynBal.Hb_flow
*/
void pump_v3_basicCold_t_eqFunction_945(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,945};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[32]] /* der(plugFlowPipe2.vol_a.dynBal.U) STATE_DER */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[299]] /* plugFlowPipe2.vol_a.dynBal.Hb_flow variable */);
  threadData->lastEquationSolved = 945;
}

/*
equation index: 946
type: SIMPLE_ASSIGN
plugFlowPipe1.port_a.p = bou1.p - plugFlowPipe1.dp
*/
void pump_v3_basicCold_t_eqFunction_946(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,946};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[230]] /* plugFlowPipe1.port_a.p variable */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[50]] /* bou1.p PARAM */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[217]] /* plugFlowPipe1.dp variable */);
  threadData->lastEquationSolved = 946;
}

/*
equation index: 947
type: SIMPLE_ASSIGN
plugFlowPipe.dp = bou1.p - plugFlowPipe1.port_a.p
*/
void pump_v3_basicCold_t_eqFunction_947(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,947};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[159]] /* plugFlowPipe.dp variable */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[50]] /* bou1.p PARAM */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[230]] /* plugFlowPipe1.port_a.p variable */);
  threadData->lastEquationSolved = 947;
}

/*
equation index: 948
type: SIMPLE_ASSIGN
plugFlowPipe.vol_b.dynBal.medium.p_bar = 1e-5 * plugFlowPipe1.port_a.p
*/
void pump_v3_basicCold_t_eqFunction_948(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,948};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[208]] /* plugFlowPipe.vol_b.dynBal.medium.p_bar variable */) = (1e-5) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[230]] /* plugFlowPipe1.port_a.p variable */));
  threadData->lastEquationSolved = 948;
}

/*
equation index: 949
type: SIMPLE_ASSIGN
plugFlowPipe1.vol_a.dynBal.medium.p_bar = 1e-5 * plugFlowPipe1.port_a.p
*/
void pump_v3_basicCold_t_eqFunction_949(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,949};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[250]] /* plugFlowPipe1.vol_a.dynBal.medium.p_bar variable */) = (1e-5) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[230]] /* plugFlowPipe1.port_a.p variable */));
  threadData->lastEquationSolved = 949;
}

/*
equation index: 950
type: SIMPLE_ASSIGN
plugFlowPipe1.vol_a.T = pump_v3_basicCold_t.plugFlowPipe1.vol_a.Medium.temperature_phX(plugFlowPipe1.port_a.p, plugFlowPipe1.port_a.h_outflow, {1.0})
*/
void pump_v3_basicCold_t_eqFunction_950(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,950};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[239]] /* plugFlowPipe1.vol_a.T variable */) = omc_pump__v3__basicCold__t_plugFlowPipe1_vol__a_Medium_temperature__phX(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[230]] /* plugFlowPipe1.port_a.p variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[229]] /* plugFlowPipe1.port_a.h_outflow variable */), _OMC_LIT47);
  threadData->lastEquationSolved = 950;
}

/*
equation index: 951
type: SIMPLE_ASSIGN
plugFlowPipe.vol_b.T = pump_v3_basicCold_t.plugFlowPipe.vol_b.Medium.temperature_phX(plugFlowPipe1.port_a.p, senTemOut_cold.port_b.h_outflow, {1.0})
*/
void pump_v3_basicCold_t_eqFunction_951(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,951};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[197]] /* plugFlowPipe.vol_b.T variable */) = omc_pump__v3__basicCold__t_plugFlowPipe_vol__b_Medium_temperature__phX(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[230]] /* plugFlowPipe1.port_a.p variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[439]] /* senTemOut_cold.port_b.h_outflow variable */), _OMC_LIT47);
  threadData->lastEquationSolved = 951;
}

/*
equation index: 952
type: ALGORITHM

  $cse42 := pump_v3_basicCold_t.plugFlowPipe.del.Medium.setState_phX(plugFlowPipe1.port_a.p, senTemOut_cold.port_b.h_outflow, {});
*/
void pump_v3_basicCold_t_eqFunction_952(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,952};
  base_array_t tmp69;
  pump__v3__basicCold__t_plugFlowPipe_del_Medium_ThermodynamicState tmp70;
  simple_alloc_1d_base_array(&tmp69, 0, NULL);
  tmp70 = omc_pump__v3__basicCold__t_plugFlowPipe_del_Medium_setState__phX(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[230]] /* plugFlowPipe1.port_a.p variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[439]] /* senTemOut_cold.port_b.h_outflow variable */), tmp69);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[97]] /* $cse42.p variable */) = tmp70._p;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[96]] /* $cse42.T variable */) = tmp70._T;
  ;
  threadData->lastEquationSolved = 952;
}

/*
equation index: 953
type: SIMPLE_ASSIGN
$cse41 = pump_v3_basicCold_t.plugFlowPipe.del.Medium.density($cse42)
*/
void pump_v3_basicCold_t_eqFunction_953(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,953};
  pump__v3__basicCold__t_plugFlowPipe_del_Medium_ThermodynamicState tmp71;
  pump__v3__basicCold__t_plugFlowPipe_del_Medium_ThermodynamicState_wrap_vars(threadData,tmp71, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[97]] /* $cse42.p variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[96]] /* $cse42.T variable */));
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[95]] /* $cse41 variable */) = omc_pump__v3__basicCold__t_plugFlowPipe_del_Medium_density(threadData, tmp71);
  threadData->lastEquationSolved = 953;
}

/*
equation index: 954
type: ALGORITHM

  $cse40 := pump_v3_basicCold_t.plugFlowPipe.del.Medium.setState_phX(plugFlowPipe1.port_a.p, plugFlowPipe.port_a.h_outflow, {});
*/
void pump_v3_basicCold_t_eqFunction_954(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,954};
  base_array_t tmp72;
  pump__v3__basicCold__t_plugFlowPipe_del_Medium_ThermodynamicState tmp73;
  simple_alloc_1d_base_array(&tmp72, 0, NULL);
  tmp73 = omc_pump__v3__basicCold__t_plugFlowPipe_del_Medium_setState__phX(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[230]] /* plugFlowPipe1.port_a.p variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[171]] /* plugFlowPipe.port_a.h_outflow variable */), tmp72);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[94]] /* $cse40.p variable */) = tmp73._p;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[93]] /* $cse40.T variable */) = tmp73._T;
  ;
  threadData->lastEquationSolved = 954;
}

/*
equation index: 955
type: SIMPLE_ASSIGN
$cse39 = pump_v3_basicCold_t.plugFlowPipe.del.Medium.density($cse40)
*/
void pump_v3_basicCold_t_eqFunction_955(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,955};
  pump__v3__basicCold__t_plugFlowPipe_del_Medium_ThermodynamicState tmp74;
  pump__v3__basicCold__t_plugFlowPipe_del_Medium_ThermodynamicState_wrap_vars(threadData,tmp74, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[94]] /* $cse40.p variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[93]] /* $cse40.T variable */));
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[91]] /* $cse39 variable */) = omc_pump__v3__basicCold__t_plugFlowPipe_del_Medium_density(threadData, tmp74);
  threadData->lastEquationSolved = 955;
}

/*
equation index: 956
type: SIMPLE_ASSIGN
$cse38 = Modelica.Fluid.Utilities.regStep(pump.motSpe.y, $cse39, $cse41, plugFlowPipe.del.m_flow_small)
*/
void pump_v3_basicCold_t_eqFunction_956(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,956};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[90]] /* $cse38 variable */) = omc_Modelica_Fluid_Utilities_regStep(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[17]] /* pump.motSpe.y STATE(1) */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[91]] /* $cse39 variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[95]] /* $cse41 variable */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[100]] /* plugFlowPipe.del.m_flow_small PARAM */));
  threadData->lastEquationSolved = 956;
}

/*
equation index: 957
type: SIMPLE_ASSIGN
plugFlowPipe.del.V_flow = pump.motSpe.y / $cse38
*/
void pump_v3_basicCold_t_eqFunction_957(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,957};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[156]] /* plugFlowPipe.del.V_flow variable */) = DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[17]] /* pump.motSpe.y STATE(1) */),(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[90]] /* $cse38 variable */),"$cse38",equationIndexes);
  threadData->lastEquationSolved = 957;
}

/*
equation index: 958
type: SIMPLE_ASSIGN
plugFlowPipe.v = 5100.302614705827 * plugFlowPipe.del.V_flow
*/
void pump_v3_basicCold_t_eqFunction_958(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,958};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[180]] /* plugFlowPipe.v variable */) = (5100.302614705827) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[156]] /* plugFlowPipe.del.V_flow variable */));
  threadData->lastEquationSolved = 958;
}

/*
equation index: 959
type: SIMPLE_ASSIGN
$DER.plugFlowPipe.del.x = plugFlowPipe.v
*/
void pump_v3_basicCold_t_eqFunction_959(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,959};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[22]] /* der(plugFlowPipe.del.x) STATE_DER */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[180]] /* plugFlowPipe.v variable */);
  threadData->lastEquationSolved = 959;
}

/*
equation index: 960
type: ALGORITHM

  $cse13 := pump_v3_basicCold_t.plugFlowPipe1.heaLos_a.Medium.setState_phX(plugFlowPipe1.port_a.p, plugFlowPipe1.port_a.h_outflow, {});
*/
void pump_v3_basicCold_t_eqFunction_960(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,960};
  base_array_t tmp75;
  pump__v3__basicCold__t_plugFlowPipe1_heaLos__a_Medium_ThermodynamicState tmp76;
  simple_alloc_1d_base_array(&tmp75, 0, NULL);
  tmp76 = omc_pump__v3__basicCold__t_plugFlowPipe1_heaLos__a_Medium_setState__phX(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[230]] /* plugFlowPipe1.port_a.p variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[229]] /* plugFlowPipe1.port_a.h_outflow variable */), tmp75);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[50]] /* $cse13.p variable */) = tmp76._p;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[49]] /* $cse13.T variable */) = tmp76._T;
  ;
  threadData->lastEquationSolved = 960;
}

/*
equation index: 961
type: SIMPLE_ASSIGN
plugFlowPipe1.heaLos_a.T_a_inflow = pump_v3_basicCold_t.plugFlowPipe1.heaLos_a.Medium.temperature($cse13)
*/
void pump_v3_basicCold_t_eqFunction_961(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,961};
  pump__v3__basicCold__t_plugFlowPipe1_heaLos__a_Medium_ThermodynamicState tmp77;
  pump__v3__basicCold__t_plugFlowPipe1_heaLos__a_Medium_ThermodynamicState_wrap_vars(threadData,tmp77, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[50]] /* $cse13.p variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[49]] /* $cse13.T variable */));
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[218]] /* plugFlowPipe1.heaLos_a.T_a_inflow variable */) = omc_pump__v3__basicCold__t_plugFlowPipe1_heaLos__a_Medium_temperature(threadData, tmp77);
  threadData->lastEquationSolved = 961;
}

/*
equation index: 962
type: ALGORITHM

  $cse10 := pump_v3_basicCold_t.senTemOut_cold.Medium.setState_phX(plugFlowPipe1.port_a.p, senTemOut_cold.port_b.h_outflow, {});
*/
void pump_v3_basicCold_t_eqFunction_962(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,962};
  base_array_t tmp78;
  pump__v3__basicCold__t_senTemOut__cold_Medium_ThermodynamicState tmp79;
  simple_alloc_1d_base_array(&tmp78, 0, NULL);
  tmp79 = omc_pump__v3__basicCold__t_senTemOut__cold_Medium_setState__phX(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[230]] /* plugFlowPipe1.port_a.p variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[439]] /* senTemOut_cold.port_b.h_outflow variable */), tmp78);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[45]] /* $cse10.p variable */) = tmp79._p;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[44]] /* $cse10.T variable */) = tmp79._T;
  ;
  threadData->lastEquationSolved = 962;
}

/*
equation index: 963
type: SIMPLE_ASSIGN
senTemOut_cold.T_b_inflow = pump_v3_basicCold_t.senTemOut_cold.Medium.temperature($cse10)
*/
void pump_v3_basicCold_t_eqFunction_963(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,963};
  pump__v3__basicCold__t_senTemOut__cold_Medium_ThermodynamicState tmp80;
  pump__v3__basicCold__t_senTemOut__cold_Medium_ThermodynamicState_wrap_vars(threadData,tmp80, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[45]] /* $cse10.p variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[44]] /* $cse10.T variable */));
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[436]] /* senTemOut_cold.T_b_inflow variable */) = omc_pump__v3__basicCold__t_senTemOut__cold_Medium_temperature(threadData, tmp80);
  threadData->lastEquationSolved = 963;
}

/*
equation index: 964
type: SIMPLE_ASSIGN
senTemOut_cold.T = Modelica.Fluid.Utilities.regStep(pump.motSpe.y, senTemOut_cold.T_b_inflow, senTemOut_cold.T_b_inflow, senTemOut_cold.m_flow_small)
*/
void pump_v3_basicCold_t_eqFunction_964(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,964};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[435]] /* senTemOut_cold.T variable */) = omc_Modelica_Fluid_Utilities_regStep(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[17]] /* pump.motSpe.y STATE(1) */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[436]] /* senTemOut_cold.T_b_inflow variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[436]] /* senTemOut_cold.T_b_inflow variable */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[968]] /* senTemOut_cold.m_flow_small PARAM */));
  threadData->lastEquationSolved = 964;
}

/*
equation index: 965
type: ALGORITHM

  $cse6 := pump_v3_basicCold_t.plugFlowPipe.heaLos_b.Medium.setState_phX(plugFlowPipe1.port_a.p, plugFlowPipe.del.port_b.h_outflow, {});
*/
void pump_v3_basicCold_t_eqFunction_965(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,965};
  base_array_t tmp81;
  pump__v3__basicCold__t_plugFlowPipe_heaLos__b_Medium_ThermodynamicState tmp82;
  simple_alloc_1d_base_array(&tmp81, 0, NULL);
  tmp82 = omc_pump__v3__basicCold__t_plugFlowPipe_heaLos__b_Medium_setState__phX(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[230]] /* plugFlowPipe1.port_a.p variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[158]] /* plugFlowPipe.del.port_b.h_outflow variable */), tmp81);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[125]] /* $cse6.p variable */) = tmp82._p;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[124]] /* $cse6.T variable */) = tmp82._T;
  ;
  threadData->lastEquationSolved = 965;
}

/*
equation index: 966
type: SIMPLE_ASSIGN
plugFlowPipe.heaLos_b.T_a_inflow = pump_v3_basicCold_t.plugFlowPipe.heaLos_b.Medium.temperature($cse6)
*/
void pump_v3_basicCold_t_eqFunction_966(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,966};
  pump__v3__basicCold__t_plugFlowPipe_heaLos__b_Medium_ThermodynamicState tmp83;
  pump__v3__basicCold__t_plugFlowPipe_heaLos__b_Medium_ThermodynamicState_wrap_vars(threadData,tmp83, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[125]] /* $cse6.p variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[124]] /* $cse6.T variable */));
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[165]] /* plugFlowPipe.heaLos_b.T_a_inflow variable */) = omc_pump__v3__basicCold__t_plugFlowPipe_heaLos__b_Medium_temperature(threadData, tmp83);
  threadData->lastEquationSolved = 966;
}

void pump_v3_basicCold_t_eqFunction_967(DATA*, threadData_t*);
void pump_v3_basicCold_t_eqFunction_968(DATA*, threadData_t*);
void pump_v3_basicCold_t_eqFunction_969(DATA*, threadData_t*);
void pump_v3_basicCold_t_eqFunction_970(DATA*, threadData_t*);
void pump_v3_basicCold_t_eqFunction_971(DATA*, threadData_t*);
void pump_v3_basicCold_t_eqFunction_972(DATA*, threadData_t*);
void pump_v3_basicCold_t_eqFunction_973(DATA*, threadData_t*);
void pump_v3_basicCold_t_eqFunction_974(DATA*, threadData_t*);
void pump_v3_basicCold_t_eqFunction_975(DATA*, threadData_t*);
/*
equation index: 976
indexNonlinear: 9
type: NONLINEAR

vars: {plugFlowPipe.heatPort.T}
eqns: {967, 968, 969, 970, 971, 972, 973, 974, 975}
*/
void pump_v3_basicCold_t_eqFunction_976(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,976};
  int retValue;
  infoStreamPrint(OMC_LOG_DT, 0, "Solving nonlinear system 976 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
  /* get old value */
  data->simulationInfo->nonlinearSystemData[9].nlsxOld[0] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[170]] /* plugFlowPipe.heatPort.T variable */);
  retValue = solve_nonlinear_system(data, threadData, 9);
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,976};
    throwStreamPrintWithEquationIndexes(threadData, omc_dummyFileInfo, indexes, "Solving non-linear system 976 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
  }
  /* write solution */
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[170]] /* plugFlowPipe.heatPort.T variable */) = data->simulationInfo->nonlinearSystemData[9].nlsx[0];
  threadData->lastEquationSolved = 976;
}

/*
equation index: 977
type: ALGORITHM

  $cse1 := pump_v3_basicCold_t.plugFlowPipe.heaLos_a.Medium.setState_pTX(bou1.p, plugFlowPipe.heaLos_a.T_b_outflow, {});
*/
void pump_v3_basicCold_t_eqFunction_977(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,977};
  base_array_t tmp84;
  pump__v3__basicCold__t_plugFlowPipe_heaLos__a_Medium_ThermodynamicState tmp85;
  simple_alloc_1d_base_array(&tmp84, 0, NULL);
  tmp85 = omc_pump__v3__basicCold__t_plugFlowPipe_heaLos__a_Medium_setState__pTX(threadData, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[50]] /* bou1.p PARAM */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[161]] /* plugFlowPipe.heaLos_a.T_b_outflow variable */), tmp84);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[43]] /* $cse1.p variable */) = tmp85._p;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[42]] /* $cse1.T variable */) = tmp85._T;
  ;
  threadData->lastEquationSolved = 977;
}

/*
equation index: 978
type: SIMPLE_ASSIGN
plugFlowPipe.heaLos_a.port_b.h_outflow = pump_v3_basicCold_t.plugFlowPipe.heaLos_a.Medium.specificEnthalpy($cse1)
*/
void pump_v3_basicCold_t_eqFunction_978(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,978};
  pump__v3__basicCold__t_plugFlowPipe_heaLos__a_Medium_ThermodynamicState tmp86;
  pump__v3__basicCold__t_plugFlowPipe_heaLos__a_Medium_ThermodynamicState_wrap_vars(threadData,tmp86, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[43]] /* $cse1.p variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[42]] /* $cse1.T variable */));
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[164]] /* plugFlowPipe.heaLos_a.port_b.h_outflow variable */) = omc_pump__v3__basicCold__t_plugFlowPipe_heaLos__a_Medium_specificEnthalpy(threadData, tmp86);
  threadData->lastEquationSolved = 978;
}

/*
equation index: 979
type: SIMPLE_ASSIGN
plugFlowPipe.vol_a.dynBal.ports_H_flow[2] = -semiLinear(pump.motSpe.y, plugFlowPipe.port_a.h_outflow, plugFlowPipe.heaLos_a.port_b.h_outflow)
*/
void pump_v3_basicCold_t_eqFunction_979(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,979};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[194]] /* plugFlowPipe.vol_a.dynBal.ports_H_flow[2] variable */) = (-semiLinear((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[17]] /* pump.motSpe.y STATE(1) */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[171]] /* plugFlowPipe.port_a.h_outflow variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[164]] /* plugFlowPipe.heaLos_a.port_b.h_outflow variable */)));
  threadData->lastEquationSolved = 979;
}

/*
equation index: 980
type: SIMPLE_ASSIGN
plugFlowPipe.vol_a.dynBal.Hb_flow = plugFlowPipe.vol_a.dynBal.ports_H_flow[1] + plugFlowPipe.vol_a.dynBal.ports_H_flow[2]
*/
void pump_v3_basicCold_t_eqFunction_980(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,980};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[182]] /* plugFlowPipe.vol_a.dynBal.Hb_flow variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[193]] /* plugFlowPipe.vol_a.dynBal.ports_H_flow[1] variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[194]] /* plugFlowPipe.vol_a.dynBal.ports_H_flow[2] variable */);
  threadData->lastEquationSolved = 980;
}

/*
equation index: 981
type: SIMPLE_ASSIGN
$DER.plugFlowPipe.vol_a.dynBal.U = plugFlowPipe.vol_a.dynBal.Hb_flow
*/
void pump_v3_basicCold_t_eqFunction_981(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,981};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[24]] /* der(plugFlowPipe.vol_a.dynBal.U) STATE_DER */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[182]] /* plugFlowPipe.vol_a.dynBal.Hb_flow variable */);
  threadData->lastEquationSolved = 981;
}

/*
equation index: 982
type: ALGORITHM

  $cse5 := pump_v3_basicCold_t.plugFlowPipe.heaLos_b.Medium.setState_pTX(plugFlowPipe1.port_a.p, plugFlowPipe.heaLos_b.T_b_outflow, {});
*/
void pump_v3_basicCold_t_eqFunction_982(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,982};
  base_array_t tmp87;
  pump__v3__basicCold__t_plugFlowPipe_heaLos__b_Medium_ThermodynamicState tmp88;
  simple_alloc_1d_base_array(&tmp87, 0, NULL);
  tmp88 = omc_pump__v3__basicCold__t_plugFlowPipe_heaLos__b_Medium_setState__pTX(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[230]] /* plugFlowPipe1.port_a.p variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[166]] /* plugFlowPipe.heaLos_b.T_b_outflow variable */), tmp87);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[109]] /* $cse5.p variable */) = tmp88._p;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[108]] /* $cse5.T variable */) = tmp88._T;
  ;
  threadData->lastEquationSolved = 982;
}

/*
equation index: 983
type: SIMPLE_ASSIGN
plugFlowPipe.heaLos_b.port_b.h_outflow = pump_v3_basicCold_t.plugFlowPipe.heaLos_b.Medium.specificEnthalpy($cse5)
*/
void pump_v3_basicCold_t_eqFunction_983(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,983};
  pump__v3__basicCold__t_plugFlowPipe_heaLos__b_Medium_ThermodynamicState tmp89;
  pump__v3__basicCold__t_plugFlowPipe_heaLos__b_Medium_ThermodynamicState_wrap_vars(threadData,tmp89, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[109]] /* $cse5.p variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[108]] /* $cse5.T variable */));
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[169]] /* plugFlowPipe.heaLos_b.port_b.h_outflow variable */) = omc_pump__v3__basicCold__t_plugFlowPipe_heaLos__b_Medium_specificEnthalpy(threadData, tmp89);
  threadData->lastEquationSolved = 983;
}

/*
equation index: 984
type: SIMPLE_ASSIGN
plugFlowPipe.vol_b.dynBal.ports_H_flow[1] = semiLinear(pump.motSpe.y, plugFlowPipe.heaLos_b.port_b.h_outflow, senTemOut_cold.port_b.h_outflow)
*/
void pump_v3_basicCold_t_eqFunction_984(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,984};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[209]] /* plugFlowPipe.vol_b.dynBal.ports_H_flow[1] variable */) = semiLinear((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[17]] /* pump.motSpe.y STATE(1) */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[169]] /* plugFlowPipe.heaLos_b.port_b.h_outflow variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[439]] /* senTemOut_cold.port_b.h_outflow variable */));
  threadData->lastEquationSolved = 984;
}

/*
equation index: 985
type: SIMPLE_ASSIGN
plugFlowPipe.vol_b.dynBal.Hb_flow = plugFlowPipe.vol_b.dynBal.ports_H_flow[1] + plugFlowPipe.vol_b.dynBal.ports_H_flow[2]
*/
void pump_v3_basicCold_t_eqFunction_985(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,985};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[198]] /* plugFlowPipe.vol_b.dynBal.Hb_flow variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[209]] /* plugFlowPipe.vol_b.dynBal.ports_H_flow[1] variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[210]] /* plugFlowPipe.vol_b.dynBal.ports_H_flow[2] variable */);
  threadData->lastEquationSolved = 985;
}

/*
equation index: 986
type: SIMPLE_ASSIGN
$DER.plugFlowPipe.vol_b.dynBal.U = plugFlowPipe.vol_b.dynBal.Hb_flow
*/
void pump_v3_basicCold_t_eqFunction_986(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,986};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[25]] /* der(plugFlowPipe.vol_b.dynBal.U) STATE_DER */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[198]] /* plugFlowPipe.vol_b.dynBal.Hb_flow variable */);
  threadData->lastEquationSolved = 986;
}

/*
equation index: 987
type: SIMPLE_ASSIGN
plugFlowPipe_heat.port_a.p = plugFlowPipe1.port_a.p - plugFlowPipe1.dp
*/
void pump_v3_basicCold_t_eqFunction_987(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,987};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[346]] /* plugFlowPipe_heat.port_a.p variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[230]] /* plugFlowPipe1.port_a.p variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[217]] /* plugFlowPipe1.dp variable */);
  threadData->lastEquationSolved = 987;
}

/*
equation index: 988
type: SIMPLE_ASSIGN
pump.port_a.p = plugFlowPipe_heat.port_a.p - plugFlowPipe_heat.dp
*/
void pump_v3_basicCold_t_eqFunction_988(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,988};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[403]] /* pump.port_a.p variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[346]] /* plugFlowPipe_heat.port_a.p variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[333]] /* plugFlowPipe_heat.dp variable */);
  threadData->lastEquationSolved = 988;
}

/*
equation index: 989
type: SIMPLE_ASSIGN
pump.dpMachine = plugFlowPipe2.port_a.p - pump.port_a.p
*/
void pump_v3_basicCold_t_eqFunction_989(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,989};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[390]] /* pump.dpMachine variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[287]] /* plugFlowPipe2.port_a.p variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[403]] /* pump.port_a.p variable */);
  threadData->lastEquationSolved = 989;
}

/*
equation index: 990
type: SIMPLE_ASSIGN
pump.eff.WFlo = smooth(1, if noEvent(pump.dpMachine * pump.VMachine_flow > 5.0382387860014105e-5) then pump.dpMachine * pump.VMachine_flow else if noEvent(pump.dpMachine * pump.VMachine_flow < -5.0382387860014105e-5) then 0.0 else 2481.025717703349 * (-pump.dpMachine) * pump.VMachine_flow * (4.0 * pump.dpMachine ^ 2.0 * 9.84878177904867e7 * pump.VMachine_flow ^ 2.0 - 3.0) * 2.0 * pump.dpMachine * pump.VMachine_flow + 0.5 * pump.dpMachine * pump.VMachine_flow)
*/
void pump_v3_basicCold_t_eqFunction_990(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,990};
  modelica_boolean tmp90;
  modelica_boolean tmp91;
  modelica_real tmp92;
  modelica_real tmp93;
  modelica_boolean tmp94;
  modelica_real tmp95;
  modelica_boolean tmp96;
  modelica_real tmp97;
  tmp90 = Greater(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[390]] /* pump.dpMachine variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[389]] /* pump.VMachine_flow variable */)),5.0382387860014105e-5);
  tmp96 = (modelica_boolean)tmp90;
  if(tmp96)
  {
    tmp97 = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[390]] /* pump.dpMachine variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[389]] /* pump.VMachine_flow variable */));
  }
  else
  {
    tmp91 = Less(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[390]] /* pump.dpMachine variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[389]] /* pump.VMachine_flow variable */)),-5.0382387860014105e-5);
    tmp94 = (modelica_boolean)tmp91;
    if(tmp94)
    {
      tmp95 = 0.0;
    }
    else
    {
      tmp92 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[390]] /* pump.dpMachine variable */);
      tmp93 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[389]] /* pump.VMachine_flow variable */);
      tmp95 = (2481.025717703349) * ((((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[390]] /* pump.dpMachine variable */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[389]] /* pump.VMachine_flow variable */))) * (((4.0) * (((tmp92 * tmp92)) * ((9.84878177904867e7) * ((tmp93 * tmp93)))) - 3.0) * ((2.0) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[390]] /* pump.dpMachine variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[389]] /* pump.VMachine_flow variable */)))))) + (0.5) * (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[390]] /* pump.dpMachine variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[389]] /* pump.VMachine_flow variable */)));
    }
    tmp97 = tmp95;
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[392]] /* pump.eff.WFlo variable */) = tmp97;
  threadData->lastEquationSolved = 990;
}

/*
equation index: 991
type: SIMPLE_ASSIGN
pump.P = 2.0408163265306127 * pump.eff.WFlo
*/
void pump_v3_basicCold_t_eqFunction_991(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,991};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[387]] /* pump.P variable */) = (2.0408163265306127) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[392]] /* pump.eff.WFlo variable */));
  threadData->lastEquationSolved = 991;
}

/*
equation index: 992
type: SIMPLE_ASSIGN
pump.eff.P_internal = 1.4285714285714286 * pump.eff.WFlo
*/
void pump_v3_basicCold_t_eqFunction_992(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,992};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[391]] /* pump.eff.P_internal variable */) = (1.4285714285714286) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[392]] /* pump.eff.WFlo variable */));
  threadData->lastEquationSolved = 992;
}

/*
equation index: 993
type: SIMPLE_ASSIGN
pump.eff.yMot = if pump.eff.per.haveWMot_nominal then pump.eff.P_internal / pump.eff.per.WMot_nominal else 1.0
*/
void pump_v3_basicCold_t_eqFunction_993(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,993};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[397]] /* pump.eff.yMot variable */) = ((data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[213]] /* pump.eff.per.haveWMot_nominal PARAM */)?DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[391]] /* pump.eff.P_internal variable */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[729]] /* pump.eff.per.WMot_nominal PARAM */),"pump.eff.per.WMot_nominal",equationIndexes):1.0);
  threadData->lastEquationSolved = 993;
}

/*
equation index: 994
type: SIMPLE_ASSIGN
pump.heaDis.etaHyd = pump.eff.WFlo / smooth(1, if noEvent(-1e-5 + pump.eff.P_internal > 1e-6) then pump.eff.P_internal else if noEvent(-1e-5 + pump.eff.P_internal < -1e-6) then 1e-5 else 0.25 * (-10.000000000000002 + 1e6 * pump.eff.P_internal) * ((-10.000000000000002 + 1e6 * pump.eff.P_internal) ^ 2.0 - 3.0) * (1e-5 - pump.eff.P_internal) + 0.5 * pump.eff.P_internal + 5e-6)
*/
void pump_v3_basicCold_t_eqFunction_994(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,994};
  modelica_boolean tmp98;
  modelica_boolean tmp99;
  modelica_real tmp100;
  modelica_boolean tmp101;
  modelica_real tmp102;
  modelica_boolean tmp103;
  modelica_real tmp104;
  tmp98 = Greater(-1e-5 + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[391]] /* pump.eff.P_internal variable */),1e-6);
  tmp103 = (modelica_boolean)tmp98;
  if(tmp103)
  {
    tmp104 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[391]] /* pump.eff.P_internal variable */);
  }
  else
  {
    tmp99 = Less(-1e-5 + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[391]] /* pump.eff.P_internal variable */),-1e-6);
    tmp101 = (modelica_boolean)tmp99;
    if(tmp101)
    {
      tmp102 = 1e-5;
    }
    else
    {
      tmp100 = -10.000000000000002 + (1e6) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[391]] /* pump.eff.P_internal variable */));
      tmp102 = (0.25) * (((-10.000000000000002 + (1e6) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[391]] /* pump.eff.P_internal variable */))) * ((tmp100 * tmp100) - 3.0)) * (1e-5 - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[391]] /* pump.eff.P_internal variable */))) + (0.5) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[391]] /* pump.eff.P_internal variable */)) + 5e-6;
    }
    tmp104 = tmp102;
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[400]] /* pump.heaDis.etaHyd variable */) = DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[392]] /* pump.eff.WFlo variable */),tmp104,"smooth(1, if noEvent(-1e-5 + pump.eff.P_internal > 1e-6) then pump.eff.P_internal else if noEvent(-1e-5 + pump.eff.P_internal < -1e-6) then 1e-5 else 0.25 * (-10.000000000000002 + 1e6 * pump.eff.P_internal) * ((-10.000000000000002 + 1e6 * pump.eff.P_internal) ^ 2.0 - 3.0) * (1e-5 - pump.eff.P_internal) + 0.5 * pump.eff.P_internal + 5e-6)",equationIndexes);
  threadData->lastEquationSolved = 994;
}

/*
equation index: 995
type: SIMPLE_ASSIGN
pump.heaDis.QThe_flow = (if pump.heaDis.motorCooledByFluid then pump.P else pump.eff.P_internal) - pump.eff.WFlo
*/
void pump_v3_basicCold_t_eqFunction_995(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,995};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[399]] /* pump.heaDis.QThe_flow variable */) = ((data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[219]] /* pump.heaDis.motorCooledByFluid PARAM */)?(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[387]] /* pump.P variable */):(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[391]] /* pump.eff.P_internal variable */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[392]] /* pump.eff.WFlo variable */);
  threadData->lastEquationSolved = 995;
}

/*
equation index: 996
type: SIMPLE_ASSIGN
pump.PToMed.u1 = smooth(1, if noEvent(abs(pump.VMachine_flow) + -4.5802170781831e-7 > 2.29010853909155e-7) then pump.heaDis.QThe_flow else if noEvent(abs(pump.VMachine_flow) + -4.5802170781831e-7 < -2.29010853909155e-7) then 0.0 else 0.25 * (2.0 - 4.366605263157895e6 * abs(pump.VMachine_flow)) * ((4.366605263157895e6 * abs(pump.VMachine_flow) + -2.0) ^ 2.0 - 3.0) * pump.heaDis.QThe_flow + 0.5 * pump.heaDis.QThe_flow)
*/
void pump_v3_basicCold_t_eqFunction_996(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,996};
  modelica_boolean tmp105;
  modelica_boolean tmp106;
  modelica_real tmp107;
  modelica_boolean tmp108;
  modelica_real tmp109;
  modelica_boolean tmp110;
  modelica_real tmp111;
  tmp105 = Greater(fabs((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[389]] /* pump.VMachine_flow variable */)) + -4.5802170781831e-7,2.29010853909155e-7);
  tmp110 = (modelica_boolean)tmp105;
  if(tmp110)
  {
    tmp111 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[399]] /* pump.heaDis.QThe_flow variable */);
  }
  else
  {
    tmp106 = Less(fabs((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[389]] /* pump.VMachine_flow variable */)) + -4.5802170781831e-7,-2.29010853909155e-7);
    tmp108 = (modelica_boolean)tmp106;
    if(tmp108)
    {
      tmp109 = 0.0;
    }
    else
    {
      tmp107 = (4.366605263157895e6) * (fabs((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[389]] /* pump.VMachine_flow variable */))) + -2.0;
      tmp109 = (0.25) * (((2.0 - ((4.366605263157895e6) * (fabs((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[389]] /* pump.VMachine_flow variable */))))) * ((tmp107 * tmp107) - 3.0)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[399]] /* pump.heaDis.QThe_flow variable */))) + (0.5) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[399]] /* pump.heaDis.QThe_flow variable */));
    }
    tmp111 = tmp109;
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[388]] /* pump.PToMed.u1 variable */) = tmp111;
  threadData->lastEquationSolved = 996;
}

/*
equation index: 997
type: SIMPLE_ASSIGN
pump.prePow.Q_flow = pump.PToMed.u1 + pump.eff.WFlo
*/
void pump_v3_basicCold_t_eqFunction_997(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,997};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[405]] /* pump.prePow.Q_flow variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[388]] /* pump.PToMed.u1 variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[392]] /* pump.eff.WFlo variable */);
  threadData->lastEquationSolved = 997;
}

/*
equation index: 998
type: SIMPLE_ASSIGN
pump.vol.dynBal.medium.p_bar = 1e-5 * pump.port_a.p
*/
void pump_v3_basicCold_t_eqFunction_998(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,998};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[424]] /* pump.vol.dynBal.medium.p_bar variable */) = (1e-5) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[403]] /* pump.port_a.p variable */));
  threadData->lastEquationSolved = 998;
}

/*
equation index: 999
type: ALGORITHM

  $cse61 := pump_v3_basicCold_t.pump.preSou.Medium.setState_phX(pump.port_a.p, pump.port_b.h_outflow, {});
*/
void pump_v3_basicCold_t_eqFunction_999(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,999};
  base_array_t tmp112;
  pump__v3__basicCold__t_pump_preSou_Medium_ThermodynamicState tmp113;
  simple_alloc_1d_base_array(&tmp112, 0, NULL);
  tmp113 = omc_pump__v3__basicCold__t_pump_preSou_Medium_setState__phX(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[403]] /* pump.port_a.p variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[404]] /* pump.port_b.h_outflow variable */), tmp112);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[128]] /* $cse61.p variable */) = tmp113._p;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[127]] /* $cse61.T variable */) = tmp113._T;
  ;
  threadData->lastEquationSolved = 999;
}

/*
equation index: 1000
type: SIMPLE_ASSIGN
$cse60 = pump_v3_basicCold_t.pump.preSou.Medium.density($cse61)
*/
void pump_v3_basicCold_t_eqFunction_1000(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1000};
  pump__v3__basicCold__t_pump_preSou_Medium_ThermodynamicState tmp114;
  pump__v3__basicCold__t_pump_preSou_Medium_ThermodynamicState_wrap_vars(threadData,tmp114, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[128]] /* $cse61.p variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[127]] /* $cse61.T variable */));
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[126]] /* $cse60 variable */) = omc_pump__v3__basicCold__t_pump_preSou_Medium_density(threadData, tmp114);
  threadData->lastEquationSolved = 1000;
}

/*
equation index: 1001
type: SIMPLE_ASSIGN
$cse59 = Modelica.Fluid.Utilities.regStep(pump.motSpe.y, $cse60, $cse62, pump.preSou.m_flow_small)
*/
void pump_v3_basicCold_t_eqFunction_1001(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1001};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[123]] /* $cse59 variable */) = omc_Modelica_Fluid_Utilities_regStep(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[17]] /* pump.motSpe.y STATE(1) */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[126]] /* $cse60 variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[129]] /* $cse62 variable */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[906]] /* pump.preSou.m_flow_small PARAM */));
  threadData->lastEquationSolved = 1001;
}

/*
equation index: 1002
type: SIMPLE_ASSIGN
pump.preSou.V_flow = pump.motSpe.y / $cse59
*/
void pump_v3_basicCold_t_eqFunction_1002(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1002};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[406]] /* pump.preSou.V_flow variable */) = DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[17]] /* pump.motSpe.y STATE(1) */),(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[123]] /* $cse59 variable */),"$cse59",equationIndexes);
  threadData->lastEquationSolved = 1002;
}

/*
equation index: 1003
type: SIMPLE_ASSIGN
pump.heatPort.T = pump_v3_basicCold_t.pump.vol.Medium.temperature_phX(pump.port_a.p, pump.port_b.h_outflow, {1.0})
*/
void pump_v3_basicCold_t_eqFunction_1003(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1003};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[401]] /* pump.heatPort.T variable */) = omc_pump__v3__basicCold__t_pump_vol_Medium_temperature__phX(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[403]] /* pump.port_a.p variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[404]] /* pump.port_b.h_outflow variable */), _OMC_LIT47);
  threadData->lastEquationSolved = 1003;
}

/*
equation index: 1004
type: SIMPLE_ASSIGN
pump_power.port.Q_flow = (-pump_power.Q_flow) * (1.0 + pump_power.alpha * (pump.heatPort.T - pump_power.T_ref))
*/
void pump_v3_basicCold_t_eqFunction_1004(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1004};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[428]] /* pump_power.port.Q_flow variable */) = ((-(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[944]] /* pump_power.Q_flow PARAM */))) * (1.0 + ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[946]] /* pump_power.alpha PARAM */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[401]] /* pump.heatPort.T variable */) - (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[945]] /* pump_power.T_ref PARAM */)));
  threadData->lastEquationSolved = 1004;
}

/*
equation index: 1005
type: SIMPLE_ASSIGN
pump.vol.heaFloSen.Q_flow = pump.prePow.Q_flow - pump_power.port.Q_flow
*/
void pump_v3_basicCold_t_eqFunction_1005(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1005};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[427]] /* pump.vol.heaFloSen.Q_flow variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[405]] /* pump.prePow.Q_flow variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[428]] /* pump_power.port.Q_flow variable */);
  threadData->lastEquationSolved = 1005;
}

/*
equation index: 1006
type: SIMPLE_ASSIGN
$DER.pump.vol.dynBal.U = pump.vol.dynBal.Hb_flow + pump.vol.heaFloSen.Q_flow
*/
void pump_v3_basicCold_t_eqFunction_1006(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1006};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[39]] /* der(pump.vol.dynBal.U) STATE_DER */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[414]] /* pump.vol.dynBal.Hb_flow variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[427]] /* pump.vol.heaFloSen.Q_flow variable */);
  threadData->lastEquationSolved = 1006;
}

/*
equation index: 1007
type: SIMPLE_ASSIGN
plugFlowPipe_heat.vol_b.T = pump_v3_basicCold_t.plugFlowPipe_heat.vol_b.Medium.temperature_phX(pump.port_a.p, plugFlowPipe_heat.port_b.h_outflow, {1.0})
*/
void pump_v3_basicCold_t_eqFunction_1007(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1007};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[372]] /* plugFlowPipe_heat.vol_b.T variable */) = omc_pump__v3__basicCold__t_plugFlowPipe__heat_vol__b_Medium_temperature__phX(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[403]] /* pump.port_a.p variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[347]] /* plugFlowPipe_heat.port_b.h_outflow variable */), _OMC_LIT47);
  threadData->lastEquationSolved = 1007;
}

/*
equation index: 1008
type: ALGORITHM

  $cse53 := pump_v3_basicCold_t.plugFlowPipe_heat.del.Medium.setState_phX(pump.port_a.p, plugFlowPipe_heat.port_b.h_outflow, {});
*/
void pump_v3_basicCold_t_eqFunction_1008(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1008};
  base_array_t tmp115;
  pump__v3__basicCold__t_plugFlowPipe__heat_del_Medium_ThermodynamicState tmp116;
  simple_alloc_1d_base_array(&tmp115, 0, NULL);
  tmp116 = omc_pump__v3__basicCold__t_plugFlowPipe__heat_del_Medium_setState__phX(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[403]] /* pump.port_a.p variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[347]] /* plugFlowPipe_heat.port_b.h_outflow variable */), tmp115);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[115]] /* $cse53.p variable */) = tmp116._p;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[114]] /* $cse53.T variable */) = tmp116._T;
  ;
  threadData->lastEquationSolved = 1008;
}

/*
equation index: 1009
type: SIMPLE_ASSIGN
$cse52 = pump_v3_basicCold_t.plugFlowPipe_heat.del.Medium.density($cse53)
*/
void pump_v3_basicCold_t_eqFunction_1009(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1009};
  pump__v3__basicCold__t_plugFlowPipe__heat_del_Medium_ThermodynamicState tmp117;
  pump__v3__basicCold__t_plugFlowPipe__heat_del_Medium_ThermodynamicState_wrap_vars(threadData,tmp117, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[115]] /* $cse53.p variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[114]] /* $cse53.T variable */));
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[113]] /* $cse52 variable */) = omc_pump__v3__basicCold__t_plugFlowPipe__heat_del_Medium_density(threadData, tmp117);
  threadData->lastEquationSolved = 1009;
}

/*
equation index: 1010
type: ALGORITHM

  $cse51 := pump_v3_basicCold_t.plugFlowPipe_heat.del.Medium.setState_phX(pump.port_a.p, plugFlowPipe_heat.port_a.h_outflow, {});
*/
void pump_v3_basicCold_t_eqFunction_1010(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1010};
  base_array_t tmp118;
  pump__v3__basicCold__t_plugFlowPipe__heat_del_Medium_ThermodynamicState tmp119;
  simple_alloc_1d_base_array(&tmp118, 0, NULL);
  tmp119 = omc_pump__v3__basicCold__t_plugFlowPipe__heat_del_Medium_setState__phX(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[403]] /* pump.port_a.p variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[345]] /* plugFlowPipe_heat.port_a.h_outflow variable */), tmp118);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[112]] /* $cse51.p variable */) = tmp119._p;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[111]] /* $cse51.T variable */) = tmp119._T;
  ;
  threadData->lastEquationSolved = 1010;
}

/*
equation index: 1011
type: SIMPLE_ASSIGN
$cse50 = pump_v3_basicCold_t.plugFlowPipe_heat.del.Medium.density($cse51)
*/
void pump_v3_basicCold_t_eqFunction_1011(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1011};
  pump__v3__basicCold__t_plugFlowPipe__heat_del_Medium_ThermodynamicState tmp120;
  pump__v3__basicCold__t_plugFlowPipe__heat_del_Medium_ThermodynamicState_wrap_vars(threadData,tmp120, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[112]] /* $cse51.p variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[111]] /* $cse51.T variable */));
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[110]] /* $cse50 variable */) = omc_pump__v3__basicCold__t_plugFlowPipe__heat_del_Medium_density(threadData, tmp120);
  threadData->lastEquationSolved = 1011;
}

/*
equation index: 1012
type: SIMPLE_ASSIGN
$cse49 = Modelica.Fluid.Utilities.regStep(pump.motSpe.y, $cse50, $cse52, plugFlowPipe_heat.del.m_flow_small)
*/
void pump_v3_basicCold_t_eqFunction_1012(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1012};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[107]] /* $cse49 variable */) = omc_Modelica_Fluid_Utilities_regStep(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[17]] /* pump.motSpe.y STATE(1) */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[110]] /* $cse50 variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[113]] /* $cse52 variable */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[555]] /* plugFlowPipe_heat.del.m_flow_small PARAM */));
  threadData->lastEquationSolved = 1012;
}

/*
equation index: 1013
type: SIMPLE_ASSIGN
plugFlowPipe_heat.del.V_flow = pump.motSpe.y / $cse49
*/
void pump_v3_basicCold_t_eqFunction_1013(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1013};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[330]] /* plugFlowPipe_heat.del.V_flow variable */) = DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[17]] /* pump.motSpe.y STATE(1) */),(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[107]] /* $cse49 variable */),"$cse49",equationIndexes);
  threadData->lastEquationSolved = 1013;
}

/*
equation index: 1014
type: SIMPLE_ASSIGN
plugFlowPipe_heat.v = 5100.302614705827 * plugFlowPipe_heat.del.V_flow
*/
void pump_v3_basicCold_t_eqFunction_1014(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1014};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[355]] /* plugFlowPipe_heat.v variable */) = (5100.302614705827) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[330]] /* plugFlowPipe_heat.del.V_flow variable */));
  threadData->lastEquationSolved = 1014;
}

/*
equation index: 1015
type: SIMPLE_ASSIGN
$DER.plugFlowPipe_heat.del.x = plugFlowPipe_heat.v
*/
void pump_v3_basicCold_t_eqFunction_1015(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1015};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[34]] /* der(plugFlowPipe_heat.del.x) STATE_DER */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[355]] /* plugFlowPipe_heat.v variable */);
  threadData->lastEquationSolved = 1015;
}

/*
equation index: 1016
type: ALGORITHM

  $cse26 := pump_v3_basicCold_t.plugFlowPipe_heat.heaLos_b.Medium.setState_phX(pump.port_a.p, plugFlowPipe_heat.del.port_b.h_outflow, {});
*/
void pump_v3_basicCold_t_eqFunction_1016(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1016};
  base_array_t tmp121;
  pump__v3__basicCold__t_plugFlowPipe__heat_heaLos__b_Medium_ThermodynamicState tmp122;
  simple_alloc_1d_base_array(&tmp121, 0, NULL);
  tmp122 = omc_pump__v3__basicCold__t_plugFlowPipe__heat_heaLos__b_Medium_setState__phX(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[403]] /* pump.port_a.p variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[332]] /* plugFlowPipe_heat.del.port_b.h_outflow variable */), tmp121);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[72]] /* $cse26.p variable */) = tmp122._p;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[71]] /* $cse26.T variable */) = tmp122._T;
  ;
  threadData->lastEquationSolved = 1016;
}

/*
equation index: 1017
type: SIMPLE_ASSIGN
plugFlowPipe_heat.heaLos_b.T_a_inflow = pump_v3_basicCold_t.plugFlowPipe_heat.heaLos_b.Medium.temperature($cse26)
*/
void pump_v3_basicCold_t_eqFunction_1017(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1017};
  pump__v3__basicCold__t_plugFlowPipe__heat_heaLos__b_Medium_ThermodynamicState tmp123;
  pump__v3__basicCold__t_plugFlowPipe__heat_heaLos__b_Medium_ThermodynamicState_wrap_vars(threadData,tmp123, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[72]] /* $cse26.p variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[71]] /* $cse26.T variable */));
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[339]] /* plugFlowPipe_heat.heaLos_b.T_a_inflow variable */) = omc_pump__v3__basicCold__t_plugFlowPipe__heat_heaLos__b_Medium_temperature(threadData, tmp123);
  threadData->lastEquationSolved = 1017;
}

/*
equation index: 1018
type: SIMPLE_ASSIGN
plugFlowPipe_heat.vol_a.dynBal.medium.p_bar = 1e-5 * plugFlowPipe_heat.port_a.p
*/
void pump_v3_basicCold_t_eqFunction_1018(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1018};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[367]] /* plugFlowPipe_heat.vol_a.dynBal.medium.p_bar variable */) = (1e-5) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[346]] /* plugFlowPipe_heat.port_a.p variable */));
  threadData->lastEquationSolved = 1018;
}

/*
equation index: 1019
type: SIMPLE_ASSIGN
plugFlowPipe_heat.vol_a.T = pump_v3_basicCold_t.plugFlowPipe_heat.vol_a.Medium.temperature_phX(plugFlowPipe_heat.port_a.p, plugFlowPipe_heat.port_a.h_outflow, {1.0})
*/
void pump_v3_basicCold_t_eqFunction_1019(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1019};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[356]] /* plugFlowPipe_heat.vol_a.T variable */) = omc_pump__v3__basicCold__t_plugFlowPipe__heat_vol__a_Medium_temperature__phX(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[346]] /* plugFlowPipe_heat.port_a.p variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[345]] /* plugFlowPipe_heat.port_a.h_outflow variable */), _OMC_LIT47);
  threadData->lastEquationSolved = 1019;
}

/*
equation index: 1020
type: SIMPLE_ASSIGN
plugFlowPipe1.vol_b.T = pump_v3_basicCold_t.plugFlowPipe1.vol_b.Medium.temperature_phX(plugFlowPipe_heat.port_a.p, senTemIn_heat.port_b.h_outflow, {1.0})
*/
void pump_v3_basicCold_t_eqFunction_1020(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1020};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[255]] /* plugFlowPipe1.vol_b.T variable */) = omc_pump__v3__basicCold__t_plugFlowPipe1_vol__b_Medium_temperature__phX(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[346]] /* plugFlowPipe_heat.port_a.p variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[434]] /* senTemIn_heat.port_b.h_outflow variable */), _OMC_LIT47);
  threadData->lastEquationSolved = 1020;
}

/*
equation index: 1021
type: ALGORITHM

  $cse48 := pump_v3_basicCold_t.plugFlowPipe1.del.Medium.setState_phX(plugFlowPipe_heat.port_a.p, senTemIn_heat.port_b.h_outflow, {});
*/
void pump_v3_basicCold_t_eqFunction_1021(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1021};
  base_array_t tmp124;
  pump__v3__basicCold__t_plugFlowPipe1_del_Medium_ThermodynamicState tmp125;
  simple_alloc_1d_base_array(&tmp124, 0, NULL);
  tmp125 = omc_pump__v3__basicCold__t_plugFlowPipe1_del_Medium_setState__phX(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[346]] /* plugFlowPipe_heat.port_a.p variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[434]] /* senTemIn_heat.port_b.h_outflow variable */), tmp124);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[106]] /* $cse48.p variable */) = tmp125._p;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[105]] /* $cse48.T variable */) = tmp125._T;
  ;
  threadData->lastEquationSolved = 1021;
}

/*
equation index: 1022
type: SIMPLE_ASSIGN
$cse47 = pump_v3_basicCold_t.plugFlowPipe1.del.Medium.density($cse48)
*/
void pump_v3_basicCold_t_eqFunction_1022(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1022};
  pump__v3__basicCold__t_plugFlowPipe1_del_Medium_ThermodynamicState tmp126;
  pump__v3__basicCold__t_plugFlowPipe1_del_Medium_ThermodynamicState_wrap_vars(threadData,tmp126, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[106]] /* $cse48.p variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[105]] /* $cse48.T variable */));
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[104]] /* $cse47 variable */) = omc_pump__v3__basicCold__t_plugFlowPipe1_del_Medium_density(threadData, tmp126);
  threadData->lastEquationSolved = 1022;
}

/*
equation index: 1023
type: ALGORITHM

  $cse46 := pump_v3_basicCold_t.plugFlowPipe1.del.Medium.setState_phX(plugFlowPipe_heat.port_a.p, plugFlowPipe1.port_a.h_outflow, {});
*/
void pump_v3_basicCold_t_eqFunction_1023(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1023};
  base_array_t tmp127;
  pump__v3__basicCold__t_plugFlowPipe1_del_Medium_ThermodynamicState tmp128;
  simple_alloc_1d_base_array(&tmp127, 0, NULL);
  tmp128 = omc_pump__v3__basicCold__t_plugFlowPipe1_del_Medium_setState__phX(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[346]] /* plugFlowPipe_heat.port_a.p variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[229]] /* plugFlowPipe1.port_a.h_outflow variable */), tmp127);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[103]] /* $cse46.p variable */) = tmp128._p;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[102]] /* $cse46.T variable */) = tmp128._T;
  ;
  threadData->lastEquationSolved = 1023;
}

/*
equation index: 1024
type: SIMPLE_ASSIGN
$cse45 = pump_v3_basicCold_t.plugFlowPipe1.del.Medium.density($cse46)
*/
void pump_v3_basicCold_t_eqFunction_1024(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1024};
  pump__v3__basicCold__t_plugFlowPipe1_del_Medium_ThermodynamicState tmp129;
  pump__v3__basicCold__t_plugFlowPipe1_del_Medium_ThermodynamicState_wrap_vars(threadData,tmp129, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[103]] /* $cse46.p variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[102]] /* $cse46.T variable */));
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[101]] /* $cse45 variable */) = omc_pump__v3__basicCold__t_plugFlowPipe1_del_Medium_density(threadData, tmp129);
  threadData->lastEquationSolved = 1024;
}

/*
equation index: 1025
type: SIMPLE_ASSIGN
$cse44 = Modelica.Fluid.Utilities.regStep(pump.motSpe.y, $cse45, $cse47, plugFlowPipe1.del.m_flow_small)
*/
void pump_v3_basicCold_t_eqFunction_1025(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1025};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[100]] /* $cse44 variable */) = omc_Modelica_Fluid_Utilities_regStep(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[17]] /* pump.motSpe.y STATE(1) */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[101]] /* $cse45 variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[104]] /* $cse47 variable */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[256]] /* plugFlowPipe1.del.m_flow_small PARAM */));
  threadData->lastEquationSolved = 1025;
}

/*
equation index: 1026
type: SIMPLE_ASSIGN
plugFlowPipe1.del.V_flow = pump.motSpe.y / $cse44
*/
void pump_v3_basicCold_t_eqFunction_1026(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1026};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[214]] /* plugFlowPipe1.del.V_flow variable */) = DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[17]] /* pump.motSpe.y STATE(1) */),(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[100]] /* $cse44 variable */),"$cse44",equationIndexes);
  threadData->lastEquationSolved = 1026;
}

/*
equation index: 1027
type: SIMPLE_ASSIGN
plugFlowPipe1.v = 5100.302614705827 * plugFlowPipe1.del.V_flow
*/
void pump_v3_basicCold_t_eqFunction_1027(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1027};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[238]] /* plugFlowPipe1.v variable */) = (5100.302614705827) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[214]] /* plugFlowPipe1.del.V_flow variable */));
  threadData->lastEquationSolved = 1027;
}

/*
equation index: 1028
type: SIMPLE_ASSIGN
$DER.plugFlowPipe1.del.x = plugFlowPipe1.v
*/
void pump_v3_basicCold_t_eqFunction_1028(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1028};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[26]] /* der(plugFlowPipe1.del.x) STATE_DER */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[238]] /* plugFlowPipe1.v variable */);
  threadData->lastEquationSolved = 1028;
}

/*
equation index: 1029
type: ALGORITHM

  $cse22 := pump_v3_basicCold_t.plugFlowPipe_heat.heaLos_a.Medium.setState_phX(plugFlowPipe_heat.port_a.p, plugFlowPipe_heat.port_a.h_outflow, {});
*/
void pump_v3_basicCold_t_eqFunction_1029(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1029};
  base_array_t tmp130;
  pump__v3__basicCold__t_plugFlowPipe__heat_heaLos__a_Medium_ThermodynamicState tmp131;
  simple_alloc_1d_base_array(&tmp130, 0, NULL);
  tmp131 = omc_pump__v3__basicCold__t_plugFlowPipe__heat_heaLos__a_Medium_setState__phX(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[346]] /* plugFlowPipe_heat.port_a.p variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[345]] /* plugFlowPipe_heat.port_a.h_outflow variable */), tmp130);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[66]] /* $cse22.p variable */) = tmp131._p;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[65]] /* $cse22.T variable */) = tmp131._T;
  ;
  threadData->lastEquationSolved = 1029;
}

/*
equation index: 1030
type: SIMPLE_ASSIGN
plugFlowPipe_heat.heaLos_a.T_a_inflow = pump_v3_basicCold_t.plugFlowPipe_heat.heaLos_a.Medium.temperature($cse22)
*/
void pump_v3_basicCold_t_eqFunction_1030(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1030};
  pump__v3__basicCold__t_plugFlowPipe__heat_heaLos__a_Medium_ThermodynamicState tmp132;
  pump__v3__basicCold__t_plugFlowPipe__heat_heaLos__a_Medium_ThermodynamicState_wrap_vars(threadData,tmp132, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[66]] /* $cse22.p variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[65]] /* $cse22.T variable */));
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[334]] /* plugFlowPipe_heat.heaLos_a.T_a_inflow variable */) = omc_pump__v3__basicCold__t_plugFlowPipe__heat_heaLos__a_Medium_temperature(threadData, tmp132);
  threadData->lastEquationSolved = 1030;
}

void pump_v3_basicCold_t_eqFunction_1031(DATA*, threadData_t*);
void pump_v3_basicCold_t_eqFunction_1032(DATA*, threadData_t*);
void pump_v3_basicCold_t_eqFunction_1033(DATA*, threadData_t*);
void pump_v3_basicCold_t_eqFunction_1034(DATA*, threadData_t*);
void pump_v3_basicCold_t_eqFunction_1035(DATA*, threadData_t*);
void pump_v3_basicCold_t_eqFunction_1036(DATA*, threadData_t*);
void pump_v3_basicCold_t_eqFunction_1037(DATA*, threadData_t*);
void pump_v3_basicCold_t_eqFunction_1038(DATA*, threadData_t*);
void pump_v3_basicCold_t_eqFunction_1039(DATA*, threadData_t*);
/*
equation index: 1040
indexNonlinear: 10
type: NONLINEAR

vars: {plugFlowPipe_heat.heatPort.T}
eqns: {1031, 1032, 1033, 1034, 1035, 1036, 1037, 1038, 1039}
*/
void pump_v3_basicCold_t_eqFunction_1040(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1040};
  int retValue;
  infoStreamPrint(OMC_LOG_DT, 0, "Solving nonlinear system 1040 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
  /* get old value */
  data->simulationInfo->nonlinearSystemData[10].nlsxOld[0] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[344]] /* plugFlowPipe_heat.heatPort.T variable */);
  retValue = solve_nonlinear_system(data, threadData, 10);
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,1040};
    throwStreamPrintWithEquationIndexes(threadData, omc_dummyFileInfo, indexes, "Solving non-linear system 1040 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
  }
  /* write solution */
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[344]] /* plugFlowPipe_heat.heatPort.T variable */) = data->simulationInfo->nonlinearSystemData[10].nlsx[0];
  threadData->lastEquationSolved = 1040;
}

/*
equation index: 1041
type: ALGORITHM

  $cse25 := pump_v3_basicCold_t.plugFlowPipe_heat.heaLos_b.Medium.setState_pTX(pump.port_a.p, plugFlowPipe_heat.heaLos_b.T_b_outflow, {});
*/
void pump_v3_basicCold_t_eqFunction_1041(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1041};
  base_array_t tmp133;
  pump__v3__basicCold__t_plugFlowPipe__heat_heaLos__b_Medium_ThermodynamicState tmp134;
  simple_alloc_1d_base_array(&tmp133, 0, NULL);
  tmp134 = omc_pump__v3__basicCold__t_plugFlowPipe__heat_heaLos__b_Medium_setState__pTX(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[403]] /* pump.port_a.p variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[340]] /* plugFlowPipe_heat.heaLos_b.T_b_outflow variable */), tmp133);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[70]] /* $cse25.p variable */) = tmp134._p;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[69]] /* $cse25.T variable */) = tmp134._T;
  ;
  threadData->lastEquationSolved = 1041;
}

/*
equation index: 1042
type: SIMPLE_ASSIGN
plugFlowPipe_heat.heaLos_b.port_b.h_outflow = pump_v3_basicCold_t.plugFlowPipe_heat.heaLos_b.Medium.specificEnthalpy($cse25)
*/
void pump_v3_basicCold_t_eqFunction_1042(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1042};
  pump__v3__basicCold__t_plugFlowPipe__heat_heaLos__b_Medium_ThermodynamicState tmp135;
  pump__v3__basicCold__t_plugFlowPipe__heat_heaLos__b_Medium_ThermodynamicState_wrap_vars(threadData,tmp135, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[70]] /* $cse25.p variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[69]] /* $cse25.T variable */));
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[343]] /* plugFlowPipe_heat.heaLos_b.port_b.h_outflow variable */) = omc_pump__v3__basicCold__t_plugFlowPipe__heat_heaLos__b_Medium_specificEnthalpy(threadData, tmp135);
  threadData->lastEquationSolved = 1042;
}

/*
equation index: 1043
type: SIMPLE_ASSIGN
plugFlowPipe_heat.vol_b.dynBal.ports_H_flow[1] = semiLinear(pump.motSpe.y, plugFlowPipe_heat.heaLos_b.port_b.h_outflow, plugFlowPipe_heat.port_b.h_outflow)
*/
void pump_v3_basicCold_t_eqFunction_1043(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1043};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[383]] /* plugFlowPipe_heat.vol_b.dynBal.ports_H_flow[1] variable */) = semiLinear((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[17]] /* pump.motSpe.y STATE(1) */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[343]] /* plugFlowPipe_heat.heaLos_b.port_b.h_outflow variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[347]] /* plugFlowPipe_heat.port_b.h_outflow variable */));
  threadData->lastEquationSolved = 1043;
}

/*
equation index: 1044
type: SIMPLE_ASSIGN
plugFlowPipe_heat.vol_b.dynBal.Hb_flow = plugFlowPipe_heat.vol_b.dynBal.ports_H_flow[1] + plugFlowPipe_heat.vol_b.dynBal.ports_H_flow[2]
*/
void pump_v3_basicCold_t_eqFunction_1044(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1044};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[373]] /* plugFlowPipe_heat.vol_b.dynBal.Hb_flow variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[383]] /* plugFlowPipe_heat.vol_b.dynBal.ports_H_flow[1] variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[384]] /* plugFlowPipe_heat.vol_b.dynBal.ports_H_flow[2] variable */);
  threadData->lastEquationSolved = 1044;
}

/*
equation index: 1045
type: SIMPLE_ASSIGN
$DER.plugFlowPipe_heat.vol_b.dynBal.U = plugFlowPipe_heat.vol_b.dynBal.Hb_flow
*/
void pump_v3_basicCold_t_eqFunction_1045(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1045};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[37]] /* der(plugFlowPipe_heat.vol_b.dynBal.U) STATE_DER */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[373]] /* plugFlowPipe_heat.vol_b.dynBal.Hb_flow variable */);
  threadData->lastEquationSolved = 1045;
}

/*
equation index: 1046
type: SIMPLE_ASSIGN
Water_Reserv.port.Q_flow = (-convectiveResistor_wAir.Q_flow) - Q_heat_pipe_W
*/
void pump_v3_basicCold_t_eqFunction_1046(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1046};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[145]] /* Water_Reserv.port.Q_flow variable */) = (-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[154]] /* convectiveResistor_wAir.Q_flow variable */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[137]] /* Q_heat_pipe_W variable */);
  threadData->lastEquationSolved = 1046;
}

/*
equation index: 1047
type: SIMPLE_ASSIGN
Water_Reserv.der_T = Water_Reserv.port.Q_flow / Water_Reserv.C
*/
void pump_v3_basicCold_t_eqFunction_1047(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1047};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[144]] /* Water_Reserv.der_T variable */) = DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[145]] /* Water_Reserv.port.Q_flow variable */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[46]] /* Water_Reserv.C PARAM */),"Water_Reserv.C",equationIndexes);
  threadData->lastEquationSolved = 1047;
}

/*
equation index: 1048
type: SIMPLE_ASSIGN
$DER.Water_Reserv.T = Water_Reserv.der_T
*/
void pump_v3_basicCold_t_eqFunction_1048(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1048};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[21]] /* der(Water_Reserv.T) STATE_DER */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[144]] /* Water_Reserv.der_T variable */);
  threadData->lastEquationSolved = 1048;
}

/*
equation index: 1049
type: SIMPLE_ASSIGN
Q_heat_total_W = Q_heat_pipe_W + P_pumpHeat
*/
void pump_v3_basicCold_t_eqFunction_1049(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1049};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[138]] /* Q_heat_total_W variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[137]] /* Q_heat_pipe_W variable */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5]] /* P_pumpHeat PARAM */);
  threadData->lastEquationSolved = 1049;
}

/*
equation index: 1050
type: ALGORITHM

  $cse20 := pump_v3_basicCold_t.senTemIn_heat.Medium.setState_phX(plugFlowPipe_heat.port_a.p, senTemIn_heat.port_b.h_outflow, {});
*/
void pump_v3_basicCold_t_eqFunction_1050(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1050};
  base_array_t tmp136;
  pump__v3__basicCold__t_senTemIn__heat_Medium_ThermodynamicState tmp137;
  simple_alloc_1d_base_array(&tmp136, 0, NULL);
  tmp137 = omc_pump__v3__basicCold__t_senTemIn__heat_Medium_setState__phX(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[346]] /* plugFlowPipe_heat.port_a.p variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[434]] /* senTemIn_heat.port_b.h_outflow variable */), tmp136);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[62]] /* $cse20.p variable */) = tmp137._p;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[61]] /* $cse20.T variable */) = tmp137._T;
  ;
  threadData->lastEquationSolved = 1050;
}

/*
equation index: 1051
type: SIMPLE_ASSIGN
senTemIn_heat.T_b_inflow = pump_v3_basicCold_t.senTemIn_heat.Medium.temperature($cse20)
*/
void pump_v3_basicCold_t_eqFunction_1051(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1051};
  pump__v3__basicCold__t_senTemIn__heat_Medium_ThermodynamicState tmp138;
  pump__v3__basicCold__t_senTemIn__heat_Medium_ThermodynamicState_wrap_vars(threadData,tmp138, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[62]] /* $cse20.p variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[61]] /* $cse20.T variable */));
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[431]] /* senTemIn_heat.T_b_inflow variable */) = omc_pump__v3__basicCold__t_senTemIn__heat_Medium_temperature(threadData, tmp138);
  threadData->lastEquationSolved = 1051;
}

/*
equation index: 1052
type: SIMPLE_ASSIGN
senTemIn_heat.TMed = Modelica.Fluid.Utilities.regStep(pump.motSpe.y, senTemIn_heat.T_b_inflow, senTemIn_heat.T_b_inflow, senTemIn_heat.m_flow_small)
*/
void pump_v3_basicCold_t_eqFunction_1052(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1052};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[430]] /* senTemIn_heat.TMed variable */) = omc_Modelica_Fluid_Utilities_regStep(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[17]] /* pump.motSpe.y STATE(1) */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[431]] /* senTemIn_heat.T_b_inflow variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[431]] /* senTemIn_heat.T_b_inflow variable */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[959]] /* senTemIn_heat.m_flow_small PARAM */));
  threadData->lastEquationSolved = 1052;
}

/*
equation index: 1053
type: SIMPLE_ASSIGN
$DER.senTemIn_heat.T = (senTemIn_heat.TMed - senTemIn_heat.T) * senTemIn_heat.k
*/
void pump_v3_basicCold_t_eqFunction_1053(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1053};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[40]] /* der(senTemIn_heat.T) STATE_DER */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[430]] /* senTemIn_heat.TMed variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[19]] /* senTemIn_heat.T STATE(1) */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[432]] /* senTemIn_heat.k variable */));
  threadData->lastEquationSolved = 1053;
}

/*
equation index: 1054
type: ALGORITHM

  $cse17 := pump_v3_basicCold_t.plugFlowPipe1.heaLos_b.Medium.setState_phX(plugFlowPipe_heat.port_a.p, plugFlowPipe1.del.port_b.h_outflow, {});
*/
void pump_v3_basicCold_t_eqFunction_1054(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1054};
  base_array_t tmp139;
  pump__v3__basicCold__t_plugFlowPipe1_heaLos__b_Medium_ThermodynamicState tmp140;
  simple_alloc_1d_base_array(&tmp139, 0, NULL);
  tmp140 = omc_pump__v3__basicCold__t_plugFlowPipe1_heaLos__b_Medium_setState__phX(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[346]] /* plugFlowPipe_heat.port_a.p variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[216]] /* plugFlowPipe1.del.port_b.h_outflow variable */), tmp139);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[56]] /* $cse17.p variable */) = tmp140._p;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[55]] /* $cse17.T variable */) = tmp140._T;
  ;
  threadData->lastEquationSolved = 1054;
}

/*
equation index: 1055
type: SIMPLE_ASSIGN
plugFlowPipe1.heaLos_b.T_a_inflow = pump_v3_basicCold_t.plugFlowPipe1.heaLos_b.Medium.temperature($cse17)
*/
void pump_v3_basicCold_t_eqFunction_1055(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1055};
  pump__v3__basicCold__t_plugFlowPipe1_heaLos__b_Medium_ThermodynamicState tmp141;
  pump__v3__basicCold__t_plugFlowPipe1_heaLos__b_Medium_ThermodynamicState_wrap_vars(threadData,tmp141, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[56]] /* $cse17.p variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[55]] /* $cse17.T variable */));
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[223]] /* plugFlowPipe1.heaLos_b.T_a_inflow variable */) = omc_pump__v3__basicCold__t_plugFlowPipe1_heaLos__b_Medium_temperature(threadData, tmp141);
  threadData->lastEquationSolved = 1055;
}

void pump_v3_basicCold_t_eqFunction_1056(DATA*, threadData_t*);
void pump_v3_basicCold_t_eqFunction_1057(DATA*, threadData_t*);
void pump_v3_basicCold_t_eqFunction_1058(DATA*, threadData_t*);
void pump_v3_basicCold_t_eqFunction_1059(DATA*, threadData_t*);
void pump_v3_basicCold_t_eqFunction_1060(DATA*, threadData_t*);
void pump_v3_basicCold_t_eqFunction_1061(DATA*, threadData_t*);
void pump_v3_basicCold_t_eqFunction_1062(DATA*, threadData_t*);
void pump_v3_basicCold_t_eqFunction_1063(DATA*, threadData_t*);
void pump_v3_basicCold_t_eqFunction_1064(DATA*, threadData_t*);
/*
equation index: 1065
indexNonlinear: 11
type: NONLINEAR

vars: {plugFlowPipe1.heatPort.T}
eqns: {1056, 1057, 1058, 1059, 1060, 1061, 1062, 1063, 1064}
*/
void pump_v3_basicCold_t_eqFunction_1065(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1065};
  int retValue;
  infoStreamPrint(OMC_LOG_DT, 0, "Solving nonlinear system 1065 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
  /* get old value */
  data->simulationInfo->nonlinearSystemData[11].nlsxOld[0] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[228]] /* plugFlowPipe1.heatPort.T variable */);
  retValue = solve_nonlinear_system(data, threadData, 11);
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,1065};
    throwStreamPrintWithEquationIndexes(threadData, omc_dummyFileInfo, indexes, "Solving non-linear system 1065 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
  }
  /* write solution */
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[228]] /* plugFlowPipe1.heatPort.T variable */) = data->simulationInfo->nonlinearSystemData[11].nlsx[0];
  threadData->lastEquationSolved = 1065;
}

/*
equation index: 1066
type: ALGORITHM

  $cse12 := pump_v3_basicCold_t.plugFlowPipe1.heaLos_a.Medium.setState_pTX(plugFlowPipe1.port_a.p, plugFlowPipe1.heaLos_a.T_b_outflow, {});
*/
void pump_v3_basicCold_t_eqFunction_1066(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1066};
  base_array_t tmp142;
  pump__v3__basicCold__t_plugFlowPipe1_heaLos__a_Medium_ThermodynamicState tmp143;
  simple_alloc_1d_base_array(&tmp142, 0, NULL);
  tmp143 = omc_pump__v3__basicCold__t_plugFlowPipe1_heaLos__a_Medium_setState__pTX(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[230]] /* plugFlowPipe1.port_a.p variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[219]] /* plugFlowPipe1.heaLos_a.T_b_outflow variable */), tmp142);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[48]] /* $cse12.p variable */) = tmp143._p;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[47]] /* $cse12.T variable */) = tmp143._T;
  ;
  threadData->lastEquationSolved = 1066;
}

/*
equation index: 1067
type: SIMPLE_ASSIGN
plugFlowPipe1.heaLos_a.port_b.h_outflow = pump_v3_basicCold_t.plugFlowPipe1.heaLos_a.Medium.specificEnthalpy($cse12)
*/
void pump_v3_basicCold_t_eqFunction_1067(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1067};
  pump__v3__basicCold__t_plugFlowPipe1_heaLos__a_Medium_ThermodynamicState tmp144;
  pump__v3__basicCold__t_plugFlowPipe1_heaLos__a_Medium_ThermodynamicState_wrap_vars(threadData,tmp144, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[48]] /* $cse12.p variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[47]] /* $cse12.T variable */));
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[222]] /* plugFlowPipe1.heaLos_a.port_b.h_outflow variable */) = omc_pump__v3__basicCold__t_plugFlowPipe1_heaLos__a_Medium_specificEnthalpy(threadData, tmp144);
  threadData->lastEquationSolved = 1067;
}

/*
equation index: 1068
type: SIMPLE_ASSIGN
plugFlowPipe1.vol_a.dynBal.ports_H_flow[2] = -semiLinear(pump.motSpe.y, plugFlowPipe1.port_a.h_outflow, plugFlowPipe1.heaLos_a.port_b.h_outflow)
*/
void pump_v3_basicCold_t_eqFunction_1068(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1068};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[252]] /* plugFlowPipe1.vol_a.dynBal.ports_H_flow[2] variable */) = (-semiLinear((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[17]] /* pump.motSpe.y STATE(1) */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[229]] /* plugFlowPipe1.port_a.h_outflow variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[222]] /* plugFlowPipe1.heaLos_a.port_b.h_outflow variable */)));
  threadData->lastEquationSolved = 1068;
}

/*
equation index: 1069
type: SIMPLE_ASSIGN
plugFlowPipe1.vol_a.dynBal.Hb_flow = plugFlowPipe1.vol_a.dynBal.ports_H_flow[1] + plugFlowPipe1.vol_a.dynBal.ports_H_flow[2]
*/
void pump_v3_basicCold_t_eqFunction_1069(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1069};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[240]] /* plugFlowPipe1.vol_a.dynBal.Hb_flow variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[251]] /* plugFlowPipe1.vol_a.dynBal.ports_H_flow[1] variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[252]] /* plugFlowPipe1.vol_a.dynBal.ports_H_flow[2] variable */);
  threadData->lastEquationSolved = 1069;
}

/*
equation index: 1070
type: SIMPLE_ASSIGN
$DER.plugFlowPipe1.vol_a.dynBal.U = plugFlowPipe1.vol_a.dynBal.Hb_flow
*/
void pump_v3_basicCold_t_eqFunction_1070(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1070};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[28]] /* der(plugFlowPipe1.vol_a.dynBal.U) STATE_DER */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[240]] /* plugFlowPipe1.vol_a.dynBal.Hb_flow variable */);
  threadData->lastEquationSolved = 1070;
}

/*
equation index: 1071
type: ALGORITHM

  $cse21 := pump_v3_basicCold_t.plugFlowPipe_heat.heaLos_a.Medium.setState_pTX(plugFlowPipe_heat.port_a.p, plugFlowPipe_heat.heaLos_a.T_b_outflow, {});
*/
void pump_v3_basicCold_t_eqFunction_1071(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1071};
  base_array_t tmp145;
  pump__v3__basicCold__t_plugFlowPipe__heat_heaLos__a_Medium_ThermodynamicState tmp146;
  simple_alloc_1d_base_array(&tmp145, 0, NULL);
  tmp146 = omc_pump__v3__basicCold__t_plugFlowPipe__heat_heaLos__a_Medium_setState__pTX(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[346]] /* plugFlowPipe_heat.port_a.p variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[335]] /* plugFlowPipe_heat.heaLos_a.T_b_outflow variable */), tmp145);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[64]] /* $cse21.p variable */) = tmp146._p;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[63]] /* $cse21.T variable */) = tmp146._T;
  ;
  threadData->lastEquationSolved = 1071;
}

/*
equation index: 1072
type: SIMPLE_ASSIGN
plugFlowPipe_heat.heaLos_a.port_b.h_outflow = pump_v3_basicCold_t.plugFlowPipe_heat.heaLos_a.Medium.specificEnthalpy($cse21)
*/
void pump_v3_basicCold_t_eqFunction_1072(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1072};
  pump__v3__basicCold__t_plugFlowPipe__heat_heaLos__a_Medium_ThermodynamicState tmp147;
  pump__v3__basicCold__t_plugFlowPipe__heat_heaLos__a_Medium_ThermodynamicState_wrap_vars(threadData,tmp147, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[64]] /* $cse21.p variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[63]] /* $cse21.T variable */));
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[338]] /* plugFlowPipe_heat.heaLos_a.port_b.h_outflow variable */) = omc_pump__v3__basicCold__t_plugFlowPipe__heat_heaLos__a_Medium_specificEnthalpy(threadData, tmp147);
  threadData->lastEquationSolved = 1072;
}

/*
equation index: 1073
type: SIMPLE_ASSIGN
plugFlowPipe_heat.vol_a.dynBal.ports_H_flow[2] = -semiLinear(pump.motSpe.y, plugFlowPipe_heat.port_a.h_outflow, plugFlowPipe_heat.heaLos_a.port_b.h_outflow)
*/
void pump_v3_basicCold_t_eqFunction_1073(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1073};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[369]] /* plugFlowPipe_heat.vol_a.dynBal.ports_H_flow[2] variable */) = (-semiLinear((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[17]] /* pump.motSpe.y STATE(1) */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[345]] /* plugFlowPipe_heat.port_a.h_outflow variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[338]] /* plugFlowPipe_heat.heaLos_a.port_b.h_outflow variable */)));
  threadData->lastEquationSolved = 1073;
}

/*
equation index: 1074
type: SIMPLE_ASSIGN
plugFlowPipe_heat.vol_a.dynBal.Hb_flow = plugFlowPipe_heat.vol_a.dynBal.ports_H_flow[1] + plugFlowPipe_heat.vol_a.dynBal.ports_H_flow[2]
*/
void pump_v3_basicCold_t_eqFunction_1074(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1074};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[357]] /* plugFlowPipe_heat.vol_a.dynBal.Hb_flow variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[368]] /* plugFlowPipe_heat.vol_a.dynBal.ports_H_flow[1] variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[369]] /* plugFlowPipe_heat.vol_a.dynBal.ports_H_flow[2] variable */);
  threadData->lastEquationSolved = 1074;
}

/*
equation index: 1075
type: SIMPLE_ASSIGN
$DER.plugFlowPipe_heat.vol_a.dynBal.U = plugFlowPipe_heat.vol_a.dynBal.Hb_flow
*/
void pump_v3_basicCold_t_eqFunction_1075(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1075};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[36]] /* der(plugFlowPipe_heat.vol_a.dynBal.U) STATE_DER */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[357]] /* plugFlowPipe_heat.vol_a.dynBal.Hb_flow variable */);
  threadData->lastEquationSolved = 1075;
}

/*
equation index: 1076
type: ALGORITHM

  $cse16 := pump_v3_basicCold_t.plugFlowPipe1.heaLos_b.Medium.setState_pTX(plugFlowPipe_heat.port_a.p, plugFlowPipe1.heaLos_b.T_b_outflow, {});
*/
void pump_v3_basicCold_t_eqFunction_1076(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1076};
  base_array_t tmp148;
  pump__v3__basicCold__t_plugFlowPipe1_heaLos__b_Medium_ThermodynamicState tmp149;
  simple_alloc_1d_base_array(&tmp148, 0, NULL);
  tmp149 = omc_pump__v3__basicCold__t_plugFlowPipe1_heaLos__b_Medium_setState__pTX(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[346]] /* plugFlowPipe_heat.port_a.p variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[224]] /* plugFlowPipe1.heaLos_b.T_b_outflow variable */), tmp148);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[54]] /* $cse16.p variable */) = tmp149._p;
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[53]] /* $cse16.T variable */) = tmp149._T;
  ;
  threadData->lastEquationSolved = 1076;
}

/*
equation index: 1077
type: SIMPLE_ASSIGN
plugFlowPipe1.heaLos_b.port_b.h_outflow = pump_v3_basicCold_t.plugFlowPipe1.heaLos_b.Medium.specificEnthalpy($cse16)
*/
void pump_v3_basicCold_t_eqFunction_1077(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1077};
  pump__v3__basicCold__t_plugFlowPipe1_heaLos__b_Medium_ThermodynamicState tmp150;
  pump__v3__basicCold__t_plugFlowPipe1_heaLos__b_Medium_ThermodynamicState_wrap_vars(threadData,tmp150, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[54]] /* $cse16.p variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[53]] /* $cse16.T variable */));
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[227]] /* plugFlowPipe1.heaLos_b.port_b.h_outflow variable */) = omc_pump__v3__basicCold__t_plugFlowPipe1_heaLos__b_Medium_specificEnthalpy(threadData, tmp150);
  threadData->lastEquationSolved = 1077;
}

/*
equation index: 1078
type: SIMPLE_ASSIGN
plugFlowPipe1.vol_b.dynBal.ports_H_flow[1] = semiLinear(pump.motSpe.y, plugFlowPipe1.heaLos_b.port_b.h_outflow, senTemIn_heat.port_b.h_outflow)
*/
void pump_v3_basicCold_t_eqFunction_1078(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1078};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[266]] /* plugFlowPipe1.vol_b.dynBal.ports_H_flow[1] variable */) = semiLinear((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[17]] /* pump.motSpe.y STATE(1) */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[227]] /* plugFlowPipe1.heaLos_b.port_b.h_outflow variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[434]] /* senTemIn_heat.port_b.h_outflow variable */));
  threadData->lastEquationSolved = 1078;
}

/*
equation index: 1079
type: SIMPLE_ASSIGN
plugFlowPipe1.vol_b.dynBal.Hb_flow = plugFlowPipe1.vol_b.dynBal.ports_H_flow[1] + plugFlowPipe1.vol_b.dynBal.ports_H_flow[2]
*/
void pump_v3_basicCold_t_eqFunction_1079(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1079};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[256]] /* plugFlowPipe1.vol_b.dynBal.Hb_flow variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[266]] /* plugFlowPipe1.vol_b.dynBal.ports_H_flow[1] variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[267]] /* plugFlowPipe1.vol_b.dynBal.ports_H_flow[2] variable */);
  threadData->lastEquationSolved = 1079;
}

/*
equation index: 1080
type: SIMPLE_ASSIGN
$DER.plugFlowPipe1.vol_b.dynBal.U = plugFlowPipe1.vol_b.dynBal.Hb_flow
*/
void pump_v3_basicCold_t_eqFunction_1080(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1080};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[29]] /* der(plugFlowPipe1.vol_b.dynBal.U) STATE_DER */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[256]] /* plugFlowPipe1.vol_b.dynBal.Hb_flow variable */);
  threadData->lastEquationSolved = 1080;
}

/*
equation index: 1081
type: SIMPLE_ASSIGN
plugFlowPipe2.res.dp = plugFlowPipe1.dp
*/
void pump_v3_basicCold_t_eqFunction_1081(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1081};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[289]] /* plugFlowPipe2.res.dp variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[217]] /* plugFlowPipe1.dp variable */);
  threadData->lastEquationSolved = 1081;
}

/*
equation index: 1082
type: SIMPLE_ASSIGN
plugFlowPipe.res.dp = plugFlowPipe1.dp
*/
void pump_v3_basicCold_t_eqFunction_1082(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1082};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[172]] /* plugFlowPipe.res.dp variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[217]] /* plugFlowPipe1.dp variable */);
  threadData->lastEquationSolved = 1082;
}

/*
equation index: 1083
type: SIMPLE_ASSIGN
Q_pump_W = P_pumpHeat
*/
void pump_v3_basicCold_t_eqFunction_1083(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1083};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[139]] /* Q_pump_W variable */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[5]] /* P_pumpHeat PARAM */);
  threadData->lastEquationSolved = 1083;
}

/*
equation index: 1111
type: ALGORITHM

  assert(noEvent(plugFlowPipe.vol_b.dynBal.medium.T >= 272.15), "In pump_v3_basicCold_t.plugFlowPipe.vol_b.dynBal.medium: Temperature T = " + String(plugFlowPipe.vol_b.dynBal.medium.T, 6, 0, true) + " K exceeded its minimum allowed value of " + String(-1.0, 6, 0, true) + " degC (" + String(272.15, 6, 0, true) + " Kelvin) as required from medium model \"IDEAS.Media.Water\".");
*/
void pump_v3_basicCold_t_eqFunction_1111(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1111};
  modelica_boolean tmp151;
  static const MMC_DEFSTRINGLIT(tmp152,73,"In pump_v3_basicCold_t.plugFlowPipe.vol_b.dynBal.medium: Temperature T = ");
  modelica_string tmp153;
  modelica_metatype tmpMeta154;
  static const MMC_DEFSTRINGLIT(tmp155,41," K exceeded its minimum allowed value of ");
  modelica_metatype tmpMeta156;
  modelica_string tmp157;
  modelica_metatype tmpMeta158;
  static const MMC_DEFSTRINGLIT(tmp159,7," degC (");
  modelica_metatype tmpMeta160;
  modelica_string tmp161;
  modelica_metatype tmpMeta162;
  static const MMC_DEFSTRINGLIT(tmp163,59," Kelvin) as required from medium model \"IDEAS.Media.Water\".");
  modelica_metatype tmpMeta164;
  static int tmp165 = 0;
  {
    tmp151 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[204]] /* plugFlowPipe.vol_b.dynBal.medium.T variable */),272.15);
    if(!tmp151)
    {
      tmp153 = modelica_real_to_modelica_string((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[204]] /* plugFlowPipe.vol_b.dynBal.medium.T variable */), ((modelica_integer) 6), ((modelica_integer) 0), 1 /* true */);
      tmpMeta154 = stringAppend(MMC_REFSTRINGLIT(tmp152),tmp153);
      tmpMeta156 = stringAppend(tmpMeta154,MMC_REFSTRINGLIT(tmp155));
      tmp157 = modelica_real_to_modelica_string(-1.0, ((modelica_integer) 6), ((modelica_integer) 0), 1 /* true */);
      tmpMeta158 = stringAppend(tmpMeta156,tmp157);
      tmpMeta160 = stringAppend(tmpMeta158,MMC_REFSTRINGLIT(tmp159));
      tmp161 = modelica_real_to_modelica_string(272.15, ((modelica_integer) 6), ((modelica_integer) 0), 1 /* true */);
      tmpMeta162 = stringAppend(tmpMeta160,tmp161);
      tmpMeta164 = stringAppend(tmpMeta162,MMC_REFSTRINGLIT(tmp163));
      {
        const char* assert_cond = "(noEvent(plugFlowPipe.vol_b.dynBal.medium.T >= 272.15))";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/work/IDEAS-master/IDEAS/Media/Water.mo",63,5,64,118,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta164));
          data->simulationInfo->needToReThrow = 1;
        } else {
          FILE_INFO info = {"/work/IDEAS-master/IDEAS/Media/Water.mo",63,5,64,118,0};
          omc_assert_withEquationIndexes(threadData, info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta164));
        }
      }
    }
  }
  threadData->lastEquationSolved = 1111;
}

/*
equation index: 1110
type: ALGORITHM

  assert(noEvent(plugFlowPipe.vol_b.dynBal.medium.T <= 403.15), "In pump_v3_basicCold_t.plugFlowPipe.vol_b.dynBal.medium: Temperature T = " + String(plugFlowPipe.vol_b.dynBal.medium.T, 6, 0, true) + " K exceeded its maximum allowed value of " + String(130.0, 6, 0, true) + " degC (" + String(403.15, 6, 0, true) + " Kelvin) as required from medium model \"IDEAS.Media.Water\".");
*/
void pump_v3_basicCold_t_eqFunction_1110(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1110};
  modelica_boolean tmp166;
  static const MMC_DEFSTRINGLIT(tmp167,73,"In pump_v3_basicCold_t.plugFlowPipe.vol_b.dynBal.medium: Temperature T = ");
  modelica_string tmp168;
  modelica_metatype tmpMeta169;
  static const MMC_DEFSTRINGLIT(tmp170,41," K exceeded its maximum allowed value of ");
  modelica_metatype tmpMeta171;
  modelica_string tmp172;
  modelica_metatype tmpMeta173;
  static const MMC_DEFSTRINGLIT(tmp174,7," degC (");
  modelica_metatype tmpMeta175;
  modelica_string tmp176;
  modelica_metatype tmpMeta177;
  static const MMC_DEFSTRINGLIT(tmp178,59," Kelvin) as required from medium model \"IDEAS.Media.Water\".");
  modelica_metatype tmpMeta179;
  static int tmp180 = 0;
  {
    tmp166 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[204]] /* plugFlowPipe.vol_b.dynBal.medium.T variable */),403.15);
    if(!tmp166)
    {
      tmp168 = modelica_real_to_modelica_string((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[204]] /* plugFlowPipe.vol_b.dynBal.medium.T variable */), ((modelica_integer) 6), ((modelica_integer) 0), 1 /* true */);
      tmpMeta169 = stringAppend(MMC_REFSTRINGLIT(tmp167),tmp168);
      tmpMeta171 = stringAppend(tmpMeta169,MMC_REFSTRINGLIT(tmp170));
      tmp172 = modelica_real_to_modelica_string(130.0, ((modelica_integer) 6), ((modelica_integer) 0), 1 /* true */);
      tmpMeta173 = stringAppend(tmpMeta171,tmp172);
      tmpMeta175 = stringAppend(tmpMeta173,MMC_REFSTRINGLIT(tmp174));
      tmp176 = modelica_real_to_modelica_string(403.15, ((modelica_integer) 6), ((modelica_integer) 0), 1 /* true */);
      tmpMeta177 = stringAppend(tmpMeta175,tmp176);
      tmpMeta179 = stringAppend(tmpMeta177,MMC_REFSTRINGLIT(tmp178));
      {
        const char* assert_cond = "(noEvent(plugFlowPipe.vol_b.dynBal.medium.T <= 403.15))";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/work/IDEAS-master/IDEAS/Media/Water.mo",66,5,67,118,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta179));
          data->simulationInfo->needToReThrow = 1;
        } else {
          FILE_INFO info = {"/work/IDEAS-master/IDEAS/Media/Water.mo",66,5,67,118,0};
          omc_assert_withEquationIndexes(threadData, info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta179));
        }
      }
    }
  }
  threadData->lastEquationSolved = 1110;
}

/*
equation index: 1109
type: ALGORITHM

  assert(noEvent(plugFlowPipe1.port_a.p >= 0.0), "Pressure (= " + String(plugFlowPipe1.port_a.p, 6, 0, true) + " Pa) of medium \"IDEAS.Media.Water\" is negative
(Temperature = " + String(plugFlowPipe.vol_b.dynBal.medium.T, 6, 0, true) + " K)");
*/
void pump_v3_basicCold_t_eqFunction_1109(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1109};
  modelica_boolean tmp181;
  static const MMC_DEFSTRINGLIT(tmp182,12,"Pressure (= ");
  modelica_string tmp183;
  modelica_metatype tmpMeta184;
  static const MMC_DEFSTRINGLIT(tmp185,62," Pa) of medium \"IDEAS.Media.Water\" is negative\n(Temperature = ");
  modelica_metatype tmpMeta186;
  modelica_string tmp187;
  modelica_metatype tmpMeta188;
  static const MMC_DEFSTRINGLIT(tmp189,3," K)");
  modelica_metatype tmpMeta190;
  static int tmp191 = 0;
  {
    tmp181 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[230]] /* plugFlowPipe1.port_a.p variable */),0.0);
    if(!tmp181)
    {
      tmp183 = modelica_real_to_modelica_string((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[230]] /* plugFlowPipe1.port_a.p variable */), ((modelica_integer) 6), ((modelica_integer) 0), 1 /* true */);
      tmpMeta184 = stringAppend(MMC_REFSTRINGLIT(tmp182),tmp183);
      tmpMeta186 = stringAppend(tmpMeta184,MMC_REFSTRINGLIT(tmp185));
      tmp187 = modelica_real_to_modelica_string((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[204]] /* plugFlowPipe.vol_b.dynBal.medium.T variable */), ((modelica_integer) 6), ((modelica_integer) 0), 1 /* true */);
      tmpMeta188 = stringAppend(tmpMeta186,tmp187);
      tmpMeta190 = stringAppend(tmpMeta188,MMC_REFSTRINGLIT(tmp189));
      {
        const char* assert_cond = "(noEvent(plugFlowPipe1.port_a.p >= 0.0))";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/work/IDEAS-master/IDEAS/Media/Water.mo",69,5,69,148,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta190));
          data->simulationInfo->needToReThrow = 1;
        } else {
          FILE_INFO info = {"/work/IDEAS-master/IDEAS/Media/Water.mo",69,5,69,148,0};
          omc_assert_withEquationIndexes(threadData, info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta190));
        }
      }
    }
  }
  threadData->lastEquationSolved = 1109;
}

/*
equation index: 1108
type: ALGORITHM

  assert(noEvent(plugFlowPipe.vol_a.dynBal.medium.T >= 272.15), "In pump_v3_basicCold_t.plugFlowPipe.vol_a.dynBal.medium: Temperature T = " + String(plugFlowPipe.vol_a.dynBal.medium.T, 6, 0, true) + " K exceeded its minimum allowed value of " + String(-1.0, 6, 0, true) + " degC (" + String(272.15, 6, 0, true) + " Kelvin) as required from medium model \"IDEAS.Media.Water\".");
*/
void pump_v3_basicCold_t_eqFunction_1108(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1108};
  modelica_boolean tmp192;
  static const MMC_DEFSTRINGLIT(tmp193,73,"In pump_v3_basicCold_t.plugFlowPipe.vol_a.dynBal.medium: Temperature T = ");
  modelica_string tmp194;
  modelica_metatype tmpMeta195;
  static const MMC_DEFSTRINGLIT(tmp196,41," K exceeded its minimum allowed value of ");
  modelica_metatype tmpMeta197;
  modelica_string tmp198;
  modelica_metatype tmpMeta199;
  static const MMC_DEFSTRINGLIT(tmp200,7," degC (");
  modelica_metatype tmpMeta201;
  modelica_string tmp202;
  modelica_metatype tmpMeta203;
  static const MMC_DEFSTRINGLIT(tmp204,59," Kelvin) as required from medium model \"IDEAS.Media.Water\".");
  modelica_metatype tmpMeta205;
  static int tmp206 = 0;
  {
    tmp192 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[188]] /* plugFlowPipe.vol_a.dynBal.medium.T variable */),272.15);
    if(!tmp192)
    {
      tmp194 = modelica_real_to_modelica_string((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[188]] /* plugFlowPipe.vol_a.dynBal.medium.T variable */), ((modelica_integer) 6), ((modelica_integer) 0), 1 /* true */);
      tmpMeta195 = stringAppend(MMC_REFSTRINGLIT(tmp193),tmp194);
      tmpMeta197 = stringAppend(tmpMeta195,MMC_REFSTRINGLIT(tmp196));
      tmp198 = modelica_real_to_modelica_string(-1.0, ((modelica_integer) 6), ((modelica_integer) 0), 1 /* true */);
      tmpMeta199 = stringAppend(tmpMeta197,tmp198);
      tmpMeta201 = stringAppend(tmpMeta199,MMC_REFSTRINGLIT(tmp200));
      tmp202 = modelica_real_to_modelica_string(272.15, ((modelica_integer) 6), ((modelica_integer) 0), 1 /* true */);
      tmpMeta203 = stringAppend(tmpMeta201,tmp202);
      tmpMeta205 = stringAppend(tmpMeta203,MMC_REFSTRINGLIT(tmp204));
      {
        const char* assert_cond = "(noEvent(plugFlowPipe.vol_a.dynBal.medium.T >= 272.15))";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/work/IDEAS-master/IDEAS/Media/Water.mo",63,5,64,118,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta205));
          data->simulationInfo->needToReThrow = 1;
        } else {
          FILE_INFO info = {"/work/IDEAS-master/IDEAS/Media/Water.mo",63,5,64,118,0};
          omc_assert_withEquationIndexes(threadData, info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta205));
        }
      }
    }
  }
  threadData->lastEquationSolved = 1108;
}

/*
equation index: 1107
type: ALGORITHM

  assert(noEvent(plugFlowPipe.vol_a.dynBal.medium.T <= 403.15), "In pump_v3_basicCold_t.plugFlowPipe.vol_a.dynBal.medium: Temperature T = " + String(plugFlowPipe.vol_a.dynBal.medium.T, 6, 0, true) + " K exceeded its maximum allowed value of " + String(130.0, 6, 0, true) + " degC (" + String(403.15, 6, 0, true) + " Kelvin) as required from medium model \"IDEAS.Media.Water\".");
*/
void pump_v3_basicCold_t_eqFunction_1107(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1107};
  modelica_boolean tmp207;
  static const MMC_DEFSTRINGLIT(tmp208,73,"In pump_v3_basicCold_t.plugFlowPipe.vol_a.dynBal.medium: Temperature T = ");
  modelica_string tmp209;
  modelica_metatype tmpMeta210;
  static const MMC_DEFSTRINGLIT(tmp211,41," K exceeded its maximum allowed value of ");
  modelica_metatype tmpMeta212;
  modelica_string tmp213;
  modelica_metatype tmpMeta214;
  static const MMC_DEFSTRINGLIT(tmp215,7," degC (");
  modelica_metatype tmpMeta216;
  modelica_string tmp217;
  modelica_metatype tmpMeta218;
  static const MMC_DEFSTRINGLIT(tmp219,59," Kelvin) as required from medium model \"IDEAS.Media.Water\".");
  modelica_metatype tmpMeta220;
  static int tmp221 = 0;
  {
    tmp207 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[188]] /* plugFlowPipe.vol_a.dynBal.medium.T variable */),403.15);
    if(!tmp207)
    {
      tmp209 = modelica_real_to_modelica_string((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[188]] /* plugFlowPipe.vol_a.dynBal.medium.T variable */), ((modelica_integer) 6), ((modelica_integer) 0), 1 /* true */);
      tmpMeta210 = stringAppend(MMC_REFSTRINGLIT(tmp208),tmp209);
      tmpMeta212 = stringAppend(tmpMeta210,MMC_REFSTRINGLIT(tmp211));
      tmp213 = modelica_real_to_modelica_string(130.0, ((modelica_integer) 6), ((modelica_integer) 0), 1 /* true */);
      tmpMeta214 = stringAppend(tmpMeta212,tmp213);
      tmpMeta216 = stringAppend(tmpMeta214,MMC_REFSTRINGLIT(tmp215));
      tmp217 = modelica_real_to_modelica_string(403.15, ((modelica_integer) 6), ((modelica_integer) 0), 1 /* true */);
      tmpMeta218 = stringAppend(tmpMeta216,tmp217);
      tmpMeta220 = stringAppend(tmpMeta218,MMC_REFSTRINGLIT(tmp219));
      {
        const char* assert_cond = "(noEvent(plugFlowPipe.vol_a.dynBal.medium.T <= 403.15))";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/work/IDEAS-master/IDEAS/Media/Water.mo",66,5,67,118,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta220));
          data->simulationInfo->needToReThrow = 1;
        } else {
          FILE_INFO info = {"/work/IDEAS-master/IDEAS/Media/Water.mo",66,5,67,118,0};
          omc_assert_withEquationIndexes(threadData, info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta220));
        }
      }
    }
  }
  threadData->lastEquationSolved = 1107;
}

/*
equation index: 1106
type: ALGORITHM

  assert(noEvent(bou1.p >= 0.0), "Pressure (= " + String(bou1.p, 6, 0, true) + " Pa) of medium \"IDEAS.Media.Water\" is negative
(Temperature = " + String(plugFlowPipe.vol_a.dynBal.medium.T, 6, 0, true) + " K)");
*/
void pump_v3_basicCold_t_eqFunction_1106(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1106};
  modelica_boolean tmp222;
  static const MMC_DEFSTRINGLIT(tmp223,12,"Pressure (= ");
  modelica_string tmp224;
  modelica_metatype tmpMeta225;
  static const MMC_DEFSTRINGLIT(tmp226,62," Pa) of medium \"IDEAS.Media.Water\" is negative\n(Temperature = ");
  modelica_metatype tmpMeta227;
  modelica_string tmp228;
  modelica_metatype tmpMeta229;
  static const MMC_DEFSTRINGLIT(tmp230,3," K)");
  modelica_metatype tmpMeta231;
  static int tmp232 = 0;
  {
    tmp222 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[50]] /* bou1.p PARAM */),0.0);
    if(!tmp222)
    {
      tmp224 = modelica_real_to_modelica_string((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[50]] /* bou1.p PARAM */), ((modelica_integer) 6), ((modelica_integer) 0), 1 /* true */);
      tmpMeta225 = stringAppend(MMC_REFSTRINGLIT(tmp223),tmp224);
      tmpMeta227 = stringAppend(tmpMeta225,MMC_REFSTRINGLIT(tmp226));
      tmp228 = modelica_real_to_modelica_string((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[188]] /* plugFlowPipe.vol_a.dynBal.medium.T variable */), ((modelica_integer) 6), ((modelica_integer) 0), 1 /* true */);
      tmpMeta229 = stringAppend(tmpMeta227,tmp228);
      tmpMeta231 = stringAppend(tmpMeta229,MMC_REFSTRINGLIT(tmp230));
      {
        const char* assert_cond = "(noEvent(bou1.p >= 0.0))";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/work/IDEAS-master/IDEAS/Media/Water.mo",69,5,69,148,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta231));
          data->simulationInfo->needToReThrow = 1;
        } else {
          FILE_INFO info = {"/work/IDEAS-master/IDEAS/Media/Water.mo",69,5,69,148,0};
          omc_assert_withEquationIndexes(threadData, info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta231));
        }
      }
    }
  }
  threadData->lastEquationSolved = 1106;
}

/*
equation index: 1105
type: ALGORITHM

  assert(noEvent(plugFlowPipe1.vol_b.dynBal.medium.T >= 272.15), "In pump_v3_basicCold_t.plugFlowPipe1.vol_b.dynBal.medium: Temperature T = " + String(plugFlowPipe1.vol_b.dynBal.medium.T, 6, 0, true) + " K exceeded its minimum allowed value of " + String(-1.0, 6, 0, true) + " degC (" + String(272.15, 6, 0, true) + " Kelvin) as required from medium model \"IDEAS.Media.Water\".");
*/
void pump_v3_basicCold_t_eqFunction_1105(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1105};
  modelica_boolean tmp233;
  static const MMC_DEFSTRINGLIT(tmp234,74,"In pump_v3_basicCold_t.plugFlowPipe1.vol_b.dynBal.medium: Temperature T = ");
  modelica_string tmp235;
  modelica_metatype tmpMeta236;
  static const MMC_DEFSTRINGLIT(tmp237,41," K exceeded its minimum allowed value of ");
  modelica_metatype tmpMeta238;
  modelica_string tmp239;
  modelica_metatype tmpMeta240;
  static const MMC_DEFSTRINGLIT(tmp241,7," degC (");
  modelica_metatype tmpMeta242;
  modelica_string tmp243;
  modelica_metatype tmpMeta244;
  static const MMC_DEFSTRINGLIT(tmp245,59," Kelvin) as required from medium model \"IDEAS.Media.Water\".");
  modelica_metatype tmpMeta246;
  static int tmp247 = 0;
  {
    tmp233 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[262]] /* plugFlowPipe1.vol_b.dynBal.medium.T variable */),272.15);
    if(!tmp233)
    {
      tmp235 = modelica_real_to_modelica_string((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[262]] /* plugFlowPipe1.vol_b.dynBal.medium.T variable */), ((modelica_integer) 6), ((modelica_integer) 0), 1 /* true */);
      tmpMeta236 = stringAppend(MMC_REFSTRINGLIT(tmp234),tmp235);
      tmpMeta238 = stringAppend(tmpMeta236,MMC_REFSTRINGLIT(tmp237));
      tmp239 = modelica_real_to_modelica_string(-1.0, ((modelica_integer) 6), ((modelica_integer) 0), 1 /* true */);
      tmpMeta240 = stringAppend(tmpMeta238,tmp239);
      tmpMeta242 = stringAppend(tmpMeta240,MMC_REFSTRINGLIT(tmp241));
      tmp243 = modelica_real_to_modelica_string(272.15, ((modelica_integer) 6), ((modelica_integer) 0), 1 /* true */);
      tmpMeta244 = stringAppend(tmpMeta242,tmp243);
      tmpMeta246 = stringAppend(tmpMeta244,MMC_REFSTRINGLIT(tmp245));
      {
        const char* assert_cond = "(noEvent(plugFlowPipe1.vol_b.dynBal.medium.T >= 272.15))";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/work/IDEAS-master/IDEAS/Media/Water.mo",63,5,64,118,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta246));
          data->simulationInfo->needToReThrow = 1;
        } else {
          FILE_INFO info = {"/work/IDEAS-master/IDEAS/Media/Water.mo",63,5,64,118,0};
          omc_assert_withEquationIndexes(threadData, info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta246));
        }
      }
    }
  }
  threadData->lastEquationSolved = 1105;
}

/*
equation index: 1104
type: ALGORITHM

  assert(noEvent(plugFlowPipe1.vol_b.dynBal.medium.T <= 403.15), "In pump_v3_basicCold_t.plugFlowPipe1.vol_b.dynBal.medium: Temperature T = " + String(plugFlowPipe1.vol_b.dynBal.medium.T, 6, 0, true) + " K exceeded its maximum allowed value of " + String(130.0, 6, 0, true) + " degC (" + String(403.15, 6, 0, true) + " Kelvin) as required from medium model \"IDEAS.Media.Water\".");
*/
void pump_v3_basicCold_t_eqFunction_1104(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1104};
  modelica_boolean tmp248;
  static const MMC_DEFSTRINGLIT(tmp249,74,"In pump_v3_basicCold_t.plugFlowPipe1.vol_b.dynBal.medium: Temperature T = ");
  modelica_string tmp250;
  modelica_metatype tmpMeta251;
  static const MMC_DEFSTRINGLIT(tmp252,41," K exceeded its maximum allowed value of ");
  modelica_metatype tmpMeta253;
  modelica_string tmp254;
  modelica_metatype tmpMeta255;
  static const MMC_DEFSTRINGLIT(tmp256,7," degC (");
  modelica_metatype tmpMeta257;
  modelica_string tmp258;
  modelica_metatype tmpMeta259;
  static const MMC_DEFSTRINGLIT(tmp260,59," Kelvin) as required from medium model \"IDEAS.Media.Water\".");
  modelica_metatype tmpMeta261;
  static int tmp262 = 0;
  {
    tmp248 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[262]] /* plugFlowPipe1.vol_b.dynBal.medium.T variable */),403.15);
    if(!tmp248)
    {
      tmp250 = modelica_real_to_modelica_string((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[262]] /* plugFlowPipe1.vol_b.dynBal.medium.T variable */), ((modelica_integer) 6), ((modelica_integer) 0), 1 /* true */);
      tmpMeta251 = stringAppend(MMC_REFSTRINGLIT(tmp249),tmp250);
      tmpMeta253 = stringAppend(tmpMeta251,MMC_REFSTRINGLIT(tmp252));
      tmp254 = modelica_real_to_modelica_string(130.0, ((modelica_integer) 6), ((modelica_integer) 0), 1 /* true */);
      tmpMeta255 = stringAppend(tmpMeta253,tmp254);
      tmpMeta257 = stringAppend(tmpMeta255,MMC_REFSTRINGLIT(tmp256));
      tmp258 = modelica_real_to_modelica_string(403.15, ((modelica_integer) 6), ((modelica_integer) 0), 1 /* true */);
      tmpMeta259 = stringAppend(tmpMeta257,tmp258);
      tmpMeta261 = stringAppend(tmpMeta259,MMC_REFSTRINGLIT(tmp260));
      {
        const char* assert_cond = "(noEvent(plugFlowPipe1.vol_b.dynBal.medium.T <= 403.15))";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/work/IDEAS-master/IDEAS/Media/Water.mo",66,5,67,118,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta261));
          data->simulationInfo->needToReThrow = 1;
        } else {
          FILE_INFO info = {"/work/IDEAS-master/IDEAS/Media/Water.mo",66,5,67,118,0};
          omc_assert_withEquationIndexes(threadData, info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta261));
        }
      }
    }
  }
  threadData->lastEquationSolved = 1104;
}

/*
equation index: 1103
type: ALGORITHM

  assert(noEvent(plugFlowPipe_heat.port_a.p >= 0.0), "Pressure (= " + String(plugFlowPipe_heat.port_a.p, 6, 0, true) + " Pa) of medium \"IDEAS.Media.Water\" is negative
(Temperature = " + String(plugFlowPipe1.vol_b.dynBal.medium.T, 6, 0, true) + " K)");
*/
void pump_v3_basicCold_t_eqFunction_1103(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1103};
  modelica_boolean tmp263;
  static const MMC_DEFSTRINGLIT(tmp264,12,"Pressure (= ");
  modelica_string tmp265;
  modelica_metatype tmpMeta266;
  static const MMC_DEFSTRINGLIT(tmp267,62," Pa) of medium \"IDEAS.Media.Water\" is negative\n(Temperature = ");
  modelica_metatype tmpMeta268;
  modelica_string tmp269;
  modelica_metatype tmpMeta270;
  static const MMC_DEFSTRINGLIT(tmp271,3," K)");
  modelica_metatype tmpMeta272;
  static int tmp273 = 0;
  {
    tmp263 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[346]] /* plugFlowPipe_heat.port_a.p variable */),0.0);
    if(!tmp263)
    {
      tmp265 = modelica_real_to_modelica_string((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[346]] /* plugFlowPipe_heat.port_a.p variable */), ((modelica_integer) 6), ((modelica_integer) 0), 1 /* true */);
      tmpMeta266 = stringAppend(MMC_REFSTRINGLIT(tmp264),tmp265);
      tmpMeta268 = stringAppend(tmpMeta266,MMC_REFSTRINGLIT(tmp267));
      tmp269 = modelica_real_to_modelica_string((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[262]] /* plugFlowPipe1.vol_b.dynBal.medium.T variable */), ((modelica_integer) 6), ((modelica_integer) 0), 1 /* true */);
      tmpMeta270 = stringAppend(tmpMeta268,tmp269);
      tmpMeta272 = stringAppend(tmpMeta270,MMC_REFSTRINGLIT(tmp271));
      {
        const char* assert_cond = "(noEvent(plugFlowPipe_heat.port_a.p >= 0.0))";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/work/IDEAS-master/IDEAS/Media/Water.mo",69,5,69,148,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta272));
          data->simulationInfo->needToReThrow = 1;
        } else {
          FILE_INFO info = {"/work/IDEAS-master/IDEAS/Media/Water.mo",69,5,69,148,0};
          omc_assert_withEquationIndexes(threadData, info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta272));
        }
      }
    }
  }
  threadData->lastEquationSolved = 1103;
}

/*
equation index: 1102
type: ALGORITHM

  assert(noEvent(plugFlowPipe1.vol_a.dynBal.medium.T >= 272.15), "In pump_v3_basicCold_t.plugFlowPipe1.vol_a.dynBal.medium: Temperature T = " + String(plugFlowPipe1.vol_a.dynBal.medium.T, 6, 0, true) + " K exceeded its minimum allowed value of " + String(-1.0, 6, 0, true) + " degC (" + String(272.15, 6, 0, true) + " Kelvin) as required from medium model \"IDEAS.Media.Water\".");
*/
void pump_v3_basicCold_t_eqFunction_1102(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1102};
  modelica_boolean tmp274;
  static const MMC_DEFSTRINGLIT(tmp275,74,"In pump_v3_basicCold_t.plugFlowPipe1.vol_a.dynBal.medium: Temperature T = ");
  modelica_string tmp276;
  modelica_metatype tmpMeta277;
  static const MMC_DEFSTRINGLIT(tmp278,41," K exceeded its minimum allowed value of ");
  modelica_metatype tmpMeta279;
  modelica_string tmp280;
  modelica_metatype tmpMeta281;
  static const MMC_DEFSTRINGLIT(tmp282,7," degC (");
  modelica_metatype tmpMeta283;
  modelica_string tmp284;
  modelica_metatype tmpMeta285;
  static const MMC_DEFSTRINGLIT(tmp286,59," Kelvin) as required from medium model \"IDEAS.Media.Water\".");
  modelica_metatype tmpMeta287;
  static int tmp288 = 0;
  {
    tmp274 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[246]] /* plugFlowPipe1.vol_a.dynBal.medium.T variable */),272.15);
    if(!tmp274)
    {
      tmp276 = modelica_real_to_modelica_string((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[246]] /* plugFlowPipe1.vol_a.dynBal.medium.T variable */), ((modelica_integer) 6), ((modelica_integer) 0), 1 /* true */);
      tmpMeta277 = stringAppend(MMC_REFSTRINGLIT(tmp275),tmp276);
      tmpMeta279 = stringAppend(tmpMeta277,MMC_REFSTRINGLIT(tmp278));
      tmp280 = modelica_real_to_modelica_string(-1.0, ((modelica_integer) 6), ((modelica_integer) 0), 1 /* true */);
      tmpMeta281 = stringAppend(tmpMeta279,tmp280);
      tmpMeta283 = stringAppend(tmpMeta281,MMC_REFSTRINGLIT(tmp282));
      tmp284 = modelica_real_to_modelica_string(272.15, ((modelica_integer) 6), ((modelica_integer) 0), 1 /* true */);
      tmpMeta285 = stringAppend(tmpMeta283,tmp284);
      tmpMeta287 = stringAppend(tmpMeta285,MMC_REFSTRINGLIT(tmp286));
      {
        const char* assert_cond = "(noEvent(plugFlowPipe1.vol_a.dynBal.medium.T >= 272.15))";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/work/IDEAS-master/IDEAS/Media/Water.mo",63,5,64,118,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta287));
          data->simulationInfo->needToReThrow = 1;
        } else {
          FILE_INFO info = {"/work/IDEAS-master/IDEAS/Media/Water.mo",63,5,64,118,0};
          omc_assert_withEquationIndexes(threadData, info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta287));
        }
      }
    }
  }
  threadData->lastEquationSolved = 1102;
}

/*
equation index: 1101
type: ALGORITHM

  assert(noEvent(plugFlowPipe1.vol_a.dynBal.medium.T <= 403.15), "In pump_v3_basicCold_t.plugFlowPipe1.vol_a.dynBal.medium: Temperature T = " + String(plugFlowPipe1.vol_a.dynBal.medium.T, 6, 0, true) + " K exceeded its maximum allowed value of " + String(130.0, 6, 0, true) + " degC (" + String(403.15, 6, 0, true) + " Kelvin) as required from medium model \"IDEAS.Media.Water\".");
*/
void pump_v3_basicCold_t_eqFunction_1101(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1101};
  modelica_boolean tmp289;
  static const MMC_DEFSTRINGLIT(tmp290,74,"In pump_v3_basicCold_t.plugFlowPipe1.vol_a.dynBal.medium: Temperature T = ");
  modelica_string tmp291;
  modelica_metatype tmpMeta292;
  static const MMC_DEFSTRINGLIT(tmp293,41," K exceeded its maximum allowed value of ");
  modelica_metatype tmpMeta294;
  modelica_string tmp295;
  modelica_metatype tmpMeta296;
  static const MMC_DEFSTRINGLIT(tmp297,7," degC (");
  modelica_metatype tmpMeta298;
  modelica_string tmp299;
  modelica_metatype tmpMeta300;
  static const MMC_DEFSTRINGLIT(tmp301,59," Kelvin) as required from medium model \"IDEAS.Media.Water\".");
  modelica_metatype tmpMeta302;
  static int tmp303 = 0;
  {
    tmp289 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[246]] /* plugFlowPipe1.vol_a.dynBal.medium.T variable */),403.15);
    if(!tmp289)
    {
      tmp291 = modelica_real_to_modelica_string((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[246]] /* plugFlowPipe1.vol_a.dynBal.medium.T variable */), ((modelica_integer) 6), ((modelica_integer) 0), 1 /* true */);
      tmpMeta292 = stringAppend(MMC_REFSTRINGLIT(tmp290),tmp291);
      tmpMeta294 = stringAppend(tmpMeta292,MMC_REFSTRINGLIT(tmp293));
      tmp295 = modelica_real_to_modelica_string(130.0, ((modelica_integer) 6), ((modelica_integer) 0), 1 /* true */);
      tmpMeta296 = stringAppend(tmpMeta294,tmp295);
      tmpMeta298 = stringAppend(tmpMeta296,MMC_REFSTRINGLIT(tmp297));
      tmp299 = modelica_real_to_modelica_string(403.15, ((modelica_integer) 6), ((modelica_integer) 0), 1 /* true */);
      tmpMeta300 = stringAppend(tmpMeta298,tmp299);
      tmpMeta302 = stringAppend(tmpMeta300,MMC_REFSTRINGLIT(tmp301));
      {
        const char* assert_cond = "(noEvent(plugFlowPipe1.vol_a.dynBal.medium.T <= 403.15))";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/work/IDEAS-master/IDEAS/Media/Water.mo",66,5,67,118,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta302));
          data->simulationInfo->needToReThrow = 1;
        } else {
          FILE_INFO info = {"/work/IDEAS-master/IDEAS/Media/Water.mo",66,5,67,118,0};
          omc_assert_withEquationIndexes(threadData, info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta302));
        }
      }
    }
  }
  threadData->lastEquationSolved = 1101;
}

/*
equation index: 1100
type: ALGORITHM

  assert(noEvent(plugFlowPipe1.port_a.p >= 0.0), "Pressure (= " + String(plugFlowPipe1.port_a.p, 6, 0, true) + " Pa) of medium \"IDEAS.Media.Water\" is negative
(Temperature = " + String(plugFlowPipe1.vol_a.dynBal.medium.T, 6, 0, true) + " K)");
*/
void pump_v3_basicCold_t_eqFunction_1100(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1100};
  modelica_boolean tmp304;
  static const MMC_DEFSTRINGLIT(tmp305,12,"Pressure (= ");
  modelica_string tmp306;
  modelica_metatype tmpMeta307;
  static const MMC_DEFSTRINGLIT(tmp308,62," Pa) of medium \"IDEAS.Media.Water\" is negative\n(Temperature = ");
  modelica_metatype tmpMeta309;
  modelica_string tmp310;
  modelica_metatype tmpMeta311;
  static const MMC_DEFSTRINGLIT(tmp312,3," K)");
  modelica_metatype tmpMeta313;
  static int tmp314 = 0;
  {
    tmp304 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[230]] /* plugFlowPipe1.port_a.p variable */),0.0);
    if(!tmp304)
    {
      tmp306 = modelica_real_to_modelica_string((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[230]] /* plugFlowPipe1.port_a.p variable */), ((modelica_integer) 6), ((modelica_integer) 0), 1 /* true */);
      tmpMeta307 = stringAppend(MMC_REFSTRINGLIT(tmp305),tmp306);
      tmpMeta309 = stringAppend(tmpMeta307,MMC_REFSTRINGLIT(tmp308));
      tmp310 = modelica_real_to_modelica_string((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[246]] /* plugFlowPipe1.vol_a.dynBal.medium.T variable */), ((modelica_integer) 6), ((modelica_integer) 0), 1 /* true */);
      tmpMeta311 = stringAppend(tmpMeta309,tmp310);
      tmpMeta313 = stringAppend(tmpMeta311,MMC_REFSTRINGLIT(tmp312));
      {
        const char* assert_cond = "(noEvent(plugFlowPipe1.port_a.p >= 0.0))";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/work/IDEAS-master/IDEAS/Media/Water.mo",69,5,69,148,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta313));
          data->simulationInfo->needToReThrow = 1;
        } else {
          FILE_INFO info = {"/work/IDEAS-master/IDEAS/Media/Water.mo",69,5,69,148,0};
          omc_assert_withEquationIndexes(threadData, info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta313));
        }
      }
    }
  }
  threadData->lastEquationSolved = 1100;
}

/*
equation index: 1099
type: ALGORITHM

  assert(noEvent(plugFlowPipe_heat.vol_b.dynBal.medium.T >= 272.15), "In pump_v3_basicCold_t.plugFlowPipe_heat.vol_b.dynBal.medium: Temperature T = " + String(plugFlowPipe_heat.vol_b.dynBal.medium.T, 6, 0, true) + " K exceeded its minimum allowed value of " + String(-1.0, 6, 0, true) + " degC (" + String(272.15, 6, 0, true) + " Kelvin) as required from medium model \"IDEAS.Media.Water\".");
*/
void pump_v3_basicCold_t_eqFunction_1099(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1099};
  modelica_boolean tmp315;
  static const MMC_DEFSTRINGLIT(tmp316,78,"In pump_v3_basicCold_t.plugFlowPipe_heat.vol_b.dynBal.medium: Temperature T = ");
  modelica_string tmp317;
  modelica_metatype tmpMeta318;
  static const MMC_DEFSTRINGLIT(tmp319,41," K exceeded its minimum allowed value of ");
  modelica_metatype tmpMeta320;
  modelica_string tmp321;
  modelica_metatype tmpMeta322;
  static const MMC_DEFSTRINGLIT(tmp323,7," degC (");
  modelica_metatype tmpMeta324;
  modelica_string tmp325;
  modelica_metatype tmpMeta326;
  static const MMC_DEFSTRINGLIT(tmp327,59," Kelvin) as required from medium model \"IDEAS.Media.Water\".");
  modelica_metatype tmpMeta328;
  static int tmp329 = 0;
  {
    tmp315 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[379]] /* plugFlowPipe_heat.vol_b.dynBal.medium.T variable */),272.15);
    if(!tmp315)
    {
      tmp317 = modelica_real_to_modelica_string((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[379]] /* plugFlowPipe_heat.vol_b.dynBal.medium.T variable */), ((modelica_integer) 6), ((modelica_integer) 0), 1 /* true */);
      tmpMeta318 = stringAppend(MMC_REFSTRINGLIT(tmp316),tmp317);
      tmpMeta320 = stringAppend(tmpMeta318,MMC_REFSTRINGLIT(tmp319));
      tmp321 = modelica_real_to_modelica_string(-1.0, ((modelica_integer) 6), ((modelica_integer) 0), 1 /* true */);
      tmpMeta322 = stringAppend(tmpMeta320,tmp321);
      tmpMeta324 = stringAppend(tmpMeta322,MMC_REFSTRINGLIT(tmp323));
      tmp325 = modelica_real_to_modelica_string(272.15, ((modelica_integer) 6), ((modelica_integer) 0), 1 /* true */);
      tmpMeta326 = stringAppend(tmpMeta324,tmp325);
      tmpMeta328 = stringAppend(tmpMeta326,MMC_REFSTRINGLIT(tmp327));
      {
        const char* assert_cond = "(noEvent(plugFlowPipe_heat.vol_b.dynBal.medium.T >= 272.15))";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/work/IDEAS-master/IDEAS/Media/Water.mo",63,5,64,118,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta328));
          data->simulationInfo->needToReThrow = 1;
        } else {
          FILE_INFO info = {"/work/IDEAS-master/IDEAS/Media/Water.mo",63,5,64,118,0};
          omc_assert_withEquationIndexes(threadData, info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta328));
        }
      }
    }
  }
  threadData->lastEquationSolved = 1099;
}

/*
equation index: 1098
type: ALGORITHM

  assert(noEvent(plugFlowPipe_heat.vol_b.dynBal.medium.T <= 403.15), "In pump_v3_basicCold_t.plugFlowPipe_heat.vol_b.dynBal.medium: Temperature T = " + String(plugFlowPipe_heat.vol_b.dynBal.medium.T, 6, 0, true) + " K exceeded its maximum allowed value of " + String(130.0, 6, 0, true) + " degC (" + String(403.15, 6, 0, true) + " Kelvin) as required from medium model \"IDEAS.Media.Water\".");
*/
void pump_v3_basicCold_t_eqFunction_1098(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1098};
  modelica_boolean tmp330;
  static const MMC_DEFSTRINGLIT(tmp331,78,"In pump_v3_basicCold_t.plugFlowPipe_heat.vol_b.dynBal.medium: Temperature T = ");
  modelica_string tmp332;
  modelica_metatype tmpMeta333;
  static const MMC_DEFSTRINGLIT(tmp334,41," K exceeded its maximum allowed value of ");
  modelica_metatype tmpMeta335;
  modelica_string tmp336;
  modelica_metatype tmpMeta337;
  static const MMC_DEFSTRINGLIT(tmp338,7," degC (");
  modelica_metatype tmpMeta339;
  modelica_string tmp340;
  modelica_metatype tmpMeta341;
  static const MMC_DEFSTRINGLIT(tmp342,59," Kelvin) as required from medium model \"IDEAS.Media.Water\".");
  modelica_metatype tmpMeta343;
  static int tmp344 = 0;
  {
    tmp330 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[379]] /* plugFlowPipe_heat.vol_b.dynBal.medium.T variable */),403.15);
    if(!tmp330)
    {
      tmp332 = modelica_real_to_modelica_string((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[379]] /* plugFlowPipe_heat.vol_b.dynBal.medium.T variable */), ((modelica_integer) 6), ((modelica_integer) 0), 1 /* true */);
      tmpMeta333 = stringAppend(MMC_REFSTRINGLIT(tmp331),tmp332);
      tmpMeta335 = stringAppend(tmpMeta333,MMC_REFSTRINGLIT(tmp334));
      tmp336 = modelica_real_to_modelica_string(130.0, ((modelica_integer) 6), ((modelica_integer) 0), 1 /* true */);
      tmpMeta337 = stringAppend(tmpMeta335,tmp336);
      tmpMeta339 = stringAppend(tmpMeta337,MMC_REFSTRINGLIT(tmp338));
      tmp340 = modelica_real_to_modelica_string(403.15, ((modelica_integer) 6), ((modelica_integer) 0), 1 /* true */);
      tmpMeta341 = stringAppend(tmpMeta339,tmp340);
      tmpMeta343 = stringAppend(tmpMeta341,MMC_REFSTRINGLIT(tmp342));
      {
        const char* assert_cond = "(noEvent(plugFlowPipe_heat.vol_b.dynBal.medium.T <= 403.15))";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/work/IDEAS-master/IDEAS/Media/Water.mo",66,5,67,118,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta343));
          data->simulationInfo->needToReThrow = 1;
        } else {
          FILE_INFO info = {"/work/IDEAS-master/IDEAS/Media/Water.mo",66,5,67,118,0};
          omc_assert_withEquationIndexes(threadData, info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta343));
        }
      }
    }
  }
  threadData->lastEquationSolved = 1098;
}

/*
equation index: 1097
type: ALGORITHM

  assert(noEvent(pump.port_a.p >= 0.0), "Pressure (= " + String(pump.port_a.p, 6, 0, true) + " Pa) of medium \"IDEAS.Media.Water\" is negative
(Temperature = " + String(plugFlowPipe_heat.vol_b.dynBal.medium.T, 6, 0, true) + " K)");
*/
void pump_v3_basicCold_t_eqFunction_1097(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1097};
  modelica_boolean tmp345;
  static const MMC_DEFSTRINGLIT(tmp346,12,"Pressure (= ");
  modelica_string tmp347;
  modelica_metatype tmpMeta348;
  static const MMC_DEFSTRINGLIT(tmp349,62," Pa) of medium \"IDEAS.Media.Water\" is negative\n(Temperature = ");
  modelica_metatype tmpMeta350;
  modelica_string tmp351;
  modelica_metatype tmpMeta352;
  static const MMC_DEFSTRINGLIT(tmp353,3," K)");
  modelica_metatype tmpMeta354;
  static int tmp355 = 0;
  {
    tmp345 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[403]] /* pump.port_a.p variable */),0.0);
    if(!tmp345)
    {
      tmp347 = modelica_real_to_modelica_string((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[403]] /* pump.port_a.p variable */), ((modelica_integer) 6), ((modelica_integer) 0), 1 /* true */);
      tmpMeta348 = stringAppend(MMC_REFSTRINGLIT(tmp346),tmp347);
      tmpMeta350 = stringAppend(tmpMeta348,MMC_REFSTRINGLIT(tmp349));
      tmp351 = modelica_real_to_modelica_string((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[379]] /* plugFlowPipe_heat.vol_b.dynBal.medium.T variable */), ((modelica_integer) 6), ((modelica_integer) 0), 1 /* true */);
      tmpMeta352 = stringAppend(tmpMeta350,tmp351);
      tmpMeta354 = stringAppend(tmpMeta352,MMC_REFSTRINGLIT(tmp353));
      {
        const char* assert_cond = "(noEvent(pump.port_a.p >= 0.0))";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/work/IDEAS-master/IDEAS/Media/Water.mo",69,5,69,148,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta354));
          data->simulationInfo->needToReThrow = 1;
        } else {
          FILE_INFO info = {"/work/IDEAS-master/IDEAS/Media/Water.mo",69,5,69,148,0};
          omc_assert_withEquationIndexes(threadData, info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta354));
        }
      }
    }
  }
  threadData->lastEquationSolved = 1097;
}

/*
equation index: 1096
type: ALGORITHM

  assert(noEvent(plugFlowPipe_heat.vol_a.dynBal.medium.T >= 272.15), "In pump_v3_basicCold_t.plugFlowPipe_heat.vol_a.dynBal.medium: Temperature T = " + String(plugFlowPipe_heat.vol_a.dynBal.medium.T, 6, 0, true) + " K exceeded its minimum allowed value of " + String(-1.0, 6, 0, true) + " degC (" + String(272.15, 6, 0, true) + " Kelvin) as required from medium model \"IDEAS.Media.Water\".");
*/
void pump_v3_basicCold_t_eqFunction_1096(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1096};
  modelica_boolean tmp356;
  static const MMC_DEFSTRINGLIT(tmp357,78,"In pump_v3_basicCold_t.plugFlowPipe_heat.vol_a.dynBal.medium: Temperature T = ");
  modelica_string tmp358;
  modelica_metatype tmpMeta359;
  static const MMC_DEFSTRINGLIT(tmp360,41," K exceeded its minimum allowed value of ");
  modelica_metatype tmpMeta361;
  modelica_string tmp362;
  modelica_metatype tmpMeta363;
  static const MMC_DEFSTRINGLIT(tmp364,7," degC (");
  modelica_metatype tmpMeta365;
  modelica_string tmp366;
  modelica_metatype tmpMeta367;
  static const MMC_DEFSTRINGLIT(tmp368,59," Kelvin) as required from medium model \"IDEAS.Media.Water\".");
  modelica_metatype tmpMeta369;
  static int tmp370 = 0;
  {
    tmp356 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[363]] /* plugFlowPipe_heat.vol_a.dynBal.medium.T variable */),272.15);
    if(!tmp356)
    {
      tmp358 = modelica_real_to_modelica_string((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[363]] /* plugFlowPipe_heat.vol_a.dynBal.medium.T variable */), ((modelica_integer) 6), ((modelica_integer) 0), 1 /* true */);
      tmpMeta359 = stringAppend(MMC_REFSTRINGLIT(tmp357),tmp358);
      tmpMeta361 = stringAppend(tmpMeta359,MMC_REFSTRINGLIT(tmp360));
      tmp362 = modelica_real_to_modelica_string(-1.0, ((modelica_integer) 6), ((modelica_integer) 0), 1 /* true */);
      tmpMeta363 = stringAppend(tmpMeta361,tmp362);
      tmpMeta365 = stringAppend(tmpMeta363,MMC_REFSTRINGLIT(tmp364));
      tmp366 = modelica_real_to_modelica_string(272.15, ((modelica_integer) 6), ((modelica_integer) 0), 1 /* true */);
      tmpMeta367 = stringAppend(tmpMeta365,tmp366);
      tmpMeta369 = stringAppend(tmpMeta367,MMC_REFSTRINGLIT(tmp368));
      {
        const char* assert_cond = "(noEvent(plugFlowPipe_heat.vol_a.dynBal.medium.T >= 272.15))";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/work/IDEAS-master/IDEAS/Media/Water.mo",63,5,64,118,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta369));
          data->simulationInfo->needToReThrow = 1;
        } else {
          FILE_INFO info = {"/work/IDEAS-master/IDEAS/Media/Water.mo",63,5,64,118,0};
          omc_assert_withEquationIndexes(threadData, info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta369));
        }
      }
    }
  }
  threadData->lastEquationSolved = 1096;
}

/*
equation index: 1095
type: ALGORITHM

  assert(noEvent(plugFlowPipe_heat.vol_a.dynBal.medium.T <= 403.15), "In pump_v3_basicCold_t.plugFlowPipe_heat.vol_a.dynBal.medium: Temperature T = " + String(plugFlowPipe_heat.vol_a.dynBal.medium.T, 6, 0, true) + " K exceeded its maximum allowed value of " + String(130.0, 6, 0, true) + " degC (" + String(403.15, 6, 0, true) + " Kelvin) as required from medium model \"IDEAS.Media.Water\".");
*/
void pump_v3_basicCold_t_eqFunction_1095(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1095};
  modelica_boolean tmp371;
  static const MMC_DEFSTRINGLIT(tmp372,78,"In pump_v3_basicCold_t.plugFlowPipe_heat.vol_a.dynBal.medium: Temperature T = ");
  modelica_string tmp373;
  modelica_metatype tmpMeta374;
  static const MMC_DEFSTRINGLIT(tmp375,41," K exceeded its maximum allowed value of ");
  modelica_metatype tmpMeta376;
  modelica_string tmp377;
  modelica_metatype tmpMeta378;
  static const MMC_DEFSTRINGLIT(tmp379,7," degC (");
  modelica_metatype tmpMeta380;
  modelica_string tmp381;
  modelica_metatype tmpMeta382;
  static const MMC_DEFSTRINGLIT(tmp383,59," Kelvin) as required from medium model \"IDEAS.Media.Water\".");
  modelica_metatype tmpMeta384;
  static int tmp385 = 0;
  {
    tmp371 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[363]] /* plugFlowPipe_heat.vol_a.dynBal.medium.T variable */),403.15);
    if(!tmp371)
    {
      tmp373 = modelica_real_to_modelica_string((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[363]] /* plugFlowPipe_heat.vol_a.dynBal.medium.T variable */), ((modelica_integer) 6), ((modelica_integer) 0), 1 /* true */);
      tmpMeta374 = stringAppend(MMC_REFSTRINGLIT(tmp372),tmp373);
      tmpMeta376 = stringAppend(tmpMeta374,MMC_REFSTRINGLIT(tmp375));
      tmp377 = modelica_real_to_modelica_string(130.0, ((modelica_integer) 6), ((modelica_integer) 0), 1 /* true */);
      tmpMeta378 = stringAppend(tmpMeta376,tmp377);
      tmpMeta380 = stringAppend(tmpMeta378,MMC_REFSTRINGLIT(tmp379));
      tmp381 = modelica_real_to_modelica_string(403.15, ((modelica_integer) 6), ((modelica_integer) 0), 1 /* true */);
      tmpMeta382 = stringAppend(tmpMeta380,tmp381);
      tmpMeta384 = stringAppend(tmpMeta382,MMC_REFSTRINGLIT(tmp383));
      {
        const char* assert_cond = "(noEvent(plugFlowPipe_heat.vol_a.dynBal.medium.T <= 403.15))";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/work/IDEAS-master/IDEAS/Media/Water.mo",66,5,67,118,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta384));
          data->simulationInfo->needToReThrow = 1;
        } else {
          FILE_INFO info = {"/work/IDEAS-master/IDEAS/Media/Water.mo",66,5,67,118,0};
          omc_assert_withEquationIndexes(threadData, info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta384));
        }
      }
    }
  }
  threadData->lastEquationSolved = 1095;
}

/*
equation index: 1094
type: ALGORITHM

  assert(noEvent(plugFlowPipe_heat.port_a.p >= 0.0), "Pressure (= " + String(plugFlowPipe_heat.port_a.p, 6, 0, true) + " Pa) of medium \"IDEAS.Media.Water\" is negative
(Temperature = " + String(plugFlowPipe_heat.vol_a.dynBal.medium.T, 6, 0, true) + " K)");
*/
void pump_v3_basicCold_t_eqFunction_1094(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1094};
  modelica_boolean tmp386;
  static const MMC_DEFSTRINGLIT(tmp387,12,"Pressure (= ");
  modelica_string tmp388;
  modelica_metatype tmpMeta389;
  static const MMC_DEFSTRINGLIT(tmp390,62," Pa) of medium \"IDEAS.Media.Water\" is negative\n(Temperature = ");
  modelica_metatype tmpMeta391;
  modelica_string tmp392;
  modelica_metatype tmpMeta393;
  static const MMC_DEFSTRINGLIT(tmp394,3," K)");
  modelica_metatype tmpMeta395;
  static int tmp396 = 0;
  {
    tmp386 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[346]] /* plugFlowPipe_heat.port_a.p variable */),0.0);
    if(!tmp386)
    {
      tmp388 = modelica_real_to_modelica_string((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[346]] /* plugFlowPipe_heat.port_a.p variable */), ((modelica_integer) 6), ((modelica_integer) 0), 1 /* true */);
      tmpMeta389 = stringAppend(MMC_REFSTRINGLIT(tmp387),tmp388);
      tmpMeta391 = stringAppend(tmpMeta389,MMC_REFSTRINGLIT(tmp390));
      tmp392 = modelica_real_to_modelica_string((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[363]] /* plugFlowPipe_heat.vol_a.dynBal.medium.T variable */), ((modelica_integer) 6), ((modelica_integer) 0), 1 /* true */);
      tmpMeta393 = stringAppend(tmpMeta391,tmp392);
      tmpMeta395 = stringAppend(tmpMeta393,MMC_REFSTRINGLIT(tmp394));
      {
        const char* assert_cond = "(noEvent(plugFlowPipe_heat.port_a.p >= 0.0))";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/work/IDEAS-master/IDEAS/Media/Water.mo",69,5,69,148,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta395));
          data->simulationInfo->needToReThrow = 1;
        } else {
          FILE_INFO info = {"/work/IDEAS-master/IDEAS/Media/Water.mo",69,5,69,148,0};
          omc_assert_withEquationIndexes(threadData, info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta395));
        }
      }
    }
  }
  threadData->lastEquationSolved = 1094;
}

/*
equation index: 1093
type: ALGORITHM

  assert(noEvent(plugFlowPipe2.vol_b.dynBal.medium.T >= 272.15), "In pump_v3_basicCold_t.plugFlowPipe2.vol_b.dynBal.medium: Temperature T = " + String(plugFlowPipe2.vol_b.dynBal.medium.T, 6, 0, true) + " K exceeded its minimum allowed value of " + String(-1.0, 6, 0, true) + " degC (" + String(272.15, 6, 0, true) + " Kelvin) as required from medium model \"IDEAS.Media.Water\".");
*/
void pump_v3_basicCold_t_eqFunction_1093(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1093};
  modelica_boolean tmp397;
  static const MMC_DEFSTRINGLIT(tmp398,74,"In pump_v3_basicCold_t.plugFlowPipe2.vol_b.dynBal.medium: Temperature T = ");
  modelica_string tmp399;
  modelica_metatype tmpMeta400;
  static const MMC_DEFSTRINGLIT(tmp401,41," K exceeded its minimum allowed value of ");
  modelica_metatype tmpMeta402;
  modelica_string tmp403;
  modelica_metatype tmpMeta404;
  static const MMC_DEFSTRINGLIT(tmp405,7," degC (");
  modelica_metatype tmpMeta406;
  modelica_string tmp407;
  modelica_metatype tmpMeta408;
  static const MMC_DEFSTRINGLIT(tmp409,59," Kelvin) as required from medium model \"IDEAS.Media.Water\".");
  modelica_metatype tmpMeta410;
  static int tmp411 = 0;
  {
    tmp397 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[321]] /* plugFlowPipe2.vol_b.dynBal.medium.T variable */),272.15);
    if(!tmp397)
    {
      tmp399 = modelica_real_to_modelica_string((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[321]] /* plugFlowPipe2.vol_b.dynBal.medium.T variable */), ((modelica_integer) 6), ((modelica_integer) 0), 1 /* true */);
      tmpMeta400 = stringAppend(MMC_REFSTRINGLIT(tmp398),tmp399);
      tmpMeta402 = stringAppend(tmpMeta400,MMC_REFSTRINGLIT(tmp401));
      tmp403 = modelica_real_to_modelica_string(-1.0, ((modelica_integer) 6), ((modelica_integer) 0), 1 /* true */);
      tmpMeta404 = stringAppend(tmpMeta402,tmp403);
      tmpMeta406 = stringAppend(tmpMeta404,MMC_REFSTRINGLIT(tmp405));
      tmp407 = modelica_real_to_modelica_string(272.15, ((modelica_integer) 6), ((modelica_integer) 0), 1 /* true */);
      tmpMeta408 = stringAppend(tmpMeta406,tmp407);
      tmpMeta410 = stringAppend(tmpMeta408,MMC_REFSTRINGLIT(tmp409));
      {
        const char* assert_cond = "(noEvent(plugFlowPipe2.vol_b.dynBal.medium.T >= 272.15))";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/work/IDEAS-master/IDEAS/Media/Water.mo",63,5,64,118,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta410));
          data->simulationInfo->needToReThrow = 1;
        } else {
          FILE_INFO info = {"/work/IDEAS-master/IDEAS/Media/Water.mo",63,5,64,118,0};
          omc_assert_withEquationIndexes(threadData, info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta410));
        }
      }
    }
  }
  threadData->lastEquationSolved = 1093;
}

/*
equation index: 1092
type: ALGORITHM

  assert(noEvent(plugFlowPipe2.vol_b.dynBal.medium.T <= 403.15), "In pump_v3_basicCold_t.plugFlowPipe2.vol_b.dynBal.medium: Temperature T = " + String(plugFlowPipe2.vol_b.dynBal.medium.T, 6, 0, true) + " K exceeded its maximum allowed value of " + String(130.0, 6, 0, true) + " degC (" + String(403.15, 6, 0, true) + " Kelvin) as required from medium model \"IDEAS.Media.Water\".");
*/
void pump_v3_basicCold_t_eqFunction_1092(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1092};
  modelica_boolean tmp412;
  static const MMC_DEFSTRINGLIT(tmp413,74,"In pump_v3_basicCold_t.plugFlowPipe2.vol_b.dynBal.medium: Temperature T = ");
  modelica_string tmp414;
  modelica_metatype tmpMeta415;
  static const MMC_DEFSTRINGLIT(tmp416,41," K exceeded its maximum allowed value of ");
  modelica_metatype tmpMeta417;
  modelica_string tmp418;
  modelica_metatype tmpMeta419;
  static const MMC_DEFSTRINGLIT(tmp420,7," degC (");
  modelica_metatype tmpMeta421;
  modelica_string tmp422;
  modelica_metatype tmpMeta423;
  static const MMC_DEFSTRINGLIT(tmp424,59," Kelvin) as required from medium model \"IDEAS.Media.Water\".");
  modelica_metatype tmpMeta425;
  static int tmp426 = 0;
  {
    tmp412 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[321]] /* plugFlowPipe2.vol_b.dynBal.medium.T variable */),403.15);
    if(!tmp412)
    {
      tmp414 = modelica_real_to_modelica_string((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[321]] /* plugFlowPipe2.vol_b.dynBal.medium.T variable */), ((modelica_integer) 6), ((modelica_integer) 0), 1 /* true */);
      tmpMeta415 = stringAppend(MMC_REFSTRINGLIT(tmp413),tmp414);
      tmpMeta417 = stringAppend(tmpMeta415,MMC_REFSTRINGLIT(tmp416));
      tmp418 = modelica_real_to_modelica_string(130.0, ((modelica_integer) 6), ((modelica_integer) 0), 1 /* true */);
      tmpMeta419 = stringAppend(tmpMeta417,tmp418);
      tmpMeta421 = stringAppend(tmpMeta419,MMC_REFSTRINGLIT(tmp420));
      tmp422 = modelica_real_to_modelica_string(403.15, ((modelica_integer) 6), ((modelica_integer) 0), 1 /* true */);
      tmpMeta423 = stringAppend(tmpMeta421,tmp422);
      tmpMeta425 = stringAppend(tmpMeta423,MMC_REFSTRINGLIT(tmp424));
      {
        const char* assert_cond = "(noEvent(plugFlowPipe2.vol_b.dynBal.medium.T <= 403.15))";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/work/IDEAS-master/IDEAS/Media/Water.mo",66,5,67,118,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta425));
          data->simulationInfo->needToReThrow = 1;
        } else {
          FILE_INFO info = {"/work/IDEAS-master/IDEAS/Media/Water.mo",66,5,67,118,0};
          omc_assert_withEquationIndexes(threadData, info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta425));
        }
      }
    }
  }
  threadData->lastEquationSolved = 1092;
}

/*
equation index: 1091
type: ALGORITHM

  assert(noEvent(bou1.p >= 0.0), "Pressure (= " + String(bou1.p, 6, 0, true) + " Pa) of medium \"IDEAS.Media.Water\" is negative
(Temperature = " + String(plugFlowPipe2.vol_b.dynBal.medium.T, 6, 0, true) + " K)");
*/
void pump_v3_basicCold_t_eqFunction_1091(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1091};
  modelica_boolean tmp427;
  static const MMC_DEFSTRINGLIT(tmp428,12,"Pressure (= ");
  modelica_string tmp429;
  modelica_metatype tmpMeta430;
  static const MMC_DEFSTRINGLIT(tmp431,62," Pa) of medium \"IDEAS.Media.Water\" is negative\n(Temperature = ");
  modelica_metatype tmpMeta432;
  modelica_string tmp433;
  modelica_metatype tmpMeta434;
  static const MMC_DEFSTRINGLIT(tmp435,3," K)");
  modelica_metatype tmpMeta436;
  static int tmp437 = 0;
  {
    tmp427 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[50]] /* bou1.p PARAM */),0.0);
    if(!tmp427)
    {
      tmp429 = modelica_real_to_modelica_string((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[50]] /* bou1.p PARAM */), ((modelica_integer) 6), ((modelica_integer) 0), 1 /* true */);
      tmpMeta430 = stringAppend(MMC_REFSTRINGLIT(tmp428),tmp429);
      tmpMeta432 = stringAppend(tmpMeta430,MMC_REFSTRINGLIT(tmp431));
      tmp433 = modelica_real_to_modelica_string((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[321]] /* plugFlowPipe2.vol_b.dynBal.medium.T variable */), ((modelica_integer) 6), ((modelica_integer) 0), 1 /* true */);
      tmpMeta434 = stringAppend(tmpMeta432,tmp433);
      tmpMeta436 = stringAppend(tmpMeta434,MMC_REFSTRINGLIT(tmp435));
      {
        const char* assert_cond = "(noEvent(bou1.p >= 0.0))";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/work/IDEAS-master/IDEAS/Media/Water.mo",69,5,69,148,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta436));
          data->simulationInfo->needToReThrow = 1;
        } else {
          FILE_INFO info = {"/work/IDEAS-master/IDEAS/Media/Water.mo",69,5,69,148,0};
          omc_assert_withEquationIndexes(threadData, info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta436));
        }
      }
    }
  }
  threadData->lastEquationSolved = 1091;
}

/*
equation index: 1090
type: ALGORITHM

  assert(noEvent(plugFlowPipe2.vol_a.dynBal.medium.T >= 272.15), "In pump_v3_basicCold_t.plugFlowPipe2.vol_a.dynBal.medium: Temperature T = " + String(plugFlowPipe2.vol_a.dynBal.medium.T, 6, 0, true) + " K exceeded its minimum allowed value of " + String(-1.0, 6, 0, true) + " degC (" + String(272.15, 6, 0, true) + " Kelvin) as required from medium model \"IDEAS.Media.Water\".");
*/
void pump_v3_basicCold_t_eqFunction_1090(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1090};
  modelica_boolean tmp438;
  static const MMC_DEFSTRINGLIT(tmp439,74,"In pump_v3_basicCold_t.plugFlowPipe2.vol_a.dynBal.medium: Temperature T = ");
  modelica_string tmp440;
  modelica_metatype tmpMeta441;
  static const MMC_DEFSTRINGLIT(tmp442,41," K exceeded its minimum allowed value of ");
  modelica_metatype tmpMeta443;
  modelica_string tmp444;
  modelica_metatype tmpMeta445;
  static const MMC_DEFSTRINGLIT(tmp446,7," degC (");
  modelica_metatype tmpMeta447;
  modelica_string tmp448;
  modelica_metatype tmpMeta449;
  static const MMC_DEFSTRINGLIT(tmp450,59," Kelvin) as required from medium model \"IDEAS.Media.Water\".");
  modelica_metatype tmpMeta451;
  static int tmp452 = 0;
  {
    tmp438 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[305]] /* plugFlowPipe2.vol_a.dynBal.medium.T variable */),272.15);
    if(!tmp438)
    {
      tmp440 = modelica_real_to_modelica_string((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[305]] /* plugFlowPipe2.vol_a.dynBal.medium.T variable */), ((modelica_integer) 6), ((modelica_integer) 0), 1 /* true */);
      tmpMeta441 = stringAppend(MMC_REFSTRINGLIT(tmp439),tmp440);
      tmpMeta443 = stringAppend(tmpMeta441,MMC_REFSTRINGLIT(tmp442));
      tmp444 = modelica_real_to_modelica_string(-1.0, ((modelica_integer) 6), ((modelica_integer) 0), 1 /* true */);
      tmpMeta445 = stringAppend(tmpMeta443,tmp444);
      tmpMeta447 = stringAppend(tmpMeta445,MMC_REFSTRINGLIT(tmp446));
      tmp448 = modelica_real_to_modelica_string(272.15, ((modelica_integer) 6), ((modelica_integer) 0), 1 /* true */);
      tmpMeta449 = stringAppend(tmpMeta447,tmp448);
      tmpMeta451 = stringAppend(tmpMeta449,MMC_REFSTRINGLIT(tmp450));
      {
        const char* assert_cond = "(noEvent(plugFlowPipe2.vol_a.dynBal.medium.T >= 272.15))";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/work/IDEAS-master/IDEAS/Media/Water.mo",63,5,64,118,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta451));
          data->simulationInfo->needToReThrow = 1;
        } else {
          FILE_INFO info = {"/work/IDEAS-master/IDEAS/Media/Water.mo",63,5,64,118,0};
          omc_assert_withEquationIndexes(threadData, info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta451));
        }
      }
    }
  }
  threadData->lastEquationSolved = 1090;
}

/*
equation index: 1089
type: ALGORITHM

  assert(noEvent(plugFlowPipe2.vol_a.dynBal.medium.T <= 403.15), "In pump_v3_basicCold_t.plugFlowPipe2.vol_a.dynBal.medium: Temperature T = " + String(plugFlowPipe2.vol_a.dynBal.medium.T, 6, 0, true) + " K exceeded its maximum allowed value of " + String(130.0, 6, 0, true) + " degC (" + String(403.15, 6, 0, true) + " Kelvin) as required from medium model \"IDEAS.Media.Water\".");
*/
void pump_v3_basicCold_t_eqFunction_1089(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1089};
  modelica_boolean tmp453;
  static const MMC_DEFSTRINGLIT(tmp454,74,"In pump_v3_basicCold_t.plugFlowPipe2.vol_a.dynBal.medium: Temperature T = ");
  modelica_string tmp455;
  modelica_metatype tmpMeta456;
  static const MMC_DEFSTRINGLIT(tmp457,41," K exceeded its maximum allowed value of ");
  modelica_metatype tmpMeta458;
  modelica_string tmp459;
  modelica_metatype tmpMeta460;
  static const MMC_DEFSTRINGLIT(tmp461,7," degC (");
  modelica_metatype tmpMeta462;
  modelica_string tmp463;
  modelica_metatype tmpMeta464;
  static const MMC_DEFSTRINGLIT(tmp465,59," Kelvin) as required from medium model \"IDEAS.Media.Water\".");
  modelica_metatype tmpMeta466;
  static int tmp467 = 0;
  {
    tmp453 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[305]] /* plugFlowPipe2.vol_a.dynBal.medium.T variable */),403.15);
    if(!tmp453)
    {
      tmp455 = modelica_real_to_modelica_string((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[305]] /* plugFlowPipe2.vol_a.dynBal.medium.T variable */), ((modelica_integer) 6), ((modelica_integer) 0), 1 /* true */);
      tmpMeta456 = stringAppend(MMC_REFSTRINGLIT(tmp454),tmp455);
      tmpMeta458 = stringAppend(tmpMeta456,MMC_REFSTRINGLIT(tmp457));
      tmp459 = modelica_real_to_modelica_string(130.0, ((modelica_integer) 6), ((modelica_integer) 0), 1 /* true */);
      tmpMeta460 = stringAppend(tmpMeta458,tmp459);
      tmpMeta462 = stringAppend(tmpMeta460,MMC_REFSTRINGLIT(tmp461));
      tmp463 = modelica_real_to_modelica_string(403.15, ((modelica_integer) 6), ((modelica_integer) 0), 1 /* true */);
      tmpMeta464 = stringAppend(tmpMeta462,tmp463);
      tmpMeta466 = stringAppend(tmpMeta464,MMC_REFSTRINGLIT(tmp465));
      {
        const char* assert_cond = "(noEvent(plugFlowPipe2.vol_a.dynBal.medium.T <= 403.15))";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/work/IDEAS-master/IDEAS/Media/Water.mo",66,5,67,118,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta466));
          data->simulationInfo->needToReThrow = 1;
        } else {
          FILE_INFO info = {"/work/IDEAS-master/IDEAS/Media/Water.mo",66,5,67,118,0};
          omc_assert_withEquationIndexes(threadData, info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta466));
        }
      }
    }
  }
  threadData->lastEquationSolved = 1089;
}

/*
equation index: 1088
type: ALGORITHM

  assert(noEvent(plugFlowPipe2.port_a.p >= 0.0), "Pressure (= " + String(plugFlowPipe2.port_a.p, 6, 0, true) + " Pa) of medium \"IDEAS.Media.Water\" is negative
(Temperature = " + String(plugFlowPipe2.vol_a.dynBal.medium.T, 6, 0, true) + " K)");
*/
void pump_v3_basicCold_t_eqFunction_1088(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1088};
  modelica_boolean tmp468;
  static const MMC_DEFSTRINGLIT(tmp469,12,"Pressure (= ");
  modelica_string tmp470;
  modelica_metatype tmpMeta471;
  static const MMC_DEFSTRINGLIT(tmp472,62," Pa) of medium \"IDEAS.Media.Water\" is negative\n(Temperature = ");
  modelica_metatype tmpMeta473;
  modelica_string tmp474;
  modelica_metatype tmpMeta475;
  static const MMC_DEFSTRINGLIT(tmp476,3," K)");
  modelica_metatype tmpMeta477;
  static int tmp478 = 0;
  {
    tmp468 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[287]] /* plugFlowPipe2.port_a.p variable */),0.0);
    if(!tmp468)
    {
      tmp470 = modelica_real_to_modelica_string((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[287]] /* plugFlowPipe2.port_a.p variable */), ((modelica_integer) 6), ((modelica_integer) 0), 1 /* true */);
      tmpMeta471 = stringAppend(MMC_REFSTRINGLIT(tmp469),tmp470);
      tmpMeta473 = stringAppend(tmpMeta471,MMC_REFSTRINGLIT(tmp472));
      tmp474 = modelica_real_to_modelica_string((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[305]] /* plugFlowPipe2.vol_a.dynBal.medium.T variable */), ((modelica_integer) 6), ((modelica_integer) 0), 1 /* true */);
      tmpMeta475 = stringAppend(tmpMeta473,tmp474);
      tmpMeta477 = stringAppend(tmpMeta475,MMC_REFSTRINGLIT(tmp476));
      {
        const char* assert_cond = "(noEvent(plugFlowPipe2.port_a.p >= 0.0))";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/work/IDEAS-master/IDEAS/Media/Water.mo",69,5,69,148,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta477));
          data->simulationInfo->needToReThrow = 1;
        } else {
          FILE_INFO info = {"/work/IDEAS-master/IDEAS/Media/Water.mo",69,5,69,148,0};
          omc_assert_withEquationIndexes(threadData, info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta477));
        }
      }
    }
  }
  threadData->lastEquationSolved = 1088;
}

/*
equation index: 1087
type: ALGORITHM

  assert(noEvent(pump.vol.dynBal.medium.T >= 272.15), "In pump_v3_basicCold_t.pump.vol.dynBal.medium: Temperature T = " + String(pump.vol.dynBal.medium.T, 6, 0, true) + " K exceeded its minimum allowed value of " + String(-1.0, 6, 0, true) + " degC (" + String(272.15, 6, 0, true) + " Kelvin) as required from medium model \"IDEAS.Media.Water\".");
*/
void pump_v3_basicCold_t_eqFunction_1087(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1087};
  modelica_boolean tmp479;
  static const MMC_DEFSTRINGLIT(tmp480,63,"In pump_v3_basicCold_t.pump.vol.dynBal.medium: Temperature T = ");
  modelica_string tmp481;
  modelica_metatype tmpMeta482;
  static const MMC_DEFSTRINGLIT(tmp483,41," K exceeded its minimum allowed value of ");
  modelica_metatype tmpMeta484;
  modelica_string tmp485;
  modelica_metatype tmpMeta486;
  static const MMC_DEFSTRINGLIT(tmp487,7," degC (");
  modelica_metatype tmpMeta488;
  modelica_string tmp489;
  modelica_metatype tmpMeta490;
  static const MMC_DEFSTRINGLIT(tmp491,59," Kelvin) as required from medium model \"IDEAS.Media.Water\".");
  modelica_metatype tmpMeta492;
  static int tmp493 = 0;
  {
    tmp479 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[420]] /* pump.vol.dynBal.medium.T variable */),272.15);
    if(!tmp479)
    {
      tmp481 = modelica_real_to_modelica_string((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[420]] /* pump.vol.dynBal.medium.T variable */), ((modelica_integer) 6), ((modelica_integer) 0), 1 /* true */);
      tmpMeta482 = stringAppend(MMC_REFSTRINGLIT(tmp480),tmp481);
      tmpMeta484 = stringAppend(tmpMeta482,MMC_REFSTRINGLIT(tmp483));
      tmp485 = modelica_real_to_modelica_string(-1.0, ((modelica_integer) 6), ((modelica_integer) 0), 1 /* true */);
      tmpMeta486 = stringAppend(tmpMeta484,tmp485);
      tmpMeta488 = stringAppend(tmpMeta486,MMC_REFSTRINGLIT(tmp487));
      tmp489 = modelica_real_to_modelica_string(272.15, ((modelica_integer) 6), ((modelica_integer) 0), 1 /* true */);
      tmpMeta490 = stringAppend(tmpMeta488,tmp489);
      tmpMeta492 = stringAppend(tmpMeta490,MMC_REFSTRINGLIT(tmp491));
      {
        const char* assert_cond = "(noEvent(pump.vol.dynBal.medium.T >= 272.15))";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/work/IDEAS-master/IDEAS/Media/Water.mo",63,5,64,118,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta492));
          data->simulationInfo->needToReThrow = 1;
        } else {
          FILE_INFO info = {"/work/IDEAS-master/IDEAS/Media/Water.mo",63,5,64,118,0};
          omc_assert_withEquationIndexes(threadData, info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta492));
        }
      }
    }
  }
  threadData->lastEquationSolved = 1087;
}

/*
equation index: 1086
type: ALGORITHM

  assert(noEvent(pump.vol.dynBal.medium.T <= 403.15), "In pump_v3_basicCold_t.pump.vol.dynBal.medium: Temperature T = " + String(pump.vol.dynBal.medium.T, 6, 0, true) + " K exceeded its maximum allowed value of " + String(130.0, 6, 0, true) + " degC (" + String(403.15, 6, 0, true) + " Kelvin) as required from medium model \"IDEAS.Media.Water\".");
*/
void pump_v3_basicCold_t_eqFunction_1086(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1086};
  modelica_boolean tmp494;
  static const MMC_DEFSTRINGLIT(tmp495,63,"In pump_v3_basicCold_t.pump.vol.dynBal.medium: Temperature T = ");
  modelica_string tmp496;
  modelica_metatype tmpMeta497;
  static const MMC_DEFSTRINGLIT(tmp498,41," K exceeded its maximum allowed value of ");
  modelica_metatype tmpMeta499;
  modelica_string tmp500;
  modelica_metatype tmpMeta501;
  static const MMC_DEFSTRINGLIT(tmp502,7," degC (");
  modelica_metatype tmpMeta503;
  modelica_string tmp504;
  modelica_metatype tmpMeta505;
  static const MMC_DEFSTRINGLIT(tmp506,59," Kelvin) as required from medium model \"IDEAS.Media.Water\".");
  modelica_metatype tmpMeta507;
  static int tmp508 = 0;
  {
    tmp494 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[420]] /* pump.vol.dynBal.medium.T variable */),403.15);
    if(!tmp494)
    {
      tmp496 = modelica_real_to_modelica_string((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[420]] /* pump.vol.dynBal.medium.T variable */), ((modelica_integer) 6), ((modelica_integer) 0), 1 /* true */);
      tmpMeta497 = stringAppend(MMC_REFSTRINGLIT(tmp495),tmp496);
      tmpMeta499 = stringAppend(tmpMeta497,MMC_REFSTRINGLIT(tmp498));
      tmp500 = modelica_real_to_modelica_string(130.0, ((modelica_integer) 6), ((modelica_integer) 0), 1 /* true */);
      tmpMeta501 = stringAppend(tmpMeta499,tmp500);
      tmpMeta503 = stringAppend(tmpMeta501,MMC_REFSTRINGLIT(tmp502));
      tmp504 = modelica_real_to_modelica_string(403.15, ((modelica_integer) 6), ((modelica_integer) 0), 1 /* true */);
      tmpMeta505 = stringAppend(tmpMeta503,tmp504);
      tmpMeta507 = stringAppend(tmpMeta505,MMC_REFSTRINGLIT(tmp506));
      {
        const char* assert_cond = "(noEvent(pump.vol.dynBal.medium.T <= 403.15))";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/work/IDEAS-master/IDEAS/Media/Water.mo",66,5,67,118,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta507));
          data->simulationInfo->needToReThrow = 1;
        } else {
          FILE_INFO info = {"/work/IDEAS-master/IDEAS/Media/Water.mo",66,5,67,118,0};
          omc_assert_withEquationIndexes(threadData, info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta507));
        }
      }
    }
  }
  threadData->lastEquationSolved = 1086;
}

/*
equation index: 1085
type: ALGORITHM

  assert(noEvent(pump.port_a.p >= 0.0), "Pressure (= " + String(pump.port_a.p, 6, 0, true) + " Pa) of medium \"IDEAS.Media.Water\" is negative
(Temperature = " + String(pump.vol.dynBal.medium.T, 6, 0, true) + " K)");
*/
void pump_v3_basicCold_t_eqFunction_1085(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1085};
  modelica_boolean tmp509;
  static const MMC_DEFSTRINGLIT(tmp510,12,"Pressure (= ");
  modelica_string tmp511;
  modelica_metatype tmpMeta512;
  static const MMC_DEFSTRINGLIT(tmp513,62," Pa) of medium \"IDEAS.Media.Water\" is negative\n(Temperature = ");
  modelica_metatype tmpMeta514;
  modelica_string tmp515;
  modelica_metatype tmpMeta516;
  static const MMC_DEFSTRINGLIT(tmp517,3," K)");
  modelica_metatype tmpMeta518;
  static int tmp519 = 0;
  {
    tmp509 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[403]] /* pump.port_a.p variable */),0.0);
    if(!tmp509)
    {
      tmp511 = modelica_real_to_modelica_string((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[403]] /* pump.port_a.p variable */), ((modelica_integer) 6), ((modelica_integer) 0), 1 /* true */);
      tmpMeta512 = stringAppend(MMC_REFSTRINGLIT(tmp510),tmp511);
      tmpMeta514 = stringAppend(tmpMeta512,MMC_REFSTRINGLIT(tmp513));
      tmp515 = modelica_real_to_modelica_string((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[420]] /* pump.vol.dynBal.medium.T variable */), ((modelica_integer) 6), ((modelica_integer) 0), 1 /* true */);
      tmpMeta516 = stringAppend(tmpMeta514,tmp515);
      tmpMeta518 = stringAppend(tmpMeta516,MMC_REFSTRINGLIT(tmp517));
      {
        const char* assert_cond = "(noEvent(pump.port_a.p >= 0.0))";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/work/IDEAS-master/IDEAS/Media/Water.mo",69,5,69,148,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta518));
          data->simulationInfo->needToReThrow = 1;
        } else {
          FILE_INFO info = {"/work/IDEAS-master/IDEAS/Media/Water.mo",69,5,69,148,0};
          omc_assert_withEquationIndexes(threadData, info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta518));
        }
      }
    }
  }
  threadData->lastEquationSolved = 1085;
}

/*
equation index: 1084
type: ALGORITHM

  assert(pump.dpMachine <= pump.dpMax, "In pump_v3_basicCold_t.pump: Model operates with head -dp = " + String(pump.dpMachine, 6, 0, true) + " Pa,
    exceeding the pressure allowed by the parameter " + "pump_v3_basicCold_t.pump" + ".dpMax.
    This can happen if the model forces a high mass flow rate through a closed actuator,
    or if the performance record is unreasonable. Please verify your model, and
    consider using one of the other pump or fan models.");
*/
void pump_v3_basicCold_t_eqFunction_1084(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1084};
  modelica_boolean tmp520;
  static const MMC_DEFSTRINGLIT(tmp521,60,"In pump_v3_basicCold_t.pump: Model operates with head -dp = ");
  modelica_string tmp522;
  modelica_metatype tmpMeta523;
  static const MMC_DEFSTRINGLIT(tmp524,57," Pa,\n    exceeding the pressure allowed by the parameter ");
  modelica_metatype tmpMeta525;
  static const MMC_DEFSTRINGLIT(tmp526,24,"pump_v3_basicCold_t.pump");
  modelica_metatype tmpMeta527;
  static const MMC_DEFSTRINGLIT(tmp528,232,".dpMax.\n    This can happen if the model forces a high mass flow rate through a closed actuator,\n    or if the performance record is unreasonable. Please verify your model, and\n    consider using one of the other pump or fan models.");
  modelica_metatype tmpMeta529;
  static int tmp530 = 0;
  {
    tmp520 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[390]] /* pump.dpMachine variable */),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[690]] /* pump.dpMax PARAM */));
    if(!tmp520)
    {
      tmp522 = modelica_real_to_modelica_string((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[390]] /* pump.dpMachine variable */), ((modelica_integer) 6), ((modelica_integer) 0), 1 /* true */);
      tmpMeta523 = stringAppend(MMC_REFSTRINGLIT(tmp521),tmp522);
      tmpMeta525 = stringAppend(tmpMeta523,MMC_REFSTRINGLIT(tmp524));
      tmpMeta527 = stringAppend(tmpMeta525,MMC_REFSTRINGLIT(tmp526));
      tmpMeta529 = stringAppend(tmpMeta527,MMC_REFSTRINGLIT(tmp528));
      {
        const char* assert_cond = "(pump.dpMachine <= pump.dpMax)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/work/IDEAS-master/IDEAS/Fluid/Movers/FlowControlled_m_flow.mo",87,3,92,58,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta529));
          data->simulationInfo->needToReThrow = 1;
        } else {
          FILE_INFO info = {"/work/IDEAS-master/IDEAS/Fluid/Movers/FlowControlled_m_flow.mo",87,3,92,58,0};
          omc_assert_withEquationIndexes(threadData, info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta529));
        }
      }
    }
  }
  threadData->lastEquationSolved = 1084;
}

OMC_DISABLE_OPT
int pump_v3_basicCold_t_functionDAE(DATA *data, threadData_t *threadData)
{
  int equationIndexes[1] = {0};
#if !defined(OMC_MINIMAL_RUNTIME)
  if (measure_time_flag) rt_tick(SIM_TIMER_DAE);
#endif

  data->simulationInfo->needToIterate = 0;
  data->simulationInfo->discreteCall = 1;
  pump_v3_basicCold_t_functionLocalKnownVars(data, threadData);
  static void (*const eqFunctions[271])(DATA*, threadData_t*) = {
    pump_v3_basicCold_t_eqFunction_805,
    pump_v3_basicCold_t_eqFunction_806,
    pump_v3_basicCold_t_eqFunction_807,
    pump_v3_basicCold_t_eqFunction_808,
    pump_v3_basicCold_t_eqFunction_809,
    pump_v3_basicCold_t_eqFunction_810,
    pump_v3_basicCold_t_eqFunction_811,
    pump_v3_basicCold_t_eqFunction_812,
    pump_v3_basicCold_t_eqFunction_813,
    pump_v3_basicCold_t_eqFunction_814,
    pump_v3_basicCold_t_eqFunction_815,
    pump_v3_basicCold_t_eqFunction_816,
    pump_v3_basicCold_t_eqFunction_817,
    pump_v3_basicCold_t_eqFunction_818,
    pump_v3_basicCold_t_eqFunction_819,
    pump_v3_basicCold_t_eqFunction_820,
    pump_v3_basicCold_t_eqFunction_821,
    pump_v3_basicCold_t_eqFunction_822,
    pump_v3_basicCold_t_eqFunction_823,
    pump_v3_basicCold_t_eqFunction_824,
    pump_v3_basicCold_t_eqFunction_825,
    pump_v3_basicCold_t_eqFunction_826,
    pump_v3_basicCold_t_eqFunction_827,
    pump_v3_basicCold_t_eqFunction_828,
    pump_v3_basicCold_t_eqFunction_829,
    pump_v3_basicCold_t_eqFunction_830,
    pump_v3_basicCold_t_eqFunction_831,
    pump_v3_basicCold_t_eqFunction_832,
    pump_v3_basicCold_t_eqFunction_833,
    pump_v3_basicCold_t_eqFunction_834,
    pump_v3_basicCold_t_eqFunction_835,
    pump_v3_basicCold_t_eqFunction_836,
    pump_v3_basicCold_t_eqFunction_837,
    pump_v3_basicCold_t_eqFunction_838,
    pump_v3_basicCold_t_eqFunction_839,
    pump_v3_basicCold_t_eqFunction_840,
    pump_v3_basicCold_t_eqFunction_841,
    pump_v3_basicCold_t_eqFunction_842,
    pump_v3_basicCold_t_eqFunction_843,
    pump_v3_basicCold_t_eqFunction_844,
    pump_v3_basicCold_t_eqFunction_845,
    pump_v3_basicCold_t_eqFunction_846,
    pump_v3_basicCold_t_eqFunction_847,
    pump_v3_basicCold_t_eqFunction_848,
    pump_v3_basicCold_t_eqFunction_849,
    pump_v3_basicCold_t_eqFunction_850,
    pump_v3_basicCold_t_eqFunction_851,
    pump_v3_basicCold_t_eqFunction_852,
    pump_v3_basicCold_t_eqFunction_853,
    pump_v3_basicCold_t_eqFunction_854,
    pump_v3_basicCold_t_eqFunction_855,
    pump_v3_basicCold_t_eqFunction_856,
    pump_v3_basicCold_t_eqFunction_857,
    pump_v3_basicCold_t_eqFunction_858,
    pump_v3_basicCold_t_eqFunction_859,
    pump_v3_basicCold_t_eqFunction_860,
    pump_v3_basicCold_t_eqFunction_861,
    pump_v3_basicCold_t_eqFunction_862,
    pump_v3_basicCold_t_eqFunction_863,
    pump_v3_basicCold_t_eqFunction_864,
    pump_v3_basicCold_t_eqFunction_865,
    pump_v3_basicCold_t_eqFunction_866,
    pump_v3_basicCold_t_eqFunction_867,
    pump_v3_basicCold_t_eqFunction_868,
    pump_v3_basicCold_t_eqFunction_869,
    pump_v3_basicCold_t_eqFunction_870,
    pump_v3_basicCold_t_eqFunction_871,
    pump_v3_basicCold_t_eqFunction_872,
    pump_v3_basicCold_t_eqFunction_873,
    pump_v3_basicCold_t_eqFunction_874,
    pump_v3_basicCold_t_eqFunction_875,
    pump_v3_basicCold_t_eqFunction_876,
    pump_v3_basicCold_t_eqFunction_877,
    pump_v3_basicCold_t_eqFunction_878,
    pump_v3_basicCold_t_eqFunction_879,
    pump_v3_basicCold_t_eqFunction_880,
    pump_v3_basicCold_t_eqFunction_881,
    pump_v3_basicCold_t_eqFunction_882,
    pump_v3_basicCold_t_eqFunction_883,
    pump_v3_basicCold_t_eqFunction_884,
    pump_v3_basicCold_t_eqFunction_885,
    pump_v3_basicCold_t_eqFunction_886,
    pump_v3_basicCold_t_eqFunction_887,
    pump_v3_basicCold_t_eqFunction_888,
    pump_v3_basicCold_t_eqFunction_889,
    pump_v3_basicCold_t_eqFunction_890,
    pump_v3_basicCold_t_eqFunction_891,
    pump_v3_basicCold_t_eqFunction_892,
    pump_v3_basicCold_t_eqFunction_893,
    pump_v3_basicCold_t_eqFunction_894,
    pump_v3_basicCold_t_eqFunction_895,
    pump_v3_basicCold_t_eqFunction_896,
    pump_v3_basicCold_t_eqFunction_897,
    pump_v3_basicCold_t_eqFunction_898,
    pump_v3_basicCold_t_eqFunction_899,
    pump_v3_basicCold_t_eqFunction_900,
    pump_v3_basicCold_t_eqFunction_901,
    pump_v3_basicCold_t_eqFunction_902,
    pump_v3_basicCold_t_eqFunction_903,
    pump_v3_basicCold_t_eqFunction_904,
    pump_v3_basicCold_t_eqFunction_905,
    pump_v3_basicCold_t_eqFunction_906,
    pump_v3_basicCold_t_eqFunction_907,
    pump_v3_basicCold_t_eqFunction_908,
    pump_v3_basicCold_t_eqFunction_909,
    pump_v3_basicCold_t_eqFunction_910,
    pump_v3_basicCold_t_eqFunction_911,
    pump_v3_basicCold_t_eqFunction_912,
    pump_v3_basicCold_t_eqFunction_913,
    pump_v3_basicCold_t_eqFunction_914,
    pump_v3_basicCold_t_eqFunction_915,
    pump_v3_basicCold_t_eqFunction_916,
    pump_v3_basicCold_t_eqFunction_917,
    pump_v3_basicCold_t_eqFunction_918,
    pump_v3_basicCold_t_eqFunction_919,
    pump_v3_basicCold_t_eqFunction_920,
    pump_v3_basicCold_t_eqFunction_921,
    pump_v3_basicCold_t_eqFunction_922,
    pump_v3_basicCold_t_eqFunction_923,
    pump_v3_basicCold_t_eqFunction_924,
    pump_v3_basicCold_t_eqFunction_925,
    pump_v3_basicCold_t_eqFunction_935,
    pump_v3_basicCold_t_eqFunction_936,
    pump_v3_basicCold_t_eqFunction_937,
    pump_v3_basicCold_t_eqFunction_938,
    pump_v3_basicCold_t_eqFunction_939,
    pump_v3_basicCold_t_eqFunction_940,
    pump_v3_basicCold_t_eqFunction_941,
    pump_v3_basicCold_t_eqFunction_942,
    pump_v3_basicCold_t_eqFunction_943,
    pump_v3_basicCold_t_eqFunction_944,
    pump_v3_basicCold_t_eqFunction_945,
    pump_v3_basicCold_t_eqFunction_946,
    pump_v3_basicCold_t_eqFunction_947,
    pump_v3_basicCold_t_eqFunction_948,
    pump_v3_basicCold_t_eqFunction_949,
    pump_v3_basicCold_t_eqFunction_950,
    pump_v3_basicCold_t_eqFunction_951,
    pump_v3_basicCold_t_eqFunction_952,
    pump_v3_basicCold_t_eqFunction_953,
    pump_v3_basicCold_t_eqFunction_954,
    pump_v3_basicCold_t_eqFunction_955,
    pump_v3_basicCold_t_eqFunction_956,
    pump_v3_basicCold_t_eqFunction_957,
    pump_v3_basicCold_t_eqFunction_958,
    pump_v3_basicCold_t_eqFunction_959,
    pump_v3_basicCold_t_eqFunction_960,
    pump_v3_basicCold_t_eqFunction_961,
    pump_v3_basicCold_t_eqFunction_962,
    pump_v3_basicCold_t_eqFunction_963,
    pump_v3_basicCold_t_eqFunction_964,
    pump_v3_basicCold_t_eqFunction_965,
    pump_v3_basicCold_t_eqFunction_966,
    pump_v3_basicCold_t_eqFunction_976,
    pump_v3_basicCold_t_eqFunction_977,
    pump_v3_basicCold_t_eqFunction_978,
    pump_v3_basicCold_t_eqFunction_979,
    pump_v3_basicCold_t_eqFunction_980,
    pump_v3_basicCold_t_eqFunction_981,
    pump_v3_basicCold_t_eqFunction_982,
    pump_v3_basicCold_t_eqFunction_983,
    pump_v3_basicCold_t_eqFunction_984,
    pump_v3_basicCold_t_eqFunction_985,
    pump_v3_basicCold_t_eqFunction_986,
    pump_v3_basicCold_t_eqFunction_987,
    pump_v3_basicCold_t_eqFunction_988,
    pump_v3_basicCold_t_eqFunction_989,
    pump_v3_basicCold_t_eqFunction_990,
    pump_v3_basicCold_t_eqFunction_991,
    pump_v3_basicCold_t_eqFunction_992,
    pump_v3_basicCold_t_eqFunction_993,
    pump_v3_basicCold_t_eqFunction_994,
    pump_v3_basicCold_t_eqFunction_995,
    pump_v3_basicCold_t_eqFunction_996,
    pump_v3_basicCold_t_eqFunction_997,
    pump_v3_basicCold_t_eqFunction_998,
    pump_v3_basicCold_t_eqFunction_999,
    pump_v3_basicCold_t_eqFunction_1000,
    pump_v3_basicCold_t_eqFunction_1001,
    pump_v3_basicCold_t_eqFunction_1002,
    pump_v3_basicCold_t_eqFunction_1003,
    pump_v3_basicCold_t_eqFunction_1004,
    pump_v3_basicCold_t_eqFunction_1005,
    pump_v3_basicCold_t_eqFunction_1006,
    pump_v3_basicCold_t_eqFunction_1007,
    pump_v3_basicCold_t_eqFunction_1008,
    pump_v3_basicCold_t_eqFunction_1009,
    pump_v3_basicCold_t_eqFunction_1010,
    pump_v3_basicCold_t_eqFunction_1011,
    pump_v3_basicCold_t_eqFunction_1012,
    pump_v3_basicCold_t_eqFunction_1013,
    pump_v3_basicCold_t_eqFunction_1014,
    pump_v3_basicCold_t_eqFunction_1015,
    pump_v3_basicCold_t_eqFunction_1016,
    pump_v3_basicCold_t_eqFunction_1017,
    pump_v3_basicCold_t_eqFunction_1018,
    pump_v3_basicCold_t_eqFunction_1019,
    pump_v3_basicCold_t_eqFunction_1020,
    pump_v3_basicCold_t_eqFunction_1021,
    pump_v3_basicCold_t_eqFunction_1022,
    pump_v3_basicCold_t_eqFunction_1023,
    pump_v3_basicCold_t_eqFunction_1024,
    pump_v3_basicCold_t_eqFunction_1025,
    pump_v3_basicCold_t_eqFunction_1026,
    pump_v3_basicCold_t_eqFunction_1027,
    pump_v3_basicCold_t_eqFunction_1028,
    pump_v3_basicCold_t_eqFunction_1029,
    pump_v3_basicCold_t_eqFunction_1030,
    pump_v3_basicCold_t_eqFunction_1040,
    pump_v3_basicCold_t_eqFunction_1041,
    pump_v3_basicCold_t_eqFunction_1042,
    pump_v3_basicCold_t_eqFunction_1043,
    pump_v3_basicCold_t_eqFunction_1044,
    pump_v3_basicCold_t_eqFunction_1045,
    pump_v3_basicCold_t_eqFunction_1046,
    pump_v3_basicCold_t_eqFunction_1047,
    pump_v3_basicCold_t_eqFunction_1048,
    pump_v3_basicCold_t_eqFunction_1049,
    pump_v3_basicCold_t_eqFunction_1050,
    pump_v3_basicCold_t_eqFunction_1051,
    pump_v3_basicCold_t_eqFunction_1052,
    pump_v3_basicCold_t_eqFunction_1053,
    pump_v3_basicCold_t_eqFunction_1054,
    pump_v3_basicCold_t_eqFunction_1055,
    pump_v3_basicCold_t_eqFunction_1065,
    pump_v3_basicCold_t_eqFunction_1066,
    pump_v3_basicCold_t_eqFunction_1067,
    pump_v3_basicCold_t_eqFunction_1068,
    pump_v3_basicCold_t_eqFunction_1069,
    pump_v3_basicCold_t_eqFunction_1070,
    pump_v3_basicCold_t_eqFunction_1071,
    pump_v3_basicCold_t_eqFunction_1072,
    pump_v3_basicCold_t_eqFunction_1073,
    pump_v3_basicCold_t_eqFunction_1074,
    pump_v3_basicCold_t_eqFunction_1075,
    pump_v3_basicCold_t_eqFunction_1076,
    pump_v3_basicCold_t_eqFunction_1077,
    pump_v3_basicCold_t_eqFunction_1078,
    pump_v3_basicCold_t_eqFunction_1079,
    pump_v3_basicCold_t_eqFunction_1080,
    pump_v3_basicCold_t_eqFunction_1081,
    pump_v3_basicCold_t_eqFunction_1082,
    pump_v3_basicCold_t_eqFunction_1083,
    pump_v3_basicCold_t_eqFunction_1111,
    pump_v3_basicCold_t_eqFunction_1110,
    pump_v3_basicCold_t_eqFunction_1109,
    pump_v3_basicCold_t_eqFunction_1108,
    pump_v3_basicCold_t_eqFunction_1107,
    pump_v3_basicCold_t_eqFunction_1106,
    pump_v3_basicCold_t_eqFunction_1105,
    pump_v3_basicCold_t_eqFunction_1104,
    pump_v3_basicCold_t_eqFunction_1103,
    pump_v3_basicCold_t_eqFunction_1102,
    pump_v3_basicCold_t_eqFunction_1101,
    pump_v3_basicCold_t_eqFunction_1100,
    pump_v3_basicCold_t_eqFunction_1099,
    pump_v3_basicCold_t_eqFunction_1098,
    pump_v3_basicCold_t_eqFunction_1097,
    pump_v3_basicCold_t_eqFunction_1096,
    pump_v3_basicCold_t_eqFunction_1095,
    pump_v3_basicCold_t_eqFunction_1094,
    pump_v3_basicCold_t_eqFunction_1093,
    pump_v3_basicCold_t_eqFunction_1092,
    pump_v3_basicCold_t_eqFunction_1091,
    pump_v3_basicCold_t_eqFunction_1090,
    pump_v3_basicCold_t_eqFunction_1089,
    pump_v3_basicCold_t_eqFunction_1088,
    pump_v3_basicCold_t_eqFunction_1087,
    pump_v3_basicCold_t_eqFunction_1086,
    pump_v3_basicCold_t_eqFunction_1085,
    pump_v3_basicCold_t_eqFunction_1084
  };
  
  for (int id = 0; id < 271; id++) {
    eqFunctions[id](data, threadData);
  }
  data->simulationInfo->discreteCall = 0;
  
#if !defined(OMC_MINIMAL_RUNTIME)
  if (measure_time_flag) rt_accumulate(SIM_TIMER_DAE);
#endif
  return 0;
}


int pump_v3_basicCold_t_functionLocalKnownVars(DATA *data, threadData_t *threadData)
{
  
  return 0;
}

/* forwarded equations */
extern void pump_v3_basicCold_t_eqFunction_807(DATA* data, threadData_t *threadData);
extern void pump_v3_basicCold_t_eqFunction_808(DATA* data, threadData_t *threadData);
extern void pump_v3_basicCold_t_eqFunction_809(DATA* data, threadData_t *threadData);
extern void pump_v3_basicCold_t_eqFunction_810(DATA* data, threadData_t *threadData);
extern void pump_v3_basicCold_t_eqFunction_811(DATA* data, threadData_t *threadData);
extern void pump_v3_basicCold_t_eqFunction_812(DATA* data, threadData_t *threadData);
extern void pump_v3_basicCold_t_eqFunction_813(DATA* data, threadData_t *threadData);
extern void pump_v3_basicCold_t_eqFunction_814(DATA* data, threadData_t *threadData);
extern void pump_v3_basicCold_t_eqFunction_815(DATA* data, threadData_t *threadData);
extern void pump_v3_basicCold_t_eqFunction_816(DATA* data, threadData_t *threadData);
extern void pump_v3_basicCold_t_eqFunction_819(DATA* data, threadData_t *threadData);
extern void pump_v3_basicCold_t_eqFunction_821(DATA* data, threadData_t *threadData);
extern void pump_v3_basicCold_t_eqFunction_822(DATA* data, threadData_t *threadData);
extern void pump_v3_basicCold_t_eqFunction_825(DATA* data, threadData_t *threadData);
extern void pump_v3_basicCold_t_eqFunction_826(DATA* data, threadData_t *threadData);
extern void pump_v3_basicCold_t_eqFunction_827(DATA* data, threadData_t *threadData);
extern void pump_v3_basicCold_t_eqFunction_828(DATA* data, threadData_t *threadData);
extern void pump_v3_basicCold_t_eqFunction_829(DATA* data, threadData_t *threadData);
extern void pump_v3_basicCold_t_eqFunction_830(DATA* data, threadData_t *threadData);
extern void pump_v3_basicCold_t_eqFunction_831(DATA* data, threadData_t *threadData);
extern void pump_v3_basicCold_t_eqFunction_832(DATA* data, threadData_t *threadData);
extern void pump_v3_basicCold_t_eqFunction_833(DATA* data, threadData_t *threadData);
extern void pump_v3_basicCold_t_eqFunction_834(DATA* data, threadData_t *threadData);
extern void pump_v3_basicCold_t_eqFunction_837(DATA* data, threadData_t *threadData);
extern void pump_v3_basicCold_t_eqFunction_840(DATA* data, threadData_t *threadData);
extern void pump_v3_basicCold_t_eqFunction_841(DATA* data, threadData_t *threadData);
extern void pump_v3_basicCold_t_eqFunction_842(DATA* data, threadData_t *threadData);
extern void pump_v3_basicCold_t_eqFunction_843(DATA* data, threadData_t *threadData);
extern void pump_v3_basicCold_t_eqFunction_844(DATA* data, threadData_t *threadData);
extern void pump_v3_basicCold_t_eqFunction_845(DATA* data, threadData_t *threadData);
extern void pump_v3_basicCold_t_eqFunction_846(DATA* data, threadData_t *threadData);
extern void pump_v3_basicCold_t_eqFunction_847(DATA* data, threadData_t *threadData);
extern void pump_v3_basicCold_t_eqFunction_848(DATA* data, threadData_t *threadData);
extern void pump_v3_basicCold_t_eqFunction_849(DATA* data, threadData_t *threadData);
extern void pump_v3_basicCold_t_eqFunction_850(DATA* data, threadData_t *threadData);
extern void pump_v3_basicCold_t_eqFunction_851(DATA* data, threadData_t *threadData);
extern void pump_v3_basicCold_t_eqFunction_852(DATA* data, threadData_t *threadData);
extern void pump_v3_basicCold_t_eqFunction_855(DATA* data, threadData_t *threadData);
extern void pump_v3_basicCold_t_eqFunction_858(DATA* data, threadData_t *threadData);
extern void pump_v3_basicCold_t_eqFunction_859(DATA* data, threadData_t *threadData);
extern void pump_v3_basicCold_t_eqFunction_860(DATA* data, threadData_t *threadData);
extern void pump_v3_basicCold_t_eqFunction_861(DATA* data, threadData_t *threadData);
extern void pump_v3_basicCold_t_eqFunction_862(DATA* data, threadData_t *threadData);
extern void pump_v3_basicCold_t_eqFunction_863(DATA* data, threadData_t *threadData);
extern void pump_v3_basicCold_t_eqFunction_864(DATA* data, threadData_t *threadData);
extern void pump_v3_basicCold_t_eqFunction_865(DATA* data, threadData_t *threadData);
extern void pump_v3_basicCold_t_eqFunction_866(DATA* data, threadData_t *threadData);
extern void pump_v3_basicCold_t_eqFunction_867(DATA* data, threadData_t *threadData);
extern void pump_v3_basicCold_t_eqFunction_868(DATA* data, threadData_t *threadData);
extern void pump_v3_basicCold_t_eqFunction_869(DATA* data, threadData_t *threadData);
extern void pump_v3_basicCold_t_eqFunction_870(DATA* data, threadData_t *threadData);
extern void pump_v3_basicCold_t_eqFunction_871(DATA* data, threadData_t *threadData);
extern void pump_v3_basicCold_t_eqFunction_872(DATA* data, threadData_t *threadData);
extern void pump_v3_basicCold_t_eqFunction_873(DATA* data, threadData_t *threadData);
extern void pump_v3_basicCold_t_eqFunction_874(DATA* data, threadData_t *threadData);
extern void pump_v3_basicCold_t_eqFunction_876(DATA* data, threadData_t *threadData);
extern void pump_v3_basicCold_t_eqFunction_877(DATA* data, threadData_t *threadData);
extern void pump_v3_basicCold_t_eqFunction_880(DATA* data, threadData_t *threadData);
extern void pump_v3_basicCold_t_eqFunction_881(DATA* data, threadData_t *threadData);
extern void pump_v3_basicCold_t_eqFunction_882(DATA* data, threadData_t *threadData);
extern void pump_v3_basicCold_t_eqFunction_883(DATA* data, threadData_t *threadData);
extern void pump_v3_basicCold_t_eqFunction_884(DATA* data, threadData_t *threadData);
extern void pump_v3_basicCold_t_eqFunction_885(DATA* data, threadData_t *threadData);
extern void pump_v3_basicCold_t_eqFunction_886(DATA* data, threadData_t *threadData);
extern void pump_v3_basicCold_t_eqFunction_889(DATA* data, threadData_t *threadData);
extern void pump_v3_basicCold_t_eqFunction_890(DATA* data, threadData_t *threadData);
extern void pump_v3_basicCold_t_eqFunction_893(DATA* data, threadData_t *threadData);
extern void pump_v3_basicCold_t_eqFunction_894(DATA* data, threadData_t *threadData);
extern void pump_v3_basicCold_t_eqFunction_895(DATA* data, threadData_t *threadData);
extern void pump_v3_basicCold_t_eqFunction_896(DATA* data, threadData_t *threadData);
extern void pump_v3_basicCold_t_eqFunction_902(DATA* data, threadData_t *threadData);
extern void pump_v3_basicCold_t_eqFunction_903(DATA* data, threadData_t *threadData);
extern void pump_v3_basicCold_t_eqFunction_904(DATA* data, threadData_t *threadData);
extern void pump_v3_basicCold_t_eqFunction_905(DATA* data, threadData_t *threadData);
extern void pump_v3_basicCold_t_eqFunction_906(DATA* data, threadData_t *threadData);
extern void pump_v3_basicCold_t_eqFunction_907(DATA* data, threadData_t *threadData);
extern void pump_v3_basicCold_t_eqFunction_908(DATA* data, threadData_t *threadData);
extern void pump_v3_basicCold_t_eqFunction_912(DATA* data, threadData_t *threadData);
extern void pump_v3_basicCold_t_eqFunction_913(DATA* data, threadData_t *threadData);
extern void pump_v3_basicCold_t_eqFunction_914(DATA* data, threadData_t *threadData);
extern void pump_v3_basicCold_t_eqFunction_919(DATA* data, threadData_t *threadData);
extern void pump_v3_basicCold_t_eqFunction_920(DATA* data, threadData_t *threadData);
extern void pump_v3_basicCold_t_eqFunction_921(DATA* data, threadData_t *threadData);
extern void pump_v3_basicCold_t_eqFunction_922(DATA* data, threadData_t *threadData);
extern void pump_v3_basicCold_t_eqFunction_924(DATA* data, threadData_t *threadData);
extern void pump_v3_basicCold_t_eqFunction_925(DATA* data, threadData_t *threadData);
extern void pump_v3_basicCold_t_eqFunction_935(DATA* data, threadData_t *threadData);
extern void pump_v3_basicCold_t_eqFunction_936(DATA* data, threadData_t *threadData);
extern void pump_v3_basicCold_t_eqFunction_937(DATA* data, threadData_t *threadData);
extern void pump_v3_basicCold_t_eqFunction_938(DATA* data, threadData_t *threadData);
extern void pump_v3_basicCold_t_eqFunction_939(DATA* data, threadData_t *threadData);
extern void pump_v3_basicCold_t_eqFunction_940(DATA* data, threadData_t *threadData);
extern void pump_v3_basicCold_t_eqFunction_941(DATA* data, threadData_t *threadData);
extern void pump_v3_basicCold_t_eqFunction_942(DATA* data, threadData_t *threadData);
extern void pump_v3_basicCold_t_eqFunction_943(DATA* data, threadData_t *threadData);
extern void pump_v3_basicCold_t_eqFunction_944(DATA* data, threadData_t *threadData);
extern void pump_v3_basicCold_t_eqFunction_945(DATA* data, threadData_t *threadData);
extern void pump_v3_basicCold_t_eqFunction_946(DATA* data, threadData_t *threadData);
extern void pump_v3_basicCold_t_eqFunction_952(DATA* data, threadData_t *threadData);
extern void pump_v3_basicCold_t_eqFunction_953(DATA* data, threadData_t *threadData);
extern void pump_v3_basicCold_t_eqFunction_954(DATA* data, threadData_t *threadData);
extern void pump_v3_basicCold_t_eqFunction_955(DATA* data, threadData_t *threadData);
extern void pump_v3_basicCold_t_eqFunction_956(DATA* data, threadData_t *threadData);
extern void pump_v3_basicCold_t_eqFunction_957(DATA* data, threadData_t *threadData);
extern void pump_v3_basicCold_t_eqFunction_958(DATA* data, threadData_t *threadData);
extern void pump_v3_basicCold_t_eqFunction_959(DATA* data, threadData_t *threadData);
extern void pump_v3_basicCold_t_eqFunction_960(DATA* data, threadData_t *threadData);
extern void pump_v3_basicCold_t_eqFunction_961(DATA* data, threadData_t *threadData);
extern void pump_v3_basicCold_t_eqFunction_965(DATA* data, threadData_t *threadData);
extern void pump_v3_basicCold_t_eqFunction_966(DATA* data, threadData_t *threadData);
extern void pump_v3_basicCold_t_eqFunction_976(DATA* data, threadData_t *threadData);
extern void pump_v3_basicCold_t_eqFunction_977(DATA* data, threadData_t *threadData);
extern void pump_v3_basicCold_t_eqFunction_978(DATA* data, threadData_t *threadData);
extern void pump_v3_basicCold_t_eqFunction_979(DATA* data, threadData_t *threadData);
extern void pump_v3_basicCold_t_eqFunction_980(DATA* data, threadData_t *threadData);
extern void pump_v3_basicCold_t_eqFunction_981(DATA* data, threadData_t *threadData);
extern void pump_v3_basicCold_t_eqFunction_982(DATA* data, threadData_t *threadData);
extern void pump_v3_basicCold_t_eqFunction_983(DATA* data, threadData_t *threadData);
extern void pump_v3_basicCold_t_eqFunction_984(DATA* data, threadData_t *threadData);
extern void pump_v3_basicCold_t_eqFunction_985(DATA* data, threadData_t *threadData);
extern void pump_v3_basicCold_t_eqFunction_986(DATA* data, threadData_t *threadData);
extern void pump_v3_basicCold_t_eqFunction_987(DATA* data, threadData_t *threadData);
extern void pump_v3_basicCold_t_eqFunction_988(DATA* data, threadData_t *threadData);
extern void pump_v3_basicCold_t_eqFunction_989(DATA* data, threadData_t *threadData);
extern void pump_v3_basicCold_t_eqFunction_990(DATA* data, threadData_t *threadData);
extern void pump_v3_basicCold_t_eqFunction_991(DATA* data, threadData_t *threadData);
extern void pump_v3_basicCold_t_eqFunction_992(DATA* data, threadData_t *threadData);
extern void pump_v3_basicCold_t_eqFunction_995(DATA* data, threadData_t *threadData);
extern void pump_v3_basicCold_t_eqFunction_996(DATA* data, threadData_t *threadData);
extern void pump_v3_basicCold_t_eqFunction_997(DATA* data, threadData_t *threadData);
extern void pump_v3_basicCold_t_eqFunction_1003(DATA* data, threadData_t *threadData);
extern void pump_v3_basicCold_t_eqFunction_1004(DATA* data, threadData_t *threadData);
extern void pump_v3_basicCold_t_eqFunction_1005(DATA* data, threadData_t *threadData);
extern void pump_v3_basicCold_t_eqFunction_1006(DATA* data, threadData_t *threadData);
extern void pump_v3_basicCold_t_eqFunction_1008(DATA* data, threadData_t *threadData);
extern void pump_v3_basicCold_t_eqFunction_1009(DATA* data, threadData_t *threadData);
extern void pump_v3_basicCold_t_eqFunction_1010(DATA* data, threadData_t *threadData);
extern void pump_v3_basicCold_t_eqFunction_1011(DATA* data, threadData_t *threadData);
extern void pump_v3_basicCold_t_eqFunction_1012(DATA* data, threadData_t *threadData);
extern void pump_v3_basicCold_t_eqFunction_1013(DATA* data, threadData_t *threadData);
extern void pump_v3_basicCold_t_eqFunction_1014(DATA* data, threadData_t *threadData);
extern void pump_v3_basicCold_t_eqFunction_1015(DATA* data, threadData_t *threadData);
extern void pump_v3_basicCold_t_eqFunction_1016(DATA* data, threadData_t *threadData);
extern void pump_v3_basicCold_t_eqFunction_1017(DATA* data, threadData_t *threadData);
extern void pump_v3_basicCold_t_eqFunction_1021(DATA* data, threadData_t *threadData);
extern void pump_v3_basicCold_t_eqFunction_1022(DATA* data, threadData_t *threadData);
extern void pump_v3_basicCold_t_eqFunction_1023(DATA* data, threadData_t *threadData);
extern void pump_v3_basicCold_t_eqFunction_1024(DATA* data, threadData_t *threadData);
extern void pump_v3_basicCold_t_eqFunction_1025(DATA* data, threadData_t *threadData);
extern void pump_v3_basicCold_t_eqFunction_1026(DATA* data, threadData_t *threadData);
extern void pump_v3_basicCold_t_eqFunction_1027(DATA* data, threadData_t *threadData);
extern void pump_v3_basicCold_t_eqFunction_1028(DATA* data, threadData_t *threadData);
extern void pump_v3_basicCold_t_eqFunction_1029(DATA* data, threadData_t *threadData);
extern void pump_v3_basicCold_t_eqFunction_1030(DATA* data, threadData_t *threadData);
extern void pump_v3_basicCold_t_eqFunction_1040(DATA* data, threadData_t *threadData);
extern void pump_v3_basicCold_t_eqFunction_1041(DATA* data, threadData_t *threadData);
extern void pump_v3_basicCold_t_eqFunction_1042(DATA* data, threadData_t *threadData);
extern void pump_v3_basicCold_t_eqFunction_1043(DATA* data, threadData_t *threadData);
extern void pump_v3_basicCold_t_eqFunction_1044(DATA* data, threadData_t *threadData);
extern void pump_v3_basicCold_t_eqFunction_1045(DATA* data, threadData_t *threadData);
extern void pump_v3_basicCold_t_eqFunction_1046(DATA* data, threadData_t *threadData);
extern void pump_v3_basicCold_t_eqFunction_1047(DATA* data, threadData_t *threadData);
extern void pump_v3_basicCold_t_eqFunction_1048(DATA* data, threadData_t *threadData);
extern void pump_v3_basicCold_t_eqFunction_1050(DATA* data, threadData_t *threadData);
extern void pump_v3_basicCold_t_eqFunction_1051(DATA* data, threadData_t *threadData);
extern void pump_v3_basicCold_t_eqFunction_1052(DATA* data, threadData_t *threadData);
extern void pump_v3_basicCold_t_eqFunction_1053(DATA* data, threadData_t *threadData);
extern void pump_v3_basicCold_t_eqFunction_1054(DATA* data, threadData_t *threadData);
extern void pump_v3_basicCold_t_eqFunction_1055(DATA* data, threadData_t *threadData);
extern void pump_v3_basicCold_t_eqFunction_1065(DATA* data, threadData_t *threadData);
extern void pump_v3_basicCold_t_eqFunction_1066(DATA* data, threadData_t *threadData);
extern void pump_v3_basicCold_t_eqFunction_1067(DATA* data, threadData_t *threadData);
extern void pump_v3_basicCold_t_eqFunction_1068(DATA* data, threadData_t *threadData);
extern void pump_v3_basicCold_t_eqFunction_1069(DATA* data, threadData_t *threadData);
extern void pump_v3_basicCold_t_eqFunction_1070(DATA* data, threadData_t *threadData);
extern void pump_v3_basicCold_t_eqFunction_1071(DATA* data, threadData_t *threadData);
extern void pump_v3_basicCold_t_eqFunction_1072(DATA* data, threadData_t *threadData);
extern void pump_v3_basicCold_t_eqFunction_1073(DATA* data, threadData_t *threadData);
extern void pump_v3_basicCold_t_eqFunction_1074(DATA* data, threadData_t *threadData);
extern void pump_v3_basicCold_t_eqFunction_1075(DATA* data, threadData_t *threadData);
extern void pump_v3_basicCold_t_eqFunction_1076(DATA* data, threadData_t *threadData);
extern void pump_v3_basicCold_t_eqFunction_1077(DATA* data, threadData_t *threadData);
extern void pump_v3_basicCold_t_eqFunction_1078(DATA* data, threadData_t *threadData);
extern void pump_v3_basicCold_t_eqFunction_1079(DATA* data, threadData_t *threadData);
extern void pump_v3_basicCold_t_eqFunction_1080(DATA* data, threadData_t *threadData);

static void functionODE_system0(DATA *data, threadData_t *threadData)
{
  static void (*const eqFunctions[185])(DATA*, threadData_t*) = {
    pump_v3_basicCold_t_eqFunction_807,
    pump_v3_basicCold_t_eqFunction_808,
    pump_v3_basicCold_t_eqFunction_809,
    pump_v3_basicCold_t_eqFunction_810,
    pump_v3_basicCold_t_eqFunction_811,
    pump_v3_basicCold_t_eqFunction_812,
    pump_v3_basicCold_t_eqFunction_813,
    pump_v3_basicCold_t_eqFunction_814,
    pump_v3_basicCold_t_eqFunction_815,
    pump_v3_basicCold_t_eqFunction_816,
    pump_v3_basicCold_t_eqFunction_819,
    pump_v3_basicCold_t_eqFunction_821,
    pump_v3_basicCold_t_eqFunction_822,
    pump_v3_basicCold_t_eqFunction_825,
    pump_v3_basicCold_t_eqFunction_826,
    pump_v3_basicCold_t_eqFunction_827,
    pump_v3_basicCold_t_eqFunction_828,
    pump_v3_basicCold_t_eqFunction_829,
    pump_v3_basicCold_t_eqFunction_830,
    pump_v3_basicCold_t_eqFunction_831,
    pump_v3_basicCold_t_eqFunction_832,
    pump_v3_basicCold_t_eqFunction_833,
    pump_v3_basicCold_t_eqFunction_834,
    pump_v3_basicCold_t_eqFunction_837,
    pump_v3_basicCold_t_eqFunction_840,
    pump_v3_basicCold_t_eqFunction_841,
    pump_v3_basicCold_t_eqFunction_842,
    pump_v3_basicCold_t_eqFunction_843,
    pump_v3_basicCold_t_eqFunction_844,
    pump_v3_basicCold_t_eqFunction_845,
    pump_v3_basicCold_t_eqFunction_846,
    pump_v3_basicCold_t_eqFunction_847,
    pump_v3_basicCold_t_eqFunction_848,
    pump_v3_basicCold_t_eqFunction_849,
    pump_v3_basicCold_t_eqFunction_850,
    pump_v3_basicCold_t_eqFunction_851,
    pump_v3_basicCold_t_eqFunction_852,
    pump_v3_basicCold_t_eqFunction_855,
    pump_v3_basicCold_t_eqFunction_858,
    pump_v3_basicCold_t_eqFunction_859,
    pump_v3_basicCold_t_eqFunction_860,
    pump_v3_basicCold_t_eqFunction_861,
    pump_v3_basicCold_t_eqFunction_862,
    pump_v3_basicCold_t_eqFunction_863,
    pump_v3_basicCold_t_eqFunction_864,
    pump_v3_basicCold_t_eqFunction_865,
    pump_v3_basicCold_t_eqFunction_866,
    pump_v3_basicCold_t_eqFunction_867,
    pump_v3_basicCold_t_eqFunction_868,
    pump_v3_basicCold_t_eqFunction_869,
    pump_v3_basicCold_t_eqFunction_870,
    pump_v3_basicCold_t_eqFunction_871,
    pump_v3_basicCold_t_eqFunction_872,
    pump_v3_basicCold_t_eqFunction_873,
    pump_v3_basicCold_t_eqFunction_874,
    pump_v3_basicCold_t_eqFunction_876,
    pump_v3_basicCold_t_eqFunction_877,
    pump_v3_basicCold_t_eqFunction_880,
    pump_v3_basicCold_t_eqFunction_881,
    pump_v3_basicCold_t_eqFunction_882,
    pump_v3_basicCold_t_eqFunction_883,
    pump_v3_basicCold_t_eqFunction_884,
    pump_v3_basicCold_t_eqFunction_885,
    pump_v3_basicCold_t_eqFunction_886,
    pump_v3_basicCold_t_eqFunction_889,
    pump_v3_basicCold_t_eqFunction_890,
    pump_v3_basicCold_t_eqFunction_893,
    pump_v3_basicCold_t_eqFunction_894,
    pump_v3_basicCold_t_eqFunction_895,
    pump_v3_basicCold_t_eqFunction_896,
    pump_v3_basicCold_t_eqFunction_902,
    pump_v3_basicCold_t_eqFunction_903,
    pump_v3_basicCold_t_eqFunction_904,
    pump_v3_basicCold_t_eqFunction_905,
    pump_v3_basicCold_t_eqFunction_906,
    pump_v3_basicCold_t_eqFunction_907,
    pump_v3_basicCold_t_eqFunction_908,
    pump_v3_basicCold_t_eqFunction_912,
    pump_v3_basicCold_t_eqFunction_913,
    pump_v3_basicCold_t_eqFunction_914,
    pump_v3_basicCold_t_eqFunction_919,
    pump_v3_basicCold_t_eqFunction_920,
    pump_v3_basicCold_t_eqFunction_921,
    pump_v3_basicCold_t_eqFunction_922,
    pump_v3_basicCold_t_eqFunction_924,
    pump_v3_basicCold_t_eqFunction_925,
    pump_v3_basicCold_t_eqFunction_935,
    pump_v3_basicCold_t_eqFunction_936,
    pump_v3_basicCold_t_eqFunction_937,
    pump_v3_basicCold_t_eqFunction_938,
    pump_v3_basicCold_t_eqFunction_939,
    pump_v3_basicCold_t_eqFunction_940,
    pump_v3_basicCold_t_eqFunction_941,
    pump_v3_basicCold_t_eqFunction_942,
    pump_v3_basicCold_t_eqFunction_943,
    pump_v3_basicCold_t_eqFunction_944,
    pump_v3_basicCold_t_eqFunction_945,
    pump_v3_basicCold_t_eqFunction_946,
    pump_v3_basicCold_t_eqFunction_952,
    pump_v3_basicCold_t_eqFunction_953,
    pump_v3_basicCold_t_eqFunction_954,
    pump_v3_basicCold_t_eqFunction_955,
    pump_v3_basicCold_t_eqFunction_956,
    pump_v3_basicCold_t_eqFunction_957,
    pump_v3_basicCold_t_eqFunction_958,
    pump_v3_basicCold_t_eqFunction_959,
    pump_v3_basicCold_t_eqFunction_960,
    pump_v3_basicCold_t_eqFunction_961,
    pump_v3_basicCold_t_eqFunction_965,
    pump_v3_basicCold_t_eqFunction_966,
    pump_v3_basicCold_t_eqFunction_976,
    pump_v3_basicCold_t_eqFunction_977,
    pump_v3_basicCold_t_eqFunction_978,
    pump_v3_basicCold_t_eqFunction_979,
    pump_v3_basicCold_t_eqFunction_980,
    pump_v3_basicCold_t_eqFunction_981,
    pump_v3_basicCold_t_eqFunction_982,
    pump_v3_basicCold_t_eqFunction_983,
    pump_v3_basicCold_t_eqFunction_984,
    pump_v3_basicCold_t_eqFunction_985,
    pump_v3_basicCold_t_eqFunction_986,
    pump_v3_basicCold_t_eqFunction_987,
    pump_v3_basicCold_t_eqFunction_988,
    pump_v3_basicCold_t_eqFunction_989,
    pump_v3_basicCold_t_eqFunction_990,
    pump_v3_basicCold_t_eqFunction_991,
    pump_v3_basicCold_t_eqFunction_992,
    pump_v3_basicCold_t_eqFunction_995,
    pump_v3_basicCold_t_eqFunction_996,
    pump_v3_basicCold_t_eqFunction_997,
    pump_v3_basicCold_t_eqFunction_1003,
    pump_v3_basicCold_t_eqFunction_1004,
    pump_v3_basicCold_t_eqFunction_1005,
    pump_v3_basicCold_t_eqFunction_1006,
    pump_v3_basicCold_t_eqFunction_1008,
    pump_v3_basicCold_t_eqFunction_1009,
    pump_v3_basicCold_t_eqFunction_1010,
    pump_v3_basicCold_t_eqFunction_1011,
    pump_v3_basicCold_t_eqFunction_1012,
    pump_v3_basicCold_t_eqFunction_1013,
    pump_v3_basicCold_t_eqFunction_1014,
    pump_v3_basicCold_t_eqFunction_1015,
    pump_v3_basicCold_t_eqFunction_1016,
    pump_v3_basicCold_t_eqFunction_1017,
    pump_v3_basicCold_t_eqFunction_1021,
    pump_v3_basicCold_t_eqFunction_1022,
    pump_v3_basicCold_t_eqFunction_1023,
    pump_v3_basicCold_t_eqFunction_1024,
    pump_v3_basicCold_t_eqFunction_1025,
    pump_v3_basicCold_t_eqFunction_1026,
    pump_v3_basicCold_t_eqFunction_1027,
    pump_v3_basicCold_t_eqFunction_1028,
    pump_v3_basicCold_t_eqFunction_1029,
    pump_v3_basicCold_t_eqFunction_1030,
    pump_v3_basicCold_t_eqFunction_1040,
    pump_v3_basicCold_t_eqFunction_1041,
    pump_v3_basicCold_t_eqFunction_1042,
    pump_v3_basicCold_t_eqFunction_1043,
    pump_v3_basicCold_t_eqFunction_1044,
    pump_v3_basicCold_t_eqFunction_1045,
    pump_v3_basicCold_t_eqFunction_1046,
    pump_v3_basicCold_t_eqFunction_1047,
    pump_v3_basicCold_t_eqFunction_1048,
    pump_v3_basicCold_t_eqFunction_1050,
    pump_v3_basicCold_t_eqFunction_1051,
    pump_v3_basicCold_t_eqFunction_1052,
    pump_v3_basicCold_t_eqFunction_1053,
    pump_v3_basicCold_t_eqFunction_1054,
    pump_v3_basicCold_t_eqFunction_1055,
    pump_v3_basicCold_t_eqFunction_1065,
    pump_v3_basicCold_t_eqFunction_1066,
    pump_v3_basicCold_t_eqFunction_1067,
    pump_v3_basicCold_t_eqFunction_1068,
    pump_v3_basicCold_t_eqFunction_1069,
    pump_v3_basicCold_t_eqFunction_1070,
    pump_v3_basicCold_t_eqFunction_1071,
    pump_v3_basicCold_t_eqFunction_1072,
    pump_v3_basicCold_t_eqFunction_1073,
    pump_v3_basicCold_t_eqFunction_1074,
    pump_v3_basicCold_t_eqFunction_1075,
    pump_v3_basicCold_t_eqFunction_1076,
    pump_v3_basicCold_t_eqFunction_1077,
    pump_v3_basicCold_t_eqFunction_1078,
    pump_v3_basicCold_t_eqFunction_1079,
    pump_v3_basicCold_t_eqFunction_1080
  };
  
  for (int id = 0; id < 185; id++) {
    eqFunctions[id](data, threadData);
  }
}

int pump_v3_basicCold_t_functionODE(DATA *data, threadData_t *threadData)
{
#if !defined(OMC_MINIMAL_RUNTIME)
  if (measure_time_flag) rt_tick(SIM_TIMER_FUNCTION_ODE);
#endif

  
  data->simulationInfo->callStatistics.functionODE++;
  
  pump_v3_basicCold_t_functionLocalKnownVars(data, threadData);
  functionODE_system0(data, threadData);

#if !defined(OMC_MINIMAL_RUNTIME)
  if (measure_time_flag) rt_accumulate(SIM_TIMER_FUNCTION_ODE);
#endif

  return 0;
}

/* forward the main in the simulation runtime */
extern int _main_SimulationRuntime(int argc, char **argv, DATA *data, threadData_t *threadData);
extern int _main_OptimizationRuntime(int argc, char **argv, DATA *data, threadData_t *threadData);

#include "pump_v3_basicCold_t_12jac.h"
#include "pump_v3_basicCold_t_13opt.h"

struct OpenModelicaGeneratedFunctionCallbacks pump_v3_basicCold_t_callback = {
  NULL,    /* performSimulation */
  NULL,    /* performQSSSimulation */
  NULL,    /* updateContinuousSystem */
  pump_v3_basicCold_t_callExternalObjectDestructors,    /* callExternalObjectDestructors */
  pump_v3_basicCold_t_initialNonLinearSystem,    /* initialNonLinearSystem */
  NULL,    /* initialLinearSystem */
  NULL,    /* initialMixedSystem */
  #if !defined(OMC_NO_STATESELECTION)
  pump_v3_basicCold_t_initializeStateSets,
  #else
  NULL,
  #endif    /* initializeStateSets */
  pump_v3_basicCold_t_initializeDAEmodeData,
  pump_v3_basicCold_t_functionODE,
  pump_v3_basicCold_t_functionAlgebraics,
  pump_v3_basicCold_t_functionDAE,
  pump_v3_basicCold_t_functionLocalKnownVars,
  pump_v3_basicCold_t_input_function,
  pump_v3_basicCold_t_input_function_init,
  pump_v3_basicCold_t_input_function_updateStartValues,
  pump_v3_basicCold_t_data_function,
  pump_v3_basicCold_t_output_function,
  pump_v3_basicCold_t_setc_function,
  pump_v3_basicCold_t_setb_function,
  pump_v3_basicCold_t_function_storeDelayed,
  pump_v3_basicCold_t_function_storeSpatialDistribution,
  pump_v3_basicCold_t_function_initSpatialDistribution,
  pump_v3_basicCold_t_updateBoundVariableAttributes,
  pump_v3_basicCold_t_functionInitialEquations,
  GLOBAL_EQUIDISTANT_HOMOTOPY,
  pump_v3_basicCold_t_functionInitialEquations_lambda0,
  pump_v3_basicCold_t_functionRemovedInitialEquations,
  pump_v3_basicCold_t_updateBoundParameters,
  pump_v3_basicCold_t_checkForAsserts,
  pump_v3_basicCold_t_function_ZeroCrossingsEquations,
  pump_v3_basicCold_t_function_ZeroCrossings,
  pump_v3_basicCold_t_function_updateRelations,
  pump_v3_basicCold_t_zeroCrossingDescription,
  pump_v3_basicCold_t_relationDescription,
  pump_v3_basicCold_t_function_initSample,
  pump_v3_basicCold_t_INDEX_JAC_A,
  pump_v3_basicCold_t_INDEX_JAC_B,
  pump_v3_basicCold_t_INDEX_JAC_C,
  pump_v3_basicCold_t_INDEX_JAC_D,
  pump_v3_basicCold_t_INDEX_JAC_F,
  pump_v3_basicCold_t_INDEX_JAC_H,
  pump_v3_basicCold_t_initialAnalyticJacobianA,
  pump_v3_basicCold_t_initialAnalyticJacobianB,
  pump_v3_basicCold_t_initialAnalyticJacobianC,
  pump_v3_basicCold_t_initialAnalyticJacobianD,
  pump_v3_basicCold_t_initialAnalyticJacobianF,
  pump_v3_basicCold_t_initialAnalyticJacobianH,
  pump_v3_basicCold_t_functionJacA_column,
  pump_v3_basicCold_t_functionJacB_column,
  pump_v3_basicCold_t_functionJacC_column,
  pump_v3_basicCold_t_functionJacD_column,
  pump_v3_basicCold_t_functionJacF_column,
  pump_v3_basicCold_t_functionJacH_column,
  pump_v3_basicCold_t_linear_model_frame,
  pump_v3_basicCold_t_linear_model_datarecovery_frame,
  pump_v3_basicCold_t_mayer,
  pump_v3_basicCold_t_lagrange,
  pump_v3_basicCold_t_getInputVarIndicesInOptimization,
  pump_v3_basicCold_t_pickUpBoundsForInputsInOptimization,
  pump_v3_basicCold_t_setInputData,
  pump_v3_basicCold_t_getTimeGrid,
  pump_v3_basicCold_t_symbolicInlineSystem,
  pump_v3_basicCold_t_function_initSynchronous,
  pump_v3_basicCold_t_function_updateSynchronous,
  pump_v3_basicCold_t_function_equationsSynchronous,
  pump_v3_basicCold_t_inputNames,
  pump_v3_basicCold_t_dataReconciliationInputNames,
  pump_v3_basicCold_t_dataReconciliationUnmeasuredVariables,
  pump_v3_basicCold_t_read_simulation_info,
  pump_v3_basicCold_t_read_input_fmu,
  NULL,
  NULL,
  -1,
  NULL,
  NULL,
  -1

};

#define _OMC_LIT_RESOURCE_0_name_data "Complex"
#define _OMC_LIT_RESOURCE_0_dir_data "/root/.openmodelica/libraries/Complex 4.0.0+maint.om"
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_0_name,7,_OMC_LIT_RESOURCE_0_name_data);
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_0_dir,52,_OMC_LIT_RESOURCE_0_dir_data);

#define _OMC_LIT_RESOURCE_1_name_data "IDEAS"
#define _OMC_LIT_RESOURCE_1_dir_data "/work/IDEAS-master/IDEAS"
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_1_name,5,_OMC_LIT_RESOURCE_1_name_data);
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_1_dir,24,_OMC_LIT_RESOURCE_1_dir_data);

#define _OMC_LIT_RESOURCE_2_name_data "Modelica"
#define _OMC_LIT_RESOURCE_2_dir_data "/root/.openmodelica/libraries/Modelica 4.0.0+maint.om"
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_2_name,8,_OMC_LIT_RESOURCE_2_name_data);
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_2_dir,53,_OMC_LIT_RESOURCE_2_dir_data);

#define _OMC_LIT_RESOURCE_3_name_data "ModelicaServices"
#define _OMC_LIT_RESOURCE_3_dir_data "/root/.openmodelica/libraries/ModelicaServices 4.0.0+maint.om"
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_3_name,16,_OMC_LIT_RESOURCE_3_name_data);
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_3_dir,61,_OMC_LIT_RESOURCE_3_dir_data);

#define _OMC_LIT_RESOURCE_4_name_data "pump_v3_basicCold_t"
#define _OMC_LIT_RESOURCE_4_dir_data "/work"
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_4_name,19,_OMC_LIT_RESOURCE_4_name_data);
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_4_dir,5,_OMC_LIT_RESOURCE_4_dir_data);

static const MMC_DEFSTRUCTLIT(_OMC_LIT_RESOURCES,10,MMC_ARRAY_TAG) {MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_0_name), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_0_dir), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_1_name), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_1_dir), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_2_name), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_2_dir), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_3_name), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_3_dir), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_4_name), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_4_dir)}};
void pump_v3_basicCold_t_setupDataStruc(DATA *data, threadData_t *threadData)
{
  assertStreamPrint(threadData,0!=data, "Error while initialize Data");
  threadData->localRoots[LOCAL_ROOT_SIMULATION_DATA] = data;
  data->callback = &pump_v3_basicCold_t_callback;
  OpenModelica_updateUriMapping(threadData, MMC_REFSTRUCTLIT(_OMC_LIT_RESOURCES));
  data->modelData->modelName = "pump_v3_basicCold_t";
  data->modelData->modelFilePrefix = "pump_v3_basicCold_t";
  data->modelData->modelFileName = "pump_v3_basicCold_t.mo";
  data->modelData->resultFileName = NULL;
  data->modelData->modelDir = "/work";
  data->modelData->modelGUID = "{d62d79a0-ec04-4f05-b690-36e0899f9a8a}";
  data->modelData->initXMLData = NULL;
  data->modelData->modelDataXml.infoXMLData = NULL;
  GC_asprintf(&data->modelData->modelDataXml.fileName, "%s/pump_v3_basicCold_t_info.json", data->modelData->resourcesDir);
  data->modelData->runTestsuite = 0;
  data->modelData->nStatesArray = 21;
  data->modelData->nDiscreteReal = 0;
  data->modelData->nVariablesRealArray = 444;
  data->modelData->nVariablesIntegerArray = 0;
  data->modelData->nVariablesBooleanArray = 0;
  data->modelData->nVariablesStringArray = 0;
  data->modelData->nParametersRealArray = 994;
  data->modelData->nParametersIntegerArray = 122;
  data->modelData->nParametersBooleanArray = 260;
  data->modelData->nParametersStringArray = 0;
  data->modelData->nParametersReal = 994;
  data->modelData->nParametersInteger = 122;
  data->modelData->nParametersBoolean = 260;
  data->modelData->nParametersString = 0;
  data->modelData->nAliasRealArray = 572;
  data->modelData->nAliasIntegerArray = 0;
  data->modelData->nAliasBooleanArray = 0;
  data->modelData->nAliasStringArray = 0;
  data->modelData->nInputVars = 0;
  data->modelData->nOutputVars = 4;
  data->modelData->nZeroCrossings = 16;
  data->modelData->nSamples = 0;
  data->modelData->nRelations = 16;
  data->modelData->nMathEvents = 0;
  data->modelData->nExtObjs = 0;
  data->modelData->modelDataXml.modelInfoXmlLength = 0;
  data->modelData->modelDataXml.nFunctions = 193;
  data->modelData->modelDataXml.nProfileBlocks = 0;
  data->modelData->modelDataXml.nEquations = 3238;
  data->modelData->nMixedSystems = 0;
  data->modelData->nLinearSystems = 0;
  data->modelData->nNonLinearSystems = 12;
  data->modelData->nStateSets = 0;
  data->modelData->nJacobians = 6;
  data->modelData->nOptimizeConstraints = 0;
  data->modelData->nOptimizeFinalConstraints = 0;
  data->modelData->nDelayExpressions = 0;
  data->modelData->nBaseClocks = 0;
  data->modelData->nSpatialDistributions = 8;
  data->modelData->nSensitivityVars = 0;
  data->modelData->nSensitivityParamVars = 0;
  data->modelData->nSetcVars = 0;
  data->modelData->ndataReconVars = 0;
  data->modelData->nSetbVars = 0;
  data->modelData->nRelatedBoundaryConditions = 0;
  data->modelData->linearizationDumpLanguage = OMC_LINEARIZE_DUMP_LANGUAGE_MODELICA;
}

static int rml_execution_failed()
{
  fflush(NULL);
  fprintf(stderr, "Execution failed!\n");
  fflush(NULL);
  return 1;
}

