/* Non Linear Systems */
#include "pump_v3_basicCold_t_model.h"
#include "pump_v3_basicCold_t_12jac.h"
#include "simulation/jacobian_util.h"
#if defined(__cplusplus)
extern "C" {
#endif

/* inner equations */

/*
equation index: 161
type: SIMPLE_ASSIGN
plugFlowPipe2.heaLos_b.T_b_outflow = plugFlowPipe2.heatPort.T + (plugFlowPipe2.heaLos_b.T_a_inflow - plugFlowPipe2.heatPort.T) * exp((-plugFlowPipe2.timDel.tau) / plugFlowPipe2.heaLos_b.tau_char)
*/
void pump_v3_basicCold_t_eqFunction_161(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,161};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[281]] /* plugFlowPipe2.heaLos_b.T_b_outflow variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[285]] /* plugFlowPipe2.heatPort.T variable */) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[280]] /* plugFlowPipe2.heaLos_b.T_a_inflow variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[285]] /* plugFlowPipe2.heatPort.T variable */)) * (exp(DIVISION_SIM((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[292]] /* plugFlowPipe2.timDel.tau variable */)),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[427]] /* plugFlowPipe2.heaLos_b.tau_char PARAM */),"plugFlowPipe2.heaLos_b.tau_char",equationIndexes)));
  threadData->lastEquationSolved = 161;
}
/*
equation index: 162
type: SIMPLE_ASSIGN
plugFlowPipe2.heaLos_b.heatPort.Q_flow = (-IDEAS.Utilities.Math.Functions.spliceFunction((plugFlowPipe2.heaLos_b.T_a_inflow - plugFlowPipe2.heaLos_b.T_b_outflow) * plugFlowPipe2.heaLos_b.cp_default, 0.0, pump.motSpe.y, 1.14e-4)) * pump.motSpe.y
*/
void pump_v3_basicCold_t_eqFunction_162(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,162};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[283]] /* plugFlowPipe2.heaLos_b.heatPort.Q_flow variable */) = ((-omc_IDEAS_Utilities_Math_Functions_spliceFunction(threadData, ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[280]] /* plugFlowPipe2.heaLos_b.T_a_inflow variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[281]] /* plugFlowPipe2.heaLos_b.T_b_outflow variable */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[418]] /* plugFlowPipe2.heaLos_b.cp_default PARAM */)), 0.0, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[17]] /* pump.motSpe.y STATE(1) */), 1.14e-4))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[17]] /* pump.motSpe.y STATE(1) */));
  threadData->lastEquationSolved = 162;
}
/*
equation index: 163
type: SIMPLE_ASSIGN
plugFlowPipe2.heaLos_a.T_b_outflow = plugFlowPipe2.heatPort.T + (plugFlowPipe2.heaLos_a.T_a_inflow - plugFlowPipe2.heatPort.T) * exp((-plugFlowPipe2.timDel.tauRev) / plugFlowPipe2.heaLos_a.tau_char)
*/
void pump_v3_basicCold_t_eqFunction_163(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,163};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[276]] /* plugFlowPipe2.heaLos_a.T_b_outflow variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[285]] /* plugFlowPipe2.heatPort.T variable */) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[275]] /* plugFlowPipe2.heaLos_a.T_a_inflow variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[285]] /* plugFlowPipe2.heatPort.T variable */)) * (exp(DIVISION_SIM((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[293]] /* plugFlowPipe2.timDel.tauRev variable */)),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[414]] /* plugFlowPipe2.heaLos_a.tau_char PARAM */),"plugFlowPipe2.heaLos_a.tau_char",equationIndexes)));
  threadData->lastEquationSolved = 163;
}
/*
equation index: 164
type: SIMPLE_ASSIGN
plugFlowPipe2.heaLos_a.heatPort.Q_flow = IDEAS.Utilities.Math.Functions.spliceFunction((plugFlowPipe2.heaLos_a.T_a_inflow - plugFlowPipe2.heaLos_a.T_b_outflow) * plugFlowPipe2.heaLos_a.cp_default, 0.0, -pump.motSpe.y, 1.14e-4) * pump.motSpe.y
*/
void pump_v3_basicCold_t_eqFunction_164(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,164};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[278]] /* plugFlowPipe2.heaLos_a.heatPort.Q_flow variable */) = (omc_IDEAS_Utilities_Math_Functions_spliceFunction(threadData, ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[275]] /* plugFlowPipe2.heaLos_a.T_a_inflow variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[276]] /* plugFlowPipe2.heaLos_a.T_b_outflow variable */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[407]] /* plugFlowPipe2.heaLos_a.cp_default PARAM */)), 0.0, (-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[17]] /* pump.motSpe.y STATE(1) */)), 1.14e-4)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[17]] /* pump.motSpe.y STATE(1) */));
  threadData->lastEquationSolved = 164;
}
/*
equation index: 165
type: SIMPLE_ASSIGN
plugFlowPipe2.QEnv_flow = plugFlowPipe2.heaLos_b.heatPort.Q_flow + plugFlowPipe2.heaLos_a.heatPort.Q_flow
*/
void pump_v3_basicCold_t_eqFunction_165(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,165};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[270]] /* plugFlowPipe2.QEnv_flow variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[283]] /* plugFlowPipe2.heaLos_b.heatPort.Q_flow variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[278]] /* plugFlowPipe2.heaLos_a.heatPort.Q_flow variable */);
  threadData->lastEquationSolved = 165;
}
/*
equation index: 166
type: SIMPLE_ASSIGN
convectiveResistor_amb1.dT = (-R_air_amb1.k) * plugFlowPipe2.QEnv_flow
*/
void pump_v3_basicCold_t_eqFunction_166(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,166};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[151]] /* convectiveResistor_amb1.dT variable */) = ((-(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[8]] /* R_air_amb1.k PARAM */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[270]] /* plugFlowPipe2.QEnv_flow variable */));
  threadData->lastEquationSolved = 166;
}

void residualFunc168(RESIDUAL_USERDATA* userData, const double* xloc, double* res, const int* iflag)
{
  DATA *data = userData->data;
  threadData_t *threadData = userData->threadData;
  const int equationIndexes[2] = {1,168};
  int i,j;
  /* iteration variables */
  for (i=0; i<1; i++) {
    if (isinf(xloc[i]) || isnan(xloc[i])) {
      errorStreamPrint(OMC_LOG_NLS, 0, "residualFunc168: Iteration variable `%s` is inf or nan.",
        modelInfoGetEquation(&data->modelData->modelDataXml, 168).vars[i]);
      for (j=0; j<1; j++) {
        res[j] = NAN;
      }
      throwStreamPrintWithEquationIndexes(threadData, omc_dummyFileInfo, equationIndexes, "residualFunc168 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
      return;
    }
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[285]] /* plugFlowPipe2.heatPort.T variable */) = xloc[0];
  /* backup outputs */
  /* pre body */
  /* local constraints */
  pump_v3_basicCold_t_eqFunction_161(data, threadData);
  /* local constraints */
  pump_v3_basicCold_t_eqFunction_162(data, threadData);
  /* local constraints */
  pump_v3_basicCold_t_eqFunction_163(data, threadData);
  /* local constraints */
  pump_v3_basicCold_t_eqFunction_164(data, threadData);
  /* local constraints */
  pump_v3_basicCold_t_eqFunction_165(data, threadData);
  /* local constraints */
  pump_v3_basicCold_t_eqFunction_166(data, threadData);
  /* body */
  res[0] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[285]] /* plugFlowPipe2.heatPort.T variable */) + (-(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[43]] /* Tamb1.T PARAM */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[151]] /* convectiveResistor_amb1.dT variable */);
  threadData->lastEquationSolved = 167;
  /* restore known outputs */
  threadData->lastEquationSolved = 168;
}

OMC_DISABLE_OPT
void initializeSparsePatternNLS168(NONLINEAR_SYSTEM_DATA* inSysData)
{
  int i=0;
  const int colPtrIndex[1+1] = {0,1};
  const int rowIndex[1] = {0};
  /* sparsity pattern available */
  inSysData->isPatternAvailable = TRUE;
  inSysData->sparsePattern = allocSparsePattern(1, 1, 1);
  
  /* write lead index of compressed sparse column */
  memcpy(inSysData->sparsePattern->leadindex, colPtrIndex, (1+1)*sizeof(unsigned int));
  
  for(i=2;i<1+1;++i)
    inSysData->sparsePattern->leadindex[i] += inSysData->sparsePattern->leadindex[i-1];
  
  /* call sparse index */
  memcpy(inSysData->sparsePattern->index, rowIndex, 1*sizeof(unsigned int));
  
  /* write color array */
  /* color 1 with 1 columns */
  const int indices_1[1] = {0};
  for(i=0; i<1; i++)
    inSysData->sparsePattern->colorCols[indices_1[i]] = 1;
}

void freeSparsePatternNLS168(NONLINEAR_SYSTEM_DATA* inSysData)
{
  if (inSysData->isPatternAvailable) {
    freeSparsePattern(inSysData->sparsePattern);
    free(inSysData->sparsePattern);
    inSysData->sparsePattern = NULL;
    inSysData->isPatternAvailable = FALSE;
  }
}
void initializeNonlinearPatternNLS168(NONLINEAR_SYSTEM_DATA* inSysData)
{
  /* no nonlinear pattern available */
}

OMC_DISABLE_OPT
void initializeStaticDataNLS168(DATA* data, threadData_t *threadData, NONLINEAR_SYSTEM_DATA *sysData, modelica_boolean initSparsePattern, modelica_boolean initNonlinearPattern)
{
  int i=0;
  /* static nls data for plugFlowPipe2.heatPort.T */
  sysData->nominal[i] = data->modelData->realVarsData[285].attribute /* plugFlowPipe2.heatPort.T */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[285].attribute /* plugFlowPipe2.heatPort.T */.min;
  sysData->max[i++]   = data->modelData->realVarsData[285].attribute /* plugFlowPipe2.heatPort.T */.max;
  /* initial sparse pattern */
  if (initSparsePattern) {
    initializeSparsePatternNLS168(sysData);
  }
  if (initNonlinearPattern) {
    initializeNonlinearPatternNLS168(sysData);
  }
}

OMC_DISABLE_OPT
void freeStaticDataNLS168(DATA* data, threadData_t *threadData, NONLINEAR_SYSTEM_DATA *sysData)
{
  freeSparsePatternNLS168(sysData);
}

OMC_DISABLE_OPT
void getIterationVarsNLS168(DATA* data, double *array)
{
  array[0] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[285]] /* plugFlowPipe2.heatPort.T variable */);
}


/* inner equations */

/*
equation index: 202
type: SIMPLE_ASSIGN
plugFlowPipe_heat.heaLos_b.T_b_outflow = plugFlowPipe_heat.heatPort.T + (plugFlowPipe_heat.heaLos_b.T_a_inflow - plugFlowPipe_heat.heatPort.T) * exp((-plugFlowPipe_heat.timDel.tau) / plugFlowPipe_heat.heaLos_b.tau_char)
*/
void pump_v3_basicCold_t_eqFunction_202(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,202};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[340]] /* plugFlowPipe_heat.heaLos_b.T_b_outflow variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[344]] /* plugFlowPipe_heat.heatPort.T variable */) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[339]] /* plugFlowPipe_heat.heaLos_b.T_a_inflow variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[344]] /* plugFlowPipe_heat.heatPort.T variable */)) * (exp(DIVISION_SIM((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[350]] /* plugFlowPipe_heat.timDel.tau variable */)),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[579]] /* plugFlowPipe_heat.heaLos_b.tau_char PARAM */),"plugFlowPipe_heat.heaLos_b.tau_char",equationIndexes)));
  threadData->lastEquationSolved = 202;
}
/*
equation index: 203
type: SIMPLE_ASSIGN
plugFlowPipe_heat.heaLos_b.heatPort.Q_flow = (-IDEAS.Utilities.Math.Functions.spliceFunction((plugFlowPipe_heat.heaLos_b.T_a_inflow - plugFlowPipe_heat.heaLos_b.T_b_outflow) * plugFlowPipe_heat.heaLos_b.cp_default, 0.0, pump.motSpe.y, 1.14e-4)) * pump.motSpe.y
*/
void pump_v3_basicCold_t_eqFunction_203(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,203};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[342]] /* plugFlowPipe_heat.heaLos_b.heatPort.Q_flow variable */) = ((-omc_IDEAS_Utilities_Math_Functions_spliceFunction(threadData, ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[339]] /* plugFlowPipe_heat.heaLos_b.T_a_inflow variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[340]] /* plugFlowPipe_heat.heaLos_b.T_b_outflow variable */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[572]] /* plugFlowPipe_heat.heaLos_b.cp_default PARAM */)), 0.0, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[17]] /* pump.motSpe.y STATE(1) */), 1.14e-4))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[17]] /* pump.motSpe.y STATE(1) */));
  threadData->lastEquationSolved = 203;
}
/*
equation index: 204
type: SIMPLE_ASSIGN
plugFlowPipe_heat.heaLos_a.T_b_outflow = plugFlowPipe_heat.heatPort.T + (plugFlowPipe_heat.heaLos_a.T_a_inflow - plugFlowPipe_heat.heatPort.T) * exp((-plugFlowPipe_heat.timDel.tauRev) / plugFlowPipe_heat.heaLos_a.tau_char)
*/
void pump_v3_basicCold_t_eqFunction_204(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,204};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[335]] /* plugFlowPipe_heat.heaLos_a.T_b_outflow variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[344]] /* plugFlowPipe_heat.heatPort.T variable */) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[334]] /* plugFlowPipe_heat.heaLos_a.T_a_inflow variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[344]] /* plugFlowPipe_heat.heatPort.T variable */)) * (exp(DIVISION_SIM((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[351]] /* plugFlowPipe_heat.timDel.tauRev variable */)),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[568]] /* plugFlowPipe_heat.heaLos_a.tau_char PARAM */),"plugFlowPipe_heat.heaLos_a.tau_char",equationIndexes)));
  threadData->lastEquationSolved = 204;
}
/*
equation index: 205
type: SIMPLE_ASSIGN
plugFlowPipe_heat.heaLos_a.heatPort.Q_flow = IDEAS.Utilities.Math.Functions.spliceFunction((plugFlowPipe_heat.heaLos_a.T_a_inflow - plugFlowPipe_heat.heaLos_a.T_b_outflow) * plugFlowPipe_heat.heaLos_a.cp_default, 0.0, -pump.motSpe.y, 1.14e-4) * pump.motSpe.y
*/
void pump_v3_basicCold_t_eqFunction_205(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,205};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[337]] /* plugFlowPipe_heat.heaLos_a.heatPort.Q_flow variable */) = (omc_IDEAS_Utilities_Math_Functions_spliceFunction(threadData, ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[334]] /* plugFlowPipe_heat.heaLos_a.T_a_inflow variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[335]] /* plugFlowPipe_heat.heaLos_a.T_b_outflow variable */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[561]] /* plugFlowPipe_heat.heaLos_a.cp_default PARAM */)), 0.0, (-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[17]] /* pump.motSpe.y STATE(1) */)), 1.14e-4)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[17]] /* pump.motSpe.y STATE(1) */));
  threadData->lastEquationSolved = 205;
}
/*
equation index: 206
type: SIMPLE_ASSIGN
Q_heat_pipe_W = plugFlowPipe_heat.heaLos_b.heatPort.Q_flow + plugFlowPipe_heat.heaLos_a.heatPort.Q_flow
*/
void pump_v3_basicCold_t_eqFunction_206(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,206};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[137]] /* Q_heat_pipe_W variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[342]] /* plugFlowPipe_heat.heaLos_b.heatPort.Q_flow variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[337]] /* plugFlowPipe_heat.heaLos_a.heatPort.Q_flow variable */);
  threadData->lastEquationSolved = 206;
}
/*
equation index: 207
type: SIMPLE_ASSIGN
convectiveResistor_reserv.dT = (-R_water_reserv.k) * Q_heat_pipe_W
*/
void pump_v3_basicCold_t_eqFunction_207(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,207};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[153]] /* convectiveResistor_reserv.dT variable */) = ((-(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[14]] /* R_water_reserv.k PARAM */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[137]] /* Q_heat_pipe_W variable */));
  threadData->lastEquationSolved = 207;
}

void residualFunc209(RESIDUAL_USERDATA* userData, const double* xloc, double* res, const int* iflag)
{
  DATA *data = userData->data;
  threadData_t *threadData = userData->threadData;
  const int equationIndexes[2] = {1,209};
  int i,j;
  /* iteration variables */
  for (i=0; i<1; i++) {
    if (isinf(xloc[i]) || isnan(xloc[i])) {
      errorStreamPrint(OMC_LOG_NLS, 0, "residualFunc209: Iteration variable `%s` is inf or nan.",
        modelInfoGetEquation(&data->modelData->modelDataXml, 209).vars[i]);
      for (j=0; j<1; j++) {
        res[j] = NAN;
      }
      throwStreamPrintWithEquationIndexes(threadData, omc_dummyFileInfo, equationIndexes, "residualFunc209 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
      return;
    }
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[344]] /* plugFlowPipe_heat.heatPort.T variable */) = xloc[0];
  /* backup outputs */
  /* pre body */
  /* local constraints */
  pump_v3_basicCold_t_eqFunction_202(data, threadData);
  /* local constraints */
  pump_v3_basicCold_t_eqFunction_203(data, threadData);
  /* local constraints */
  pump_v3_basicCold_t_eqFunction_204(data, threadData);
  /* local constraints */
  pump_v3_basicCold_t_eqFunction_205(data, threadData);
  /* local constraints */
  pump_v3_basicCold_t_eqFunction_206(data, threadData);
  /* local constraints */
  pump_v3_basicCold_t_eqFunction_207(data, threadData);
  /* body */
  res[0] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[344]] /* plugFlowPipe_heat.heatPort.T variable */) + (-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[0]] /* Water_Reserv.T STATE(1,Water_Reserv.der_T) */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[153]] /* convectiveResistor_reserv.dT variable */);
  threadData->lastEquationSolved = 208;
  /* restore known outputs */
  threadData->lastEquationSolved = 209;
}

