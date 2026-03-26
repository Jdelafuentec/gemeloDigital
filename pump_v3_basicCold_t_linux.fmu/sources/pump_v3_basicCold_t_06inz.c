/* Initialization */
#include "pump_v3_basicCold_t_model.h"
#include "pump_v3_basicCold_t_11mix.h"
#include "pump_v3_basicCold_t_12jac.h"
#if defined(__cplusplus)
extern "C" {
#endif

void pump_v3_basicCold_t_functionInitialEquations_0(DATA *data, threadData_t *threadData);

/*
equation index: 1
type: SIMPLE_ASSIGN
plugFlowPipe.res.port_a.h_outflow = 83680.0
*/
void pump_v3_basicCold_t_eqFunction_1(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,1};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[173]] /* plugFlowPipe.res.port_a.h_outflow variable */) = 83680.0;
  threadData->lastEquationSolved = 1;
}

/*
equation index: 2
type: SIMPLE_ASSIGN
plugFlowPipe.vol_b.dynBal.medium.X[1] = 1.0
*/
void pump_v3_basicCold_t_eqFunction_2(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[206]] /* plugFlowPipe.vol_b.dynBal.medium.X[1] variable */) = 1.0;
  threadData->lastEquationSolved = 2;
}

/*
equation index: 3
type: SIMPLE_ASSIGN
plugFlowPipe.vol_b.dynBal.mWat_flow_internal = 0.0
*/
void pump_v3_basicCold_t_eqFunction_3(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[200]] /* plugFlowPipe.vol_b.dynBal.mWat_flow_internal variable */) = 0.0;
  threadData->lastEquationSolved = 3;
}

/*
equation index: 4
type: SIMPLE_ASSIGN
plugFlowPipe.vol_a.dynBal.medium.X[1] = 1.0
*/
void pump_v3_basicCold_t_eqFunction_4(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,4};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[190]] /* plugFlowPipe.vol_a.dynBal.medium.X[1] variable */) = 1.0;
  threadData->lastEquationSolved = 4;
}

/*
equation index: 5
type: SIMPLE_ASSIGN
plugFlowPipe.vol_a.dynBal.mWat_flow_internal = 0.0
*/
void pump_v3_basicCold_t_eqFunction_5(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,5};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[184]] /* plugFlowPipe.vol_a.dynBal.mWat_flow_internal variable */) = 0.0;
  threadData->lastEquationSolved = 5;
}

/*
equation index: 6
type: SIMPLE_ASSIGN
SenTempIn_cold.mNor_flow = 1.0
*/
void pump_v3_basicCold_t_eqFunction_6(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,6};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[143]] /* SenTempIn_cold.mNor_flow variable */) = 1.0;
  threadData->lastEquationSolved = 6;
}

/*
equation index: 7
type: SIMPLE_ASSIGN
SenTempIn_cold.k = 1.0
*/
void pump_v3_basicCold_t_eqFunction_7(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,7};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[142]] /* SenTempIn_cold.k variable */) = 1.0;
  threadData->lastEquationSolved = 7;
}

/*
equation index: 8
type: SIMPLE_ASSIGN
senTemOut_cold.mNor_flow = 1.0
*/
void pump_v3_basicCold_t_eqFunction_8(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,8};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[438]] /* senTemOut_cold.mNor_flow variable */) = 1.0;
  threadData->lastEquationSolved = 8;
}

/*
equation index: 9
type: SIMPLE_ASSIGN
senTemOut_cold.k = 1.0
*/
void pump_v3_basicCold_t_eqFunction_9(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,9};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[437]] /* senTemOut_cold.k variable */) = 1.0;
  threadData->lastEquationSolved = 9;
}

/*
equation index: 10
type: SIMPLE_ASSIGN
plugFlowPipe1.res.port_a.h_outflow = 83680.0
*/
void pump_v3_basicCold_t_eqFunction_10(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,10};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[231]] /* plugFlowPipe1.res.port_a.h_outflow variable */) = 83680.0;
  threadData->lastEquationSolved = 10;
}

/*
equation index: 11
type: SIMPLE_ASSIGN
plugFlowPipe1.vol_b.dynBal.medium.X[1] = 1.0
*/
void pump_v3_basicCold_t_eqFunction_11(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,11};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[264]] /* plugFlowPipe1.vol_b.dynBal.medium.X[1] variable */) = 1.0;
  threadData->lastEquationSolved = 11;
}

/*
equation index: 12
type: SIMPLE_ASSIGN
plugFlowPipe1.vol_b.dynBal.mWat_flow_internal = 0.0
*/
void pump_v3_basicCold_t_eqFunction_12(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,12};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[258]] /* plugFlowPipe1.vol_b.dynBal.mWat_flow_internal variable */) = 0.0;
  threadData->lastEquationSolved = 12;
}

/*
equation index: 13
type: SIMPLE_ASSIGN
plugFlowPipe1.vol_a.dynBal.medium.X[1] = 1.0
*/
void pump_v3_basicCold_t_eqFunction_13(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,13};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[248]] /* plugFlowPipe1.vol_a.dynBal.medium.X[1] variable */) = 1.0;
  threadData->lastEquationSolved = 13;
}

/*
equation index: 14
type: SIMPLE_ASSIGN
plugFlowPipe1.vol_a.dynBal.mWat_flow_internal = 0.0
*/
void pump_v3_basicCold_t_eqFunction_14(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,14};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[242]] /* plugFlowPipe1.vol_a.dynBal.mWat_flow_internal variable */) = 0.0;
  threadData->lastEquationSolved = 14;
}

/*
equation index: 15
type: SIMPLE_ASSIGN
plugFlowPipe_heat.res.port_a.h_outflow = 83680.0
*/
void pump_v3_basicCold_t_eqFunction_15(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,15};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[348]] /* plugFlowPipe_heat.res.port_a.h_outflow variable */) = 83680.0;
  threadData->lastEquationSolved = 15;
}

/*
equation index: 16
type: SIMPLE_ASSIGN
plugFlowPipe_heat.vol_b.dynBal.medium.X[1] = 1.0
*/
void pump_v3_basicCold_t_eqFunction_16(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,16};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[381]] /* plugFlowPipe_heat.vol_b.dynBal.medium.X[1] variable */) = 1.0;
  threadData->lastEquationSolved = 16;
}

/*
equation index: 17
type: SIMPLE_ASSIGN
plugFlowPipe_heat.vol_b.dynBal.mWat_flow_internal = 0.0
*/
void pump_v3_basicCold_t_eqFunction_17(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,17};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[375]] /* plugFlowPipe_heat.vol_b.dynBal.mWat_flow_internal variable */) = 0.0;
  threadData->lastEquationSolved = 17;
}

/*
equation index: 18
type: SIMPLE_ASSIGN
plugFlowPipe_heat.vol_a.dynBal.medium.X[1] = 1.0
*/
void pump_v3_basicCold_t_eqFunction_18(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,18};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[365]] /* plugFlowPipe_heat.vol_a.dynBal.medium.X[1] variable */) = 1.0;
  threadData->lastEquationSolved = 18;
}

/*
equation index: 19
type: SIMPLE_ASSIGN
plugFlowPipe_heat.vol_a.dynBal.mWat_flow_internal = 0.0
*/
void pump_v3_basicCold_t_eqFunction_19(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,19};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[359]] /* plugFlowPipe_heat.vol_a.dynBal.mWat_flow_internal variable */) = 0.0;
  threadData->lastEquationSolved = 19;
}

/*
equation index: 20
type: SIMPLE_ASSIGN
plugFlowPipe2.res.port_a.h_outflow = 83680.0
*/
void pump_v3_basicCold_t_eqFunction_20(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,20};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[290]] /* plugFlowPipe2.res.port_a.h_outflow variable */) = 83680.0;
  threadData->lastEquationSolved = 20;
}

/*
equation index: 21
type: SIMPLE_ASSIGN
plugFlowPipe2.vol_b.dynBal.medium.X[1] = 1.0
*/
void pump_v3_basicCold_t_eqFunction_21(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,21};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[323]] /* plugFlowPipe2.vol_b.dynBal.medium.X[1] variable */) = 1.0;
  threadData->lastEquationSolved = 21;
}

/*
equation index: 22
type: SIMPLE_ASSIGN
plugFlowPipe2.vol_b.dynBal.mWat_flow_internal = 0.0
*/
void pump_v3_basicCold_t_eqFunction_22(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,22};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[317]] /* plugFlowPipe2.vol_b.dynBal.mWat_flow_internal variable */) = 0.0;
  threadData->lastEquationSolved = 22;
}

/*
equation index: 23
type: SIMPLE_ASSIGN
plugFlowPipe2.vol_a.dynBal.medium.X[1] = 1.0
*/
void pump_v3_basicCold_t_eqFunction_23(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,23};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[307]] /* plugFlowPipe2.vol_a.dynBal.medium.X[1] variable */) = 1.0;
  threadData->lastEquationSolved = 23;
}

/*
equation index: 24
type: SIMPLE_ASSIGN
plugFlowPipe2.vol_a.dynBal.mWat_flow_internal = 0.0
*/
void pump_v3_basicCold_t_eqFunction_24(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,24};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[301]] /* plugFlowPipe2.vol_a.dynBal.mWat_flow_internal variable */) = 0.0;
  threadData->lastEquationSolved = 24;
}

/*
equation index: 25
type: SIMPLE_ASSIGN
pump.vol.dynBal.medium.X[1] = 1.0
*/
void pump_v3_basicCold_t_eqFunction_25(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,25};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[422]] /* pump.vol.dynBal.medium.X[1] variable */) = 1.0;
  threadData->lastEquationSolved = 25;
}

/*
equation index: 26
type: SIMPLE_ASSIGN
pump.vol.dynBal.mWat_flow_internal = 0.0
*/
void pump_v3_basicCold_t_eqFunction_26(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,26};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[416]] /* pump.vol.dynBal.mWat_flow_internal variable */) = 0.0;
  threadData->lastEquationSolved = 26;
}

/*
equation index: 27
type: SIMPLE_ASSIGN
pump.preSou.dp_internal = 0.0
*/
void pump_v3_basicCold_t_eqFunction_27(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,27};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[407]] /* pump.preSou.dp_internal variable */) = 0.0;
  threadData->lastEquationSolved = 27;
}

/*
equation index: 28
type: SIMPLE_ASSIGN
pump.senRelPre.port_a.h_outflow = 0.0
*/
void pump_v3_basicCold_t_eqFunction_28(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,28};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[409]] /* pump.senRelPre.port_a.h_outflow variable */) = 0.0;
  threadData->lastEquationSolved = 28;
}

/*
equation index: 29
type: SIMPLE_ASSIGN
pump.senRelPre.port_b.h_outflow = 0.0
*/
void pump_v3_basicCold_t_eqFunction_29(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,29};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[411]] /* pump.senRelPre.port_b.h_outflow variable */) = 0.0;
  threadData->lastEquationSolved = 29;
}

/*
equation index: 30
type: SIMPLE_ASSIGN
pump.eff.r_N = 1.0
*/
void pump_v3_basicCold_t_eqFunction_30(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,30};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[395]] /* pump.eff.r_N variable */) = 1.0;
  threadData->lastEquationSolved = 30;
}

/*
equation index: 31
type: SIMPLE_ASSIGN
plugFlowPipe.vol_b.dynBal.medium.R_s = 0.0
*/
void pump_v3_basicCold_t_eqFunction_31(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,31};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[203]] /* plugFlowPipe.vol_b.dynBal.medium.R_s variable */) = 0.0;
  threadData->lastEquationSolved = 31;
}

/*
equation index: 32
type: SIMPLE_ASSIGN
plugFlowPipe.vol_b.dynBal.medium.MM = 0.018015268
*/
void pump_v3_basicCold_t_eqFunction_32(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,32};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[202]] /* plugFlowPipe.vol_b.dynBal.medium.MM variable */) = 0.018015268;
  threadData->lastEquationSolved = 32;
}

/*
equation index: 33
type: SIMPLE_ASSIGN
plugFlowPipe.vol_a.dynBal.medium.R_s = 0.0
*/
void pump_v3_basicCold_t_eqFunction_33(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,33};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[187]] /* plugFlowPipe.vol_a.dynBal.medium.R_s variable */) = 0.0;
  threadData->lastEquationSolved = 33;
}

/*
equation index: 34
type: SIMPLE_ASSIGN
plugFlowPipe.vol_a.dynBal.medium.MM = 0.018015268
*/
void pump_v3_basicCold_t_eqFunction_34(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,34};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[186]] /* plugFlowPipe.vol_a.dynBal.medium.MM variable */) = 0.018015268;
  threadData->lastEquationSolved = 34;
}

/*
equation index: 35
type: SIMPLE_ASSIGN
plugFlowPipe1.vol_b.dynBal.medium.R_s = 0.0
*/
void pump_v3_basicCold_t_eqFunction_35(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,35};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[261]] /* plugFlowPipe1.vol_b.dynBal.medium.R_s variable */) = 0.0;
  threadData->lastEquationSolved = 35;
}

/*
equation index: 36
type: SIMPLE_ASSIGN
plugFlowPipe1.vol_b.dynBal.medium.MM = 0.018015268
*/
void pump_v3_basicCold_t_eqFunction_36(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,36};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[260]] /* plugFlowPipe1.vol_b.dynBal.medium.MM variable */) = 0.018015268;
  threadData->lastEquationSolved = 36;
}

/*
equation index: 37
type: SIMPLE_ASSIGN
plugFlowPipe1.vol_a.dynBal.medium.R_s = 0.0
*/
void pump_v3_basicCold_t_eqFunction_37(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,37};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[245]] /* plugFlowPipe1.vol_a.dynBal.medium.R_s variable */) = 0.0;
  threadData->lastEquationSolved = 37;
}

/*
equation index: 38
type: SIMPLE_ASSIGN
plugFlowPipe1.vol_a.dynBal.medium.MM = 0.018015268
*/
void pump_v3_basicCold_t_eqFunction_38(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,38};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[244]] /* plugFlowPipe1.vol_a.dynBal.medium.MM variable */) = 0.018015268;
  threadData->lastEquationSolved = 38;
}

/*
equation index: 39
type: SIMPLE_ASSIGN
plugFlowPipe_heat.vol_b.dynBal.medium.R_s = 0.0
*/
void pump_v3_basicCold_t_eqFunction_39(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,39};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[378]] /* plugFlowPipe_heat.vol_b.dynBal.medium.R_s variable */) = 0.0;
  threadData->lastEquationSolved = 39;
}

/*
equation index: 40
type: SIMPLE_ASSIGN
plugFlowPipe_heat.vol_b.dynBal.medium.MM = 0.018015268
*/
void pump_v3_basicCold_t_eqFunction_40(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,40};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[377]] /* plugFlowPipe_heat.vol_b.dynBal.medium.MM variable */) = 0.018015268;
  threadData->lastEquationSolved = 40;
}

/*
equation index: 41
type: SIMPLE_ASSIGN
plugFlowPipe_heat.vol_a.dynBal.medium.R_s = 0.0
*/
void pump_v3_basicCold_t_eqFunction_41(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,41};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[362]] /* plugFlowPipe_heat.vol_a.dynBal.medium.R_s variable */) = 0.0;
  threadData->lastEquationSolved = 41;
}

/*
equation index: 42
type: SIMPLE_ASSIGN
plugFlowPipe_heat.vol_a.dynBal.medium.MM = 0.018015268
*/
void pump_v3_basicCold_t_eqFunction_42(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,42};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[361]] /* plugFlowPipe_heat.vol_a.dynBal.medium.MM variable */) = 0.018015268;
  threadData->lastEquationSolved = 42;
}

/*
equation index: 43
type: SIMPLE_ASSIGN
plugFlowPipe2.vol_b.dynBal.medium.R_s = 0.0
*/
void pump_v3_basicCold_t_eqFunction_43(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,43};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[320]] /* plugFlowPipe2.vol_b.dynBal.medium.R_s variable */) = 0.0;
  threadData->lastEquationSolved = 43;
}

/*
equation index: 44
type: SIMPLE_ASSIGN
plugFlowPipe2.vol_b.dynBal.medium.MM = 0.018015268
*/
void pump_v3_basicCold_t_eqFunction_44(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,44};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[319]] /* plugFlowPipe2.vol_b.dynBal.medium.MM variable */) = 0.018015268;
  threadData->lastEquationSolved = 44;
}

/*
equation index: 45
type: SIMPLE_ASSIGN
plugFlowPipe2.vol_a.dynBal.medium.R_s = 0.0
*/
void pump_v3_basicCold_t_eqFunction_45(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,45};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[304]] /* plugFlowPipe2.vol_a.dynBal.medium.R_s variable */) = 0.0;
  threadData->lastEquationSolved = 45;
}

/*
equation index: 46
type: SIMPLE_ASSIGN
plugFlowPipe2.vol_a.dynBal.medium.MM = 0.018015268
*/
void pump_v3_basicCold_t_eqFunction_46(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,46};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[303]] /* plugFlowPipe2.vol_a.dynBal.medium.MM variable */) = 0.018015268;
  threadData->lastEquationSolved = 46;
}

/*
equation index: 47
type: SIMPLE_ASSIGN
pump.vol.dynBal.medium.R_s = 0.0
*/
void pump_v3_basicCold_t_eqFunction_47(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,47};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[419]] /* pump.vol.dynBal.medium.R_s variable */) = 0.0;
  threadData->lastEquationSolved = 47;
}

/*
equation index: 48
type: SIMPLE_ASSIGN
pump.vol.dynBal.medium.MM = 0.018015268
*/
void pump_v3_basicCold_t_eqFunction_48(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,48};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[418]] /* pump.vol.dynBal.medium.MM variable */) = 0.018015268;
  threadData->lastEquationSolved = 48;
}

/*
equation index: 49
type: SIMPLE_ASSIGN
plugFlowPipe.vol_b.dynBal.mb_flow = 0.0
*/
void pump_v3_basicCold_t_eqFunction_49(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,49};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[201]] /* plugFlowPipe.vol_b.dynBal.mb_flow variable */) = 0.0;
  threadData->lastEquationSolved = 49;
}

/*
equation index: 50
type: SIMPLE_ASSIGN
plugFlowPipe.vol_a.dynBal.mb_flow = 0.0
*/
void pump_v3_basicCold_t_eqFunction_50(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,50};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[185]] /* plugFlowPipe.vol_a.dynBal.mb_flow variable */) = 0.0;
  threadData->lastEquationSolved = 50;
}

/*
equation index: 51
type: SIMPLE_ASSIGN
plugFlowPipe1.vol_b.dynBal.mb_flow = 0.0
*/
void pump_v3_basicCold_t_eqFunction_51(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,51};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[259]] /* plugFlowPipe1.vol_b.dynBal.mb_flow variable */) = 0.0;
  threadData->lastEquationSolved = 51;
}

/*
equation index: 52
type: SIMPLE_ASSIGN
plugFlowPipe1.vol_a.dynBal.mb_flow = 0.0
*/
void pump_v3_basicCold_t_eqFunction_52(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,52};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[243]] /* plugFlowPipe1.vol_a.dynBal.mb_flow variable */) = 0.0;
  threadData->lastEquationSolved = 52;
}

/*
equation index: 53
type: SIMPLE_ASSIGN
plugFlowPipe_heat.vol_b.dynBal.mb_flow = 0.0
*/
void pump_v3_basicCold_t_eqFunction_53(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,53};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[376]] /* plugFlowPipe_heat.vol_b.dynBal.mb_flow variable */) = 0.0;
  threadData->lastEquationSolved = 53;
}

/*
equation index: 54
type: SIMPLE_ASSIGN
plugFlowPipe_heat.vol_a.dynBal.mb_flow = 0.0
*/
void pump_v3_basicCold_t_eqFunction_54(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,54};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[360]] /* plugFlowPipe_heat.vol_a.dynBal.mb_flow variable */) = 0.0;
  threadData->lastEquationSolved = 54;
}

/*
equation index: 55
type: SIMPLE_ASSIGN
plugFlowPipe2.vol_b.dynBal.mb_flow = 0.0
*/
void pump_v3_basicCold_t_eqFunction_55(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,55};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[318]] /* plugFlowPipe2.vol_b.dynBal.mb_flow variable */) = 0.0;
  threadData->lastEquationSolved = 55;
}

/*
equation index: 56
type: SIMPLE_ASSIGN
plugFlowPipe2.vol_a.dynBal.mb_flow = 0.0
*/
void pump_v3_basicCold_t_eqFunction_56(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,56};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[302]] /* plugFlowPipe2.vol_a.dynBal.mb_flow variable */) = 0.0;
  threadData->lastEquationSolved = 56;
}

/*
equation index: 57
type: SIMPLE_ASSIGN
pump.vol.dynBal.mb_flow = 0.0
*/
void pump_v3_basicCold_t_eqFunction_57(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,57};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[417]] /* pump.vol.dynBal.mb_flow variable */) = 0.0;
  threadData->lastEquationSolved = 57;
}

/*
equation index: 58
type: SIMPLE_ASSIGN
plugFlowPipe2.vol_b.dynBal.medium.p_bar = 1e-5 * bou1.p
*/
void pump_v3_basicCold_t_eqFunction_58(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,58};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[325]] /* plugFlowPipe2.vol_b.dynBal.medium.p_bar variable */) = (1e-5) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[50]] /* bou1.p PARAM */));
  threadData->lastEquationSolved = 58;
}

/*
equation index: 59
type: SIMPLE_ASSIGN
plugFlowPipe.vol_a.dynBal.medium.p_bar = 1e-5 * bou1.p
*/
void pump_v3_basicCold_t_eqFunction_59(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,59};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[192]] /* plugFlowPipe.vol_a.dynBal.medium.p_bar variable */) = (1e-5) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[50]] /* bou1.p PARAM */));
  threadData->lastEquationSolved = 59;
}

/*
equation index: 60
type: SIMPLE_ASSIGN
pump.eta = 0.48999999999999994
*/
void pump_v3_basicCold_t_eqFunction_60(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,60};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[398]] /* pump.eta variable */) = 0.48999999999999994;
  threadData->lastEquationSolved = 60;
}
extern void pump_v3_basicCold_t_eqFunction_805(DATA *data, threadData_t *threadData);

extern void pump_v3_basicCold_t_eqFunction_806(DATA *data, threadData_t *threadData);


/*
equation index: 63
type: SIMPLE_ASSIGN
bou1.ports[1].h_outflow = pump_v3_basicCold_t.bou1.Medium.specificEnthalpy(pump_v3_basicCold_t.bou1.Medium.setState_pTX(bou1.p_in_internal, bou1.T, bou1.X_in_internal))
*/
void pump_v3_basicCold_t_eqFunction_63(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,63};
  real_array tmp0;
  real_array_create(&tmp0, ((modelica_real*)&((&data->localData[0]->realVars[data->simulationInfo->realVarsIndex[146]] /* bou1.X_in_internal[1] variable */)[((modelica_integer) 1) - 1])), 1, (_index_t)1);
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[148]] /* bou1.ports[1].h_outflow variable */) = omc_pump__v3__basicCold__t_bou1_Medium_specificEnthalpy(threadData, omc_pump__v3__basicCold__t_bou1_Medium_setState__pTX(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[147]] /* bou1.p_in_internal variable */), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[47]] /* bou1.T PARAM */), tmp0));
  threadData->lastEquationSolved = 63;
}

/*
equation index: 64
type: SIMPLE_ASSIGN
pump.vol.dynBal.U = $START.pump.vol.dynBal.U
*/
void pump_v3_basicCold_t_eqFunction_64(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,64};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[18]] /* pump.vol.dynBal.U STATE(1) */) = ((modelica_real *)((data->modelData->realVarsData[18] /* pump.vol.dynBal.U STATE(1) */).attribute .start.data))[0];
  threadData->lastEquationSolved = 64;
}

/*
equation index: 65
type: SIMPLE_ASSIGN
pump.vol.dynBal.m = 995.586 * pump.vol.dynBal.fluidVolume
*/
void pump_v3_basicCold_t_eqFunction_65(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,65};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[415]] /* pump.vol.dynBal.m DUMMY_STATE */) = (995.586) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[925]] /* pump.vol.dynBal.fluidVolume PARAM */));
  threadData->lastEquationSolved = 65;
}
extern void pump_v3_basicCold_t_eqFunction_889(DATA *data, threadData_t *threadData);

extern void pump_v3_basicCold_t_eqFunction_891(DATA *data, threadData_t *threadData);

extern void pump_v3_basicCold_t_eqFunction_892(DATA *data, threadData_t *threadData);


/*
equation index: 69
type: SIMPLE_ASSIGN
plugFlowPipe2.vol_a.dynBal.m = 995.586 * plugFlowPipe2.vol_a.dynBal.fluidVolume
*/
void pump_v3_basicCold_t_eqFunction_69(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,69};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[300]] /* plugFlowPipe2.vol_a.dynBal.m DUMMY_STATE */) = (995.586) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[486]] /* plugFlowPipe2.vol_a.dynBal.fluidVolume PARAM */));
  threadData->lastEquationSolved = 69;
}

/*
equation index: 70
type: SIMPLE_ASSIGN
plugFlowPipe2.vol_b.dynBal.m = 995.586 * plugFlowPipe2.vol_b.dynBal.fluidVolume
*/
void pump_v3_basicCold_t_eqFunction_70(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,70};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[316]] /* plugFlowPipe2.vol_b.dynBal.m DUMMY_STATE */) = (995.586) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[511]] /* plugFlowPipe2.vol_b.dynBal.fluidVolume PARAM */));
  threadData->lastEquationSolved = 70;
}

/*
equation index: 71
type: SIMPLE_ASSIGN
plugFlowPipe_heat.vol_a.dynBal.m = 995.586 * plugFlowPipe_heat.vol_a.dynBal.fluidVolume
*/
void pump_v3_basicCold_t_eqFunction_71(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,71};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[358]] /* plugFlowPipe_heat.vol_a.dynBal.m DUMMY_STATE */) = (995.586) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[636]] /* plugFlowPipe_heat.vol_a.dynBal.fluidVolume PARAM */));
  threadData->lastEquationSolved = 71;
}

/*
equation index: 72
type: SIMPLE_ASSIGN
plugFlowPipe_heat.vol_b.dynBal.m = 995.586 * plugFlowPipe_heat.vol_b.dynBal.fluidVolume
*/
void pump_v3_basicCold_t_eqFunction_72(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,72};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[374]] /* plugFlowPipe_heat.vol_b.dynBal.m DUMMY_STATE */) = (995.586) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[661]] /* plugFlowPipe_heat.vol_b.dynBal.fluidVolume PARAM */));
  threadData->lastEquationSolved = 72;
}

/*
equation index: 73
type: SIMPLE_ASSIGN
plugFlowPipe1.vol_a.dynBal.m = 995.586 * plugFlowPipe1.vol_a.dynBal.fluidVolume
*/
void pump_v3_basicCold_t_eqFunction_73(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,73};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[241]] /* plugFlowPipe1.vol_a.dynBal.m DUMMY_STATE */) = (995.586) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[337]] /* plugFlowPipe1.vol_a.dynBal.fluidVolume PARAM */));
  threadData->lastEquationSolved = 73;
}

/*
equation index: 74
type: SIMPLE_ASSIGN
plugFlowPipe1.vol_b.dynBal.m = 995.586 * plugFlowPipe1.vol_b.dynBal.fluidVolume
*/
void pump_v3_basicCold_t_eqFunction_74(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,74};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[257]] /* plugFlowPipe1.vol_b.dynBal.m DUMMY_STATE */) = (995.586) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[362]] /* plugFlowPipe1.vol_b.dynBal.fluidVolume PARAM */));
  threadData->lastEquationSolved = 74;
}

/*
equation index: 75
type: SIMPLE_ASSIGN
plugFlowPipe.vol_a.dynBal.m = 995.586 * plugFlowPipe.vol_a.dynBal.fluidVolume
*/
void pump_v3_basicCold_t_eqFunction_75(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,75};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[183]] /* plugFlowPipe.vol_a.dynBal.m DUMMY_STATE */) = (995.586) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[187]] /* plugFlowPipe.vol_a.dynBal.fluidVolume PARAM */));
  threadData->lastEquationSolved = 75;
}

/*
equation index: 76
type: SIMPLE_ASSIGN
plugFlowPipe.vol_b.dynBal.m = 995.586 * plugFlowPipe.vol_b.dynBal.fluidVolume
*/
void pump_v3_basicCold_t_eqFunction_76(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,76};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[199]] /* plugFlowPipe.vol_b.dynBal.m DUMMY_STATE */) = (995.586) * ((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[219]] /* plugFlowPipe.vol_b.dynBal.fluidVolume PARAM */));
  threadData->lastEquationSolved = 76;
}

/*
equation index: 77
type: SIMPLE_ASSIGN
SenTempIn_cold.T = T_init
*/
void pump_v3_basicCold_t_eqFunction_77(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,77};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[140]] /* SenTempIn_cold.T variable */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[39]] /* T_init PARAM */);
  threadData->lastEquationSolved = 77;
}

/*
equation index: 78
type: SIMPLE_ASSIGN
senTemIn_heat.T = T_init
*/
void pump_v3_basicCold_t_eqFunction_78(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,78};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[19]] /* senTemIn_heat.T STATE(1) */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[39]] /* T_init PARAM */);
  threadData->lastEquationSolved = 78;
}

/*
equation index: 79
type: SIMPLE_ASSIGN
senTemOut_heat.T = T_init
*/
void pump_v3_basicCold_t_eqFunction_79(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,79};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[20]] /* senTemOut_heat.T STATE(1) */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[39]] /* T_init PARAM */);
  threadData->lastEquationSolved = 79;
}

/*
equation index: 80
type: SIMPLE_ASSIGN
Water_Reserv.T = T_water
*/
void pump_v3_basicCold_t_eqFunction_80(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,80};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[0]] /* Water_Reserv.T STATE(1,Water_Reserv.der_T) */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[40]] /* T_water PARAM */);
  threadData->lastEquationSolved = 80;
}
extern void pump_v3_basicCold_t_eqFunction_861(DATA *data, threadData_t *threadData);

extern void pump_v3_basicCold_t_eqFunction_862(DATA *data, threadData_t *threadData);


/*
equation index: 83
type: SIMPLE_ASSIGN
pump.motSpe.y = 0.114
*/
void pump_v3_basicCold_t_eqFunction_83(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,83};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[17]] /* pump.motSpe.y STATE(1) */) = 0.114;
  threadData->lastEquationSolved = 83;
}
extern void pump_v3_basicCold_t_eqFunction_902(DATA *data, threadData_t *threadData);

extern void pump_v3_basicCold_t_eqFunction_903(DATA *data, threadData_t *threadData);

extern void pump_v3_basicCold_t_eqFunction_901(DATA *data, threadData_t *threadData);

extern void pump_v3_basicCold_t_eqFunction_900(DATA *data, threadData_t *threadData);

extern void pump_v3_basicCold_t_eqFunction_899(DATA *data, threadData_t *threadData);

extern void pump_v3_basicCold_t_eqFunction_898(DATA *data, threadData_t *threadData);

extern void pump_v3_basicCold_t_eqFunction_896(DATA *data, threadData_t *threadData);

extern void pump_v3_basicCold_t_eqFunction_897(DATA *data, threadData_t *threadData);


/*
equation index: 92
type: SIMPLE_ASSIGN
pump.vol.dynBal.ports_H_flow[2] = semiLinear(-pump.motSpe.y, pump.port_b.h_outflow, pump.port_b.h_outflow)
*/
void pump_v3_basicCold_t_eqFunction_92(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,92};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[426]] /* pump.vol.dynBal.ports_H_flow[2] variable */) = semiLinear((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[17]] /* pump.motSpe.y STATE(1) */)), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[404]] /* pump.port_b.h_outflow variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[404]] /* pump.port_b.h_outflow variable */));
  threadData->lastEquationSolved = 92;
}
extern void pump_v3_basicCold_t_eqFunction_866(DATA *data, threadData_t *threadData);

extern void pump_v3_basicCold_t_eqFunction_867(DATA *data, threadData_t *threadData);


/*
equation index: 95
type: SIMPLE_ASSIGN
plugFlowPipe2.res.dp = homotopy(IDEAS.Fluid.BaseClasses.FlowModels.basicFlowFunction_m_flow(pump.motSpe.y, 0.005944029623871306, 0.04963716392671873), 3226.583591758837 * pump.motSpe.y)
*/
void pump_v3_basicCold_t_eqFunction_95(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,95};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[289]] /* plugFlowPipe2.res.dp variable */) = homotopy(omc_IDEAS_Fluid_BaseClasses_FlowModels_basicFlowFunction__m__flow(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[17]] /* pump.motSpe.y STATE(1) */), 0.005944029623871306, 0.04963716392671873), (3226.583591758837) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[17]] /* pump.motSpe.y STATE(1) */)));
  threadData->lastEquationSolved = 95;
}

/*
equation index: 96
type: SIMPLE_ASSIGN
plugFlowPipe2.port_a.p = bou1.p + plugFlowPipe2.res.dp
*/
void pump_v3_basicCold_t_eqFunction_96(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,96};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[287]] /* plugFlowPipe2.port_a.p variable */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[50]] /* bou1.p PARAM */) + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[289]] /* plugFlowPipe2.res.dp variable */);
  threadData->lastEquationSolved = 96;
}
extern void pump_v3_basicCold_t_eqFunction_915(DATA *data, threadData_t *threadData);

extern void pump_v3_basicCold_t_eqFunction_916(DATA *data, threadData_t *threadData);


/*
equation index: 99
type: SIMPLE_ASSIGN
senTemOut_heat.T_b_inflow = pump_v3_basicCold_t.senTemOut_heat.Medium.temperature(pump_v3_basicCold_t.senTemOut_heat.Medium.setState_phX(plugFlowPipe2.port_a.p, pump.port_b.h_outflow, {}))
*/
void pump_v3_basicCold_t_eqFunction_99(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,99};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[441]] /* senTemOut_heat.T_b_inflow variable */) = omc_pump__v3__basicCold__t_senTemOut__heat_Medium_temperature(threadData, omc_pump__v3__basicCold__t_senTemOut__heat_Medium_setState__phX(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[287]] /* plugFlowPipe2.port_a.p variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[404]] /* pump.port_b.h_outflow variable */), _OMC_LIT57));
  threadData->lastEquationSolved = 99;
}
extern void pump_v3_basicCold_t_eqFunction_859(DATA *data, threadData_t *threadData);

extern void pump_v3_basicCold_t_eqFunction_860(DATA *data, threadData_t *threadData);

extern void pump_v3_basicCold_t_eqFunction_921(DATA *data, threadData_t *threadData);

extern void pump_v3_basicCold_t_eqFunction_922(DATA *data, threadData_t *threadData);

extern void pump_v3_basicCold_t_eqFunction_844(DATA *data, threadData_t *threadData);

extern void pump_v3_basicCold_t_eqFunction_845(DATA *data, threadData_t *threadData);


/*
equation index: 106
type: SIMPLE_ASSIGN
plugFlowPipe_heat.dp = homotopy(IDEAS.Fluid.BaseClasses.FlowModels.basicFlowFunction_m_flow(pump.motSpe.y, 0.004853279864824038, 0.04963716392671873), 4839.875387638256 * pump.motSpe.y)
*/
void pump_v3_basicCold_t_eqFunction_106(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,106};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[333]] /* plugFlowPipe_heat.dp variable */) = homotopy(omc_IDEAS_Fluid_BaseClasses_FlowModels_basicFlowFunction__m__flow(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[17]] /* pump.motSpe.y STATE(1) */), 0.004853279864824038, 0.04963716392671873), (4839.875387638256) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[17]] /* pump.motSpe.y STATE(1) */)));
  threadData->lastEquationSolved = 106;
}
extern void pump_v3_basicCold_t_eqFunction_841(DATA *data, threadData_t *threadData);

