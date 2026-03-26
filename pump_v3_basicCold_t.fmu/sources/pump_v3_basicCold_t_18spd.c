/* spatialDistribution */
#include "pump_v3_basicCold_t_model.h"
#if defined(__cplusplus)
extern "C" {
#endif

int pump_v3_basicCold_t_function_storeSpatialDistribution(DATA *data, threadData_t *threadData)
{
  int equationIndexes[2] = {1,-1};
  modelica_boolean tmp0;
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_boolean tmp3;
  modelica_real tmp4;
  modelica_real tmp5;
  modelica_boolean tmp6;
  modelica_real tmp7;
  modelica_real tmp8;
  modelica_boolean tmp9;
  modelica_real tmp10;
  modelica_real tmp11;
  modelica_boolean tmp12;
  modelica_real tmp13;
  modelica_real tmp14;
  modelica_boolean tmp15;
  modelica_real tmp16;
  modelica_real tmp17;
  modelica_boolean tmp18;
  modelica_real tmp19;
  modelica_real tmp20;
  modelica_boolean tmp21;
  modelica_real tmp22;
  modelica_real tmp23;
  equationIndexes[1] = 0;
  tmp1 = 1.0;
  tmp2 = 0.0;
  relationhysteresis(data, &tmp0, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[180]] /* plugFlowPipe.v variable */), 0.0, tmp1, tmp2, 14, GreaterEq, GreaterEqZC);
  storeSpatialDistribution(data, threadData, 0, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[171]] /* plugFlowPipe.port_a.h_outflow variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[439]] /* senTemOut_cold.port_b.h_outflow variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1]] /* plugFlowPipe.del.x STATE(1,plugFlowPipe.v) */), tmp0);
  equationIndexes[1] = 1;
  tmp4 = 1.0;
  tmp5 = 0.0;
  relationhysteresis(data, &tmp3, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[179]] /* plugFlowPipe.timDel.u variable */), 0.0, tmp4, tmp5, 12, GreaterEq, GreaterEqZC);
  storeSpatialDistribution(data, threadData, 1, data->localData[0]->timeValue, data->localData[0]->timeValue, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2]] /* plugFlowPipe.timDel.x STATE(1,plugFlowPipe.timDel.u) */), tmp3);
  equationIndexes[1] = 2;
  tmp7 = 1.0;
  tmp8 = 0.0;
  relationhysteresis(data, &tmp6, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[238]] /* plugFlowPipe1.v variable */), 0.0, tmp7, tmp8, 10, GreaterEq, GreaterEqZC);
  storeSpatialDistribution(data, threadData, 2, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[229]] /* plugFlowPipe1.port_a.h_outflow variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[434]] /* senTemIn_heat.port_b.h_outflow variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5]] /* plugFlowPipe1.del.x STATE(1,plugFlowPipe1.v) */), tmp6);
  equationIndexes[1] = 3;
  tmp10 = 1.0;
  tmp11 = 0.0;
  relationhysteresis(data, &tmp9, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[237]] /* plugFlowPipe1.timDel.u variable */), 0.0, tmp10, tmp11, 8, GreaterEq, GreaterEqZC);
  storeSpatialDistribution(data, threadData, 3, data->localData[0]->timeValue, data->localData[0]->timeValue, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[6]] /* plugFlowPipe1.timDel.x STATE(1,plugFlowPipe1.timDel.u) */), tmp9);
  equationIndexes[1] = 4;
  tmp13 = 1.0;
  tmp14 = 0.0;
  relationhysteresis(data, &tmp12, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[355]] /* plugFlowPipe_heat.v variable */), 0.0, tmp13, tmp14, 6, GreaterEq, GreaterEqZC);
  storeSpatialDistribution(data, threadData, 4, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[345]] /* plugFlowPipe_heat.port_a.h_outflow variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[347]] /* plugFlowPipe_heat.port_b.h_outflow variable */), DIVISION_SIM((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[13]] /* plugFlowPipe_heat.del.x STATE(1,plugFlowPipe_heat.v) */),1.5,"1.5",equationIndexes), tmp12);
  equationIndexes[1] = 5;
  tmp16 = 1.0;
  tmp17 = 0.0;
  relationhysteresis(data, &tmp15, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[354]] /* plugFlowPipe_heat.timDel.u variable */), 0.0, tmp16, tmp17, 4, GreaterEq, GreaterEqZC);
  storeSpatialDistribution(data, threadData, 5, data->localData[0]->timeValue, data->localData[0]->timeValue, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[14]] /* plugFlowPipe_heat.timDel.x STATE(1,plugFlowPipe_heat.timDel.u) */), tmp15);
  equationIndexes[1] = 6;
  tmp19 = 1.0;
  tmp20 = 0.0;
  relationhysteresis(data, &tmp18, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[297]] /* plugFlowPipe2.v variable */), 0.0, tmp19, tmp20, 2, GreaterEq, GreaterEqZC);
  storeSpatialDistribution(data, threadData, 6, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[286]] /* plugFlowPipe2.port_a.h_outflow variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[288]] /* plugFlowPipe2.port_b.h_outflow variable */), (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[9]] /* plugFlowPipe2.del.x STATE(1,plugFlowPipe2.v) */), tmp18);
  equationIndexes[1] = 7;
  tmp22 = 1.0;
  tmp23 = 0.0;
  relationhysteresis(data, &tmp21, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[296]] /* plugFlowPipe2.timDel.u variable */), 0.0, tmp22, tmp23, 0, GreaterEq, GreaterEqZC);
  storeSpatialDistribution(data, threadData, 7, data->localData[0]->timeValue, data->localData[0]->timeValue, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[10]] /* plugFlowPipe2.timDel.x STATE(1,plugFlowPipe2.timDel.u) */), tmp21);
  
  return 0;
}