OMC_DISABLE_OPT
void initializeSparsePatternNLS209(NONLINEAR_SYSTEM_DATA* inSysData)
{
  int i=0;
  const int colPtrIndex[1+1] = {0,1};
  const int rowIndex[1] = {0};
  /* sparsity pattern available */
  inSysData->isPatternAvailable = TRUE;
  inSysData->sparsePattern = allocSparsePattern(1, 1, 1);
  
  /* write lead index of compressed sparse column */
  memcpy(inSysData->sparsePattern->leadindex, colPtrIndex, (1+1)*sizeof(unsigned int));
  
  for(i=2;i<1+1;++i)
    inSysData->sparsePattern->leadindex[i] += inSysData->sparsePattern->leadindex[i-1];
  
  /* call sparse index */
  memcpy(inSysData->sparsePattern->index, rowIndex, 1*sizeof(unsigned int));
  
  /* write color array */
  /* color 1 with 1 columns */
  const int indices_1[1] = {0};
  for(i=0; i<1; i++)
    inSysData->sparsePattern->colorCols[indices_1[i]] = 1;
}

void freeSparsePatternNLS209(NONLINEAR_SYSTEM_DATA* inSysData)
{
  if (inSysData->isPatternAvailable) {
    freeSparsePattern(inSysData->sparsePattern);
    free(inSysData->sparsePattern);
    inSysData->sparsePattern = NULL;
    inSysData->isPatternAvailable = FALSE;
  }
}
void initializeNonlinearPatternNLS209(NONLINEAR_SYSTEM_DATA* inSysData)
{
  /* no nonlinear pattern available */
}

OMC_DISABLE_OPT
void initializeStaticDataNLS209(DATA* data, threadData_t *threadData, NONLINEAR_SYSTEM_DATA *sysData, modelica_boolean initSparsePattern, modelica_boolean initNonlinearPattern)
{
  int i=0;
  /* static nls data for plugFlowPipe_heat.heatPort.T */
  sysData->nominal[i] = data->modelData->realVarsData[344].attribute /* plugFlowPipe_heat.heatPort.T */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[344].attribute /* plugFlowPipe_heat.heatPort.T */.min;
  sysData->max[i++]   = data->modelData->realVarsData[344].attribute /* plugFlowPipe_heat.heatPort.T */.max;
  /* initial sparse pattern */
  if (initSparsePattern) {
    initializeSparsePatternNLS209(sysData);
  }
  if (initNonlinearPattern) {
    initializeNonlinearPatternNLS209(sysData);
  }
}

OMC_DISABLE_OPT
void freeStaticDataNLS209(DATA* data, threadData_t *threadData, NONLINEAR_SYSTEM_DATA *sysData)
{
  freeSparsePatternNLS209(sysData);
}

OMC_DISABLE_OPT
void getIterationVarsNLS209(DATA* data, double *array)
{
  array[0] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[344]] /* plugFlowPipe_heat.heatPort.T variable */);
}


/* inner equations */

/*
equation index: 248
type: SIMPLE_ASSIGN
plugFlowPipe1.heaLos_b.T_b_outflow = plugFlowPipe1.heatPort.T + (plugFlowPipe1.heaLos_b.T_a_inflow - plugFlowPipe1.heatPort.T) * exp((-plugFlowPipe1.timDel.tau) / plugFlowPipe1.heaLos_b.tau_char)
*/
void pump_v3_basicCold_t_eqFunction_248(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,248};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[224]] /* plugFlowPipe1.heaLos_b.T_b_outflow variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[228]] /* plugFlowPipe1.heatPort.T variable */) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[223]] /* plugFlowPipe1.heaLos_b.T_a_inflow variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[228]] /* plugFlowPipe1.heatPort.T variable */)) * (exp(DIVISION_SIM((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[233]] /* plugFlowPipe1.timDel.tau variable */)),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[280]] /* plugFlowPipe1.heaLos_b.tau_char PARAM */),"plugFlowPipe1.heaLos_b.tau_char",equationIndexes)));
  threadData->lastEquationSolved = 248;
}
/*
equation index: 249
type: SIMPLE_ASSIGN
plugFlowPipe1.heaLos_b.heatPort.Q_flow = (-IDEAS.Utilities.Math.Functions.spliceFunction((plugFlowPipe1.heaLos_b.T_a_inflow - plugFlowPipe1.heaLos_b.T_b_outflow) * plugFlowPipe1.heaLos_b.cp_default, 0.0, pump.motSpe.y, 1.14e-4)) * pump.motSpe.y
*/
void pump_v3_basicCold_t_eqFunction_249(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,249};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[226]] /* plugFlowPipe1.heaLos_b.heatPort.Q_flow variable */) = ((-omc_IDEAS_Utilities_Math_Functions_spliceFunction(threadData, ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[223]] /* plugFlowPipe1.heaLos_b.T_a_inflow variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[224]] /* plugFlowPipe1.heaLos_b.T_b_outflow variable */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[273]] /* plugFlowPipe1.heaLos_b.cp_default PARAM */)), 0.0, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[17]] /* pump.motSpe.y STATE(1) */), 1.14e-4))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[17]] /* pump.motSpe.y STATE(1) */));
  threadData->lastEquationSolved = 249;
}
/*
equation index: 250
type: SIMPLE_ASSIGN
plugFlowPipe1.heaLos_a.T_b_outflow = plugFlowPipe1.heatPort.T + (plugFlowPipe1.heaLos_a.T_a_inflow - plugFlowPipe1.heatPort.T) * exp((-plugFlowPipe1.timDel.tauRev) / plugFlowPipe1.heaLos_a.tau_char)
*/
void pump_v3_basicCold_t_eqFunction_250(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,250};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[219]] /* plugFlowPipe1.heaLos_a.T_b_outflow variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[228]] /* plugFlowPipe1.heatPort.T variable */) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[218]] /* plugFlowPipe1.heaLos_a.T_a_inflow variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[228]] /* plugFlowPipe1.heatPort.T variable */)) * (exp(DIVISION_SIM((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[234]] /* plugFlowPipe1.timDel.tauRev variable */)),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[269]] /* plugFlowPipe1.heaLos_a.tau_char PARAM */),"plugFlowPipe1.heaLos_a.tau_char",equationIndexes)));
  threadData->lastEquationSolved = 250;
}
/*
equation index: 251
type: SIMPLE_ASSIGN
plugFlowPipe1.heaLos_a.heatPort.Q_flow = IDEAS.Utilities.Math.Functions.spliceFunction((plugFlowPipe1.heaLos_a.T_a_inflow - plugFlowPipe1.heaLos_a.T_b_outflow) * plugFlowPipe1.heaLos_a.cp_default, 0.0, -pump.motSpe.y, 1.14e-4) * pump.motSpe.y
*/
void pump_v3_basicCold_t_eqFunction_251(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,251};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[221]] /* plugFlowPipe1.heaLos_a.heatPort.Q_flow variable */) = (omc_IDEAS_Utilities_Math_Functions_spliceFunction(threadData, ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[218]] /* plugFlowPipe1.heaLos_a.T_a_inflow variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[219]] /* plugFlowPipe1.heaLos_a.T_b_outflow variable */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[262]] /* plugFlowPipe1.heaLos_a.cp_default PARAM */)), 0.0, (-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[17]] /* pump.motSpe.y STATE(1) */)), 1.14e-4)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[17]] /* pump.motSpe.y STATE(1) */));
  threadData->lastEquationSolved = 251;
}
/*
equation index: 252
type: SIMPLE_ASSIGN
plugFlowPipe1.QEnv_flow = plugFlowPipe1.heaLos_b.heatPort.Q_flow + plugFlowPipe1.heaLos_a.heatPort.Q_flow
*/
void pump_v3_basicCold_t_eqFunction_252(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,252};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[213]] /* plugFlowPipe1.QEnv_flow variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[226]] /* plugFlowPipe1.heaLos_b.heatPort.Q_flow variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[221]] /* plugFlowPipe1.heaLos_a.heatPort.Q_flow variable */);
  threadData->lastEquationSolved = 252;
}
/*
equation index: 253
type: SIMPLE_ASSIGN
convectiveResistor_amb.dT = (-R_air_amb.k) * plugFlowPipe1.QEnv_flow
*/
void pump_v3_basicCold_t_eqFunction_253(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,253};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[150]] /* convectiveResistor_amb.dT variable */) = ((-(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[6]] /* R_air_amb.k PARAM */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[213]] /* plugFlowPipe1.QEnv_flow variable */));
  threadData->lastEquationSolved = 253;
}

void residualFunc255(RESIDUAL_USERDATA* userData, const double* xloc, double* res, const int* iflag)
{
  DATA *data = userData->data;
  threadData_t *threadData = userData->threadData;
  const int equationIndexes[2] = {1,255};
  int i,j;
  /* iteration variables */
  for (i=0; i<1; i++) {
    if (isinf(xloc[i]) || isnan(xloc[i])) {
      errorStreamPrint(OMC_LOG_NLS, 0, "residualFunc255: Iteration variable `%s` is inf or nan.",
        modelInfoGetEquation(&data->modelData->modelDataXml, 255).vars[i]);
      for (j=0; j<1; j++) {
        res[j] = NAN;
      }
      throwStreamPrintWithEquationIndexes(threadData, omc_dummyFileInfo, equationIndexes, "residualFunc255 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
      return;
    }
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[228]] /* plugFlowPipe1.heatPort.T variable */) = xloc[0];
  /* backup outputs */
  /* pre body */
  /* local constraints */
  pump_v3_basicCold_t_eqFunction_248(data, threadData);
  /* local constraints */
  pump_v3_basicCold_t_eqFunction_249(data, threadData);
  /* local constraints */
  pump_v3_basicCold_t_eqFunction_250(data, threadData);
  /* local constraints */
  pump_v3_basicCold_t_eqFunction_251(data, threadData);
  /* local constraints */
  pump_v3_basicCold_t_eqFunction_252(data, threadData);
  /* local constraints */
  pump_v3_basicCold_t_eqFunction_253(data, threadData);
  /* body */
  res[0] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[228]] /* plugFlowPipe1.heatPort.T variable */) + (-(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[41]] /* Tamb.T PARAM */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[150]] /* convectiveResistor_amb.dT variable */);
  threadData->lastEquationSolved = 254;
  /* restore known outputs */
  threadData->lastEquationSolved = 255;
}

OMC_DISABLE_OPT
void initializeSparsePatternNLS255(NONLINEAR_SYSTEM_DATA* inSysData)
{
  int i=0;
  const int colPtrIndex[1+1] = {0,1};
  const int rowIndex[1] = {0};
  /* sparsity pattern available */
  inSysData->isPatternAvailable = TRUE;
  inSysData->sparsePattern = allocSparsePattern(1, 1, 1);
  
  /* write lead index of compressed sparse column */
  memcpy(inSysData->sparsePattern->leadindex, colPtrIndex, (1+1)*sizeof(unsigned int));
  
  for(i=2;i<1+1;++i)
    inSysData->sparsePattern->leadindex[i] += inSysData->sparsePattern->leadindex[i-1];
  
  /* call sparse index */
  memcpy(inSysData->sparsePattern->index, rowIndex, 1*sizeof(unsigned int));
  
  /* write color array */
  /* color 1 with 1 columns */
  const int indices_1[1] = {0};
  for(i=0; i<1; i++)
    inSysData->sparsePattern->colorCols[indices_1[i]] = 1;
}

void freeSparsePatternNLS255(NONLINEAR_SYSTEM_DATA* inSysData)
{
  if (inSysData->isPatternAvailable) {
    freeSparsePattern(inSysData->sparsePattern);
    free(inSysData->sparsePattern);
    inSysData->sparsePattern = NULL;
    inSysData->isPatternAvailable = FALSE;
  }
}
void initializeNonlinearPatternNLS255(NONLINEAR_SYSTEM_DATA* inSysData)
{
  /* no nonlinear pattern available */
}

OMC_DISABLE_OPT
void initializeStaticDataNLS255(DATA* data, threadData_t *threadData, NONLINEAR_SYSTEM_DATA *sysData, modelica_boolean initSparsePattern, modelica_boolean initNonlinearPattern)
{
  int i=0;
  /* static nls data for plugFlowPipe1.heatPort.T */
  sysData->nominal[i] = data->modelData->realVarsData[228].attribute /* plugFlowPipe1.heatPort.T */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[228].attribute /* plugFlowPipe1.heatPort.T */.min;
  sysData->max[i++]   = data->modelData->realVarsData[228].attribute /* plugFlowPipe1.heatPort.T */.max;
  /* initial sparse pattern */
  if (initSparsePattern) {
    initializeSparsePatternNLS255(sysData);
  }
  if (initNonlinearPattern) {
    initializeNonlinearPatternNLS255(sysData);
  }
}

OMC_DISABLE_OPT
void freeStaticDataNLS255(DATA* data, threadData_t *threadData, NONLINEAR_SYSTEM_DATA *sysData)
{
  freeSparsePatternNLS255(sysData);
}

OMC_DISABLE_OPT
void getIterationVarsNLS255(DATA* data, double *array)
{
  array[0] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[228]] /* plugFlowPipe1.heatPort.T variable */);
}


/* inner equations */

/*
equation index: 290
type: SIMPLE_ASSIGN
plugFlowPipe.heaLos_b.T_b_outflow = plugFlowPipe.heatPort.T + (plugFlowPipe.heaLos_b.T_a_inflow - plugFlowPipe.heatPort.T) * exp((-plugFlowPipe.timDel.tau) / plugFlowPipe.heaLos_b.tau_char)
*/
void pump_v3_basicCold_t_eqFunction_290(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,290};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[166]] /* plugFlowPipe.heaLos_b.T_b_outflow variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[170]] /* plugFlowPipe.heatPort.T variable */) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[165]] /* plugFlowPipe.heaLos_b.T_a_inflow variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[170]] /* plugFlowPipe.heatPort.T variable */)) * (exp(DIVISION_SIM((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[175]] /* plugFlowPipe.timDel.tau variable */)),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[126]] /* plugFlowPipe.heaLos_b.tau_char PARAM */),"plugFlowPipe.heaLos_b.tau_char",equationIndexes)));
  threadData->lastEquationSolved = 290;
}
/*
equation index: 291
type: SIMPLE_ASSIGN
plugFlowPipe.heaLos_b.heatPort.Q_flow = (-IDEAS.Utilities.Math.Functions.spliceFunction((plugFlowPipe.heaLos_b.T_a_inflow - plugFlowPipe.heaLos_b.T_b_outflow) * plugFlowPipe.heaLos_b.cp_default, 0.0, pump.motSpe.y, 1.14e-4)) * pump.motSpe.y
*/
void pump_v3_basicCold_t_eqFunction_291(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,291};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[168]] /* plugFlowPipe.heaLos_b.heatPort.Q_flow variable */) = ((-omc_IDEAS_Utilities_Math_Functions_spliceFunction(threadData, ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[165]] /* plugFlowPipe.heaLos_b.T_a_inflow variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[166]] /* plugFlowPipe.heaLos_b.T_b_outflow variable */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[119]] /* plugFlowPipe.heaLos_b.cp_default PARAM */)), 0.0, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[17]] /* pump.motSpe.y STATE(1) */), 1.14e-4))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[17]] /* pump.motSpe.y STATE(1) */));
  threadData->lastEquationSolved = 291;
}
/*
equation index: 292
type: SIMPLE_ASSIGN
plugFlowPipe.heaLos_a.T_b_outflow = plugFlowPipe.heatPort.T + (plugFlowPipe.heaLos_a.T_a_inflow - plugFlowPipe.heatPort.T) * exp((-plugFlowPipe.timDel.tauRev) / plugFlowPipe.heaLos_a.tau_char)
*/
void pump_v3_basicCold_t_eqFunction_292(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,292};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[161]] /* plugFlowPipe.heaLos_a.T_b_outflow variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[170]] /* plugFlowPipe.heatPort.T variable */) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[160]] /* plugFlowPipe.heaLos_a.T_a_inflow variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[170]] /* plugFlowPipe.heatPort.T variable */)) * (exp(DIVISION_SIM((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[176]] /* plugFlowPipe.timDel.tauRev variable */)),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[115]] /* plugFlowPipe.heaLos_a.tau_char PARAM */),"plugFlowPipe.heaLos_a.tau_char",equationIndexes)));
  threadData->lastEquationSolved = 292;
}
/*
equation index: 293
type: SIMPLE_ASSIGN
plugFlowPipe.heaLos_a.heatPort.Q_flow = IDEAS.Utilities.Math.Functions.spliceFunction((plugFlowPipe.heaLos_a.T_a_inflow - plugFlowPipe.heaLos_a.T_b_outflow) * plugFlowPipe.heaLos_a.cp_default, 0.0, -pump.motSpe.y, 1.14e-4) * pump.motSpe.y
*/
void pump_v3_basicCold_t_eqFunction_293(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,293};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[163]] /* plugFlowPipe.heaLos_a.heatPort.Q_flow variable */) = (omc_IDEAS_Utilities_Math_Functions_spliceFunction(threadData, ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[160]] /* plugFlowPipe.heaLos_a.T_a_inflow variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[161]] /* plugFlowPipe.heaLos_a.T_b_outflow variable */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[106]] /* plugFlowPipe.heaLos_a.cp_default PARAM */)), 0.0, (-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[17]] /* pump.motSpe.y STATE(1) */)), 1.14e-4)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[17]] /* pump.motSpe.y STATE(1) */));
  threadData->lastEquationSolved = 293;
}
/*
equation index: 294
type: SIMPLE_ASSIGN
Q_cold_W = plugFlowPipe.heaLos_b.heatPort.Q_flow + plugFlowPipe.heaLos_a.heatPort.Q_flow
*/
void pump_v3_basicCold_t_eqFunction_294(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,294};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[136]] /* Q_cold_W variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[168]] /* plugFlowPipe.heaLos_b.heatPort.Q_flow variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[163]] /* plugFlowPipe.heaLos_a.heatPort.Q_flow variable */);
  threadData->lastEquationSolved = 294;
}
/*
equation index: 295
type: SIMPLE_ASSIGN
convectiveResistor_cold.dT = (-R_air_cold.k) * Q_cold_W
*/
void pump_v3_basicCold_t_eqFunction_295(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,295};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[152]] /* convectiveResistor_cold.dT variable */) = ((-(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[10]] /* R_air_cold.k PARAM */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[136]] /* Q_cold_W variable */));
  threadData->lastEquationSolved = 295;
}