extern void pump_v3_basicCold_t_eqFunction_842(DATA *data, threadData_t *threadData);

extern void pump_v3_basicCold_t_eqFunction_826(DATA *data, threadData_t *threadData);

extern void pump_v3_basicCold_t_eqFunction_827(DATA *data, threadData_t *threadData);


/*
equation index: 111
type: SIMPLE_ASSIGN
plugFlowPipe1.dp = homotopy(IDEAS.Fluid.BaseClasses.FlowModels.basicFlowFunction_m_flow(pump.motSpe.y, 0.005944029623871306, 0.04963716392671873), 3226.583591758837 * pump.motSpe.y)
*/
void pump_v3_basicCold_t_eqFunction_111(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,111};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[217]] /* plugFlowPipe1.dp variable */) = homotopy(omc_IDEAS_Fluid_BaseClasses_FlowModels_basicFlowFunction__m__flow(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[17]] /* pump.motSpe.y STATE(1) */), 0.005944029623871306, 0.04963716392671873), (3226.583591758837) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[17]] /* pump.motSpe.y STATE(1) */)));
  threadData->lastEquationSolved = 111;
}

/*
equation index: 112
type: SIMPLE_ASSIGN
SenTempIn_cold.T_b_inflow = SenTempIn_cold.T - Modelica.Fluid.Utilities.regStep(pump.motSpe.y, 0.0, 0.0, SenTempIn_cold.m_flow_small)
*/
void pump_v3_basicCold_t_eqFunction_112(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,112};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[141]] /* SenTempIn_cold.T_b_inflow variable */) = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[140]] /* SenTempIn_cold.T variable */) - omc_Modelica_Fluid_Utilities_regStep(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[17]] /* pump.motSpe.y STATE(1) */), 0.0, 0.0, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[27]] /* SenTempIn_cold.m_flow_small PARAM */));
  threadData->lastEquationSolved = 112;
}

/*
equation index: 113
type: SIMPLE_ASSIGN
senMasFlo.port_a.h_outflow = 4184.0 * (SenTempIn_cold.T_b_inflow - pump_v3_basicCold_t.SenTempIn_cold.Medium.temperature(pump_v3_basicCold_t.SenTempIn_cold.Medium.setState_phX(bou1.p, 0.0, {})))
*/
void pump_v3_basicCold_t_eqFunction_113(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,113};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[429]] /* senMasFlo.port_a.h_outflow variable */) = (4184.0) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[141]] /* SenTempIn_cold.T_b_inflow variable */) - omc_pump__v3__basicCold__t_SenTempIn__cold_Medium_temperature(threadData, omc_pump__v3__basicCold__t_SenTempIn__cold_Medium_setState__phX(threadData, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[50]] /* bou1.p PARAM */), 0.0, _OMC_LIT57)));
  threadData->lastEquationSolved = 113;
}

/*
equation index: 114
type: SIMPLE_ASSIGN
plugFlowPipe2.port_b.h_outflow = (senMasFlo.port_a.h_outflow * (1e-7 + max(pump.motSpe.y, 1e-7)) - bou1.ports[1].h_outflow * 1e-7) / max(pump.motSpe.y, 1e-7)
*/
void pump_v3_basicCold_t_eqFunction_114(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,114};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[288]] /* plugFlowPipe2.port_b.h_outflow variable */) = DIVISION_SIM(((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[429]] /* senMasFlo.port_a.h_outflow variable */)) * (1e-7 + fmax((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[17]] /* pump.motSpe.y STATE(1) */),1e-7)) - (((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[148]] /* bou1.ports[1].h_outflow variable */)) * (1e-7)),fmax((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[17]] /* pump.motSpe.y STATE(1) */),1e-7),"max(pump.motSpe.y, 1e-7)",equationIndexes);
  threadData->lastEquationSolved = 114;
}
extern void pump_v3_basicCold_t_eqFunction_875(DATA *data, threadData_t *threadData);


/*
equation index: 116
type: SIMPLE_ASSIGN
plugFlowPipe2.vol_b.dynBal.ports_H_flow[2] = semiLinear(-pump.motSpe.y, plugFlowPipe2.port_b.h_outflow, plugFlowPipe2.port_b.h_outflow)
*/
void pump_v3_basicCold_t_eqFunction_116(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,116};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[327]] /* plugFlowPipe2.vol_b.dynBal.ports_H_flow[2] variable */) = semiLinear((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[17]] /* pump.motSpe.y STATE(1) */)), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[288]] /* plugFlowPipe2.port_b.h_outflow variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[288]] /* plugFlowPipe2.port_b.h_outflow variable */));
  threadData->lastEquationSolved = 116;
}

/*
equation index: 117
type: SIMPLE_ASSIGN
plugFlowPipe2.vol_b.dynBal.U = plugFlowPipe2.vol_b.dynBal.m * plugFlowPipe2.port_b.h_outflow
*/
void pump_v3_basicCold_t_eqFunction_117(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,117};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[12]] /* plugFlowPipe2.vol_b.dynBal.U STATE(1) */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[316]] /* plugFlowPipe2.vol_b.dynBal.m DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[288]] /* plugFlowPipe2.port_b.h_outflow variable */));
  threadData->lastEquationSolved = 117;
}
extern void pump_v3_basicCold_t_eqFunction_878(DATA *data, threadData_t *threadData);

extern void pump_v3_basicCold_t_eqFunction_879(DATA *data, threadData_t *threadData);

extern void pump_v3_basicCold_t_eqFunction_808(DATA *data, threadData_t *threadData);

extern void pump_v3_basicCold_t_eqFunction_809(DATA *data, threadData_t *threadData);


/*
equation index: 122
type: SIMPLE_ASSIGN
plugFlowPipe.res.dp = homotopy(IDEAS.Fluid.BaseClasses.FlowModels.basicFlowFunction_m_flow(pump.motSpe.y, 0.005944029623871306, 0.04963716392671873), 3226.583591758837 * pump.motSpe.y)
*/
void pump_v3_basicCold_t_eqFunction_122(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,122};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[172]] /* plugFlowPipe.res.dp variable */) = homotopy(omc_IDEAS_Fluid_BaseClasses_FlowModels_basicFlowFunction__m__flow(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[17]] /* pump.motSpe.y STATE(1) */), 0.005944029623871306, 0.04963716392671873), (3226.583591758837) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[17]] /* pump.motSpe.y STATE(1) */)));
  threadData->lastEquationSolved = 122;
}

/*
equation index: 123
type: SIMPLE_ASSIGN
plugFlowPipe1.port_a.p = bou1.p - plugFlowPipe.res.dp
*/
void pump_v3_basicCold_t_eqFunction_123(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,123};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[230]] /* plugFlowPipe1.port_a.p variable */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[50]] /* bou1.p PARAM */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[172]] /* plugFlowPipe.res.dp variable */);
  threadData->lastEquationSolved = 123;
}
extern void pump_v3_basicCold_t_eqFunction_949(DATA *data, threadData_t *threadData);

extern void pump_v3_basicCold_t_eqFunction_987(DATA *data, threadData_t *threadData);

extern void pump_v3_basicCold_t_eqFunction_1018(DATA *data, threadData_t *threadData);

extern void pump_v3_basicCold_t_eqFunction_988(DATA *data, threadData_t *threadData);


/*
equation index: 128
type: SIMPLE_ASSIGN
pump.preSou.V_flow = pump.motSpe.y / Modelica.Fluid.Utilities.regStep(pump.motSpe.y, pump_v3_basicCold_t.pump.preSou.Medium.density(pump_v3_basicCold_t.pump.preSou.Medium.setState_phX(pump.port_a.p, pump.port_b.h_outflow, {})), pump_v3_basicCold_t.pump.preSou.Medium.density(pump_v3_basicCold_t.pump.preSou.Medium.setState_phX(plugFlowPipe2.port_a.p, pump.port_b.h_outflow, {})), pump.preSou.m_flow_small)
*/
void pump_v3_basicCold_t_eqFunction_128(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,128};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[406]] /* pump.preSou.V_flow variable */) = DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[17]] /* pump.motSpe.y STATE(1) */),omc_Modelica_Fluid_Utilities_regStep(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[17]] /* pump.motSpe.y STATE(1) */), omc_pump__v3__basicCold__t_pump_preSou_Medium_density(threadData, omc_pump__v3__basicCold__t_pump_preSou_Medium_setState__phX(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[403]] /* pump.port_a.p variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[404]] /* pump.port_b.h_outflow variable */), _OMC_LIT57)), omc_pump__v3__basicCold__t_pump_preSou_Medium_density(threadData, omc_pump__v3__basicCold__t_pump_preSou_Medium_setState__phX(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[287]] /* plugFlowPipe2.port_a.p variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[404]] /* pump.port_b.h_outflow variable */), _OMC_LIT57)), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[906]] /* pump.preSou.m_flow_small PARAM */)),"Modelica.Fluid.Utilities.regStep(pump.motSpe.y, pump_v3_basicCold_t.pump.preSou.Medium.density(pump_v3_basicCold_t.pump.preSou.Medium.setState_phX(pump.port_a.p, pump.port_b.h_outflow, {})), pump_v3_basicCold_t.pump.preSou.Medium.density(pump_v3_basicCold_t.pump.preSou.Medium.setState_phX(plugFlowPipe2.port_a.p, pump.port_b.h_outflow, {})), pump.preSou.m_flow_small)",equationIndexes);
  threadData->lastEquationSolved = 128;
}
extern void pump_v3_basicCold_t_eqFunction_998(DATA *data, threadData_t *threadData);

extern void pump_v3_basicCold_t_eqFunction_1003(DATA *data, threadData_t *threadData);

extern void pump_v3_basicCold_t_eqFunction_1004(DATA *data, threadData_t *threadData);

extern void pump_v3_basicCold_t_eqFunction_989(DATA *data, threadData_t *threadData);

extern void pump_v3_basicCold_t_eqFunction_990(DATA *data, threadData_t *threadData);

extern void pump_v3_basicCold_t_eqFunction_992(DATA *data, threadData_t *threadData);

extern void pump_v3_basicCold_t_eqFunction_993(DATA *data, threadData_t *threadData);

extern void pump_v3_basicCold_t_eqFunction_991(DATA *data, threadData_t *threadData);

extern void pump_v3_basicCold_t_eqFunction_995(DATA *data, threadData_t *threadData);


/*
equation index: 138
type: SIMPLE_ASSIGN
pump.PToMed.u1 = homotopy(smooth(1, if noEvent(abs(pump.VMachine_flow) + -4.5802170781831e-7 > 2.29010853909155e-7) then pump.heaDis.QThe_flow else if noEvent(abs(pump.VMachine_flow) + -4.5802170781831e-7 < -2.29010853909155e-7) then 0.0 else 0.25 * (2.0 - 4.366605263157895e6 * abs(pump.VMachine_flow)) * ((4.366605263157895e6 * abs(pump.VMachine_flow) + -2.0) ^ 2.0 - 3.0) * pump.heaDis.QThe_flow + 0.5 * pump.heaDis.QThe_flow), 0.0)
*/
void pump_v3_basicCold_t_eqFunction_138(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,138};
  modelica_boolean tmp1;
  modelica_boolean tmp2;
  modelica_real tmp3;
  modelica_boolean tmp4;
  modelica_real tmp5;
  modelica_boolean tmp6;
  modelica_real tmp7;
  tmp1 = Greater(fabs((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[389]] /* pump.VMachine_flow variable */)) + -4.5802170781831e-7,2.29010853909155e-7);
  tmp6 = (modelica_boolean)tmp1;
  if(tmp6)
  {
    tmp7 = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[399]] /* pump.heaDis.QThe_flow variable */);
  }
  else
  {
    tmp2 = Less(fabs((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[389]] /* pump.VMachine_flow variable */)) + -4.5802170781831e-7,-2.29010853909155e-7);
    tmp4 = (modelica_boolean)tmp2;
    if(tmp4)
    {
      tmp5 = 0.0;
    }
    else
    {
      tmp3 = (4.366605263157895e6) * (fabs((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[389]] /* pump.VMachine_flow variable */))) + -2.0;
      tmp5 = (0.25) * (((2.0 - ((4.366605263157895e6) * (fabs((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[389]] /* pump.VMachine_flow variable */))))) * ((tmp3 * tmp3) - 3.0)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[399]] /* pump.heaDis.QThe_flow variable */))) + (0.5) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[399]] /* pump.heaDis.QThe_flow variable */));
    }
    tmp7 = tmp5;
  }
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[388]] /* pump.PToMed.u1 variable */) = homotopy(tmp7, 0.0);
  threadData->lastEquationSolved = 138;
}
extern void pump_v3_basicCold_t_eqFunction_997(DATA *data, threadData_t *threadData);

extern void pump_v3_basicCold_t_eqFunction_1005(DATA *data, threadData_t *threadData);

extern void pump_v3_basicCold_t_eqFunction_994(DATA *data, threadData_t *threadData);

extern void pump_v3_basicCold_t_eqFunction_948(DATA *data, threadData_t *threadData);

extern void pump_v3_basicCold_t_eqFunction_947(DATA *data, threadData_t *threadData);


/*
equation index: 144
type: SIMPLE_ASSIGN
plugFlowPipe2.vol_a.dynBal.medium.T = plugFlowPipe2.vol_a.dynBal.T_start
*/
void pump_v3_basicCold_t_eqFunction_144(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,144};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[305]] /* plugFlowPipe2.vol_a.dynBal.medium.T variable */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[483]] /* plugFlowPipe2.vol_a.dynBal.T_start PARAM */);
  threadData->lastEquationSolved = 144;
}

/*
equation index: 145
type: SIMPLE_ASSIGN
plugFlowPipe2.vol_a.dynBal.medium.T_degC = -273.15 + plugFlowPipe2.vol_a.dynBal.medium.T
*/
void pump_v3_basicCold_t_eqFunction_145(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,145};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[306]] /* plugFlowPipe2.vol_a.dynBal.medium.T_degC variable */) = -273.15 + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[305]] /* plugFlowPipe2.vol_a.dynBal.medium.T variable */);
  threadData->lastEquationSolved = 145;
}

/*
equation index: 146
type: SIMPLE_ASSIGN
plugFlowPipe2.port_a.h_outflow = 4184.0 * plugFlowPipe2.vol_a.dynBal.medium.T_degC
*/
void pump_v3_basicCold_t_eqFunction_146(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,146};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[286]] /* plugFlowPipe2.port_a.h_outflow variable */) = (4184.0) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[306]] /* plugFlowPipe2.vol_a.dynBal.medium.T_degC variable */));
  threadData->lastEquationSolved = 146;
}
extern void pump_v3_basicCold_t_eqFunction_923(DATA *data, threadData_t *threadData);


/*
equation index: 148
type: SIMPLE_ASSIGN
plugFlowPipe2.del.V_flow = pump.motSpe.y / Modelica.Fluid.Utilities.regStep(pump.motSpe.y, pump_v3_basicCold_t.plugFlowPipe2.del.Medium.density(pump_v3_basicCold_t.plugFlowPipe2.del.Medium.setState_phX(bou1.p, plugFlowPipe2.port_a.h_outflow, {})), pump_v3_basicCold_t.plugFlowPipe2.del.Medium.density(pump_v3_basicCold_t.plugFlowPipe2.del.Medium.setState_phX(bou1.p, plugFlowPipe2.port_b.h_outflow, {})), plugFlowPipe2.del.m_flow_small)
*/
void pump_v3_basicCold_t_eqFunction_148(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,148};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[271]] /* plugFlowPipe2.del.V_flow variable */) = DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[17]] /* pump.motSpe.y STATE(1) */),omc_Modelica_Fluid_Utilities_regStep(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[17]] /* pump.motSpe.y STATE(1) */), omc_pump__v3__basicCold__t_plugFlowPipe2_del_Medium_density(threadData, omc_pump__v3__basicCold__t_plugFlowPipe2_del_Medium_setState__phX(threadData, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[50]] /* bou1.p PARAM */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[286]] /* plugFlowPipe2.port_a.h_outflow variable */), _OMC_LIT57)), omc_pump__v3__basicCold__t_plugFlowPipe2_del_Medium_density(threadData, omc_pump__v3__basicCold__t_plugFlowPipe2_del_Medium_setState__phX(threadData, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[50]] /* bou1.p PARAM */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[288]] /* plugFlowPipe2.port_b.h_outflow variable */), _OMC_LIT57)), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[399]] /* plugFlowPipe2.del.m_flow_small PARAM */)),"Modelica.Fluid.Utilities.regStep(pump.motSpe.y, pump_v3_basicCold_t.plugFlowPipe2.del.Medium.density(pump_v3_basicCold_t.plugFlowPipe2.del.Medium.setState_phX(bou1.p, plugFlowPipe2.port_a.h_outflow, {})), pump_v3_basicCold_t.plugFlowPipe2.del.Medium.density(pump_v3_basicCold_t.plugFlowPipe2.del.Medium.setState_phX(bou1.p, plugFlowPipe2.port_b.h_outflow, {})), plugFlowPipe2.del.m_flow_small)",equationIndexes);
  threadData->lastEquationSolved = 148;
}
extern void pump_v3_basicCold_t_eqFunction_885(DATA *data, threadData_t *threadData);

extern void pump_v3_basicCold_t_eqFunction_886(DATA *data, threadData_t *threadData);

extern void pump_v3_basicCold_t_eqFunction_893(DATA *data, threadData_t *threadData);


/*
equation index: 152
type: SIMPLE_ASSIGN
plugFlowPipe2.vol_a.dynBal.U = plugFlowPipe2.vol_a.dynBal.m * plugFlowPipe2.port_a.h_outflow
*/
void pump_v3_basicCold_t_eqFunction_152(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,152};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[11]] /* plugFlowPipe2.vol_a.dynBal.U STATE(1) */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[300]] /* plugFlowPipe2.vol_a.dynBal.m DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[286]] /* plugFlowPipe2.port_a.h_outflow variable */));
  threadData->lastEquationSolved = 152;
}

/*
equation index: 153
type: SIMPLE_ASSIGN
plugFlowPipe2.heaLos_a.T_a_inflow = pump_v3_basicCold_t.plugFlowPipe2.heaLos_a.Medium.temperature(pump_v3_basicCold_t.plugFlowPipe2.heaLos_a.Medium.setState_phX(plugFlowPipe2.port_a.p, plugFlowPipe2.port_a.h_outflow, {}))
*/
void pump_v3_basicCold_t_eqFunction_153(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,153};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[275]] /* plugFlowPipe2.heaLos_a.T_a_inflow variable */) = omc_pump__v3__basicCold__t_plugFlowPipe2_heaLos__a_Medium_temperature(threadData, omc_pump__v3__basicCold__t_plugFlowPipe2_heaLos__a_Medium_setState__phX(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[287]] /* plugFlowPipe2.port_a.p variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[286]] /* plugFlowPipe2.port_a.h_outflow variable */), _OMC_LIT57));
  threadData->lastEquationSolved = 153;
}

/*
equation index: 154
type: SIMPLE_ASSIGN
plugFlowPipe2.timDel.x = 0.0
*/
void pump_v3_basicCold_t_eqFunction_154(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,154};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[10]] /* plugFlowPipe2.timDel.x STATE(1,plugFlowPipe2.timDel.u) */) = 0.0;
  threadData->lastEquationSolved = 154;
}

/*
equation index: 155
type: ALGORITHM

  (plugFlowPipe2.timDel.time_out_rev, plugFlowPipe2.timDel.time_out_des) := spatialDistribution(7, time, time, plugFlowPipe2.timDel.x, plugFlowPipe2.timDel.u >= 0.0, {0.0, 1.0}, {plugFlowPipe2.timDel.t0, plugFlowPipe2.timDel.t0 + plugFlowPipe2.timDel.t_out_start});
*/
void pump_v3_basicCold_t_eqFunction_155(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,155};
  modelica_real tmp8;
  modelica_boolean tmp9;
  tmp9 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[296]] /* plugFlowPipe2.timDel.u variable */),0.0);
  tmp8 = spatialDistribution(data, threadData, 7 /* index */, data->localData[0]->timeValue, data->localData[0]->timeValue, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[10]] /* plugFlowPipe2.timDel.x STATE(1,plugFlowPipe2.timDel.u) */), tmp9 ,&(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[294]] /* plugFlowPipe2.timDel.time_out_des variable */));
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[295]] /* plugFlowPipe2.timDel.time_out_rev variable */) = tmp8;
  threadData->lastEquationSolved = 155;
}
extern void pump_v3_basicCold_t_eqFunction_869(DATA *data, threadData_t *threadData);

extern void pump_v3_basicCold_t_eqFunction_871(DATA *data, threadData_t *threadData);


/*
equation index: 158
type: SIMPLE_ASSIGN
plugFlowPipe2.del.x = 0.0
*/
void pump_v3_basicCold_t_eqFunction_158(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,158};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[9]] /* plugFlowPipe2.del.x STATE(1,plugFlowPipe2.v) */) = 0.0;
  threadData->lastEquationSolved = 158;
}

/*
equation index: 159
type: ALGORITHM

  (plugFlowPipe2.del.port_a.h_outflow, plugFlowPipe2.del.port_b.h_outflow) := spatialDistribution(6, plugFlowPipe2.port_a.h_outflow, plugFlowPipe2.port_b.h_outflow, plugFlowPipe2.del.x, plugFlowPipe2.v >= 0.0, {0.0, 1.0}, {plugFlowPipe2.del.h_ini_in, plugFlowPipe2.del.h_ini_out});
*/
void pump_v3_basicCold_t_eqFunction_159(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,159};
  modelica_real tmp10;
  modelica_boolean tmp11;
  tmp11 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[297]] /* plugFlowPipe2.v variable */),0.0);
  tmp10 = spatialDistribution(data, threadData, 6 /* index */, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[286]] /* plugFlowPipe2.port_a.h_outflow variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[288]] /* plugFlowPipe2.port_b.h_outflow variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[9]] /* plugFlowPipe2.del.x STATE(1,plugFlowPipe2.v) */), tmp11 ,&(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[273]] /* plugFlowPipe2.del.port_b.h_outflow variable */));
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[272]] /* plugFlowPipe2.del.port_a.h_outflow variable */) = tmp10;
  threadData->lastEquationSolved = 159;
}

/*
equation index: 160
type: SIMPLE_ASSIGN
plugFlowPipe2.heaLos_b.T_a_inflow = pump_v3_basicCold_t.plugFlowPipe2.heaLos_b.Medium.temperature(pump_v3_basicCold_t.plugFlowPipe2.heaLos_b.Medium.setState_phX(bou1.p, plugFlowPipe2.del.port_b.h_outflow, {}))
*/
void pump_v3_basicCold_t_eqFunction_160(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,160};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[280]] /* plugFlowPipe2.heaLos_b.T_a_inflow variable */) = omc_pump__v3__basicCold__t_plugFlowPipe2_heaLos__b_Medium_temperature(threadData, omc_pump__v3__basicCold__t_plugFlowPipe2_heaLos__b_Medium_setState__phX(threadData, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[50]] /* bou1.p PARAM */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[273]] /* plugFlowPipe2.del.port_b.h_outflow variable */), _OMC_LIT57));
  threadData->lastEquationSolved = 160;
}

void pump_v3_basicCold_t_eqFunction_161(DATA*, threadData_t*);
void pump_v3_basicCold_t_eqFunction_162(DATA*, threadData_t*);
void pump_v3_basicCold_t_eqFunction_163(DATA*, threadData_t*);
void pump_v3_basicCold_t_eqFunction_164(DATA*, threadData_t*);
void pump_v3_basicCold_t_eqFunction_165(DATA*, threadData_t*);
void pump_v3_basicCold_t_eqFunction_166(DATA*, threadData_t*);
void pump_v3_basicCold_t_eqFunction_167(DATA*, threadData_t*);
/*
equation index: 168
indexNonlinear: 0
type: NONLINEAR

vars: {plugFlowPipe2.heatPort.T}
eqns: {161, 162, 163, 164, 165, 166, 167}
*/
void pump_v3_basicCold_t_eqFunction_168(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,168};
  int retValue;
  infoStreamPrint(OMC_LOG_DT, 0, "Solving nonlinear system 168 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
  /* get old value */
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[0] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[285]] /* plugFlowPipe2.heatPort.T variable */);
  retValue = solve_nonlinear_system(data, threadData, 0);
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,168};
    throwStreamPrintWithEquationIndexes(threadData, omc_dummyFileInfo, indexes, "Solving non-linear system 168 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
  }
  /* write solution */
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[285]] /* plugFlowPipe2.heatPort.T variable */) = data->simulationInfo->nonlinearSystemData[0].nlsx[0];
  threadData->lastEquationSolved = 168;
}

/*
equation index: 169
type: SIMPLE_ASSIGN
plugFlowPipe2.heaLos_a.port_b.h_outflow = pump_v3_basicCold_t.plugFlowPipe2.heaLos_a.Medium.specificEnthalpy(pump_v3_basicCold_t.plugFlowPipe2.heaLos_a.Medium.setState_pTX(plugFlowPipe2.port_a.p, plugFlowPipe2.heaLos_a.T_b_outflow, {}))
*/
void pump_v3_basicCold_t_eqFunction_169(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,169};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[279]] /* plugFlowPipe2.heaLos_a.port_b.h_outflow variable */) = omc_pump__v3__basicCold__t_plugFlowPipe2_heaLos__a_Medium_specificEnthalpy(threadData, omc_pump__v3__basicCold__t_plugFlowPipe2_heaLos__a_Medium_setState__pTX(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[287]] /* plugFlowPipe2.port_a.p variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[276]] /* plugFlowPipe2.heaLos_a.T_b_outflow variable */), _OMC_LIT57));
  threadData->lastEquationSolved = 169;
}

/*
equation index: 170
type: SIMPLE_ASSIGN
plugFlowPipe2.vol_a.dynBal.ports_H_flow[2] = semiLinear(-pump.motSpe.y, plugFlowPipe2.heaLos_a.port_b.h_outflow, plugFlowPipe2.port_a.h_outflow)
*/
void pump_v3_basicCold_t_eqFunction_170(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,170};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[311]] /* plugFlowPipe2.vol_a.dynBal.ports_H_flow[2] variable */) = semiLinear((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[17]] /* pump.motSpe.y STATE(1) */)), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[279]] /* plugFlowPipe2.heaLos_a.port_b.h_outflow variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[286]] /* plugFlowPipe2.port_a.h_outflow variable */));
  threadData->lastEquationSolved = 170;
}
extern void pump_v3_basicCold_t_eqFunction_944(DATA *data, threadData_t *threadData);

extern void pump_v3_basicCold_t_eqFunction_945(DATA *data, threadData_t *threadData);


/*
equation index: 173
type: SIMPLE_ASSIGN
plugFlowPipe2.heaLos_b.port_b.h_outflow = pump_v3_basicCold_t.plugFlowPipe2.heaLos_b.Medium.specificEnthalpy(pump_v3_basicCold_t.plugFlowPipe2.heaLos_b.Medium.setState_pTX(bou1.p, plugFlowPipe2.heaLos_b.T_b_outflow, {}))
*/
void pump_v3_basicCold_t_eqFunction_173(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,173};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[284]] /* plugFlowPipe2.heaLos_b.port_b.h_outflow variable */) = omc_pump__v3__basicCold__t_plugFlowPipe2_heaLos__b_Medium_specificEnthalpy(threadData, omc_pump__v3__basicCold__t_plugFlowPipe2_heaLos__b_Medium_setState__pTX(threadData, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[50]] /* bou1.p PARAM */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[281]] /* plugFlowPipe2.heaLos_b.T_b_outflow variable */), _OMC_LIT57));
  threadData->lastEquationSolved = 173;
}
extern void pump_v3_basicCold_t_eqFunction_938(DATA *data, threadData_t *threadData);

extern void pump_v3_basicCold_t_eqFunction_939(DATA *data, threadData_t *threadData);

extern void pump_v3_basicCold_t_eqFunction_940(DATA *data, threadData_t *threadData);


/*
equation index: 177
type: SIMPLE_ASSIGN
plugFlowPipe_heat.vol_a.dynBal.medium.T = plugFlowPipe_heat.vol_a.dynBal.T_start
*/
void pump_v3_basicCold_t_eqFunction_177(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,177};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[363]] /* plugFlowPipe_heat.vol_a.dynBal.medium.T variable */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[633]] /* plugFlowPipe_heat.vol_a.dynBal.T_start PARAM */);
  threadData->lastEquationSolved = 177;
}

/*
equation index: 178
type: SIMPLE_ASSIGN
plugFlowPipe_heat.vol_a.dynBal.medium.T_degC = -273.15 + plugFlowPipe_heat.vol_a.dynBal.medium.T
*/
void pump_v3_basicCold_t_eqFunction_178(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,178};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[364]] /* plugFlowPipe_heat.vol_a.dynBal.medium.T_degC variable */) = -273.15 + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[363]] /* plugFlowPipe_heat.vol_a.dynBal.medium.T variable */);
  threadData->lastEquationSolved = 178;
}

/*
equation index: 179
type: SIMPLE_ASSIGN
plugFlowPipe_heat.port_a.h_outflow = 4184.0 * plugFlowPipe_heat.vol_a.dynBal.medium.T_degC
*/
void pump_v3_basicCold_t_eqFunction_179(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,179};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[345]] /* plugFlowPipe_heat.port_a.h_outflow variable */) = (4184.0) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[364]] /* plugFlowPipe_heat.vol_a.dynBal.medium.T_degC variable */));
  threadData->lastEquationSolved = 179;
}
extern void pump_v3_basicCold_t_eqFunction_1019(DATA *data, threadData_t *threadData);


/*
equation index: 181
type: SIMPLE_ASSIGN
plugFlowPipe_heat.vol_a.dynBal.U = plugFlowPipe_heat.vol_a.dynBal.m * plugFlowPipe_heat.port_a.h_outflow
*/
void pump_v3_basicCold_t_eqFunction_181(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,181};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[15]] /* plugFlowPipe_heat.vol_a.dynBal.U STATE(1) */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[358]] /* plugFlowPipe_heat.vol_a.dynBal.m DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[345]] /* plugFlowPipe_heat.port_a.h_outflow variable */));
  threadData->lastEquationSolved = 181;
}

/*
equation index: 182
type: SIMPLE_ASSIGN
plugFlowPipe_heat.heaLos_a.T_a_inflow = pump_v3_basicCold_t.plugFlowPipe_heat.heaLos_a.Medium.temperature(pump_v3_basicCold_t.plugFlowPipe_heat.heaLos_a.Medium.setState_phX(plugFlowPipe_heat.port_a.p, plugFlowPipe_heat.port_a.h_outflow, {}))
*/
void pump_v3_basicCold_t_eqFunction_182(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,182};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[334]] /* plugFlowPipe_heat.heaLos_a.T_a_inflow variable */) = omc_pump__v3__basicCold__t_plugFlowPipe__heat_heaLos__a_Medium_temperature(threadData, omc_pump__v3__basicCold__t_plugFlowPipe__heat_heaLos__a_Medium_setState__phX(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[346]] /* plugFlowPipe_heat.port_a.p variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[345]] /* plugFlowPipe_heat.port_a.h_outflow variable */), _OMC_LIT57));
  threadData->lastEquationSolved = 182;
}

/*
equation index: 183
type: SIMPLE_ASSIGN
plugFlowPipe_heat.vol_b.dynBal.medium.T = plugFlowPipe_heat.vol_b.dynBal.T_start
*/
void pump_v3_basicCold_t_eqFunction_183(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,183};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[379]] /* plugFlowPipe_heat.vol_b.dynBal.medium.T variable */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[658]] /* plugFlowPipe_heat.vol_b.dynBal.T_start PARAM */);
  threadData->lastEquationSolved = 183;
}

/*
equation index: 184
type: SIMPLE_ASSIGN
plugFlowPipe_heat.vol_b.dynBal.medium.T_degC = -273.15 + plugFlowPipe_heat.vol_b.dynBal.medium.T
*/
void pump_v3_basicCold_t_eqFunction_184(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,184};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[380]] /* plugFlowPipe_heat.vol_b.dynBal.medium.T_degC variable */) = -273.15 + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[379]] /* plugFlowPipe_heat.vol_b.dynBal.medium.T variable */);
  threadData->lastEquationSolved = 184;
}

/*
equation index: 185
type: SIMPLE_ASSIGN
plugFlowPipe_heat.port_b.h_outflow = 4184.0 * plugFlowPipe_heat.vol_b.dynBal.medium.T_degC
*/
void pump_v3_basicCold_t_eqFunction_185(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,185};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[347]] /* plugFlowPipe_heat.port_b.h_outflow variable */) = (4184.0) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[380]] /* plugFlowPipe_heat.vol_b.dynBal.medium.T_degC variable */));
  threadData->lastEquationSolved = 185;
}
extern void pump_v3_basicCold_t_eqFunction_1007(DATA *data, threadData_t *threadData);


/*
equation index: 187
type: SIMPLE_ASSIGN
plugFlowPipe_heat.del.V_flow = pump.motSpe.y / Modelica.Fluid.Utilities.regStep(pump.motSpe.y, pump_v3_basicCold_t.plugFlowPipe_heat.del.Medium.density(pump_v3_basicCold_t.plugFlowPipe_heat.del.Medium.setState_phX(pump.port_a.p, plugFlowPipe_heat.port_a.h_outflow, {})), pump_v3_basicCold_t.plugFlowPipe_heat.del.Medium.density(pump_v3_basicCold_t.plugFlowPipe_heat.del.Medium.setState_phX(pump.port_a.p, plugFlowPipe_heat.port_b.h_outflow, {})), plugFlowPipe_heat.del.m_flow_small)
*/
void pump_v3_basicCold_t_eqFunction_187(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,187};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[330]] /* plugFlowPipe_heat.del.V_flow variable */) = DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[17]] /* pump.motSpe.y STATE(1) */),omc_Modelica_Fluid_Utilities_regStep(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[17]] /* pump.motSpe.y STATE(1) */), omc_pump__v3__basicCold__t_plugFlowPipe__heat_del_Medium_density(threadData, omc_pump__v3__basicCold__t_plugFlowPipe__heat_del_Medium_setState__phX(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[403]] /* pump.port_a.p variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[345]] /* plugFlowPipe_heat.port_a.h_outflow variable */), _OMC_LIT57)), omc_pump__v3__basicCold__t_plugFlowPipe__heat_del_Medium_density(threadData, omc_pump__v3__basicCold__t_plugFlowPipe__heat_del_Medium_setState__phX(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[403]] /* pump.port_a.p variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[347]] /* plugFlowPipe_heat.port_b.h_outflow variable */), _OMC_LIT57)), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[555]] /* plugFlowPipe_heat.del.m_flow_small PARAM */)),"Modelica.Fluid.Utilities.regStep(pump.motSpe.y, pump_v3_basicCold_t.plugFlowPipe_heat.del.Medium.density(pump_v3_basicCold_t.plugFlowPipe_heat.del.Medium.setState_phX(pump.port_a.p, plugFlowPipe_heat.port_a.h_outflow, {})), pump_v3_basicCold_t.plugFlowPipe_heat.del.Medium.density(pump_v3_basicCold_t.plugFlowPipe_heat.del.Medium.setState_phX(pump.port_a.p, plugFlowPipe_heat.port_b.h_outflow, {})), plugFlowPipe_heat.del.m_flow_small)",equationIndexes);
  threadData->lastEquationSolved = 187;
}
extern void pump_v3_basicCold_t_eqFunction_1014(DATA *data, threadData_t *threadData);