int pump_v3_basicCold_t_function_initSpatialDistribution(DATA *data, threadData_t *threadData)
{
  real_array tmp24;
  real_array tmp25;
  real_array tmp26;
  real_array tmp27;
  real_array tmp28;
  real_array tmp29;
  real_array tmp30;
  real_array tmp31;
  real_array tmp32;
  real_array tmp33;
  real_array tmp34;
  real_array tmp35;
  real_array tmp36;
  real_array tmp37;
  real_array tmp38;
  real_array tmp39;
  array_alloc_scalar_real_array(&tmp24, 2, (modelica_real)0.0, (modelica_real)1.0);
  array_alloc_scalar_real_array(&tmp25, 2, (modelica_real)(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[97]] /* plugFlowPipe.del.h_ini_in PARAM */), (modelica_real)(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[98]] /* plugFlowPipe.del.h_ini_out PARAM */));
  initSpatialDistribution(data, threadData, 0, &tmp24, &tmp25, 2);
  array_alloc_scalar_real_array(&tmp26, 2, (modelica_real)0.0, (modelica_real)1.0);
  array_alloc_scalar_real_array(&tmp27, 2, (modelica_real)(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[176]] /* plugFlowPipe.timDel.t0 PARAM */), (modelica_real)(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[176]] /* plugFlowPipe.timDel.t0 PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[178]] /* plugFlowPipe.timDel.t_out_start PARAM */));
  initSpatialDistribution(data, threadData, 1, &tmp26, &tmp27, 2);
  array_alloc_scalar_real_array(&tmp28, 2, (modelica_real)0.0, (modelica_real)1.0);
  array_alloc_scalar_real_array(&tmp29, 2, (modelica_real)(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[253]] /* plugFlowPipe1.del.h_ini_in PARAM */), (modelica_real)(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[254]] /* plugFlowPipe1.del.h_ini_out PARAM */));
  initSpatialDistribution(data, threadData, 2, &tmp28, &tmp29, 2);
  array_alloc_scalar_real_array(&tmp30, 2, (modelica_real)0.0, (modelica_real)1.0);
  array_alloc_scalar_real_array(&tmp31, 2, (modelica_real)(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[326]] /* plugFlowPipe1.timDel.t0 PARAM */), (modelica_real)(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[326]] /* plugFlowPipe1.timDel.t0 PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[328]] /* plugFlowPipe1.timDel.t_out_start PARAM */));
  initSpatialDistribution(data, threadData, 3, &tmp30, &tmp31, 2);
  array_alloc_scalar_real_array(&tmp32, 2, (modelica_real)0.0, (modelica_real)1.0);
  array_alloc_scalar_real_array(&tmp33, 2, (modelica_real)(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[552]] /* plugFlowPipe_heat.del.h_ini_in PARAM */), (modelica_real)(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[553]] /* plugFlowPipe_heat.del.h_ini_out PARAM */));
  initSpatialDistribution(data, threadData, 4, &tmp32, &tmp33, 2);
  array_alloc_scalar_real_array(&tmp34, 2, (modelica_real)0.0, (modelica_real)1.0);
  array_alloc_scalar_real_array(&tmp35, 2, (modelica_real)(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[625]] /* plugFlowPipe_heat.timDel.t0 PARAM */), (modelica_real)(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[625]] /* plugFlowPipe_heat.timDel.t0 PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[627]] /* plugFlowPipe_heat.timDel.t_out_start PARAM */));
  initSpatialDistribution(data, threadData, 5, &tmp34, &tmp35, 2);
  array_alloc_scalar_real_array(&tmp36, 2, (modelica_real)0.0, (modelica_real)1.0);
  array_alloc_scalar_real_array(&tmp37, 2, (modelica_real)(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[396]] /* plugFlowPipe2.del.h_ini_in PARAM */), (modelica_real)(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[397]] /* plugFlowPipe2.del.h_ini_out PARAM */));
  initSpatialDistribution(data, threadData, 6, &tmp36, &tmp37, 2);
  array_alloc_scalar_real_array(&tmp38, 2, (modelica_real)0.0, (modelica_real)1.0);
  array_alloc_scalar_real_array(&tmp39, 2, (modelica_real)(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[475]] /* plugFlowPipe2.timDel.t0 PARAM */), (modelica_real)(data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[475]] /* plugFlowPipe2.timDel.t0 PARAM */) + (data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[477]] /* plugFlowPipe2.timDel.t_out_start PARAM */));
  initSpatialDistribution(data, threadData, 7, &tmp38, &tmp39, 2);
  
  return 0;
}

#if defined(__cplusplus)
}
#endif