void residualFunc297(RESIDUAL_USERDATA* userData, const double* xloc, double* res, const int* iflag)
{
  DATA *data = userData->data;
  threadData_t *threadData = userData->threadData;
  const int equationIndexes[2] = {1,297};
  int i,j;
  /* iteration variables */
  for (i=0; i<1; i++) {
    if (isinf(xloc[i]) || isnan(xloc[i])) {
      errorStreamPrint(OMC_LOG_NLS, 0, "residualFunc297: Iteration variable `%s` is inf or nan.",
        modelInfoGetEquation(&data->modelData->modelDataXml, 297).vars[i]);
      for (j=0; j<1; j++) {
        res[j] = NAN;
      }
      throwStreamPrintWithEquationIndexes(threadData, omc_dummyFileInfo, equationIndexes, "residualFunc297 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
      return;
    }
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[170]] /* plugFlowPipe.heatPort.T variable */) = xloc[0];
  /* backup outputs */
  /* pre body */
  /* local constraints */
  pump_v3_basicCold_t_eqFunction_290(data, threadData);
  /* local constraints */
  pump_v3_basicCold_t_eqFunction_291(data, threadData);
  /* local constraints */
  pump_v3_basicCold_t_eqFunction_292(data, threadData);
  /* local constraints */
  pump_v3_basicCold_t_eqFunction_293(data, threadData);
  /* local constraints */
  pump_v3_basicCold_t_eqFunction_294(data, threadData);
  /* local constraints */
  pump_v3_basicCold_t_eqFunction_295(data, threadData);
  /* body */
  res[0] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[170]] /* plugFlowPipe.heatPort.T variable */) + (-(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[52]] /* coldBath.T PARAM */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[152]] /* convectiveResistor_cold.dT variable */);
  threadData->lastEquationSolved = 296;
  /* restore known outputs */
  threadData->lastEquationSolved = 297;
}

OMC_DISABLE_OPT
void initializeSparsePatternNLS297(NONLINEAR_SYSTEM_DATA* inSysData)
{
  int i=0;
  const int colPtrIndex[1+1] = {0,1};
  const int rowIndex[1] = {0};
  /* sparsity pattern available */
  inSysData->isPatternAvailable = TRUE;
  inSysData->sparsePattern = allocSparsePattern(1, 1, 1);
  
  /* write lead index of compressed sparse column */
  memcpy(inSysData->sparsePattern->leadindex, colPtrIndex, (1+1)*sizeof(unsigned int));
  
  for(i=2;i<1+1;++i)
    inSysData->sparsePattern->leadindex[i] += inSysData->sparsePattern->leadindex[i-1];
  
  /* call sparse index */
  memcpy(inSysData->sparsePattern->index, rowIndex, 1*sizeof(unsigned int));
  
  /* write color array */
  /* color 1 with 1 columns */
  const int indices_1[1] = {0};
  for(i=0; i<1; i++)
    inSysData->sparsePattern->colorCols[indices_1[i]] = 1;
}

void freeSparsePatternNLS297(NONLINEAR_SYSTEM_DATA* inSysData)
{
  if (inSysData->isPatternAvailable) {
    freeSparsePattern(inSysData->sparsePattern);
    free(inSysData->sparsePattern);
    inSysData->sparsePattern = NULL;
    inSysData->isPatternAvailable = FALSE;
  }
}
void initializeNonlinearPatternNLS297(NONLINEAR_SYSTEM_DATA* inSysData)
{
  /* no nonlinear pattern available */
}

OMC_DISABLE_OPT
void initializeStaticDataNLS297(DATA* data, threadData_t *threadData, NONLINEAR_SYSTEM_DATA *sysData, modelica_boolean initSparsePattern, modelica_boolean initNonlinearPattern)
{
  int i=0;
  /* static nls data for plugFlowPipe.heatPort.T */
  sysData->nominal[i] = data->modelData->realVarsData[170].attribute /* plugFlowPipe.heatPort.T */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[170].attribute /* plugFlowPipe.heatPort.T */.min;
  sysData->max[i++]   = data->modelData->realVarsData[170].attribute /* plugFlowPipe.heatPort.T */.max;
  /* initial sparse pattern */
  if (initSparsePattern) {
    initializeSparsePatternNLS297(sysData);
  }
  if (initNonlinearPattern) {
    initializeNonlinearPatternNLS297(sysData);
  }
}

OMC_DISABLE_OPT
void freeStaticDataNLS297(DATA* data, threadData_t *threadData, NONLINEAR_SYSTEM_DATA *sysData)
{
  freeSparsePatternNLS297(sysData);
}

OMC_DISABLE_OPT
void getIterationVarsNLS297(DATA* data, double *array)
{
  array[0] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[170]] /* plugFlowPipe.heatPort.T variable */);
}


/* inner equations */

/*
equation index: 565
type: SIMPLE_ASSIGN
plugFlowPipe2.heaLos_b.T_b_outflow = plugFlowPipe2.heatPort.T + (plugFlowPipe2.heaLos_b.T_a_inflow - plugFlowPipe2.heatPort.T) * exp((-plugFlowPipe2.timDel.tau) / plugFlowPipe2.heaLos_b.tau_char)
*/
void pump_v3_basicCold_t_eqFunction_565(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,565};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[281]] /* plugFlowPipe2.heaLos_b.T_b_outflow variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[285]] /* plugFlowPipe2.heatPort.T variable */) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[280]] /* plugFlowPipe2.heaLos_b.T_a_inflow variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[285]] /* plugFlowPipe2.heatPort.T variable */)) * (exp(DIVISION_SIM((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[292]] /* plugFlowPipe2.timDel.tau variable */)),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[427]] /* plugFlowPipe2.heaLos_b.tau_char PARAM */),"plugFlowPipe2.heaLos_b.tau_char",equationIndexes)));
  threadData->lastEquationSolved = 565;
}
/*
equation index: 566
type: SIMPLE_ASSIGN
plugFlowPipe2.heaLos_b.heatPort.Q_flow = (-IDEAS.Utilities.Math.Functions.spliceFunction((plugFlowPipe2.heaLos_b.T_a_inflow - plugFlowPipe2.heaLos_b.T_b_outflow) * plugFlowPipe2.heaLos_b.cp_default, 0.0, pump.motSpe.y, 1.14e-4)) * pump.motSpe.y
*/
void pump_v3_basicCold_t_eqFunction_566(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,566};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[283]] /* plugFlowPipe2.heaLos_b.heatPort.Q_flow variable */) = ((-omc_IDEAS_Utilities_Math_Functions_spliceFunction(threadData, ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[280]] /* plugFlowPipe2.heaLos_b.T_a_inflow variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[281]] /* plugFlowPipe2.heaLos_b.T_b_outflow variable */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[418]] /* plugFlowPipe2.heaLos_b.cp_default PARAM */)), 0.0, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[17]] /* pump.motSpe.y STATE(1) */), 1.14e-4))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[17]] /* pump.motSpe.y STATE(1) */));
  threadData->lastEquationSolved = 566;
}
/*
equation index: 567
type: SIMPLE_ASSIGN
plugFlowPipe2.heaLos_a.T_b_outflow = plugFlowPipe2.heatPort.T + (plugFlowPipe2.heaLos_a.T_a_inflow - plugFlowPipe2.heatPort.T) * exp((-plugFlowPipe2.timDel.tauRev) / plugFlowPipe2.heaLos_a.tau_char)
*/
void pump_v3_basicCold_t_eqFunction_567(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,567};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[276]] /* plugFlowPipe2.heaLos_a.T_b_outflow variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[285]] /* plugFlowPipe2.heatPort.T variable */) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[275]] /* plugFlowPipe2.heaLos_a.T_a_inflow variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[285]] /* plugFlowPipe2.heatPort.T variable */)) * (exp(DIVISION_SIM((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[293]] /* plugFlowPipe2.timDel.tauRev variable */)),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[414]] /* plugFlowPipe2.heaLos_a.tau_char PARAM */),"plugFlowPipe2.heaLos_a.tau_char",equationIndexes)));
  threadData->lastEquationSolved = 567;
}
/*
equation index: 568
type: SIMPLE_ASSIGN
plugFlowPipe2.heaLos_a.heatPort.Q_flow = IDEAS.Utilities.Math.Functions.spliceFunction((plugFlowPipe2.heaLos_a.T_a_inflow - plugFlowPipe2.heaLos_a.T_b_outflow) * plugFlowPipe2.heaLos_a.cp_default, 0.0, -pump.motSpe.y, 1.14e-4) * pump.motSpe.y
*/
void pump_v3_basicCold_t_eqFunction_568(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,568};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[278]] /* plugFlowPipe2.heaLos_a.heatPort.Q_flow variable */) = (omc_IDEAS_Utilities_Math_Functions_spliceFunction(threadData, ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[275]] /* plugFlowPipe2.heaLos_a.T_a_inflow variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[276]] /* plugFlowPipe2.heaLos_a.T_b_outflow variable */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[407]] /* plugFlowPipe2.heaLos_a.cp_default PARAM */)), 0.0, (-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[17]] /* pump.motSpe.y STATE(1) */)), 1.14e-4)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[17]] /* pump.motSpe.y STATE(1) */));
  threadData->lastEquationSolved = 568;
}
/*
equation index: 569
type: SIMPLE_ASSIGN
plugFlowPipe2.QEnv_flow = plugFlowPipe2.heaLos_b.heatPort.Q_flow + plugFlowPipe2.heaLos_a.heatPort.Q_flow
*/
void pump_v3_basicCold_t_eqFunction_569(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,569};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[270]] /* plugFlowPipe2.QEnv_flow variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[283]] /* plugFlowPipe2.heaLos_b.heatPort.Q_flow variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[278]] /* plugFlowPipe2.heaLos_a.heatPort.Q_flow variable */);
  threadData->lastEquationSolved = 569;
}
/*
equation index: 570
type: SIMPLE_ASSIGN
convectiveResistor_amb1.dT = (-R_air_amb1.k) * plugFlowPipe2.QEnv_flow
*/
void pump_v3_basicCold_t_eqFunction_570(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,570};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[151]] /* convectiveResistor_amb1.dT variable */) = ((-(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[8]] /* R_air_amb1.k PARAM */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[270]] /* plugFlowPipe2.QEnv_flow variable */));
  threadData->lastEquationSolved = 570;
}

void residualFunc572(RESIDUAL_USERDATA* userData, const double* xloc, double* res, const int* iflag)
{
  DATA *data = userData->data;
  threadData_t *threadData = userData->threadData;
  const int equationIndexes[2] = {1,572};
  int i,j;
  /* iteration variables */
  for (i=0; i<1; i++) {
    if (isinf(xloc[i]) || isnan(xloc[i])) {
      errorStreamPrint(OMC_LOG_NLS, 0, "residualFunc572: Iteration variable `%s` is inf or nan.",
        modelInfoGetEquation(&data->modelData->modelDataXml, 572).vars[i]);
      for (j=0; j<1; j++) {
        res[j] = NAN;
      }
      throwStreamPrintWithEquationIndexes(threadData, omc_dummyFileInfo, equationIndexes, "residualFunc572 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
      return;
    }
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[285]] /* plugFlowPipe2.heatPort.T variable */) = xloc[0];
  /* backup outputs */
  /* pre body */
  /* local constraints */
  pump_v3_basicCold_t_eqFunction_565(data, threadData);
  /* local constraints */
  pump_v3_basicCold_t_eqFunction_566(data, threadData);
  /* local constraints */
  pump_v3_basicCold_t_eqFunction_567(data, threadData);
  /* local constraints */
  pump_v3_basicCold_t_eqFunction_568(data, threadData);
  /* local constraints */
  pump_v3_basicCold_t_eqFunction_569(data, threadData);
  /* local constraints */
  pump_v3_basicCold_t_eqFunction_570(data, threadData);
  /* body */
  res[0] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[285]] /* plugFlowPipe2.heatPort.T variable */) + (-(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[43]] /* Tamb1.T PARAM */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[151]] /* convectiveResistor_amb1.dT variable */);
  threadData->lastEquationSolved = 571;
  /* restore known outputs */
  threadData->lastEquationSolved = 572;
}

OMC_DISABLE_OPT
void initializeSparsePatternNLS572(NONLINEAR_SYSTEM_DATA* inSysData)
{
  int i=0;
  const int colPtrIndex[1+1] = {0,1};
  const int rowIndex[1] = {0};
  /* sparsity pattern available */
  inSysData->isPatternAvailable = TRUE;
  inSysData->sparsePattern = allocSparsePattern(1, 1, 1);
  
  /* write lead index of compressed sparse column */
  memcpy(inSysData->sparsePattern->leadindex, colPtrIndex, (1+1)*sizeof(unsigned int));
  
  for(i=2;i<1+1;++i)
    inSysData->sparsePattern->leadindex[i] += inSysData->sparsePattern->leadindex[i-1];
  
  /* call sparse index */
  memcpy(inSysData->sparsePattern->index, rowIndex, 1*sizeof(unsigned int));
  
  /* write color array */
  /* color 1 with 1 columns */
  const int indices_1[1] = {0};
  for(i=0; i<1; i++)
    inSysData->sparsePattern->colorCols[indices_1[i]] = 1;
}

void freeSparsePatternNLS572(NONLINEAR_SYSTEM_DATA* inSysData)
{
  if (inSysData->isPatternAvailable) {
    freeSparsePattern(inSysData->sparsePattern);
    free(inSysData->sparsePattern);
    inSysData->sparsePattern = NULL;
    inSysData->isPatternAvailable = FALSE;
  }
}
void initializeNonlinearPatternNLS572(NONLINEAR_SYSTEM_DATA* inSysData)
{
  /* no nonlinear pattern available */
}

OMC_DISABLE_OPT
void initializeStaticDataNLS572(DATA* data, threadData_t *threadData, NONLINEAR_SYSTEM_DATA *sysData, modelica_boolean initSparsePattern, modelica_boolean initNonlinearPattern)
{
  int i=0;
  /* static nls data for plugFlowPipe2.heatPort.T */
  sysData->nominal[i] = data->modelData->realVarsData[285].attribute /* plugFlowPipe2.heatPort.T */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[285].attribute /* plugFlowPipe2.heatPort.T */.min;
  sysData->max[i++]   = data->modelData->realVarsData[285].attribute /* plugFlowPipe2.heatPort.T */.max;
  /* initial sparse pattern */
  if (initSparsePattern) {
    initializeSparsePatternNLS572(sysData);
  }
  if (initNonlinearPattern) {
    initializeNonlinearPatternNLS572(sysData);
  }
}

OMC_DISABLE_OPT
void freeStaticDataNLS572(DATA* data, threadData_t *threadData, NONLINEAR_SYSTEM_DATA *sysData)
{
  freeSparsePatternNLS572(sysData);
}

OMC_DISABLE_OPT
void getIterationVarsNLS572(DATA* data, double *array)
{
  array[0] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[285]] /* plugFlowPipe2.heatPort.T variable */);
}


/* inner equations */