extern void pump_v3_basicCold_t_eqFunction_1015(DATA *data, threadData_t *threadData);

extern void pump_v3_basicCold_t_eqFunction_894(DATA *data, threadData_t *threadData);

extern void pump_v3_basicCold_t_eqFunction_895(DATA *data, threadData_t *threadData);

extern void pump_v3_basicCold_t_eqFunction_1006(DATA *data, threadData_t *threadData);


/*
equation index: 193
type: SIMPLE_ASSIGN
plugFlowPipe_heat.vol_b.dynBal.ports_H_flow[2] = semiLinear(-pump.motSpe.y, plugFlowPipe_heat.port_b.h_outflow, plugFlowPipe_heat.port_b.h_outflow)
*/
void pump_v3_basicCold_t_eqFunction_193(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,193};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[384]] /* plugFlowPipe_heat.vol_b.dynBal.ports_H_flow[2] variable */) = semiLinear((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[17]] /* pump.motSpe.y STATE(1) */)), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[347]] /* plugFlowPipe_heat.port_b.h_outflow variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[347]] /* plugFlowPipe_heat.port_b.h_outflow variable */));
  threadData->lastEquationSolved = 193;
}

/*
equation index: 194
type: SIMPLE_ASSIGN
plugFlowPipe_heat.vol_b.dynBal.U = plugFlowPipe_heat.vol_b.dynBal.m * plugFlowPipe_heat.port_b.h_outflow
*/
void pump_v3_basicCold_t_eqFunction_194(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,194};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[16]] /* plugFlowPipe_heat.vol_b.dynBal.U STATE(1) */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[374]] /* plugFlowPipe_heat.vol_b.dynBal.m DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[347]] /* plugFlowPipe_heat.port_b.h_outflow variable */));
  threadData->lastEquationSolved = 194;
}

/*
equation index: 195
type: SIMPLE_ASSIGN
plugFlowPipe_heat.timDel.x = 0.0
*/
void pump_v3_basicCold_t_eqFunction_195(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,195};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[14]] /* plugFlowPipe_heat.timDel.x STATE(1,plugFlowPipe_heat.timDel.u) */) = 0.0;
  threadData->lastEquationSolved = 195;
}

/*
equation index: 196
type: ALGORITHM

  (plugFlowPipe_heat.timDel.time_out_rev, plugFlowPipe_heat.timDel.time_out_des) := spatialDistribution(5, time, time, plugFlowPipe_heat.timDel.x, plugFlowPipe_heat.timDel.u >= 0.0, {0.0, 1.0}, {plugFlowPipe_heat.timDel.t0, plugFlowPipe_heat.timDel.t0 + plugFlowPipe_heat.timDel.t_out_start});
*/
void pump_v3_basicCold_t_eqFunction_196(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,196};
  modelica_real tmp12;
  modelica_boolean tmp13;
  tmp13 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[354]] /* plugFlowPipe_heat.timDel.u variable */),0.0);
  tmp12 = spatialDistribution(data, threadData, 5 /* index */, data->localData[0]->timeValue, data->localData[0]->timeValue, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[14]] /* plugFlowPipe_heat.timDel.x STATE(1,plugFlowPipe_heat.timDel.u) */), tmp13 ,&(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[352]] /* plugFlowPipe_heat.timDel.time_out_des variable */));
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[353]] /* plugFlowPipe_heat.timDel.time_out_rev variable */) = tmp12;
  threadData->lastEquationSolved = 196;
}
extern void pump_v3_basicCold_t_eqFunction_847(DATA *data, threadData_t *threadData);

extern void pump_v3_basicCold_t_eqFunction_849(DATA *data, threadData_t *threadData);


/*
equation index: 199
type: SIMPLE_ASSIGN
plugFlowPipe_heat.del.x = 0.0
*/
void pump_v3_basicCold_t_eqFunction_199(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,199};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[13]] /* plugFlowPipe_heat.del.x STATE(1,plugFlowPipe_heat.v) */) = 0.0;
  threadData->lastEquationSolved = 199;
}

/*
equation index: 200
type: ALGORITHM

  (plugFlowPipe_heat.del.port_a.h_outflow, plugFlowPipe_heat.del.port_b.h_outflow) := spatialDistribution(4, plugFlowPipe_heat.port_a.h_outflow, plugFlowPipe_heat.port_b.h_outflow, plugFlowPipe_heat.del.x / 1.5, plugFlowPipe_heat.v >= 0.0, {0.0, 1.0}, {plugFlowPipe_heat.del.h_ini_in, plugFlowPipe_heat.del.h_ini_out});
*/
void pump_v3_basicCold_t_eqFunction_200(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,200};
  modelica_real tmp14;
  modelica_boolean tmp15;
  tmp15 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[355]] /* plugFlowPipe_heat.v variable */),0.0);
  tmp14 = spatialDistribution(data, threadData, 4 /* index */, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[345]] /* plugFlowPipe_heat.port_a.h_outflow variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[347]] /* plugFlowPipe_heat.port_b.h_outflow variable */), DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[13]] /* plugFlowPipe_heat.del.x STATE(1,plugFlowPipe_heat.v) */),1.5,"1.5",equationIndexes), tmp15 ,&(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[332]] /* plugFlowPipe_heat.del.port_b.h_outflow variable */));
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[331]] /* plugFlowPipe_heat.del.port_a.h_outflow variable */) = tmp14;
  threadData->lastEquationSolved = 200;
}

/*
equation index: 201
type: SIMPLE_ASSIGN
plugFlowPipe_heat.heaLos_b.T_a_inflow = pump_v3_basicCold_t.plugFlowPipe_heat.heaLos_b.Medium.temperature(pump_v3_basicCold_t.plugFlowPipe_heat.heaLos_b.Medium.setState_phX(pump.port_a.p, plugFlowPipe_heat.del.port_b.h_outflow, {}))
*/
void pump_v3_basicCold_t_eqFunction_201(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,201};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[339]] /* plugFlowPipe_heat.heaLos_b.T_a_inflow variable */) = omc_pump__v3__basicCold__t_plugFlowPipe__heat_heaLos__b_Medium_temperature(threadData, omc_pump__v3__basicCold__t_plugFlowPipe__heat_heaLos__b_Medium_setState__phX(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[403]] /* pump.port_a.p variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[332]] /* plugFlowPipe_heat.del.port_b.h_outflow variable */), _OMC_LIT57));
  threadData->lastEquationSolved = 201;
}

void pump_v3_basicCold_t_eqFunction_202(DATA*, threadData_t*);
void pump_v3_basicCold_t_eqFunction_203(DATA*, threadData_t*);
void pump_v3_basicCold_t_eqFunction_204(DATA*, threadData_t*);
void pump_v3_basicCold_t_eqFunction_205(DATA*, threadData_t*);
void pump_v3_basicCold_t_eqFunction_206(DATA*, threadData_t*);
void pump_v3_basicCold_t_eqFunction_207(DATA*, threadData_t*);
void pump_v3_basicCold_t_eqFunction_208(DATA*, threadData_t*);
/*
equation index: 209
indexNonlinear: 1
type: NONLINEAR

vars: {plugFlowPipe_heat.heatPort.T}
eqns: {202, 203, 204, 205, 206, 207, 208}
*/
void pump_v3_basicCold_t_eqFunction_209(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,209};
  int retValue;
  infoStreamPrint(OMC_LOG_DT, 0, "Solving nonlinear system 209 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
  /* get old value */
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[0] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[344]] /* plugFlowPipe_heat.heatPort.T variable */);
  retValue = solve_nonlinear_system(data, threadData, 1);
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,209};
    throwStreamPrintWithEquationIndexes(threadData, omc_dummyFileInfo, indexes, "Solving non-linear system 209 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
  }
  /* write solution */
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[344]] /* plugFlowPipe_heat.heatPort.T variable */) = data->simulationInfo->nonlinearSystemData[1].nlsx[0];
  threadData->lastEquationSolved = 209;
}
extern void pump_v3_basicCold_t_eqFunction_1049(DATA *data, threadData_t *threadData);

extern void pump_v3_basicCold_t_eqFunction_1046(DATA *data, threadData_t *threadData);

extern void pump_v3_basicCold_t_eqFunction_1047(DATA *data, threadData_t *threadData);

extern void pump_v3_basicCold_t_eqFunction_1048(DATA *data, threadData_t *threadData);


/*
equation index: 214
type: SIMPLE_ASSIGN
plugFlowPipe_heat.heaLos_a.port_b.h_outflow = pump_v3_basicCold_t.plugFlowPipe_heat.heaLos_a.Medium.specificEnthalpy(pump_v3_basicCold_t.plugFlowPipe_heat.heaLos_a.Medium.setState_pTX(plugFlowPipe_heat.port_a.p, plugFlowPipe_heat.heaLos_a.T_b_outflow, {}))
*/
void pump_v3_basicCold_t_eqFunction_214(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,214};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[338]] /* plugFlowPipe_heat.heaLos_a.port_b.h_outflow variable */) = omc_pump__v3__basicCold__t_plugFlowPipe__heat_heaLos__a_Medium_specificEnthalpy(threadData, omc_pump__v3__basicCold__t_plugFlowPipe__heat_heaLos__a_Medium_setState__pTX(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[346]] /* plugFlowPipe_heat.port_a.p variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[335]] /* plugFlowPipe_heat.heaLos_a.T_b_outflow variable */), _OMC_LIT57));
  threadData->lastEquationSolved = 214;
}

/*
equation index: 215
type: SIMPLE_ASSIGN
plugFlowPipe_heat.vol_a.dynBal.ports_H_flow[2] = semiLinear(-pump.motSpe.y, plugFlowPipe_heat.heaLos_a.port_b.h_outflow, plugFlowPipe_heat.port_a.h_outflow)
*/
void pump_v3_basicCold_t_eqFunction_215(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,215};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[369]] /* plugFlowPipe_heat.vol_a.dynBal.ports_H_flow[2] variable */) = semiLinear((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[17]] /* pump.motSpe.y STATE(1) */)), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[338]] /* plugFlowPipe_heat.heaLos_a.port_b.h_outflow variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[345]] /* plugFlowPipe_heat.port_a.h_outflow variable */));
  threadData->lastEquationSolved = 215;
}

/*
equation index: 216
type: SIMPLE_ASSIGN
plugFlowPipe_heat.heaLos_b.port_b.h_outflow = pump_v3_basicCold_t.plugFlowPipe_heat.heaLos_b.Medium.specificEnthalpy(pump_v3_basicCold_t.plugFlowPipe_heat.heaLos_b.Medium.setState_pTX(pump.port_a.p, plugFlowPipe_heat.heaLos_b.T_b_outflow, {}))
*/
void pump_v3_basicCold_t_eqFunction_216(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,216};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[343]] /* plugFlowPipe_heat.heaLos_b.port_b.h_outflow variable */) = omc_pump__v3__basicCold__t_plugFlowPipe__heat_heaLos__b_Medium_specificEnthalpy(threadData, omc_pump__v3__basicCold__t_plugFlowPipe__heat_heaLos__b_Medium_setState__pTX(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[403]] /* pump.port_a.p variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[340]] /* plugFlowPipe_heat.heaLos_b.T_b_outflow variable */), _OMC_LIT57));
  threadData->lastEquationSolved = 216;
}
extern void pump_v3_basicCold_t_eqFunction_1043(DATA *data, threadData_t *threadData);

extern void pump_v3_basicCold_t_eqFunction_1044(DATA *data, threadData_t *threadData);

extern void pump_v3_basicCold_t_eqFunction_1045(DATA *data, threadData_t *threadData);


/*
equation index: 220
type: SIMPLE_ASSIGN
plugFlowPipe1.vol_a.dynBal.medium.T = plugFlowPipe1.vol_a.dynBal.T_start
*/
void pump_v3_basicCold_t_eqFunction_220(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,220};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[246]] /* plugFlowPipe1.vol_a.dynBal.medium.T variable */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[334]] /* plugFlowPipe1.vol_a.dynBal.T_start PARAM */);
  threadData->lastEquationSolved = 220;
}

/*
equation index: 221
type: SIMPLE_ASSIGN
plugFlowPipe1.vol_a.dynBal.medium.T_degC = -273.15 + plugFlowPipe1.vol_a.dynBal.medium.T
*/
void pump_v3_basicCold_t_eqFunction_221(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,221};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[247]] /* plugFlowPipe1.vol_a.dynBal.medium.T_degC variable */) = -273.15 + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[246]] /* plugFlowPipe1.vol_a.dynBal.medium.T variable */);
  threadData->lastEquationSolved = 221;
}

/*
equation index: 222
type: SIMPLE_ASSIGN
plugFlowPipe1.port_a.h_outflow = 4184.0 * plugFlowPipe1.vol_a.dynBal.medium.T_degC
*/
void pump_v3_basicCold_t_eqFunction_222(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,222};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[229]] /* plugFlowPipe1.port_a.h_outflow variable */) = (4184.0) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[247]] /* plugFlowPipe1.vol_a.dynBal.medium.T_degC variable */));
  threadData->lastEquationSolved = 222;
}
extern void pump_v3_basicCold_t_eqFunction_950(DATA *data, threadData_t *threadData);


/*
equation index: 224
type: SIMPLE_ASSIGN
plugFlowPipe1.vol_a.dynBal.U = plugFlowPipe1.vol_a.dynBal.m * plugFlowPipe1.port_a.h_outflow
*/
void pump_v3_basicCold_t_eqFunction_224(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,224};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[7]] /* plugFlowPipe1.vol_a.dynBal.U STATE(1) */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[241]] /* plugFlowPipe1.vol_a.dynBal.m DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[229]] /* plugFlowPipe1.port_a.h_outflow variable */));
  threadData->lastEquationSolved = 224;
}

/*
equation index: 225
type: SIMPLE_ASSIGN
plugFlowPipe1.heaLos_a.T_a_inflow = pump_v3_basicCold_t.plugFlowPipe1.heaLos_a.Medium.temperature(pump_v3_basicCold_t.plugFlowPipe1.heaLos_a.Medium.setState_phX(plugFlowPipe1.port_a.p, plugFlowPipe1.port_a.h_outflow, {}))
*/
void pump_v3_basicCold_t_eqFunction_225(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,225};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[218]] /* plugFlowPipe1.heaLos_a.T_a_inflow variable */) = omc_pump__v3__basicCold__t_plugFlowPipe1_heaLos__a_Medium_temperature(threadData, omc_pump__v3__basicCold__t_plugFlowPipe1_heaLos__a_Medium_setState__phX(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[230]] /* plugFlowPipe1.port_a.p variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[229]] /* plugFlowPipe1.port_a.h_outflow variable */), _OMC_LIT57));
  threadData->lastEquationSolved = 225;
}

/*
equation index: 226
type: SIMPLE_ASSIGN
plugFlowPipe1.vol_b.dynBal.medium.T = plugFlowPipe1.vol_b.dynBal.T_start
*/
void pump_v3_basicCold_t_eqFunction_226(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,226};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[262]] /* plugFlowPipe1.vol_b.dynBal.medium.T variable */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[359]] /* plugFlowPipe1.vol_b.dynBal.T_start PARAM */);
  threadData->lastEquationSolved = 226;
}

/*
equation index: 227
type: SIMPLE_ASSIGN
plugFlowPipe1.vol_b.dynBal.medium.T_degC = -273.15 + plugFlowPipe1.vol_b.dynBal.medium.T
*/
void pump_v3_basicCold_t_eqFunction_227(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,227};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[263]] /* plugFlowPipe1.vol_b.dynBal.medium.T_degC variable */) = -273.15 + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[262]] /* plugFlowPipe1.vol_b.dynBal.medium.T variable */);
  threadData->lastEquationSolved = 227;
}

/*
equation index: 228
type: SIMPLE_ASSIGN
senTemIn_heat.port_b.h_outflow = 4184.0 * plugFlowPipe1.vol_b.dynBal.medium.T_degC
*/
void pump_v3_basicCold_t_eqFunction_228(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,228};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[434]] /* senTemIn_heat.port_b.h_outflow variable */) = (4184.0) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[263]] /* plugFlowPipe1.vol_b.dynBal.medium.T_degC variable */));
  threadData->lastEquationSolved = 228;
}
extern void pump_v3_basicCold_t_eqFunction_1020(DATA *data, threadData_t *threadData);


/*
equation index: 230
type: SIMPLE_ASSIGN
plugFlowPipe1.del.V_flow = pump.motSpe.y / Modelica.Fluid.Utilities.regStep(pump.motSpe.y, pump_v3_basicCold_t.plugFlowPipe1.del.Medium.density(pump_v3_basicCold_t.plugFlowPipe1.del.Medium.setState_phX(plugFlowPipe_heat.port_a.p, plugFlowPipe1.port_a.h_outflow, {})), pump_v3_basicCold_t.plugFlowPipe1.del.Medium.density(pump_v3_basicCold_t.plugFlowPipe1.del.Medium.setState_phX(plugFlowPipe_heat.port_a.p, senTemIn_heat.port_b.h_outflow, {})), plugFlowPipe1.del.m_flow_small)
*/
void pump_v3_basicCold_t_eqFunction_230(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,230};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[214]] /* plugFlowPipe1.del.V_flow variable */) = DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[17]] /* pump.motSpe.y STATE(1) */),omc_Modelica_Fluid_Utilities_regStep(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[17]] /* pump.motSpe.y STATE(1) */), omc_pump__v3__basicCold__t_plugFlowPipe1_del_Medium_density(threadData, omc_pump__v3__basicCold__t_plugFlowPipe1_del_Medium_setState__phX(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[346]] /* plugFlowPipe_heat.port_a.p variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[229]] /* plugFlowPipe1.port_a.h_outflow variable */), _OMC_LIT57)), omc_pump__v3__basicCold__t_plugFlowPipe1_del_Medium_density(threadData, omc_pump__v3__basicCold__t_plugFlowPipe1_del_Medium_setState__phX(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[346]] /* plugFlowPipe_heat.port_a.p variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[434]] /* senTemIn_heat.port_b.h_outflow variable */), _OMC_LIT57)), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[256]] /* plugFlowPipe1.del.m_flow_small PARAM */)),"Modelica.Fluid.Utilities.regStep(pump.motSpe.y, pump_v3_basicCold_t.plugFlowPipe1.del.Medium.density(pump_v3_basicCold_t.plugFlowPipe1.del.Medium.setState_phX(plugFlowPipe_heat.port_a.p, plugFlowPipe1.port_a.h_outflow, {})), pump_v3_basicCold_t.plugFlowPipe1.del.Medium.density(pump_v3_basicCold_t.plugFlowPipe1.del.Medium.setState_phX(plugFlowPipe_heat.port_a.p, senTemIn_heat.port_b.h_outflow, {})), plugFlowPipe1.del.m_flow_small)",equationIndexes);
  threadData->lastEquationSolved = 230;
}
extern void pump_v3_basicCold_t_eqFunction_1027(DATA *data, threadData_t *threadData);

extern void pump_v3_basicCold_t_eqFunction_1028(DATA *data, threadData_t *threadData);

extern void pump_v3_basicCold_t_eqFunction_858(DATA *data, threadData_t *threadData);

extern void pump_v3_basicCold_t_eqFunction_1074(DATA *data, threadData_t *threadData);

extern void pump_v3_basicCold_t_eqFunction_1075(DATA *data, threadData_t *threadData);


/*
equation index: 236
type: SIMPLE_ASSIGN
senTemIn_heat.T_b_inflow = pump_v3_basicCold_t.senTemIn_heat.Medium.temperature(pump_v3_basicCold_t.senTemIn_heat.Medium.setState_phX(plugFlowPipe_heat.port_a.p, senTemIn_heat.port_b.h_outflow, {}))
*/
void pump_v3_basicCold_t_eqFunction_236(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,236};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[431]] /* senTemIn_heat.T_b_inflow variable */) = omc_pump__v3__basicCold__t_senTemIn__heat_Medium_temperature(threadData, omc_pump__v3__basicCold__t_senTemIn__heat_Medium_setState__phX(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[346]] /* plugFlowPipe_heat.port_a.p variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[434]] /* senTemIn_heat.port_b.h_outflow variable */), _OMC_LIT57));
  threadData->lastEquationSolved = 236;
}
extern void pump_v3_basicCold_t_eqFunction_1052(DATA *data, threadData_t *threadData);

extern void pump_v3_basicCold_t_eqFunction_1053(DATA *data, threadData_t *threadData);


/*
equation index: 239
type: SIMPLE_ASSIGN
plugFlowPipe1.vol_b.dynBal.ports_H_flow[2] = semiLinear(-pump.motSpe.y, senTemIn_heat.port_b.h_outflow, senTemIn_heat.port_b.h_outflow)
*/
void pump_v3_basicCold_t_eqFunction_239(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,239};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[267]] /* plugFlowPipe1.vol_b.dynBal.ports_H_flow[2] variable */) = semiLinear((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[17]] /* pump.motSpe.y STATE(1) */)), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[434]] /* senTemIn_heat.port_b.h_outflow variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[434]] /* senTemIn_heat.port_b.h_outflow variable */));
  threadData->lastEquationSolved = 239;
}

/*
equation index: 240
type: SIMPLE_ASSIGN
plugFlowPipe1.vol_b.dynBal.U = plugFlowPipe1.vol_b.dynBal.m * senTemIn_heat.port_b.h_outflow
*/
void pump_v3_basicCold_t_eqFunction_240(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,240};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[8]] /* plugFlowPipe1.vol_b.dynBal.U STATE(1) */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[257]] /* plugFlowPipe1.vol_b.dynBal.m DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[434]] /* senTemIn_heat.port_b.h_outflow variable */));
  threadData->lastEquationSolved = 240;
}

/*
equation index: 241
type: SIMPLE_ASSIGN
plugFlowPipe1.timDel.x = 0.0
*/
void pump_v3_basicCold_t_eqFunction_241(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,241};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[6]] /* plugFlowPipe1.timDel.x STATE(1,plugFlowPipe1.timDel.u) */) = 0.0;
  threadData->lastEquationSolved = 241;
}

/*
equation index: 242
type: ALGORITHM

  (plugFlowPipe1.timDel.time_out_rev, plugFlowPipe1.timDel.time_out_des) := spatialDistribution(3, time, time, plugFlowPipe1.timDel.x, plugFlowPipe1.timDel.u >= 0.0, {0.0, 1.0}, {plugFlowPipe1.timDel.t0, plugFlowPipe1.timDel.t0 + plugFlowPipe1.timDel.t_out_start});
*/
void pump_v3_basicCold_t_eqFunction_242(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,242};
  modelica_real tmp16;
  modelica_boolean tmp17;
  tmp17 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[237]] /* plugFlowPipe1.timDel.u variable */),0.0);
  tmp16 = spatialDistribution(data, threadData, 3 /* index */, data->localData[0]->timeValue, data->localData[0]->timeValue, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[6]] /* plugFlowPipe1.timDel.x STATE(1,plugFlowPipe1.timDel.u) */), tmp17 ,&(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[235]] /* plugFlowPipe1.timDel.time_out_des variable */));
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[236]] /* plugFlowPipe1.timDel.time_out_rev variable */) = tmp16;
  threadData->lastEquationSolved = 242;
}
extern void pump_v3_basicCold_t_eqFunction_829(DATA *data, threadData_t *threadData);

extern void pump_v3_basicCold_t_eqFunction_831(DATA *data, threadData_t *threadData);


/*
equation index: 245
type: SIMPLE_ASSIGN
plugFlowPipe1.del.x = 0.0
*/
void pump_v3_basicCold_t_eqFunction_245(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,245};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5]] /* plugFlowPipe1.del.x STATE(1,plugFlowPipe1.v) */) = 0.0;
  threadData->lastEquationSolved = 245;
}

/*
equation index: 246
type: ALGORITHM

  (plugFlowPipe1.del.port_a.h_outflow, plugFlowPipe1.del.port_b.h_outflow) := spatialDistribution(2, plugFlowPipe1.port_a.h_outflow, senTemIn_heat.port_b.h_outflow, plugFlowPipe1.del.x, plugFlowPipe1.v >= 0.0, {0.0, 1.0}, {plugFlowPipe1.del.h_ini_in, plugFlowPipe1.del.h_ini_out});
*/
void pump_v3_basicCold_t_eqFunction_246(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,246};
  modelica_real tmp18;
  modelica_boolean tmp19;
  tmp19 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[238]] /* plugFlowPipe1.v variable */),0.0);
  tmp18 = spatialDistribution(data, threadData, 2 /* index */, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[229]] /* plugFlowPipe1.port_a.h_outflow variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[434]] /* senTemIn_heat.port_b.h_outflow variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5]] /* plugFlowPipe1.del.x STATE(1,plugFlowPipe1.v) */), tmp19 ,&(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[216]] /* plugFlowPipe1.del.port_b.h_outflow variable */));
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[215]] /* plugFlowPipe1.del.port_a.h_outflow variable */) = tmp18;
  threadData->lastEquationSolved = 246;
}

/*
equation index: 247
type: SIMPLE_ASSIGN
plugFlowPipe1.heaLos_b.T_a_inflow = pump_v3_basicCold_t.plugFlowPipe1.heaLos_b.Medium.temperature(pump_v3_basicCold_t.plugFlowPipe1.heaLos_b.Medium.setState_phX(plugFlowPipe_heat.port_a.p, plugFlowPipe1.del.port_b.h_outflow, {}))
*/
void pump_v3_basicCold_t_eqFunction_247(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,247};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[223]] /* plugFlowPipe1.heaLos_b.T_a_inflow variable */) = omc_pump__v3__basicCold__t_plugFlowPipe1_heaLos__b_Medium_temperature(threadData, omc_pump__v3__basicCold__t_plugFlowPipe1_heaLos__b_Medium_setState__phX(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[346]] /* plugFlowPipe_heat.port_a.p variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[216]] /* plugFlowPipe1.del.port_b.h_outflow variable */), _OMC_LIT57));
  threadData->lastEquationSolved = 247;
}

void pump_v3_basicCold_t_eqFunction_248(DATA*, threadData_t*);
void pump_v3_basicCold_t_eqFunction_249(DATA*, threadData_t*);
void pump_v3_basicCold_t_eqFunction_250(DATA*, threadData_t*);
void pump_v3_basicCold_t_eqFunction_251(DATA*, threadData_t*);
void pump_v3_basicCold_t_eqFunction_252(DATA*, threadData_t*);
void pump_v3_basicCold_t_eqFunction_253(DATA*, threadData_t*);
void pump_v3_basicCold_t_eqFunction_254(DATA*, threadData_t*);
/*
equation index: 255
indexNonlinear: 2
type: NONLINEAR

vars: {plugFlowPipe1.heatPort.T}
eqns: {248, 249, 250, 251, 252, 253, 254}
*/
void pump_v3_basicCold_t_eqFunction_255(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,255};
  int retValue;
  infoStreamPrint(OMC_LOG_DT, 0, "Solving nonlinear system 255 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
  /* get old value */
  data->simulationInfo->nonlinearSystemData[2].nlsxOld[0] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[228]] /* plugFlowPipe1.heatPort.T variable */);
  retValue = solve_nonlinear_system(data, threadData, 2);
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,255};
    throwStreamPrintWithEquationIndexes(threadData, omc_dummyFileInfo, indexes, "Solving non-linear system 255 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
  }
  /* write solution */
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[228]] /* plugFlowPipe1.heatPort.T variable */) = data->simulationInfo->nonlinearSystemData[2].nlsx[0];
  threadData->lastEquationSolved = 255;
}

/*
equation index: 256
type: SIMPLE_ASSIGN
plugFlowPipe1.heaLos_a.port_b.h_outflow = pump_v3_basicCold_t.plugFlowPipe1.heaLos_a.Medium.specificEnthalpy(pump_v3_basicCold_t.plugFlowPipe1.heaLos_a.Medium.setState_pTX(plugFlowPipe1.port_a.p, plugFlowPipe1.heaLos_a.T_b_outflow, {}))
*/
void pump_v3_basicCold_t_eqFunction_256(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,256};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[222]] /* plugFlowPipe1.heaLos_a.port_b.h_outflow variable */) = omc_pump__v3__basicCold__t_plugFlowPipe1_heaLos__a_Medium_specificEnthalpy(threadData, omc_pump__v3__basicCold__t_plugFlowPipe1_heaLos__a_Medium_setState__pTX(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[230]] /* plugFlowPipe1.port_a.p variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[219]] /* plugFlowPipe1.heaLos_a.T_b_outflow variable */), _OMC_LIT57));
  threadData->lastEquationSolved = 256;
}

/*
equation index: 257
type: SIMPLE_ASSIGN
plugFlowPipe1.vol_a.dynBal.ports_H_flow[2] = semiLinear(-pump.motSpe.y, plugFlowPipe1.heaLos_a.port_b.h_outflow, plugFlowPipe1.port_a.h_outflow)
*/
void pump_v3_basicCold_t_eqFunction_257(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,257};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[252]] /* plugFlowPipe1.vol_a.dynBal.ports_H_flow[2] variable */) = semiLinear((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[17]] /* pump.motSpe.y STATE(1) */)), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[222]] /* plugFlowPipe1.heaLos_a.port_b.h_outflow variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[229]] /* plugFlowPipe1.port_a.h_outflow variable */));
  threadData->lastEquationSolved = 257;
}

/*
equation index: 258
type: SIMPLE_ASSIGN
plugFlowPipe1.heaLos_b.port_b.h_outflow = pump_v3_basicCold_t.plugFlowPipe1.heaLos_b.Medium.specificEnthalpy(pump_v3_basicCold_t.plugFlowPipe1.heaLos_b.Medium.setState_pTX(plugFlowPipe_heat.port_a.p, plugFlowPipe1.heaLos_b.T_b_outflow, {}))
*/
void pump_v3_basicCold_t_eqFunction_258(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,258};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[227]] /* plugFlowPipe1.heaLos_b.port_b.h_outflow variable */) = omc_pump__v3__basicCold__t_plugFlowPipe1_heaLos__b_Medium_specificEnthalpy(threadData, omc_pump__v3__basicCold__t_plugFlowPipe1_heaLos__b_Medium_setState__pTX(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[346]] /* plugFlowPipe_heat.port_a.p variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[224]] /* plugFlowPipe1.heaLos_b.T_b_outflow variable */), _OMC_LIT57));
  threadData->lastEquationSolved = 258;
}
extern void pump_v3_basicCold_t_eqFunction_1078(DATA *data, threadData_t *threadData);

extern void pump_v3_basicCold_t_eqFunction_1079(DATA *data, threadData_t *threadData);

extern void pump_v3_basicCold_t_eqFunction_1080(DATA *data, threadData_t *threadData);


/*
equation index: 262
type: SIMPLE_ASSIGN
plugFlowPipe.vol_a.dynBal.medium.T = plugFlowPipe.vol_a.dynBal.T_start
*/
void pump_v3_basicCold_t_eqFunction_262(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,262};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[188]] /* plugFlowPipe.vol_a.dynBal.medium.T variable */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[184]] /* plugFlowPipe.vol_a.dynBal.T_start PARAM */);
  threadData->lastEquationSolved = 262;
}

/*
equation index: 263
type: SIMPLE_ASSIGN
plugFlowPipe.vol_a.dynBal.medium.T_degC = -273.15 + plugFlowPipe.vol_a.dynBal.medium.T
*/
void pump_v3_basicCold_t_eqFunction_263(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,263};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[189]] /* plugFlowPipe.vol_a.dynBal.medium.T_degC variable */) = -273.15 + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[188]] /* plugFlowPipe.vol_a.dynBal.medium.T variable */);
  threadData->lastEquationSolved = 263;
}

/*
equation index: 264
type: SIMPLE_ASSIGN
plugFlowPipe.port_a.h_outflow = 4184.0 * plugFlowPipe.vol_a.dynBal.medium.T_degC
*/
void pump_v3_basicCold_t_eqFunction_264(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,264};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[171]] /* plugFlowPipe.port_a.h_outflow variable */) = (4184.0) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[189]] /* plugFlowPipe.vol_a.dynBal.medium.T_degC variable */));
  threadData->lastEquationSolved = 264;
}
extern void pump_v3_basicCold_t_eqFunction_820(DATA *data, threadData_t *threadData);

extern void pump_v3_basicCold_t_eqFunction_912(DATA *data, threadData_t *threadData);


/*
equation index: 267
type: SIMPLE_ASSIGN
plugFlowPipe.vol_a.dynBal.U = plugFlowPipe.vol_a.dynBal.m * plugFlowPipe.port_a.h_outflow
*/
void pump_v3_basicCold_t_eqFunction_267(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,267};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[3]] /* plugFlowPipe.vol_a.dynBal.U STATE(1) */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[183]] /* plugFlowPipe.vol_a.dynBal.m DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[171]] /* plugFlowPipe.port_a.h_outflow variable */));
  threadData->lastEquationSolved = 267;
}

/*
equation index: 268
type: SIMPLE_ASSIGN
plugFlowPipe.heaLos_a.T_a_inflow = pump_v3_basicCold_t.plugFlowPipe.heaLos_a.Medium.temperature(pump_v3_basicCold_t.plugFlowPipe.heaLos_a.Medium.setState_phX(bou1.p, plugFlowPipe.port_a.h_outflow, {}))
*/
void pump_v3_basicCold_t_eqFunction_268(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,268};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[160]] /* plugFlowPipe.heaLos_a.T_a_inflow variable */) = omc_pump__v3__basicCold__t_plugFlowPipe_heaLos__a_Medium_temperature(threadData, omc_pump__v3__basicCold__t_plugFlowPipe_heaLos__a_Medium_setState__phX(threadData, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[50]] /* bou1.p PARAM */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[171]] /* plugFlowPipe.port_a.h_outflow variable */), _OMC_LIT57));
  threadData->lastEquationSolved = 268;
}

/*
equation index: 269
type: SIMPLE_ASSIGN
plugFlowPipe.vol_b.dynBal.medium.T = plugFlowPipe.vol_b.dynBal.T_start
*/
void pump_v3_basicCold_t_eqFunction_269(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,269};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[204]] /* plugFlowPipe.vol_b.dynBal.medium.T variable */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[216]] /* plugFlowPipe.vol_b.dynBal.T_start PARAM */);
  threadData->lastEquationSolved = 269;
}

/*
equation index: 270
type: SIMPLE_ASSIGN
plugFlowPipe.vol_b.dynBal.medium.T_degC = -273.15 + plugFlowPipe.vol_b.dynBal.medium.T
*/
void pump_v3_basicCold_t_eqFunction_270(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,270};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[205]] /* plugFlowPipe.vol_b.dynBal.medium.T_degC variable */) = -273.15 + (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[204]] /* plugFlowPipe.vol_b.dynBal.medium.T variable */);
  threadData->lastEquationSolved = 270;
}

/*
equation index: 271
type: SIMPLE_ASSIGN
senTemOut_cold.port_b.h_outflow = 4184.0 * plugFlowPipe.vol_b.dynBal.medium.T_degC
*/
void pump_v3_basicCold_t_eqFunction_271(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,271};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[439]] /* senTemOut_cold.port_b.h_outflow variable */) = (4184.0) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[205]] /* plugFlowPipe.vol_b.dynBal.medium.T_degC variable */));
  threadData->lastEquationSolved = 271;
}
extern void pump_v3_basicCold_t_eqFunction_951(DATA *data, threadData_t *threadData);