/*
equation index: 606
type: SIMPLE_ASSIGN
plugFlowPipe_heat.heaLos_b.T_b_outflow = plugFlowPipe_heat.heatPort.T + (plugFlowPipe_heat.heaLos_b.T_a_inflow - plugFlowPipe_heat.heatPort.T) * exp((-plugFlowPipe_heat.timDel.tau) / plugFlowPipe_heat.heaLos_b.tau_char)
*/
void pump_v3_basicCold_t_eqFunction_606(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,606};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[340]] /* plugFlowPipe_heat.heaLos_b.T_b_outflow variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[344]] /* plugFlowPipe_heat.heatPort.T variable */) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[339]] /* plugFlowPipe_heat.heaLos_b.T_a_inflow variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[344]] /* plugFlowPipe_heat.heatPort.T variable */)) * (exp(DIVISION_SIM((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[350]] /* plugFlowPipe_heat.timDel.tau variable */)),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[579]] /* plugFlowPipe_heat.heaLos_b.tau_char PARAM */),"plugFlowPipe_heat.heaLos_b.tau_char",equationIndexes)));
  threadData->lastEquationSolved = 606;
}
/*
equation index: 607
type: SIMPLE_ASSIGN
plugFlowPipe_heat.heaLos_b.heatPort.Q_flow = (-IDEAS.Utilities.Math.Functions.spliceFunction((plugFlowPipe_heat.heaLos_b.T_a_inflow - plugFlowPipe_heat.heaLos_b.T_b_outflow) * plugFlowPipe_heat.heaLos_b.cp_default, 0.0, pump.motSpe.y, 1.14e-4)) * pump.motSpe.y
*/
void pump_v3_basicCold_t_eqFunction_607(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,607};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[342]] /* plugFlowPipe_heat.heaLos_b.heatPort.Q_flow variable */) = ((-omc_IDEAS_Utilities_Math_Functions_spliceFunction(threadData, ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[339]] /* plugFlowPipe_heat.heaLos_b.T_a_inflow variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[340]] /* plugFlowPipe_heat.heaLos_b.T_b_outflow variable */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[572]] /* plugFlowPipe_heat.heaLos_b.cp_default PARAM */)), 0.0, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[17]] /* pump.motSpe.y STATE(1) */), 1.14e-4))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[17]] /* pump.motSpe.y STATE(1) */));
  threadData->lastEquationSolved = 607;
}
/*
equation index: 608
type: SIMPLE_ASSIGN
plugFlowPipe_heat.heaLos_a.T_b_outflow = plugFlowPipe_heat.heatPort.T + (plugFlowPipe_heat.heaLos_a.T_a_inflow - plugFlowPipe_heat.heatPort.T) * exp((-plugFlowPipe_heat.timDel.tauRev) / plugFlowPipe_heat.heaLos_a.tau_char)
*/
void pump_v3_basicCold_t_eqFunction_608(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,608};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[335]] /* plugFlowPipe_heat.heaLos_a.T_b_outflow variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[344]] /* plugFlowPipe_heat.heatPort.T variable */) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[334]] /* plugFlowPipe_heat.heaLos_a.T_a_inflow variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[344]] /* plugFlowPipe_heat.heatPort.T variable */)) * (exp(DIVISION_SIM((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[351]] /* plugFlowPipe_heat.timDel.tauRev variable */)),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[568]] /* plugFlowPipe_heat.heaLos_a.tau_char PARAM */),"plugFlowPipe_heat.heaLos_a.tau_char",equationIndexes)));
  threadData->lastEquationSolved = 608;
}
/*
equation index: 609
type: SIMPLE_ASSIGN
plugFlowPipe_heat.heaLos_a.heatPort.Q_flow = IDEAS.Utilities.Math.Functions.spliceFunction((plugFlowPipe_heat.heaLos_a.T_a_inflow - plugFlowPipe_heat.heaLos_a.T_b_outflow) * plugFlowPipe_heat.heaLos_a.cp_default, 0.0, -pump.motSpe.y, 1.14e-4) * pump.motSpe.y
*/
void pump_v3_basicCold_t_eqFunction_609(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,609};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[337]] /* plugFlowPipe_heat.heaLos_a.heatPort.Q_flow variable */) = (omc_IDEAS_Utilities_Math_Functions_spliceFunction(threadData, ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[334]] /* plugFlowPipe_heat.heaLos_a.T_a_inflow variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[335]] /* plugFlowPipe_heat.heaLos_a.T_b_outflow variable */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[561]] /* plugFlowPipe_heat.heaLos_a.cp_default PARAM */)), 0.0, (-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[17]] /* pump.motSpe.y STATE(1) */)), 1.14e-4)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[17]] /* pump.motSpe.y STATE(1) */));
  threadData->lastEquationSolved = 609;
}
/*
equation index: 610
type: SIMPLE_ASSIGN
Q_heat_pipe_W = plugFlowPipe_heat.heaLos_b.heatPort.Q_flow + plugFlowPipe_heat.heaLos_a.heatPort.Q_flow
*/
void pump_v3_basicCold_t_eqFunction_610(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,610};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[137]] /* Q_heat_pipe_W variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[342]] /* plugFlowPipe_heat.heaLos_b.heatPort.Q_flow variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[337]] /* plugFlowPipe_heat.heaLos_a.heatPort.Q_flow variable */);
  threadData->lastEquationSolved = 610;
}
/*
equation index: 611
type: SIMPLE_ASSIGN
convectiveResistor_reserv.dT = (-R_water_reserv.k) * Q_heat_pipe_W
*/
void pump_v3_basicCold_t_eqFunction_611(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,611};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[153]] /* convectiveResistor_reserv.dT variable */) = ((-(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[14]] /* R_water_reserv.k PARAM */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[137]] /* Q_heat_pipe_W variable */));
  threadData->lastEquationSolved = 611;
}

void residualFunc613(RESIDUAL_USERDATA* userData, const double* xloc, double* res, const int* iflag)
{
  DATA *data = userData->data;
  threadData_t *threadData = userData->threadData;
  const int equationIndexes[2] = {1,613};
  int i,j;
  /* iteration variables */
  for (i=0; i<1; i++) {
    if (isinf(xloc[i]) || isnan(xloc[i])) {
      errorStreamPrint(OMC_LOG_NLS, 0, "residualFunc613: Iteration variable `%s` is inf or nan.",
        modelInfoGetEquation(&data->modelData->modelDataXml, 613).vars[i]);
      for (j=0; j<1; j++) {
        res[j] = NAN;
      }
      throwStreamPrintWithEquationIndexes(threadData, omc_dummyFileInfo, equationIndexes, "residualFunc613 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
      return;
    }
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[344]] /* plugFlowPipe_heat.heatPort.T variable */) = xloc[0];
  /* backup outputs */
  /* pre body */
  /* local constraints */
  pump_v3_basicCold_t_eqFunction_606(data, threadData);
  /* local constraints */
  pump_v3_basicCold_t_eqFunction_607(data, threadData);
  /* local constraints */
  pump_v3_basicCold_t_eqFunction_608(data, threadData);
  /* local constraints */
  pump_v3_basicCold_t_eqFunction_609(data, threadData);
  /* local constraints */
  pump_v3_basicCold_t_eqFunction_610(data, threadData);
  /* local constraints */
  pump_v3_basicCold_t_eqFunction_611(data, threadData);
  /* body */
  res[0] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[344]] /* plugFlowPipe_heat.heatPort.T variable */) + (-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[0]] /* Water_Reserv.T STATE(1,Water_Reserv.der_T) */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[153]] /* convectiveResistor_reserv.dT variable */);
  threadData->lastEquationSolved = 612;
  /* restore known outputs */
  threadData->lastEquationSolved = 613;
}

OMC_DISABLE_OPT
void initializeSparsePatternNLS613(NONLINEAR_SYSTEM_DATA* inSysData)
{
  int i=0;
  const int colPtrIndex[1+1] = {0,1};
  const int rowIndex[1] = {0};
  /* sparsity pattern available */
  inSysData->isPatternAvailable = TRUE;
  inSysData->sparsePattern = allocSparsePattern(1, 1, 1);
  
  /* write lead index of compressed sparse column */
  memcpy(inSysData->sparsePattern->leadindex, colPtrIndex, (1+1)*sizeof(unsigned int));
  
  for(i=2;i<1+1;++i)
    inSysData->sparsePattern->leadindex[i] += inSysData->sparsePattern->leadindex[i-1];
  
  /* call sparse index */
  memcpy(inSysData->sparsePattern->index, rowIndex, 1*sizeof(unsigned int));
  
  /* write color array */
  /* color 1 with 1 columns */
  const int indices_1[1] = {0};
  for(i=0; i<1; i++)
    inSysData->sparsePattern->colorCols[indices_1[i]] = 1;
}

void freeSparsePatternNLS613(NONLINEAR_SYSTEM_DATA* inSysData)
{
  if (inSysData->isPatternAvailable) {
    freeSparsePattern(inSysData->sparsePattern);
    free(inSysData->sparsePattern);
    inSysData->sparsePattern = NULL;
    inSysData->isPatternAvailable = FALSE;
  }
}
void initializeNonlinearPatternNLS613(NONLINEAR_SYSTEM_DATA* inSysData)
{
  /* no nonlinear pattern available */
}

OMC_DISABLE_OPT
void initializeStaticDataNLS613(DATA* data, threadData_t *threadData, NONLINEAR_SYSTEM_DATA *sysData, modelica_boolean initSparsePattern, modelica_boolean initNonlinearPattern)
{
  int i=0;
  /* static nls data for plugFlowPipe_heat.heatPort.T */
  sysData->nominal[i] = data->modelData->realVarsData[344].attribute /* plugFlowPipe_heat.heatPort.T */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[344].attribute /* plugFlowPipe_heat.heatPort.T */.min;
  sysData->max[i++]   = data->modelData->realVarsData[344].attribute /* plugFlowPipe_heat.heatPort.T */.max;
  /* initial sparse pattern */
  if (initSparsePattern) {
    initializeSparsePatternNLS613(sysData);
  }
  if (initNonlinearPattern) {
    initializeNonlinearPatternNLS613(sysData);
  }
}

OMC_DISABLE_OPT
void freeStaticDataNLS613(DATA* data, threadData_t *threadData, NONLINEAR_SYSTEM_DATA *sysData)
{
  freeSparsePatternNLS613(sysData);
}

OMC_DISABLE_OPT
void getIterationVarsNLS613(DATA* data, double *array)
{
  array[0] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[344]] /* plugFlowPipe_heat.heatPort.T variable */);
}


/* inner equations */

/*
equation index: 652
type: SIMPLE_ASSIGN
plugFlowPipe1.heaLos_b.T_b_outflow = plugFlowPipe1.heatPort.T + (plugFlowPipe1.heaLos_b.T_a_inflow - plugFlowPipe1.heatPort.T) * exp((-plugFlowPipe1.timDel.tau) / plugFlowPipe1.heaLos_b.tau_char)
*/
void pump_v3_basicCold_t_eqFunction_652(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,652};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[224]] /* plugFlowPipe1.heaLos_b.T_b_outflow variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[228]] /* plugFlowPipe1.heatPort.T variable */) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[223]] /* plugFlowPipe1.heaLos_b.T_a_inflow variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[228]] /* plugFlowPipe1.heatPort.T variable */)) * (exp(DIVISION_SIM((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[233]] /* plugFlowPipe1.timDel.tau variable */)),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[280]] /* plugFlowPipe1.heaLos_b.tau_char PARAM */),"plugFlowPipe1.heaLos_b.tau_char",equationIndexes)));
  threadData->lastEquationSolved = 652;
}
/*
equation index: 653
type: SIMPLE_ASSIGN
plugFlowPipe1.heaLos_b.heatPort.Q_flow = (-IDEAS.Utilities.Math.Functions.spliceFunction((plugFlowPipe1.heaLos_b.T_a_inflow - plugFlowPipe1.heaLos_b.T_b_outflow) * plugFlowPipe1.heaLos_b.cp_default, 0.0, pump.motSpe.y, 1.14e-4)) * pump.motSpe.y
*/
void pump_v3_basicCold_t_eqFunction_653(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,653};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[226]] /* plugFlowPipe1.heaLos_b.heatPort.Q_flow variable */) = ((-omc_IDEAS_Utilities_Math_Functions_spliceFunction(threadData, ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[223]] /* plugFlowPipe1.heaLos_b.T_a_inflow variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[224]] /* plugFlowPipe1.heaLos_b.T_b_outflow variable */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[273]] /* plugFlowPipe1.heaLos_b.cp_default PARAM */)), 0.0, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[17]] /* pump.motSpe.y STATE(1) */), 1.14e-4))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[17]] /* pump.motSpe.y STATE(1) */));
  threadData->lastEquationSolved = 653;
}
/*
equation index: 654
type: SIMPLE_ASSIGN
plugFlowPipe1.heaLos_a.T_b_outflow = plugFlowPipe1.heatPort.T + (plugFlowPipe1.heaLos_a.T_a_inflow - plugFlowPipe1.heatPort.T) * exp((-plugFlowPipe1.timDel.tauRev) / plugFlowPipe1.heaLos_a.tau_char)
*/
void pump_v3_basicCold_t_eqFunction_654(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,654};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[219]] /* plugFlowPipe1.heaLos_a.T_b_outflow variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[228]] /* plugFlowPipe1.heatPort.T variable */) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[218]] /* plugFlowPipe1.heaLos_a.T_a_inflow variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[228]] /* plugFlowPipe1.heatPort.T variable */)) * (exp(DIVISION_SIM((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[234]] /* plugFlowPipe1.timDel.tauRev variable */)),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[269]] /* plugFlowPipe1.heaLos_a.tau_char PARAM */),"plugFlowPipe1.heaLos_a.tau_char",equationIndexes)));
  threadData->lastEquationSolved = 654;
}
/*
equation index: 655
type: SIMPLE_ASSIGN
plugFlowPipe1.heaLos_a.heatPort.Q_flow = IDEAS.Utilities.Math.Functions.spliceFunction((plugFlowPipe1.heaLos_a.T_a_inflow - plugFlowPipe1.heaLos_a.T_b_outflow) * plugFlowPipe1.heaLos_a.cp_default, 0.0, -pump.motSpe.y, 1.14e-4) * pump.motSpe.y
*/
void pump_v3_basicCold_t_eqFunction_655(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,655};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[221]] /* plugFlowPipe1.heaLos_a.heatPort.Q_flow variable */) = (omc_IDEAS_Utilities_Math_Functions_spliceFunction(threadData, ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[218]] /* plugFlowPipe1.heaLos_a.T_a_inflow variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[219]] /* plugFlowPipe1.heaLos_a.T_b_outflow variable */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[262]] /* plugFlowPipe1.heaLos_a.cp_default PARAM */)), 0.0, (-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[17]] /* pump.motSpe.y STATE(1) */)), 1.14e-4)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[17]] /* pump.motSpe.y STATE(1) */));
  threadData->lastEquationSolved = 655;
}
/*
equation index: 656
type: SIMPLE_ASSIGN
plugFlowPipe1.QEnv_flow = plugFlowPipe1.heaLos_b.heatPort.Q_flow + plugFlowPipe1.heaLos_a.heatPort.Q_flow
*/
void pump_v3_basicCold_t_eqFunction_656(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,656};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[213]] /* plugFlowPipe1.QEnv_flow variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[226]] /* plugFlowPipe1.heaLos_b.heatPort.Q_flow variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[221]] /* plugFlowPipe1.heaLos_a.heatPort.Q_flow variable */);
  threadData->lastEquationSolved = 656;
}
/*
equation index: 657
type: SIMPLE_ASSIGN
convectiveResistor_amb.dT = (-R_air_amb.k) * plugFlowPipe1.QEnv_flow
*/
void pump_v3_basicCold_t_eqFunction_657(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,657};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[150]] /* convectiveResistor_amb.dT variable */) = ((-(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[6]] /* R_air_amb.k PARAM */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[213]] /* plugFlowPipe1.QEnv_flow variable */));
  threadData->lastEquationSolved = 657;
}

void residualFunc659(RESIDUAL_USERDATA* userData, const double* xloc, double* res, const int* iflag)
{
  DATA *data = userData->data;
  threadData_t *threadData = userData->threadData;
  const int equationIndexes[2] = {1,659};
  int i,j;
  /* iteration variables */
  for (i=0; i<1; i++) {
    if (isinf(xloc[i]) || isnan(xloc[i])) {
      errorStreamPrint(OMC_LOG_NLS, 0, "residualFunc659: Iteration variable `%s` is inf or nan.",
        modelInfoGetEquation(&data->modelData->modelDataXml, 659).vars[i]);
      for (j=0; j<1; j++) {
        res[j] = NAN;
      }
      throwStreamPrintWithEquationIndexes(threadData, omc_dummyFileInfo, equationIndexes, "residualFunc659 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
      return;
    }
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[228]] /* plugFlowPipe1.heatPort.T variable */) = xloc[0];
  /* backup outputs */
  /* pre body */
  /* local constraints */
  pump_v3_basicCold_t_eqFunction_652(data, threadData);
  /* local constraints */
  pump_v3_basicCold_t_eqFunction_653(data, threadData);
  /* local constraints */
  pump_v3_basicCold_t_eqFunction_654(data, threadData);
  /* local constraints */
  pump_v3_basicCold_t_eqFunction_655(data, threadData);
  /* local constraints */
  pump_v3_basicCold_t_eqFunction_656(data, threadData);
  /* local constraints */
  pump_v3_basicCold_t_eqFunction_657(data, threadData);
  /* body */
  res[0] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[228]] /* plugFlowPipe1.heatPort.T variable */) + (-(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[41]] /* Tamb.T PARAM */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[150]] /* convectiveResistor_amb.dT variable */);
  threadData->lastEquationSolved = 658;
  /* restore known outputs */
  threadData->lastEquationSolved = 659;
}

OMC_DISABLE_OPT
void initializeSparsePatternNLS659(NONLINEAR_SYSTEM_DATA* inSysData)
{
  int i=0;
  const int colPtrIndex[1+1] = {0,1};
  const int rowIndex[1] = {0};
  /* sparsity pattern available */
  inSysData->isPatternAvailable = TRUE;
  inSysData->sparsePattern = allocSparsePattern(1, 1, 1);
  
  /* write lead index of compressed sparse column */
  memcpy(inSysData->sparsePattern->leadindex, colPtrIndex, (1+1)*sizeof(unsigned int));
  
  for(i=2;i<1+1;++i)
    inSysData->sparsePattern->leadindex[i] += inSysData->sparsePattern->leadindex[i-1];
  
  /* call sparse index */
  memcpy(inSysData->sparsePattern->index, rowIndex, 1*sizeof(unsigned int));
  
  /* write color array */
  /* color 1 with 1 columns */
  const int indices_1[1] = {0};
  for(i=0; i<1; i++)
    inSysData->sparsePattern->colorCols[indices_1[i]] = 1;
}