/*
equation index: 273
type: SIMPLE_ASSIGN
plugFlowPipe.del.V_flow = pump.motSpe.y / Modelica.Fluid.Utilities.regStep(pump.motSpe.y, pump_v3_basicCold_t.plugFlowPipe.del.Medium.density(pump_v3_basicCold_t.plugFlowPipe.del.Medium.setState_phX(plugFlowPipe1.port_a.p, plugFlowPipe.port_a.h_outflow, {})), pump_v3_basicCold_t.plugFlowPipe.del.Medium.density(pump_v3_basicCold_t.plugFlowPipe.del.Medium.setState_phX(plugFlowPipe1.port_a.p, senTemOut_cold.port_b.h_outflow, {})), plugFlowPipe.del.m_flow_small)
*/
void pump_v3_basicCold_t_eqFunction_273(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,273};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[156]] /* plugFlowPipe.del.V_flow variable */) = DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[17]] /* pump.motSpe.y STATE(1) */),omc_Modelica_Fluid_Utilities_regStep(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[17]] /* pump.motSpe.y STATE(1) */), omc_pump__v3__basicCold__t_plugFlowPipe_del_Medium_density(threadData, omc_pump__v3__basicCold__t_plugFlowPipe_del_Medium_setState__phX(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[230]] /* plugFlowPipe1.port_a.p variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[171]] /* plugFlowPipe.port_a.h_outflow variable */), _OMC_LIT57)), omc_pump__v3__basicCold__t_plugFlowPipe_del_Medium_density(threadData, omc_pump__v3__basicCold__t_plugFlowPipe_del_Medium_setState__phX(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[230]] /* plugFlowPipe1.port_a.p variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[439]] /* senTemOut_cold.port_b.h_outflow variable */), _OMC_LIT57)), (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[100]] /* plugFlowPipe.del.m_flow_small PARAM */)),"Modelica.Fluid.Utilities.regStep(pump.motSpe.y, pump_v3_basicCold_t.plugFlowPipe.del.Medium.density(pump_v3_basicCold_t.plugFlowPipe.del.Medium.setState_phX(plugFlowPipe1.port_a.p, plugFlowPipe.port_a.h_outflow, {})), pump_v3_basicCold_t.plugFlowPipe.del.Medium.density(pump_v3_basicCold_t.plugFlowPipe.del.Medium.setState_phX(plugFlowPipe1.port_a.p, senTemOut_cold.port_b.h_outflow, {})), plugFlowPipe.del.m_flow_small)",equationIndexes);
  threadData->lastEquationSolved = 273;
}
extern void pump_v3_basicCold_t_eqFunction_958(DATA *data, threadData_t *threadData);

extern void pump_v3_basicCold_t_eqFunction_959(DATA *data, threadData_t *threadData);

extern void pump_v3_basicCold_t_eqFunction_840(DATA *data, threadData_t *threadData);

extern void pump_v3_basicCold_t_eqFunction_1069(DATA *data, threadData_t *threadData);

extern void pump_v3_basicCold_t_eqFunction_1070(DATA *data, threadData_t *threadData);


/*
equation index: 279
type: SIMPLE_ASSIGN
senTemOut_cold.T_b_inflow = pump_v3_basicCold_t.senTemOut_cold.Medium.temperature(pump_v3_basicCold_t.senTemOut_cold.Medium.setState_phX(plugFlowPipe1.port_a.p, senTemOut_cold.port_b.h_outflow, {}))
*/
void pump_v3_basicCold_t_eqFunction_279(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,279};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[436]] /* senTemOut_cold.T_b_inflow variable */) = omc_pump__v3__basicCold__t_senTemOut__cold_Medium_temperature(threadData, omc_pump__v3__basicCold__t_senTemOut__cold_Medium_setState__phX(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[230]] /* plugFlowPipe1.port_a.p variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[439]] /* senTemOut_cold.port_b.h_outflow variable */), _OMC_LIT57));
  threadData->lastEquationSolved = 279;
}
extern void pump_v3_basicCold_t_eqFunction_964(DATA *data, threadData_t *threadData);


/*
equation index: 281
type: SIMPLE_ASSIGN
plugFlowPipe.vol_b.dynBal.ports_H_flow[2] = semiLinear(-pump.motSpe.y, senTemOut_cold.port_b.h_outflow, senTemOut_cold.port_b.h_outflow)
*/
void pump_v3_basicCold_t_eqFunction_281(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,281};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[210]] /* plugFlowPipe.vol_b.dynBal.ports_H_flow[2] variable */) = semiLinear((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[17]] /* pump.motSpe.y STATE(1) */)), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[439]] /* senTemOut_cold.port_b.h_outflow variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[439]] /* senTemOut_cold.port_b.h_outflow variable */));
  threadData->lastEquationSolved = 281;
}

/*
equation index: 282
type: SIMPLE_ASSIGN
plugFlowPipe.vol_b.dynBal.U = plugFlowPipe.vol_b.dynBal.m * senTemOut_cold.port_b.h_outflow
*/
void pump_v3_basicCold_t_eqFunction_282(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,282};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[4]] /* plugFlowPipe.vol_b.dynBal.U STATE(1) */) = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[199]] /* plugFlowPipe.vol_b.dynBal.m DUMMY_STATE */)) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[439]] /* senTemOut_cold.port_b.h_outflow variable */));
  threadData->lastEquationSolved = 282;
}

/*
equation index: 283
type: SIMPLE_ASSIGN
plugFlowPipe.timDel.x = 0.0
*/
void pump_v3_basicCold_t_eqFunction_283(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,283};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2]] /* plugFlowPipe.timDel.x STATE(1,plugFlowPipe.timDel.u) */) = 0.0;
  threadData->lastEquationSolved = 283;
}

/*
equation index: 284
type: ALGORITHM

  (plugFlowPipe.timDel.time_out_rev, plugFlowPipe.timDel.time_out_des) := spatialDistribution(1, time, time, plugFlowPipe.timDel.x, plugFlowPipe.timDel.u >= 0.0, {0.0, 1.0}, {plugFlowPipe.timDel.t0, plugFlowPipe.timDel.t0 + plugFlowPipe.timDel.t_out_start});
*/
void pump_v3_basicCold_t_eqFunction_284(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,284};
  modelica_real tmp20;
  modelica_boolean tmp21;
  tmp21 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[179]] /* plugFlowPipe.timDel.u variable */),0.0);
  tmp20 = spatialDistribution(data, threadData, 1 /* index */, data->localData[0]->timeValue, data->localData[0]->timeValue, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2]] /* plugFlowPipe.timDel.x STATE(1,plugFlowPipe.timDel.u) */), tmp21 ,&(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[177]] /* plugFlowPipe.timDel.time_out_des variable */));
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[178]] /* plugFlowPipe.timDel.time_out_rev variable */) = tmp20;
  threadData->lastEquationSolved = 284;
}
extern void pump_v3_basicCold_t_eqFunction_813(DATA *data, threadData_t *threadData);

extern void pump_v3_basicCold_t_eqFunction_811(DATA *data, threadData_t *threadData);


/*
equation index: 287
type: SIMPLE_ASSIGN
plugFlowPipe.del.x = 0.0
*/
void pump_v3_basicCold_t_eqFunction_287(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,287};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1]] /* plugFlowPipe.del.x STATE(1,plugFlowPipe.v) */) = 0.0;
  threadData->lastEquationSolved = 287;
}

/*
equation index: 288
type: ALGORITHM

  (plugFlowPipe.del.port_a.h_outflow, plugFlowPipe.del.port_b.h_outflow) := spatialDistribution(0, plugFlowPipe.port_a.h_outflow, senTemOut_cold.port_b.h_outflow, plugFlowPipe.del.x, plugFlowPipe.v >= 0.0, {0.0, 1.0}, {plugFlowPipe.del.h_ini_in, plugFlowPipe.del.h_ini_out});
*/
void pump_v3_basicCold_t_eqFunction_288(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,288};
  modelica_real tmp22;
  modelica_boolean tmp23;
  tmp23 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[180]] /* plugFlowPipe.v variable */),0.0);
  tmp22 = spatialDistribution(data, threadData, 0 /* index */, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[171]] /* plugFlowPipe.port_a.h_outflow variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[439]] /* senTemOut_cold.port_b.h_outflow variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1]] /* plugFlowPipe.del.x STATE(1,plugFlowPipe.v) */), tmp23 ,&(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[158]] /* plugFlowPipe.del.port_b.h_outflow variable */));
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[157]] /* plugFlowPipe.del.port_a.h_outflow variable */) = tmp22;
  threadData->lastEquationSolved = 288;
}

/*
equation index: 289
type: SIMPLE_ASSIGN
plugFlowPipe.heaLos_b.T_a_inflow = pump_v3_basicCold_t.plugFlowPipe.heaLos_b.Medium.temperature(pump_v3_basicCold_t.plugFlowPipe.heaLos_b.Medium.setState_phX(plugFlowPipe1.port_a.p, plugFlowPipe.del.port_b.h_outflow, {}))
*/
void pump_v3_basicCold_t_eqFunction_289(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,289};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[165]] /* plugFlowPipe.heaLos_b.T_a_inflow variable */) = omc_pump__v3__basicCold__t_plugFlowPipe_heaLos__b_Medium_temperature(threadData, omc_pump__v3__basicCold__t_plugFlowPipe_heaLos__b_Medium_setState__phX(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[230]] /* plugFlowPipe1.port_a.p variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[158]] /* plugFlowPipe.del.port_b.h_outflow variable */), _OMC_LIT57));
  threadData->lastEquationSolved = 289;
}

void pump_v3_basicCold_t_eqFunction_290(DATA*, threadData_t*);
void pump_v3_basicCold_t_eqFunction_291(DATA*, threadData_t*);
void pump_v3_basicCold_t_eqFunction_292(DATA*, threadData_t*);
void pump_v3_basicCold_t_eqFunction_293(DATA*, threadData_t*);
void pump_v3_basicCold_t_eqFunction_294(DATA*, threadData_t*);
void pump_v3_basicCold_t_eqFunction_295(DATA*, threadData_t*);
void pump_v3_basicCold_t_eqFunction_296(DATA*, threadData_t*);
/*
equation index: 297
indexNonlinear: 3
type: NONLINEAR

vars: {plugFlowPipe.heatPort.T}
eqns: {290, 291, 292, 293, 294, 295, 296}
*/
void pump_v3_basicCold_t_eqFunction_297(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,297};
  int retValue;
  infoStreamPrint(OMC_LOG_DT, 0, "Solving nonlinear system 297 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
  /* get old value */
  data->simulationInfo->nonlinearSystemData[3].nlsxOld[0] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[170]] /* plugFlowPipe.heatPort.T variable */);
  retValue = solve_nonlinear_system(data, threadData, 3);
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,297};
    throwStreamPrintWithEquationIndexes(threadData, omc_dummyFileInfo, indexes, "Solving non-linear system 297 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
  }
  /* write solution */
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[170]] /* plugFlowPipe.heatPort.T variable */) = data->simulationInfo->nonlinearSystemData[3].nlsx[0];
  threadData->lastEquationSolved = 297;
}

/*
equation index: 298
type: SIMPLE_ASSIGN
plugFlowPipe.heaLos_a.port_b.h_outflow = pump_v3_basicCold_t.plugFlowPipe.heaLos_a.Medium.specificEnthalpy(pump_v3_basicCold_t.plugFlowPipe.heaLos_a.Medium.setState_pTX(bou1.p, plugFlowPipe.heaLos_a.T_b_outflow, {}))
*/
void pump_v3_basicCold_t_eqFunction_298(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,298};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[164]] /* plugFlowPipe.heaLos_a.port_b.h_outflow variable */) = omc_pump__v3__basicCold__t_plugFlowPipe_heaLos__a_Medium_specificEnthalpy(threadData, omc_pump__v3__basicCold__t_plugFlowPipe_heaLos__a_Medium_setState__pTX(threadData, (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[50]] /* bou1.p PARAM */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[161]] /* plugFlowPipe.heaLos_a.T_b_outflow variable */), _OMC_LIT57));
  threadData->lastEquationSolved = 298;
}

/*
equation index: 299
type: SIMPLE_ASSIGN
plugFlowPipe.vol_a.dynBal.ports_H_flow[2] = semiLinear(-pump.motSpe.y, plugFlowPipe.heaLos_a.port_b.h_outflow, plugFlowPipe.port_a.h_outflow)
*/
void pump_v3_basicCold_t_eqFunction_299(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,299};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[194]] /* plugFlowPipe.vol_a.dynBal.ports_H_flow[2] variable */) = semiLinear((-(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[17]] /* pump.motSpe.y STATE(1) */)), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[164]] /* plugFlowPipe.heaLos_a.port_b.h_outflow variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[171]] /* plugFlowPipe.port_a.h_outflow variable */));
  threadData->lastEquationSolved = 299;
}
extern void pump_v3_basicCold_t_eqFunction_980(DATA *data, threadData_t *threadData);

extern void pump_v3_basicCold_t_eqFunction_981(DATA *data, threadData_t *threadData);


/*
equation index: 302
type: SIMPLE_ASSIGN
plugFlowPipe.heaLos_b.port_b.h_outflow = pump_v3_basicCold_t.plugFlowPipe.heaLos_b.Medium.specificEnthalpy(pump_v3_basicCold_t.plugFlowPipe.heaLos_b.Medium.setState_pTX(plugFlowPipe1.port_a.p, plugFlowPipe.heaLos_b.T_b_outflow, {}))
*/
void pump_v3_basicCold_t_eqFunction_302(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,302};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[169]] /* plugFlowPipe.heaLos_b.port_b.h_outflow variable */) = omc_pump__v3__basicCold__t_plugFlowPipe_heaLos__b_Medium_specificEnthalpy(threadData, omc_pump__v3__basicCold__t_plugFlowPipe_heaLos__b_Medium_setState__pTX(threadData, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[230]] /* plugFlowPipe1.port_a.p variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[166]] /* plugFlowPipe.heaLos_b.T_b_outflow variable */), _OMC_LIT57));
  threadData->lastEquationSolved = 302;
}
extern void pump_v3_basicCold_t_eqFunction_984(DATA *data, threadData_t *threadData);

extern void pump_v3_basicCold_t_eqFunction_985(DATA *data, threadData_t *threadData);

extern void pump_v3_basicCold_t_eqFunction_986(DATA *data, threadData_t *threadData);


/*
equation index: 306
type: SIMPLE_ASSIGN
plugFlowPipe.heaLos_a.dp = 0.0
*/
void pump_v3_basicCold_t_eqFunction_306(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,306};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[162]] /* plugFlowPipe.heaLos_a.dp variable */) = 0.0;
  threadData->lastEquationSolved = 306;
}

/*
equation index: 307
type: SIMPLE_ASSIGN
plugFlowPipe.heaLos_b.dp = 0.0
*/
void pump_v3_basicCold_t_eqFunction_307(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,307};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[167]] /* plugFlowPipe.heaLos_b.dp variable */) = 0.0;
  threadData->lastEquationSolved = 307;
}

/*
equation index: 308
type: SIMPLE_ASSIGN
plugFlowPipe.vol_b.heatPort.Q_flow = 0.0
*/
void pump_v3_basicCold_t_eqFunction_308(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,308};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[212]] /* plugFlowPipe.vol_b.heatPort.Q_flow variable */) = 0.0;
  threadData->lastEquationSolved = 308;
}

/*
equation index: 309
type: SIMPLE_ASSIGN
plugFlowPipe.vol_a.heatPort.Q_flow = 0.0
*/
void pump_v3_basicCold_t_eqFunction_309(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,309};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[196]] /* plugFlowPipe.vol_a.heatPort.Q_flow variable */) = 0.0;
  threadData->lastEquationSolved = 309;
}

/*
equation index: 310
type: SIMPLE_ASSIGN
plugFlowPipe1.heaLos_a.dp = 0.0
*/
void pump_v3_basicCold_t_eqFunction_310(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,310};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[220]] /* plugFlowPipe1.heaLos_a.dp variable */) = 0.0;
  threadData->lastEquationSolved = 310;
}

/*
equation index: 311
type: SIMPLE_ASSIGN
plugFlowPipe1.heaLos_b.dp = 0.0
*/
void pump_v3_basicCold_t_eqFunction_311(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,311};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[225]] /* plugFlowPipe1.heaLos_b.dp variable */) = 0.0;
  threadData->lastEquationSolved = 311;
}

/*
equation index: 312
type: SIMPLE_ASSIGN
plugFlowPipe1.vol_b.heatPort.Q_flow = 0.0
*/
void pump_v3_basicCold_t_eqFunction_312(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,312};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[269]] /* plugFlowPipe1.vol_b.heatPort.Q_flow variable */) = 0.0;
  threadData->lastEquationSolved = 312;
}

/*
equation index: 313
type: SIMPLE_ASSIGN
plugFlowPipe1.vol_a.heatPort.Q_flow = 0.0
*/
void pump_v3_basicCold_t_eqFunction_313(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,313};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[254]] /* plugFlowPipe1.vol_a.heatPort.Q_flow variable */) = 0.0;
  threadData->lastEquationSolved = 313;
}

/*
equation index: 314
type: SIMPLE_ASSIGN
plugFlowPipe_heat.heaLos_a.dp = 0.0
*/
void pump_v3_basicCold_t_eqFunction_314(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,314};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[336]] /* plugFlowPipe_heat.heaLos_a.dp variable */) = 0.0;
  threadData->lastEquationSolved = 314;
}

/*
equation index: 315
type: SIMPLE_ASSIGN
plugFlowPipe_heat.heaLos_b.dp = 0.0
*/
void pump_v3_basicCold_t_eqFunction_315(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,315};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[341]] /* plugFlowPipe_heat.heaLos_b.dp variable */) = 0.0;
  threadData->lastEquationSolved = 315;
}

/*
equation index: 316
type: SIMPLE_ASSIGN
plugFlowPipe_heat.vol_b.heatPort.Q_flow = 0.0
*/
void pump_v3_basicCold_t_eqFunction_316(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,316};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[386]] /* plugFlowPipe_heat.vol_b.heatPort.Q_flow variable */) = 0.0;
  threadData->lastEquationSolved = 316;
}

/*
equation index: 317
type: SIMPLE_ASSIGN
plugFlowPipe_heat.vol_a.heatPort.Q_flow = 0.0
*/
void pump_v3_basicCold_t_eqFunction_317(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,317};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[371]] /* plugFlowPipe_heat.vol_a.heatPort.Q_flow variable */) = 0.0;
  threadData->lastEquationSolved = 317;
}

/*
equation index: 318
type: SIMPLE_ASSIGN
plugFlowPipe2.heaLos_a.dp = 0.0
*/
void pump_v3_basicCold_t_eqFunction_318(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,318};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[277]] /* plugFlowPipe2.heaLos_a.dp variable */) = 0.0;
  threadData->lastEquationSolved = 318;
}

/*
equation index: 319
type: SIMPLE_ASSIGN
plugFlowPipe2.heaLos_b.dp = 0.0
*/
void pump_v3_basicCold_t_eqFunction_319(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,319};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[282]] /* plugFlowPipe2.heaLos_b.dp variable */) = 0.0;
  threadData->lastEquationSolved = 319;
}

/*
equation index: 320
type: SIMPLE_ASSIGN
plugFlowPipe2.vol_b.heatPort.Q_flow = 0.0
*/
void pump_v3_basicCold_t_eqFunction_320(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,320};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[329]] /* plugFlowPipe2.vol_b.heatPort.Q_flow variable */) = 0.0;
  threadData->lastEquationSolved = 320;
}

/*
equation index: 321
type: SIMPLE_ASSIGN
plugFlowPipe2.vol_a.heatPort.Q_flow = 0.0
*/
void pump_v3_basicCold_t_eqFunction_321(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,321};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[313]] /* plugFlowPipe2.vol_a.heatPort.Q_flow variable */) = 0.0;
  threadData->lastEquationSolved = 321;
}

/*
equation index: 322
type: SIMPLE_ASSIGN
pump.setConst.y = 0.114
*/
void pump_v3_basicCold_t_eqFunction_322(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,322};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[413]] /* pump.setConst.y variable */) = 0.114;
  threadData->lastEquationSolved = 322;
}

/*
equation index: 323
type: SIMPLE_ASSIGN
pump.senRelPre.port_a.m_flow = 0.0
*/
void pump_v3_basicCold_t_eqFunction_323(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,323};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[410]] /* pump.senRelPre.port_a.m_flow variable */) = 0.0;
  threadData->lastEquationSolved = 323;
}

/*
equation index: 324
type: SIMPLE_ASSIGN
pump.senRelPre.port_b.m_flow = 0.0
*/
void pump_v3_basicCold_t_eqFunction_324(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,324};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[412]] /* pump.senRelPre.port_b.m_flow variable */) = 0.0;
  threadData->lastEquationSolved = 324;
}

/*
equation index: 325
type: SIMPLE_ASSIGN
plugFlowPipe.vol_b.dynBal.medium.d = 995.586
*/
void pump_v3_basicCold_t_eqFunction_325(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,325};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[207]] /* plugFlowPipe.vol_b.dynBal.medium.d variable */) = 995.586;
  threadData->lastEquationSolved = 325;
}

/*
equation index: 326
type: SIMPLE_ASSIGN
plugFlowPipe.vol_a.dynBal.medium.d = 995.586
*/
void pump_v3_basicCold_t_eqFunction_326(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,326};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[191]] /* plugFlowPipe.vol_a.dynBal.medium.d variable */) = 995.586;
  threadData->lastEquationSolved = 326;
}

/*
equation index: 327
type: SIMPLE_ASSIGN
plugFlowPipe1.vol_b.dynBal.medium.d = 995.586
*/
void pump_v3_basicCold_t_eqFunction_327(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,327};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[265]] /* plugFlowPipe1.vol_b.dynBal.medium.d variable */) = 995.586;
  threadData->lastEquationSolved = 327;
}

/*
equation index: 328
type: SIMPLE_ASSIGN
plugFlowPipe1.vol_a.dynBal.medium.d = 995.586
*/
void pump_v3_basicCold_t_eqFunction_328(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,328};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[249]] /* plugFlowPipe1.vol_a.dynBal.medium.d variable */) = 995.586;
  threadData->lastEquationSolved = 328;
}

/*
equation index: 329
type: SIMPLE_ASSIGN
plugFlowPipe_heat.vol_b.dynBal.medium.d = 995.586
*/
void pump_v3_basicCold_t_eqFunction_329(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,329};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[382]] /* plugFlowPipe_heat.vol_b.dynBal.medium.d variable */) = 995.586;
  threadData->lastEquationSolved = 329;
}

/*
equation index: 330
type: SIMPLE_ASSIGN
plugFlowPipe_heat.vol_a.dynBal.medium.d = 995.586
*/
void pump_v3_basicCold_t_eqFunction_330(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,330};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[366]] /* plugFlowPipe_heat.vol_a.dynBal.medium.d variable */) = 995.586;
  threadData->lastEquationSolved = 330;
}

/*
equation index: 331
type: SIMPLE_ASSIGN
plugFlowPipe2.vol_b.dynBal.medium.d = 995.586
*/
void pump_v3_basicCold_t_eqFunction_331(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,331};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[324]] /* plugFlowPipe2.vol_b.dynBal.medium.d variable */) = 995.586;
  threadData->lastEquationSolved = 331;
}

/*
equation index: 332
type: SIMPLE_ASSIGN
plugFlowPipe2.vol_a.dynBal.medium.d = 995.586
*/
void pump_v3_basicCold_t_eqFunction_332(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,332};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[308]] /* plugFlowPipe2.vol_a.dynBal.medium.d variable */) = 995.586;
  threadData->lastEquationSolved = 332;
}

/*
equation index: 333
type: SIMPLE_ASSIGN
pump.eff.eta_internal = 0.7
*/
void pump_v3_basicCold_t_eqFunction_333(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,333};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[394]] /* pump.eff.eta_internal variable */) = 0.7;
  threadData->lastEquationSolved = 333;
}

/*
equation index: 334
type: SIMPLE_ASSIGN
pump.eff.etaMot = 0.7
*/
void pump_v3_basicCold_t_eqFunction_334(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,334};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[393]] /* pump.eff.etaMot variable */) = 0.7;
  threadData->lastEquationSolved = 334;
}

/*
equation index: 335
type: SIMPLE_ASSIGN
pump.vol.dynBal.medium.d = 995.586
*/
void pump_v3_basicCold_t_eqFunction_335(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,335};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[423]] /* pump.vol.dynBal.medium.d variable */) = 995.586;
  threadData->lastEquationSolved = 335;
}

/*
equation index: 336
type: ALGORITHM

  pump.eff.powEu_internal := IDEAS.Fluid.Movers.BaseClasses.Euler.power(IDEAS.Fluid.Movers.BaseClasses.Euler.peak(0.0, 0.0, 0.7), IDEAS.Fluid.Movers.BaseClasses.Characteristics.flowParametersInternal(2, {0.0, 2.29010853909155e-4}, {4400.0, 1.1000000000000003}));
*/
void pump_v3_basicCold_t_eqFunction_336(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,336};
  IDEAS_Fluid_Movers_BaseClasses_Euler_peak tmp24;
  IDEAS_Fluid_Movers_BaseClasses_Characteristics_flowParametersInternal tmp25;
  real_array tmp26;
  real_array tmp27;
  IDEAS_Fluid_Movers_BaseClasses_Euler_powerWithDerivative tmp28;
  real_array tmp29;
  real_array tmp30;
  real_array tmp31;
  real_array tmp32;
  real_array tmp33;
  real_array tmp34;
  tmp24._V_flow = 0.0;
  tmp24._dp = 0.0;
  tmp24._eta = 0.7;
  array_alloc_scalar_real_array(&tmp26, 2, (modelica_real)0.0, (modelica_real)2.29010853909155e-4);
  array_alloc_scalar_real_array(&tmp27, 2, (modelica_real)4400.0, (modelica_real)1.1000000000000003);
  tmp25._n = ((modelica_integer) 2);
  tmp25._V_flow = tmp26;
  tmp25._dp = tmp27;
  tmp28 = omc_IDEAS_Fluid_Movers_BaseClasses_Euler_power(threadData, tmp24, tmp25);
  array_alloc_scalar_real_array(&tmp29, 11, (modelica_real)real_array_get(tmp28._V_flow, 1, ((modelica_integer) 1)), (modelica_real)real_array_get(tmp28._V_flow, 1, ((modelica_integer) 2)), (modelica_real)real_array_get(tmp28._V_flow, 1, ((modelica_integer) 3)), (modelica_real)real_array_get(tmp28._V_flow, 1, ((modelica_integer) 4)), (modelica_real)real_array_get(tmp28._V_flow, 1, ((modelica_integer) 5)), (modelica_real)real_array_get(tmp28._V_flow, 1, ((modelica_integer) 6)), (modelica_real)real_array_get(tmp28._V_flow, 1, ((modelica_integer) 7)), (modelica_real)real_array_get(tmp28._V_flow, 1, ((modelica_integer) 8)), (modelica_real)real_array_get(tmp28._V_flow, 1, ((modelica_integer) 9)), (modelica_real)real_array_get(tmp28._V_flow, 1, ((modelica_integer) 10)), (modelica_real)real_array_get(tmp28._V_flow, 1, ((modelica_integer) 11)));
  real_array_create(&tmp30, ((modelica_real*)&((&(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[816]] /* pump.eff.powEu_internal.V_flow[1] PARAM */))[((modelica_integer) 1) - 1])), 1, (_index_t)11);
  real_array_copy_data(tmp29, tmp30);
  array_alloc_scalar_real_array(&tmp31, 11, (modelica_real)real_array_get(tmp28._P, 1, ((modelica_integer) 1)), (modelica_real)real_array_get(tmp28._P, 1, ((modelica_integer) 2)), (modelica_real)real_array_get(tmp28._P, 1, ((modelica_integer) 3)), (modelica_real)real_array_get(tmp28._P, 1, ((modelica_integer) 4)), (modelica_real)real_array_get(tmp28._P, 1, ((modelica_integer) 5)), (modelica_real)real_array_get(tmp28._P, 1, ((modelica_integer) 6)), (modelica_real)real_array_get(tmp28._P, 1, ((modelica_integer) 7)), (modelica_real)real_array_get(tmp28._P, 1, ((modelica_integer) 8)), (modelica_real)real_array_get(tmp28._P, 1, ((modelica_integer) 9)), (modelica_real)real_array_get(tmp28._P, 1, ((modelica_integer) 10)), (modelica_real)real_array_get(tmp28._P, 1, ((modelica_integer) 11)));
  real_array_create(&tmp32, ((modelica_real*)&((&(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[805]] /* pump.eff.powEu_internal.P[1] PARAM */))[((modelica_integer) 1) - 1])), 1, (_index_t)11);
  real_array_copy_data(tmp31, tmp32);
  array_alloc_scalar_real_array(&tmp33, 11, (modelica_real)real_array_get(tmp28._d, 1, ((modelica_integer) 1)), (modelica_real)real_array_get(tmp28._d, 1, ((modelica_integer) 2)), (modelica_real)real_array_get(tmp28._d, 1, ((modelica_integer) 3)), (modelica_real)real_array_get(tmp28._d, 1, ((modelica_integer) 4)), (modelica_real)real_array_get(tmp28._d, 1, ((modelica_integer) 5)), (modelica_real)real_array_get(tmp28._d, 1, ((modelica_integer) 6)), (modelica_real)real_array_get(tmp28._d, 1, ((modelica_integer) 7)), (modelica_real)real_array_get(tmp28._d, 1, ((modelica_integer) 8)), (modelica_real)real_array_get(tmp28._d, 1, ((modelica_integer) 9)), (modelica_real)real_array_get(tmp28._d, 1, ((modelica_integer) 10)), (modelica_real)real_array_get(tmp28._d, 1, ((modelica_integer) 11)));
  real_array_create(&tmp34, ((modelica_real*)&((&(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[827]] /* pump.eff.powEu_internal.d[1] PARAM */))[((modelica_integer) 1) - 1])), 1, (_index_t)11);
  real_array_copy_data(tmp33, tmp34);
  ;
  threadData->lastEquationSolved = 336;
}

/*
equation index: 337
type: SIMPLE_ASSIGN
pump.eff.powEu.P[7] = pump.eff.powEu_internal.P[7]
*/
void pump_v3_basicCold_t_eqFunction_337(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,337};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[778]] /* pump.eff.powEu.P[7] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[811]] /* pump.eff.powEu_internal.P[7] PARAM */);
  threadData->lastEquationSolved = 337;
}

/*
equation index: 338
type: SIMPLE_ASSIGN
pump.eff.powEuDer[3] = pump.eff.powEu_internal.d[3]
*/
void pump_v3_basicCold_t_eqFunction_338(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,338};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[796]] /* pump.eff.powEuDer[3] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[829]] /* pump.eff.powEu_internal.d[3] PARAM */);
  threadData->lastEquationSolved = 338;
}

/*
equation index: 339
type: SIMPLE_ASSIGN
pump.eff.powEu.P[3] = pump.eff.powEu_internal.P[3]
*/
void pump_v3_basicCold_t_eqFunction_339(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,339};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[774]] /* pump.eff.powEu.P[3] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[807]] /* pump.eff.powEu_internal.P[3] PARAM */);
  threadData->lastEquationSolved = 339;
}

/*
equation index: 340
type: SIMPLE_ASSIGN
pump.eff.powEu.V_flow[4] = pump.eff.powEu_internal.V_flow[4]
*/
void pump_v3_basicCold_t_eqFunction_340(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,340};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[786]] /* pump.eff.powEu.V_flow[4] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[819]] /* pump.eff.powEu_internal.V_flow[4] PARAM */);
  threadData->lastEquationSolved = 340;
}

/*
equation index: 341
type: SIMPLE_ASSIGN
pump.eff.powEu.V_flow[2] = pump.eff.powEu_internal.V_flow[2]
*/
void pump_v3_basicCold_t_eqFunction_341(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,341};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[784]] /* pump.eff.powEu.V_flow[2] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[817]] /* pump.eff.powEu_internal.V_flow[2] PARAM */);
  threadData->lastEquationSolved = 341;
}

/*
equation index: 342
type: SIMPLE_ASSIGN
pump.eff.powEu.V_flow[3] = pump.eff.powEu_internal.V_flow[3]
*/
void pump_v3_basicCold_t_eqFunction_342(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,342};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[785]] /* pump.eff.powEu.V_flow[3] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[818]] /* pump.eff.powEu_internal.V_flow[3] PARAM */);
  threadData->lastEquationSolved = 342;
}

/*
equation index: 343
type: SIMPLE_ASSIGN
pump.eff.powEuDer[5] = pump.eff.powEu_internal.d[5]
*/
void pump_v3_basicCold_t_eqFunction_343(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,343};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[798]] /* pump.eff.powEuDer[5] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[831]] /* pump.eff.powEu_internal.d[5] PARAM */);
  threadData->lastEquationSolved = 343;
}

/*
equation index: 344
type: SIMPLE_ASSIGN
pump.eff.powEu.V_flow[7] = pump.eff.powEu_internal.V_flow[7]
*/
void pump_v3_basicCold_t_eqFunction_344(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,344};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[789]] /* pump.eff.powEu.V_flow[7] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[822]] /* pump.eff.powEu_internal.V_flow[7] PARAM */);
  threadData->lastEquationSolved = 344;
}

/*
equation index: 345
type: SIMPLE_ASSIGN
pump.eff.powEuDer[9] = pump.eff.powEu_internal.d[9]
*/
void pump_v3_basicCold_t_eqFunction_345(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,345};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[802]] /* pump.eff.powEuDer[9] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[835]] /* pump.eff.powEu_internal.d[9] PARAM */);
  threadData->lastEquationSolved = 345;
}

/*
equation index: 346
type: SIMPLE_ASSIGN
pump.eff.powEuDer[2] = pump.eff.powEu_internal.d[2]
*/
void pump_v3_basicCold_t_eqFunction_346(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,346};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[795]] /* pump.eff.powEuDer[2] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[828]] /* pump.eff.powEu_internal.d[2] PARAM */);
  threadData->lastEquationSolved = 346;
}

/*
equation index: 347
type: SIMPLE_ASSIGN
pump.eff.powEu.V_flow[10] = pump.eff.powEu_internal.V_flow[10]
*/
void pump_v3_basicCold_t_eqFunction_347(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,347};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[792]] /* pump.eff.powEu.V_flow[10] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[825]] /* pump.eff.powEu_internal.V_flow[10] PARAM */);
  threadData->lastEquationSolved = 347;
}

/*
equation index: 348
type: SIMPLE_ASSIGN
pump.eff.powEu.V_flow[8] = pump.eff.powEu_internal.V_flow[8]
*/
void pump_v3_basicCold_t_eqFunction_348(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,348};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[790]] /* pump.eff.powEu.V_flow[8] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[823]] /* pump.eff.powEu_internal.V_flow[8] PARAM */);
  threadData->lastEquationSolved = 348;
}

/*
equation index: 349
type: SIMPLE_ASSIGN
pump.eff.powEuDer[11] = pump.eff.powEu_internal.d[11]
*/
void pump_v3_basicCold_t_eqFunction_349(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,349};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[804]] /* pump.eff.powEuDer[11] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[837]] /* pump.eff.powEu_internal.d[11] PARAM */);
  threadData->lastEquationSolved = 349;
}

/*
equation index: 350
type: SIMPLE_ASSIGN
pump.eff.powEu.P[6] = pump.eff.powEu_internal.P[6]
*/
void pump_v3_basicCold_t_eqFunction_350(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,350};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[777]] /* pump.eff.powEu.P[6] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[810]] /* pump.eff.powEu_internal.P[6] PARAM */);
  threadData->lastEquationSolved = 350;
}

/*
equation index: 351
type: SIMPLE_ASSIGN
pump.eff.powEuDer[7] = pump.eff.powEu_internal.d[7]
*/
void pump_v3_basicCold_t_eqFunction_351(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,351};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[800]] /* pump.eff.powEuDer[7] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[833]] /* pump.eff.powEu_internal.d[7] PARAM */);
  threadData->lastEquationSolved = 351;
}

/*
equation index: 352
type: SIMPLE_ASSIGN
pump.eff.powEu.P[2] = pump.eff.powEu_internal.P[2]
*/
void pump_v3_basicCold_t_eqFunction_352(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,352};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[773]] /* pump.eff.powEu.P[2] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[806]] /* pump.eff.powEu_internal.P[2] PARAM */);
  threadData->lastEquationSolved = 352;
}

/*
equation index: 353
type: SIMPLE_ASSIGN
pump.eff.powEuDer[1] = pump.eff.powEu_internal.d[1]
*/
void pump_v3_basicCold_t_eqFunction_353(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,353};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[794]] /* pump.eff.powEuDer[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[827]] /* pump.eff.powEu_internal.d[1] PARAM */);
  threadData->lastEquationSolved = 353;
}

/*
equation index: 354
type: SIMPLE_ASSIGN
pump.eff.powEuDer[8] = pump.eff.powEu_internal.d[8]
*/
void pump_v3_basicCold_t_eqFunction_354(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,354};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[801]] /* pump.eff.powEuDer[8] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[834]] /* pump.eff.powEu_internal.d[8] PARAM */);
  threadData->lastEquationSolved = 354;
}

/*
equation index: 355
type: SIMPLE_ASSIGN
pump.eff.powEu.P[1] = pump.eff.powEu_internal.P[1]
*/
void pump_v3_basicCold_t_eqFunction_355(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,355};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[772]] /* pump.eff.powEu.P[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[805]] /* pump.eff.powEu_internal.P[1] PARAM */);
  threadData->lastEquationSolved = 355;
}

/*
equation index: 356
type: SIMPLE_ASSIGN
pump.eff.powEu.P[9] = pump.eff.powEu_internal.P[9]
*/
void pump_v3_basicCold_t_eqFunction_356(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,356};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[780]] /* pump.eff.powEu.P[9] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[813]] /* pump.eff.powEu_internal.P[9] PARAM */);
  threadData->lastEquationSolved = 356;
}

/*
equation index: 357
type: SIMPLE_ASSIGN
pump.eff.powEuDer[4] = pump.eff.powEu_internal.d[4]
*/
void pump_v3_basicCold_t_eqFunction_357(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,357};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[797]] /* pump.eff.powEuDer[4] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[830]] /* pump.eff.powEu_internal.d[4] PARAM */);
  threadData->lastEquationSolved = 357;
}

/*
equation index: 358
type: SIMPLE_ASSIGN
pump.eff.powEu.P[11] = pump.eff.powEu_internal.P[11]
*/
void pump_v3_basicCold_t_eqFunction_358(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,358};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[782]] /* pump.eff.powEu.P[11] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[815]] /* pump.eff.powEu_internal.P[11] PARAM */);
  threadData->lastEquationSolved = 358;
}

/*
equation index: 359
type: SIMPLE_ASSIGN
pump.eff.powEu.V_flow[6] = pump.eff.powEu_internal.V_flow[6]
*/
void pump_v3_basicCold_t_eqFunction_359(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,359};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[788]] /* pump.eff.powEu.V_flow[6] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[821]] /* pump.eff.powEu_internal.V_flow[6] PARAM */);
  threadData->lastEquationSolved = 359;
}

/*
equation index: 360
type: SIMPLE_ASSIGN
pump.eff.powEu.V_flow[5] = pump.eff.powEu_internal.V_flow[5]
*/
void pump_v3_basicCold_t_eqFunction_360(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,360};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[787]] /* pump.eff.powEu.V_flow[5] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[820]] /* pump.eff.powEu_internal.V_flow[5] PARAM */);
  threadData->lastEquationSolved = 360;
}

/*
equation index: 361
type: SIMPLE_ASSIGN
pump.eff.powEu.V_flow[11] = pump.eff.powEu_internal.V_flow[11]
*/
void pump_v3_basicCold_t_eqFunction_361(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,361};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[793]] /* pump.eff.powEu.V_flow[11] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[826]] /* pump.eff.powEu_internal.V_flow[11] PARAM */);
  threadData->lastEquationSolved = 361;
}

/*
equation index: 362
type: SIMPLE_ASSIGN
pump.eff.powEu.V_flow[1] = pump.eff.powEu_internal.V_flow[1]
*/
void pump_v3_basicCold_t_eqFunction_362(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,362};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[783]] /* pump.eff.powEu.V_flow[1] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[816]] /* pump.eff.powEu_internal.V_flow[1] PARAM */);
  threadData->lastEquationSolved = 362;
}

/*
equation index: 363
type: SIMPLE_ASSIGN
pump.eff.powEu.V_flow[9] = pump.eff.powEu_internal.V_flow[9]
*/
void pump_v3_basicCold_t_eqFunction_363(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,363};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[791]] /* pump.eff.powEu.V_flow[9] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[824]] /* pump.eff.powEu_internal.V_flow[9] PARAM */);
  threadData->lastEquationSolved = 363;
}

/*
equation index: 364
type: SIMPLE_ASSIGN
pump.eff.powEu.P[5] = pump.eff.powEu_internal.P[5]
*/
void pump_v3_basicCold_t_eqFunction_364(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,364};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[776]] /* pump.eff.powEu.P[5] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[809]] /* pump.eff.powEu_internal.P[5] PARAM */);
  threadData->lastEquationSolved = 364;
}

/*
equation index: 365
type: SIMPLE_ASSIGN
pump.eff.powEu.P[4] = pump.eff.powEu_internal.P[4]
*/
void pump_v3_basicCold_t_eqFunction_365(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,365};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[775]] /* pump.eff.powEu.P[4] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[808]] /* pump.eff.powEu_internal.P[4] PARAM */);
  threadData->lastEquationSolved = 365;
}

/*
equation index: 366
type: SIMPLE_ASSIGN
pump.eff.powEu.P[10] = pump.eff.powEu_internal.P[10]
*/
void pump_v3_basicCold_t_eqFunction_366(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,366};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[781]] /* pump.eff.powEu.P[10] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[814]] /* pump.eff.powEu_internal.P[10] PARAM */);
  threadData->lastEquationSolved = 366;
}

/*
equation index: 367
type: SIMPLE_ASSIGN
pump.eff.powEu.P[8] = pump.eff.powEu_internal.P[8]
*/
void pump_v3_basicCold_t_eqFunction_367(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,367};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[779]] /* pump.eff.powEu.P[8] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[812]] /* pump.eff.powEu_internal.P[8] PARAM */);
  threadData->lastEquationSolved = 367;
}

/*
equation index: 368
type: SIMPLE_ASSIGN
pump.eff.powEuDer[10] = pump.eff.powEu_internal.d[10]
*/
void pump_v3_basicCold_t_eqFunction_368(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,368};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[803]] /* pump.eff.powEuDer[10] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[836]] /* pump.eff.powEu_internal.d[10] PARAM */);
  threadData->lastEquationSolved = 368;
}

/*
equation index: 369
type: SIMPLE_ASSIGN
pump.eff.powEuDer[6] = pump.eff.powEu_internal.d[6]
*/
void pump_v3_basicCold_t_eqFunction_369(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,369};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[799]] /* pump.eff.powEuDer[6] PARAM */) = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[832]] /* pump.eff.powEu_internal.d[6] PARAM */);
  threadData->lastEquationSolved = 369;
}

/*
equation index: 370
type: SIMPLE_ASSIGN
plugFlowPipe2.vol_a.heaFloSen.port_b.Q_flow = 0.0
*/
void pump_v3_basicCold_t_eqFunction_370(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,370};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[312]] /* plugFlowPipe2.vol_a.heaFloSen.port_b.Q_flow variable */) = 0.0;
  threadData->lastEquationSolved = 370;
}

/*
equation index: 371
type: SIMPLE_ASSIGN
plugFlowPipe2.vol_b.heaFloSen.port_b.Q_flow = 0.0
*/
void pump_v3_basicCold_t_eqFunction_371(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,371};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[328]] /* plugFlowPipe2.vol_b.heaFloSen.port_b.Q_flow variable */) = 0.0;
  threadData->lastEquationSolved = 371;
}

/*
equation index: 372
type: SIMPLE_ASSIGN
plugFlowPipe_heat.vol_a.heaFloSen.port_b.Q_flow = 0.0
*/
void pump_v3_basicCold_t_eqFunction_372(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,372};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[370]] /* plugFlowPipe_heat.vol_a.heaFloSen.port_b.Q_flow variable */) = 0.0;
  threadData->lastEquationSolved = 372;
}

/*
equation index: 373
type: SIMPLE_ASSIGN
plugFlowPipe_heat.vol_b.heaFloSen.port_b.Q_flow = 0.0
*/
void pump_v3_basicCold_t_eqFunction_373(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,373};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[385]] /* plugFlowPipe_heat.vol_b.heaFloSen.port_b.Q_flow variable */) = 0.0;
  threadData->lastEquationSolved = 373;
}

/*
equation index: 374
type: SIMPLE_ASSIGN
plugFlowPipe1.vol_a.heaFloSen.port_b.Q_flow = 0.0
*/
void pump_v3_basicCold_t_eqFunction_374(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,374};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[253]] /* plugFlowPipe1.vol_a.heaFloSen.port_b.Q_flow variable */) = 0.0;
  threadData->lastEquationSolved = 374;
}

/*
equation index: 375
type: SIMPLE_ASSIGN
plugFlowPipe1.vol_b.heaFloSen.port_b.Q_flow = 0.0
*/
void pump_v3_basicCold_t_eqFunction_375(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,375};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[268]] /* plugFlowPipe1.vol_b.heaFloSen.port_b.Q_flow variable */) = 0.0;
  threadData->lastEquationSolved = 375;
}

/*
equation index: 376
type: SIMPLE_ASSIGN
plugFlowPipe.vol_a.heaFloSen.port_b.Q_flow = 0.0
*/
void pump_v3_basicCold_t_eqFunction_376(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,376};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[195]] /* plugFlowPipe.vol_a.heaFloSen.port_b.Q_flow variable */) = 0.0;
  threadData->lastEquationSolved = 376;
}

/*
equation index: 377
type: SIMPLE_ASSIGN
plugFlowPipe.vol_b.heaFloSen.port_b.Q_flow = 0.0
*/
void pump_v3_basicCold_t_eqFunction_377(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,377};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[211]] /* plugFlowPipe.vol_b.heaFloSen.port_b.Q_flow variable */) = 0.0;
  threadData->lastEquationSolved = 377;
}

/*
equation index: 378
type: SIMPLE_ASSIGN
pump.rho_inlet.y = 995.586
*/
void pump_v3_basicCold_t_eqFunction_378(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,378};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[408]] /* pump.rho_inlet.y variable */) = 995.586;
  threadData->lastEquationSolved = 378;
}

/*
equation index: 379
type: SIMPLE_ASSIGN
bou1.ports[1].m_flow = 0.0
*/
void pump_v3_basicCold_t_eqFunction_379(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,379};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[149]] /* bou1.ports[1].m_flow variable */) = 0.0;
  threadData->lastEquationSolved = 379;
}
extern void pump_v3_basicCold_t_eqFunction_1083(DATA *data, threadData_t *threadData);


/*
equation index: 381
type: SIMPLE_ASSIGN
pump.eff.preDer3[4] = 0.0
*/
void pump_v3_basicCold_t_eqFunction_381(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,381};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[846]] /* pump.eff.preDer3[4] PARAM */) = 0.0;
  threadData->lastEquationSolved = 381;
}

/*
equation index: 382
type: SIMPLE_ASSIGN
pump.eff.preDer3[3] = 0.0
*/
void pump_v3_basicCold_t_eqFunction_382(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,382};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[845]] /* pump.eff.preDer3[3] PARAM */) = 0.0;
  threadData->lastEquationSolved = 382;
}

/*
equation index: 383
type: SIMPLE_ASSIGN
pump.eff.preDer3[2] = 0.0
*/
void pump_v3_basicCold_t_eqFunction_383(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,383};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[844]] /* pump.eff.preDer3[2] PARAM */) = 0.0;
  threadData->lastEquationSolved = 383;
}

/*
equation index: 384
type: SIMPLE_ASSIGN
pump.eff.preDer3[1] = 0.0
*/
void pump_v3_basicCold_t_eqFunction_384(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,384};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[843]] /* pump.eff.preDer3[1] PARAM */) = 0.0;
  threadData->lastEquationSolved = 384;
}

/*
equation index: 385
type: SIMPLE_ASSIGN
pump.eff.preDer2[3] = 0.0
*/
void pump_v3_basicCold_t_eqFunction_385(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,385};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[842]] /* pump.eff.preDer2[3] PARAM */) = 0.0;
  threadData->lastEquationSolved = 385;
}

/*
equation index: 386
type: SIMPLE_ASSIGN
pump.eff.preDer2[2] = 0.0
*/
void pump_v3_basicCold_t_eqFunction_386(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,386};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[841]] /* pump.eff.preDer2[2] PARAM */) = 0.0;
  threadData->lastEquationSolved = 386;
}

/*
equation index: 387
type: SIMPLE_ASSIGN
pump.eff.preDer2[1] = 0.0
*/
void pump_v3_basicCold_t_eqFunction_387(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,387};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[840]] /* pump.eff.preDer2[1] PARAM */) = 0.0;
  threadData->lastEquationSolved = 387;
}

/*
equation index: 388
type: ARRAY_CALL_ASSIGN

pump.eff.preDer1 = IDEAS.Utilities.Math.Functions.splineDerivatives({0.0, 2.29010853909155e-4}, {4400.0, 1.1000000000000003}, IDEAS.Utilities.Math.Functions.isMonotonic({4400.0, 1.1000000000000003}, false))
*/
void pump_v3_basicCold_t_eqFunction_388(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,388};
  real_array tmp35;
  real_array_create(&tmp35, ((modelica_real*)&((&(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[838]] /* pump.eff.preDer1[1] PARAM */))[((modelica_integer) 1) - 1])), 1, (_index_t)2);
  real_array_copy_data(omc_IDEAS_Utilities_Math_Functions_splineDerivatives(threadData, _OMC_LIT58, _OMC_LIT59, omc_IDEAS_Utilities_Math_Functions_isMonotonic(threadData, _OMC_LIT59, 0 /* false */)), tmp35);
  threadData->lastEquationSolved = 388;
}

/*
equation index: 389
type: SIMPLE_ASSIGN
plugFlowPipe2.timDel.t0 = time
*/
void pump_v3_basicCold_t_eqFunction_389(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,389};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[475]] /* plugFlowPipe2.timDel.t0 PARAM */) = data->localData[0]->timeValue;
  threadData->lastEquationSolved = 389;
}

/*
equation index: 390
type: SIMPLE_ASSIGN
plugFlowPipe_heat.timDel.t0 = time
*/
void pump_v3_basicCold_t_eqFunction_390(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,390};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[625]] /* plugFlowPipe_heat.timDel.t0 PARAM */) = data->localData[0]->timeValue;
  threadData->lastEquationSolved = 390;
}

/*
equation index: 391
type: SIMPLE_ASSIGN
plugFlowPipe1.timDel.t0 = time
*/
void pump_v3_basicCold_t_eqFunction_391(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,391};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[326]] /* plugFlowPipe1.timDel.t0 PARAM */) = data->localData[0]->timeValue;
  threadData->lastEquationSolved = 391;
}

/*
equation index: 392
type: SIMPLE_ASSIGN
plugFlowPipe.timDel.t0 = time
*/
void pump_v3_basicCold_t_eqFunction_392(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,392};
  (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[176]] /* plugFlowPipe.timDel.t0 PARAM */) = data->localData[0]->timeValue;
  threadData->lastEquationSolved = 392;
}

/*
equation index: 404
type: ALGORITHM

  assert(pump.nominalValuesDefineDefaultPressureCurve, "*** Warning in pump_v3_basicCold_t.pump: Mover is flow or pressure controlled and uses default pressure curve.
This leads to an approximate power consumption.
Set nominalValuesDefineDefaultPressureCurve=true to suppress this warning.");
  assert(pump.nominalValuesDefineDefaultPressureCurve or pump.per.etaHydMet <> IDEAS.Fluid.Movers.BaseClasses.Types.HydraulicEfficiencyMethod.Power_VolumeFlowRate, "*** Warning in pump_v3_basicCold_t.pump: Mover is flow or pressure controlled, uses default pressure curve and
has per.etaHydMet=.Power_VolumeFlowRate.
As this can cause wrong power consumption, the model overrides this setting by using per.etaHydMet=.NotProvided.
Set nominalValuesDefineDefaultPressureCurve=true to suppress this warning.");
  assert(not (pump.per.etaHydMet == IDEAS.Fluid.Movers.BaseClasses.Types.HydraulicEfficiencyMethod.Power_VolumeFlowRate or pump.per.etaHydMet == IDEAS.Fluid.Movers.BaseClasses.Types.HydraulicEfficiencyMethod.EulerNumber), "*** Warning in pump_v3_basicCold_t.pump: Mover has per.etaHydMet=.Power_VolumeFlowRate or per.etaHydMet=.EulerNumber.
This requires per.pressure to be provided.
Because it is not, the model overrides this setting by using per.etaHydMet=.NotProvided.
Also consider using models under Movers.Preconfigured which autopopulate a pressure curve.");
  assert(true, "*** Warning in pump_v3_basicCold_t.pump: Mover has per.etaMotMet=.Efficiency_MotorPartLoadRatio or per.etaMotMet=.GenericCurve.
This requires per.WMot_nominal or per.pressure to be provided. Because neither is provided,
the model overrides this setting and by using per.etaMotMet=.NotProvided.
Also consider using models under Movers.Preconfigured which autopopulate a pressure curve.");
  assert(true, "*** Warning in pump_v3_basicCold_t.pump: Mover has per.etaMotMet=.Efficiency_MotorPartLoadRatio or per.etaMotMet=.GenericCurve
and provides information for total electric power instead of hydraulic power.
This forms an algebraic loop. If simulation fails to converge,
see the \"Motor efficiency\" section in the users guide for how to correct it.");
*/
void pump_v3_basicCold_t_eqFunction_404(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,404};
  static const MMC_DEFSTRINGLIT(tmp36,233,"*** Warning in pump_v3_basicCold_t.pump: Mover is flow or pressure controlled and uses default pressure curve.\nThis leads to an approximate power consumption.\nSet nominalValuesDefineDefaultPressureCurve=true to suppress this warning.");
  static int tmp37 = 0;
  static const MMC_DEFSTRINGLIT(tmp38,339,"*** Warning in pump_v3_basicCold_t.pump: Mover is flow or pressure controlled, uses default pressure curve and\nhas per.etaHydMet=.Power_VolumeFlowRate.\nAs this can cause wrong power consumption, the model overrides this setting by using per.etaHydMet=.NotProvided.\nSet nominalValuesDefineDefaultPressureCurve=true to suppress this warning.");
  static int tmp39 = 0;
  static const MMC_DEFSTRINGLIT(tmp40,340,"*** Warning in pump_v3_basicCold_t.pump: Mover has per.etaHydMet=.Power_VolumeFlowRate or per.etaHydMet=.EulerNumber.\nThis requires per.pressure to be provided.\nBecause it is not, the model overrides this setting by using per.etaHydMet=.NotProvided.\nAlso consider using models under Movers.Preconfigured which autopopulate a pressure curve.");
  static int tmp41 = 0;
  static const MMC_DEFSTRINGLIT(tmp42,384,"*** Warning in pump_v3_basicCold_t.pump: Mover has per.etaMotMet=.Efficiency_MotorPartLoadRatio or per.etaMotMet=.GenericCurve.\nThis requires per.WMot_nominal or per.pressure to be provided. Because neither is provided,\nthe model overrides this setting and by using per.etaMotMet=.NotProvided.\nAlso consider using models under Movers.Preconfigured which autopopulate a pressure curve.");
  static int tmp43 = 0;
  static const MMC_DEFSTRINGLIT(tmp44,344,"*** Warning in pump_v3_basicCold_t.pump: Mover has per.etaMotMet=.Efficiency_MotorPartLoadRatio or per.etaMotMet=.GenericCurve\nand provides information for total electric power instead of hydraulic power.\nThis forms an algebraic loop. If simulation fails to converge,\nsee the \"Motor efficiency\" section in the users guide for how to correct it.");
  static int tmp45 = 0;
  if(!tmp37)
  {
    if(!(data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[221]] /* pump.nominalValuesDefineDefaultPressureCurve PARAM */))
    {
      {
        const char* assert_cond = "(pump.nominalValuesDefineDefaultPressureCurve)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/work/IDEAS-master/IDEAS/Fluid/Movers/BaseClasses/PartialFlowMachine.mo",391,3,398,39,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(MMC_REFSTRINGLIT(tmp36)));
        } else {
          FILE_INFO info = {"/work/IDEAS-master/IDEAS/Fluid/Movers/BaseClasses/PartialFlowMachine.mo",391,3,398,39,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(MMC_REFSTRINGLIT(tmp36)));
        }
      }
      tmp37 = 1;
    }
  }

  if(!tmp39)
  {
    if(!((data->simulationInfo->booleanParameter[data->simulationInfo->booleanParamsIndex[221]] /* pump.nominalValuesDefineDefaultPressureCurve PARAM */) || ((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[99]] /* pump.per.etaHydMet PARAM */) != 3)))
    {
      {
        const char* assert_cond = "(pump.nominalValuesDefineDefaultPressureCurve or pump.per.etaHydMet <> IDEAS.Fluid.Movers.BaseClasses.Types.HydraulicEfficiencyMethod.Power_VolumeFlowRate)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/work/IDEAS-master/IDEAS/Fluid/Movers/BaseClasses/PartialFlowMachine.mo",407,3,417,39,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(MMC_REFSTRINGLIT(tmp38)));
        } else {
          FILE_INFO info = {"/work/IDEAS-master/IDEAS/Fluid/Movers/BaseClasses/PartialFlowMachine.mo",407,3,417,39,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(MMC_REFSTRINGLIT(tmp38)));
        }
      }
      tmp39 = 1;
    }
  }

  if(!tmp41)
  {
    if(!(!(((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[99]] /* pump.per.etaHydMet PARAM */) == 3) || ((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[99]] /* pump.per.etaHydMet PARAM */) == 4))))
    {
      {
        const char* assert_cond = "(not (pump.per.etaHydMet == IDEAS.Fluid.Movers.BaseClasses.Types.HydraulicEfficiencyMethod.Power_VolumeFlowRate or pump.per.etaHydMet == IDEAS.Fluid.Movers.BaseClasses.Types.HydraulicEfficiencyMethod.EulerNumber))";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/work/IDEAS-master/IDEAS/Fluid/Movers/BaseClasses/PartialFlowMachine.mo",419,3,429,39,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(MMC_REFSTRINGLIT(tmp40)));
        } else {
          FILE_INFO info = {"/work/IDEAS-master/IDEAS/Fluid/Movers/BaseClasses/PartialFlowMachine.mo",419,3,429,39,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(MMC_REFSTRINGLIT(tmp40)));
        }
      }
      tmp41 = 1;
    }
  }

  if(!tmp43)
  {
    if(!1 /* true */)
    {
      {
        const char* assert_cond = "(true)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/work/IDEAS-master/IDEAS/Fluid/Movers/BaseClasses/PartialFlowMachine.mo",431,3,441,39,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(MMC_REFSTRINGLIT(tmp42)));
        } else {
          FILE_INFO info = {"/work/IDEAS-master/IDEAS/Fluid/Movers/BaseClasses/PartialFlowMachine.mo",431,3,441,39,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(MMC_REFSTRINGLIT(tmp42)));
        }
      }
      tmp43 = 1;
    }
  }

  if(!tmp45)
  {
    if(!1 /* true */)
    {
      {
        const char* assert_cond = "(true)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/work/IDEAS-master/IDEAS/Fluid/Movers/BaseClasses/PartialFlowMachine.mo",443,3,453,39,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(MMC_REFSTRINGLIT(tmp44)));
        } else {
          FILE_INFO info = {"/work/IDEAS-master/IDEAS/Fluid/Movers/BaseClasses/PartialFlowMachine.mo",443,3,453,39,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(MMC_REFSTRINGLIT(tmp44)));
        }
      }
      tmp45 = 1;
    }
  }
  threadData->lastEquationSolved = 404;
}

/*
equation index: 403
type: ALGORITHM

  assert(true, "m_flow_turbulent must be bigger than zero.");
*/
void pump_v3_basicCold_t_eqFunction_403(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,403};
  static const MMC_DEFSTRINGLIT(tmp46,42,"m_flow_turbulent must be bigger than zero.");
  static int tmp47 = 0;
  {
    if(!1 /* true */)
    {
      {
        const char* assert_cond = "(true)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/work/IDEAS-master/IDEAS/Fluid/FixedResistances/PressureDrop.mo",31,4,31,78,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(MMC_REFSTRINGLIT(tmp46)));
          data->simulationInfo->needToReThrow = 1;
        } else {
          FILE_INFO info = {"/work/IDEAS-master/IDEAS/Fluid/FixedResistances/PressureDrop.mo",31,4,31,78,0};
          omc_assert_withEquationIndexes(threadData, info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(MMC_REFSTRINGLIT(tmp46)));
        }
      }
    }
  }
  threadData->lastEquationSolved = 403;
}

/*
equation index: 402
type: ALGORITHM

  assert(true, "m_flow_nominal_pos must be non-zero. Check parameters.");
*/
void pump_v3_basicCold_t_eqFunction_402(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,402};
  static const MMC_DEFSTRINGLIT(tmp48,54,"m_flow_nominal_pos must be non-zero. Check parameters.");
  static int tmp49 = 0;
  {
    if(!1 /* true */)
    {
      {
        const char* assert_cond = "(true)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/work/IDEAS-master/IDEAS/Fluid/FixedResistances/PressureDrop.mo",34,2,34,90,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(MMC_REFSTRINGLIT(tmp48)));
          data->simulationInfo->needToReThrow = 1;
        } else {
          FILE_INFO info = {"/work/IDEAS-master/IDEAS/Fluid/FixedResistances/PressureDrop.mo",34,2,34,90,0};
          omc_assert_withEquationIndexes(threadData, info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(MMC_REFSTRINGLIT(tmp48)));
        }
      }
    }
  }
  threadData->lastEquationSolved = 402;
}

/*
equation index: 401
type: ALGORITHM

  assert(true, "m_flow_turbulent must be bigger than zero.");
*/
void pump_v3_basicCold_t_eqFunction_401(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,401};
  static const MMC_DEFSTRINGLIT(tmp50,42,"m_flow_turbulent must be bigger than zero.");
  static int tmp51 = 0;
  {
    if(!1 /* true */)
    {
      {
        const char* assert_cond = "(true)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/work/IDEAS-master/IDEAS/Fluid/FixedResistances/PressureDrop.mo",31,4,31,78,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(MMC_REFSTRINGLIT(tmp50)));
          data->simulationInfo->needToReThrow = 1;
        } else {
          FILE_INFO info = {"/work/IDEAS-master/IDEAS/Fluid/FixedResistances/PressureDrop.mo",31,4,31,78,0};
          omc_assert_withEquationIndexes(threadData, info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(MMC_REFSTRINGLIT(tmp50)));
        }
      }
    }
  }
  threadData->lastEquationSolved = 401;
}

/*
equation index: 400
type: ALGORITHM

  assert(true, "m_flow_nominal_pos must be non-zero. Check parameters.");
*/
void pump_v3_basicCold_t_eqFunction_400(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,400};
  static const MMC_DEFSTRINGLIT(tmp52,54,"m_flow_nominal_pos must be non-zero. Check parameters.");
  static int tmp53 = 0;
  {
    if(!1 /* true */)
    {
      {
        const char* assert_cond = "(true)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/work/IDEAS-master/IDEAS/Fluid/FixedResistances/PressureDrop.mo",34,2,34,90,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(MMC_REFSTRINGLIT(tmp52)));
          data->simulationInfo->needToReThrow = 1;
        } else {
          FILE_INFO info = {"/work/IDEAS-master/IDEAS/Fluid/FixedResistances/PressureDrop.mo",34,2,34,90,0};
          omc_assert_withEquationIndexes(threadData, info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(MMC_REFSTRINGLIT(tmp52)));
        }
      }
    }
  }
  threadData->lastEquationSolved = 400;
}

/*
equation index: 399
type: ALGORITHM

  assert(true, "m_flow_turbulent must be bigger than zero.");
*/
void pump_v3_basicCold_t_eqFunction_399(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,399};
  static const MMC_DEFSTRINGLIT(tmp54,42,"m_flow_turbulent must be bigger than zero.");
  static int tmp55 = 0;
  {
    if(!1 /* true */)
    {
      {
        const char* assert_cond = "(true)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/work/IDEAS-master/IDEAS/Fluid/FixedResistances/PressureDrop.mo",31,4,31,78,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(MMC_REFSTRINGLIT(tmp54)));
          data->simulationInfo->needToReThrow = 1;
        } else {
          FILE_INFO info = {"/work/IDEAS-master/IDEAS/Fluid/FixedResistances/PressureDrop.mo",31,4,31,78,0};
          omc_assert_withEquationIndexes(threadData, info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(MMC_REFSTRINGLIT(tmp54)));
        }
      }
    }
  }
  threadData->lastEquationSolved = 399;
}

/*
equation index: 398
type: ALGORITHM

  assert(true, "m_flow_nominal_pos must be non-zero. Check parameters.");
*/
void pump_v3_basicCold_t_eqFunction_398(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,398};
  static const MMC_DEFSTRINGLIT(tmp56,54,"m_flow_nominal_pos must be non-zero. Check parameters.");
  static int tmp57 = 0;
  {
    if(!1 /* true */)
    {
      {
        const char* assert_cond = "(true)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/work/IDEAS-master/IDEAS/Fluid/FixedResistances/PressureDrop.mo",34,2,34,90,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(MMC_REFSTRINGLIT(tmp56)));
          data->simulationInfo->needToReThrow = 1;
        } else {
          FILE_INFO info = {"/work/IDEAS-master/IDEAS/Fluid/FixedResistances/PressureDrop.mo",34,2,34,90,0};
          omc_assert_withEquationIndexes(threadData, info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(MMC_REFSTRINGLIT(tmp56)));
        }
      }
    }
  }
  threadData->lastEquationSolved = 398;
}

/*
equation index: 397
type: ALGORITHM

  assert(true, "m_flow_turbulent must be bigger than zero.");
*/
void pump_v3_basicCold_t_eqFunction_397(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,397};
  static const MMC_DEFSTRINGLIT(tmp58,42,"m_flow_turbulent must be bigger than zero.");
  static int tmp59 = 0;
  {
    if(!1 /* true */)
    {
      {
        const char* assert_cond = "(true)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/work/IDEAS-master/IDEAS/Fluid/FixedResistances/PressureDrop.mo",31,4,31,78,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(MMC_REFSTRINGLIT(tmp58)));
          data->simulationInfo->needToReThrow = 1;
        } else {
          FILE_INFO info = {"/work/IDEAS-master/IDEAS/Fluid/FixedResistances/PressureDrop.mo",31,4,31,78,0};
          omc_assert_withEquationIndexes(threadData, info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(MMC_REFSTRINGLIT(tmp58)));
        }
      }
    }
  }
  threadData->lastEquationSolved = 397;
}

/*
equation index: 396
type: ALGORITHM

  assert(true, "m_flow_nominal_pos must be non-zero. Check parameters.");
*/
void pump_v3_basicCold_t_eqFunction_396(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,396};
  static const MMC_DEFSTRINGLIT(tmp60,54,"m_flow_nominal_pos must be non-zero. Check parameters.");
  static int tmp61 = 0;
  {
    if(!1 /* true */)
    {
      {
        const char* assert_cond = "(true)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/work/IDEAS-master/IDEAS/Fluid/FixedResistances/PressureDrop.mo",34,2,34,90,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(MMC_REFSTRINGLIT(tmp60)));
          data->simulationInfo->needToReThrow = 1;
        } else {
          FILE_INFO info = {"/work/IDEAS-master/IDEAS/Fluid/FixedResistances/PressureDrop.mo",34,2,34,90,0};
          omc_assert_withEquationIndexes(threadData, info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(MMC_REFSTRINGLIT(tmp60)));
        }
      }
    }
  }
  threadData->lastEquationSolved = 396;
}

/*
equation index: 395
type: ALGORITHM

  assert(pump.eff.per.power.P[1] < 1e-6 or pump.eff.per.WMot_nominal > pump.eff.per.power.P[1] * 0.99, "In pump_v3_basicCold_t.pump.eff: The rated motor power provided in
         per.WMot_nominal is smaller than the maximum power provided in per.power.
         Use a larger value for per.WMot_nominal or leave it blank to allow the
         model to assume a default value.");
*/
void pump_v3_basicCold_t_eqFunction_395(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,395};
  modelica_boolean tmp62;
  modelica_boolean tmp63;
  static const MMC_DEFSTRINGLIT(tmp64,271,"In pump_v3_basicCold_t.pump.eff: The rated motor power provided in\n         per.WMot_nominal is smaller than the maximum power provided in per.power.\n         Use a larger value for per.WMot_nominal or leave it blank to allow the\n         model to assume a default value.");
  static int tmp65 = 0;
  {
    tmp62 = Less((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[763]] /* pump.eff.per.power.P[1] PARAM */),1e-6);
    tmp63 = Greater((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[729]] /* pump.eff.per.WMot_nominal PARAM */),((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[763]] /* pump.eff.per.power.P[1] PARAM */)) * (0.99));
    if(!(tmp62 || tmp63))
    {
      {
        const char* assert_cond = "(pump.eff.per.power.P[1] < 1e-6 or pump.eff.per.WMot_nominal > pump.eff.per.power.P[1] * 0.99)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/work/IDEAS-master/IDEAS/Fluid/Movers/BaseClasses/FlowMachineInterface.mo",433,3,437,44,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(MMC_REFSTRINGLIT(tmp64)));
          data->simulationInfo->needToReThrow = 1;
        } else {
          FILE_INFO info = {"/work/IDEAS-master/IDEAS/Fluid/Movers/BaseClasses/FlowMachineInterface.mo",433,3,437,44,0};
          omc_assert_withEquationIndexes(threadData, info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(MMC_REFSTRINGLIT(tmp64)));
        }
      }
    }
  }
  threadData->lastEquationSolved = 395;
}