void freeSparsePatternNLS659(NONLINEAR_SYSTEM_DATA* inSysData)
{
  if (inSysData->isPatternAvailable) {
    freeSparsePattern(inSysData->sparsePattern);
    free(inSysData->sparsePattern);
    inSysData->sparsePattern = NULL;
    inSysData->isPatternAvailable = FALSE;
  }
}
void initializeNonlinearPatternNLS659(NONLINEAR_SYSTEM_DATA* inSysData)
{
  /* no nonlinear pattern available */
}

OMC_DISABLE_OPT
void initializeStaticDataNLS659(DATA* data, threadData_t *threadData, NONLINEAR_SYSTEM_DATA *sysData, modelica_boolean initSparsePattern, modelica_boolean initNonlinearPattern)
{
  int i=0;
  /* static nls data for plugFlowPipe1.heatPort.T */
  sysData->nominal[i] = data->modelData->realVarsData[228].attribute /* plugFlowPipe1.heatPort.T */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[228].attribute /* plugFlowPipe1.heatPort.T */.min;
  sysData->max[i++]   = data->modelData->realVarsData[228].attribute /* plugFlowPipe1.heatPort.T */.max;
  /* initial sparse pattern */
  if (initSparsePattern) {
    initializeSparsePatternNLS659(sysData);
  }
  if (initNonlinearPattern) {
    initializeNonlinearPatternNLS659(sysData);
  }
}

OMC_DISABLE_OPT
void freeStaticDataNLS659(DATA* data, threadData_t *threadData, NONLINEAR_SYSTEM_DATA *sysData)
{
  freeSparsePatternNLS659(sysData);
}

OMC_DISABLE_OPT
void getIterationVarsNLS659(DATA* data, double *array)
{
  array[0] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[228]] /* plugFlowPipe1.heatPort.T variable */);
}


/* inner equations */

/*
equation index: 694
type: SIMPLE_ASSIGN
plugFlowPipe.heaLos_b.T_b_outflow = plugFlowPipe.heatPort.T + (plugFlowPipe.heaLos_b.T_a_inflow - plugFlowPipe.heatPort.T) * exp((-plugFlowPipe.timDel.tau) / plugFlowPipe.heaLos_b.tau_char)
*/
void pump_v3_basicCold_t_eqFunction_694(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,694};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[166]] /* plugFlowPipe.heaLos_b.T_b_outflow variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[170]] /* plugFlowPipe.heatPort.T variable */) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[165]] /* plugFlowPipe.heaLos_b.T_a_inflow variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[170]] /* plugFlowPipe.heatPort.T variable */)) * (exp(DIVISION_SIM((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[175]] /* plugFlowPipe.timDel.tau variable */)),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[126]] /* plugFlowPipe.heaLos_b.tau_char PARAM */),"plugFlowPipe.heaLos_b.tau_char",equationIndexes)));
  threadData->lastEquationSolved = 694;
}
/*
equation index: 695
type: SIMPLE_ASSIGN
plugFlowPipe.heaLos_b.heatPort.Q_flow = (-IDEAS.Utilities.Math.Functions.spliceFunction((plugFlowPipe.heaLos_b.T_a_inflow - plugFlowPipe.heaLos_b.T_b_outflow) * plugFlowPipe.heaLos_b.cp_default, 0.0, pump.motSpe.y, 1.14e-4)) * pump.motSpe.y
*/
void pump_v3_basicCold_t_eqFunction_695(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,695};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[168]] /* plugFlowPipe.heaLos_b.heatPort.Q_flow variable */) = ((-omc_IDEAS_Utilities_Math_Functions_spliceFunction(threadData, ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[165]] /* plugFlowPipe.heaLos_b.T_a_inflow variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[166]] /* plugFlowPipe.heaLos_b.T_b_outflow variable */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[119]] /* plugFlowPipe.heaLos_b.cp_default PARAM */)), 0.0, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[17]] /* pump.motSpe.y STATE(1) */), 1.14e-4))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[17]] /* pump.motSpe.y STATE(1) */));
  threadData->lastEquationSolved = 695;
}
/*
equation index: 696
type: SIMPLE_ASSIGN
plugFlowPipe.heaLos_a.T_b_outflow = plugFlowPipe.heatPort.T + (plugFlowPipe.heaLos_a.T_a_inflow - plugFlowPipe.heatPort.T) * exp((-plugFlowPipe.timDel.tauRev) / plugFlowPipe.heaLos_a.tau_char)
*/
void pump_v3_basicCold_t_eqFunction_696(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,696};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[161]] /* plugFlowPipe.heaLos_a.T_b_outflow variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[170]] /* plugFlowPipe.heatPort.T variable */) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[160]] /* plugFlowPipe.heaLos_a.T_a_inflow variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[170]] /* plugFlowPipe.heatPort.T variable */)) * (exp(DIVISION_SIM((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[176]] /* plugFlowPipe.timDel.tauRev variable */)),(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[115]] /* plugFlowPipe.heaLos_a.tau_char PARAM */),"plugFlowPipe.heaLos_a.tau_char",equationIndexes)));
  threadData->lastEquationSolved = 696;
}
/*
equation index: 697
type: SIMPLE_ASSIGN
plugFlowPipe.heaLos_a.heatPort.Q_flow = IDEAS.Utilities.Math.Functions.spliceFunction((plugFlowPipe.heaLos_a.T_a_inflow - plugFlowPipe.heaLos_a.T_b_outflow) * plugFlowPipe.heaLos_a.cp_default, 0.0, -pump.motSpe.y, 1.14e-4) * pump.motSpe.y
*/
void pump_v3_basicCold_t_eqFunction_697(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,697};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[163]] /* plugFlowPipe.heaLos_a.heatPort.Q_flow variable */) = (omc_IDEAS_Utilities_Math_Functions_spliceFunction(threadData, ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[160]] /* plugFlowPipe.heaLos_a.T_a_inflow variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[161]] /* plugFlowPipe.heaLos_a.T_b_outflow variable */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[106]] /* plugFlowPipe.heaLos_a.cp_default PARAM */)), 0.0, (-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[17]] /* pump.motSpe.y STATE(1) */)), 1.14e-4)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[17]] /* pump.motSpe.y STATE(1) */));
  threadData->lastEquationSolved = 697;
}
/*
equation index: 698
type: SIMPLE_ASSIGN
Q_cold_W = plugFlowPipe.heaLos_b.heatPort.Q_flow + plugFlowPipe.heaLos_a.heatPort.Q_flow
*/
void pump_v3_basicCold_t_eqFunction_698(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,698};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[136]] /* Q_cold_W variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[168]] /* plugFlowPipe.heaLos_b.heatPort.Q_flow variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[163]] /* plugFlowPipe.heaLos_a.heatPort.Q_flow variable */);
  threadData->lastEquationSolved = 698;
}
/*
equation index: 699
type: SIMPLE_ASSIGN
convectiveResistor_cold.dT = (-R_air_cold.k) * Q_cold_W
*/
void pump_v3_basicCold_t_eqFunction_699(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,699};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[152]] /* convectiveResistor_cold.dT variable */) = ((-(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[10]] /* R_air_cold.k PARAM */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[136]] /* Q_cold_W variable */));
  threadData->lastEquationSolved = 699;
}

void residualFunc701(RESIDUAL_USERDATA* userData, const double* xloc, double* res, const int* iflag)
{
  DATA *data = userData->data;
  threadData_t *threadData = userData->threadData;
  const int equationIndexes[2] = {1,701};
  int i,j;
  /* iteration variables */
  for (i=0; i<1; i++) {
    if (isinf(xloc[i]) || isnan(xloc[i])) {
      errorStreamPrint(OMC_LOG_NLS, 0, "residualFunc701: Iteration variable `%s` is inf or nan.",
        modelInfoGetEquation(&data->modelData->modelDataXml, 701).vars[i]);
      for (j=0; j<1; j++) {
        res[j] = NAN;
      }
      throwStreamPrintWithEquationIndexes(threadData, omc_dummyFileInfo, equationIndexes, "residualFunc701 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
      return;
    }
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[170]] /* plugFlowPipe.heatPort.T variable */) = xloc[0];
  /* backup outputs */
  /* pre body */
  /* local constraints */
  pump_v3_basicCold_t_eqFunction_694(data, threadData);
  /* local constraints */
  pump_v3_basicCold_t_eqFunction_695(data, threadData);
  /* local constraints */
  pump_v3_basicCold_t_eqFunction_696(data, threadData);
  /* local constraints */
  pump_v3_basicCold_t_eqFunction_697(data, threadData);
  /* local constraints */
  pump_v3_basicCold_t_eqFunction_698(data, threadData);
  /* local constraints */
  pump_v3_basicCold_t_eqFunction_699(data, threadData);
  /* body */
  res[0] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[170]] /* plugFlowPipe.heatPort.T variable */) + (-(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[52]] /* coldBath.T PARAM */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[152]] /* convectiveResistor_cold.dT variable */);
  threadData->lastEquationSolved = 700;
  /* restore known outputs */
  threadData->lastEquationSolved = 701;
}

OMC_DISABLE_OPT
void initializeSparsePatternNLS701(NONLINEAR_SYSTEM_DATA* inSysData)
{
  int i=0;
  const int colPtrIndex[1+1] = {0,1};
  const int rowIndex[1] = {0};
  /* sparsity pattern available */
  inSysData->isPatternAvailable = TRUE;
  inSysData->sparsePattern = allocSparsePattern(1, 1, 1);
  
  /* write lead index of compressed sparse column */
  memcpy(inSysData->sparsePattern->leadindex, colPtrIndex, (1+1)*sizeof(unsigned int));
  
  for(i=2;i<1+1;++i)
    inSysData->sparsePattern->leadindex[i] += inSysData->sparsePattern->leadindex[i-1];
  
  /* call sparse index */
  memcpy(inSysData->sparsePattern->index, rowIndex, 1*sizeof(unsigned int));
  
  /* write color array */
  /* color 1 with 1 columns */
  const int indices_1[1] = {0};
  for(i=0; i<1; i++)
    inSysData->sparsePattern->colorCols[indices_1[i]] = 1;
}

void freeSparsePatternNLS701(NONLINEAR_SYSTEM_DATA* inSysData)
{
  if (inSysData->isPatternAvailable) {
    freeSparsePattern(inSysData->sparsePattern);
    free(inSysData->sparsePattern);
    inSysData->sparsePattern = NULL;
    inSysData->isPatternAvailable = FALSE;
  }
}
void initializeNonlinearPatternNLS701(NONLINEAR_SYSTEM_DATA* inSysData)
{
  /* no nonlinear pattern available */
}

OMC_DISABLE_OPT
void initializeStaticDataNLS701(DATA* data, threadData_t *threadData, NONLINEAR_SYSTEM_DATA *sysData, modelica_boolean initSparsePattern, modelica_boolean initNonlinearPattern)
{
  int i=0;
  /* static nls data for plugFlowPipe.heatPort.T */
  sysData->nominal[i] = data->modelData->realVarsData[170].attribute /* plugFlowPipe.heatPort.T */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[170].attribute /* plugFlowPipe.heatPort.T */.min;
  sysData->max[i++]   = data->modelData->realVarsData[170].attribute /* plugFlowPipe.heatPort.T */.max;
  /* initial sparse pattern */
  if (initSparsePattern) {
    initializeSparsePatternNLS701(sysData);
  }
  if (initNonlinearPattern) {
    initializeNonlinearPatternNLS701(sysData);
  }
}

OMC_DISABLE_OPT
void freeStaticDataNLS701(DATA* data, threadData_t *threadData, NONLINEAR_SYSTEM_DATA *sysData)
{
  freeSparsePatternNLS701(sysData);
}

OMC_DISABLE_OPT
void getIterationVarsNLS701(DATA* data, double *array)
{
  array[0] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[170]] /* plugFlowPipe.heatPort.T variable */);
}


/* inner equations */

/*
equation index: 926
type: SIMPLE_ASSIGN
plugFlowPipe2.heaLos_a.T_b_outflow = plugFlowPipe2.heatPort.T + (plugFlowPipe2.heaLos_a.T_a_inflow - plugFlowPipe2.heatPort.T) * $cse32
*/
void pump_v3_basicCold_t_eqFunction_926(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,926};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[276]] /* plugFlowPipe2.heaLos_a.T_b_outflow variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[285]] /* plugFlowPipe2.heatPort.T variable */) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[275]] /* plugFlowPipe2.heaLos_a.T_a_inflow variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[285]] /* plugFlowPipe2.heatPort.T variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[82]] /* $cse32 variable */));
  threadData->lastEquationSolved = 926;
}
/*
equation index: 927
type: SIMPLE_ASSIGN
$cse33 = IDEAS.Utilities.Math.Functions.spliceFunction((plugFlowPipe2.heaLos_a.T_a_inflow - plugFlowPipe2.heaLos_a.T_b_outflow) * plugFlowPipe2.heaLos_a.cp_default, 0.0, -pump.motSpe.y, 1.14e-4)
*/
void pump_v3_basicCold_t_eqFunction_927(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,927};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[83]] /* $cse33 variable */) = omc_IDEAS_Utilities_Math_Functions_spliceFunction(threadData, ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[275]] /* plugFlowPipe2.heaLos_a.T_a_inflow variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[276]] /* plugFlowPipe2.heaLos_a.T_b_outflow variable */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[407]] /* plugFlowPipe2.heaLos_a.cp_default PARAM */)), 0.0, (-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[17]] /* pump.motSpe.y STATE(1) */)), 1.14e-4);
  threadData->lastEquationSolved = 927;
}
/*
equation index: 928
type: SIMPLE_ASSIGN
plugFlowPipe2.heaLos_a.heatPort.Q_flow = $cse33 * pump.motSpe.y
*/
void pump_v3_basicCold_t_eqFunction_928(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,928};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[278]] /* plugFlowPipe2.heaLos_a.heatPort.Q_flow variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[83]] /* $cse33 variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[17]] /* pump.motSpe.y STATE(1) */));
  threadData->lastEquationSolved = 928;
}
/*
equation index: 929
type: SIMPLE_ASSIGN
plugFlowPipe2.heaLos_b.T_b_outflow = plugFlowPipe2.heatPort.T + (plugFlowPipe2.heaLos_b.T_a_inflow - plugFlowPipe2.heatPort.T) * $cse36
*/
void pump_v3_basicCold_t_eqFunction_929(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,929};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[281]] /* plugFlowPipe2.heaLos_b.T_b_outflow variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[285]] /* plugFlowPipe2.heatPort.T variable */) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[280]] /* plugFlowPipe2.heaLos_b.T_a_inflow variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[285]] /* plugFlowPipe2.heatPort.T variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[88]] /* $cse36 variable */));
  threadData->lastEquationSolved = 929;
}
/*
equation index: 930
type: SIMPLE_ASSIGN
$cse37 = IDEAS.Utilities.Math.Functions.spliceFunction((plugFlowPipe2.heaLos_b.T_a_inflow - plugFlowPipe2.heaLos_b.T_b_outflow) * plugFlowPipe2.heaLos_b.cp_default, 0.0, pump.motSpe.y, 1.14e-4)
*/
void pump_v3_basicCold_t_eqFunction_930(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,930};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[89]] /* $cse37 variable */) = omc_IDEAS_Utilities_Math_Functions_spliceFunction(threadData, ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[280]] /* plugFlowPipe2.heaLos_b.T_a_inflow variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[281]] /* plugFlowPipe2.heaLos_b.T_b_outflow variable */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[418]] /* plugFlowPipe2.heaLos_b.cp_default PARAM */)), 0.0, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[17]] /* pump.motSpe.y STATE(1) */), 1.14e-4);
  threadData->lastEquationSolved = 930;
}
/*
equation index: 931
type: SIMPLE_ASSIGN
plugFlowPipe2.heaLos_b.heatPort.Q_flow = (-$cse37) * pump.motSpe.y
*/
void pump_v3_basicCold_t_eqFunction_931(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,931};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[283]] /* plugFlowPipe2.heaLos_b.heatPort.Q_flow variable */) = ((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[89]] /* $cse37 variable */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[17]] /* pump.motSpe.y STATE(1) */));
  threadData->lastEquationSolved = 931;
}
/*
equation index: 932
type: SIMPLE_ASSIGN
plugFlowPipe2.QEnv_flow = plugFlowPipe2.heaLos_b.heatPort.Q_flow + plugFlowPipe2.heaLos_a.heatPort.Q_flow
*/
void pump_v3_basicCold_t_eqFunction_932(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,932};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[270]] /* plugFlowPipe2.QEnv_flow variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[283]] /* plugFlowPipe2.heaLos_b.heatPort.Q_flow variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[278]] /* plugFlowPipe2.heaLos_a.heatPort.Q_flow variable */);
  threadData->lastEquationSolved = 932;
}
/*
equation index: 933
type: SIMPLE_ASSIGN
convectiveResistor_amb1.dT = (-R_air_amb1.k) * plugFlowPipe2.QEnv_flow
*/
void pump_v3_basicCold_t_eqFunction_933(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,933};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[151]] /* convectiveResistor_amb1.dT variable */) = ((-(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[8]] /* R_air_amb1.k PARAM */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[270]] /* plugFlowPipe2.QEnv_flow variable */));
  threadData->lastEquationSolved = 933;
}