/*
equation index: 394
type: ALGORITHM

  Modelica.Fluid.Utilities.checkBoundary("SimpleLiquidWater", {"SimpleLiquidWater"}, true, true, bou1.X_in_internal, "Boundary_pT");
*/
void pump_v3_basicCold_t_eqFunction_394(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,394};
  static const MMC_DEFSTRINGLIT(tmp66,17,"SimpleLiquidWater");
  string_array tmp67;
  static const MMC_DEFSTRINGLIT(tmp68,17,"SimpleLiquidWater");
  real_array tmp69;
  static const MMC_DEFSTRINGLIT(tmp70,11,"Boundary_pT");
  array_alloc_scalar_string_array(&tmp67, 1, (modelica_string)MMC_REFSTRINGLIT(tmp68));
  real_array_create(&tmp69, ((modelica_real*)&((&data->localData[0]->realVars[data->simulationInfo->realVarsIndex[146]] /* bou1.X_in_internal[1] variable */)[((modelica_integer) 1) - 1])), 1, (_index_t)1);
  omc_Modelica_Fluid_Utilities_checkBoundary(threadData, MMC_REFSTRINGLIT(tmp66), tmp67, 1 /* true */, 1 /* true */, tmp69, MMC_REFSTRINGLIT(tmp70));
  threadData->lastEquationSolved = 394;
}

/*
equation index: 393
type: ALGORITHM

  assert(bou1.p_in_internal > 1e4, "In pump_v3_basicCold_t.bou1: The parameter value p=" + String(bou1.p_in_internal, 6, 0, true) + " is low for water. This is likely an error.");
*/
void pump_v3_basicCold_t_eqFunction_393(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,393};
  modelica_boolean tmp71;
  static const MMC_DEFSTRINGLIT(tmp72,51,"In pump_v3_basicCold_t.bou1: The parameter value p=");
  modelica_string tmp73;
  modelica_metatype tmpMeta74;
  static const MMC_DEFSTRINGLIT(tmp75,43," is low for water. This is likely an error.");
  modelica_metatype tmpMeta76;
  static int tmp77 = 0;
  {
    tmp71 = Greater((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[147]] /* bou1.p_in_internal variable */),1e4);
    if(!tmp71)
    {
      tmp73 = modelica_real_to_modelica_string((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[147]] /* bou1.p_in_internal variable */), ((modelica_integer) 6), ((modelica_integer) 0), 1 /* true */);
      tmpMeta74 = stringAppend(MMC_REFSTRINGLIT(tmp72),tmp73);
      tmpMeta76 = stringAppend(tmpMeta74,MMC_REFSTRINGLIT(tmp75));
      {
        const char* assert_cond = "(bou1.p_in_internal > 1e4)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/work/IDEAS-master/IDEAS/Fluid/Sources/Boundary_pT.mo",46,7,47,104,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta76));
          data->simulationInfo->needToReThrow = 1;
        } else {
          FILE_INFO info = {"/work/IDEAS-master/IDEAS/Fluid/Sources/Boundary_pT.mo",46,7,47,104,0};
          omc_assert_withEquationIndexes(threadData, info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta76));
        }
      }
    }
  }
  threadData->lastEquationSolved = 393;
}
OMC_DISABLE_OPT
void pump_v3_basicCold_t_functionInitialEquations_0(DATA *data, threadData_t *threadData)
{
  static void (*const eqFunctions[376])(DATA*, threadData_t*) = {
    pump_v3_basicCold_t_eqFunction_1,
    pump_v3_basicCold_t_eqFunction_2,
    pump_v3_basicCold_t_eqFunction_3,
    pump_v3_basicCold_t_eqFunction_4,
    pump_v3_basicCold_t_eqFunction_5,
    pump_v3_basicCold_t_eqFunction_6,
    pump_v3_basicCold_t_eqFunction_7,
    pump_v3_basicCold_t_eqFunction_8,
    pump_v3_basicCold_t_eqFunction_9,
    pump_v3_basicCold_t_eqFunction_10,
    pump_v3_basicCold_t_eqFunction_11,
    pump_v3_basicCold_t_eqFunction_12,
    pump_v3_basicCold_t_eqFunction_13,
    pump_v3_basicCold_t_eqFunction_14,
    pump_v3_basicCold_t_eqFunction_15,
    pump_v3_basicCold_t_eqFunction_16,
    pump_v3_basicCold_t_eqFunction_17,
    pump_v3_basicCold_t_eqFunction_18,
    pump_v3_basicCold_t_eqFunction_19,
    pump_v3_basicCold_t_eqFunction_20,
    pump_v3_basicCold_t_eqFunction_21,
    pump_v3_basicCold_t_eqFunction_22,
    pump_v3_basicCold_t_eqFunction_23,
    pump_v3_basicCold_t_eqFunction_24,
    pump_v3_basicCold_t_eqFunction_25,
    pump_v3_basicCold_t_eqFunction_26,
    pump_v3_basicCold_t_eqFunction_27,
    pump_v3_basicCold_t_eqFunction_28,
    pump_v3_basicCold_t_eqFunction_29,
    pump_v3_basicCold_t_eqFunction_30,
    pump_v3_basicCold_t_eqFunction_31,
    pump_v3_basicCold_t_eqFunction_32,
    pump_v3_basicCold_t_eqFunction_33,
    pump_v3_basicCold_t_eqFunction_34,
    pump_v3_basicCold_t_eqFunction_35,
    pump_v3_basicCold_t_eqFunction_36,
    pump_v3_basicCold_t_eqFunction_37,
    pump_v3_basicCold_t_eqFunction_38,
    pump_v3_basicCold_t_eqFunction_39,
    pump_v3_basicCold_t_eqFunction_40,
    pump_v3_basicCold_t_eqFunction_41,
    pump_v3_basicCold_t_eqFunction_42,
    pump_v3_basicCold_t_eqFunction_43,
    pump_v3_basicCold_t_eqFunction_44,
    pump_v3_basicCold_t_eqFunction_45,
    pump_v3_basicCold_t_eqFunction_46,
    pump_v3_basicCold_t_eqFunction_47,
    pump_v3_basicCold_t_eqFunction_48,
    pump_v3_basicCold_t_eqFunction_49,
    pump_v3_basicCold_t_eqFunction_50,
    pump_v3_basicCold_t_eqFunction_51,
    pump_v3_basicCold_t_eqFunction_52,
    pump_v3_basicCold_t_eqFunction_53,
    pump_v3_basicCold_t_eqFunction_54,
    pump_v3_basicCold_t_eqFunction_55,
    pump_v3_basicCold_t_eqFunction_56,
    pump_v3_basicCold_t_eqFunction_57,
    pump_v3_basicCold_t_eqFunction_58,
    pump_v3_basicCold_t_eqFunction_59,
    pump_v3_basicCold_t_eqFunction_60,
    pump_v3_basicCold_t_eqFunction_805,
    pump_v3_basicCold_t_eqFunction_806,
    pump_v3_basicCold_t_eqFunction_63,
    pump_v3_basicCold_t_eqFunction_64,
    pump_v3_basicCold_t_eqFunction_65,
    pump_v3_basicCold_t_eqFunction_889,
    pump_v3_basicCold_t_eqFunction_891,
    pump_v3_basicCold_t_eqFunction_892,
    pump_v3_basicCold_t_eqFunction_69,
    pump_v3_basicCold_t_eqFunction_70,
    pump_v3_basicCold_t_eqFunction_71,
    pump_v3_basicCold_t_eqFunction_72,
    pump_v3_basicCold_t_eqFunction_73,
    pump_v3_basicCold_t_eqFunction_74,
    pump_v3_basicCold_t_eqFunction_75,
    pump_v3_basicCold_t_eqFunction_76,
    pump_v3_basicCold_t_eqFunction_77,
    pump_v3_basicCold_t_eqFunction_78,
    pump_v3_basicCold_t_eqFunction_79,
    pump_v3_basicCold_t_eqFunction_80,
    pump_v3_basicCold_t_eqFunction_861,
    pump_v3_basicCold_t_eqFunction_862,
    pump_v3_basicCold_t_eqFunction_83,
    pump_v3_basicCold_t_eqFunction_902,
    pump_v3_basicCold_t_eqFunction_903,
    pump_v3_basicCold_t_eqFunction_901,
    pump_v3_basicCold_t_eqFunction_900,
    pump_v3_basicCold_t_eqFunction_899,
    pump_v3_basicCold_t_eqFunction_898,
    pump_v3_basicCold_t_eqFunction_896,
    pump_v3_basicCold_t_eqFunction_897,
    pump_v3_basicCold_t_eqFunction_92,
    pump_v3_basicCold_t_eqFunction_866,
    pump_v3_basicCold_t_eqFunction_867,
    pump_v3_basicCold_t_eqFunction_95,
    pump_v3_basicCold_t_eqFunction_96,
    pump_v3_basicCold_t_eqFunction_915,
    pump_v3_basicCold_t_eqFunction_916,
    pump_v3_basicCold_t_eqFunction_99,
    pump_v3_basicCold_t_eqFunction_859,
    pump_v3_basicCold_t_eqFunction_860,
    pump_v3_basicCold_t_eqFunction_921,
    pump_v3_basicCold_t_eqFunction_922,
    pump_v3_basicCold_t_eqFunction_844,
    pump_v3_basicCold_t_eqFunction_845,
    pump_v3_basicCold_t_eqFunction_106,
    pump_v3_basicCold_t_eqFunction_841,
    pump_v3_basicCold_t_eqFunction_842,
    pump_v3_basicCold_t_eqFunction_826,
    pump_v3_basicCold_t_eqFunction_827,
    pump_v3_basicCold_t_eqFunction_111,
    pump_v3_basicCold_t_eqFunction_112,
    pump_v3_basicCold_t_eqFunction_113,
    pump_v3_basicCold_t_eqFunction_114,
    pump_v3_basicCold_t_eqFunction_875,
    pump_v3_basicCold_t_eqFunction_116,
    pump_v3_basicCold_t_eqFunction_117,
    pump_v3_basicCold_t_eqFunction_878,
    pump_v3_basicCold_t_eqFunction_879,
    pump_v3_basicCold_t_eqFunction_808,
    pump_v3_basicCold_t_eqFunction_809,
    pump_v3_basicCold_t_eqFunction_122,
    pump_v3_basicCold_t_eqFunction_123,
    pump_v3_basicCold_t_eqFunction_949,
    pump_v3_basicCold_t_eqFunction_987,
    pump_v3_basicCold_t_eqFunction_1018,
    pump_v3_basicCold_t_eqFunction_988,
    pump_v3_basicCold_t_eqFunction_128,
    pump_v3_basicCold_t_eqFunction_998,
    pump_v3_basicCold_t_eqFunction_1003,
    pump_v3_basicCold_t_eqFunction_1004,
    pump_v3_basicCold_t_eqFunction_989,
    pump_v3_basicCold_t_eqFunction_990,
    pump_v3_basicCold_t_eqFunction_992,
    pump_v3_basicCold_t_eqFunction_993,
    pump_v3_basicCold_t_eqFunction_991,
    pump_v3_basicCold_t_eqFunction_995,
    pump_v3_basicCold_t_eqFunction_138,
    pump_v3_basicCold_t_eqFunction_997,
    pump_v3_basicCold_t_eqFunction_1005,
    pump_v3_basicCold_t_eqFunction_994,
    pump_v3_basicCold_t_eqFunction_948,
    pump_v3_basicCold_t_eqFunction_947,
    pump_v3_basicCold_t_eqFunction_144,
    pump_v3_basicCold_t_eqFunction_145,
    pump_v3_basicCold_t_eqFunction_146,
    pump_v3_basicCold_t_eqFunction_923,
    pump_v3_basicCold_t_eqFunction_148,
    pump_v3_basicCold_t_eqFunction_885,
    pump_v3_basicCold_t_eqFunction_886,
    pump_v3_basicCold_t_eqFunction_893,
    pump_v3_basicCold_t_eqFunction_152,
    pump_v3_basicCold_t_eqFunction_153,
    pump_v3_basicCold_t_eqFunction_154,
    pump_v3_basicCold_t_eqFunction_155,
    pump_v3_basicCold_t_eqFunction_869,
    pump_v3_basicCold_t_eqFunction_871,
    pump_v3_basicCold_t_eqFunction_158,
    pump_v3_basicCold_t_eqFunction_159,
    pump_v3_basicCold_t_eqFunction_160,
    pump_v3_basicCold_t_eqFunction_168,
    pump_v3_basicCold_t_eqFunction_169,
    pump_v3_basicCold_t_eqFunction_170,
    pump_v3_basicCold_t_eqFunction_944,
    pump_v3_basicCold_t_eqFunction_945,
    pump_v3_basicCold_t_eqFunction_173,
    pump_v3_basicCold_t_eqFunction_938,
    pump_v3_basicCold_t_eqFunction_939,
    pump_v3_basicCold_t_eqFunction_940,
    pump_v3_basicCold_t_eqFunction_177,
    pump_v3_basicCold_t_eqFunction_178,
    pump_v3_basicCold_t_eqFunction_179,
    pump_v3_basicCold_t_eqFunction_1019,
    pump_v3_basicCold_t_eqFunction_181,
    pump_v3_basicCold_t_eqFunction_182,
    pump_v3_basicCold_t_eqFunction_183,
    pump_v3_basicCold_t_eqFunction_184,
    pump_v3_basicCold_t_eqFunction_185,
    pump_v3_basicCold_t_eqFunction_1007,
    pump_v3_basicCold_t_eqFunction_187,
    pump_v3_basicCold_t_eqFunction_1014,
    pump_v3_basicCold_t_eqFunction_1015,
    pump_v3_basicCold_t_eqFunction_894,
    pump_v3_basicCold_t_eqFunction_895,
    pump_v3_basicCold_t_eqFunction_1006,
    pump_v3_basicCold_t_eqFunction_193,
    pump_v3_basicCold_t_eqFunction_194,
    pump_v3_basicCold_t_eqFunction_195,
    pump_v3_basicCold_t_eqFunction_196,
    pump_v3_basicCold_t_eqFunction_847,
    pump_v3_basicCold_t_eqFunction_849,
    pump_v3_basicCold_t_eqFunction_199,
    pump_v3_basicCold_t_eqFunction_200,
    pump_v3_basicCold_t_eqFunction_201,
    pump_v3_basicCold_t_eqFunction_209,
    pump_v3_basicCold_t_eqFunction_1049,
    pump_v3_basicCold_t_eqFunction_1046,
    pump_v3_basicCold_t_eqFunction_1047,
    pump_v3_basicCold_t_eqFunction_1048,
    pump_v3_basicCold_t_eqFunction_214,
    pump_v3_basicCold_t_eqFunction_215,
    pump_v3_basicCold_t_eqFunction_216,
    pump_v3_basicCold_t_eqFunction_1043,
    pump_v3_basicCold_t_eqFunction_1044,
    pump_v3_basicCold_t_eqFunction_1045,
    pump_v3_basicCold_t_eqFunction_220,
    pump_v3_basicCold_t_eqFunction_221,
    pump_v3_basicCold_t_eqFunction_222,
    pump_v3_basicCold_t_eqFunction_950,
    pump_v3_basicCold_t_eqFunction_224,
    pump_v3_basicCold_t_eqFunction_225,
    pump_v3_basicCold_t_eqFunction_226,
    pump_v3_basicCold_t_eqFunction_227,
    pump_v3_basicCold_t_eqFunction_228,
    pump_v3_basicCold_t_eqFunction_1020,
    pump_v3_basicCold_t_eqFunction_230,
    pump_v3_basicCold_t_eqFunction_1027,
    pump_v3_basicCold_t_eqFunction_1028,
    pump_v3_basicCold_t_eqFunction_858,
    pump_v3_basicCold_t_eqFunction_1074,
    pump_v3_basicCold_t_eqFunction_1075,
    pump_v3_basicCold_t_eqFunction_236,
    pump_v3_basicCold_t_eqFunction_1052,
    pump_v3_basicCold_t_eqFunction_1053,
    pump_v3_basicCold_t_eqFunction_239,
    pump_v3_basicCold_t_eqFunction_240,
    pump_v3_basicCold_t_eqFunction_241,
    pump_v3_basicCold_t_eqFunction_242,
    pump_v3_basicCold_t_eqFunction_829,
    pump_v3_basicCold_t_eqFunction_831,
    pump_v3_basicCold_t_eqFunction_245,
    pump_v3_basicCold_t_eqFunction_246,
    pump_v3_basicCold_t_eqFunction_247,
    pump_v3_basicCold_t_eqFunction_255,
    pump_v3_basicCold_t_eqFunction_256,
    pump_v3_basicCold_t_eqFunction_257,
    pump_v3_basicCold_t_eqFunction_258,
    pump_v3_basicCold_t_eqFunction_1078,
    pump_v3_basicCold_t_eqFunction_1079,
    pump_v3_basicCold_t_eqFunction_1080,
    pump_v3_basicCold_t_eqFunction_262,
    pump_v3_basicCold_t_eqFunction_263,
    pump_v3_basicCold_t_eqFunction_264,
    pump_v3_basicCold_t_eqFunction_820,
    pump_v3_basicCold_t_eqFunction_912,
    pump_v3_basicCold_t_eqFunction_267,
    pump_v3_basicCold_t_eqFunction_268,
    pump_v3_basicCold_t_eqFunction_269,
    pump_v3_basicCold_t_eqFunction_270,
    pump_v3_basicCold_t_eqFunction_271,
    pump_v3_basicCold_t_eqFunction_951,
    pump_v3_basicCold_t_eqFunction_273,
    pump_v3_basicCold_t_eqFunction_958,
    pump_v3_basicCold_t_eqFunction_959,
    pump_v3_basicCold_t_eqFunction_840,
    pump_v3_basicCold_t_eqFunction_1069,
    pump_v3_basicCold_t_eqFunction_1070,
    pump_v3_basicCold_t_eqFunction_279,
    pump_v3_basicCold_t_eqFunction_964,
    pump_v3_basicCold_t_eqFunction_281,
    pump_v3_basicCold_t_eqFunction_282,
    pump_v3_basicCold_t_eqFunction_283,
    pump_v3_basicCold_t_eqFunction_284,
    pump_v3_basicCold_t_eqFunction_813,
    pump_v3_basicCold_t_eqFunction_811,
    pump_v3_basicCold_t_eqFunction_287,
    pump_v3_basicCold_t_eqFunction_288,
    pump_v3_basicCold_t_eqFunction_289,
    pump_v3_basicCold_t_eqFunction_297,
    pump_v3_basicCold_t_eqFunction_298,
    pump_v3_basicCold_t_eqFunction_299,
    pump_v3_basicCold_t_eqFunction_980,
    pump_v3_basicCold_t_eqFunction_981,
    pump_v3_basicCold_t_eqFunction_302,
    pump_v3_basicCold_t_eqFunction_984,
    pump_v3_basicCold_t_eqFunction_985,
    pump_v3_basicCold_t_eqFunction_986,
    pump_v3_basicCold_t_eqFunction_306,
    pump_v3_basicCold_t_eqFunction_307,
    pump_v3_basicCold_t_eqFunction_308,
    pump_v3_basicCold_t_eqFunction_309,
    pump_v3_basicCold_t_eqFunction_310,
    pump_v3_basicCold_t_eqFunction_311,
    pump_v3_basicCold_t_eqFunction_312,
    pump_v3_basicCold_t_eqFunction_313,
    pump_v3_basicCold_t_eqFunction_314,
    pump_v3_basicCold_t_eqFunction_315,
    pump_v3_basicCold_t_eqFunction_316,
    pump_v3_basicCold_t_eqFunction_317,
    pump_v3_basicCold_t_eqFunction_318,
    pump_v3_basicCold_t_eqFunction_319,
    pump_v3_basicCold_t_eqFunction_320,
    pump_v3_basicCold_t_eqFunction_321,
    pump_v3_basicCold_t_eqFunction_322,
    pump_v3_basicCold_t_eqFunction_323,
    pump_v3_basicCold_t_eqFunction_324,
    pump_v3_basicCold_t_eqFunction_325,
    pump_v3_basicCold_t_eqFunction_326,
    pump_v3_basicCold_t_eqFunction_327,
    pump_v3_basicCold_t_eqFunction_328,
    pump_v3_basicCold_t_eqFunction_329,
    pump_v3_basicCold_t_eqFunction_330,
    pump_v3_basicCold_t_eqFunction_331,
    pump_v3_basicCold_t_eqFunction_332,
    pump_v3_basicCold_t_eqFunction_333,
    pump_v3_basicCold_t_eqFunction_334,
    pump_v3_basicCold_t_eqFunction_335,
    pump_v3_basicCold_t_eqFunction_336,
    pump_v3_basicCold_t_eqFunction_337,
    pump_v3_basicCold_t_eqFunction_338,
    pump_v3_basicCold_t_eqFunction_339,
    pump_v3_basicCold_t_eqFunction_340,
    pump_v3_basicCold_t_eqFunction_341,
    pump_v3_basicCold_t_eqFunction_342,
    pump_v3_basicCold_t_eqFunction_343,
    pump_v3_basicCold_t_eqFunction_344,
    pump_v3_basicCold_t_eqFunction_345,
    pump_v3_basicCold_t_eqFunction_346,
    pump_v3_basicCold_t_eqFunction_347,
    pump_v3_basicCold_t_eqFunction_348,
    pump_v3_basicCold_t_eqFunction_349,
    pump_v3_basicCold_t_eqFunction_350,
    pump_v3_basicCold_t_eqFunction_351,
    pump_v3_basicCold_t_eqFunction_352,
    pump_v3_basicCold_t_eqFunction_353,
    pump_v3_basicCold_t_eqFunction_354,
    pump_v3_basicCold_t_eqFunction_355,
    pump_v3_basicCold_t_eqFunction_356,
    pump_v3_basicCold_t_eqFunction_357,
    pump_v3_basicCold_t_eqFunction_358,
    pump_v3_basicCold_t_eqFunction_359,
    pump_v3_basicCold_t_eqFunction_360,
    pump_v3_basicCold_t_eqFunction_361,
    pump_v3_basicCold_t_eqFunction_362,
    pump_v3_basicCold_t_eqFunction_363,
    pump_v3_basicCold_t_eqFunction_364,
    pump_v3_basicCold_t_eqFunction_365,
    pump_v3_basicCold_t_eqFunction_366,
    pump_v3_basicCold_t_eqFunction_367,
    pump_v3_basicCold_t_eqFunction_368,
    pump_v3_basicCold_t_eqFunction_369,
    pump_v3_basicCold_t_eqFunction_370,
    pump_v3_basicCold_t_eqFunction_371,
    pump_v3_basicCold_t_eqFunction_372,
    pump_v3_basicCold_t_eqFunction_373,
    pump_v3_basicCold_t_eqFunction_374,
    pump_v3_basicCold_t_eqFunction_375,
    pump_v3_basicCold_t_eqFunction_376,
    pump_v3_basicCold_t_eqFunction_377,
    pump_v3_basicCold_t_eqFunction_378,
    pump_v3_basicCold_t_eqFunction_379,
    pump_v3_basicCold_t_eqFunction_1083,
    pump_v3_basicCold_t_eqFunction_381,
    pump_v3_basicCold_t_eqFunction_382,
    pump_v3_basicCold_t_eqFunction_383,
    pump_v3_basicCold_t_eqFunction_384,
    pump_v3_basicCold_t_eqFunction_385,
    pump_v3_basicCold_t_eqFunction_386,
    pump_v3_basicCold_t_eqFunction_387,
    pump_v3_basicCold_t_eqFunction_388,
    pump_v3_basicCold_t_eqFunction_389,
    pump_v3_basicCold_t_eqFunction_390,
    pump_v3_basicCold_t_eqFunction_391,
    pump_v3_basicCold_t_eqFunction_392,
    pump_v3_basicCold_t_eqFunction_404,
    pump_v3_basicCold_t_eqFunction_403,
    pump_v3_basicCold_t_eqFunction_402,
    pump_v3_basicCold_t_eqFunction_401,
    pump_v3_basicCold_t_eqFunction_400,
    pump_v3_basicCold_t_eqFunction_399,
    pump_v3_basicCold_t_eqFunction_398,
    pump_v3_basicCold_t_eqFunction_397,
    pump_v3_basicCold_t_eqFunction_396,
    pump_v3_basicCold_t_eqFunction_395,
    pump_v3_basicCold_t_eqFunction_394,
    pump_v3_basicCold_t_eqFunction_393
  };
  
  for (int id = 0; id < 376; id++) {
    eqFunctions[id](data, threadData);
  }
}

int pump_v3_basicCold_t_functionInitialEquations(DATA *data, threadData_t *threadData)
{
  data->simulationInfo->discreteCall = 1;
  pump_v3_basicCold_t_functionInitialEquations_0(data, threadData);
  data->simulationInfo->discreteCall = 0;
  
  return 0;
}
extern void pump_v3_basicCold_t_eqFunction_1(DATA *data, threadData_t *threadData);

extern void pump_v3_basicCold_t_eqFunction_2(DATA *data, threadData_t *threadData);

extern void pump_v3_basicCold_t_eqFunction_3(DATA *data, threadData_t *threadData);

extern void pump_v3_basicCold_t_eqFunction_4(DATA *data, threadData_t *threadData);

extern void pump_v3_basicCold_t_eqFunction_5(DATA *data, threadData_t *threadData);

extern void pump_v3_basicCold_t_eqFunction_6(DATA *data, threadData_t *threadData);

extern void pump_v3_basicCold_t_eqFunction_7(DATA *data, threadData_t *threadData);

extern void pump_v3_basicCold_t_eqFunction_8(DATA *data, threadData_t *threadData);

extern void pump_v3_basicCold_t_eqFunction_9(DATA *data, threadData_t *threadData);

extern void pump_v3_basicCold_t_eqFunction_10(DATA *data, threadData_t *threadData);

extern void pump_v3_basicCold_t_eqFunction_11(DATA *data, threadData_t *threadData);

extern void pump_v3_basicCold_t_eqFunction_12(DATA *data, threadData_t *threadData);

extern void pump_v3_basicCold_t_eqFunction_13(DATA *data, threadData_t *threadData);

extern void pump_v3_basicCold_t_eqFunction_14(DATA *data, threadData_t *threadData);

extern void pump_v3_basicCold_t_eqFunction_15(DATA *data, threadData_t *threadData);

extern void pump_v3_basicCold_t_eqFunction_16(DATA *data, threadData_t *threadData);

extern void pump_v3_basicCold_t_eqFunction_17(DATA *data, threadData_t *threadData);

extern void pump_v3_basicCold_t_eqFunction_18(DATA *data, threadData_t *threadData);

extern void pump_v3_basicCold_t_eqFunction_19(DATA *data, threadData_t *threadData);

extern void pump_v3_basicCold_t_eqFunction_20(DATA *data, threadData_t *threadData);

extern void pump_v3_basicCold_t_eqFunction_21(DATA *data, threadData_t *threadData);

extern void pump_v3_basicCold_t_eqFunction_22(DATA *data, threadData_t *threadData);

extern void pump_v3_basicCold_t_eqFunction_23(DATA *data, threadData_t *threadData);

extern void pump_v3_basicCold_t_eqFunction_24(DATA *data, threadData_t *threadData);

extern void pump_v3_basicCold_t_eqFunction_25(DATA *data, threadData_t *threadData);

extern void pump_v3_basicCold_t_eqFunction_26(DATA *data, threadData_t *threadData);

extern void pump_v3_basicCold_t_eqFunction_27(DATA *data, threadData_t *threadData);

extern void pump_v3_basicCold_t_eqFunction_28(DATA *data, threadData_t *threadData);

extern void pump_v3_basicCold_t_eqFunction_29(DATA *data, threadData_t *threadData);

extern void pump_v3_basicCold_t_eqFunction_30(DATA *data, threadData_t *threadData);

extern void pump_v3_basicCold_t_eqFunction_31(DATA *data, threadData_t *threadData);

extern void pump_v3_basicCold_t_eqFunction_32(DATA *data, threadData_t *threadData);

extern void pump_v3_basicCold_t_eqFunction_33(DATA *data, threadData_t *threadData);

extern void pump_v3_basicCold_t_eqFunction_34(DATA *data, threadData_t *threadData);

extern void pump_v3_basicCold_t_eqFunction_35(DATA *data, threadData_t *threadData);

extern void pump_v3_basicCold_t_eqFunction_36(DATA *data, threadData_t *threadData);

extern void pump_v3_basicCold_t_eqFunction_37(DATA *data, threadData_t *threadData);

extern void pump_v3_basicCold_t_eqFunction_38(DATA *data, threadData_t *threadData);

extern void pump_v3_basicCold_t_eqFunction_39(DATA *data, threadData_t *threadData);

extern void pump_v3_basicCold_t_eqFunction_40(DATA *data, threadData_t *threadData);

extern void pump_v3_basicCold_t_eqFunction_41(DATA *data, threadData_t *threadData);

extern void pump_v3_basicCold_t_eqFunction_42(DATA *data, threadData_t *threadData);

extern void pump_v3_basicCold_t_eqFunction_43(DATA *data, threadData_t *threadData);

extern void pump_v3_basicCold_t_eqFunction_44(DATA *data, threadData_t *threadData);

extern void pump_v3_basicCold_t_eqFunction_45(DATA *data, threadData_t *threadData);

extern void pump_v3_basicCold_t_eqFunction_46(DATA *data, threadData_t *threadData);

extern void pump_v3_basicCold_t_eqFunction_47(DATA *data, threadData_t *threadData);

extern void pump_v3_basicCold_t_eqFunction_48(DATA *data, threadData_t *threadData);

extern void pump_v3_basicCold_t_eqFunction_49(DATA *data, threadData_t *threadData);

extern void pump_v3_basicCold_t_eqFunction_50(DATA *data, threadData_t *threadData);

extern void pump_v3_basicCold_t_eqFunction_51(DATA *data, threadData_t *threadData);

extern void pump_v3_basicCold_t_eqFunction_52(DATA *data, threadData_t *threadData);

extern void pump_v3_basicCold_t_eqFunction_53(DATA *data, threadData_t *threadData);

extern void pump_v3_basicCold_t_eqFunction_54(DATA *data, threadData_t *threadData);

extern void pump_v3_basicCold_t_eqFunction_55(DATA *data, threadData_t *threadData);

extern void pump_v3_basicCold_t_eqFunction_56(DATA *data, threadData_t *threadData);

extern void pump_v3_basicCold_t_eqFunction_57(DATA *data, threadData_t *threadData);

extern void pump_v3_basicCold_t_eqFunction_58(DATA *data, threadData_t *threadData);

extern void pump_v3_basicCold_t_eqFunction_59(DATA *data, threadData_t *threadData);

extern void pump_v3_basicCold_t_eqFunction_60(DATA *data, threadData_t *threadData);


/*
equation index: 465
type: SIMPLE_ASSIGN
pump.PToMed.u1 = 0.0
*/
void pump_v3_basicCold_t_eqFunction_465(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,465};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[388]] /* pump.PToMed.u1 variable */) = 0.0;
  threadData->lastEquationSolved = 465;
}
extern void pump_v3_basicCold_t_eqFunction_805(DATA *data, threadData_t *threadData);

extern void pump_v3_basicCold_t_eqFunction_806(DATA *data, threadData_t *threadData);

extern void pump_v3_basicCold_t_eqFunction_63(DATA *data, threadData_t *threadData);

extern void pump_v3_basicCold_t_eqFunction_64(DATA *data, threadData_t *threadData);

extern void pump_v3_basicCold_t_eqFunction_65(DATA *data, threadData_t *threadData);

extern void pump_v3_basicCold_t_eqFunction_889(DATA *data, threadData_t *threadData);

extern void pump_v3_basicCold_t_eqFunction_891(DATA *data, threadData_t *threadData);

extern void pump_v3_basicCold_t_eqFunction_892(DATA *data, threadData_t *threadData);

extern void pump_v3_basicCold_t_eqFunction_69(DATA *data, threadData_t *threadData);

extern void pump_v3_basicCold_t_eqFunction_70(DATA *data, threadData_t *threadData);

extern void pump_v3_basicCold_t_eqFunction_71(DATA *data, threadData_t *threadData);

extern void pump_v3_basicCold_t_eqFunction_72(DATA *data, threadData_t *threadData);

extern void pump_v3_basicCold_t_eqFunction_73(DATA *data, threadData_t *threadData);

extern void pump_v3_basicCold_t_eqFunction_74(DATA *data, threadData_t *threadData);

extern void pump_v3_basicCold_t_eqFunction_75(DATA *data, threadData_t *threadData);

extern void pump_v3_basicCold_t_eqFunction_76(DATA *data, threadData_t *threadData);

extern void pump_v3_basicCold_t_eqFunction_77(DATA *data, threadData_t *threadData);

extern void pump_v3_basicCold_t_eqFunction_78(DATA *data, threadData_t *threadData);

extern void pump_v3_basicCold_t_eqFunction_79(DATA *data, threadData_t *threadData);

extern void pump_v3_basicCold_t_eqFunction_80(DATA *data, threadData_t *threadData);

extern void pump_v3_basicCold_t_eqFunction_861(DATA *data, threadData_t *threadData);

extern void pump_v3_basicCold_t_eqFunction_862(DATA *data, threadData_t *threadData);

extern void pump_v3_basicCold_t_eqFunction_83(DATA *data, threadData_t *threadData);

extern void pump_v3_basicCold_t_eqFunction_902(DATA *data, threadData_t *threadData);

extern void pump_v3_basicCold_t_eqFunction_903(DATA *data, threadData_t *threadData);

extern void pump_v3_basicCold_t_eqFunction_901(DATA *data, threadData_t *threadData);

extern void pump_v3_basicCold_t_eqFunction_900(DATA *data, threadData_t *threadData);

extern void pump_v3_basicCold_t_eqFunction_899(DATA *data, threadData_t *threadData);

extern void pump_v3_basicCold_t_eqFunction_898(DATA *data, threadData_t *threadData);

extern void pump_v3_basicCold_t_eqFunction_896(DATA *data, threadData_t *threadData);

extern void pump_v3_basicCold_t_eqFunction_897(DATA *data, threadData_t *threadData);

extern void pump_v3_basicCold_t_eqFunction_92(DATA *data, threadData_t *threadData);

extern void pump_v3_basicCold_t_eqFunction_866(DATA *data, threadData_t *threadData);

extern void pump_v3_basicCold_t_eqFunction_867(DATA *data, threadData_t *threadData);


/*
equation index: 500
type: SIMPLE_ASSIGN
plugFlowPipe2.res.dp = 3226.583591758837 * pump.motSpe.y
*/
void pump_v3_basicCold_t_eqFunction_500(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,500};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[289]] /* plugFlowPipe2.res.dp variable */) = (3226.583591758837) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[17]] /* pump.motSpe.y STATE(1) */));
  threadData->lastEquationSolved = 500;
}
extern void pump_v3_basicCold_t_eqFunction_96(DATA *data, threadData_t *threadData);

extern void pump_v3_basicCold_t_eqFunction_915(DATA *data, threadData_t *threadData);

extern void pump_v3_basicCold_t_eqFunction_916(DATA *data, threadData_t *threadData);

extern void pump_v3_basicCold_t_eqFunction_99(DATA *data, threadData_t *threadData);

extern void pump_v3_basicCold_t_eqFunction_859(DATA *data, threadData_t *threadData);

extern void pump_v3_basicCold_t_eqFunction_860(DATA *data, threadData_t *threadData);

extern void pump_v3_basicCold_t_eqFunction_921(DATA *data, threadData_t *threadData);

extern void pump_v3_basicCold_t_eqFunction_922(DATA *data, threadData_t *threadData);

extern void pump_v3_basicCold_t_eqFunction_844(DATA *data, threadData_t *threadData);

extern void pump_v3_basicCold_t_eqFunction_845(DATA *data, threadData_t *threadData);


/*
equation index: 511
type: SIMPLE_ASSIGN
plugFlowPipe_heat.dp = 4839.875387638256 * pump.motSpe.y
*/
void pump_v3_basicCold_t_eqFunction_511(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,511};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[333]] /* plugFlowPipe_heat.dp variable */) = (4839.875387638256) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[17]] /* pump.motSpe.y STATE(1) */));
  threadData->lastEquationSolved = 511;
}
extern void pump_v3_basicCold_t_eqFunction_841(DATA *data, threadData_t *threadData);