void residualFunc935(RESIDUAL_USERDATA* userData, const double* xloc, double* res, const int* iflag)
{
  DATA *data = userData->data;
  threadData_t *threadData = userData->threadData;
  const int equationIndexes[2] = {1,935};
  int i,j;
  /* iteration variables */
  for (i=0; i<1; i++) {
    if (isinf(xloc[i]) || isnan(xloc[i])) {
      errorStreamPrint(OMC_LOG_NLS, 0, "residualFunc935: Iteration variable `%s` is inf or nan.",
        modelInfoGetEquation(&data->modelData->modelDataXml, 935).vars[i]);
      for (j=0; j<1; j++) {
        res[j] = NAN;
      }
      throwStreamPrintWithEquationIndexes(threadData, omc_dummyFileInfo, equationIndexes, "residualFunc935 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
      return;
    }
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[285]] /* plugFlowPipe2.heatPort.T variable */) = xloc[0];
  /* backup outputs */
  /* pre body */
  /* local constraints */
  pump_v3_basicCold_t_eqFunction_926(data, threadData);
  /* local constraints */
  pump_v3_basicCold_t_eqFunction_927(data, threadData);
  /* local constraints */
  pump_v3_basicCold_t_eqFunction_928(data, threadData);
  /* local constraints */
  pump_v3_basicCold_t_eqFunction_929(data, threadData);
  /* local constraints */
  pump_v3_basicCold_t_eqFunction_930(data, threadData);
  /* local constraints */
  pump_v3_basicCold_t_eqFunction_931(data, threadData);
  /* local constraints */
  pump_v3_basicCold_t_eqFunction_932(data, threadData);
  /* local constraints */
  pump_v3_basicCold_t_eqFunction_933(data, threadData);
  /* body */
  res[0] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[285]] /* plugFlowPipe2.heatPort.T variable */) + (-(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[43]] /* Tamb1.T PARAM */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[151]] /* convectiveResistor_amb1.dT variable */);
  threadData->lastEquationSolved = 934;
  /* restore known outputs */
  threadData->lastEquationSolved = 935;
}

OMC_DISABLE_OPT
void initializeSparsePatternNLS935(NONLINEAR_SYSTEM_DATA* inSysData)
{
  int i=0;
  const int colPtrIndex[1+1] = {0,1};
  const int rowIndex[1] = {0};
  /* sparsity pattern available */
  inSysData->isPatternAvailable = TRUE;
  inSysData->sparsePattern = allocSparsePattern(1, 1, 1);
  
  /* write lead index of compressed sparse column */
  memcpy(inSysData->sparsePattern->leadindex, colPtrIndex, (1+1)*sizeof(unsigned int));
  
  for(i=2;i<1+1;++i)
    inSysData->sparsePattern->leadindex[i] += inSysData->sparsePattern->leadindex[i-1];
  
  /* call sparse index */
  memcpy(inSysData->sparsePattern->index, rowIndex, 1*sizeof(unsigned int));
  
  /* write color array */
  /* color 1 with 1 columns */
  const int indices_1[1] = {0};
  for(i=0; i<1; i++)
    inSysData->sparsePattern->colorCols[indices_1[i]] = 1;
}

void freeSparsePatternNLS935(NONLINEAR_SYSTEM_DATA* inSysData)
{
  if (inSysData->isPatternAvailable) {
    freeSparsePattern(inSysData->sparsePattern);
    free(inSysData->sparsePattern);
    inSysData->sparsePattern = NULL;
    inSysData->isPatternAvailable = FALSE;
  }
}
void initializeNonlinearPatternNLS935(NONLINEAR_SYSTEM_DATA* inSysData)
{
  /* no nonlinear pattern available */
}

OMC_DISABLE_OPT
void initializeStaticDataNLS935(DATA* data, threadData_t *threadData, NONLINEAR_SYSTEM_DATA *sysData, modelica_boolean initSparsePattern, modelica_boolean initNonlinearPattern)
{
  int i=0;
  /* static nls data for plugFlowPipe2.heatPort.T */
  sysData->nominal[i] = data->modelData->realVarsData[285].attribute /* plugFlowPipe2.heatPort.T */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[285].attribute /* plugFlowPipe2.heatPort.T */.min;
  sysData->max[i++]   = data->modelData->realVarsData[285].attribute /* plugFlowPipe2.heatPort.T */.max;
  /* initial sparse pattern */
  if (initSparsePattern) {
    initializeSparsePatternNLS935(sysData);
  }
  if (initNonlinearPattern) {
    initializeNonlinearPatternNLS935(sysData);
  }
}

OMC_DISABLE_OPT
void freeStaticDataNLS935(DATA* data, threadData_t *threadData, NONLINEAR_SYSTEM_DATA *sysData)
{
  freeSparsePatternNLS935(sysData);
}

OMC_DISABLE_OPT
void getIterationVarsNLS935(DATA* data, double *array)
{
  array[0] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[285]] /* plugFlowPipe2.heatPort.T variable */);
}


/* inner equations */

/*
equation index: 967
type: SIMPLE_ASSIGN
plugFlowPipe.heaLos_b.T_b_outflow = plugFlowPipe.heatPort.T + (plugFlowPipe.heaLos_b.T_a_inflow - plugFlowPipe.heatPort.T) * $cse7
*/
void pump_v3_basicCold_t_eqFunction_967(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,967};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[166]] /* plugFlowPipe.heaLos_b.T_b_outflow variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[170]] /* plugFlowPipe.heatPort.T variable */) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[165]] /* plugFlowPipe.heaLos_b.T_a_inflow variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[170]] /* plugFlowPipe.heatPort.T variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[132]] /* $cse7 variable */));
  threadData->lastEquationSolved = 967;
}
/*
equation index: 968
type: SIMPLE_ASSIGN
$cse8 = IDEAS.Utilities.Math.Functions.spliceFunction((plugFlowPipe.heaLos_b.T_a_inflow - plugFlowPipe.heaLos_b.T_b_outflow) * plugFlowPipe.heaLos_b.cp_default, 0.0, pump.motSpe.y, 1.14e-4)
*/
void pump_v3_basicCold_t_eqFunction_968(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,968};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[133]] /* $cse8 variable */) = omc_IDEAS_Utilities_Math_Functions_spliceFunction(threadData, ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[165]] /* plugFlowPipe.heaLos_b.T_a_inflow variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[166]] /* plugFlowPipe.heaLos_b.T_b_outflow variable */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[119]] /* plugFlowPipe.heaLos_b.cp_default PARAM */)), 0.0, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[17]] /* pump.motSpe.y STATE(1) */), 1.14e-4);
  threadData->lastEquationSolved = 968;
}
/*
equation index: 969
type: SIMPLE_ASSIGN
plugFlowPipe.heaLos_b.heatPort.Q_flow = (-$cse8) * pump.motSpe.y
*/
void pump_v3_basicCold_t_eqFunction_969(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,969};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[168]] /* plugFlowPipe.heaLos_b.heatPort.Q_flow variable */) = ((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[133]] /* $cse8 variable */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[17]] /* pump.motSpe.y STATE(1) */));
  threadData->lastEquationSolved = 969;
}
/*
equation index: 970
type: SIMPLE_ASSIGN
plugFlowPipe.heaLos_a.T_b_outflow = plugFlowPipe.heatPort.T + (plugFlowPipe.heaLos_a.T_a_inflow - plugFlowPipe.heatPort.T) * $cse3
*/
void pump_v3_basicCold_t_eqFunction_970(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,970};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[161]] /* plugFlowPipe.heaLos_a.T_b_outflow variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[170]] /* plugFlowPipe.heatPort.T variable */) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[160]] /* plugFlowPipe.heaLos_a.T_a_inflow variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[170]] /* plugFlowPipe.heatPort.T variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[77]] /* $cse3 variable */));
  threadData->lastEquationSolved = 970;
}
/*
equation index: 971
type: SIMPLE_ASSIGN
$cse4 = IDEAS.Utilities.Math.Functions.spliceFunction((plugFlowPipe.heaLos_a.T_a_inflow - plugFlowPipe.heaLos_a.T_b_outflow) * plugFlowPipe.heaLos_a.cp_default, 0.0, -pump.motSpe.y, 1.14e-4)
*/
void pump_v3_basicCold_t_eqFunction_971(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,971};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[92]] /* $cse4 variable */) = omc_IDEAS_Utilities_Math_Functions_spliceFunction(threadData, ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[160]] /* plugFlowPipe.heaLos_a.T_a_inflow variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[161]] /* plugFlowPipe.heaLos_a.T_b_outflow variable */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[106]] /* plugFlowPipe.heaLos_a.cp_default PARAM */)), 0.0, (-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[17]] /* pump.motSpe.y STATE(1) */)), 1.14e-4);
  threadData->lastEquationSolved = 971;
}
/*
equation index: 972
type: SIMPLE_ASSIGN
plugFlowPipe.heaLos_a.heatPort.Q_flow = $cse4 * pump.motSpe.y
*/
void pump_v3_basicCold_t_eqFunction_972(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,972};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[163]] /* plugFlowPipe.heaLos_a.heatPort.Q_flow variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[92]] /* $cse4 variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[17]] /* pump.motSpe.y STATE(1) */));
  threadData->lastEquationSolved = 972;
}
/*
equation index: 973
type: SIMPLE_ASSIGN
Q_cold_W = plugFlowPipe.heaLos_b.heatPort.Q_flow + plugFlowPipe.heaLos_a.heatPort.Q_flow
*/
void pump_v3_basicCold_t_eqFunction_973(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,973};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[136]] /* Q_cold_W variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[168]] /* plugFlowPipe.heaLos_b.heatPort.Q_flow variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[163]] /* plugFlowPipe.heaLos_a.heatPort.Q_flow variable */);
  threadData->lastEquationSolved = 973;
}
/*
equation index: 974
type: SIMPLE_ASSIGN
convectiveResistor_cold.dT = (-R_air_cold.k) * Q_cold_W
*/
void pump_v3_basicCold_t_eqFunction_974(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,974};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[152]] /* convectiveResistor_cold.dT variable */) = ((-(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[10]] /* R_air_cold.k PARAM */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[136]] /* Q_cold_W variable */));
  threadData->lastEquationSolved = 974;
}

void residualFunc976(RESIDUAL_USERDATA* userData, const double* xloc, double* res, const int* iflag)
{
  DATA *data = userData->data;
  threadData_t *threadData = userData->threadData;
  const int equationIndexes[2] = {1,976};
  int i,j;
  /* iteration variables */
  for (i=0; i<1; i++) {
    if (isinf(xloc[i]) || isnan(xloc[i])) {
      errorStreamPrint(OMC_LOG_NLS, 0, "residualFunc976: Iteration variable `%s` is inf or nan.",
        modelInfoGetEquation(&data->modelData->modelDataXml, 976).vars[i]);
      for (j=0; j<1; j++) {
        res[j] = NAN;
      }
      throwStreamPrintWithEquationIndexes(threadData, omc_dummyFileInfo, equationIndexes, "residualFunc976 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
      return;
    }
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[170]] /* plugFlowPipe.heatPort.T variable */) = xloc[0];
  /* backup outputs */
  /* pre body */
  /* local constraints */
  pump_v3_basicCold_t_eqFunction_967(data, threadData);
  /* local constraints */
  pump_v3_basicCold_t_eqFunction_968(data, threadData);
  /* local constraints */
  pump_v3_basicCold_t_eqFunction_969(data, threadData);
  /* local constraints */
  pump_v3_basicCold_t_eqFunction_970(data, threadData);
  /* local constraints */
  pump_v3_basicCold_t_eqFunction_971(data, threadData);
  /* local constraints */
  pump_v3_basicCold_t_eqFunction_972(data, threadData);
  /* local constraints */
  pump_v3_basicCold_t_eqFunction_973(data, threadData);
  /* local constraints */
  pump_v3_basicCold_t_eqFunction_974(data, threadData);
  /* body */
  res[0] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[170]] /* plugFlowPipe.heatPort.T variable */) + (-(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[52]] /* coldBath.T PARAM */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[152]] /* convectiveResistor_cold.dT variable */);
  threadData->lastEquationSolved = 975;
  /* restore known outputs */
  threadData->lastEquationSolved = 976;
}

OMC_DISABLE_OPT
void initializeSparsePatternNLS976(NONLINEAR_SYSTEM_DATA* inSysData)
{
  int i=0;
  const int colPtrIndex[1+1] = {0,1};
  const int rowIndex[1] = {0};
  /* sparsity pattern available */
  inSysData->isPatternAvailable = TRUE;
  inSysData->sparsePattern = allocSparsePattern(1, 1, 1);
  
  /* write lead index of compressed sparse column */
  memcpy(inSysData->sparsePattern->leadindex, colPtrIndex, (1+1)*sizeof(unsigned int));
  
  for(i=2;i<1+1;++i)
    inSysData->sparsePattern->leadindex[i] += inSysData->sparsePattern->leadindex[i-1];
  
  /* call sparse index */
  memcpy(inSysData->sparsePattern->index, rowIndex, 1*sizeof(unsigned int));
  
  /* write color array */
  /* color 1 with 1 columns */
  const int indices_1[1] = {0};
  for(i=0; i<1; i++)
    inSysData->sparsePattern->colorCols[indices_1[i]] = 1;
}

void freeSparsePatternNLS976(NONLINEAR_SYSTEM_DATA* inSysData)
{
  if (inSysData->isPatternAvailable) {
    freeSparsePattern(inSysData->sparsePattern);
    free(inSysData->sparsePattern);
    inSysData->sparsePattern = NULL;
    inSysData->isPatternAvailable = FALSE;
  }
}
void initializeNonlinearPatternNLS976(NONLINEAR_SYSTEM_DATA* inSysData)
{
  /* no nonlinear pattern available */
}

OMC_DISABLE_OPT
void initializeStaticDataNLS976(DATA* data, threadData_t *threadData, NONLINEAR_SYSTEM_DATA *sysData, modelica_boolean initSparsePattern, modelica_boolean initNonlinearPattern)
{
  int i=0;
  /* static nls data for plugFlowPipe.heatPort.T */
  sysData->nominal[i] = data->modelData->realVarsData[170].attribute /* plugFlowPipe.heatPort.T */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[170].attribute /* plugFlowPipe.heatPort.T */.min;
  sysData->max[i++]   = data->modelData->realVarsData[170].attribute /* plugFlowPipe.heatPort.T */.max;
  /* initial sparse pattern */
  if (initSparsePattern) {
    initializeSparsePatternNLS976(sysData);
  }
  if (initNonlinearPattern) {
    initializeNonlinearPatternNLS976(sysData);
  }
}

OMC_DISABLE_OPT
void freeStaticDataNLS976(DATA* data, threadData_t *threadData, NONLINEAR_SYSTEM_DATA *sysData)
{
  freeSparsePatternNLS976(sysData);
}

OMC_DISABLE_OPT
void getIterationVarsNLS976(DATA* data, double *array)
{
  array[0] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[170]] /* plugFlowPipe.heatPort.T variable */);
}


/* inner equations */

/*
equation index: 1031
type: SIMPLE_ASSIGN
plugFlowPipe_heat.heaLos_a.T_b_outflow = plugFlowPipe_heat.heatPort.T + (plugFlowPipe_heat.heaLos_a.T_a_inflow - plugFlowPipe_heat.heatPort.T) * $cse23
*/
void pump_v3_basicCold_t_eqFunction_1031(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1031};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[335]] /* plugFlowPipe_heat.heaLos_a.T_b_outflow variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[344]] /* plugFlowPipe_heat.heatPort.T variable */) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[334]] /* plugFlowPipe_heat.heaLos_a.T_a_inflow variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[344]] /* plugFlowPipe_heat.heatPort.T variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[67]] /* $cse23 variable */));
  threadData->lastEquationSolved = 1031;
}
/*
equation index: 1032
type: SIMPLE_ASSIGN
$cse24 = IDEAS.Utilities.Math.Functions.spliceFunction((plugFlowPipe_heat.heaLos_a.T_a_inflow - plugFlowPipe_heat.heaLos_a.T_b_outflow) * plugFlowPipe_heat.heaLos_a.cp_default, 0.0, -pump.motSpe.y, 1.14e-4)
*/
void pump_v3_basicCold_t_eqFunction_1032(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1032};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[68]] /* $cse24 variable */) = omc_IDEAS_Utilities_Math_Functions_spliceFunction(threadData, ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[334]] /* plugFlowPipe_heat.heaLos_a.T_a_inflow variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[335]] /* plugFlowPipe_heat.heaLos_a.T_b_outflow variable */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[561]] /* plugFlowPipe_heat.heaLos_a.cp_default PARAM */)), 0.0, (-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[17]] /* pump.motSpe.y STATE(1) */)), 1.14e-4);
  threadData->lastEquationSolved = 1032;
}
/*
equation index: 1033
type: SIMPLE_ASSIGN
plugFlowPipe_heat.heaLos_a.heatPort.Q_flow = $cse24 * pump.motSpe.y
*/
void pump_v3_basicCold_t_eqFunction_1033(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1033};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[337]] /* plugFlowPipe_heat.heaLos_a.heatPort.Q_flow variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[68]] /* $cse24 variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[17]] /* pump.motSpe.y STATE(1) */));
  threadData->lastEquationSolved = 1033;
}
/*
equation index: 1034
type: SIMPLE_ASSIGN
plugFlowPipe_heat.heaLos_b.T_b_outflow = plugFlowPipe_heat.heatPort.T + (plugFlowPipe_heat.heaLos_b.T_a_inflow - plugFlowPipe_heat.heatPort.T) * $cse27
*/
void pump_v3_basicCold_t_eqFunction_1034(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1034};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[340]] /* plugFlowPipe_heat.heaLos_b.T_b_outflow variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[344]] /* plugFlowPipe_heat.heatPort.T variable */) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[339]] /* plugFlowPipe_heat.heaLos_b.T_a_inflow variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[344]] /* plugFlowPipe_heat.heatPort.T variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[73]] /* $cse27 variable */));
  threadData->lastEquationSolved = 1034;
}
/*
equation index: 1035
type: SIMPLE_ASSIGN
$cse28 = IDEAS.Utilities.Math.Functions.spliceFunction((plugFlowPipe_heat.heaLos_b.T_a_inflow - plugFlowPipe_heat.heaLos_b.T_b_outflow) * plugFlowPipe_heat.heaLos_b.cp_default, 0.0, pump.motSpe.y, 1.14e-4)
*/
void pump_v3_basicCold_t_eqFunction_1035(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1035};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[74]] /* $cse28 variable */) = omc_IDEAS_Utilities_Math_Functions_spliceFunction(threadData, ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[339]] /* plugFlowPipe_heat.heaLos_b.T_a_inflow variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[340]] /* plugFlowPipe_heat.heaLos_b.T_b_outflow variable */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[572]] /* plugFlowPipe_heat.heaLos_b.cp_default PARAM */)), 0.0, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[17]] /* pump.motSpe.y STATE(1) */), 1.14e-4);
  threadData->lastEquationSolved = 1035;
}
/*
equation index: 1036
type: SIMPLE_ASSIGN
plugFlowPipe_heat.heaLos_b.heatPort.Q_flow = (-$cse28) * pump.motSpe.y
*/
void pump_v3_basicCold_t_eqFunction_1036(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1036};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[342]] /* plugFlowPipe_heat.heaLos_b.heatPort.Q_flow variable */) = ((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[74]] /* $cse28 variable */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[17]] /* pump.motSpe.y STATE(1) */));
  threadData->lastEquationSolved = 1036;
}
/*
equation index: 1037
type: SIMPLE_ASSIGN
Q_heat_pipe_W = plugFlowPipe_heat.heaLos_b.heatPort.Q_flow + plugFlowPipe_heat.heaLos_a.heatPort.Q_flow
*/
void pump_v3_basicCold_t_eqFunction_1037(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1037};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[137]] /* Q_heat_pipe_W variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[342]] /* plugFlowPipe_heat.heaLos_b.heatPort.Q_flow variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[337]] /* plugFlowPipe_heat.heaLos_a.heatPort.Q_flow variable */);
  threadData->lastEquationSolved = 1037;
}
/*
equation index: 1038
type: SIMPLE_ASSIGN
convectiveResistor_reserv.dT = (-R_water_reserv.k) * Q_heat_pipe_W
*/
void pump_v3_basicCold_t_eqFunction_1038(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1038};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[153]] /* convectiveResistor_reserv.dT variable */) = ((-(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[14]] /* R_water_reserv.k PARAM */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[137]] /* Q_heat_pipe_W variable */));
  threadData->lastEquationSolved = 1038;
}

void residualFunc1040(RESIDUAL_USERDATA* userData, const double* xloc, double* res, const int* iflag)
{
  DATA *data = userData->data;
  threadData_t *threadData = userData->threadData;
  const int equationIndexes[2] = {1,1040};
  int i,j;
  /* iteration variables */
  for (i=0; i<1; i++) {
    if (isinf(xloc[i]) || isnan(xloc[i])) {
      errorStreamPrint(OMC_LOG_NLS, 0, "residualFunc1040: Iteration variable `%s` is inf or nan.",
        modelInfoGetEquation(&data->modelData->modelDataXml, 1040).vars[i]);
      for (j=0; j<1; j++) {
        res[j] = NAN;
      }
      throwStreamPrintWithEquationIndexes(threadData, omc_dummyFileInfo, equationIndexes, "residualFunc1040 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
      return;
    }
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[344]] /* plugFlowPipe_heat.heatPort.T variable */) = xloc[0];
  /* backup outputs */
  /* pre body */
  /* local constraints */
  pump_v3_basicCold_t_eqFunction_1031(data, threadData);
  /* local constraints */
  pump_v3_basicCold_t_eqFunction_1032(data, threadData);
  /* local constraints */
  pump_v3_basicCold_t_eqFunction_1033(data, threadData);
  /* local constraints */
  pump_v3_basicCold_t_eqFunction_1034(data, threadData);
  /* local constraints */
  pump_v3_basicCold_t_eqFunction_1035(data, threadData);
  /* local constraints */
  pump_v3_basicCold_t_eqFunction_1036(data, threadData);
  /* local constraints */
  pump_v3_basicCold_t_eqFunction_1037(data, threadData);
  /* local constraints */
  pump_v3_basicCold_t_eqFunction_1038(data, threadData);
  /* body */
  res[0] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[344]] /* plugFlowPipe_heat.heatPort.T variable */) + (-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[0]] /* Water_Reserv.T STATE(1,Water_Reserv.der_T) */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[153]] /* convectiveResistor_reserv.dT variable */);
  threadData->lastEquationSolved = 1039;
  /* restore known outputs */
  threadData->lastEquationSolved = 1040;
}

OMC_DISABLE_OPT
void initializeSparsePatternNLS1040(NONLINEAR_SYSTEM_DATA* inSysData)
{
  int i=0;
  const int colPtrIndex[1+1] = {0,1};
  const int rowIndex[1] = {0};
  /* sparsity pattern available */
  inSysData->isPatternAvailable = TRUE;
  inSysData->sparsePattern = allocSparsePattern(1, 1, 1);
  
  /* write lead index of compressed sparse column */
  memcpy(inSysData->sparsePattern->leadindex, colPtrIndex, (1+1)*sizeof(unsigned int));
  
  for(i=2;i<1+1;++i)
    inSysData->sparsePattern->leadindex[i] += inSysData->sparsePattern->leadindex[i-1];
  
  /* call sparse index */
  memcpy(inSysData->sparsePattern->index, rowIndex, 1*sizeof(unsigned int));
  
  /* write color array */
  /* color 1 with 1 columns */
  const int indices_1[1] = {0};
  for(i=0; i<1; i++)
    inSysData->sparsePattern->colorCols[indices_1[i]] = 1;
}

void freeSparsePatternNLS1040(NONLINEAR_SYSTEM_DATA* inSysData)
{
  if (inSysData->isPatternAvailable) {
    freeSparsePattern(inSysData->sparsePattern);
    free(inSysData->sparsePattern);
    inSysData->sparsePattern = NULL;
    inSysData->isPatternAvailable = FALSE;
  }
}
void initializeNonlinearPatternNLS1040(NONLINEAR_SYSTEM_DATA* inSysData)
{
  /* no nonlinear pattern available */
}

OMC_DISABLE_OPT
void initializeStaticDataNLS1040(DATA* data, threadData_t *threadData, NONLINEAR_SYSTEM_DATA *sysData, modelica_boolean initSparsePattern, modelica_boolean initNonlinearPattern)
{
  int i=0;
  /* static nls data for plugFlowPipe_heat.heatPort.T */
  sysData->nominal[i] = data->modelData->realVarsData[344].attribute /* plugFlowPipe_heat.heatPort.T */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[344].attribute /* plugFlowPipe_heat.heatPort.T */.min;
  sysData->max[i++]   = data->modelData->realVarsData[344].attribute /* plugFlowPipe_heat.heatPort.T */.max;
  /* initial sparse pattern */
  if (initSparsePattern) {
    initializeSparsePatternNLS1040(sysData);
  }
  if (initNonlinearPattern) {
    initializeNonlinearPatternNLS1040(sysData);
  }
}

OMC_DISABLE_OPT
void freeStaticDataNLS1040(DATA* data, threadData_t *threadData, NONLINEAR_SYSTEM_DATA *sysData)
{
  freeSparsePatternNLS1040(sysData);
}

OMC_DISABLE_OPT
void getIterationVarsNLS1040(DATA* data, double *array)
{
  array[0] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[344]] /* plugFlowPipe_heat.heatPort.T variable */);
}


/* inner equations */

/*
equation index: 1056
type: SIMPLE_ASSIGN
plugFlowPipe1.heaLos_a.T_b_outflow = plugFlowPipe1.heatPort.T + (plugFlowPipe1.heaLos_a.T_a_inflow - plugFlowPipe1.heatPort.T) * $cse14
*/
void pump_v3_basicCold_t_eqFunction_1056(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1056};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[219]] /* plugFlowPipe1.heaLos_a.T_b_outflow variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[228]] /* plugFlowPipe1.heatPort.T variable */) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[218]] /* plugFlowPipe1.heaLos_a.T_a_inflow variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[228]] /* plugFlowPipe1.heatPort.T variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[51]] /* $cse14 variable */));
  threadData->lastEquationSolved = 1056;
}
/*
equation index: 1057
type: SIMPLE_ASSIGN
$cse15 = IDEAS.Utilities.Math.Functions.spliceFunction((plugFlowPipe1.heaLos_a.T_a_inflow - plugFlowPipe1.heaLos_a.T_b_outflow) * plugFlowPipe1.heaLos_a.cp_default, 0.0, -pump.motSpe.y, 1.14e-4)
*/
void pump_v3_basicCold_t_eqFunction_1057(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1057};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[52]] /* $cse15 variable */) = omc_IDEAS_Utilities_Math_Functions_spliceFunction(threadData, ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[218]] /* plugFlowPipe1.heaLos_a.T_a_inflow variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[219]] /* plugFlowPipe1.heaLos_a.T_b_outflow variable */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[262]] /* plugFlowPipe1.heaLos_a.cp_default PARAM */)), 0.0, (-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[17]] /* pump.motSpe.y STATE(1) */)), 1.14e-4);
  threadData->lastEquationSolved = 1057;
}
/*
equation index: 1058
type: SIMPLE_ASSIGN
plugFlowPipe1.heaLos_a.heatPort.Q_flow = $cse15 * pump.motSpe.y
*/
void pump_v3_basicCold_t_eqFunction_1058(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1058};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[221]] /* plugFlowPipe1.heaLos_a.heatPort.Q_flow variable */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[52]] /* $cse15 variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[17]] /* pump.motSpe.y STATE(1) */));
  threadData->lastEquationSolved = 1058;
}
/*
equation index: 1059
type: SIMPLE_ASSIGN
plugFlowPipe1.heaLos_b.T_b_outflow = plugFlowPipe1.heatPort.T + (plugFlowPipe1.heaLos_b.T_a_inflow - plugFlowPipe1.heatPort.T) * $cse18
*/
void pump_v3_basicCold_t_eqFunction_1059(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1059};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[224]] /* plugFlowPipe1.heaLos_b.T_b_outflow variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[228]] /* plugFlowPipe1.heatPort.T variable */) + ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[223]] /* plugFlowPipe1.heaLos_b.T_a_inflow variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[228]] /* plugFlowPipe1.heatPort.T variable */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[57]] /* $cse18 variable */));
  threadData->lastEquationSolved = 1059;
}
/*
equation index: 1060
type: SIMPLE_ASSIGN
$cse19 = IDEAS.Utilities.Math.Functions.spliceFunction((plugFlowPipe1.heaLos_b.T_a_inflow - plugFlowPipe1.heaLos_b.T_b_outflow) * plugFlowPipe1.heaLos_b.cp_default, 0.0, pump.motSpe.y, 1.14e-4)
*/
void pump_v3_basicCold_t_eqFunction_1060(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1060};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[58]] /* $cse19 variable */) = omc_IDEAS_Utilities_Math_Functions_spliceFunction(threadData, ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[223]] /* plugFlowPipe1.heaLos_b.T_a_inflow variable */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[224]] /* plugFlowPipe1.heaLos_b.T_b_outflow variable */)) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[273]] /* plugFlowPipe1.heaLos_b.cp_default PARAM */)), 0.0, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[17]] /* pump.motSpe.y STATE(1) */), 1.14e-4);
  threadData->lastEquationSolved = 1060;
}
/*
equation index: 1061
type: SIMPLE_ASSIGN
plugFlowPipe1.heaLos_b.heatPort.Q_flow = (-$cse19) * pump.motSpe.y
*/
void pump_v3_basicCold_t_eqFunction_1061(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1061};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[226]] /* plugFlowPipe1.heaLos_b.heatPort.Q_flow variable */) = ((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[58]] /* $cse19 variable */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[17]] /* pump.motSpe.y STATE(1) */));
  threadData->lastEquationSolved = 1061;
}
/*
equation index: 1062
type: SIMPLE_ASSIGN
plugFlowPipe1.QEnv_flow = plugFlowPipe1.heaLos_b.heatPort.Q_flow + plugFlowPipe1.heaLos_a.heatPort.Q_flow
*/
void pump_v3_basicCold_t_eqFunction_1062(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1062};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[213]] /* plugFlowPipe1.QEnv_flow variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[226]] /* plugFlowPipe1.heaLos_b.heatPort.Q_flow variable */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[221]] /* plugFlowPipe1.heaLos_a.heatPort.Q_flow variable */);
  threadData->lastEquationSolved = 1062;
}
/*
equation index: 1063
type: SIMPLE_ASSIGN
convectiveResistor_amb.dT = (-R_air_amb.k) * plugFlowPipe1.QEnv_flow
*/
void pump_v3_basicCold_t_eqFunction_1063(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1063};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[150]] /* convectiveResistor_amb.dT variable */) = ((-(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[6]] /* R_air_amb.k PARAM */))) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[213]] /* plugFlowPipe1.QEnv_flow variable */));
  threadData->lastEquationSolved = 1063;
}

void residualFunc1065(RESIDUAL_USERDATA* userData, const double* xloc, double* res, const int* iflag)
{
  DATA *data = userData->data;
  threadData_t *threadData = userData->threadData;
  const int equationIndexes[2] = {1,1065};
  int i,j;
  /* iteration variables */
  for (i=0; i<1; i++) {
    if (isinf(xloc[i]) || isnan(xloc[i])) {
      errorStreamPrint(OMC_LOG_NLS, 0, "residualFunc1065: Iteration variable `%s` is inf or nan.",
        modelInfoGetEquation(&data->modelData->modelDataXml, 1065).vars[i]);
      for (j=0; j<1; j++) {
        res[j] = NAN;
      }
      throwStreamPrintWithEquationIndexes(threadData, omc_dummyFileInfo, equationIndexes, "residualFunc1065 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
      return;
    }
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[228]] /* plugFlowPipe1.heatPort.T variable */) = xloc[0];
  /* backup outputs */
  /* pre body */
  /* local constraints */
  pump_v3_basicCold_t_eqFunction_1056(data, threadData);
  /* local constraints */
  pump_v3_basicCold_t_eqFunction_1057(data, threadData);
  /* local constraints */
  pump_v3_basicCold_t_eqFunction_1058(data, threadData);
  /* local constraints */
  pump_v3_basicCold_t_eqFunction_1059(data, threadData);
  /* local constraints */
  pump_v3_basicCold_t_eqFunction_1060(data, threadData);
  /* local constraints */
  pump_v3_basicCold_t_eqFunction_1061(data, threadData);
  /* local constraints */
  pump_v3_basicCold_t_eqFunction_1062(data, threadData);
  /* local constraints */
  pump_v3_basicCold_t_eqFunction_1063(data, threadData);
  /* body */
  res[0] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[228]] /* plugFlowPipe1.heatPort.T variable */) + (-(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[41]] /* Tamb.T PARAM */)) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[150]] /* convectiveResistor_amb.dT variable */);
  threadData->lastEquationSolved = 1064;
  /* restore known outputs */
  threadData->lastEquationSolved = 1065;
}

OMC_DISABLE_OPT
void initializeSparsePatternNLS1065(NONLINEAR_SYSTEM_DATA* inSysData)
{
  int i=0;
  const int colPtrIndex[1+1] = {0,1};
  const int rowIndex[1] = {0};
  /* sparsity pattern available */
  inSysData->isPatternAvailable = TRUE;
  inSysData->sparsePattern = allocSparsePattern(1, 1, 1);
  
  /* write lead index of compressed sparse column */
  memcpy(inSysData->sparsePattern->leadindex, colPtrIndex, (1+1)*sizeof(unsigned int));
  
  for(i=2;i<1+1;++i)
    inSysData->sparsePattern->leadindex[i] += inSysData->sparsePattern->leadindex[i-1];
  
  /* call sparse index */
  memcpy(inSysData->sparsePattern->index, rowIndex, 1*sizeof(unsigned int));
  
  /* write color array */
  /* color 1 with 1 columns */
  const int indices_1[1] = {0};
  for(i=0; i<1; i++)
    inSysData->sparsePattern->colorCols[indices_1[i]] = 1;
}

void freeSparsePatternNLS1065(NONLINEAR_SYSTEM_DATA* inSysData)
{
  if (inSysData->isPatternAvailable) {
    freeSparsePattern(inSysData->sparsePattern);
    free(inSysData->sparsePattern);
    inSysData->sparsePattern = NULL;
    inSysData->isPatternAvailable = FALSE;
  }
}
void initializeNonlinearPatternNLS1065(NONLINEAR_SYSTEM_DATA* inSysData)
{
  /* no nonlinear pattern available */
}