extern void pump_v3_basicCold_t_eqFunction_842(DATA *data, threadData_t *threadData);

extern void pump_v3_basicCold_t_eqFunction_826(DATA *data, threadData_t *threadData);

extern void pump_v3_basicCold_t_eqFunction_827(DATA *data, threadData_t *threadData);


/*
equation index: 516
type: SIMPLE_ASSIGN
plugFlowPipe1.dp = 3226.583591758837 * pump.motSpe.y
*/
void pump_v3_basicCold_t_eqFunction_516(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,516};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[217]] /* plugFlowPipe1.dp variable */) = (3226.583591758837) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[17]] /* pump.motSpe.y STATE(1) */));
  threadData->lastEquationSolved = 516;
}
extern void pump_v3_basicCold_t_eqFunction_112(DATA *data, threadData_t *threadData);

extern void pump_v3_basicCold_t_eqFunction_113(DATA *data, threadData_t *threadData);

extern void pump_v3_basicCold_t_eqFunction_114(DATA *data, threadData_t *threadData);

extern void pump_v3_basicCold_t_eqFunction_875(DATA *data, threadData_t *threadData);

extern void pump_v3_basicCold_t_eqFunction_116(DATA *data, threadData_t *threadData);

extern void pump_v3_basicCold_t_eqFunction_117(DATA *data, threadData_t *threadData);

extern void pump_v3_basicCold_t_eqFunction_878(DATA *data, threadData_t *threadData);

extern void pump_v3_basicCold_t_eqFunction_879(DATA *data, threadData_t *threadData);

extern void pump_v3_basicCold_t_eqFunction_808(DATA *data, threadData_t *threadData);

extern void pump_v3_basicCold_t_eqFunction_809(DATA *data, threadData_t *threadData);


/*
equation index: 527
type: SIMPLE_ASSIGN
plugFlowPipe.res.dp = 3226.583591758837 * pump.motSpe.y
*/
void pump_v3_basicCold_t_eqFunction_527(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,527};
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[172]] /* plugFlowPipe.res.dp variable */) = (3226.583591758837) * ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[17]] /* pump.motSpe.y STATE(1) */));
  threadData->lastEquationSolved = 527;
}
extern void pump_v3_basicCold_t_eqFunction_123(DATA *data, threadData_t *threadData);

extern void pump_v3_basicCold_t_eqFunction_949(DATA *data, threadData_t *threadData);

extern void pump_v3_basicCold_t_eqFunction_987(DATA *data, threadData_t *threadData);

extern void pump_v3_basicCold_t_eqFunction_1018(DATA *data, threadData_t *threadData);

extern void pump_v3_basicCold_t_eqFunction_988(DATA *data, threadData_t *threadData);

extern void pump_v3_basicCold_t_eqFunction_128(DATA *data, threadData_t *threadData);

extern void pump_v3_basicCold_t_eqFunction_998(DATA *data, threadData_t *threadData);

extern void pump_v3_basicCold_t_eqFunction_1003(DATA *data, threadData_t *threadData);

extern void pump_v3_basicCold_t_eqFunction_1004(DATA *data, threadData_t *threadData);

extern void pump_v3_basicCold_t_eqFunction_989(DATA *data, threadData_t *threadData);

extern void pump_v3_basicCold_t_eqFunction_990(DATA *data, threadData_t *threadData);

extern void pump_v3_basicCold_t_eqFunction_992(DATA *data, threadData_t *threadData);

extern void pump_v3_basicCold_t_eqFunction_993(DATA *data, threadData_t *threadData);

extern void pump_v3_basicCold_t_eqFunction_991(DATA *data, threadData_t *threadData);

extern void pump_v3_basicCold_t_eqFunction_997(DATA *data, threadData_t *threadData);

extern void pump_v3_basicCold_t_eqFunction_1005(DATA *data, threadData_t *threadData);

extern void pump_v3_basicCold_t_eqFunction_995(DATA *data, threadData_t *threadData);

extern void pump_v3_basicCold_t_eqFunction_994(DATA *data, threadData_t *threadData);

extern void pump_v3_basicCold_t_eqFunction_948(DATA *data, threadData_t *threadData);

extern void pump_v3_basicCold_t_eqFunction_947(DATA *data, threadData_t *threadData);

extern void pump_v3_basicCold_t_eqFunction_144(DATA *data, threadData_t *threadData);

extern void pump_v3_basicCold_t_eqFunction_145(DATA *data, threadData_t *threadData);

extern void pump_v3_basicCold_t_eqFunction_146(DATA *data, threadData_t *threadData);

extern void pump_v3_basicCold_t_eqFunction_923(DATA *data, threadData_t *threadData);

extern void pump_v3_basicCold_t_eqFunction_148(DATA *data, threadData_t *threadData);

extern void pump_v3_basicCold_t_eqFunction_885(DATA *data, threadData_t *threadData);

extern void pump_v3_basicCold_t_eqFunction_886(DATA *data, threadData_t *threadData);

extern void pump_v3_basicCold_t_eqFunction_893(DATA *data, threadData_t *threadData);

extern void pump_v3_basicCold_t_eqFunction_152(DATA *data, threadData_t *threadData);

extern void pump_v3_basicCold_t_eqFunction_153(DATA *data, threadData_t *threadData);

extern void pump_v3_basicCold_t_eqFunction_154(DATA *data, threadData_t *threadData);


/*
equation index: 559
type: ALGORITHM

  (plugFlowPipe2.timDel.time_out_rev, plugFlowPipe2.timDel.time_out_des) := spatialDistribution(7, time, time, plugFlowPipe2.timDel.x, plugFlowPipe2.timDel.u >= 0.0, {0.0, 1.0}, {plugFlowPipe2.timDel.t0, plugFlowPipe2.timDel.t0 + plugFlowPipe2.timDel.t_out_start});
*/
void pump_v3_basicCold_t_eqFunction_559(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,559};
  modelica_real tmp0;
  modelica_boolean tmp1;
  tmp1 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[296]] /* plugFlowPipe2.timDel.u variable */),0.0);
  tmp0 = spatialDistribution(data, threadData, 7 /* index */, data->localData[0]->timeValue, data->localData[0]->timeValue, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[10]] /* plugFlowPipe2.timDel.x STATE(1,plugFlowPipe2.timDel.u) */), tmp1 ,&(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[294]] /* plugFlowPipe2.timDel.time_out_des variable */));
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[295]] /* plugFlowPipe2.timDel.time_out_rev variable */) = tmp0;
  threadData->lastEquationSolved = 559;
}
extern void pump_v3_basicCold_t_eqFunction_869(DATA *data, threadData_t *threadData);

extern void pump_v3_basicCold_t_eqFunction_871(DATA *data, threadData_t *threadData);

extern void pump_v3_basicCold_t_eqFunction_158(DATA *data, threadData_t *threadData);


/*
equation index: 563
type: ALGORITHM

  (plugFlowPipe2.del.port_a.h_outflow, plugFlowPipe2.del.port_b.h_outflow) := spatialDistribution(6, plugFlowPipe2.port_a.h_outflow, plugFlowPipe2.port_b.h_outflow, plugFlowPipe2.del.x, plugFlowPipe2.v >= 0.0, {0.0, 1.0}, {plugFlowPipe2.del.h_ini_in, plugFlowPipe2.del.h_ini_out});
*/
void pump_v3_basicCold_t_eqFunction_563(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,563};
  modelica_real tmp2;
  modelica_boolean tmp3;
  tmp3 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[297]] /* plugFlowPipe2.v variable */),0.0);
  tmp2 = spatialDistribution(data, threadData, 6 /* index */, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[286]] /* plugFlowPipe2.port_a.h_outflow variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[288]] /* plugFlowPipe2.port_b.h_outflow variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[9]] /* plugFlowPipe2.del.x STATE(1,plugFlowPipe2.v) */), tmp3 ,&(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[273]] /* plugFlowPipe2.del.port_b.h_outflow variable */));
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[272]] /* plugFlowPipe2.del.port_a.h_outflow variable */) = tmp2;
  threadData->lastEquationSolved = 563;
}
extern void pump_v3_basicCold_t_eqFunction_160(DATA *data, threadData_t *threadData);


void pump_v3_basicCold_t_eqFunction_565(DATA*, threadData_t*);
void pump_v3_basicCold_t_eqFunction_566(DATA*, threadData_t*);
void pump_v3_basicCold_t_eqFunction_567(DATA*, threadData_t*);
void pump_v3_basicCold_t_eqFunction_568(DATA*, threadData_t*);
void pump_v3_basicCold_t_eqFunction_569(DATA*, threadData_t*);
void pump_v3_basicCold_t_eqFunction_570(DATA*, threadData_t*);
void pump_v3_basicCold_t_eqFunction_571(DATA*, threadData_t*);
/*
equation index: 572
indexNonlinear: 4
type: NONLINEAR

vars: {plugFlowPipe2.heatPort.T}
eqns: {565, 566, 567, 568, 569, 570, 571}
*/
void pump_v3_basicCold_t_eqFunction_572(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,572};
  int retValue;
  infoStreamPrint(OMC_LOG_DT, 0, "Solving nonlinear system 572 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
  /* get old value */
  data->simulationInfo->nonlinearSystemData[4].nlsxOld[0] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[285]] /* plugFlowPipe2.heatPort.T variable */);
  retValue = solve_nonlinear_system(data, threadData, 4);
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,572};
    throwStreamPrintWithEquationIndexes(threadData, omc_dummyFileInfo, indexes, "Solving non-linear system 572 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
  }
  /* write solution */
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[285]] /* plugFlowPipe2.heatPort.T variable */) = data->simulationInfo->nonlinearSystemData[4].nlsx[0];
  threadData->lastEquationSolved = 572;
}
extern void pump_v3_basicCold_t_eqFunction_169(DATA *data, threadData_t *threadData);

extern void pump_v3_basicCold_t_eqFunction_170(DATA *data, threadData_t *threadData);

extern void pump_v3_basicCold_t_eqFunction_944(DATA *data, threadData_t *threadData);

extern void pump_v3_basicCold_t_eqFunction_945(DATA *data, threadData_t *threadData);

extern void pump_v3_basicCold_t_eqFunction_173(DATA *data, threadData_t *threadData);

extern void pump_v3_basicCold_t_eqFunction_938(DATA *data, threadData_t *threadData);

extern void pump_v3_basicCold_t_eqFunction_939(DATA *data, threadData_t *threadData);

extern void pump_v3_basicCold_t_eqFunction_940(DATA *data, threadData_t *threadData);

extern void pump_v3_basicCold_t_eqFunction_177(DATA *data, threadData_t *threadData);

extern void pump_v3_basicCold_t_eqFunction_178(DATA *data, threadData_t *threadData);

extern void pump_v3_basicCold_t_eqFunction_179(DATA *data, threadData_t *threadData);

extern void pump_v3_basicCold_t_eqFunction_1019(DATA *data, threadData_t *threadData);

extern void pump_v3_basicCold_t_eqFunction_181(DATA *data, threadData_t *threadData);

extern void pump_v3_basicCold_t_eqFunction_182(DATA *data, threadData_t *threadData);

extern void pump_v3_basicCold_t_eqFunction_183(DATA *data, threadData_t *threadData);

extern void pump_v3_basicCold_t_eqFunction_184(DATA *data, threadData_t *threadData);

extern void pump_v3_basicCold_t_eqFunction_185(DATA *data, threadData_t *threadData);

extern void pump_v3_basicCold_t_eqFunction_1007(DATA *data, threadData_t *threadData);

extern void pump_v3_basicCold_t_eqFunction_187(DATA *data, threadData_t *threadData);

extern void pump_v3_basicCold_t_eqFunction_1014(DATA *data, threadData_t *threadData);

extern void pump_v3_basicCold_t_eqFunction_1015(DATA *data, threadData_t *threadData);

extern void pump_v3_basicCold_t_eqFunction_894(DATA *data, threadData_t *threadData);

extern void pump_v3_basicCold_t_eqFunction_895(DATA *data, threadData_t *threadData);

extern void pump_v3_basicCold_t_eqFunction_1006(DATA *data, threadData_t *threadData);

extern void pump_v3_basicCold_t_eqFunction_193(DATA *data, threadData_t *threadData);

extern void pump_v3_basicCold_t_eqFunction_194(DATA *data, threadData_t *threadData);

extern void pump_v3_basicCold_t_eqFunction_195(DATA *data, threadData_t *threadData);


/*
equation index: 600
type: ALGORITHM

  (plugFlowPipe_heat.timDel.time_out_rev, plugFlowPipe_heat.timDel.time_out_des) := spatialDistribution(5, time, time, plugFlowPipe_heat.timDel.x, plugFlowPipe_heat.timDel.u >= 0.0, {0.0, 1.0}, {plugFlowPipe_heat.timDel.t0, plugFlowPipe_heat.timDel.t0 + plugFlowPipe_heat.timDel.t_out_start});
*/
void pump_v3_basicCold_t_eqFunction_600(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,600};
  modelica_real tmp4;
  modelica_boolean tmp5;
  tmp5 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[354]] /* plugFlowPipe_heat.timDel.u variable */),0.0);
  tmp4 = spatialDistribution(data, threadData, 5 /* index */, data->localData[0]->timeValue, data->localData[0]->timeValue, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[14]] /* plugFlowPipe_heat.timDel.x STATE(1,plugFlowPipe_heat.timDel.u) */), tmp5 ,&(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[352]] /* plugFlowPipe_heat.timDel.time_out_des variable */));
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[353]] /* plugFlowPipe_heat.timDel.time_out_rev variable */) = tmp4;
  threadData->lastEquationSolved = 600;
}
extern void pump_v3_basicCold_t_eqFunction_847(DATA *data, threadData_t *threadData);

extern void pump_v3_basicCold_t_eqFunction_849(DATA *data, threadData_t *threadData);

extern void pump_v3_basicCold_t_eqFunction_199(DATA *data, threadData_t *threadData);


/*
equation index: 604
type: ALGORITHM

  (plugFlowPipe_heat.del.port_a.h_outflow, plugFlowPipe_heat.del.port_b.h_outflow) := spatialDistribution(4, plugFlowPipe_heat.port_a.h_outflow, plugFlowPipe_heat.port_b.h_outflow, plugFlowPipe_heat.del.x / 1.5, plugFlowPipe_heat.v >= 0.0, {0.0, 1.0}, {plugFlowPipe_heat.del.h_ini_in, plugFlowPipe_heat.del.h_ini_out});
*/
void pump_v3_basicCold_t_eqFunction_604(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,604};
  modelica_real tmp6;
  modelica_boolean tmp7;
  tmp7 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[355]] /* plugFlowPipe_heat.v variable */),0.0);
  tmp6 = spatialDistribution(data, threadData, 4 /* index */, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[345]] /* plugFlowPipe_heat.port_a.h_outflow variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[347]] /* plugFlowPipe_heat.port_b.h_outflow variable */), DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[13]] /* plugFlowPipe_heat.del.x STATE(1,plugFlowPipe_heat.v) */),1.5,"1.5",equationIndexes), tmp7 ,&(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[332]] /* plugFlowPipe_heat.del.port_b.h_outflow variable */));
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[331]] /* plugFlowPipe_heat.del.port_a.h_outflow variable */) = tmp6;
  threadData->lastEquationSolved = 604;
}
extern void pump_v3_basicCold_t_eqFunction_201(DATA *data, threadData_t *threadData);


void pump_v3_basicCold_t_eqFunction_606(DATA*, threadData_t*);
void pump_v3_basicCold_t_eqFunction_607(DATA*, threadData_t*);
void pump_v3_basicCold_t_eqFunction_608(DATA*, threadData_t*);
void pump_v3_basicCold_t_eqFunction_609(DATA*, threadData_t*);
void pump_v3_basicCold_t_eqFunction_610(DATA*, threadData_t*);
void pump_v3_basicCold_t_eqFunction_611(DATA*, threadData_t*);
void pump_v3_basicCold_t_eqFunction_612(DATA*, threadData_t*);
/*
equation index: 613
indexNonlinear: 5
type: NONLINEAR

vars: {plugFlowPipe_heat.heatPort.T}
eqns: {606, 607, 608, 609, 610, 611, 612}
*/
void pump_v3_basicCold_t_eqFunction_613(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,613};
  int retValue;
  infoStreamPrint(OMC_LOG_DT, 0, "Solving nonlinear system 613 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
  /* get old value */
  data->simulationInfo->nonlinearSystemData[5].nlsxOld[0] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[344]] /* plugFlowPipe_heat.heatPort.T variable */);
  retValue = solve_nonlinear_system(data, threadData, 5);
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,613};
    throwStreamPrintWithEquationIndexes(threadData, omc_dummyFileInfo, indexes, "Solving non-linear system 613 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
  }
  /* write solution */
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[344]] /* plugFlowPipe_heat.heatPort.T variable */) = data->simulationInfo->nonlinearSystemData[5].nlsx[0];
  threadData->lastEquationSolved = 613;
}
extern void pump_v3_basicCold_t_eqFunction_1049(DATA *data, threadData_t *threadData);

extern void pump_v3_basicCold_t_eqFunction_1046(DATA *data, threadData_t *threadData);

extern void pump_v3_basicCold_t_eqFunction_1047(DATA *data, threadData_t *threadData);

extern void pump_v3_basicCold_t_eqFunction_1048(DATA *data, threadData_t *threadData);

extern void pump_v3_basicCold_t_eqFunction_214(DATA *data, threadData_t *threadData);

extern void pump_v3_basicCold_t_eqFunction_215(DATA *data, threadData_t *threadData);

extern void pump_v3_basicCold_t_eqFunction_216(DATA *data, threadData_t *threadData);

extern void pump_v3_basicCold_t_eqFunction_1043(DATA *data, threadData_t *threadData);

extern void pump_v3_basicCold_t_eqFunction_1044(DATA *data, threadData_t *threadData);

extern void pump_v3_basicCold_t_eqFunction_1045(DATA *data, threadData_t *threadData);

extern void pump_v3_basicCold_t_eqFunction_220(DATA *data, threadData_t *threadData);

extern void pump_v3_basicCold_t_eqFunction_221(DATA *data, threadData_t *threadData);

extern void pump_v3_basicCold_t_eqFunction_222(DATA *data, threadData_t *threadData);

extern void pump_v3_basicCold_t_eqFunction_950(DATA *data, threadData_t *threadData);

extern void pump_v3_basicCold_t_eqFunction_224(DATA *data, threadData_t *threadData);

extern void pump_v3_basicCold_t_eqFunction_225(DATA *data, threadData_t *threadData);

extern void pump_v3_basicCold_t_eqFunction_226(DATA *data, threadData_t *threadData);

extern void pump_v3_basicCold_t_eqFunction_227(DATA *data, threadData_t *threadData);

extern void pump_v3_basicCold_t_eqFunction_228(DATA *data, threadData_t *threadData);

extern void pump_v3_basicCold_t_eqFunction_1020(DATA *data, threadData_t *threadData);

extern void pump_v3_basicCold_t_eqFunction_230(DATA *data, threadData_t *threadData);

extern void pump_v3_basicCold_t_eqFunction_1027(DATA *data, threadData_t *threadData);

extern void pump_v3_basicCold_t_eqFunction_1028(DATA *data, threadData_t *threadData);

extern void pump_v3_basicCold_t_eqFunction_858(DATA *data, threadData_t *threadData);

extern void pump_v3_basicCold_t_eqFunction_1074(DATA *data, threadData_t *threadData);

extern void pump_v3_basicCold_t_eqFunction_1075(DATA *data, threadData_t *threadData);

extern void pump_v3_basicCold_t_eqFunction_236(DATA *data, threadData_t *threadData);

extern void pump_v3_basicCold_t_eqFunction_1052(DATA *data, threadData_t *threadData);

extern void pump_v3_basicCold_t_eqFunction_1053(DATA *data, threadData_t *threadData);

extern void pump_v3_basicCold_t_eqFunction_239(DATA *data, threadData_t *threadData);

extern void pump_v3_basicCold_t_eqFunction_240(DATA *data, threadData_t *threadData);

extern void pump_v3_basicCold_t_eqFunction_241(DATA *data, threadData_t *threadData);


/*
equation index: 646
type: ALGORITHM

  (plugFlowPipe1.timDel.time_out_rev, plugFlowPipe1.timDel.time_out_des) := spatialDistribution(3, time, time, plugFlowPipe1.timDel.x, plugFlowPipe1.timDel.u >= 0.0, {0.0, 1.0}, {plugFlowPipe1.timDel.t0, plugFlowPipe1.timDel.t0 + plugFlowPipe1.timDel.t_out_start});
*/
void pump_v3_basicCold_t_eqFunction_646(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,646};
  modelica_real tmp8;
  modelica_boolean tmp9;
  tmp9 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[237]] /* plugFlowPipe1.timDel.u variable */),0.0);
  tmp8 = spatialDistribution(data, threadData, 3 /* index */, data->localData[0]->timeValue, data->localData[0]->timeValue, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[6]] /* plugFlowPipe1.timDel.x STATE(1,plugFlowPipe1.timDel.u) */), tmp9 ,&(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[235]] /* plugFlowPipe1.timDel.time_out_des variable */));
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[236]] /* plugFlowPipe1.timDel.time_out_rev variable */) = tmp8;
  threadData->lastEquationSolved = 646;
}
extern void pump_v3_basicCold_t_eqFunction_829(DATA *data, threadData_t *threadData);

extern void pump_v3_basicCold_t_eqFunction_831(DATA *data, threadData_t *threadData);

extern void pump_v3_basicCold_t_eqFunction_245(DATA *data, threadData_t *threadData);


/*
equation index: 650
type: ALGORITHM

  (plugFlowPipe1.del.port_a.h_outflow, plugFlowPipe1.del.port_b.h_outflow) := spatialDistribution(2, plugFlowPipe1.port_a.h_outflow, senTemIn_heat.port_b.h_outflow, plugFlowPipe1.del.x, plugFlowPipe1.v >= 0.0, {0.0, 1.0}, {plugFlowPipe1.del.h_ini_in, plugFlowPipe1.del.h_ini_out});
*/
void pump_v3_basicCold_t_eqFunction_650(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,650};
  modelica_real tmp10;
  modelica_boolean tmp11;
  tmp11 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[238]] /* plugFlowPipe1.v variable */),0.0);
  tmp10 = spatialDistribution(data, threadData, 2 /* index */, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[229]] /* plugFlowPipe1.port_a.h_outflow variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[434]] /* senTemIn_heat.port_b.h_outflow variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5]] /* plugFlowPipe1.del.x STATE(1,plugFlowPipe1.v) */), tmp11 ,&(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[216]] /* plugFlowPipe1.del.port_b.h_outflow variable */));
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[215]] /* plugFlowPipe1.del.port_a.h_outflow variable */) = tmp10;
  threadData->lastEquationSolved = 650;
}
extern void pump_v3_basicCold_t_eqFunction_247(DATA *data, threadData_t *threadData);


void pump_v3_basicCold_t_eqFunction_652(DATA*, threadData_t*);
void pump_v3_basicCold_t_eqFunction_653(DATA*, threadData_t*);
void pump_v3_basicCold_t_eqFunction_654(DATA*, threadData_t*);
void pump_v3_basicCold_t_eqFunction_655(DATA*, threadData_t*);
void pump_v3_basicCold_t_eqFunction_656(DATA*, threadData_t*);
void pump_v3_basicCold_t_eqFunction_657(DATA*, threadData_t*);
void pump_v3_basicCold_t_eqFunction_658(DATA*, threadData_t*);
/*
equation index: 659
indexNonlinear: 6
type: NONLINEAR

vars: {plugFlowPipe1.heatPort.T}
eqns: {652, 653, 654, 655, 656, 657, 658}
*/
void pump_v3_basicCold_t_eqFunction_659(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,659};
  int retValue;
  infoStreamPrint(OMC_LOG_DT, 0, "Solving nonlinear system 659 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
  /* get old value */
  data->simulationInfo->nonlinearSystemData[6].nlsxOld[0] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[228]] /* plugFlowPipe1.heatPort.T variable */);
  retValue = solve_nonlinear_system(data, threadData, 6);
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,659};
    throwStreamPrintWithEquationIndexes(threadData, omc_dummyFileInfo, indexes, "Solving non-linear system 659 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
  }
  /* write solution */
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[228]] /* plugFlowPipe1.heatPort.T variable */) = data->simulationInfo->nonlinearSystemData[6].nlsx[0];
  threadData->lastEquationSolved = 659;
}
extern void pump_v3_basicCold_t_eqFunction_256(DATA *data, threadData_t *threadData);

extern void pump_v3_basicCold_t_eqFunction_257(DATA *data, threadData_t *threadData);

extern void pump_v3_basicCold_t_eqFunction_258(DATA *data, threadData_t *threadData);

extern void pump_v3_basicCold_t_eqFunction_1078(DATA *data, threadData_t *threadData);

extern void pump_v3_basicCold_t_eqFunction_1079(DATA *data, threadData_t *threadData);

extern void pump_v3_basicCold_t_eqFunction_1080(DATA *data, threadData_t *threadData);

extern void pump_v3_basicCold_t_eqFunction_262(DATA *data, threadData_t *threadData);

extern void pump_v3_basicCold_t_eqFunction_263(DATA *data, threadData_t *threadData);

extern void pump_v3_basicCold_t_eqFunction_264(DATA *data, threadData_t *threadData);

extern void pump_v3_basicCold_t_eqFunction_820(DATA *data, threadData_t *threadData);

extern void pump_v3_basicCold_t_eqFunction_912(DATA *data, threadData_t *threadData);

extern void pump_v3_basicCold_t_eqFunction_267(DATA *data, threadData_t *threadData);

extern void pump_v3_basicCold_t_eqFunction_268(DATA *data, threadData_t *threadData);

extern void pump_v3_basicCold_t_eqFunction_269(DATA *data, threadData_t *threadData);

extern void pump_v3_basicCold_t_eqFunction_270(DATA *data, threadData_t *threadData);

extern void pump_v3_basicCold_t_eqFunction_271(DATA *data, threadData_t *threadData);

extern void pump_v3_basicCold_t_eqFunction_951(DATA *data, threadData_t *threadData);

extern void pump_v3_basicCold_t_eqFunction_273(DATA *data, threadData_t *threadData);

extern void pump_v3_basicCold_t_eqFunction_958(DATA *data, threadData_t *threadData);

extern void pump_v3_basicCold_t_eqFunction_959(DATA *data, threadData_t *threadData);

extern void pump_v3_basicCold_t_eqFunction_840(DATA *data, threadData_t *threadData);

extern void pump_v3_basicCold_t_eqFunction_1069(DATA *data, threadData_t *threadData);

extern void pump_v3_basicCold_t_eqFunction_1070(DATA *data, threadData_t *threadData);

extern void pump_v3_basicCold_t_eqFunction_279(DATA *data, threadData_t *threadData);

extern void pump_v3_basicCold_t_eqFunction_964(DATA *data, threadData_t *threadData);

extern void pump_v3_basicCold_t_eqFunction_281(DATA *data, threadData_t *threadData);

extern void pump_v3_basicCold_t_eqFunction_282(DATA *data, threadData_t *threadData);

extern void pump_v3_basicCold_t_eqFunction_283(DATA *data, threadData_t *threadData);


/*
equation index: 688
type: ALGORITHM

  (plugFlowPipe.timDel.time_out_rev, plugFlowPipe.timDel.time_out_des) := spatialDistribution(1, time, time, plugFlowPipe.timDel.x, plugFlowPipe.timDel.u >= 0.0, {0.0, 1.0}, {plugFlowPipe.timDel.t0, plugFlowPipe.timDel.t0 + plugFlowPipe.timDel.t_out_start});
*/
void pump_v3_basicCold_t_eqFunction_688(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,688};
  modelica_real tmp12;
  modelica_boolean tmp13;
  tmp13 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[179]] /* plugFlowPipe.timDel.u variable */),0.0);
  tmp12 = spatialDistribution(data, threadData, 1 /* index */, data->localData[0]->timeValue, data->localData[0]->timeValue, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2]] /* plugFlowPipe.timDel.x STATE(1,plugFlowPipe.timDel.u) */), tmp13 ,&(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[177]] /* plugFlowPipe.timDel.time_out_des variable */));
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[178]] /* plugFlowPipe.timDel.time_out_rev variable */) = tmp12;
  threadData->lastEquationSolved = 688;
}
extern void pump_v3_basicCold_t_eqFunction_813(DATA *data, threadData_t *threadData);

extern void pump_v3_basicCold_t_eqFunction_811(DATA *data, threadData_t *threadData);

extern void pump_v3_basicCold_t_eqFunction_287(DATA *data, threadData_t *threadData);


/*
equation index: 692
type: ALGORITHM

  (plugFlowPipe.del.port_a.h_outflow, plugFlowPipe.del.port_b.h_outflow) := spatialDistribution(0, plugFlowPipe.port_a.h_outflow, senTemOut_cold.port_b.h_outflow, plugFlowPipe.del.x, plugFlowPipe.v >= 0.0, {0.0, 1.0}, {plugFlowPipe.del.h_ini_in, plugFlowPipe.del.h_ini_out});
*/
void pump_v3_basicCold_t_eqFunction_692(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,692};
  modelica_real tmp14;
  modelica_boolean tmp15;
  tmp15 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[180]] /* plugFlowPipe.v variable */),0.0);
  tmp14 = spatialDistribution(data, threadData, 0 /* index */, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[171]] /* plugFlowPipe.port_a.h_outflow variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[439]] /* senTemOut_cold.port_b.h_outflow variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1]] /* plugFlowPipe.del.x STATE(1,plugFlowPipe.v) */), tmp15 ,&(data->localData[0]->realVars[data->simulationInfo->realVarsIndex[158]] /* plugFlowPipe.del.port_b.h_outflow variable */));
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[157]] /* plugFlowPipe.del.port_a.h_outflow variable */) = tmp14;
  threadData->lastEquationSolved = 692;
}
extern void pump_v3_basicCold_t_eqFunction_289(DATA *data, threadData_t *threadData);


void pump_v3_basicCold_t_eqFunction_694(DATA*, threadData_t*);
void pump_v3_basicCold_t_eqFunction_695(DATA*, threadData_t*);
void pump_v3_basicCold_t_eqFunction_696(DATA*, threadData_t*);
void pump_v3_basicCold_t_eqFunction_697(DATA*, threadData_t*);
void pump_v3_basicCold_t_eqFunction_698(DATA*, threadData_t*);
void pump_v3_basicCold_t_eqFunction_699(DATA*, threadData_t*);
void pump_v3_basicCold_t_eqFunction_700(DATA*, threadData_t*);
/*
equation index: 701
indexNonlinear: 7
type: NONLINEAR

vars: {plugFlowPipe.heatPort.T}
eqns: {694, 695, 696, 697, 698, 699, 700}
*/
void pump_v3_basicCold_t_eqFunction_701(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,701};
  int retValue;
  infoStreamPrint(OMC_LOG_DT, 0, "Solving nonlinear system 701 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
  /* get old value */
  data->simulationInfo->nonlinearSystemData[7].nlsxOld[0] = (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[170]] /* plugFlowPipe.heatPort.T variable */);
  retValue = solve_nonlinear_system(data, threadData, 7);
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,701};
    throwStreamPrintWithEquationIndexes(threadData, omc_dummyFileInfo, indexes, "Solving non-linear system 701 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
  }
  /* write solution */
  (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[170]] /* plugFlowPipe.heatPort.T variable */) = data->simulationInfo->nonlinearSystemData[7].nlsx[0];
  threadData->lastEquationSolved = 701;
}
extern void pump_v3_basicCold_t_eqFunction_298(DATA *data, threadData_t *threadData);

extern void pump_v3_basicCold_t_eqFunction_299(DATA *data, threadData_t *threadData);

extern void pump_v3_basicCold_t_eqFunction_980(DATA *data, threadData_t *threadData);

extern void pump_v3_basicCold_t_eqFunction_981(DATA *data, threadData_t *threadData);

extern void pump_v3_basicCold_t_eqFunction_302(DATA *data, threadData_t *threadData);

extern void pump_v3_basicCold_t_eqFunction_984(DATA *data, threadData_t *threadData);

extern void pump_v3_basicCold_t_eqFunction_985(DATA *data, threadData_t *threadData);

extern void pump_v3_basicCold_t_eqFunction_986(DATA *data, threadData_t *threadData);

extern void pump_v3_basicCold_t_eqFunction_306(DATA *data, threadData_t *threadData);

extern void pump_v3_basicCold_t_eqFunction_307(DATA *data, threadData_t *threadData);

extern void pump_v3_basicCold_t_eqFunction_308(DATA *data, threadData_t *threadData);

extern void pump_v3_basicCold_t_eqFunction_309(DATA *data, threadData_t *threadData);

extern void pump_v3_basicCold_t_eqFunction_310(DATA *data, threadData_t *threadData);

extern void pump_v3_basicCold_t_eqFunction_311(DATA *data, threadData_t *threadData);

extern void pump_v3_basicCold_t_eqFunction_312(DATA *data, threadData_t *threadData);

extern void pump_v3_basicCold_t_eqFunction_313(DATA *data, threadData_t *threadData);

extern void pump_v3_basicCold_t_eqFunction_314(DATA *data, threadData_t *threadData);

extern void pump_v3_basicCold_t_eqFunction_315(DATA *data, threadData_t *threadData);

extern void pump_v3_basicCold_t_eqFunction_316(DATA *data, threadData_t *threadData);

extern void pump_v3_basicCold_t_eqFunction_317(DATA *data, threadData_t *threadData);

extern void pump_v3_basicCold_t_eqFunction_318(DATA *data, threadData_t *threadData);

extern void pump_v3_basicCold_t_eqFunction_319(DATA *data, threadData_t *threadData);

extern void pump_v3_basicCold_t_eqFunction_320(DATA *data, threadData_t *threadData);

extern void pump_v3_basicCold_t_eqFunction_321(DATA *data, threadData_t *threadData);

extern void pump_v3_basicCold_t_eqFunction_322(DATA *data, threadData_t *threadData);

extern void pump_v3_basicCold_t_eqFunction_323(DATA *data, threadData_t *threadData);

extern void pump_v3_basicCold_t_eqFunction_324(DATA *data, threadData_t *threadData);

extern void pump_v3_basicCold_t_eqFunction_325(DATA *data, threadData_t *threadData);

extern void pump_v3_basicCold_t_eqFunction_326(DATA *data, threadData_t *threadData);

extern void pump_v3_basicCold_t_eqFunction_327(DATA *data, threadData_t *threadData);

extern void pump_v3_basicCold_t_eqFunction_328(DATA *data, threadData_t *threadData);

extern void pump_v3_basicCold_t_eqFunction_329(DATA *data, threadData_t *threadData);

extern void pump_v3_basicCold_t_eqFunction_330(DATA *data, threadData_t *threadData);

extern void pump_v3_basicCold_t_eqFunction_331(DATA *data, threadData_t *threadData);

extern void pump_v3_basicCold_t_eqFunction_332(DATA *data, threadData_t *threadData);

extern void pump_v3_basicCold_t_eqFunction_333(DATA *data, threadData_t *threadData);

extern void pump_v3_basicCold_t_eqFunction_334(DATA *data, threadData_t *threadData);

extern void pump_v3_basicCold_t_eqFunction_335(DATA *data, threadData_t *threadData);