OMC_DISABLE_OPT
void initializeStaticDataNLS1065(DATA* data, threadData_t *threadData, NONLINEAR_SYSTEM_DATA *sysData, modelica_boolean initSparsePattern, modelica_boolean initNonlinearPattern)
{
  int i=0;
  /* static nls data for plugFlowPipe1.heatPort.T */
  sysData->nominal[i] = data->modelData->realVarsData[228].attribute /* plugFlowPipe1.heatPort.T */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[228].attribute /* plugFlowPipe1.heatPort.T */.min;
  sysData->max[i++]   = data->modelData->realVarsData[228].attribute /* plugFlowPipe1.heatPort.T */.max;
  /* initial sparse pattern */
  if (initSparsePattern) {
    initializeSparsePatternNLS1065(sysData);
  }
  if (initNonlinearPattern) {
    initializeNonlinearPatternNLS1065(sysData);
  }
}

OMC_DISABLE_OPT
void freeStaticDataNLS1065(DATA* data, threadData_t *threadData, NONLINEAR_SYSTEM_DATA *sysData)
{
  freeSparsePatternNLS1065(sysData);
}

OMC_DISABLE_OPT
void getIterationVarsNLS1065(DATA* data, double *array)
{
  array[0] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[228]] /* plugFlowPipe1.heatPort.T variable */);
}

/* Prototypes for the strict sets (Dynamic Tearing) */

/* Global constraints for the casual sets */
/* function initialize non-linear systems */
void pump_v3_basicCold_t_initialNonLinearSystem(int nNonLinearSystems, NONLINEAR_SYSTEM_DATA* nonLinearSystemData)
{
  
  nonLinearSystemData[11].equationIndex = 1065;
  nonLinearSystemData[11].size = 1;
  nonLinearSystemData[11].homotopySupport = 0 /* false */;
  nonLinearSystemData[11].mixedSystem = 0 /* false */;
  nonLinearSystemData[11].residualFunc = residualFunc1065;
  nonLinearSystemData[11].strictTearingFunctionCall = NULL;
  nonLinearSystemData[11].analyticalJacobianColumn = NULL;
  nonLinearSystemData[11].initialAnalyticalJacobian = NULL;
  nonLinearSystemData[11].jacobianIndex = -1;
  nonLinearSystemData[11].initializeStaticNLSData = initializeStaticDataNLS1065;
  nonLinearSystemData[11].freeStaticNLSData = freeStaticDataNLS1065;
  nonLinearSystemData[11].getIterationVars = getIterationVarsNLS1065;
  nonLinearSystemData[11].checkConstraints = NULL;
  
  const int tmp_eqn_indices_11[9] = {1056, 1057, 1058, 1059, 1060, 1061, 1062, 1063, 1064};
  nonLinearSystemData[11].eqn_simcode_indices = malloc(9 * sizeof(int));
  memcpy(nonLinearSystemData[11].eqn_simcode_indices, tmp_eqn_indices_11, 9 * sizeof(int));
  nonLinearSystemData[11].torn_plus_residual_size = 9;
  
  
  nonLinearSystemData[10].equationIndex = 1040;
  nonLinearSystemData[10].size = 1;
  nonLinearSystemData[10].homotopySupport = 0 /* false */;
  nonLinearSystemData[10].mixedSystem = 0 /* false */;
  nonLinearSystemData[10].residualFunc = residualFunc1040;
  nonLinearSystemData[10].strictTearingFunctionCall = NULL;
  nonLinearSystemData[10].analyticalJacobianColumn = NULL;
  nonLinearSystemData[10].initialAnalyticalJacobian = NULL;
  nonLinearSystemData[10].jacobianIndex = -1;
  nonLinearSystemData[10].initializeStaticNLSData = initializeStaticDataNLS1040;
  nonLinearSystemData[10].freeStaticNLSData = freeStaticDataNLS1040;
  nonLinearSystemData[10].getIterationVars = getIterationVarsNLS1040;
  nonLinearSystemData[10].checkConstraints = NULL;
  
  const int tmp_eqn_indices_10[9] = {1031, 1032, 1033, 1034, 1035, 1036, 1037, 1038, 1039};
  nonLinearSystemData[10].eqn_simcode_indices = malloc(9 * sizeof(int));
  memcpy(nonLinearSystemData[10].eqn_simcode_indices, tmp_eqn_indices_10, 9 * sizeof(int));
  nonLinearSystemData[10].torn_plus_residual_size = 9;
  
  
  nonLinearSystemData[9].equationIndex = 976;
  nonLinearSystemData[9].size = 1;
  nonLinearSystemData[9].homotopySupport = 0 /* false */;
  nonLinearSystemData[9].mixedSystem = 0 /* false */;
  nonLinearSystemData[9].residualFunc = residualFunc976;
  nonLinearSystemData[9].strictTearingFunctionCall = NULL;
  nonLinearSystemData[9].analyticalJacobianColumn = NULL;
  nonLinearSystemData[9].initialAnalyticalJacobian = NULL;
  nonLinearSystemData[9].jacobianIndex = -1;
  nonLinearSystemData[9].initializeStaticNLSData = initializeStaticDataNLS976;
  nonLinearSystemData[9].freeStaticNLSData = freeStaticDataNLS976;
  nonLinearSystemData[9].getIterationVars = getIterationVarsNLS976;
  nonLinearSystemData[9].checkConstraints = NULL;
  
  const int tmp_eqn_indices_9[9] = {967, 968, 969, 970, 971, 972, 973, 974, 975};
  nonLinearSystemData[9].eqn_simcode_indices = malloc(9 * sizeof(int));
  memcpy(nonLinearSystemData[9].eqn_simcode_indices, tmp_eqn_indices_9, 9 * sizeof(int));
  nonLinearSystemData[9].torn_plus_residual_size = 9;
  
  
  nonLinearSystemData[8].equationIndex = 935;
  nonLinearSystemData[8].size = 1;
  nonLinearSystemData[8].homotopySupport = 0 /* false */;
  nonLinearSystemData[8].mixedSystem = 0 /* false */;
  nonLinearSystemData[8].residualFunc = residualFunc935;
  nonLinearSystemData[8].strictTearingFunctionCall = NULL;
  nonLinearSystemData[8].analyticalJacobianColumn = NULL;
  nonLinearSystemData[8].initialAnalyticalJacobian = NULL;
  nonLinearSystemData[8].jacobianIndex = -1;
  nonLinearSystemData[8].initializeStaticNLSData = initializeStaticDataNLS935;
  nonLinearSystemData[8].freeStaticNLSData = freeStaticDataNLS935;
  nonLinearSystemData[8].getIterationVars = getIterationVarsNLS935;
  nonLinearSystemData[8].checkConstraints = NULL;
  
  const int tmp_eqn_indices_8[9] = {926, 927, 928, 929, 930, 931, 932, 933, 934};
  nonLinearSystemData[8].eqn_simcode_indices = malloc(9 * sizeof(int));
  memcpy(nonLinearSystemData[8].eqn_simcode_indices, tmp_eqn_indices_8, 9 * sizeof(int));
  nonLinearSystemData[8].torn_plus_residual_size = 9;
  
  
  nonLinearSystemData[7].equationIndex = 701;
  nonLinearSystemData[7].size = 1;
  nonLinearSystemData[7].homotopySupport = 0 /* false */;
  nonLinearSystemData[7].mixedSystem = 0 /* false */;
  nonLinearSystemData[7].residualFunc = residualFunc701;
  nonLinearSystemData[7].strictTearingFunctionCall = NULL;
  nonLinearSystemData[7].analyticalJacobianColumn = NULL;
  nonLinearSystemData[7].initialAnalyticalJacobian = NULL;
  nonLinearSystemData[7].jacobianIndex = -1;
  nonLinearSystemData[7].initializeStaticNLSData = initializeStaticDataNLS701;
  nonLinearSystemData[7].freeStaticNLSData = freeStaticDataNLS701;
  nonLinearSystemData[7].getIterationVars = getIterationVarsNLS701;
  nonLinearSystemData[7].checkConstraints = NULL;
  
  const int tmp_eqn_indices_7[7] = {694, 695, 696, 697, 698, 699, 700};
  nonLinearSystemData[7].eqn_simcode_indices = malloc(7 * sizeof(int));
  memcpy(nonLinearSystemData[7].eqn_simcode_indices, tmp_eqn_indices_7, 7 * sizeof(int));
  nonLinearSystemData[7].torn_plus_residual_size = 7;
  
  
  nonLinearSystemData[6].equationIndex = 659;
  nonLinearSystemData[6].size = 1;
  nonLinearSystemData[6].homotopySupport = 0 /* false */;
  nonLinearSystemData[6].mixedSystem = 0 /* false */;
  nonLinearSystemData[6].residualFunc = residualFunc659;
  nonLinearSystemData[6].strictTearingFunctionCall = NULL;
  nonLinearSystemData[6].analyticalJacobianColumn = NULL;
  nonLinearSystemData[6].initialAnalyticalJacobian = NULL;
  nonLinearSystemData[6].jacobianIndex = -1;
  nonLinearSystemData[6].initializeStaticNLSData = initializeStaticDataNLS659;
  nonLinearSystemData[6].freeStaticNLSData = freeStaticDataNLS659;
  nonLinearSystemData[6].getIterationVars = getIterationVarsNLS659;
  nonLinearSystemData[6].checkConstraints = NULL;
  
  const int tmp_eqn_indices_6[7] = {652, 653, 654, 655, 656, 657, 658};
  nonLinearSystemData[6].eqn_simcode_indices = malloc(7 * sizeof(int));
  memcpy(nonLinearSystemData[6].eqn_simcode_indices, tmp_eqn_indices_6, 7 * sizeof(int));
  nonLinearSystemData[6].torn_plus_residual_size = 7;
  
  
  nonLinearSystemData[5].equationIndex = 613;
  nonLinearSystemData[5].size = 1;
  nonLinearSystemData[5].homotopySupport = 0 /* false */;
  nonLinearSystemData[5].mixedSystem = 0 /* false */;
  nonLinearSystemData[5].residualFunc = residualFunc613;
  nonLinearSystemData[5].strictTearingFunctionCall = NULL;
  nonLinearSystemData[5].analyticalJacobianColumn = NULL;
  nonLinearSystemData[5].initialAnalyticalJacobian = NULL;
  nonLinearSystemData[5].jacobianIndex = -1;
  nonLinearSystemData[5].initializeStaticNLSData = initializeStaticDataNLS613;
  nonLinearSystemData[5].freeStaticNLSData = freeStaticDataNLS613;
  nonLinearSystemData[5].getIterationVars = getIterationVarsNLS613;
  nonLinearSystemData[5].checkConstraints = NULL;
  
  const int tmp_eqn_indices_5[7] = {606, 607, 608, 609, 610, 611, 612};
  nonLinearSystemData[5].eqn_simcode_indices = malloc(7 * sizeof(int));
  memcpy(nonLinearSystemData[5].eqn_simcode_indices, tmp_eqn_indices_5, 7 * sizeof(int));
  nonLinearSystemData[5].torn_plus_residual_size = 7;
  
  
  nonLinearSystemData[4].equationIndex = 572;
  nonLinearSystemData[4].size = 1;
  nonLinearSystemData[4].homotopySupport = 0 /* false */;
  nonLinearSystemData[4].mixedSystem = 0 /* false */;
  nonLinearSystemData[4].residualFunc = residualFunc572;
  nonLinearSystemData[4].strictTearingFunctionCall = NULL;
  nonLinearSystemData[4].analyticalJacobianColumn = NULL;
  nonLinearSystemData[4].initialAnalyticalJacobian = NULL;
  nonLinearSystemData[4].jacobianIndex = -1;
  nonLinearSystemData[4].initializeStaticNLSData = initializeStaticDataNLS572;
  nonLinearSystemData[4].freeStaticNLSData = freeStaticDataNLS572;
  nonLinearSystemData[4].getIterationVars = getIterationVarsNLS572;
  nonLinearSystemData[4].checkConstraints = NULL;
  
  const int tmp_eqn_indices_4[7] = {565, 566, 567, 568, 569, 570, 571};
  nonLinearSystemData[4].eqn_simcode_indices = malloc(7 * sizeof(int));
  memcpy(nonLinearSystemData[4].eqn_simcode_indices, tmp_eqn_indices_4, 7 * sizeof(int));
  nonLinearSystemData[4].torn_plus_residual_size = 7;
  
  
  nonLinearSystemData[3].equationIndex = 297;
  nonLinearSystemData[3].size = 1;
  nonLinearSystemData[3].homotopySupport = 0 /* false */;
  nonLinearSystemData[3].mixedSystem = 0 /* false */;
  nonLinearSystemData[3].residualFunc = residualFunc297;
  nonLinearSystemData[3].strictTearingFunctionCall = NULL;
  nonLinearSystemData[3].analyticalJacobianColumn = NULL;
  nonLinearSystemData[3].initialAnalyticalJacobian = NULL;
  nonLinearSystemData[3].jacobianIndex = -1;
  nonLinearSystemData[3].initializeStaticNLSData = initializeStaticDataNLS297;
  nonLinearSystemData[3].freeStaticNLSData = freeStaticDataNLS297;
  nonLinearSystemData[3].getIterationVars = getIterationVarsNLS297;
  nonLinearSystemData[3].checkConstraints = NULL;
  
  const int tmp_eqn_indices_3[7] = {290, 291, 292, 293, 294, 295, 296};
  nonLinearSystemData[3].eqn_simcode_indices = malloc(7 * sizeof(int));
  memcpy(nonLinearSystemData[3].eqn_simcode_indices, tmp_eqn_indices_3, 7 * sizeof(int));
  nonLinearSystemData[3].torn_plus_residual_size = 7;
  
  
  nonLinearSystemData[2].equationIndex = 255;
  nonLinearSystemData[2].size = 1;
  nonLinearSystemData[2].homotopySupport = 0 /* false */;
  nonLinearSystemData[2].mixedSystem = 0 /* false */;
  nonLinearSystemData[2].residualFunc = residualFunc255;
  nonLinearSystemData[2].strictTearingFunctionCall = NULL;
  nonLinearSystemData[2].analyticalJacobianColumn = NULL;
  nonLinearSystemData[2].initialAnalyticalJacobian = NULL;
  nonLinearSystemData[2].jacobianIndex = -1;
  nonLinearSystemData[2].initializeStaticNLSData = initializeStaticDataNLS255;
  nonLinearSystemData[2].freeStaticNLSData = freeStaticDataNLS255;
  nonLinearSystemData[2].getIterationVars = getIterationVarsNLS255;
  nonLinearSystemData[2].checkConstraints = NULL;
  
  const int tmp_eqn_indices_2[7] = {248, 249, 250, 251, 252, 253, 254};
  nonLinearSystemData[2].eqn_simcode_indices = malloc(7 * sizeof(int));
  memcpy(nonLinearSystemData[2].eqn_simcode_indices, tmp_eqn_indices_2, 7 * sizeof(int));
  nonLinearSystemData[2].torn_plus_residual_size = 7;
  
  
  nonLinearSystemData[1].equationIndex = 209;
  nonLinearSystemData[1].size = 1;
  nonLinearSystemData[1].homotopySupport = 0 /* false */;
  nonLinearSystemData[1].mixedSystem = 0 /* false */;
  nonLinearSystemData[1].residualFunc = residualFunc209;
  nonLinearSystemData[1].strictTearingFunctionCall = NULL;
  nonLinearSystemData[1].analyticalJacobianColumn = NULL;
  nonLinearSystemData[1].initialAnalyticalJacobian = NULL;
  nonLinearSystemData[1].jacobianIndex = -1;
  nonLinearSystemData[1].initializeStaticNLSData = initializeStaticDataNLS209;
  nonLinearSystemData[1].freeStaticNLSData = freeStaticDataNLS209;
  nonLinearSystemData[1].getIterationVars = getIterationVarsNLS209;
  nonLinearSystemData[1].checkConstraints = NULL;
  
  const int tmp_eqn_indices_1[7] = {202, 203, 204, 205, 206, 207, 208};
  nonLinearSystemData[1].eqn_simcode_indices = malloc(7 * sizeof(int));
  memcpy(nonLinearSystemData[1].eqn_simcode_indices, tmp_eqn_indices_1, 7 * sizeof(int));
  nonLinearSystemData[1].torn_plus_residual_size = 7;
  
  
  nonLinearSystemData[0].equationIndex = 168;
  nonLinearSystemData[0].size = 1;
  nonLinearSystemData[0].homotopySupport = 0 /* false */;
  nonLinearSystemData[0].mixedSystem = 0 /* false */;
  nonLinearSystemData[0].residualFunc = residualFunc168;
  nonLinearSystemData[0].strictTearingFunctionCall = NULL;
  nonLinearSystemData[0].analyticalJacobianColumn = NULL;
  nonLinearSystemData[0].initialAnalyticalJacobian = NULL;
  nonLinearSystemData[0].jacobianIndex = -1;
  nonLinearSystemData[0].initializeStaticNLSData = initializeStaticDataNLS168;
  nonLinearSystemData[0].freeStaticNLSData = freeStaticDataNLS168;
  nonLinearSystemData[0].getIterationVars = getIterationVarsNLS168;
  nonLinearSystemData[0].checkConstraints = NULL;
  
  const int tmp_eqn_indices_0[7] = {161, 162, 163, 164, 165, 166, 167};
  nonLinearSystemData[0].eqn_simcode_indices = malloc(7 * sizeof(int));
  memcpy(nonLinearSystemData[0].eqn_simcode_indices, tmp_eqn_indices_0, 7 * sizeof(int));
  nonLinearSystemData[0].torn_plus_residual_size = 7;
}

#if defined(__cplusplus)
}
#endif