/*
equation index: 740
type: ALGORITHM

  pump.eff.powEu_internal := IDEAS.Fluid.Movers.BaseClasses.Euler.power(IDEAS.Fluid.Movers.BaseClasses.Euler.peak(0.0, 0.0, 0.7), IDEAS.Fluid.Movers.BaseClasses.Characteristics.flowParametersInternal(2, {0.0, 2.29010853909155e-4}, {4400.0, 1.1000000000000003}));
*/
void pump_v3_basicCold_t_eqFunction_740(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,740};
  IDEAS_Fluid_Movers_BaseClasses_Euler_peak tmp16;
  IDEAS_Fluid_Movers_BaseClasses_Characteristics_flowParametersInternal tmp17;
  real_array tmp18;
  real_array tmp19;
  IDEAS_Fluid_Movers_BaseClasses_Euler_powerWithDerivative tmp20;
  real_array tmp21;
  real_array tmp22;
  real_array tmp23;
  real_array tmp24;
  real_array tmp25;
  real_array tmp26;
  tmp16._V_flow = 0.0;
  tmp16._dp = 0.0;
  tmp16._eta = 0.7;
  array_alloc_scalar_real_array(&tmp18, 2, (modelica_real)0.0, (modelica_real)2.29010853909155e-4);
  array_alloc_scalar_real_array(&tmp19, 2, (modelica_real)4400.0, (modelica_real)1.1000000000000003);
  tmp17._n = ((modelica_integer) 2);
  tmp17._V_flow = tmp18;
  tmp17._dp = tmp19;
  tmp20 = omc_IDEAS_Fluid_Movers_BaseClasses_Euler_power(threadData, tmp16, tmp17);
  array_alloc_scalar_real_array(&tmp21, 11, (modelica_real)real_array_get(tmp20._V_flow, 1, ((modelica_integer) 1)), (modelica_real)real_array_get(tmp20._V_flow, 1, ((modelica_integer) 2)), (modelica_real)real_array_get(tmp20._V_flow, 1, ((modelica_integer) 3)), (modelica_real)real_array_get(tmp20._V_flow, 1, ((modelica_integer) 4)), (modelica_real)real_array_get(tmp20._V_flow, 1, ((modelica_integer) 5)), (modelica_real)real_array_get(tmp20._V_flow, 1, ((modelica_integer) 6)), (modelica_real)real_array_get(tmp20._V_flow, 1, ((modelica_integer) 7)), (modelica_real)real_array_get(tmp20._V_flow, 1, ((modelica_integer) 8)), (modelica_real)real_array_get(tmp20._V_flow, 1, ((modelica_integer) 9)), (modelica_real)real_array_get(tmp20._V_flow, 1, ((modelica_integer) 10)), (modelica_real)real_array_get(tmp20._V_flow, 1, ((modelica_integer) 11)));
  real_array_create(&tmp22, ((modelica_real*)&((&(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[816]] /* pump.eff.powEu_internal.V_flow[1] PARAM */))[((modelica_integer) 1) - 1])), 1, (_index_t)11);
  real_array_copy_data(tmp21, tmp22);
  array_alloc_scalar_real_array(&tmp23, 11, (modelica_real)real_array_get(tmp20._P, 1, ((modelica_integer) 1)), (modelica_real)real_array_get(tmp20._P, 1, ((modelica_integer) 2)), (modelica_real)real_array_get(tmp20._P, 1, ((modelica_integer) 3)), (modelica_real)real_array_get(tmp20._P, 1, ((modelica_integer) 4)), (modelica_real)real_array_get(tmp20._P, 1, ((modelica_integer) 5)), (modelica_real)real_array_get(tmp20._P, 1, ((modelica_integer) 6)), (modelica_real)real_array_get(tmp20._P, 1, ((modelica_integer) 7)), (modelica_real)real_array_get(tmp20._P, 1, ((modelica_integer) 8)), (modelica_real)real_array_get(tmp20._P, 1, ((modelica_integer) 9)), (modelica_real)real_array_get(tmp20._P, 1, ((modelica_integer) 10)), (modelica_real)real_array_get(tmp20._P, 1, ((modelica_integer) 11)));
  real_array_create(&tmp24, ((modelica_real*)&((&(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[805]] /* pump.eff.powEu_internal.P[1] PARAM */))[((modelica_integer) 1) - 1])), 1, (_index_t)11);
  real_array_copy_data(tmp23, tmp24);
  array_alloc_scalar_real_array(&tmp25, 11, (modelica_real)real_array_get(tmp20._d, 1, ((modelica_integer) 1)), (modelica_real)real_array_get(tmp20._d, 1, ((modelica_integer) 2)), (modelica_real)real_array_get(tmp20._d, 1, ((modelica_integer) 3)), (modelica_real)real_array_get(tmp20._d, 1, ((modelica_integer) 4)), (modelica_real)real_array_get(tmp20._d, 1, ((modelica_integer) 5)), (modelica_real)real_array_get(tmp20._d, 1, ((modelica_integer) 6)), (modelica_real)real_array_get(tmp20._d, 1, ((modelica_integer) 7)), (modelica_real)real_array_get(tmp20._d, 1, ((modelica_integer) 8)), (modelica_real)real_array_get(tmp20._d, 1, ((modelica_integer) 9)), (modelica_real)real_array_get(tmp20._d, 1, ((modelica_integer) 10)), (modelica_real)real_array_get(tmp20._d, 1, ((modelica_integer) 11)));
  real_array_create(&tmp26, ((modelica_real*)&((&(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[827]] /* pump.eff.powEu_internal.d[1] PARAM */))[((modelica_integer) 1) - 1])), 1, (_index_t)11);
  real_array_copy_data(tmp25, tmp26);
  ;
  threadData->lastEquationSolved = 740;
}
extern void pump_v3_basicCold_t_eqFunction_337(DATA *data, threadData_t *threadData);

extern void pump_v3_basicCold_t_eqFunction_338(DATA *data, threadData_t *threadData);

extern void pump_v3_basicCold_t_eqFunction_339(DATA *data, threadData_t *threadData);

extern void pump_v3_basicCold_t_eqFunction_340(DATA *data, threadData_t *threadData);

extern void pump_v3_basicCold_t_eqFunction_341(DATA *data, threadData_t *threadData);

extern void pump_v3_basicCold_t_eqFunction_342(DATA *data, threadData_t *threadData);

extern void pump_v3_basicCold_t_eqFunction_343(DATA *data, threadData_t *threadData);

extern void pump_v3_basicCold_t_eqFunction_344(DATA *data, threadData_t *threadData);

extern void pump_v3_basicCold_t_eqFunction_345(DATA *data, threadData_t *threadData);

extern void pump_v3_basicCold_t_eqFunction_346(DATA *data, threadData_t *threadData);

extern void pump_v3_basicCold_t_eqFunction_347(DATA *data, threadData_t *threadData);

extern void pump_v3_basicCold_t_eqFunction_348(DATA *data, threadData_t *threadData);

extern void pump_v3_basicCold_t_eqFunction_349(DATA *data, threadData_t *threadData);

extern void pump_v3_basicCold_t_eqFunction_350(DATA *data, threadData_t *threadData);

extern void pump_v3_basicCold_t_eqFunction_351(DATA *data, threadData_t *threadData);

extern void pump_v3_basicCold_t_eqFunction_352(DATA *data, threadData_t *threadData);

extern void pump_v3_basicCold_t_eqFunction_353(DATA *data, threadData_t *threadData);

extern void pump_v3_basicCold_t_eqFunction_354(DATA *data, threadData_t *threadData);

extern void pump_v3_basicCold_t_eqFunction_355(DATA *data, threadData_t *threadData);

extern void pump_v3_basicCold_t_eqFunction_356(DATA *data, threadData_t *threadData);

extern void pump_v3_basicCold_t_eqFunction_357(DATA *data, threadData_t *threadData);

extern void pump_v3_basicCold_t_eqFunction_358(DATA *data, threadData_t *threadData);

extern void pump_v3_basicCold_t_eqFunction_359(DATA *data, threadData_t *threadData);

extern void pump_v3_basicCold_t_eqFunction_360(DATA *data, threadData_t *threadData);

extern void pump_v3_basicCold_t_eqFunction_361(DATA *data, threadData_t *threadData);

extern void pump_v3_basicCold_t_eqFunction_362(DATA *data, threadData_t *threadData);

extern void pump_v3_basicCold_t_eqFunction_363(DATA *data, threadData_t *threadData);

extern void pump_v3_basicCold_t_eqFunction_364(DATA *data, threadData_t *threadData);

extern void pump_v3_basicCold_t_eqFunction_365(DATA *data, threadData_t *threadData);

extern void pump_v3_basicCold_t_eqFunction_366(DATA *data, threadData_t *threadData);

extern void pump_v3_basicCold_t_eqFunction_367(DATA *data, threadData_t *threadData);

extern void pump_v3_basicCold_t_eqFunction_368(DATA *data, threadData_t *threadData);

extern void pump_v3_basicCold_t_eqFunction_369(DATA *data, threadData_t *threadData);

extern void pump_v3_basicCold_t_eqFunction_370(DATA *data, threadData_t *threadData);

extern void pump_v3_basicCold_t_eqFunction_371(DATA *data, threadData_t *threadData);

extern void pump_v3_basicCold_t_eqFunction_372(DATA *data, threadData_t *threadData);

extern void pump_v3_basicCold_t_eqFunction_373(DATA *data, threadData_t *threadData);

extern void pump_v3_basicCold_t_eqFunction_374(DATA *data, threadData_t *threadData);

extern void pump_v3_basicCold_t_eqFunction_375(DATA *data, threadData_t *threadData);

extern void pump_v3_basicCold_t_eqFunction_376(DATA *data, threadData_t *threadData);

extern void pump_v3_basicCold_t_eqFunction_377(DATA *data, threadData_t *threadData);

extern void pump_v3_basicCold_t_eqFunction_378(DATA *data, threadData_t *threadData);

extern void pump_v3_basicCold_t_eqFunction_379(DATA *data, threadData_t *threadData);

extern void pump_v3_basicCold_t_eqFunction_1083(DATA *data, threadData_t *threadData);

extern void pump_v3_basicCold_t_eqFunction_381(DATA *data, threadData_t *threadData);

extern void pump_v3_basicCold_t_eqFunction_382(DATA *data, threadData_t *threadData);

extern void pump_v3_basicCold_t_eqFunction_383(DATA *data, threadData_t *threadData);

extern void pump_v3_basicCold_t_eqFunction_384(DATA *data, threadData_t *threadData);

extern void pump_v3_basicCold_t_eqFunction_385(DATA *data, threadData_t *threadData);

extern void pump_v3_basicCold_t_eqFunction_386(DATA *data, threadData_t *threadData);

extern void pump_v3_basicCold_t_eqFunction_387(DATA *data, threadData_t *threadData);

extern void pump_v3_basicCold_t_eqFunction_388(DATA *data, threadData_t *threadData);

extern void pump_v3_basicCold_t_eqFunction_389(DATA *data, threadData_t *threadData);

extern void pump_v3_basicCold_t_eqFunction_390(DATA *data, threadData_t *threadData);

extern void pump_v3_basicCold_t_eqFunction_391(DATA *data, threadData_t *threadData);

extern void pump_v3_basicCold_t_eqFunction_392(DATA *data, threadData_t *threadData);

int pump_v3_basicCold_t_functionInitialEquations_lambda0(DATA *data, threadData_t *threadData)
{
  data->simulationInfo->discreteCall = 1;
  static void (*const eqFunctions[364])(DATA*, threadData_t*) = {
    pump_v3_basicCold_t_eqFunction_1,
    pump_v3_basicCold_t_eqFunction_2,
    pump_v3_basicCold_t_eqFunction_3,
    pump_v3_basicCold_t_eqFunction_4,
    pump_v3_basicCold_t_eqFunction_5,
    pump_v3_basicCold_t_eqFunction_6,
    pump_v3_basicCold_t_eqFunction_7,
    pump_v3_basicCold_t_eqFunction_8,
    pump_v3_basicCold_t_eqFunction_9,
    pump_v3_basicCold_t_eqFunction_10,
    pump_v3_basicCold_t_eqFunction_11,
    pump_v3_basicCold_t_eqFunction_12,
    pump_v3_basicCold_t_eqFunction_13,
    pump_v3_basicCold_t_eqFunction_14,
    pump_v3_basicCold_t_eqFunction_15,
    pump_v3_basicCold_t_eqFunction_16,
    pump_v3_basicCold_t_eqFunction_17,
    pump_v3_basicCold_t_eqFunction_18,
    pump_v3_basicCold_t_eqFunction_19,
    pump_v3_basicCold_t_eqFunction_20,
    pump_v3_basicCold_t_eqFunction_21,
    pump_v3_basicCold_t_eqFunction_22,
    pump_v3_basicCold_t_eqFunction_23,
    pump_v3_basicCold_t_eqFunction_24,
    pump_v3_basicCold_t_eqFunction_25,
    pump_v3_basicCold_t_eqFunction_26,
    pump_v3_basicCold_t_eqFunction_27,
    pump_v3_basicCold_t_eqFunction_28,
    pump_v3_basicCold_t_eqFunction_29,
    pump_v3_basicCold_t_eqFunction_30,
    pump_v3_basicCold_t_eqFunction_31,
    pump_v3_basicCold_t_eqFunction_32,
    pump_v3_basicCold_t_eqFunction_33,
    pump_v3_basicCold_t_eqFunction_34,
    pump_v3_basicCold_t_eqFunction_35,
    pump_v3_basicCold_t_eqFunction_36,
    pump_v3_basicCold_t_eqFunction_37,
    pump_v3_basicCold_t_eqFunction_38,
    pump_v3_basicCold_t_eqFunction_39,
    pump_v3_basicCold_t_eqFunction_40,
    pump_v3_basicCold_t_eqFunction_41,
    pump_v3_basicCold_t_eqFunction_42,
    pump_v3_basicCold_t_eqFunction_43,
    pump_v3_basicCold_t_eqFunction_44,
    pump_v3_basicCold_t_eqFunction_45,
    pump_v3_basicCold_t_eqFunction_46,
    pump_v3_basicCold_t_eqFunction_47,
    pump_v3_basicCold_t_eqFunction_48,
    pump_v3_basicCold_t_eqFunction_49,
    pump_v3_basicCold_t_eqFunction_50,
    pump_v3_basicCold_t_eqFunction_51,
    pump_v3_basicCold_t_eqFunction_52,
    pump_v3_basicCold_t_eqFunction_53,
    pump_v3_basicCold_t_eqFunction_54,
    pump_v3_basicCold_t_eqFunction_55,
    pump_v3_basicCold_t_eqFunction_56,
    pump_v3_basicCold_t_eqFunction_57,
    pump_v3_basicCold_t_eqFunction_58,
    pump_v3_basicCold_t_eqFunction_59,
    pump_v3_basicCold_t_eqFunction_60,
    pump_v3_basicCold_t_eqFunction_465,
    pump_v3_basicCold_t_eqFunction_805,
    pump_v3_basicCold_t_eqFunction_806,
    pump_v3_basicCold_t_eqFunction_63,
    pump_v3_basicCold_t_eqFunction_64,
    pump_v3_basicCold_t_eqFunction_65,
    pump_v3_basicCold_t_eqFunction_889,
    pump_v3_basicCold_t_eqFunction_891,
    pump_v3_basicCold_t_eqFunction_892,
    pump_v3_basicCold_t_eqFunction_69,
    pump_v3_basicCold_t_eqFunction_70,
    pump_v3_basicCold_t_eqFunction_71,
    pump_v3_basicCold_t_eqFunction_72,
    pump_v3_basicCold_t_eqFunction_73,
    pump_v3_basicCold_t_eqFunction_74,
    pump_v3_basicCold_t_eqFunction_75,
    pump_v3_basicCold_t_eqFunction_76,
    pump_v3_basicCold_t_eqFunction_77,
    pump_v3_basicCold_t_eqFunction_78,
    pump_v3_basicCold_t_eqFunction_79,
    pump_v3_basicCold_t_eqFunction_80,
    pump_v3_basicCold_t_eqFunction_861,
    pump_v3_basicCold_t_eqFunction_862,
    pump_v3_basicCold_t_eqFunction_83,
    pump_v3_basicCold_t_eqFunction_902,
    pump_v3_basicCold_t_eqFunction_903,
    pump_v3_basicCold_t_eqFunction_901,
    pump_v3_basicCold_t_eqFunction_900,
    pump_v3_basicCold_t_eqFunction_899,
    pump_v3_basicCold_t_eqFunction_898,
    pump_v3_basicCold_t_eqFunction_896,
    pump_v3_basicCold_t_eqFunction_897,
    pump_v3_basicCold_t_eqFunction_92,
    pump_v3_basicCold_t_eqFunction_866,
    pump_v3_basicCold_t_eqFunction_867,
    pump_v3_basicCold_t_eqFunction_500,
    pump_v3_basicCold_t_eqFunction_96,
    pump_v3_basicCold_t_eqFunction_915,
    pump_v3_basicCold_t_eqFunction_916,
    pump_v3_basicCold_t_eqFunction_99,
    pump_v3_basicCold_t_eqFunction_859,
    pump_v3_basicCold_t_eqFunction_860,
    pump_v3_basicCold_t_eqFunction_921,
    pump_v3_basicCold_t_eqFunction_922,
    pump_v3_basicCold_t_eqFunction_844,
    pump_v3_basicCold_t_eqFunction_845,
    pump_v3_basicCold_t_eqFunction_511,
    pump_v3_basicCold_t_eqFunction_841,
    pump_v3_basicCold_t_eqFunction_842,
    pump_v3_basicCold_t_eqFunction_826,
    pump_v3_basicCold_t_eqFunction_827,
    pump_v3_basicCold_t_eqFunction_516,
    pump_v3_basicCold_t_eqFunction_112,
    pump_v3_basicCold_t_eqFunction_113,
    pump_v3_basicCold_t_eqFunction_114,
    pump_v3_basicCold_t_eqFunction_875,
    pump_v3_basicCold_t_eqFunction_116,
    pump_v3_basicCold_t_eqFunction_117,
    pump_v3_basicCold_t_eqFunction_878,
    pump_v3_basicCold_t_eqFunction_879,
    pump_v3_basicCold_t_eqFunction_808,
    pump_v3_basicCold_t_eqFunction_809,
    pump_v3_basicCold_t_eqFunction_527,
    pump_v3_basicCold_t_eqFunction_123,
    pump_v3_basicCold_t_eqFunction_949,
    pump_v3_basicCold_t_eqFunction_987,
    pump_v3_basicCold_t_eqFunction_1018,
    pump_v3_basicCold_t_eqFunction_988,
    pump_v3_basicCold_t_eqFunction_128,
    pump_v3_basicCold_t_eqFunction_998,
    pump_v3_basicCold_t_eqFunction_1003,
    pump_v3_basicCold_t_eqFunction_1004,
    pump_v3_basicCold_t_eqFunction_989,
    pump_v3_basicCold_t_eqFunction_990,
    pump_v3_basicCold_t_eqFunction_992,
    pump_v3_basicCold_t_eqFunction_993,
    pump_v3_basicCold_t_eqFunction_991,
    pump_v3_basicCold_t_eqFunction_997,
    pump_v3_basicCold_t_eqFunction_1005,
    pump_v3_basicCold_t_eqFunction_995,
    pump_v3_basicCold_t_eqFunction_994,
    pump_v3_basicCold_t_eqFunction_948,
    pump_v3_basicCold_t_eqFunction_947,
    pump_v3_basicCold_t_eqFunction_144,
    pump_v3_basicCold_t_eqFunction_145,
    pump_v3_basicCold_t_eqFunction_146,
    pump_v3_basicCold_t_eqFunction_923,
    pump_v3_basicCold_t_eqFunction_148,
    pump_v3_basicCold_t_eqFunction_885,
    pump_v3_basicCold_t_eqFunction_886,
    pump_v3_basicCold_t_eqFunction_893,
    pump_v3_basicCold_t_eqFunction_152,
    pump_v3_basicCold_t_eqFunction_153,
    pump_v3_basicCold_t_eqFunction_154,
    pump_v3_basicCold_t_eqFunction_559,
    pump_v3_basicCold_t_eqFunction_869,
    pump_v3_basicCold_t_eqFunction_871,
    pump_v3_basicCold_t_eqFunction_158,
    pump_v3_basicCold_t_eqFunction_563,
    pump_v3_basicCold_t_eqFunction_160,
    pump_v3_basicCold_t_eqFunction_572,
    pump_v3_basicCold_t_eqFunction_169,
    pump_v3_basicCold_t_eqFunction_170,
    pump_v3_basicCold_t_eqFunction_944,
    pump_v3_basicCold_t_eqFunction_945,
    pump_v3_basicCold_t_eqFunction_173,
    pump_v3_basicCold_t_eqFunction_938,
    pump_v3_basicCold_t_eqFunction_939,
    pump_v3_basicCold_t_eqFunction_940,
    pump_v3_basicCold_t_eqFunction_177,
    pump_v3_basicCold_t_eqFunction_178,
    pump_v3_basicCold_t_eqFunction_179,
    pump_v3_basicCold_t_eqFunction_1019,
    pump_v3_basicCold_t_eqFunction_181,
    pump_v3_basicCold_t_eqFunction_182,
    pump_v3_basicCold_t_eqFunction_183,
    pump_v3_basicCold_t_eqFunction_184,
    pump_v3_basicCold_t_eqFunction_185,
    pump_v3_basicCold_t_eqFunction_1007,
    pump_v3_basicCold_t_eqFunction_187,
    pump_v3_basicCold_t_eqFunction_1014,
    pump_v3_basicCold_t_eqFunction_1015,
    pump_v3_basicCold_t_eqFunction_894,
    pump_v3_basicCold_t_eqFunction_895,
    pump_v3_basicCold_t_eqFunction_1006,
    pump_v3_basicCold_t_eqFunction_193,
    pump_v3_basicCold_t_eqFunction_194,
    pump_v3_basicCold_t_eqFunction_195,
    pump_v3_basicCold_t_eqFunction_600,
    pump_v3_basicCold_t_eqFunction_847,
    pump_v3_basicCold_t_eqFunction_849,
    pump_v3_basicCold_t_eqFunction_199,
    pump_v3_basicCold_t_eqFunction_604,
    pump_v3_basicCold_t_eqFunction_201,
    pump_v3_basicCold_t_eqFunction_613,
    pump_v3_basicCold_t_eqFunction_1049,
    pump_v3_basicCold_t_eqFunction_1046,
    pump_v3_basicCold_t_eqFunction_1047,
    pump_v3_basicCold_t_eqFunction_1048,
    pump_v3_basicCold_t_eqFunction_214,
    pump_v3_basicCold_t_eqFunction_215,
    pump_v3_basicCold_t_eqFunction_216,
    pump_v3_basicCold_t_eqFunction_1043,
    pump_v3_basicCold_t_eqFunction_1044,
    pump_v3_basicCold_t_eqFunction_1045,
    pump_v3_basicCold_t_eqFunction_220,
    pump_v3_basicCold_t_eqFunction_221,
    pump_v3_basicCold_t_eqFunction_222,
    pump_v3_basicCold_t_eqFunction_950,
    pump_v3_basicCold_t_eqFunction_224,
    pump_v3_basicCold_t_eqFunction_225,
    pump_v3_basicCold_t_eqFunction_226,
    pump_v3_basicCold_t_eqFunction_227,
    pump_v3_basicCold_t_eqFunction_228,
    pump_v3_basicCold_t_eqFunction_1020,
    pump_v3_basicCold_t_eqFunction_230,
    pump_v3_basicCold_t_eqFunction_1027,
    pump_v3_basicCold_t_eqFunction_1028,
    pump_v3_basicCold_t_eqFunction_858,
    pump_v3_basicCold_t_eqFunction_1074,
    pump_v3_basicCold_t_eqFunction_1075,
    pump_v3_basicCold_t_eqFunction_236,
    pump_v3_basicCold_t_eqFunction_1052,
    pump_v3_basicCold_t_eqFunction_1053,
    pump_v3_basicCold_t_eqFunction_239,
    pump_v3_basicCold_t_eqFunction_240,
    pump_v3_basicCold_t_eqFunction_241,
    pump_v3_basicCold_t_eqFunction_646,
    pump_v3_basicCold_t_eqFunction_829,
    pump_v3_basicCold_t_eqFunction_831,
    pump_v3_basicCold_t_eqFunction_245,
    pump_v3_basicCold_t_eqFunction_650,
    pump_v3_basicCold_t_eqFunction_247,
    pump_v3_basicCold_t_eqFunction_659,
    pump_v3_basicCold_t_eqFunction_256,
    pump_v3_basicCold_t_eqFunction_257,
    pump_v3_basicCold_t_eqFunction_258,
    pump_v3_basicCold_t_eqFunction_1078,
    pump_v3_basicCold_t_eqFunction_1079,
    pump_v3_basicCold_t_eqFunction_1080,
    pump_v3_basicCold_t_eqFunction_262,
    pump_v3_basicCold_t_eqFunction_263,
    pump_v3_basicCold_t_eqFunction_264,
    pump_v3_basicCold_t_eqFunction_820,
    pump_v3_basicCold_t_eqFunction_912,
    pump_v3_basicCold_t_eqFunction_267,
    pump_v3_basicCold_t_eqFunction_268,
    pump_v3_basicCold_t_eqFunction_269,
    pump_v3_basicCold_t_eqFunction_270,
    pump_v3_basicCold_t_eqFunction_271,
    pump_v3_basicCold_t_eqFunction_951,
    pump_v3_basicCold_t_eqFunction_273,
    pump_v3_basicCold_t_eqFunction_958,
    pump_v3_basicCold_t_eqFunction_959,
    pump_v3_basicCold_t_eqFunction_840,
    pump_v3_basicCold_t_eqFunction_1069,
    pump_v3_basicCold_t_eqFunction_1070,
    pump_v3_basicCold_t_eqFunction_279,
    pump_v3_basicCold_t_eqFunction_964,
    pump_v3_basicCold_t_eqFunction_281,
    pump_v3_basicCold_t_eqFunction_282,
    pump_v3_basicCold_t_eqFunction_283,
    pump_v3_basicCold_t_eqFunction_688,
    pump_v3_basicCold_t_eqFunction_813,
    pump_v3_basicCold_t_eqFunction_811,
    pump_v3_basicCold_t_eqFunction_287,
    pump_v3_basicCold_t_eqFunction_692,
    pump_v3_basicCold_t_eqFunction_289,
    pump_v3_basicCold_t_eqFunction_701,
    pump_v3_basicCold_t_eqFunction_298,
    pump_v3_basicCold_t_eqFunction_299,
    pump_v3_basicCold_t_eqFunction_980,
    pump_v3_basicCold_t_eqFunction_981,
    pump_v3_basicCold_t_eqFunction_302,
    pump_v3_basicCold_t_eqFunction_984,
    pump_v3_basicCold_t_eqFunction_985,
    pump_v3_basicCold_t_eqFunction_986,
    pump_v3_basicCold_t_eqFunction_306,
    pump_v3_basicCold_t_eqFunction_307,
    pump_v3_basicCold_t_eqFunction_308,
    pump_v3_basicCold_t_eqFunction_309,
    pump_v3_basicCold_t_eqFunction_310,
    pump_v3_basicCold_t_eqFunction_311,
    pump_v3_basicCold_t_eqFunction_312,
    pump_v3_basicCold_t_eqFunction_313,
    pump_v3_basicCold_t_eqFunction_314,
    pump_v3_basicCold_t_eqFunction_315,
    pump_v3_basicCold_t_eqFunction_316,
    pump_v3_basicCold_t_eqFunction_317,
    pump_v3_basicCold_t_eqFunction_318,
    pump_v3_basicCold_t_eqFunction_319,
    pump_v3_basicCold_t_eqFunction_320,
    pump_v3_basicCold_t_eqFunction_321,
    pump_v3_basicCold_t_eqFunction_322,
    pump_v3_basicCold_t_eqFunction_323,
    pump_v3_basicCold_t_eqFunction_324,
    pump_v3_basicCold_t_eqFunction_325,
    pump_v3_basicCold_t_eqFunction_326,
    pump_v3_basicCold_t_eqFunction_327,
    pump_v3_basicCold_t_eqFunction_328,
    pump_v3_basicCold_t_eqFunction_329,
    pump_v3_basicCold_t_eqFunction_330,
    pump_v3_basicCold_t_eqFunction_331,
    pump_v3_basicCold_t_eqFunction_332,
    pump_v3_basicCold_t_eqFunction_333,
    pump_v3_basicCold_t_eqFunction_334,
    pump_v3_basicCold_t_eqFunction_335,
    pump_v3_basicCold_t_eqFunction_740,
    pump_v3_basicCold_t_eqFunction_337,
    pump_v3_basicCold_t_eqFunction_338,
    pump_v3_basicCold_t_eqFunction_339,
    pump_v3_basicCold_t_eqFunction_340,
    pump_v3_basicCold_t_eqFunction_341,
    pump_v3_basicCold_t_eqFunction_342,
    pump_v3_basicCold_t_eqFunction_343,
    pump_v3_basicCold_t_eqFunction_344,
    pump_v3_basicCold_t_eqFunction_345,
    pump_v3_basicCold_t_eqFunction_346,
    pump_v3_basicCold_t_eqFunction_347,
    pump_v3_basicCold_t_eqFunction_348,
    pump_v3_basicCold_t_eqFunction_349,
    pump_v3_basicCold_t_eqFunction_350,
    pump_v3_basicCold_t_eqFunction_351,
    pump_v3_basicCold_t_eqFunction_352,
    pump_v3_basicCold_t_eqFunction_353,
    pump_v3_basicCold_t_eqFunction_354,
    pump_v3_basicCold_t_eqFunction_355,
    pump_v3_basicCold_t_eqFunction_356,
    pump_v3_basicCold_t_eqFunction_357,
    pump_v3_basicCold_t_eqFunction_358,
    pump_v3_basicCold_t_eqFunction_359,
    pump_v3_basicCold_t_eqFunction_360,
    pump_v3_basicCold_t_eqFunction_361,
    pump_v3_basicCold_t_eqFunction_362,
    pump_v3_basicCold_t_eqFunction_363,
    pump_v3_basicCold_t_eqFunction_364,
    pump_v3_basicCold_t_eqFunction_365,
    pump_v3_basicCold_t_eqFunction_366,
    pump_v3_basicCold_t_eqFunction_367,
    pump_v3_basicCold_t_eqFunction_368,
    pump_v3_basicCold_t_eqFunction_369,
    pump_v3_basicCold_t_eqFunction_370,
    pump_v3_basicCold_t_eqFunction_371,
    pump_v3_basicCold_t_eqFunction_372,
    pump_v3_basicCold_t_eqFunction_373,
    pump_v3_basicCold_t_eqFunction_374,
    pump_v3_basicCold_t_eqFunction_375,
    pump_v3_basicCold_t_eqFunction_376,
    pump_v3_basicCold_t_eqFunction_377,
    pump_v3_basicCold_t_eqFunction_378,
    pump_v3_basicCold_t_eqFunction_379,
    pump_v3_basicCold_t_eqFunction_1083,
    pump_v3_basicCold_t_eqFunction_381,
    pump_v3_basicCold_t_eqFunction_382,
    pump_v3_basicCold_t_eqFunction_383,
    pump_v3_basicCold_t_eqFunction_384,
    pump_v3_basicCold_t_eqFunction_385,
    pump_v3_basicCold_t_eqFunction_386,
    pump_v3_basicCold_t_eqFunction_387,
    pump_v3_basicCold_t_eqFunction_388,
    pump_v3_basicCold_t_eqFunction_389,
    pump_v3_basicCold_t_eqFunction_390,
    pump_v3_basicCold_t_eqFunction_391,
    pump_v3_basicCold_t_eqFunction_392
  };
  
  for (int id = 0; id < 364; id++) {
    eqFunctions[id](data, threadData);
  }
  data->simulationInfo->discreteCall = 0;
  
  return 0;
}
int pump_v3_basicCold_t_functionRemovedInitialEquations(DATA *data, threadData_t *threadData)
{
  const int *equationIndexes = NULL;
  double res = 0.0;

  res = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[957]] /* senTemIn_heat.T_start PARAM */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[19]] /* senTemIn_heat.T STATE(1) */);
  if(fabs(res) > 1e-5)
  {
    errorStreamPrint(OMC_LOG_INIT, 0, "The initialization problem is inconsistent due to the following equation: 0 != %g = senTemIn_heat.T_start - senTemIn_heat.T", res);
    return 1;
  }
  res = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[975]] /* senTemOut_heat.T_start PARAM */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[20]] /* senTemOut_heat.T STATE(1) */);
  if(fabs(res) > 1e-5)
  {
    errorStreamPrint(OMC_LOG_INIT, 0, "The initialization problem is inconsistent due to the following equation: 0 != %g = senTemOut_heat.T_start - senTemOut_heat.T", res);
    return 1;
  }
  res = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[508]] /* plugFlowPipe2.vol_b.dynBal.T_start PARAM */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[321]] /* plugFlowPipe2.vol_b.dynBal.medium.T variable */);
  if(fabs(res) > 1e-5)
  {
    errorStreamPrint(OMC_LOG_INIT, 0, "The initialization problem is inconsistent due to the following equation: 0 != %g = plugFlowPipe2.vol_b.dynBal.T_start - plugFlowPipe2.vol_b.dynBal.medium.T", res);
    return 1;
  }
  res = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[39]] /* T_init PARAM */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[435]] /* senTemOut_cold.T variable */);
  if(fabs(res) > 1e-5)
  {
    errorStreamPrint(OMC_LOG_INIT, 0, "The initialization problem is inconsistent due to the following equation: 0 != %g = T_init - senTemOut_cold.T", res);
    return 1;
  }
  res = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[957]] /* senTemIn_heat.T_start PARAM */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[19]] /* senTemIn_heat.T STATE(1) */);
  if(fabs(res) > 1e-5)
  {
    errorStreamPrint(OMC_LOG_INIT, 0, "The initialization problem is inconsistent due to the following equation: 0 != %g = senTemIn_heat.T_start - senTemIn_heat.T", res);
    return 1;
  }
  res = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[975]] /* senTemOut_heat.T_start PARAM */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[20]] /* senTemOut_heat.T STATE(1) */);
  if(fabs(res) > 1e-5)
  {
    errorStreamPrint(OMC_LOG_INIT, 0, "The initialization problem is inconsistent due to the following equation: 0 != %g = senTemOut_heat.T_start - senTemOut_heat.T", res);
    return 1;
  }
  res = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[508]] /* plugFlowPipe2.vol_b.dynBal.T_start PARAM */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[321]] /* plugFlowPipe2.vol_b.dynBal.medium.T variable */);
  if(fabs(res) > 1e-5)
  {
    errorStreamPrint(OMC_LOG_INIT, 0, "The initialization problem is inconsistent due to the following equation: 0 != %g = plugFlowPipe2.vol_b.dynBal.T_start - plugFlowPipe2.vol_b.dynBal.medium.T", res);
    return 1;
  }
  res = (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[39]] /* T_init PARAM */) - (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[435]] /* senTemOut_cold.T variable */);
  if(fabs(res) > 1e-5)
  {
    errorStreamPrint(OMC_LOG_INIT, 0, "The initialization problem is inconsistent due to the following equation: 0 != %g = T_init - senTemOut_cold.T", res);
    return 1;
  }
  
  return 0;
}


#if defined(__cplusplus)
}
#endif
