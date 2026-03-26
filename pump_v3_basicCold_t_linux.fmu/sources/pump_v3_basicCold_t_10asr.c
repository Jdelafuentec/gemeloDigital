/* Asserts */
#include "pump_v3_basicCold_t_model.h"
#if defined(__cplusplus)
extern "C" {
#endif


/*
equation index: 3137
type: ALGORITHM

  assert(plugFlowPipe.port_a.h_outflow >= -1e10 and plugFlowPipe.port_a.h_outflow <= 1e10, "Variable violating min/max constraint: -1e10 <= plugFlowPipe.port_a.h_outflow <= 1e10, has value: " + String(plugFlowPipe.port_a.h_outflow, "g"));
*/
void pump_v3_basicCold_t_eqFunction_3137(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3137};
  modelica_boolean tmp0;
  modelica_boolean tmp1;
  static const MMC_DEFSTRINGLIT(tmp2,98,"Variable violating min/max constraint: -1e10 <= plugFlowPipe.port_a.h_outflow <= 1e10, has value: ");
  modelica_string tmp3;
  modelica_metatype tmpMeta4;
  static int tmp5 = 0;
  if(!tmp5)
  {
    tmp0 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[171]] /* plugFlowPipe.port_a.h_outflow variable */),-1e10);
    tmp1 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[171]] /* plugFlowPipe.port_a.h_outflow variable */),1e10);
    if(!(tmp0 && tmp1))
    {
      tmp3 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[171]] /* plugFlowPipe.port_a.h_outflow variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta4 = stringAppend(MMC_REFSTRINGLIT(tmp2),tmp3);
      {
        const char* assert_cond = "(plugFlowPipe.port_a.h_outflow >= -1e10 and plugFlowPipe.port_a.h_outflow <= 1e10)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/root/.openmodelica/libraries/Modelica 4.0.0+maint.om/Fluid/Interfaces.mo",16,5,17,84,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta4));
        } else {
          FILE_INFO info = {"/root/.openmodelica/libraries/Modelica 4.0.0+maint.om/Fluid/Interfaces.mo",16,5,17,84,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta4));
        }
      }
      tmp5 = 1;
    }
  }
  threadData->lastEquationSolved = 3137;
}

/*
equation index: 3138
type: ALGORITHM

  assert(plugFlowPipe.heatPort.T >= 0.0, "Variable violating min constraint: 0.0 <= plugFlowPipe.heatPort.T, has value: " + String(plugFlowPipe.heatPort.T, "g"));
*/
void pump_v3_basicCold_t_eqFunction_3138(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3138};
  modelica_boolean tmp6;
  static const MMC_DEFSTRINGLIT(tmp7,78,"Variable violating min constraint: 0.0 <= plugFlowPipe.heatPort.T, has value: ");
  modelica_string tmp8;
  modelica_metatype tmpMeta9;
  static int tmp10 = 0;
  if(!tmp10)
  {
    tmp6 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[170]] /* plugFlowPipe.heatPort.T variable */),0.0);
    if(!tmp6)
    {
      tmp8 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[170]] /* plugFlowPipe.heatPort.T variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta9 = stringAppend(MMC_REFSTRINGLIT(tmp7),tmp8);
      {
        const char* assert_cond = "(plugFlowPipe.heatPort.T >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/root/.openmodelica/libraries/Modelica 4.0.0+maint.om/Thermal/HeatTransfer/Interfaces/HeatPort.mo",3,3,3,38,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta9));
        } else {
          FILE_INFO info = {"/root/.openmodelica/libraries/Modelica 4.0.0+maint.om/Thermal/HeatTransfer/Interfaces/HeatPort.mo",3,3,3,38,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta9));
        }
      }
      tmp10 = 1;
    }
  }
  threadData->lastEquationSolved = 3138;
}

/*
equation index: 3139
type: ALGORITHM

  assert(plugFlowPipe.del.port_a.h_outflow >= -1e10 and plugFlowPipe.del.port_a.h_outflow <= 1e10, "Variable violating min/max constraint: -1e10 <= plugFlowPipe.del.port_a.h_outflow <= 1e10, has value: " + String(plugFlowPipe.del.port_a.h_outflow, "g"));
*/
void pump_v3_basicCold_t_eqFunction_3139(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3139};
  modelica_boolean tmp11;
  modelica_boolean tmp12;
  static const MMC_DEFSTRINGLIT(tmp13,102,"Variable violating min/max constraint: -1e10 <= plugFlowPipe.del.port_a.h_outflow <= 1e10, has value: ");
  modelica_string tmp14;
  modelica_metatype tmpMeta15;
  static int tmp16 = 0;
  if(!tmp16)
  {
    tmp11 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[157]] /* plugFlowPipe.del.port_a.h_outflow variable */),-1e10);
    tmp12 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[157]] /* plugFlowPipe.del.port_a.h_outflow variable */),1e10);
    if(!(tmp11 && tmp12))
    {
      tmp14 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[157]] /* plugFlowPipe.del.port_a.h_outflow variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta15 = stringAppend(MMC_REFSTRINGLIT(tmp13),tmp14);
      {
        const char* assert_cond = "(plugFlowPipe.del.port_a.h_outflow >= -1e10 and plugFlowPipe.del.port_a.h_outflow <= 1e10)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/root/.openmodelica/libraries/Modelica 4.0.0+maint.om/Fluid/Interfaces.mo",16,5,17,84,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta15));
        } else {
          FILE_INFO info = {"/root/.openmodelica/libraries/Modelica 4.0.0+maint.om/Fluid/Interfaces.mo",16,5,17,84,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta15));
        }
      }
      tmp16 = 1;
    }
  }
  threadData->lastEquationSolved = 3139;
}

/*
equation index: 3140
type: ALGORITHM

  assert(plugFlowPipe.del.port_b.h_outflow >= -1e10 and plugFlowPipe.del.port_b.h_outflow <= 1e10, "Variable violating min/max constraint: -1e10 <= plugFlowPipe.del.port_b.h_outflow <= 1e10, has value: " + String(plugFlowPipe.del.port_b.h_outflow, "g"));
*/
void pump_v3_basicCold_t_eqFunction_3140(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3140};
  modelica_boolean tmp17;
  modelica_boolean tmp18;
  static const MMC_DEFSTRINGLIT(tmp19,102,"Variable violating min/max constraint: -1e10 <= plugFlowPipe.del.port_b.h_outflow <= 1e10, has value: ");
  modelica_string tmp20;
  modelica_metatype tmpMeta21;
  static int tmp22 = 0;
  if(!tmp22)
  {
    tmp17 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[158]] /* plugFlowPipe.del.port_b.h_outflow variable */),-1e10);
    tmp18 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[158]] /* plugFlowPipe.del.port_b.h_outflow variable */),1e10);
    if(!(tmp17 && tmp18))
    {
      tmp20 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[158]] /* plugFlowPipe.del.port_b.h_outflow variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta21 = stringAppend(MMC_REFSTRINGLIT(tmp19),tmp20);
      {
        const char* assert_cond = "(plugFlowPipe.del.port_b.h_outflow >= -1e10 and plugFlowPipe.del.port_b.h_outflow <= 1e10)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/root/.openmodelica/libraries/Modelica 4.0.0+maint.om/Fluid/Interfaces.mo",16,5,17,84,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta21));
        } else {
          FILE_INFO info = {"/root/.openmodelica/libraries/Modelica 4.0.0+maint.om/Fluid/Interfaces.mo",16,5,17,84,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta21));
        }
      }
      tmp22 = 1;
    }
  }
  threadData->lastEquationSolved = 3140;
}

/*
equation index: 3141
type: ALGORITHM

  assert(plugFlowPipe.heaLos_a.port_b.h_outflow >= -1e10 and plugFlowPipe.heaLos_a.port_b.h_outflow <= 1e10, "Variable violating min/max constraint: -1e10 <= plugFlowPipe.heaLos_a.port_b.h_outflow <= 1e10, has value: " + String(plugFlowPipe.heaLos_a.port_b.h_outflow, "g"));
*/
void pump_v3_basicCold_t_eqFunction_3141(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3141};
  modelica_boolean tmp23;
  modelica_boolean tmp24;
  static const MMC_DEFSTRINGLIT(tmp25,107,"Variable violating min/max constraint: -1e10 <= plugFlowPipe.heaLos_a.port_b.h_outflow <= 1e10, has value: ");
  modelica_string tmp26;
  modelica_metatype tmpMeta27;
  static int tmp28 = 0;
  if(!tmp28)
  {
    tmp23 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[164]] /* plugFlowPipe.heaLos_a.port_b.h_outflow variable */),-1e10);
    tmp24 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[164]] /* plugFlowPipe.heaLos_a.port_b.h_outflow variable */),1e10);
    if(!(tmp23 && tmp24))
    {
      tmp26 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[164]] /* plugFlowPipe.heaLos_a.port_b.h_outflow variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta27 = stringAppend(MMC_REFSTRINGLIT(tmp25),tmp26);
      {
        const char* assert_cond = "(plugFlowPipe.heaLos_a.port_b.h_outflow >= -1e10 and plugFlowPipe.heaLos_a.port_b.h_outflow <= 1e10)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/root/.openmodelica/libraries/Modelica 4.0.0+maint.om/Fluid/Interfaces.mo",16,5,17,84,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta27));
        } else {
          FILE_INFO info = {"/root/.openmodelica/libraries/Modelica 4.0.0+maint.om/Fluid/Interfaces.mo",16,5,17,84,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta27));
        }
      }
      tmp28 = 1;
    }
  }
  threadData->lastEquationSolved = 3141;
}

/*
equation index: 3142
type: ALGORITHM

  assert(plugFlowPipe.heaLos_a.T_a_inflow >= 0.0, "Variable violating min constraint: 0.0 <= plugFlowPipe.heaLos_a.T_a_inflow, has value: " + String(plugFlowPipe.heaLos_a.T_a_inflow, "g"));
*/
void pump_v3_basicCold_t_eqFunction_3142(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3142};
  modelica_boolean tmp29;
  static const MMC_DEFSTRINGLIT(tmp30,87,"Variable violating min constraint: 0.0 <= plugFlowPipe.heaLos_a.T_a_inflow, has value: ");
  modelica_string tmp31;
  modelica_metatype tmpMeta32;
  static int tmp33 = 0;
  if(!tmp33)
  {
    tmp29 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[160]] /* plugFlowPipe.heaLos_a.T_a_inflow variable */),0.0);
    if(!tmp29)
    {
      tmp31 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[160]] /* plugFlowPipe.heaLos_a.T_a_inflow variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta32 = stringAppend(MMC_REFSTRINGLIT(tmp30),tmp31);
      {
        const char* assert_cond = "(plugFlowPipe.heaLos_a.T_a_inflow >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/work/IDEAS-master/IDEAS/Fluid/FixedResistances/BaseClasses/PlugFlowHeatLoss.mo",30,3,31,48,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta32));
        } else {
          FILE_INFO info = {"/work/IDEAS-master/IDEAS/Fluid/FixedResistances/BaseClasses/PlugFlowHeatLoss.mo",30,3,31,48,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta32));
        }
      }
      tmp33 = 1;
    }
  }
  threadData->lastEquationSolved = 3142;
}

/*
equation index: 3143
type: ALGORITHM

  assert(plugFlowPipe.heaLos_a.T_b_outflow >= 0.0, "Variable violating min constraint: 0.0 <= plugFlowPipe.heaLos_a.T_b_outflow, has value: " + String(plugFlowPipe.heaLos_a.T_b_outflow, "g"));
*/
void pump_v3_basicCold_t_eqFunction_3143(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3143};
  modelica_boolean tmp34;
  static const MMC_DEFSTRINGLIT(tmp35,88,"Variable violating min constraint: 0.0 <= plugFlowPipe.heaLos_a.T_b_outflow, has value: ");
  modelica_string tmp36;
  modelica_metatype tmpMeta37;
  static int tmp38 = 0;
  if(!tmp38)
  {
    tmp34 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[161]] /* plugFlowPipe.heaLos_a.T_b_outflow variable */),0.0);
    if(!tmp34)
    {
      tmp36 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[161]] /* plugFlowPipe.heaLos_a.T_b_outflow variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta37 = stringAppend(MMC_REFSTRINGLIT(tmp35),tmp36);
      {
        const char* assert_cond = "(plugFlowPipe.heaLos_a.T_b_outflow >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/work/IDEAS-master/IDEAS/Fluid/FixedResistances/BaseClasses/PlugFlowHeatLoss.mo",32,3,33,49,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta37));
        } else {
          FILE_INFO info = {"/work/IDEAS-master/IDEAS/Fluid/FixedResistances/BaseClasses/PlugFlowHeatLoss.mo",32,3,33,49,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta37));
        }
      }
      tmp38 = 1;
    }
  }
  threadData->lastEquationSolved = 3143;
}

/*
equation index: 3144
type: ALGORITHM

  assert(plugFlowPipe.heaLos_b.port_b.h_outflow >= -1e10 and plugFlowPipe.heaLos_b.port_b.h_outflow <= 1e10, "Variable violating min/max constraint: -1e10 <= plugFlowPipe.heaLos_b.port_b.h_outflow <= 1e10, has value: " + String(plugFlowPipe.heaLos_b.port_b.h_outflow, "g"));
*/
void pump_v3_basicCold_t_eqFunction_3144(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3144};
  modelica_boolean tmp39;
  modelica_boolean tmp40;
  static const MMC_DEFSTRINGLIT(tmp41,107,"Variable violating min/max constraint: -1e10 <= plugFlowPipe.heaLos_b.port_b.h_outflow <= 1e10, has value: ");
  modelica_string tmp42;
  modelica_metatype tmpMeta43;
  static int tmp44 = 0;
  if(!tmp44)
  {
    tmp39 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[169]] /* plugFlowPipe.heaLos_b.port_b.h_outflow variable */),-1e10);
    tmp40 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[169]] /* plugFlowPipe.heaLos_b.port_b.h_outflow variable */),1e10);
    if(!(tmp39 && tmp40))
    {
      tmp42 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[169]] /* plugFlowPipe.heaLos_b.port_b.h_outflow variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta43 = stringAppend(MMC_REFSTRINGLIT(tmp41),tmp42);
      {
        const char* assert_cond = "(plugFlowPipe.heaLos_b.port_b.h_outflow >= -1e10 and plugFlowPipe.heaLos_b.port_b.h_outflow <= 1e10)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/root/.openmodelica/libraries/Modelica 4.0.0+maint.om/Fluid/Interfaces.mo",16,5,17,84,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta43));
        } else {
          FILE_INFO info = {"/root/.openmodelica/libraries/Modelica 4.0.0+maint.om/Fluid/Interfaces.mo",16,5,17,84,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta43));
        }
      }
      tmp44 = 1;
    }
  }
  threadData->lastEquationSolved = 3144;
}

/*
equation index: 3145
type: ALGORITHM

  assert(plugFlowPipe.heaLos_b.T_a_inflow >= 0.0, "Variable violating min constraint: 0.0 <= plugFlowPipe.heaLos_b.T_a_inflow, has value: " + String(plugFlowPipe.heaLos_b.T_a_inflow, "g"));
*/
void pump_v3_basicCold_t_eqFunction_3145(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3145};
  modelica_boolean tmp45;
  static const MMC_DEFSTRINGLIT(tmp46,87,"Variable violating min constraint: 0.0 <= plugFlowPipe.heaLos_b.T_a_inflow, has value: ");
  modelica_string tmp47;
  modelica_metatype tmpMeta48;
  static int tmp49 = 0;
  if(!tmp49)
  {
    tmp45 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[165]] /* plugFlowPipe.heaLos_b.T_a_inflow variable */),0.0);
    if(!tmp45)
    {
      tmp47 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[165]] /* plugFlowPipe.heaLos_b.T_a_inflow variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta48 = stringAppend(MMC_REFSTRINGLIT(tmp46),tmp47);
      {
        const char* assert_cond = "(plugFlowPipe.heaLos_b.T_a_inflow >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/work/IDEAS-master/IDEAS/Fluid/FixedResistances/BaseClasses/PlugFlowHeatLoss.mo",30,3,31,48,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta48));
        } else {
          FILE_INFO info = {"/work/IDEAS-master/IDEAS/Fluid/FixedResistances/BaseClasses/PlugFlowHeatLoss.mo",30,3,31,48,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta48));
        }
      }
      tmp49 = 1;
    }
  }
  threadData->lastEquationSolved = 3145;
}

/*
equation index: 3146
type: ALGORITHM

  assert(plugFlowPipe.heaLos_b.T_b_outflow >= 0.0, "Variable violating min constraint: 0.0 <= plugFlowPipe.heaLos_b.T_b_outflow, has value: " + String(plugFlowPipe.heaLos_b.T_b_outflow, "g"));
*/
void pump_v3_basicCold_t_eqFunction_3146(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3146};
  modelica_boolean tmp50;
  static const MMC_DEFSTRINGLIT(tmp51,88,"Variable violating min constraint: 0.0 <= plugFlowPipe.heaLos_b.T_b_outflow, has value: ");
  modelica_string tmp52;
  modelica_metatype tmpMeta53;
  static int tmp54 = 0;
  if(!tmp54)
  {
    tmp50 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[166]] /* plugFlowPipe.heaLos_b.T_b_outflow variable */),0.0);
    if(!tmp50)
    {
      tmp52 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[166]] /* plugFlowPipe.heaLos_b.T_b_outflow variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta53 = stringAppend(MMC_REFSTRINGLIT(tmp51),tmp52);
      {
        const char* assert_cond = "(plugFlowPipe.heaLos_b.T_b_outflow >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/work/IDEAS-master/IDEAS/Fluid/FixedResistances/BaseClasses/PlugFlowHeatLoss.mo",32,3,33,49,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta53));
        } else {
          FILE_INFO info = {"/work/IDEAS-master/IDEAS/Fluid/FixedResistances/BaseClasses/PlugFlowHeatLoss.mo",32,3,33,49,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta53));
        }
      }
      tmp54 = 1;
    }
  }
  threadData->lastEquationSolved = 3146;
}

/*
equation index: 3147
type: ALGORITHM

  assert(plugFlowPipe.vol_b.T >= 1.0 and plugFlowPipe.vol_b.T <= 1e4, "Variable violating min/max constraint: 1.0 <= plugFlowPipe.vol_b.T <= 1e4, has value: " + String(plugFlowPipe.vol_b.T, "g"));
*/
void pump_v3_basicCold_t_eqFunction_3147(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3147};
  modelica_boolean tmp55;
  modelica_boolean tmp56;
  static const MMC_DEFSTRINGLIT(tmp57,86,"Variable violating min/max constraint: 1.0 <= plugFlowPipe.vol_b.T <= 1e4, has value: ");
  modelica_string tmp58;
  modelica_metatype tmpMeta59;
  static int tmp60 = 0;
  if(!tmp60)
  {
    tmp55 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[197]] /* plugFlowPipe.vol_b.T variable */),1.0);
    tmp56 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[197]] /* plugFlowPipe.vol_b.T variable */),1e4);
    if(!(tmp55 && tmp56))
    {
      tmp58 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[197]] /* plugFlowPipe.vol_b.T variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta59 = stringAppend(MMC_REFSTRINGLIT(tmp57),tmp58);
      {
        const char* assert_cond = "(plugFlowPipe.vol_b.T >= 1.0 and plugFlowPipe.vol_b.T <= 1e4)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/work/IDEAS-master/IDEAS/Fluid/MixingVolumes/BaseClasses/PartialMixingVolume.mo",40,3,44,31,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta59));
        } else {
          FILE_INFO info = {"/work/IDEAS-master/IDEAS/Fluid/MixingVolumes/BaseClasses/PartialMixingVolume.mo",40,3,44,31,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta59));
        }
      }
      tmp60 = 1;
    }
  }
  threadData->lastEquationSolved = 3147;
}

/*
equation index: 3148
type: ALGORITHM

  assert(plugFlowPipe.vol_b.dynBal.medium.T >= 1.0 and plugFlowPipe.vol_b.dynBal.medium.T <= 1e4, "Variable violating min/max constraint: 1.0 <= plugFlowPipe.vol_b.dynBal.medium.T <= 1e4, has value: " + String(plugFlowPipe.vol_b.dynBal.medium.T, "g"));
*/
void pump_v3_basicCold_t_eqFunction_3148(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3148};
  modelica_boolean tmp61;
  modelica_boolean tmp62;
  static const MMC_DEFSTRINGLIT(tmp63,100,"Variable violating min/max constraint: 1.0 <= plugFlowPipe.vol_b.dynBal.medium.T <= 1e4, has value: ");
  modelica_string tmp64;
  modelica_metatype tmpMeta65;
  static int tmp66 = 0;
  if(!tmp66)
  {
    tmp61 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[204]] /* plugFlowPipe.vol_b.dynBal.medium.T variable */),1.0);
    tmp62 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[204]] /* plugFlowPipe.vol_b.dynBal.medium.T variable */),1e4);
    if(!(tmp61 && tmp62))
    {
      tmp64 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[204]] /* plugFlowPipe.vol_b.dynBal.medium.T variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta65 = stringAppend(MMC_REFSTRINGLIT(tmp63),tmp64);
      {
        const char* assert_cond = "(plugFlowPipe.vol_b.dynBal.medium.T >= 1.0 and plugFlowPipe.vol_b.dynBal.medium.T <= 1e4)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/work/IDEAS-master/IDEAS/Media/Water.mo",22,5,25,30,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta65));
        } else {
          FILE_INFO info = {"/work/IDEAS-master/IDEAS/Media/Water.mo",22,5,25,30,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta65));
        }
      }
      tmp66 = 1;
    }
  }
  threadData->lastEquationSolved = 3148;
}

/*
equation index: 3149
type: ALGORITHM

  assert(plugFlowPipe.vol_b.dynBal.ports_H_flow[1] >= -1e8 and plugFlowPipe.vol_b.dynBal.ports_H_flow[1] <= 1e8, "Variable violating min/max constraint: -1e8 <= plugFlowPipe.vol_b.dynBal.ports_H_flow[1] <= 1e8, has value: " + String(plugFlowPipe.vol_b.dynBal.ports_H_flow[1], "g"));
*/
void pump_v3_basicCold_t_eqFunction_3149(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3149};
  modelica_boolean tmp67;
  modelica_boolean tmp68;
  static const MMC_DEFSTRINGLIT(tmp69,108,"Variable violating min/max constraint: -1e8 <= plugFlowPipe.vol_b.dynBal.ports_H_flow[1] <= 1e8, has value: ");
  modelica_string tmp70;
  modelica_metatype tmpMeta71;
  static int tmp72 = 0;
  if(!tmp72)
  {
    tmp67 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[209]] /* plugFlowPipe.vol_b.dynBal.ports_H_flow[1] variable */),-1e8);
    tmp68 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[209]] /* plugFlowPipe.vol_b.dynBal.ports_H_flow[1] variable */),1e8);
    if(!(tmp67 && tmp68))
    {
      tmp70 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[209]] /* plugFlowPipe.vol_b.dynBal.ports_H_flow[1] variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta71 = stringAppend(MMC_REFSTRINGLIT(tmp69),tmp70);
      {
        const char* assert_cond = "(plugFlowPipe.vol_b.dynBal.ports_H_flow[1] >= -1e8 and plugFlowPipe.vol_b.dynBal.ports_H_flow[1] <= 1e8)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/work/IDEAS-master/IDEAS/Fluid/Interfaces/ConservationEquation.mo",128,3,128,47,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta71));
        } else {
          FILE_INFO info = {"/work/IDEAS-master/IDEAS/Fluid/Interfaces/ConservationEquation.mo",128,3,128,47,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta71));
        }
      }
      tmp72 = 1;
    }
  }
  threadData->lastEquationSolved = 3149;
}

/*
equation index: 3150
type: ALGORITHM

  assert(plugFlowPipe.vol_b.dynBal.ports_H_flow[2] >= -1e8 and plugFlowPipe.vol_b.dynBal.ports_H_flow[2] <= 1e8, "Variable violating min/max constraint: -1e8 <= plugFlowPipe.vol_b.dynBal.ports_H_flow[2] <= 1e8, has value: " + String(plugFlowPipe.vol_b.dynBal.ports_H_flow[2], "g"));
*/
void pump_v3_basicCold_t_eqFunction_3150(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3150};
  modelica_boolean tmp73;
  modelica_boolean tmp74;
  static const MMC_DEFSTRINGLIT(tmp75,108,"Variable violating min/max constraint: -1e8 <= plugFlowPipe.vol_b.dynBal.ports_H_flow[2] <= 1e8, has value: ");
  modelica_string tmp76;
  modelica_metatype tmpMeta77;
  static int tmp78 = 0;
  if(!tmp78)
  {
    tmp73 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[210]] /* plugFlowPipe.vol_b.dynBal.ports_H_flow[2] variable */),-1e8);
    tmp74 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[210]] /* plugFlowPipe.vol_b.dynBal.ports_H_flow[2] variable */),1e8);
    if(!(tmp73 && tmp74))
    {
      tmp76 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[210]] /* plugFlowPipe.vol_b.dynBal.ports_H_flow[2] variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta77 = stringAppend(MMC_REFSTRINGLIT(tmp75),tmp76);
      {
        const char* assert_cond = "(plugFlowPipe.vol_b.dynBal.ports_H_flow[2] >= -1e8 and plugFlowPipe.vol_b.dynBal.ports_H_flow[2] <= 1e8)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/work/IDEAS-master/IDEAS/Fluid/Interfaces/ConservationEquation.mo",128,3,128,47,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta77));
        } else {
          FILE_INFO info = {"/work/IDEAS-master/IDEAS/Fluid/Interfaces/ConservationEquation.mo",128,3,128,47,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta77));
        }
      }
      tmp78 = 1;
    }
  }
  threadData->lastEquationSolved = 3150;
}

/*
equation index: 3151
type: ALGORITHM

  assert(plugFlowPipe.vol_a.T >= 1.0 and plugFlowPipe.vol_a.T <= 1e4, "Variable violating min/max constraint: 1.0 <= plugFlowPipe.vol_a.T <= 1e4, has value: " + String(plugFlowPipe.vol_a.T, "g"));
*/
void pump_v3_basicCold_t_eqFunction_3151(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3151};
  modelica_boolean tmp79;
  modelica_boolean tmp80;
  static const MMC_DEFSTRINGLIT(tmp81,86,"Variable violating min/max constraint: 1.0 <= plugFlowPipe.vol_a.T <= 1e4, has value: ");
  modelica_string tmp82;
  modelica_metatype tmpMeta83;
  static int tmp84 = 0;
  if(!tmp84)
  {
    tmp79 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[181]] /* plugFlowPipe.vol_a.T variable */),1.0);
    tmp80 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[181]] /* plugFlowPipe.vol_a.T variable */),1e4);
    if(!(tmp79 && tmp80))
    {
      tmp82 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[181]] /* plugFlowPipe.vol_a.T variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta83 = stringAppend(MMC_REFSTRINGLIT(tmp81),tmp82);
      {
        const char* assert_cond = "(plugFlowPipe.vol_a.T >= 1.0 and plugFlowPipe.vol_a.T <= 1e4)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/work/IDEAS-master/IDEAS/Fluid/MixingVolumes/BaseClasses/PartialMixingVolume.mo",40,3,44,31,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta83));
        } else {
          FILE_INFO info = {"/work/IDEAS-master/IDEAS/Fluid/MixingVolumes/BaseClasses/PartialMixingVolume.mo",40,3,44,31,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta83));
        }
      }
      tmp84 = 1;
    }
  }
  threadData->lastEquationSolved = 3151;
}

/*
equation index: 3152
type: ALGORITHM

  assert(plugFlowPipe.vol_a.dynBal.medium.T >= 1.0 and plugFlowPipe.vol_a.dynBal.medium.T <= 1e4, "Variable violating min/max constraint: 1.0 <= plugFlowPipe.vol_a.dynBal.medium.T <= 1e4, has value: " + String(plugFlowPipe.vol_a.dynBal.medium.T, "g"));
*/
void pump_v3_basicCold_t_eqFunction_3152(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3152};
  modelica_boolean tmp85;
  modelica_boolean tmp86;
  static const MMC_DEFSTRINGLIT(tmp87,100,"Variable violating min/max constraint: 1.0 <= plugFlowPipe.vol_a.dynBal.medium.T <= 1e4, has value: ");
  modelica_string tmp88;
  modelica_metatype tmpMeta89;
  static int tmp90 = 0;
  if(!tmp90)
  {
    tmp85 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[188]] /* plugFlowPipe.vol_a.dynBal.medium.T variable */),1.0);
    tmp86 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[188]] /* plugFlowPipe.vol_a.dynBal.medium.T variable */),1e4);
    if(!(tmp85 && tmp86))
    {
      tmp88 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[188]] /* plugFlowPipe.vol_a.dynBal.medium.T variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta89 = stringAppend(MMC_REFSTRINGLIT(tmp87),tmp88);
      {
        const char* assert_cond = "(plugFlowPipe.vol_a.dynBal.medium.T >= 1.0 and plugFlowPipe.vol_a.dynBal.medium.T <= 1e4)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/work/IDEAS-master/IDEAS/Media/Water.mo",22,5,25,30,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta89));
        } else {
          FILE_INFO info = {"/work/IDEAS-master/IDEAS/Media/Water.mo",22,5,25,30,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta89));
        }
      }
      tmp90 = 1;
    }
  }
  threadData->lastEquationSolved = 3152;
}

/*
equation index: 3153
type: ALGORITHM

  assert(plugFlowPipe.vol_a.dynBal.ports_H_flow[1] >= -1e8 and plugFlowPipe.vol_a.dynBal.ports_H_flow[1] <= 1e8, "Variable violating min/max constraint: -1e8 <= plugFlowPipe.vol_a.dynBal.ports_H_flow[1] <= 1e8, has value: " + String(plugFlowPipe.vol_a.dynBal.ports_H_flow[1], "g"));
*/
void pump_v3_basicCold_t_eqFunction_3153(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3153};
  modelica_boolean tmp91;
  modelica_boolean tmp92;
  static const MMC_DEFSTRINGLIT(tmp93,108,"Variable violating min/max constraint: -1e8 <= plugFlowPipe.vol_a.dynBal.ports_H_flow[1] <= 1e8, has value: ");
  modelica_string tmp94;
  modelica_metatype tmpMeta95;
  static int tmp96 = 0;
  if(!tmp96)
  {
    tmp91 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[193]] /* plugFlowPipe.vol_a.dynBal.ports_H_flow[1] variable */),-1e8);
    tmp92 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[193]] /* plugFlowPipe.vol_a.dynBal.ports_H_flow[1] variable */),1e8);
    if(!(tmp91 && tmp92))
    {
      tmp94 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[193]] /* plugFlowPipe.vol_a.dynBal.ports_H_flow[1] variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta95 = stringAppend(MMC_REFSTRINGLIT(tmp93),tmp94);
      {
        const char* assert_cond = "(plugFlowPipe.vol_a.dynBal.ports_H_flow[1] >= -1e8 and plugFlowPipe.vol_a.dynBal.ports_H_flow[1] <= 1e8)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/work/IDEAS-master/IDEAS/Fluid/Interfaces/ConservationEquation.mo",128,3,128,47,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta95));
        } else {
          FILE_INFO info = {"/work/IDEAS-master/IDEAS/Fluid/Interfaces/ConservationEquation.mo",128,3,128,47,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta95));
        }
      }
      tmp96 = 1;
    }
  }
  threadData->lastEquationSolved = 3153;
}

/*
equation index: 3154
type: ALGORITHM

  assert(plugFlowPipe.vol_a.dynBal.ports_H_flow[2] >= -1e8 and plugFlowPipe.vol_a.dynBal.ports_H_flow[2] <= 1e8, "Variable violating min/max constraint: -1e8 <= plugFlowPipe.vol_a.dynBal.ports_H_flow[2] <= 1e8, has value: " + String(plugFlowPipe.vol_a.dynBal.ports_H_flow[2], "g"));
*/
void pump_v3_basicCold_t_eqFunction_3154(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3154};
  modelica_boolean tmp97;
  modelica_boolean tmp98;
  static const MMC_DEFSTRINGLIT(tmp99,108,"Variable violating min/max constraint: -1e8 <= plugFlowPipe.vol_a.dynBal.ports_H_flow[2] <= 1e8, has value: ");
  modelica_string tmp100;
  modelica_metatype tmpMeta101;
  static int tmp102 = 0;
  if(!tmp102)
  {
    tmp97 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[194]] /* plugFlowPipe.vol_a.dynBal.ports_H_flow[2] variable */),-1e8);
    tmp98 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[194]] /* plugFlowPipe.vol_a.dynBal.ports_H_flow[2] variable */),1e8);
    if(!(tmp97 && tmp98))
    {
      tmp100 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[194]] /* plugFlowPipe.vol_a.dynBal.ports_H_flow[2] variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta101 = stringAppend(MMC_REFSTRINGLIT(tmp99),tmp100);
      {
        const char* assert_cond = "(plugFlowPipe.vol_a.dynBal.ports_H_flow[2] >= -1e8 and plugFlowPipe.vol_a.dynBal.ports_H_flow[2] <= 1e8)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/work/IDEAS-master/IDEAS/Fluid/Interfaces/ConservationEquation.mo",128,3,128,47,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta101));
        } else {
          FILE_INFO info = {"/work/IDEAS-master/IDEAS/Fluid/Interfaces/ConservationEquation.mo",128,3,128,47,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta101));
        }
      }
      tmp102 = 1;
    }
  }
  threadData->lastEquationSolved = 3154;
}

/*
equation index: 3155
type: ALGORITHM

  assert(SenTempIn_cold.T >= 1.0 and SenTempIn_cold.T <= 1e4, "Variable violating min/max constraint: 1.0 <= SenTempIn_cold.T <= 1e4, has value: " + String(SenTempIn_cold.T, "g"));
*/
void pump_v3_basicCold_t_eqFunction_3155(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3155};
  modelica_boolean tmp103;
  modelica_boolean tmp104;
  static const MMC_DEFSTRINGLIT(tmp105,82,"Variable violating min/max constraint: 1.0 <= SenTempIn_cold.T <= 1e4, has value: ");
  modelica_string tmp106;
  modelica_metatype tmpMeta107;
  static int tmp108 = 0;
  if(!tmp108)
  {
    tmp103 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[140]] /* SenTempIn_cold.T variable */),1.0);
    tmp104 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[140]] /* SenTempIn_cold.T variable */),1e4);
    if(!(tmp103 && tmp104))
    {
      tmp106 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[140]] /* SenTempIn_cold.T variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta107 = stringAppend(MMC_REFSTRINGLIT(tmp105),tmp106);
      {
        const char* assert_cond = "(SenTempIn_cold.T >= 1.0 and SenTempIn_cold.T <= 1e4)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/work/IDEAS-master/IDEAS/Fluid/Sensors/TemperatureTwoPort.mo",4,3,13,24,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta107));
        } else {
          FILE_INFO info = {"/work/IDEAS-master/IDEAS/Fluid/Sensors/TemperatureTwoPort.mo",4,3,13,24,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta107));
        }
      }
      tmp108 = 1;
    }
  }
  threadData->lastEquationSolved = 3155;
}

/*
equation index: 3156
type: ALGORITHM

  assert(SenTempIn_cold.T_b_inflow >= 1.0 and SenTempIn_cold.T_b_inflow <= 1e4, "Variable violating min/max constraint: 1.0 <= SenTempIn_cold.T_b_inflow <= 1e4, has value: " + String(SenTempIn_cold.T_b_inflow, "g"));
*/
void pump_v3_basicCold_t_eqFunction_3156(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3156};
  modelica_boolean tmp109;
  modelica_boolean tmp110;
  static const MMC_DEFSTRINGLIT(tmp111,91,"Variable violating min/max constraint: 1.0 <= SenTempIn_cold.T_b_inflow <= 1e4, has value: ");
  modelica_string tmp112;
  modelica_metatype tmpMeta113;
  static int tmp114 = 0;
  if(!tmp114)
  {
    tmp109 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[141]] /* SenTempIn_cold.T_b_inflow variable */),1.0);
    tmp110 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[141]] /* SenTempIn_cold.T_b_inflow variable */),1e4);
    if(!(tmp109 && tmp110))
    {
      tmp112 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[141]] /* SenTempIn_cold.T_b_inflow variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta113 = stringAppend(MMC_REFSTRINGLIT(tmp111),tmp112);
      {
        const char* assert_cond = "(SenTempIn_cold.T_b_inflow >= 1.0 and SenTempIn_cold.T_b_inflow <= 1e4)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/work/IDEAS-master/IDEAS/Fluid/Sensors/TemperatureTwoPort.mo",37,3,38,86,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta113));
        } else {
          FILE_INFO info = {"/work/IDEAS-master/IDEAS/Fluid/Sensors/TemperatureTwoPort.mo",37,3,38,86,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta113));
        }
      }
      tmp114 = 1;
    }
  }
  threadData->lastEquationSolved = 3156;
}

/*
equation index: 3157
type: ALGORITHM

  assert(senTemOut_cold.port_b.h_outflow >= -1e10 and senTemOut_cold.port_b.h_outflow <= 1e10, "Variable violating min/max constraint: -1e10 <= senTemOut_cold.port_b.h_outflow <= 1e10, has value: " + String(senTemOut_cold.port_b.h_outflow, "g"));
*/
void pump_v3_basicCold_t_eqFunction_3157(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3157};
  modelica_boolean tmp115;
  modelica_boolean tmp116;
  static const MMC_DEFSTRINGLIT(tmp117,100,"Variable violating min/max constraint: -1e10 <= senTemOut_cold.port_b.h_outflow <= 1e10, has value: ");
  modelica_string tmp118;
  modelica_metatype tmpMeta119;
  static int tmp120 = 0;
  if(!tmp120)
  {
    tmp115 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[439]] /* senTemOut_cold.port_b.h_outflow variable */),-1e10);
    tmp116 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[439]] /* senTemOut_cold.port_b.h_outflow variable */),1e10);
    if(!(tmp115 && tmp116))
    {
      tmp118 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[439]] /* senTemOut_cold.port_b.h_outflow variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta119 = stringAppend(MMC_REFSTRINGLIT(tmp117),tmp118);
      {
        const char* assert_cond = "(senTemOut_cold.port_b.h_outflow >= -1e10 and senTemOut_cold.port_b.h_outflow <= 1e10)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/root/.openmodelica/libraries/Modelica 4.0.0+maint.om/Fluid/Interfaces.mo",16,5,17,84,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta119));
        } else {
          FILE_INFO info = {"/root/.openmodelica/libraries/Modelica 4.0.0+maint.om/Fluid/Interfaces.mo",16,5,17,84,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta119));
        }
      }
      tmp120 = 1;
    }
  }
  threadData->lastEquationSolved = 3157;
}

/*
equation index: 3158
type: ALGORITHM

  assert(senTemOut_cold.T >= 1.0 and senTemOut_cold.T <= 1e4, "Variable violating min/max constraint: 1.0 <= senTemOut_cold.T <= 1e4, has value: " + String(senTemOut_cold.T, "g"));
*/
void pump_v3_basicCold_t_eqFunction_3158(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3158};
  modelica_boolean tmp121;
  modelica_boolean tmp122;
  static const MMC_DEFSTRINGLIT(tmp123,82,"Variable violating min/max constraint: 1.0 <= senTemOut_cold.T <= 1e4, has value: ");
  modelica_string tmp124;
  modelica_metatype tmpMeta125;
  static int tmp126 = 0;
  if(!tmp126)
  {
    tmp121 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[435]] /* senTemOut_cold.T variable */),1.0);
    tmp122 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[435]] /* senTemOut_cold.T variable */),1e4);
    if(!(tmp121 && tmp122))
    {
      tmp124 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[435]] /* senTemOut_cold.T variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta125 = stringAppend(MMC_REFSTRINGLIT(tmp123),tmp124);
      {
        const char* assert_cond = "(senTemOut_cold.T >= 1.0 and senTemOut_cold.T <= 1e4)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/work/IDEAS-master/IDEAS/Fluid/Sensors/TemperatureTwoPort.mo",4,3,13,24,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta125));
        } else {
          FILE_INFO info = {"/work/IDEAS-master/IDEAS/Fluid/Sensors/TemperatureTwoPort.mo",4,3,13,24,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta125));
        }
      }
      tmp126 = 1;
    }
  }
  threadData->lastEquationSolved = 3158;
}

/*
equation index: 3159
type: ALGORITHM

  assert(senTemOut_cold.T_b_inflow >= 1.0 and senTemOut_cold.T_b_inflow <= 1e4, "Variable violating min/max constraint: 1.0 <= senTemOut_cold.T_b_inflow <= 1e4, has value: " + String(senTemOut_cold.T_b_inflow, "g"));
*/
void pump_v3_basicCold_t_eqFunction_3159(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3159};
  modelica_boolean tmp127;
  modelica_boolean tmp128;
  static const MMC_DEFSTRINGLIT(tmp129,91,"Variable violating min/max constraint: 1.0 <= senTemOut_cold.T_b_inflow <= 1e4, has value: ");
  modelica_string tmp130;
  modelica_metatype tmpMeta131;
  static int tmp132 = 0;
  if(!tmp132)
  {
    tmp127 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[436]] /* senTemOut_cold.T_b_inflow variable */),1.0);
    tmp128 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[436]] /* senTemOut_cold.T_b_inflow variable */),1e4);
    if(!(tmp127 && tmp128))
    {
      tmp130 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[436]] /* senTemOut_cold.T_b_inflow variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta131 = stringAppend(MMC_REFSTRINGLIT(tmp129),tmp130);
      {
        const char* assert_cond = "(senTemOut_cold.T_b_inflow >= 1.0 and senTemOut_cold.T_b_inflow <= 1e4)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/work/IDEAS-master/IDEAS/Fluid/Sensors/TemperatureTwoPort.mo",37,3,38,86,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta131));
        } else {
          FILE_INFO info = {"/work/IDEAS-master/IDEAS/Fluid/Sensors/TemperatureTwoPort.mo",37,3,38,86,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta131));
        }
      }
      tmp132 = 1;
    }
  }
  threadData->lastEquationSolved = 3159;
}

/*
equation index: 3160
type: ALGORITHM

  assert(senMasFlo.port_a.h_outflow >= -1e10 and senMasFlo.port_a.h_outflow <= 1e10, "Variable violating min/max constraint: -1e10 <= senMasFlo.port_a.h_outflow <= 1e10, has value: " + String(senMasFlo.port_a.h_outflow, "g"));
*/
void pump_v3_basicCold_t_eqFunction_3160(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3160};
  modelica_boolean tmp133;
  modelica_boolean tmp134;
  static const MMC_DEFSTRINGLIT(tmp135,95,"Variable violating min/max constraint: -1e10 <= senMasFlo.port_a.h_outflow <= 1e10, has value: ");
  modelica_string tmp136;
  modelica_metatype tmpMeta137;
  static int tmp138 = 0;
  if(!tmp138)
  {
    tmp133 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[429]] /* senMasFlo.port_a.h_outflow variable */),-1e10);
    tmp134 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[429]] /* senMasFlo.port_a.h_outflow variable */),1e10);
    if(!(tmp133 && tmp134))
    {
      tmp136 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[429]] /* senMasFlo.port_a.h_outflow variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta137 = stringAppend(MMC_REFSTRINGLIT(tmp135),tmp136);
      {
        const char* assert_cond = "(senMasFlo.port_a.h_outflow >= -1e10 and senMasFlo.port_a.h_outflow <= 1e10)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/root/.openmodelica/libraries/Modelica 4.0.0+maint.om/Fluid/Interfaces.mo",16,5,17,84,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta137));
        } else {
          FILE_INFO info = {"/root/.openmodelica/libraries/Modelica 4.0.0+maint.om/Fluid/Interfaces.mo",16,5,17,84,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta137));
        }
      }
      tmp138 = 1;
    }
  }
  threadData->lastEquationSolved = 3160;
}

/*
equation index: 3161
type: ALGORITHM

  assert(bou1.ports[1].h_outflow >= -1e10 and bou1.ports[1].h_outflow <= 1e10, "Variable violating min/max constraint: -1e10 <= bou1.ports[1].h_outflow <= 1e10, has value: " + String(bou1.ports[1].h_outflow, "g"));
*/
void pump_v3_basicCold_t_eqFunction_3161(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3161};
  modelica_boolean tmp139;
  modelica_boolean tmp140;
  static const MMC_DEFSTRINGLIT(tmp141,92,"Variable violating min/max constraint: -1e10 <= bou1.ports[1].h_outflow <= 1e10, has value: ");
  modelica_string tmp142;
  modelica_metatype tmpMeta143;
  static int tmp144 = 0;
  if(!tmp144)
  {
    tmp139 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[148]] /* bou1.ports[1].h_outflow variable */),-1e10);
    tmp140 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[148]] /* bou1.ports[1].h_outflow variable */),1e10);
    if(!(tmp139 && tmp140))
    {
      tmp142 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[148]] /* bou1.ports[1].h_outflow variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta143 = stringAppend(MMC_REFSTRINGLIT(tmp141),tmp142);
      {
        const char* assert_cond = "(bou1.ports[1].h_outflow >= -1e10 and bou1.ports[1].h_outflow <= 1e10)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/root/.openmodelica/libraries/Modelica 4.0.0+maint.om/Fluid/Interfaces.mo",16,5,17,84,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta143));
        } else {
          FILE_INFO info = {"/root/.openmodelica/libraries/Modelica 4.0.0+maint.om/Fluid/Interfaces.mo",16,5,17,84,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta143));
        }
      }
      tmp144 = 1;
    }
  }
  threadData->lastEquationSolved = 3161;
}

/*
equation index: 3162
type: ALGORITHM

  assert(plugFlowPipe1.port_a.p >= 0.0 and plugFlowPipe1.port_a.p <= 1e8, "Variable violating min/max constraint: 0.0 <= plugFlowPipe1.port_a.p <= 1e8, has value: " + String(plugFlowPipe1.port_a.p, "g"));
*/
void pump_v3_basicCold_t_eqFunction_3162(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3162};
  modelica_boolean tmp145;
  modelica_boolean tmp146;
  static const MMC_DEFSTRINGLIT(tmp147,88,"Variable violating min/max constraint: 0.0 <= plugFlowPipe1.port_a.p <= 1e8, has value: ");
  modelica_string tmp148;
  modelica_metatype tmpMeta149;
  static int tmp150 = 0;
  if(!tmp150)
  {
    tmp145 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[230]] /* plugFlowPipe1.port_a.p variable */),0.0);
    tmp146 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[230]] /* plugFlowPipe1.port_a.p variable */),1e8);
    if(!(tmp145 && tmp146))
    {
      tmp148 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[230]] /* plugFlowPipe1.port_a.p variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta149 = stringAppend(MMC_REFSTRINGLIT(tmp147),tmp148);
      {
        const char* assert_cond = "(plugFlowPipe1.port_a.p >= 0.0 and plugFlowPipe1.port_a.p <= 1e8)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/root/.openmodelica/libraries/Modelica 4.0.0+maint.om/Fluid/Interfaces.mo",15,5,15,79,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta149));
        } else {
          FILE_INFO info = {"/root/.openmodelica/libraries/Modelica 4.0.0+maint.om/Fluid/Interfaces.mo",15,5,15,79,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta149));
        }
      }
      tmp150 = 1;
    }
  }
  threadData->lastEquationSolved = 3162;
}

/*
equation index: 3163
type: ALGORITHM

  assert(plugFlowPipe1.port_a.h_outflow >= -1e10 and plugFlowPipe1.port_a.h_outflow <= 1e10, "Variable violating min/max constraint: -1e10 <= plugFlowPipe1.port_a.h_outflow <= 1e10, has value: " + String(plugFlowPipe1.port_a.h_outflow, "g"));
*/
void pump_v3_basicCold_t_eqFunction_3163(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3163};
  modelica_boolean tmp151;
  modelica_boolean tmp152;
  static const MMC_DEFSTRINGLIT(tmp153,99,"Variable violating min/max constraint: -1e10 <= plugFlowPipe1.port_a.h_outflow <= 1e10, has value: ");
  modelica_string tmp154;
  modelica_metatype tmpMeta155;
  static int tmp156 = 0;
  if(!tmp156)
  {
    tmp151 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[229]] /* plugFlowPipe1.port_a.h_outflow variable */),-1e10);
    tmp152 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[229]] /* plugFlowPipe1.port_a.h_outflow variable */),1e10);
    if(!(tmp151 && tmp152))
    {
      tmp154 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[229]] /* plugFlowPipe1.port_a.h_outflow variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta155 = stringAppend(MMC_REFSTRINGLIT(tmp153),tmp154);
      {
        const char* assert_cond = "(plugFlowPipe1.port_a.h_outflow >= -1e10 and plugFlowPipe1.port_a.h_outflow <= 1e10)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/root/.openmodelica/libraries/Modelica 4.0.0+maint.om/Fluid/Interfaces.mo",16,5,17,84,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta155));
        } else {
          FILE_INFO info = {"/root/.openmodelica/libraries/Modelica 4.0.0+maint.om/Fluid/Interfaces.mo",16,5,17,84,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta155));
        }
      }
      tmp156 = 1;
    }
  }
  threadData->lastEquationSolved = 3163;
}

/*
equation index: 3164
type: ALGORITHM

  assert(plugFlowPipe1.heatPort.T >= 0.0, "Variable violating min constraint: 0.0 <= plugFlowPipe1.heatPort.T, has value: " + String(plugFlowPipe1.heatPort.T, "g"));
*/
void pump_v3_basicCold_t_eqFunction_3164(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3164};
  modelica_boolean tmp157;
  static const MMC_DEFSTRINGLIT(tmp158,79,"Variable violating min constraint: 0.0 <= plugFlowPipe1.heatPort.T, has value: ");
  modelica_string tmp159;
  modelica_metatype tmpMeta160;
  static int tmp161 = 0;
  if(!tmp161)
  {
    tmp157 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[228]] /* plugFlowPipe1.heatPort.T variable */),0.0);
    if(!tmp157)
    {
      tmp159 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[228]] /* plugFlowPipe1.heatPort.T variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta160 = stringAppend(MMC_REFSTRINGLIT(tmp158),tmp159);
      {
        const char* assert_cond = "(plugFlowPipe1.heatPort.T >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/root/.openmodelica/libraries/Modelica 4.0.0+maint.om/Thermal/HeatTransfer/Interfaces/HeatPort.mo",3,3,3,38,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta160));
        } else {
          FILE_INFO info = {"/root/.openmodelica/libraries/Modelica 4.0.0+maint.om/Thermal/HeatTransfer/Interfaces/HeatPort.mo",3,3,3,38,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta160));
        }
      }
      tmp161 = 1;
    }
  }
  threadData->lastEquationSolved = 3164;
}

/*
equation index: 3165
type: ALGORITHM

  assert(plugFlowPipe1.del.port_a.h_outflow >= -1e10 and plugFlowPipe1.del.port_a.h_outflow <= 1e10, "Variable violating min/max constraint: -1e10 <= plugFlowPipe1.del.port_a.h_outflow <= 1e10, has value: " + String(plugFlowPipe1.del.port_a.h_outflow, "g"));
*/
void pump_v3_basicCold_t_eqFunction_3165(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3165};
  modelica_boolean tmp162;
  modelica_boolean tmp163;
  static const MMC_DEFSTRINGLIT(tmp164,103,"Variable violating min/max constraint: -1e10 <= plugFlowPipe1.del.port_a.h_outflow <= 1e10, has value: ");
  modelica_string tmp165;
  modelica_metatype tmpMeta166;
  static int tmp167 = 0;
  if(!tmp167)
  {
    tmp162 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[215]] /* plugFlowPipe1.del.port_a.h_outflow variable */),-1e10);
    tmp163 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[215]] /* plugFlowPipe1.del.port_a.h_outflow variable */),1e10);
    if(!(tmp162 && tmp163))
    {
      tmp165 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[215]] /* plugFlowPipe1.del.port_a.h_outflow variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta166 = stringAppend(MMC_REFSTRINGLIT(tmp164),tmp165);
      {
        const char* assert_cond = "(plugFlowPipe1.del.port_a.h_outflow >= -1e10 and plugFlowPipe1.del.port_a.h_outflow <= 1e10)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/root/.openmodelica/libraries/Modelica 4.0.0+maint.om/Fluid/Interfaces.mo",16,5,17,84,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta166));
        } else {
          FILE_INFO info = {"/root/.openmodelica/libraries/Modelica 4.0.0+maint.om/Fluid/Interfaces.mo",16,5,17,84,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta166));
        }
      }
      tmp167 = 1;
    }
  }
  threadData->lastEquationSolved = 3165;
}

/*
equation index: 3166
type: ALGORITHM

  assert(plugFlowPipe1.del.port_b.h_outflow >= -1e10 and plugFlowPipe1.del.port_b.h_outflow <= 1e10, "Variable violating min/max constraint: -1e10 <= plugFlowPipe1.del.port_b.h_outflow <= 1e10, has value: " + String(plugFlowPipe1.del.port_b.h_outflow, "g"));
*/
void pump_v3_basicCold_t_eqFunction_3166(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3166};
  modelica_boolean tmp168;
  modelica_boolean tmp169;
  static const MMC_DEFSTRINGLIT(tmp170,103,"Variable violating min/max constraint: -1e10 <= plugFlowPipe1.del.port_b.h_outflow <= 1e10, has value: ");
  modelica_string tmp171;
  modelica_metatype tmpMeta172;
  static int tmp173 = 0;
  if(!tmp173)
  {
    tmp168 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[216]] /* plugFlowPipe1.del.port_b.h_outflow variable */),-1e10);
    tmp169 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[216]] /* plugFlowPipe1.del.port_b.h_outflow variable */),1e10);
    if(!(tmp168 && tmp169))
    {
      tmp171 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[216]] /* plugFlowPipe1.del.port_b.h_outflow variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta172 = stringAppend(MMC_REFSTRINGLIT(tmp170),tmp171);
      {
        const char* assert_cond = "(plugFlowPipe1.del.port_b.h_outflow >= -1e10 and plugFlowPipe1.del.port_b.h_outflow <= 1e10)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/root/.openmodelica/libraries/Modelica 4.0.0+maint.om/Fluid/Interfaces.mo",16,5,17,84,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta172));
        } else {
          FILE_INFO info = {"/root/.openmodelica/libraries/Modelica 4.0.0+maint.om/Fluid/Interfaces.mo",16,5,17,84,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta172));
        }
      }
      tmp173 = 1;
    }
  }
  threadData->lastEquationSolved = 3166;
}

/*
equation index: 3167
type: ALGORITHM

  assert(plugFlowPipe1.heaLos_a.port_b.h_outflow >= -1e10 and plugFlowPipe1.heaLos_a.port_b.h_outflow <= 1e10, "Variable violating min/max constraint: -1e10 <= plugFlowPipe1.heaLos_a.port_b.h_outflow <= 1e10, has value: " + String(plugFlowPipe1.heaLos_a.port_b.h_outflow, "g"));
*/
void pump_v3_basicCold_t_eqFunction_3167(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3167};
  modelica_boolean tmp174;
  modelica_boolean tmp175;
  static const MMC_DEFSTRINGLIT(tmp176,108,"Variable violating min/max constraint: -1e10 <= plugFlowPipe1.heaLos_a.port_b.h_outflow <= 1e10, has value: ");
  modelica_string tmp177;
  modelica_metatype tmpMeta178;
  static int tmp179 = 0;
  if(!tmp179)
  {
    tmp174 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[222]] /* plugFlowPipe1.heaLos_a.port_b.h_outflow variable */),-1e10);
    tmp175 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[222]] /* plugFlowPipe1.heaLos_a.port_b.h_outflow variable */),1e10);
    if(!(tmp174 && tmp175))
    {
      tmp177 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[222]] /* plugFlowPipe1.heaLos_a.port_b.h_outflow variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta178 = stringAppend(MMC_REFSTRINGLIT(tmp176),tmp177);
      {
        const char* assert_cond = "(plugFlowPipe1.heaLos_a.port_b.h_outflow >= -1e10 and plugFlowPipe1.heaLos_a.port_b.h_outflow <= 1e10)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/root/.openmodelica/libraries/Modelica 4.0.0+maint.om/Fluid/Interfaces.mo",16,5,17,84,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta178));
        } else {
          FILE_INFO info = {"/root/.openmodelica/libraries/Modelica 4.0.0+maint.om/Fluid/Interfaces.mo",16,5,17,84,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta178));
        }
      }
      tmp179 = 1;
    }
  }
  threadData->lastEquationSolved = 3167;
}

/*
equation index: 3168
type: ALGORITHM

  assert(plugFlowPipe1.heaLos_a.T_a_inflow >= 0.0, "Variable violating min constraint: 0.0 <= plugFlowPipe1.heaLos_a.T_a_inflow, has value: " + String(plugFlowPipe1.heaLos_a.T_a_inflow, "g"));
*/
void pump_v3_basicCold_t_eqFunction_3168(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3168};
  modelica_boolean tmp180;
  static const MMC_DEFSTRINGLIT(tmp181,88,"Variable violating min constraint: 0.0 <= plugFlowPipe1.heaLos_a.T_a_inflow, has value: ");
  modelica_string tmp182;
  modelica_metatype tmpMeta183;
  static int tmp184 = 0;
  if(!tmp184)
  {
    tmp180 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[218]] /* plugFlowPipe1.heaLos_a.T_a_inflow variable */),0.0);
    if(!tmp180)
    {
      tmp182 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[218]] /* plugFlowPipe1.heaLos_a.T_a_inflow variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta183 = stringAppend(MMC_REFSTRINGLIT(tmp181),tmp182);
      {
        const char* assert_cond = "(plugFlowPipe1.heaLos_a.T_a_inflow >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/work/IDEAS-master/IDEAS/Fluid/FixedResistances/BaseClasses/PlugFlowHeatLoss.mo",30,3,31,48,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta183));
        } else {
          FILE_INFO info = {"/work/IDEAS-master/IDEAS/Fluid/FixedResistances/BaseClasses/PlugFlowHeatLoss.mo",30,3,31,48,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta183));
        }
      }
      tmp184 = 1;
    }
  }
  threadData->lastEquationSolved = 3168;
}

/*
equation index: 3169
type: ALGORITHM

  assert(plugFlowPipe1.heaLos_a.T_b_outflow >= 0.0, "Variable violating min constraint: 0.0 <= plugFlowPipe1.heaLos_a.T_b_outflow, has value: " + String(plugFlowPipe1.heaLos_a.T_b_outflow, "g"));
*/
void pump_v3_basicCold_t_eqFunction_3169(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3169};
  modelica_boolean tmp185;
  static const MMC_DEFSTRINGLIT(tmp186,89,"Variable violating min constraint: 0.0 <= plugFlowPipe1.heaLos_a.T_b_outflow, has value: ");
  modelica_string tmp187;
  modelica_metatype tmpMeta188;
  static int tmp189 = 0;
  if(!tmp189)
  {
    tmp185 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[219]] /* plugFlowPipe1.heaLos_a.T_b_outflow variable */),0.0);
    if(!tmp185)
    {
      tmp187 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[219]] /* plugFlowPipe1.heaLos_a.T_b_outflow variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta188 = stringAppend(MMC_REFSTRINGLIT(tmp186),tmp187);
      {
        const char* assert_cond = "(plugFlowPipe1.heaLos_a.T_b_outflow >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/work/IDEAS-master/IDEAS/Fluid/FixedResistances/BaseClasses/PlugFlowHeatLoss.mo",32,3,33,49,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta188));
        } else {
          FILE_INFO info = {"/work/IDEAS-master/IDEAS/Fluid/FixedResistances/BaseClasses/PlugFlowHeatLoss.mo",32,3,33,49,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta188));
        }
      }
      tmp189 = 1;
    }
  }
  threadData->lastEquationSolved = 3169;
}

/*
equation index: 3170
type: ALGORITHM

  assert(plugFlowPipe1.heaLos_b.port_b.h_outflow >= -1e10 and plugFlowPipe1.heaLos_b.port_b.h_outflow <= 1e10, "Variable violating min/max constraint: -1e10 <= plugFlowPipe1.heaLos_b.port_b.h_outflow <= 1e10, has value: " + String(plugFlowPipe1.heaLos_b.port_b.h_outflow, "g"));
*/
void pump_v3_basicCold_t_eqFunction_3170(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3170};
  modelica_boolean tmp190;
  modelica_boolean tmp191;
  static const MMC_DEFSTRINGLIT(tmp192,108,"Variable violating min/max constraint: -1e10 <= plugFlowPipe1.heaLos_b.port_b.h_outflow <= 1e10, has value: ");
  modelica_string tmp193;
  modelica_metatype tmpMeta194;
  static int tmp195 = 0;
  if(!tmp195)
  {
    tmp190 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[227]] /* plugFlowPipe1.heaLos_b.port_b.h_outflow variable */),-1e10);
    tmp191 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[227]] /* plugFlowPipe1.heaLos_b.port_b.h_outflow variable */),1e10);
    if(!(tmp190 && tmp191))
    {
      tmp193 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[227]] /* plugFlowPipe1.heaLos_b.port_b.h_outflow variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta194 = stringAppend(MMC_REFSTRINGLIT(tmp192),tmp193);
      {
        const char* assert_cond = "(plugFlowPipe1.heaLos_b.port_b.h_outflow >= -1e10 and plugFlowPipe1.heaLos_b.port_b.h_outflow <= 1e10)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/root/.openmodelica/libraries/Modelica 4.0.0+maint.om/Fluid/Interfaces.mo",16,5,17,84,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta194));
        } else {
          FILE_INFO info = {"/root/.openmodelica/libraries/Modelica 4.0.0+maint.om/Fluid/Interfaces.mo",16,5,17,84,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta194));
        }
      }
      tmp195 = 1;
    }
  }
  threadData->lastEquationSolved = 3170;
}

/*
equation index: 3171
type: ALGORITHM

  assert(plugFlowPipe1.heaLos_b.T_a_inflow >= 0.0, "Variable violating min constraint: 0.0 <= plugFlowPipe1.heaLos_b.T_a_inflow, has value: " + String(plugFlowPipe1.heaLos_b.T_a_inflow, "g"));
*/
void pump_v3_basicCold_t_eqFunction_3171(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3171};
  modelica_boolean tmp196;
  static const MMC_DEFSTRINGLIT(tmp197,88,"Variable violating min constraint: 0.0 <= plugFlowPipe1.heaLos_b.T_a_inflow, has value: ");
  modelica_string tmp198;
  modelica_metatype tmpMeta199;
  static int tmp200 = 0;
  if(!tmp200)
  {
    tmp196 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[223]] /* plugFlowPipe1.heaLos_b.T_a_inflow variable */),0.0);
    if(!tmp196)
    {
      tmp198 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[223]] /* plugFlowPipe1.heaLos_b.T_a_inflow variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta199 = stringAppend(MMC_REFSTRINGLIT(tmp197),tmp198);
      {
        const char* assert_cond = "(plugFlowPipe1.heaLos_b.T_a_inflow >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/work/IDEAS-master/IDEAS/Fluid/FixedResistances/BaseClasses/PlugFlowHeatLoss.mo",30,3,31,48,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta199));
        } else {
          FILE_INFO info = {"/work/IDEAS-master/IDEAS/Fluid/FixedResistances/BaseClasses/PlugFlowHeatLoss.mo",30,3,31,48,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta199));
        }
      }
      tmp200 = 1;
    }
  }
  threadData->lastEquationSolved = 3171;
}

/*
equation index: 3172
type: ALGORITHM

  assert(plugFlowPipe1.heaLos_b.T_b_outflow >= 0.0, "Variable violating min constraint: 0.0 <= plugFlowPipe1.heaLos_b.T_b_outflow, has value: " + String(plugFlowPipe1.heaLos_b.T_b_outflow, "g"));
*/
void pump_v3_basicCold_t_eqFunction_3172(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3172};
  modelica_boolean tmp201;
  static const MMC_DEFSTRINGLIT(tmp202,89,"Variable violating min constraint: 0.0 <= plugFlowPipe1.heaLos_b.T_b_outflow, has value: ");
  modelica_string tmp203;
  modelica_metatype tmpMeta204;
  static int tmp205 = 0;
  if(!tmp205)
  {
    tmp201 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[224]] /* plugFlowPipe1.heaLos_b.T_b_outflow variable */),0.0);
    if(!tmp201)
    {
      tmp203 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[224]] /* plugFlowPipe1.heaLos_b.T_b_outflow variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta204 = stringAppend(MMC_REFSTRINGLIT(tmp202),tmp203);
      {
        const char* assert_cond = "(plugFlowPipe1.heaLos_b.T_b_outflow >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/work/IDEAS-master/IDEAS/Fluid/FixedResistances/BaseClasses/PlugFlowHeatLoss.mo",32,3,33,49,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta204));
        } else {
          FILE_INFO info = {"/work/IDEAS-master/IDEAS/Fluid/FixedResistances/BaseClasses/PlugFlowHeatLoss.mo",32,3,33,49,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta204));
        }
      }
      tmp205 = 1;
    }
  }
  threadData->lastEquationSolved = 3172;
}

/*
equation index: 3173
type: ALGORITHM

  assert(plugFlowPipe1.vol_b.T >= 1.0 and plugFlowPipe1.vol_b.T <= 1e4, "Variable violating min/max constraint: 1.0 <= plugFlowPipe1.vol_b.T <= 1e4, has value: " + String(plugFlowPipe1.vol_b.T, "g"));
*/
void pump_v3_basicCold_t_eqFunction_3173(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3173};
  modelica_boolean tmp206;
  modelica_boolean tmp207;
  static const MMC_DEFSTRINGLIT(tmp208,87,"Variable violating min/max constraint: 1.0 <= plugFlowPipe1.vol_b.T <= 1e4, has value: ");
  modelica_string tmp209;
  modelica_metatype tmpMeta210;
  static int tmp211 = 0;
  if(!tmp211)
  {
    tmp206 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[255]] /* plugFlowPipe1.vol_b.T variable */),1.0);
    tmp207 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[255]] /* plugFlowPipe1.vol_b.T variable */),1e4);
    if(!(tmp206 && tmp207))
    {
      tmp209 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[255]] /* plugFlowPipe1.vol_b.T variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta210 = stringAppend(MMC_REFSTRINGLIT(tmp208),tmp209);
      {
        const char* assert_cond = "(plugFlowPipe1.vol_b.T >= 1.0 and plugFlowPipe1.vol_b.T <= 1e4)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/work/IDEAS-master/IDEAS/Fluid/MixingVolumes/BaseClasses/PartialMixingVolume.mo",40,3,44,31,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta210));
        } else {
          FILE_INFO info = {"/work/IDEAS-master/IDEAS/Fluid/MixingVolumes/BaseClasses/PartialMixingVolume.mo",40,3,44,31,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta210));
        }
      }
      tmp211 = 1;
    }
  }
  threadData->lastEquationSolved = 3173;
}

/*
equation index: 3174
type: ALGORITHM

  assert(plugFlowPipe1.vol_b.dynBal.medium.T >= 1.0 and plugFlowPipe1.vol_b.dynBal.medium.T <= 1e4, "Variable violating min/max constraint: 1.0 <= plugFlowPipe1.vol_b.dynBal.medium.T <= 1e4, has value: " + String(plugFlowPipe1.vol_b.dynBal.medium.T, "g"));
*/
void pump_v3_basicCold_t_eqFunction_3174(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3174};
  modelica_boolean tmp212;
  modelica_boolean tmp213;
  static const MMC_DEFSTRINGLIT(tmp214,101,"Variable violating min/max constraint: 1.0 <= plugFlowPipe1.vol_b.dynBal.medium.T <= 1e4, has value: ");
  modelica_string tmp215;
  modelica_metatype tmpMeta216;
  static int tmp217 = 0;
  if(!tmp217)
  {
    tmp212 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[262]] /* plugFlowPipe1.vol_b.dynBal.medium.T variable */),1.0);
    tmp213 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[262]] /* plugFlowPipe1.vol_b.dynBal.medium.T variable */),1e4);
    if(!(tmp212 && tmp213))
    {
      tmp215 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[262]] /* plugFlowPipe1.vol_b.dynBal.medium.T variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta216 = stringAppend(MMC_REFSTRINGLIT(tmp214),tmp215);
      {
        const char* assert_cond = "(plugFlowPipe1.vol_b.dynBal.medium.T >= 1.0 and plugFlowPipe1.vol_b.dynBal.medium.T <= 1e4)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/work/IDEAS-master/IDEAS/Media/Water.mo",22,5,25,30,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta216));
        } else {
          FILE_INFO info = {"/work/IDEAS-master/IDEAS/Media/Water.mo",22,5,25,30,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta216));
        }
      }
      tmp217 = 1;
    }
  }
  threadData->lastEquationSolved = 3174;
}

/*
equation index: 3175
type: ALGORITHM

  assert(plugFlowPipe1.vol_b.dynBal.ports_H_flow[1] >= -1e8 and plugFlowPipe1.vol_b.dynBal.ports_H_flow[1] <= 1e8, "Variable violating min/max constraint: -1e8 <= plugFlowPipe1.vol_b.dynBal.ports_H_flow[1] <= 1e8, has value: " + String(plugFlowPipe1.vol_b.dynBal.ports_H_flow[1], "g"));
*/
void pump_v3_basicCold_t_eqFunction_3175(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3175};
  modelica_boolean tmp218;
  modelica_boolean tmp219;
  static const MMC_DEFSTRINGLIT(tmp220,109,"Variable violating min/max constraint: -1e8 <= plugFlowPipe1.vol_b.dynBal.ports_H_flow[1] <= 1e8, has value: ");
  modelica_string tmp221;
  modelica_metatype tmpMeta222;
  static int tmp223 = 0;
  if(!tmp223)
  {
    tmp218 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[266]] /* plugFlowPipe1.vol_b.dynBal.ports_H_flow[1] variable */),-1e8);
    tmp219 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[266]] /* plugFlowPipe1.vol_b.dynBal.ports_H_flow[1] variable */),1e8);
    if(!(tmp218 && tmp219))
    {
      tmp221 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[266]] /* plugFlowPipe1.vol_b.dynBal.ports_H_flow[1] variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta222 = stringAppend(MMC_REFSTRINGLIT(tmp220),tmp221);
      {
        const char* assert_cond = "(plugFlowPipe1.vol_b.dynBal.ports_H_flow[1] >= -1e8 and plugFlowPipe1.vol_b.dynBal.ports_H_flow[1] <= 1e8)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/work/IDEAS-master/IDEAS/Fluid/Interfaces/ConservationEquation.mo",128,3,128,47,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta222));
        } else {
          FILE_INFO info = {"/work/IDEAS-master/IDEAS/Fluid/Interfaces/ConservationEquation.mo",128,3,128,47,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta222));
        }
      }
      tmp223 = 1;
    }
  }
  threadData->lastEquationSolved = 3175;
}

/*
equation index: 3176
type: ALGORITHM

  assert(plugFlowPipe1.vol_b.dynBal.ports_H_flow[2] >= -1e8 and plugFlowPipe1.vol_b.dynBal.ports_H_flow[2] <= 1e8, "Variable violating min/max constraint: -1e8 <= plugFlowPipe1.vol_b.dynBal.ports_H_flow[2] <= 1e8, has value: " + String(plugFlowPipe1.vol_b.dynBal.ports_H_flow[2], "g"));
*/
void pump_v3_basicCold_t_eqFunction_3176(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3176};
  modelica_boolean tmp224;
  modelica_boolean tmp225;
  static const MMC_DEFSTRINGLIT(tmp226,109,"Variable violating min/max constraint: -1e8 <= plugFlowPipe1.vol_b.dynBal.ports_H_flow[2] <= 1e8, has value: ");
  modelica_string tmp227;
  modelica_metatype tmpMeta228;
  static int tmp229 = 0;
  if(!tmp229)
  {
    tmp224 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[267]] /* plugFlowPipe1.vol_b.dynBal.ports_H_flow[2] variable */),-1e8);
    tmp225 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[267]] /* plugFlowPipe1.vol_b.dynBal.ports_H_flow[2] variable */),1e8);
    if(!(tmp224 && tmp225))
    {
      tmp227 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[267]] /* plugFlowPipe1.vol_b.dynBal.ports_H_flow[2] variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta228 = stringAppend(MMC_REFSTRINGLIT(tmp226),tmp227);
      {
        const char* assert_cond = "(plugFlowPipe1.vol_b.dynBal.ports_H_flow[2] >= -1e8 and plugFlowPipe1.vol_b.dynBal.ports_H_flow[2] <= 1e8)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/work/IDEAS-master/IDEAS/Fluid/Interfaces/ConservationEquation.mo",128,3,128,47,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta228));
        } else {
          FILE_INFO info = {"/work/IDEAS-master/IDEAS/Fluid/Interfaces/ConservationEquation.mo",128,3,128,47,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta228));
        }
      }
      tmp229 = 1;
    }
  }
  threadData->lastEquationSolved = 3176;
}

/*
equation index: 3177
type: ALGORITHM

  assert(plugFlowPipe1.vol_a.T >= 1.0 and plugFlowPipe1.vol_a.T <= 1e4, "Variable violating min/max constraint: 1.0 <= plugFlowPipe1.vol_a.T <= 1e4, has value: " + String(plugFlowPipe1.vol_a.T, "g"));
*/
void pump_v3_basicCold_t_eqFunction_3177(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3177};
  modelica_boolean tmp230;
  modelica_boolean tmp231;
  static const MMC_DEFSTRINGLIT(tmp232,87,"Variable violating min/max constraint: 1.0 <= plugFlowPipe1.vol_a.T <= 1e4, has value: ");
  modelica_string tmp233;
  modelica_metatype tmpMeta234;
  static int tmp235 = 0;
  if(!tmp235)
  {
    tmp230 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[239]] /* plugFlowPipe1.vol_a.T variable */),1.0);
    tmp231 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[239]] /* plugFlowPipe1.vol_a.T variable */),1e4);
    if(!(tmp230 && tmp231))
    {
      tmp233 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[239]] /* plugFlowPipe1.vol_a.T variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta234 = stringAppend(MMC_REFSTRINGLIT(tmp232),tmp233);
      {
        const char* assert_cond = "(plugFlowPipe1.vol_a.T >= 1.0 and plugFlowPipe1.vol_a.T <= 1e4)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/work/IDEAS-master/IDEAS/Fluid/MixingVolumes/BaseClasses/PartialMixingVolume.mo",40,3,44,31,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta234));
        } else {
          FILE_INFO info = {"/work/IDEAS-master/IDEAS/Fluid/MixingVolumes/BaseClasses/PartialMixingVolume.mo",40,3,44,31,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta234));
        }
      }
      tmp235 = 1;
    }
  }
  threadData->lastEquationSolved = 3177;
}

/*
equation index: 3178
type: ALGORITHM

  assert(plugFlowPipe1.vol_a.dynBal.medium.T >= 1.0 and plugFlowPipe1.vol_a.dynBal.medium.T <= 1e4, "Variable violating min/max constraint: 1.0 <= plugFlowPipe1.vol_a.dynBal.medium.T <= 1e4, has value: " + String(plugFlowPipe1.vol_a.dynBal.medium.T, "g"));
*/
void pump_v3_basicCold_t_eqFunction_3178(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3178};
  modelica_boolean tmp236;
  modelica_boolean tmp237;
  static const MMC_DEFSTRINGLIT(tmp238,101,"Variable violating min/max constraint: 1.0 <= plugFlowPipe1.vol_a.dynBal.medium.T <= 1e4, has value: ");
  modelica_string tmp239;
  modelica_metatype tmpMeta240;
  static int tmp241 = 0;
  if(!tmp241)
  {
    tmp236 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[246]] /* plugFlowPipe1.vol_a.dynBal.medium.T variable */),1.0);
    tmp237 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[246]] /* plugFlowPipe1.vol_a.dynBal.medium.T variable */),1e4);
    if(!(tmp236 && tmp237))
    {
      tmp239 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[246]] /* plugFlowPipe1.vol_a.dynBal.medium.T variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta240 = stringAppend(MMC_REFSTRINGLIT(tmp238),tmp239);
      {
        const char* assert_cond = "(plugFlowPipe1.vol_a.dynBal.medium.T >= 1.0 and plugFlowPipe1.vol_a.dynBal.medium.T <= 1e4)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/work/IDEAS-master/IDEAS/Media/Water.mo",22,5,25,30,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta240));
        } else {
          FILE_INFO info = {"/work/IDEAS-master/IDEAS/Media/Water.mo",22,5,25,30,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta240));
        }
      }
      tmp241 = 1;
    }
  }
  threadData->lastEquationSolved = 3178;
}

/*
equation index: 3179
type: ALGORITHM

  assert(plugFlowPipe1.vol_a.dynBal.ports_H_flow[1] >= -1e8 and plugFlowPipe1.vol_a.dynBal.ports_H_flow[1] <= 1e8, "Variable violating min/max constraint: -1e8 <= plugFlowPipe1.vol_a.dynBal.ports_H_flow[1] <= 1e8, has value: " + String(plugFlowPipe1.vol_a.dynBal.ports_H_flow[1], "g"));
*/
void pump_v3_basicCold_t_eqFunction_3179(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3179};
  modelica_boolean tmp242;
  modelica_boolean tmp243;
  static const MMC_DEFSTRINGLIT(tmp244,109,"Variable violating min/max constraint: -1e8 <= plugFlowPipe1.vol_a.dynBal.ports_H_flow[1] <= 1e8, has value: ");
  modelica_string tmp245;
  modelica_metatype tmpMeta246;
  static int tmp247 = 0;
  if(!tmp247)
  {
    tmp242 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[251]] /* plugFlowPipe1.vol_a.dynBal.ports_H_flow[1] variable */),-1e8);
    tmp243 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[251]] /* plugFlowPipe1.vol_a.dynBal.ports_H_flow[1] variable */),1e8);
    if(!(tmp242 && tmp243))
    {
      tmp245 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[251]] /* plugFlowPipe1.vol_a.dynBal.ports_H_flow[1] variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta246 = stringAppend(MMC_REFSTRINGLIT(tmp244),tmp245);
      {
        const char* assert_cond = "(plugFlowPipe1.vol_a.dynBal.ports_H_flow[1] >= -1e8 and plugFlowPipe1.vol_a.dynBal.ports_H_flow[1] <= 1e8)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/work/IDEAS-master/IDEAS/Fluid/Interfaces/ConservationEquation.mo",128,3,128,47,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta246));
        } else {
          FILE_INFO info = {"/work/IDEAS-master/IDEAS/Fluid/Interfaces/ConservationEquation.mo",128,3,128,47,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta246));
        }
      }
      tmp247 = 1;
    }
  }
  threadData->lastEquationSolved = 3179;
}

/*
equation index: 3180
type: ALGORITHM

  assert(plugFlowPipe1.vol_a.dynBal.ports_H_flow[2] >= -1e8 and plugFlowPipe1.vol_a.dynBal.ports_H_flow[2] <= 1e8, "Variable violating min/max constraint: -1e8 <= plugFlowPipe1.vol_a.dynBal.ports_H_flow[2] <= 1e8, has value: " + String(plugFlowPipe1.vol_a.dynBal.ports_H_flow[2], "g"));
*/
void pump_v3_basicCold_t_eqFunction_3180(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3180};
  modelica_boolean tmp248;
  modelica_boolean tmp249;
  static const MMC_DEFSTRINGLIT(tmp250,109,"Variable violating min/max constraint: -1e8 <= plugFlowPipe1.vol_a.dynBal.ports_H_flow[2] <= 1e8, has value: ");
  modelica_string tmp251;
  modelica_metatype tmpMeta252;
  static int tmp253 = 0;
  if(!tmp253)
  {
    tmp248 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[252]] /* plugFlowPipe1.vol_a.dynBal.ports_H_flow[2] variable */),-1e8);
    tmp249 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[252]] /* plugFlowPipe1.vol_a.dynBal.ports_H_flow[2] variable */),1e8);
    if(!(tmp248 && tmp249))
    {
      tmp251 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[252]] /* plugFlowPipe1.vol_a.dynBal.ports_H_flow[2] variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta252 = stringAppend(MMC_REFSTRINGLIT(tmp250),tmp251);
      {
        const char* assert_cond = "(plugFlowPipe1.vol_a.dynBal.ports_H_flow[2] >= -1e8 and plugFlowPipe1.vol_a.dynBal.ports_H_flow[2] <= 1e8)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/work/IDEAS-master/IDEAS/Fluid/Interfaces/ConservationEquation.mo",128,3,128,47,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta252));
        } else {
          FILE_INFO info = {"/work/IDEAS-master/IDEAS/Fluid/Interfaces/ConservationEquation.mo",128,3,128,47,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta252));
        }
      }
      tmp253 = 1;
    }
  }
  threadData->lastEquationSolved = 3180;
}

/*
equation index: 3181
type: ALGORITHM

  assert(senTemIn_heat.port_b.h_outflow >= -1e10 and senTemIn_heat.port_b.h_outflow <= 1e10, "Variable violating min/max constraint: -1e10 <= senTemIn_heat.port_b.h_outflow <= 1e10, has value: " + String(senTemIn_heat.port_b.h_outflow, "g"));
*/
void pump_v3_basicCold_t_eqFunction_3181(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3181};
  modelica_boolean tmp254;
  modelica_boolean tmp255;
  static const MMC_DEFSTRINGLIT(tmp256,99,"Variable violating min/max constraint: -1e10 <= senTemIn_heat.port_b.h_outflow <= 1e10, has value: ");
  modelica_string tmp257;
  modelica_metatype tmpMeta258;
  static int tmp259 = 0;
  if(!tmp259)
  {
    tmp254 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[434]] /* senTemIn_heat.port_b.h_outflow variable */),-1e10);
    tmp255 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[434]] /* senTemIn_heat.port_b.h_outflow variable */),1e10);
    if(!(tmp254 && tmp255))
    {
      tmp257 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[434]] /* senTemIn_heat.port_b.h_outflow variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta258 = stringAppend(MMC_REFSTRINGLIT(tmp256),tmp257);
      {
        const char* assert_cond = "(senTemIn_heat.port_b.h_outflow >= -1e10 and senTemIn_heat.port_b.h_outflow <= 1e10)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/root/.openmodelica/libraries/Modelica 4.0.0+maint.om/Fluid/Interfaces.mo",16,5,17,84,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta258));
        } else {
          FILE_INFO info = {"/root/.openmodelica/libraries/Modelica 4.0.0+maint.om/Fluid/Interfaces.mo",16,5,17,84,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta258));
        }
      }
      tmp259 = 1;
    }
  }
  threadData->lastEquationSolved = 3181;
}

/*
equation index: 3182
type: ALGORITHM

  assert(senTemIn_heat.T >= 0.0, "Variable violating min constraint: 0.0 <= senTemIn_heat.T, has value: " + String(senTemIn_heat.T, "g"));
*/
void pump_v3_basicCold_t_eqFunction_3182(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3182};
  modelica_boolean tmp260;
  static const MMC_DEFSTRINGLIT(tmp261,70,"Variable violating min constraint: 0.0 <= senTemIn_heat.T, has value: ");
  modelica_string tmp262;
  modelica_metatype tmpMeta263;
  static int tmp264 = 0;
  if(!tmp264)
  {
    tmp260 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[19]] /* senTemIn_heat.T STATE(1) */),0.0);
    if(!tmp260)
    {
      tmp262 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[19]] /* senTemIn_heat.T STATE(1) */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta263 = stringAppend(MMC_REFSTRINGLIT(tmp261),tmp262);
      {
        const char* assert_cond = "(senTemIn_heat.T >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/work/IDEAS-master/IDEAS/Fluid/Sensors/TemperatureTwoPort.mo",4,3,13,24,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta263));
        } else {
          FILE_INFO info = {"/work/IDEAS-master/IDEAS/Fluid/Sensors/TemperatureTwoPort.mo",4,3,13,24,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta263));
        }
      }
      tmp264 = 1;
    }
  }
  threadData->lastEquationSolved = 3182;
}

/*
equation index: 3183
type: ALGORITHM

  assert(senTemIn_heat.TMed >= 1.0 and senTemIn_heat.TMed <= 1e4, "Variable violating min/max constraint: 1.0 <= senTemIn_heat.TMed <= 1e4, has value: " + String(senTemIn_heat.TMed, "g"));
*/
void pump_v3_basicCold_t_eqFunction_3183(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3183};
  modelica_boolean tmp265;
  modelica_boolean tmp266;
  static const MMC_DEFSTRINGLIT(tmp267,84,"Variable violating min/max constraint: 1.0 <= senTemIn_heat.TMed <= 1e4, has value: ");
  modelica_string tmp268;
  modelica_metatype tmpMeta269;
  static int tmp270 = 0;
  if(!tmp270)
  {
    tmp265 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[430]] /* senTemIn_heat.TMed variable */),1.0);
    tmp266 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[430]] /* senTemIn_heat.TMed variable */),1e4);
    if(!(tmp265 && tmp266))
    {
      tmp268 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[430]] /* senTemIn_heat.TMed variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta269 = stringAppend(MMC_REFSTRINGLIT(tmp267),tmp268);
      {
        const char* assert_cond = "(senTemIn_heat.TMed >= 1.0 and senTemIn_heat.TMed <= 1e4)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/work/IDEAS-master/IDEAS/Fluid/Sensors/TemperatureTwoPort.mo",34,3,35,56,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta269));
        } else {
          FILE_INFO info = {"/work/IDEAS-master/IDEAS/Fluid/Sensors/TemperatureTwoPort.mo",34,3,35,56,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta269));
        }
      }
      tmp270 = 1;
    }
  }
  threadData->lastEquationSolved = 3183;
}

/*
equation index: 3184
type: ALGORITHM

  assert(senTemIn_heat.T_b_inflow >= 1.0 and senTemIn_heat.T_b_inflow <= 1e4, "Variable violating min/max constraint: 1.0 <= senTemIn_heat.T_b_inflow <= 1e4, has value: " + String(senTemIn_heat.T_b_inflow, "g"));
*/
void pump_v3_basicCold_t_eqFunction_3184(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3184};
  modelica_boolean tmp271;
  modelica_boolean tmp272;
  static const MMC_DEFSTRINGLIT(tmp273,90,"Variable violating min/max constraint: 1.0 <= senTemIn_heat.T_b_inflow <= 1e4, has value: ");
  modelica_string tmp274;
  modelica_metatype tmpMeta275;
  static int tmp276 = 0;
  if(!tmp276)
  {
    tmp271 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[431]] /* senTemIn_heat.T_b_inflow variable */),1.0);
    tmp272 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[431]] /* senTemIn_heat.T_b_inflow variable */),1e4);
    if(!(tmp271 && tmp272))
    {
      tmp274 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[431]] /* senTemIn_heat.T_b_inflow variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta275 = stringAppend(MMC_REFSTRINGLIT(tmp273),tmp274);
      {
        const char* assert_cond = "(senTemIn_heat.T_b_inflow >= 1.0 and senTemIn_heat.T_b_inflow <= 1e4)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/work/IDEAS-master/IDEAS/Fluid/Sensors/TemperatureTwoPort.mo",37,3,38,86,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta275));
        } else {
          FILE_INFO info = {"/work/IDEAS-master/IDEAS/Fluid/Sensors/TemperatureTwoPort.mo",37,3,38,86,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta275));
        }
      }
      tmp276 = 1;
    }
  }
  threadData->lastEquationSolved = 3184;
}

/*
equation index: 3185
type: ALGORITHM

  assert(plugFlowPipe_heat.port_a.p >= 0.0 and plugFlowPipe_heat.port_a.p <= 1e8, "Variable violating min/max constraint: 0.0 <= plugFlowPipe_heat.port_a.p <= 1e8, has value: " + String(plugFlowPipe_heat.port_a.p, "g"));
*/
void pump_v3_basicCold_t_eqFunction_3185(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3185};
  modelica_boolean tmp277;
  modelica_boolean tmp278;
  static const MMC_DEFSTRINGLIT(tmp279,92,"Variable violating min/max constraint: 0.0 <= plugFlowPipe_heat.port_a.p <= 1e8, has value: ");
  modelica_string tmp280;
  modelica_metatype tmpMeta281;
  static int tmp282 = 0;
  if(!tmp282)
  {
    tmp277 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[346]] /* plugFlowPipe_heat.port_a.p variable */),0.0);
    tmp278 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[346]] /* plugFlowPipe_heat.port_a.p variable */),1e8);
    if(!(tmp277 && tmp278))
    {
      tmp280 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[346]] /* plugFlowPipe_heat.port_a.p variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta281 = stringAppend(MMC_REFSTRINGLIT(tmp279),tmp280);
      {
        const char* assert_cond = "(plugFlowPipe_heat.port_a.p >= 0.0 and plugFlowPipe_heat.port_a.p <= 1e8)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/root/.openmodelica/libraries/Modelica 4.0.0+maint.om/Fluid/Interfaces.mo",15,5,15,79,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta281));
        } else {
          FILE_INFO info = {"/root/.openmodelica/libraries/Modelica 4.0.0+maint.om/Fluid/Interfaces.mo",15,5,15,79,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta281));
        }
      }
      tmp282 = 1;
    }
  }
  threadData->lastEquationSolved = 3185;
}

/*
equation index: 3186
type: ALGORITHM

  assert(plugFlowPipe_heat.port_a.h_outflow >= -1e10 and plugFlowPipe_heat.port_a.h_outflow <= 1e10, "Variable violating min/max constraint: -1e10 <= plugFlowPipe_heat.port_a.h_outflow <= 1e10, has value: " + String(plugFlowPipe_heat.port_a.h_outflow, "g"));
*/
void pump_v3_basicCold_t_eqFunction_3186(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3186};
  modelica_boolean tmp283;
  modelica_boolean tmp284;
  static const MMC_DEFSTRINGLIT(tmp285,103,"Variable violating min/max constraint: -1e10 <= plugFlowPipe_heat.port_a.h_outflow <= 1e10, has value: ");
  modelica_string tmp286;
  modelica_metatype tmpMeta287;
  static int tmp288 = 0;
  if(!tmp288)
  {
    tmp283 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[345]] /* plugFlowPipe_heat.port_a.h_outflow variable */),-1e10);
    tmp284 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[345]] /* plugFlowPipe_heat.port_a.h_outflow variable */),1e10);
    if(!(tmp283 && tmp284))
    {
      tmp286 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[345]] /* plugFlowPipe_heat.port_a.h_outflow variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta287 = stringAppend(MMC_REFSTRINGLIT(tmp285),tmp286);
      {
        const char* assert_cond = "(plugFlowPipe_heat.port_a.h_outflow >= -1e10 and plugFlowPipe_heat.port_a.h_outflow <= 1e10)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/root/.openmodelica/libraries/Modelica 4.0.0+maint.om/Fluid/Interfaces.mo",16,5,17,84,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta287));
        } else {
          FILE_INFO info = {"/root/.openmodelica/libraries/Modelica 4.0.0+maint.om/Fluid/Interfaces.mo",16,5,17,84,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta287));
        }
      }
      tmp288 = 1;
    }
  }
  threadData->lastEquationSolved = 3186;
}

/*
equation index: 3187
type: ALGORITHM

  assert(plugFlowPipe_heat.port_b.h_outflow >= -1e10 and plugFlowPipe_heat.port_b.h_outflow <= 1e10, "Variable violating min/max constraint: -1e10 <= plugFlowPipe_heat.port_b.h_outflow <= 1e10, has value: " + String(plugFlowPipe_heat.port_b.h_outflow, "g"));
*/
void pump_v3_basicCold_t_eqFunction_3187(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3187};
  modelica_boolean tmp289;
  modelica_boolean tmp290;
  static const MMC_DEFSTRINGLIT(tmp291,103,"Variable violating min/max constraint: -1e10 <= plugFlowPipe_heat.port_b.h_outflow <= 1e10, has value: ");
  modelica_string tmp292;
  modelica_metatype tmpMeta293;
  static int tmp294 = 0;
  if(!tmp294)
  {
    tmp289 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[347]] /* plugFlowPipe_heat.port_b.h_outflow variable */),-1e10);
    tmp290 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[347]] /* plugFlowPipe_heat.port_b.h_outflow variable */),1e10);
    if(!(tmp289 && tmp290))
    {
      tmp292 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[347]] /* plugFlowPipe_heat.port_b.h_outflow variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta293 = stringAppend(MMC_REFSTRINGLIT(tmp291),tmp292);
      {
        const char* assert_cond = "(plugFlowPipe_heat.port_b.h_outflow >= -1e10 and plugFlowPipe_heat.port_b.h_outflow <= 1e10)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/root/.openmodelica/libraries/Modelica 4.0.0+maint.om/Fluid/Interfaces.mo",16,5,17,84,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta293));
        } else {
          FILE_INFO info = {"/root/.openmodelica/libraries/Modelica 4.0.0+maint.om/Fluid/Interfaces.mo",16,5,17,84,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta293));
        }
      }
      tmp294 = 1;
    }
  }
  threadData->lastEquationSolved = 3187;
}

/*
equation index: 3188
type: ALGORITHM

  assert(plugFlowPipe_heat.heatPort.T >= 0.0, "Variable violating min constraint: 0.0 <= plugFlowPipe_heat.heatPort.T, has value: " + String(plugFlowPipe_heat.heatPort.T, "g"));
*/
void pump_v3_basicCold_t_eqFunction_3188(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3188};
  modelica_boolean tmp295;
  static const MMC_DEFSTRINGLIT(tmp296,83,"Variable violating min constraint: 0.0 <= plugFlowPipe_heat.heatPort.T, has value: ");
  modelica_string tmp297;
  modelica_metatype tmpMeta298;
  static int tmp299 = 0;
  if(!tmp299)
  {
    tmp295 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[344]] /* plugFlowPipe_heat.heatPort.T variable */),0.0);
    if(!tmp295)
    {
      tmp297 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[344]] /* plugFlowPipe_heat.heatPort.T variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta298 = stringAppend(MMC_REFSTRINGLIT(tmp296),tmp297);
      {
        const char* assert_cond = "(plugFlowPipe_heat.heatPort.T >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/root/.openmodelica/libraries/Modelica 4.0.0+maint.om/Thermal/HeatTransfer/Interfaces/HeatPort.mo",3,3,3,38,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta298));
        } else {
          FILE_INFO info = {"/root/.openmodelica/libraries/Modelica 4.0.0+maint.om/Thermal/HeatTransfer/Interfaces/HeatPort.mo",3,3,3,38,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta298));
        }
      }
      tmp299 = 1;
    }
  }
  threadData->lastEquationSolved = 3188;
}

/*
equation index: 3189
type: ALGORITHM

  assert(plugFlowPipe_heat.del.port_a.h_outflow >= -1e10 and plugFlowPipe_heat.del.port_a.h_outflow <= 1e10, "Variable violating min/max constraint: -1e10 <= plugFlowPipe_heat.del.port_a.h_outflow <= 1e10, has value: " + String(plugFlowPipe_heat.del.port_a.h_outflow, "g"));
*/
void pump_v3_basicCold_t_eqFunction_3189(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3189};
  modelica_boolean tmp300;
  modelica_boolean tmp301;
  static const MMC_DEFSTRINGLIT(tmp302,107,"Variable violating min/max constraint: -1e10 <= plugFlowPipe_heat.del.port_a.h_outflow <= 1e10, has value: ");
  modelica_string tmp303;
  modelica_metatype tmpMeta304;
  static int tmp305 = 0;
  if(!tmp305)
  {
    tmp300 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[331]] /* plugFlowPipe_heat.del.port_a.h_outflow variable */),-1e10);
    tmp301 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[331]] /* plugFlowPipe_heat.del.port_a.h_outflow variable */),1e10);
    if(!(tmp300 && tmp301))
    {
      tmp303 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[331]] /* plugFlowPipe_heat.del.port_a.h_outflow variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta304 = stringAppend(MMC_REFSTRINGLIT(tmp302),tmp303);
      {
        const char* assert_cond = "(plugFlowPipe_heat.del.port_a.h_outflow >= -1e10 and plugFlowPipe_heat.del.port_a.h_outflow <= 1e10)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/root/.openmodelica/libraries/Modelica 4.0.0+maint.om/Fluid/Interfaces.mo",16,5,17,84,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta304));
        } else {
          FILE_INFO info = {"/root/.openmodelica/libraries/Modelica 4.0.0+maint.om/Fluid/Interfaces.mo",16,5,17,84,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta304));
        }
      }
      tmp305 = 1;
    }
  }
  threadData->lastEquationSolved = 3189;
}

/*
equation index: 3190
type: ALGORITHM

  assert(plugFlowPipe_heat.del.port_b.h_outflow >= -1e10 and plugFlowPipe_heat.del.port_b.h_outflow <= 1e10, "Variable violating min/max constraint: -1e10 <= plugFlowPipe_heat.del.port_b.h_outflow <= 1e10, has value: " + String(plugFlowPipe_heat.del.port_b.h_outflow, "g"));
*/
void pump_v3_basicCold_t_eqFunction_3190(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3190};
  modelica_boolean tmp306;
  modelica_boolean tmp307;
  static const MMC_DEFSTRINGLIT(tmp308,107,"Variable violating min/max constraint: -1e10 <= plugFlowPipe_heat.del.port_b.h_outflow <= 1e10, has value: ");
  modelica_string tmp309;
  modelica_metatype tmpMeta310;
  static int tmp311 = 0;
  if(!tmp311)
  {
    tmp306 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[332]] /* plugFlowPipe_heat.del.port_b.h_outflow variable */),-1e10);
    tmp307 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[332]] /* plugFlowPipe_heat.del.port_b.h_outflow variable */),1e10);
    if(!(tmp306 && tmp307))
    {
      tmp309 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[332]] /* plugFlowPipe_heat.del.port_b.h_outflow variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta310 = stringAppend(MMC_REFSTRINGLIT(tmp308),tmp309);
      {
        const char* assert_cond = "(plugFlowPipe_heat.del.port_b.h_outflow >= -1e10 and plugFlowPipe_heat.del.port_b.h_outflow <= 1e10)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/root/.openmodelica/libraries/Modelica 4.0.0+maint.om/Fluid/Interfaces.mo",16,5,17,84,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta310));
        } else {
          FILE_INFO info = {"/root/.openmodelica/libraries/Modelica 4.0.0+maint.om/Fluid/Interfaces.mo",16,5,17,84,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta310));
        }
      }
      tmp311 = 1;
    }
  }
  threadData->lastEquationSolved = 3190;
}

/*
equation index: 3191
type: ALGORITHM

  assert(plugFlowPipe_heat.heaLos_a.port_b.h_outflow >= -1e10 and plugFlowPipe_heat.heaLos_a.port_b.h_outflow <= 1e10, "Variable violating min/max constraint: -1e10 <= plugFlowPipe_heat.heaLos_a.port_b.h_outflow <= 1e10, has value: " + String(plugFlowPipe_heat.heaLos_a.port_b.h_outflow, "g"));
*/
void pump_v3_basicCold_t_eqFunction_3191(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3191};
  modelica_boolean tmp312;
  modelica_boolean tmp313;
  static const MMC_DEFSTRINGLIT(tmp314,112,"Variable violating min/max constraint: -1e10 <= plugFlowPipe_heat.heaLos_a.port_b.h_outflow <= 1e10, has value: ");
  modelica_string tmp315;
  modelica_metatype tmpMeta316;
  static int tmp317 = 0;
  if(!tmp317)
  {
    tmp312 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[338]] /* plugFlowPipe_heat.heaLos_a.port_b.h_outflow variable */),-1e10);
    tmp313 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[338]] /* plugFlowPipe_heat.heaLos_a.port_b.h_outflow variable */),1e10);
    if(!(tmp312 && tmp313))
    {
      tmp315 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[338]] /* plugFlowPipe_heat.heaLos_a.port_b.h_outflow variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta316 = stringAppend(MMC_REFSTRINGLIT(tmp314),tmp315);
      {
        const char* assert_cond = "(plugFlowPipe_heat.heaLos_a.port_b.h_outflow >= -1e10 and plugFlowPipe_heat.heaLos_a.port_b.h_outflow <= 1e10)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/root/.openmodelica/libraries/Modelica 4.0.0+maint.om/Fluid/Interfaces.mo",16,5,17,84,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta316));
        } else {
          FILE_INFO info = {"/root/.openmodelica/libraries/Modelica 4.0.0+maint.om/Fluid/Interfaces.mo",16,5,17,84,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta316));
        }
      }
      tmp317 = 1;
    }
  }
  threadData->lastEquationSolved = 3191;
}

/*
equation index: 3192
type: ALGORITHM

  assert(plugFlowPipe_heat.heaLos_a.T_a_inflow >= 0.0, "Variable violating min constraint: 0.0 <= plugFlowPipe_heat.heaLos_a.T_a_inflow, has value: " + String(plugFlowPipe_heat.heaLos_a.T_a_inflow, "g"));
*/
void pump_v3_basicCold_t_eqFunction_3192(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3192};
  modelica_boolean tmp318;
  static const MMC_DEFSTRINGLIT(tmp319,92,"Variable violating min constraint: 0.0 <= plugFlowPipe_heat.heaLos_a.T_a_inflow, has value: ");
  modelica_string tmp320;
  modelica_metatype tmpMeta321;
  static int tmp322 = 0;
  if(!tmp322)
  {
    tmp318 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[334]] /* plugFlowPipe_heat.heaLos_a.T_a_inflow variable */),0.0);
    if(!tmp318)
    {
      tmp320 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[334]] /* plugFlowPipe_heat.heaLos_a.T_a_inflow variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta321 = stringAppend(MMC_REFSTRINGLIT(tmp319),tmp320);
      {
        const char* assert_cond = "(plugFlowPipe_heat.heaLos_a.T_a_inflow >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/work/IDEAS-master/IDEAS/Fluid/FixedResistances/BaseClasses/PlugFlowHeatLoss.mo",30,3,31,48,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta321));
        } else {
          FILE_INFO info = {"/work/IDEAS-master/IDEAS/Fluid/FixedResistances/BaseClasses/PlugFlowHeatLoss.mo",30,3,31,48,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta321));
        }
      }
      tmp322 = 1;
    }
  }
  threadData->lastEquationSolved = 3192;
}

/*
equation index: 3193
type: ALGORITHM

  assert(plugFlowPipe_heat.heaLos_a.T_b_outflow >= 0.0, "Variable violating min constraint: 0.0 <= plugFlowPipe_heat.heaLos_a.T_b_outflow, has value: " + String(plugFlowPipe_heat.heaLos_a.T_b_outflow, "g"));
*/
void pump_v3_basicCold_t_eqFunction_3193(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3193};
  modelica_boolean tmp323;
  static const MMC_DEFSTRINGLIT(tmp324,93,"Variable violating min constraint: 0.0 <= plugFlowPipe_heat.heaLos_a.T_b_outflow, has value: ");
  modelica_string tmp325;
  modelica_metatype tmpMeta326;
  static int tmp327 = 0;
  if(!tmp327)
  {
    tmp323 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[335]] /* plugFlowPipe_heat.heaLos_a.T_b_outflow variable */),0.0);
    if(!tmp323)
    {
      tmp325 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[335]] /* plugFlowPipe_heat.heaLos_a.T_b_outflow variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta326 = stringAppend(MMC_REFSTRINGLIT(tmp324),tmp325);
      {
        const char* assert_cond = "(plugFlowPipe_heat.heaLos_a.T_b_outflow >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/work/IDEAS-master/IDEAS/Fluid/FixedResistances/BaseClasses/PlugFlowHeatLoss.mo",32,3,33,49,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta326));
        } else {
          FILE_INFO info = {"/work/IDEAS-master/IDEAS/Fluid/FixedResistances/BaseClasses/PlugFlowHeatLoss.mo",32,3,33,49,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta326));
        }
      }
      tmp327 = 1;
    }
  }
  threadData->lastEquationSolved = 3193;
}

/*
equation index: 3194
type: ALGORITHM

  assert(plugFlowPipe_heat.heaLos_b.port_b.h_outflow >= -1e10 and plugFlowPipe_heat.heaLos_b.port_b.h_outflow <= 1e10, "Variable violating min/max constraint: -1e10 <= plugFlowPipe_heat.heaLos_b.port_b.h_outflow <= 1e10, has value: " + String(plugFlowPipe_heat.heaLos_b.port_b.h_outflow, "g"));
*/
void pump_v3_basicCold_t_eqFunction_3194(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3194};
  modelica_boolean tmp328;
  modelica_boolean tmp329;
  static const MMC_DEFSTRINGLIT(tmp330,112,"Variable violating min/max constraint: -1e10 <= plugFlowPipe_heat.heaLos_b.port_b.h_outflow <= 1e10, has value: ");
  modelica_string tmp331;
  modelica_metatype tmpMeta332;
  static int tmp333 = 0;
  if(!tmp333)
  {
    tmp328 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[343]] /* plugFlowPipe_heat.heaLos_b.port_b.h_outflow variable */),-1e10);
    tmp329 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[343]] /* plugFlowPipe_heat.heaLos_b.port_b.h_outflow variable */),1e10);
    if(!(tmp328 && tmp329))
    {
      tmp331 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[343]] /* plugFlowPipe_heat.heaLos_b.port_b.h_outflow variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta332 = stringAppend(MMC_REFSTRINGLIT(tmp330),tmp331);
      {
        const char* assert_cond = "(plugFlowPipe_heat.heaLos_b.port_b.h_outflow >= -1e10 and plugFlowPipe_heat.heaLos_b.port_b.h_outflow <= 1e10)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/root/.openmodelica/libraries/Modelica 4.0.0+maint.om/Fluid/Interfaces.mo",16,5,17,84,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta332));
        } else {
          FILE_INFO info = {"/root/.openmodelica/libraries/Modelica 4.0.0+maint.om/Fluid/Interfaces.mo",16,5,17,84,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta332));
        }
      }
      tmp333 = 1;
    }
  }
  threadData->lastEquationSolved = 3194;
}

/*
equation index: 3195
type: ALGORITHM

  assert(plugFlowPipe_heat.heaLos_b.T_a_inflow >= 0.0, "Variable violating min constraint: 0.0 <= plugFlowPipe_heat.heaLos_b.T_a_inflow, has value: " + String(plugFlowPipe_heat.heaLos_b.T_a_inflow, "g"));
*/
void pump_v3_basicCold_t_eqFunction_3195(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3195};
  modelica_boolean tmp334;
  static const MMC_DEFSTRINGLIT(tmp335,92,"Variable violating min constraint: 0.0 <= plugFlowPipe_heat.heaLos_b.T_a_inflow, has value: ");
  modelica_string tmp336;
  modelica_metatype tmpMeta337;
  static int tmp338 = 0;
  if(!tmp338)
  {
    tmp334 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[339]] /* plugFlowPipe_heat.heaLos_b.T_a_inflow variable */),0.0);
    if(!tmp334)
    {
      tmp336 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[339]] /* plugFlowPipe_heat.heaLos_b.T_a_inflow variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta337 = stringAppend(MMC_REFSTRINGLIT(tmp335),tmp336);
      {
        const char* assert_cond = "(plugFlowPipe_heat.heaLos_b.T_a_inflow >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/work/IDEAS-master/IDEAS/Fluid/FixedResistances/BaseClasses/PlugFlowHeatLoss.mo",30,3,31,48,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta337));
        } else {
          FILE_INFO info = {"/work/IDEAS-master/IDEAS/Fluid/FixedResistances/BaseClasses/PlugFlowHeatLoss.mo",30,3,31,48,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta337));
        }
      }
      tmp338 = 1;
    }
  }
  threadData->lastEquationSolved = 3195;
}

/*
equation index: 3196
type: ALGORITHM

  assert(plugFlowPipe_heat.heaLos_b.T_b_outflow >= 0.0, "Variable violating min constraint: 0.0 <= plugFlowPipe_heat.heaLos_b.T_b_outflow, has value: " + String(plugFlowPipe_heat.heaLos_b.T_b_outflow, "g"));
*/
void pump_v3_basicCold_t_eqFunction_3196(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3196};
  modelica_boolean tmp339;
  static const MMC_DEFSTRINGLIT(tmp340,93,"Variable violating min constraint: 0.0 <= plugFlowPipe_heat.heaLos_b.T_b_outflow, has value: ");
  modelica_string tmp341;
  modelica_metatype tmpMeta342;
  static int tmp343 = 0;
  if(!tmp343)
  {
    tmp339 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[340]] /* plugFlowPipe_heat.heaLos_b.T_b_outflow variable */),0.0);
    if(!tmp339)
    {
      tmp341 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[340]] /* plugFlowPipe_heat.heaLos_b.T_b_outflow variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta342 = stringAppend(MMC_REFSTRINGLIT(tmp340),tmp341);
      {
        const char* assert_cond = "(plugFlowPipe_heat.heaLos_b.T_b_outflow >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/work/IDEAS-master/IDEAS/Fluid/FixedResistances/BaseClasses/PlugFlowHeatLoss.mo",32,3,33,49,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta342));
        } else {
          FILE_INFO info = {"/work/IDEAS-master/IDEAS/Fluid/FixedResistances/BaseClasses/PlugFlowHeatLoss.mo",32,3,33,49,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta342));
        }
      }
      tmp343 = 1;
    }
  }
  threadData->lastEquationSolved = 3196;
}

/*
equation index: 3197
type: ALGORITHM

  assert(plugFlowPipe_heat.vol_b.T >= 1.0 and plugFlowPipe_heat.vol_b.T <= 1e4, "Variable violating min/max constraint: 1.0 <= plugFlowPipe_heat.vol_b.T <= 1e4, has value: " + String(plugFlowPipe_heat.vol_b.T, "g"));
*/
void pump_v3_basicCold_t_eqFunction_3197(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3197};
  modelica_boolean tmp344;
  modelica_boolean tmp345;
  static const MMC_DEFSTRINGLIT(tmp346,91,"Variable violating min/max constraint: 1.0 <= plugFlowPipe_heat.vol_b.T <= 1e4, has value: ");
  modelica_string tmp347;
  modelica_metatype tmpMeta348;
  static int tmp349 = 0;
  if(!tmp349)
  {
    tmp344 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[372]] /* plugFlowPipe_heat.vol_b.T variable */),1.0);
    tmp345 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[372]] /* plugFlowPipe_heat.vol_b.T variable */),1e4);
    if(!(tmp344 && tmp345))
    {
      tmp347 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[372]] /* plugFlowPipe_heat.vol_b.T variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta348 = stringAppend(MMC_REFSTRINGLIT(tmp346),tmp347);
      {
        const char* assert_cond = "(plugFlowPipe_heat.vol_b.T >= 1.0 and plugFlowPipe_heat.vol_b.T <= 1e4)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/work/IDEAS-master/IDEAS/Fluid/MixingVolumes/BaseClasses/PartialMixingVolume.mo",40,3,44,31,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta348));
        } else {
          FILE_INFO info = {"/work/IDEAS-master/IDEAS/Fluid/MixingVolumes/BaseClasses/PartialMixingVolume.mo",40,3,44,31,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta348));
        }
      }
      tmp349 = 1;
    }
  }
  threadData->lastEquationSolved = 3197;
}

/*
equation index: 3198
type: ALGORITHM

  assert(plugFlowPipe_heat.vol_b.dynBal.medium.T >= 1.0 and plugFlowPipe_heat.vol_b.dynBal.medium.T <= 1e4, "Variable violating min/max constraint: 1.0 <= plugFlowPipe_heat.vol_b.dynBal.medium.T <= 1e4, has value: " + String(plugFlowPipe_heat.vol_b.dynBal.medium.T, "g"));
*/
void pump_v3_basicCold_t_eqFunction_3198(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3198};
  modelica_boolean tmp350;
  modelica_boolean tmp351;
  static const MMC_DEFSTRINGLIT(tmp352,105,"Variable violating min/max constraint: 1.0 <= plugFlowPipe_heat.vol_b.dynBal.medium.T <= 1e4, has value: ");
  modelica_string tmp353;
  modelica_metatype tmpMeta354;
  static int tmp355 = 0;
  if(!tmp355)
  {
    tmp350 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[379]] /* plugFlowPipe_heat.vol_b.dynBal.medium.T variable */),1.0);
    tmp351 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[379]] /* plugFlowPipe_heat.vol_b.dynBal.medium.T variable */),1e4);
    if(!(tmp350 && tmp351))
    {
      tmp353 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[379]] /* plugFlowPipe_heat.vol_b.dynBal.medium.T variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta354 = stringAppend(MMC_REFSTRINGLIT(tmp352),tmp353);
      {
        const char* assert_cond = "(plugFlowPipe_heat.vol_b.dynBal.medium.T >= 1.0 and plugFlowPipe_heat.vol_b.dynBal.medium.T <= 1e4)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/work/IDEAS-master/IDEAS/Media/Water.mo",22,5,25,30,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta354));
        } else {
          FILE_INFO info = {"/work/IDEAS-master/IDEAS/Media/Water.mo",22,5,25,30,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta354));
        }
      }
      tmp355 = 1;
    }
  }
  threadData->lastEquationSolved = 3198;
}

/*
equation index: 3199
type: ALGORITHM

  assert(plugFlowPipe_heat.vol_b.dynBal.ports_H_flow[1] >= -1e8 and plugFlowPipe_heat.vol_b.dynBal.ports_H_flow[1] <= 1e8, "Variable violating min/max constraint: -1e8 <= plugFlowPipe_heat.vol_b.dynBal.ports_H_flow[1] <= 1e8, has value: " + String(plugFlowPipe_heat.vol_b.dynBal.ports_H_flow[1], "g"));
*/
void pump_v3_basicCold_t_eqFunction_3199(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3199};
  modelica_boolean tmp356;
  modelica_boolean tmp357;
  static const MMC_DEFSTRINGLIT(tmp358,113,"Variable violating min/max constraint: -1e8 <= plugFlowPipe_heat.vol_b.dynBal.ports_H_flow[1] <= 1e8, has value: ");
  modelica_string tmp359;
  modelica_metatype tmpMeta360;
  static int tmp361 = 0;
  if(!tmp361)
  {
    tmp356 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[383]] /* plugFlowPipe_heat.vol_b.dynBal.ports_H_flow[1] variable */),-1e8);
    tmp357 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[383]] /* plugFlowPipe_heat.vol_b.dynBal.ports_H_flow[1] variable */),1e8);
    if(!(tmp356 && tmp357))
    {
      tmp359 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[383]] /* plugFlowPipe_heat.vol_b.dynBal.ports_H_flow[1] variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta360 = stringAppend(MMC_REFSTRINGLIT(tmp358),tmp359);
      {
        const char* assert_cond = "(plugFlowPipe_heat.vol_b.dynBal.ports_H_flow[1] >= -1e8 and plugFlowPipe_heat.vol_b.dynBal.ports_H_flow[1] <= 1e8)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/work/IDEAS-master/IDEAS/Fluid/Interfaces/ConservationEquation.mo",128,3,128,47,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta360));
        } else {
          FILE_INFO info = {"/work/IDEAS-master/IDEAS/Fluid/Interfaces/ConservationEquation.mo",128,3,128,47,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta360));
        }
      }
      tmp361 = 1;
    }
  }
  threadData->lastEquationSolved = 3199;
}

/*
equation index: 3200
type: ALGORITHM

  assert(plugFlowPipe_heat.vol_b.dynBal.ports_H_flow[2] >= -1e8 and plugFlowPipe_heat.vol_b.dynBal.ports_H_flow[2] <= 1e8, "Variable violating min/max constraint: -1e8 <= plugFlowPipe_heat.vol_b.dynBal.ports_H_flow[2] <= 1e8, has value: " + String(plugFlowPipe_heat.vol_b.dynBal.ports_H_flow[2], "g"));
*/
void pump_v3_basicCold_t_eqFunction_3200(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3200};
  modelica_boolean tmp362;
  modelica_boolean tmp363;
  static const MMC_DEFSTRINGLIT(tmp364,113,"Variable violating min/max constraint: -1e8 <= plugFlowPipe_heat.vol_b.dynBal.ports_H_flow[2] <= 1e8, has value: ");
  modelica_string tmp365;
  modelica_metatype tmpMeta366;
  static int tmp367 = 0;
  if(!tmp367)
  {
    tmp362 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[384]] /* plugFlowPipe_heat.vol_b.dynBal.ports_H_flow[2] variable */),-1e8);
    tmp363 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[384]] /* plugFlowPipe_heat.vol_b.dynBal.ports_H_flow[2] variable */),1e8);
    if(!(tmp362 && tmp363))
    {
      tmp365 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[384]] /* plugFlowPipe_heat.vol_b.dynBal.ports_H_flow[2] variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta366 = stringAppend(MMC_REFSTRINGLIT(tmp364),tmp365);
      {
        const char* assert_cond = "(plugFlowPipe_heat.vol_b.dynBal.ports_H_flow[2] >= -1e8 and plugFlowPipe_heat.vol_b.dynBal.ports_H_flow[2] <= 1e8)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/work/IDEAS-master/IDEAS/Fluid/Interfaces/ConservationEquation.mo",128,3,128,47,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta366));
        } else {
          FILE_INFO info = {"/work/IDEAS-master/IDEAS/Fluid/Interfaces/ConservationEquation.mo",128,3,128,47,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta366));
        }
      }
      tmp367 = 1;
    }
  }
  threadData->lastEquationSolved = 3200;
}

/*
equation index: 3201
type: ALGORITHM

  assert(plugFlowPipe_heat.vol_a.T >= 1.0 and plugFlowPipe_heat.vol_a.T <= 1e4, "Variable violating min/max constraint: 1.0 <= plugFlowPipe_heat.vol_a.T <= 1e4, has value: " + String(plugFlowPipe_heat.vol_a.T, "g"));
*/
void pump_v3_basicCold_t_eqFunction_3201(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3201};
  modelica_boolean tmp368;
  modelica_boolean tmp369;
  static const MMC_DEFSTRINGLIT(tmp370,91,"Variable violating min/max constraint: 1.0 <= plugFlowPipe_heat.vol_a.T <= 1e4, has value: ");
  modelica_string tmp371;
  modelica_metatype tmpMeta372;
  static int tmp373 = 0;
  if(!tmp373)
  {
    tmp368 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[356]] /* plugFlowPipe_heat.vol_a.T variable */),1.0);
    tmp369 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[356]] /* plugFlowPipe_heat.vol_a.T variable */),1e4);
    if(!(tmp368 && tmp369))
    {
      tmp371 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[356]] /* plugFlowPipe_heat.vol_a.T variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta372 = stringAppend(MMC_REFSTRINGLIT(tmp370),tmp371);
      {
        const char* assert_cond = "(plugFlowPipe_heat.vol_a.T >= 1.0 and plugFlowPipe_heat.vol_a.T <= 1e4)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/work/IDEAS-master/IDEAS/Fluid/MixingVolumes/BaseClasses/PartialMixingVolume.mo",40,3,44,31,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta372));
        } else {
          FILE_INFO info = {"/work/IDEAS-master/IDEAS/Fluid/MixingVolumes/BaseClasses/PartialMixingVolume.mo",40,3,44,31,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta372));
        }
      }
      tmp373 = 1;
    }
  }
  threadData->lastEquationSolved = 3201;
}

/*
equation index: 3202
type: ALGORITHM

  assert(plugFlowPipe_heat.vol_a.dynBal.medium.T >= 1.0 and plugFlowPipe_heat.vol_a.dynBal.medium.T <= 1e4, "Variable violating min/max constraint: 1.0 <= plugFlowPipe_heat.vol_a.dynBal.medium.T <= 1e4, has value: " + String(plugFlowPipe_heat.vol_a.dynBal.medium.T, "g"));
*/
void pump_v3_basicCold_t_eqFunction_3202(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3202};
  modelica_boolean tmp374;
  modelica_boolean tmp375;
  static const MMC_DEFSTRINGLIT(tmp376,105,"Variable violating min/max constraint: 1.0 <= plugFlowPipe_heat.vol_a.dynBal.medium.T <= 1e4, has value: ");
  modelica_string tmp377;
  modelica_metatype tmpMeta378;
  static int tmp379 = 0;
  if(!tmp379)
  {
    tmp374 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[363]] /* plugFlowPipe_heat.vol_a.dynBal.medium.T variable */),1.0);
    tmp375 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[363]] /* plugFlowPipe_heat.vol_a.dynBal.medium.T variable */),1e4);
    if(!(tmp374 && tmp375))
    {
      tmp377 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[363]] /* plugFlowPipe_heat.vol_a.dynBal.medium.T variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta378 = stringAppend(MMC_REFSTRINGLIT(tmp376),tmp377);
      {
        const char* assert_cond = "(plugFlowPipe_heat.vol_a.dynBal.medium.T >= 1.0 and plugFlowPipe_heat.vol_a.dynBal.medium.T <= 1e4)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/work/IDEAS-master/IDEAS/Media/Water.mo",22,5,25,30,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta378));
        } else {
          FILE_INFO info = {"/work/IDEAS-master/IDEAS/Media/Water.mo",22,5,25,30,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta378));
        }
      }
      tmp379 = 1;
    }
  }
  threadData->lastEquationSolved = 3202;
}

/*
equation index: 3203
type: ALGORITHM

  assert(plugFlowPipe_heat.vol_a.dynBal.ports_H_flow[1] >= -1e8 and plugFlowPipe_heat.vol_a.dynBal.ports_H_flow[1] <= 1e8, "Variable violating min/max constraint: -1e8 <= plugFlowPipe_heat.vol_a.dynBal.ports_H_flow[1] <= 1e8, has value: " + String(plugFlowPipe_heat.vol_a.dynBal.ports_H_flow[1], "g"));
*/
void pump_v3_basicCold_t_eqFunction_3203(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3203};
  modelica_boolean tmp380;
  modelica_boolean tmp381;
  static const MMC_DEFSTRINGLIT(tmp382,113,"Variable violating min/max constraint: -1e8 <= plugFlowPipe_heat.vol_a.dynBal.ports_H_flow[1] <= 1e8, has value: ");
  modelica_string tmp383;
  modelica_metatype tmpMeta384;
  static int tmp385 = 0;
  if(!tmp385)
  {
    tmp380 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[368]] /* plugFlowPipe_heat.vol_a.dynBal.ports_H_flow[1] variable */),-1e8);
    tmp381 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[368]] /* plugFlowPipe_heat.vol_a.dynBal.ports_H_flow[1] variable */),1e8);
    if(!(tmp380 && tmp381))
    {
      tmp383 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[368]] /* plugFlowPipe_heat.vol_a.dynBal.ports_H_flow[1] variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta384 = stringAppend(MMC_REFSTRINGLIT(tmp382),tmp383);
      {
        const char* assert_cond = "(plugFlowPipe_heat.vol_a.dynBal.ports_H_flow[1] >= -1e8 and plugFlowPipe_heat.vol_a.dynBal.ports_H_flow[1] <= 1e8)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/work/IDEAS-master/IDEAS/Fluid/Interfaces/ConservationEquation.mo",128,3,128,47,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta384));
        } else {
          FILE_INFO info = {"/work/IDEAS-master/IDEAS/Fluid/Interfaces/ConservationEquation.mo",128,3,128,47,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta384));
        }
      }
      tmp385 = 1;
    }
  }
  threadData->lastEquationSolved = 3203;
}

/*
equation index: 3204
type: ALGORITHM

  assert(plugFlowPipe_heat.vol_a.dynBal.ports_H_flow[2] >= -1e8 and plugFlowPipe_heat.vol_a.dynBal.ports_H_flow[2] <= 1e8, "Variable violating min/max constraint: -1e8 <= plugFlowPipe_heat.vol_a.dynBal.ports_H_flow[2] <= 1e8, has value: " + String(plugFlowPipe_heat.vol_a.dynBal.ports_H_flow[2], "g"));
*/
void pump_v3_basicCold_t_eqFunction_3204(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3204};
  modelica_boolean tmp386;
  modelica_boolean tmp387;
  static const MMC_DEFSTRINGLIT(tmp388,113,"Variable violating min/max constraint: -1e8 <= plugFlowPipe_heat.vol_a.dynBal.ports_H_flow[2] <= 1e8, has value: ");
  modelica_string tmp389;
  modelica_metatype tmpMeta390;
  static int tmp391 = 0;
  if(!tmp391)
  {
    tmp386 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[369]] /* plugFlowPipe_heat.vol_a.dynBal.ports_H_flow[2] variable */),-1e8);
    tmp387 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[369]] /* plugFlowPipe_heat.vol_a.dynBal.ports_H_flow[2] variable */),1e8);
    if(!(tmp386 && tmp387))
    {
      tmp389 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[369]] /* plugFlowPipe_heat.vol_a.dynBal.ports_H_flow[2] variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta390 = stringAppend(MMC_REFSTRINGLIT(tmp388),tmp389);
      {
        const char* assert_cond = "(plugFlowPipe_heat.vol_a.dynBal.ports_H_flow[2] >= -1e8 and plugFlowPipe_heat.vol_a.dynBal.ports_H_flow[2] <= 1e8)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/work/IDEAS-master/IDEAS/Fluid/Interfaces/ConservationEquation.mo",128,3,128,47,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta390));
        } else {
          FILE_INFO info = {"/work/IDEAS-master/IDEAS/Fluid/Interfaces/ConservationEquation.mo",128,3,128,47,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta390));
        }
      }
      tmp391 = 1;
    }
  }
  threadData->lastEquationSolved = 3204;
}

/*
equation index: 3205
type: ALGORITHM

  assert(senTemOut_heat.T >= 0.0, "Variable violating min constraint: 0.0 <= senTemOut_heat.T, has value: " + String(senTemOut_heat.T, "g"));
*/
void pump_v3_basicCold_t_eqFunction_3205(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3205};
  modelica_boolean tmp392;
  static const MMC_DEFSTRINGLIT(tmp393,71,"Variable violating min constraint: 0.0 <= senTemOut_heat.T, has value: ");
  modelica_string tmp394;
  modelica_metatype tmpMeta395;
  static int tmp396 = 0;
  if(!tmp396)
  {
    tmp392 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[20]] /* senTemOut_heat.T STATE(1) */),0.0);
    if(!tmp392)
    {
      tmp394 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[20]] /* senTemOut_heat.T STATE(1) */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta395 = stringAppend(MMC_REFSTRINGLIT(tmp393),tmp394);
      {
        const char* assert_cond = "(senTemOut_heat.T >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/work/IDEAS-master/IDEAS/Fluid/Sensors/TemperatureTwoPort.mo",4,3,13,24,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta395));
        } else {
          FILE_INFO info = {"/work/IDEAS-master/IDEAS/Fluid/Sensors/TemperatureTwoPort.mo",4,3,13,24,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta395));
        }
      }
      tmp396 = 1;
    }
  }
  threadData->lastEquationSolved = 3205;
}

/*
equation index: 3206
type: ALGORITHM

  assert(senTemOut_heat.TMed >= 1.0 and senTemOut_heat.TMed <= 1e4, "Variable violating min/max constraint: 1.0 <= senTemOut_heat.TMed <= 1e4, has value: " + String(senTemOut_heat.TMed, "g"));
*/
void pump_v3_basicCold_t_eqFunction_3206(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3206};
  modelica_boolean tmp397;
  modelica_boolean tmp398;
  static const MMC_DEFSTRINGLIT(tmp399,85,"Variable violating min/max constraint: 1.0 <= senTemOut_heat.TMed <= 1e4, has value: ");
  modelica_string tmp400;
  modelica_metatype tmpMeta401;
  static int tmp402 = 0;
  if(!tmp402)
  {
    tmp397 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[440]] /* senTemOut_heat.TMed variable */),1.0);
    tmp398 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[440]] /* senTemOut_heat.TMed variable */),1e4);
    if(!(tmp397 && tmp398))
    {
      tmp400 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[440]] /* senTemOut_heat.TMed variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta401 = stringAppend(MMC_REFSTRINGLIT(tmp399),tmp400);
      {
        const char* assert_cond = "(senTemOut_heat.TMed >= 1.0 and senTemOut_heat.TMed <= 1e4)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/work/IDEAS-master/IDEAS/Fluid/Sensors/TemperatureTwoPort.mo",34,3,35,56,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta401));
        } else {
          FILE_INFO info = {"/work/IDEAS-master/IDEAS/Fluid/Sensors/TemperatureTwoPort.mo",34,3,35,56,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta401));
        }
      }
      tmp402 = 1;
    }
  }
  threadData->lastEquationSolved = 3206;
}

/*
equation index: 3207
type: ALGORITHM

  assert(senTemOut_heat.T_b_inflow >= 1.0 and senTemOut_heat.T_b_inflow <= 1e4, "Variable violating min/max constraint: 1.0 <= senTemOut_heat.T_b_inflow <= 1e4, has value: " + String(senTemOut_heat.T_b_inflow, "g"));
*/
void pump_v3_basicCold_t_eqFunction_3207(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3207};
  modelica_boolean tmp403;
  modelica_boolean tmp404;
  static const MMC_DEFSTRINGLIT(tmp405,91,"Variable violating min/max constraint: 1.0 <= senTemOut_heat.T_b_inflow <= 1e4, has value: ");
  modelica_string tmp406;
  modelica_metatype tmpMeta407;
  static int tmp408 = 0;
  if(!tmp408)
  {
    tmp403 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[441]] /* senTemOut_heat.T_b_inflow variable */),1.0);
    tmp404 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[441]] /* senTemOut_heat.T_b_inflow variable */),1e4);
    if(!(tmp403 && tmp404))
    {
      tmp406 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[441]] /* senTemOut_heat.T_b_inflow variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta407 = stringAppend(MMC_REFSTRINGLIT(tmp405),tmp406);
      {
        const char* assert_cond = "(senTemOut_heat.T_b_inflow >= 1.0 and senTemOut_heat.T_b_inflow <= 1e4)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/work/IDEAS-master/IDEAS/Fluid/Sensors/TemperatureTwoPort.mo",37,3,38,86,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta407));
        } else {
          FILE_INFO info = {"/work/IDEAS-master/IDEAS/Fluid/Sensors/TemperatureTwoPort.mo",37,3,38,86,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta407));
        }
      }
      tmp408 = 1;
    }
  }
  threadData->lastEquationSolved = 3207;
}

/*
equation index: 3208
type: ALGORITHM

  assert(Water_Reserv.T >= 0.0, "Variable violating min constraint: 0.0 <= Water_Reserv.T, has value: " + String(Water_Reserv.T, "g"));
*/
void pump_v3_basicCold_t_eqFunction_3208(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3208};
  modelica_boolean tmp409;
  static const MMC_DEFSTRINGLIT(tmp410,69,"Variable violating min constraint: 0.0 <= Water_Reserv.T, has value: ");
  modelica_string tmp411;
  modelica_metatype tmpMeta412;
  static int tmp413 = 0;
  if(!tmp413)
  {
    tmp409 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[0]] /* Water_Reserv.T STATE(1,Water_Reserv.der_T) */),0.0);
    if(!tmp409)
    {
      tmp411 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[0]] /* Water_Reserv.T STATE(1,Water_Reserv.der_T) */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta412 = stringAppend(MMC_REFSTRINGLIT(tmp410),tmp411);
      {
        const char* assert_cond = "(Water_Reserv.T >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/root/.openmodelica/libraries/Modelica 4.0.0+maint.om/Thermal/HeatTransfer/Components/HeatCapacitor.mo",5,3,6,29,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta412));
        } else {
          FILE_INFO info = {"/root/.openmodelica/libraries/Modelica 4.0.0+maint.om/Thermal/HeatTransfer/Components/HeatCapacitor.mo",5,3,6,29,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta412));
        }
      }
      tmp413 = 1;
    }
  }
  threadData->lastEquationSolved = 3208;
}

/*
equation index: 3209
type: ALGORITHM

  assert(plugFlowPipe2.port_a.p >= 0.0 and plugFlowPipe2.port_a.p <= 1e8, "Variable violating min/max constraint: 0.0 <= plugFlowPipe2.port_a.p <= 1e8, has value: " + String(plugFlowPipe2.port_a.p, "g"));
*/
void pump_v3_basicCold_t_eqFunction_3209(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3209};
  modelica_boolean tmp414;
  modelica_boolean tmp415;
  static const MMC_DEFSTRINGLIT(tmp416,88,"Variable violating min/max constraint: 0.0 <= plugFlowPipe2.port_a.p <= 1e8, has value: ");
  modelica_string tmp417;
  modelica_metatype tmpMeta418;
  static int tmp419 = 0;
  if(!tmp419)
  {
    tmp414 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[287]] /* plugFlowPipe2.port_a.p variable */),0.0);
    tmp415 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[287]] /* plugFlowPipe2.port_a.p variable */),1e8);
    if(!(tmp414 && tmp415))
    {
      tmp417 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[287]] /* plugFlowPipe2.port_a.p variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta418 = stringAppend(MMC_REFSTRINGLIT(tmp416),tmp417);
      {
        const char* assert_cond = "(plugFlowPipe2.port_a.p >= 0.0 and plugFlowPipe2.port_a.p <= 1e8)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/root/.openmodelica/libraries/Modelica 4.0.0+maint.om/Fluid/Interfaces.mo",15,5,15,79,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta418));
        } else {
          FILE_INFO info = {"/root/.openmodelica/libraries/Modelica 4.0.0+maint.om/Fluid/Interfaces.mo",15,5,15,79,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta418));
        }
      }
      tmp419 = 1;
    }
  }
  threadData->lastEquationSolved = 3209;
}

/*
equation index: 3210
type: ALGORITHM

  assert(plugFlowPipe2.port_a.h_outflow >= -1e10 and plugFlowPipe2.port_a.h_outflow <= 1e10, "Variable violating min/max constraint: -1e10 <= plugFlowPipe2.port_a.h_outflow <= 1e10, has value: " + String(plugFlowPipe2.port_a.h_outflow, "g"));
*/
void pump_v3_basicCold_t_eqFunction_3210(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3210};
  modelica_boolean tmp420;
  modelica_boolean tmp421;
  static const MMC_DEFSTRINGLIT(tmp422,99,"Variable violating min/max constraint: -1e10 <= plugFlowPipe2.port_a.h_outflow <= 1e10, has value: ");
  modelica_string tmp423;
  modelica_metatype tmpMeta424;
  static int tmp425 = 0;
  if(!tmp425)
  {
    tmp420 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[286]] /* plugFlowPipe2.port_a.h_outflow variable */),-1e10);
    tmp421 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[286]] /* plugFlowPipe2.port_a.h_outflow variable */),1e10);
    if(!(tmp420 && tmp421))
    {
      tmp423 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[286]] /* plugFlowPipe2.port_a.h_outflow variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta424 = stringAppend(MMC_REFSTRINGLIT(tmp422),tmp423);
      {
        const char* assert_cond = "(plugFlowPipe2.port_a.h_outflow >= -1e10 and plugFlowPipe2.port_a.h_outflow <= 1e10)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/root/.openmodelica/libraries/Modelica 4.0.0+maint.om/Fluid/Interfaces.mo",16,5,17,84,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta424));
        } else {
          FILE_INFO info = {"/root/.openmodelica/libraries/Modelica 4.0.0+maint.om/Fluid/Interfaces.mo",16,5,17,84,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta424));
        }
      }
      tmp425 = 1;
    }
  }
  threadData->lastEquationSolved = 3210;
}

/*
equation index: 3211
type: ALGORITHM

  assert(plugFlowPipe2.port_b.h_outflow >= -1e10 and plugFlowPipe2.port_b.h_outflow <= 1e10, "Variable violating min/max constraint: -1e10 <= plugFlowPipe2.port_b.h_outflow <= 1e10, has value: " + String(plugFlowPipe2.port_b.h_outflow, "g"));
*/
void pump_v3_basicCold_t_eqFunction_3211(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3211};
  modelica_boolean tmp426;
  modelica_boolean tmp427;
  static const MMC_DEFSTRINGLIT(tmp428,99,"Variable violating min/max constraint: -1e10 <= plugFlowPipe2.port_b.h_outflow <= 1e10, has value: ");
  modelica_string tmp429;
  modelica_metatype tmpMeta430;
  static int tmp431 = 0;
  if(!tmp431)
  {
    tmp426 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[288]] /* plugFlowPipe2.port_b.h_outflow variable */),-1e10);
    tmp427 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[288]] /* plugFlowPipe2.port_b.h_outflow variable */),1e10);
    if(!(tmp426 && tmp427))
    {
      tmp429 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[288]] /* plugFlowPipe2.port_b.h_outflow variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta430 = stringAppend(MMC_REFSTRINGLIT(tmp428),tmp429);
      {
        const char* assert_cond = "(plugFlowPipe2.port_b.h_outflow >= -1e10 and plugFlowPipe2.port_b.h_outflow <= 1e10)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/root/.openmodelica/libraries/Modelica 4.0.0+maint.om/Fluid/Interfaces.mo",16,5,17,84,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta430));
        } else {
          FILE_INFO info = {"/root/.openmodelica/libraries/Modelica 4.0.0+maint.om/Fluid/Interfaces.mo",16,5,17,84,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta430));
        }
      }
      tmp431 = 1;
    }
  }
  threadData->lastEquationSolved = 3211;
}

/*
equation index: 3212
type: ALGORITHM

  assert(plugFlowPipe2.heatPort.T >= 0.0, "Variable violating min constraint: 0.0 <= plugFlowPipe2.heatPort.T, has value: " + String(plugFlowPipe2.heatPort.T, "g"));
*/
void pump_v3_basicCold_t_eqFunction_3212(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3212};
  modelica_boolean tmp432;
  static const MMC_DEFSTRINGLIT(tmp433,79,"Variable violating min constraint: 0.0 <= plugFlowPipe2.heatPort.T, has value: ");
  modelica_string tmp434;
  modelica_metatype tmpMeta435;
  static int tmp436 = 0;
  if(!tmp436)
  {
    tmp432 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[285]] /* plugFlowPipe2.heatPort.T variable */),0.0);
    if(!tmp432)
    {
      tmp434 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[285]] /* plugFlowPipe2.heatPort.T variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta435 = stringAppend(MMC_REFSTRINGLIT(tmp433),tmp434);
      {
        const char* assert_cond = "(plugFlowPipe2.heatPort.T >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/root/.openmodelica/libraries/Modelica 4.0.0+maint.om/Thermal/HeatTransfer/Interfaces/HeatPort.mo",3,3,3,38,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta435));
        } else {
          FILE_INFO info = {"/root/.openmodelica/libraries/Modelica 4.0.0+maint.om/Thermal/HeatTransfer/Interfaces/HeatPort.mo",3,3,3,38,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta435));
        }
      }
      tmp436 = 1;
    }
  }
  threadData->lastEquationSolved = 3212;
}

/*
equation index: 3213
type: ALGORITHM

  assert(plugFlowPipe2.del.port_a.h_outflow >= -1e10 and plugFlowPipe2.del.port_a.h_outflow <= 1e10, "Variable violating min/max constraint: -1e10 <= plugFlowPipe2.del.port_a.h_outflow <= 1e10, has value: " + String(plugFlowPipe2.del.port_a.h_outflow, "g"));
*/
void pump_v3_basicCold_t_eqFunction_3213(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3213};
  modelica_boolean tmp437;
  modelica_boolean tmp438;
  static const MMC_DEFSTRINGLIT(tmp439,103,"Variable violating min/max constraint: -1e10 <= plugFlowPipe2.del.port_a.h_outflow <= 1e10, has value: ");
  modelica_string tmp440;
  modelica_metatype tmpMeta441;
  static int tmp442 = 0;
  if(!tmp442)
  {
    tmp437 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[272]] /* plugFlowPipe2.del.port_a.h_outflow variable */),-1e10);
    tmp438 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[272]] /* plugFlowPipe2.del.port_a.h_outflow variable */),1e10);
    if(!(tmp437 && tmp438))
    {
      tmp440 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[272]] /* plugFlowPipe2.del.port_a.h_outflow variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta441 = stringAppend(MMC_REFSTRINGLIT(tmp439),tmp440);
      {
        const char* assert_cond = "(plugFlowPipe2.del.port_a.h_outflow >= -1e10 and plugFlowPipe2.del.port_a.h_outflow <= 1e10)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/root/.openmodelica/libraries/Modelica 4.0.0+maint.om/Fluid/Interfaces.mo",16,5,17,84,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta441));
        } else {
          FILE_INFO info = {"/root/.openmodelica/libraries/Modelica 4.0.0+maint.om/Fluid/Interfaces.mo",16,5,17,84,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta441));
        }
      }
      tmp442 = 1;
    }
  }
  threadData->lastEquationSolved = 3213;
}

/*
equation index: 3214
type: ALGORITHM

  assert(plugFlowPipe2.del.port_b.h_outflow >= -1e10 and plugFlowPipe2.del.port_b.h_outflow <= 1e10, "Variable violating min/max constraint: -1e10 <= plugFlowPipe2.del.port_b.h_outflow <= 1e10, has value: " + String(plugFlowPipe2.del.port_b.h_outflow, "g"));
*/
void pump_v3_basicCold_t_eqFunction_3214(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3214};
  modelica_boolean tmp443;
  modelica_boolean tmp444;
  static const MMC_DEFSTRINGLIT(tmp445,103,"Variable violating min/max constraint: -1e10 <= plugFlowPipe2.del.port_b.h_outflow <= 1e10, has value: ");
  modelica_string tmp446;
  modelica_metatype tmpMeta447;
  static int tmp448 = 0;
  if(!tmp448)
  {
    tmp443 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[273]] /* plugFlowPipe2.del.port_b.h_outflow variable */),-1e10);
    tmp444 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[273]] /* plugFlowPipe2.del.port_b.h_outflow variable */),1e10);
    if(!(tmp443 && tmp444))
    {
      tmp446 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[273]] /* plugFlowPipe2.del.port_b.h_outflow variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta447 = stringAppend(MMC_REFSTRINGLIT(tmp445),tmp446);
      {
        const char* assert_cond = "(plugFlowPipe2.del.port_b.h_outflow >= -1e10 and plugFlowPipe2.del.port_b.h_outflow <= 1e10)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/root/.openmodelica/libraries/Modelica 4.0.0+maint.om/Fluid/Interfaces.mo",16,5,17,84,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta447));
        } else {
          FILE_INFO info = {"/root/.openmodelica/libraries/Modelica 4.0.0+maint.om/Fluid/Interfaces.mo",16,5,17,84,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta447));
        }
      }
      tmp448 = 1;
    }
  }
  threadData->lastEquationSolved = 3214;
}

/*
equation index: 3215
type: ALGORITHM

  assert(plugFlowPipe2.heaLos_a.port_b.h_outflow >= -1e10 and plugFlowPipe2.heaLos_a.port_b.h_outflow <= 1e10, "Variable violating min/max constraint: -1e10 <= plugFlowPipe2.heaLos_a.port_b.h_outflow <= 1e10, has value: " + String(plugFlowPipe2.heaLos_a.port_b.h_outflow, "g"));
*/
void pump_v3_basicCold_t_eqFunction_3215(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3215};
  modelica_boolean tmp449;
  modelica_boolean tmp450;
  static const MMC_DEFSTRINGLIT(tmp451,108,"Variable violating min/max constraint: -1e10 <= plugFlowPipe2.heaLos_a.port_b.h_outflow <= 1e10, has value: ");
  modelica_string tmp452;
  modelica_metatype tmpMeta453;
  static int tmp454 = 0;
  if(!tmp454)
  {
    tmp449 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[279]] /* plugFlowPipe2.heaLos_a.port_b.h_outflow variable */),-1e10);
    tmp450 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[279]] /* plugFlowPipe2.heaLos_a.port_b.h_outflow variable */),1e10);
    if(!(tmp449 && tmp450))
    {
      tmp452 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[279]] /* plugFlowPipe2.heaLos_a.port_b.h_outflow variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta453 = stringAppend(MMC_REFSTRINGLIT(tmp451),tmp452);
      {
        const char* assert_cond = "(plugFlowPipe2.heaLos_a.port_b.h_outflow >= -1e10 and plugFlowPipe2.heaLos_a.port_b.h_outflow <= 1e10)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/root/.openmodelica/libraries/Modelica 4.0.0+maint.om/Fluid/Interfaces.mo",16,5,17,84,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta453));
        } else {
          FILE_INFO info = {"/root/.openmodelica/libraries/Modelica 4.0.0+maint.om/Fluid/Interfaces.mo",16,5,17,84,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta453));
        }
      }
      tmp454 = 1;
    }
  }
  threadData->lastEquationSolved = 3215;
}

/*
equation index: 3216
type: ALGORITHM

  assert(plugFlowPipe2.heaLos_a.T_a_inflow >= 0.0, "Variable violating min constraint: 0.0 <= plugFlowPipe2.heaLos_a.T_a_inflow, has value: " + String(plugFlowPipe2.heaLos_a.T_a_inflow, "g"));
*/
void pump_v3_basicCold_t_eqFunction_3216(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3216};
  modelica_boolean tmp455;
  static const MMC_DEFSTRINGLIT(tmp456,88,"Variable violating min constraint: 0.0 <= plugFlowPipe2.heaLos_a.T_a_inflow, has value: ");
  modelica_string tmp457;
  modelica_metatype tmpMeta458;
  static int tmp459 = 0;
  if(!tmp459)
  {
    tmp455 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[275]] /* plugFlowPipe2.heaLos_a.T_a_inflow variable */),0.0);
    if(!tmp455)
    {
      tmp457 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[275]] /* plugFlowPipe2.heaLos_a.T_a_inflow variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta458 = stringAppend(MMC_REFSTRINGLIT(tmp456),tmp457);
      {
        const char* assert_cond = "(plugFlowPipe2.heaLos_a.T_a_inflow >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/work/IDEAS-master/IDEAS/Fluid/FixedResistances/BaseClasses/PlugFlowHeatLoss.mo",30,3,31,48,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta458));
        } else {
          FILE_INFO info = {"/work/IDEAS-master/IDEAS/Fluid/FixedResistances/BaseClasses/PlugFlowHeatLoss.mo",30,3,31,48,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta458));
        }
      }
      tmp459 = 1;
    }
  }
  threadData->lastEquationSolved = 3216;
}

/*
equation index: 3217
type: ALGORITHM

  assert(plugFlowPipe2.heaLos_a.T_b_outflow >= 0.0, "Variable violating min constraint: 0.0 <= plugFlowPipe2.heaLos_a.T_b_outflow, has value: " + String(plugFlowPipe2.heaLos_a.T_b_outflow, "g"));
*/
void pump_v3_basicCold_t_eqFunction_3217(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3217};
  modelica_boolean tmp460;
  static const MMC_DEFSTRINGLIT(tmp461,89,"Variable violating min constraint: 0.0 <= plugFlowPipe2.heaLos_a.T_b_outflow, has value: ");
  modelica_string tmp462;
  modelica_metatype tmpMeta463;
  static int tmp464 = 0;
  if(!tmp464)
  {
    tmp460 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[276]] /* plugFlowPipe2.heaLos_a.T_b_outflow variable */),0.0);
    if(!tmp460)
    {
      tmp462 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[276]] /* plugFlowPipe2.heaLos_a.T_b_outflow variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta463 = stringAppend(MMC_REFSTRINGLIT(tmp461),tmp462);
      {
        const char* assert_cond = "(plugFlowPipe2.heaLos_a.T_b_outflow >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/work/IDEAS-master/IDEAS/Fluid/FixedResistances/BaseClasses/PlugFlowHeatLoss.mo",32,3,33,49,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta463));
        } else {
          FILE_INFO info = {"/work/IDEAS-master/IDEAS/Fluid/FixedResistances/BaseClasses/PlugFlowHeatLoss.mo",32,3,33,49,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta463));
        }
      }
      tmp464 = 1;
    }
  }
  threadData->lastEquationSolved = 3217;
}

/*
equation index: 3218
type: ALGORITHM

  assert(plugFlowPipe2.heaLos_b.port_b.h_outflow >= -1e10 and plugFlowPipe2.heaLos_b.port_b.h_outflow <= 1e10, "Variable violating min/max constraint: -1e10 <= plugFlowPipe2.heaLos_b.port_b.h_outflow <= 1e10, has value: " + String(plugFlowPipe2.heaLos_b.port_b.h_outflow, "g"));
*/
void pump_v3_basicCold_t_eqFunction_3218(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3218};
  modelica_boolean tmp465;
  modelica_boolean tmp466;
  static const MMC_DEFSTRINGLIT(tmp467,108,"Variable violating min/max constraint: -1e10 <= plugFlowPipe2.heaLos_b.port_b.h_outflow <= 1e10, has value: ");
  modelica_string tmp468;
  modelica_metatype tmpMeta469;
  static int tmp470 = 0;
  if(!tmp470)
  {
    tmp465 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[284]] /* plugFlowPipe2.heaLos_b.port_b.h_outflow variable */),-1e10);
    tmp466 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[284]] /* plugFlowPipe2.heaLos_b.port_b.h_outflow variable */),1e10);
    if(!(tmp465 && tmp466))
    {
      tmp468 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[284]] /* plugFlowPipe2.heaLos_b.port_b.h_outflow variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta469 = stringAppend(MMC_REFSTRINGLIT(tmp467),tmp468);
      {
        const char* assert_cond = "(plugFlowPipe2.heaLos_b.port_b.h_outflow >= -1e10 and plugFlowPipe2.heaLos_b.port_b.h_outflow <= 1e10)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/root/.openmodelica/libraries/Modelica 4.0.0+maint.om/Fluid/Interfaces.mo",16,5,17,84,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta469));
        } else {
          FILE_INFO info = {"/root/.openmodelica/libraries/Modelica 4.0.0+maint.om/Fluid/Interfaces.mo",16,5,17,84,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta469));
        }
      }
      tmp470 = 1;
    }
  }
  threadData->lastEquationSolved = 3218;
}

/*
equation index: 3219
type: ALGORITHM

  assert(plugFlowPipe2.heaLos_b.T_a_inflow >= 0.0, "Variable violating min constraint: 0.0 <= plugFlowPipe2.heaLos_b.T_a_inflow, has value: " + String(plugFlowPipe2.heaLos_b.T_a_inflow, "g"));
*/
void pump_v3_basicCold_t_eqFunction_3219(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3219};
  modelica_boolean tmp471;
  static const MMC_DEFSTRINGLIT(tmp472,88,"Variable violating min constraint: 0.0 <= plugFlowPipe2.heaLos_b.T_a_inflow, has value: ");
  modelica_string tmp473;
  modelica_metatype tmpMeta474;
  static int tmp475 = 0;
  if(!tmp475)
  {
    tmp471 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[280]] /* plugFlowPipe2.heaLos_b.T_a_inflow variable */),0.0);
    if(!tmp471)
    {
      tmp473 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[280]] /* plugFlowPipe2.heaLos_b.T_a_inflow variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta474 = stringAppend(MMC_REFSTRINGLIT(tmp472),tmp473);
      {
        const char* assert_cond = "(plugFlowPipe2.heaLos_b.T_a_inflow >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/work/IDEAS-master/IDEAS/Fluid/FixedResistances/BaseClasses/PlugFlowHeatLoss.mo",30,3,31,48,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta474));
        } else {
          FILE_INFO info = {"/work/IDEAS-master/IDEAS/Fluid/FixedResistances/BaseClasses/PlugFlowHeatLoss.mo",30,3,31,48,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta474));
        }
      }
      tmp475 = 1;
    }
  }
  threadData->lastEquationSolved = 3219;
}

/*
equation index: 3220
type: ALGORITHM

  assert(plugFlowPipe2.heaLos_b.T_b_outflow >= 0.0, "Variable violating min constraint: 0.0 <= plugFlowPipe2.heaLos_b.T_b_outflow, has value: " + String(plugFlowPipe2.heaLos_b.T_b_outflow, "g"));
*/
void pump_v3_basicCold_t_eqFunction_3220(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3220};
  modelica_boolean tmp476;
  static const MMC_DEFSTRINGLIT(tmp477,89,"Variable violating min constraint: 0.0 <= plugFlowPipe2.heaLos_b.T_b_outflow, has value: ");
  modelica_string tmp478;
  modelica_metatype tmpMeta479;
  static int tmp480 = 0;
  if(!tmp480)
  {
    tmp476 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[281]] /* plugFlowPipe2.heaLos_b.T_b_outflow variable */),0.0);
    if(!tmp476)
    {
      tmp478 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[281]] /* plugFlowPipe2.heaLos_b.T_b_outflow variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta479 = stringAppend(MMC_REFSTRINGLIT(tmp477),tmp478);
      {
        const char* assert_cond = "(plugFlowPipe2.heaLos_b.T_b_outflow >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/work/IDEAS-master/IDEAS/Fluid/FixedResistances/BaseClasses/PlugFlowHeatLoss.mo",32,3,33,49,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta479));
        } else {
          FILE_INFO info = {"/work/IDEAS-master/IDEAS/Fluid/FixedResistances/BaseClasses/PlugFlowHeatLoss.mo",32,3,33,49,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta479));
        }
      }
      tmp480 = 1;
    }
  }
  threadData->lastEquationSolved = 3220;
}

/*
equation index: 3221
type: ALGORITHM

  assert(plugFlowPipe2.vol_b.T >= 1.0 and plugFlowPipe2.vol_b.T <= 1e4, "Variable violating min/max constraint: 1.0 <= plugFlowPipe2.vol_b.T <= 1e4, has value: " + String(plugFlowPipe2.vol_b.T, "g"));
*/
void pump_v3_basicCold_t_eqFunction_3221(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3221};
  modelica_boolean tmp481;
  modelica_boolean tmp482;
  static const MMC_DEFSTRINGLIT(tmp483,87,"Variable violating min/max constraint: 1.0 <= plugFlowPipe2.vol_b.T <= 1e4, has value: ");
  modelica_string tmp484;
  modelica_metatype tmpMeta485;
  static int tmp486 = 0;
  if(!tmp486)
  {
    tmp481 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[314]] /* plugFlowPipe2.vol_b.T variable */),1.0);
    tmp482 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[314]] /* plugFlowPipe2.vol_b.T variable */),1e4);
    if(!(tmp481 && tmp482))
    {
      tmp484 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[314]] /* plugFlowPipe2.vol_b.T variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta485 = stringAppend(MMC_REFSTRINGLIT(tmp483),tmp484);
      {
        const char* assert_cond = "(plugFlowPipe2.vol_b.T >= 1.0 and plugFlowPipe2.vol_b.T <= 1e4)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/work/IDEAS-master/IDEAS/Fluid/MixingVolumes/BaseClasses/PartialMixingVolume.mo",40,3,44,31,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta485));
        } else {
          FILE_INFO info = {"/work/IDEAS-master/IDEAS/Fluid/MixingVolumes/BaseClasses/PartialMixingVolume.mo",40,3,44,31,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta485));
        }
      }
      tmp486 = 1;
    }
  }
  threadData->lastEquationSolved = 3221;
}

/*
equation index: 3222
type: ALGORITHM

  assert(plugFlowPipe2.vol_b.dynBal.medium.T >= 1.0 and plugFlowPipe2.vol_b.dynBal.medium.T <= 1e4, "Variable violating min/max constraint: 1.0 <= plugFlowPipe2.vol_b.dynBal.medium.T <= 1e4, has value: " + String(plugFlowPipe2.vol_b.dynBal.medium.T, "g"));
*/
void pump_v3_basicCold_t_eqFunction_3222(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3222};
  modelica_boolean tmp487;
  modelica_boolean tmp488;
  static const MMC_DEFSTRINGLIT(tmp489,101,"Variable violating min/max constraint: 1.0 <= plugFlowPipe2.vol_b.dynBal.medium.T <= 1e4, has value: ");
  modelica_string tmp490;
  modelica_metatype tmpMeta491;
  static int tmp492 = 0;
  if(!tmp492)
  {
    tmp487 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[321]] /* plugFlowPipe2.vol_b.dynBal.medium.T variable */),1.0);
    tmp488 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[321]] /* plugFlowPipe2.vol_b.dynBal.medium.T variable */),1e4);
    if(!(tmp487 && tmp488))
    {
      tmp490 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[321]] /* plugFlowPipe2.vol_b.dynBal.medium.T variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta491 = stringAppend(MMC_REFSTRINGLIT(tmp489),tmp490);
      {
        const char* assert_cond = "(plugFlowPipe2.vol_b.dynBal.medium.T >= 1.0 and plugFlowPipe2.vol_b.dynBal.medium.T <= 1e4)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/work/IDEAS-master/IDEAS/Media/Water.mo",22,5,25,30,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta491));
        } else {
          FILE_INFO info = {"/work/IDEAS-master/IDEAS/Media/Water.mo",22,5,25,30,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta491));
        }
      }
      tmp492 = 1;
    }
  }
  threadData->lastEquationSolved = 3222;
}

/*
equation index: 3223
type: ALGORITHM

  assert(plugFlowPipe2.vol_b.dynBal.ports_H_flow[1] >= -1e8 and plugFlowPipe2.vol_b.dynBal.ports_H_flow[1] <= 1e8, "Variable violating min/max constraint: -1e8 <= plugFlowPipe2.vol_b.dynBal.ports_H_flow[1] <= 1e8, has value: " + String(plugFlowPipe2.vol_b.dynBal.ports_H_flow[1], "g"));
*/
void pump_v3_basicCold_t_eqFunction_3223(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3223};
  modelica_boolean tmp493;
  modelica_boolean tmp494;
  static const MMC_DEFSTRINGLIT(tmp495,109,"Variable violating min/max constraint: -1e8 <= plugFlowPipe2.vol_b.dynBal.ports_H_flow[1] <= 1e8, has value: ");
  modelica_string tmp496;
  modelica_metatype tmpMeta497;
  static int tmp498 = 0;
  if(!tmp498)
  {
    tmp493 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[326]] /* plugFlowPipe2.vol_b.dynBal.ports_H_flow[1] variable */),-1e8);
    tmp494 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[326]] /* plugFlowPipe2.vol_b.dynBal.ports_H_flow[1] variable */),1e8);
    if(!(tmp493 && tmp494))
    {
      tmp496 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[326]] /* plugFlowPipe2.vol_b.dynBal.ports_H_flow[1] variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta497 = stringAppend(MMC_REFSTRINGLIT(tmp495),tmp496);
      {
        const char* assert_cond = "(plugFlowPipe2.vol_b.dynBal.ports_H_flow[1] >= -1e8 and plugFlowPipe2.vol_b.dynBal.ports_H_flow[1] <= 1e8)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/work/IDEAS-master/IDEAS/Fluid/Interfaces/ConservationEquation.mo",128,3,128,47,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta497));
        } else {
          FILE_INFO info = {"/work/IDEAS-master/IDEAS/Fluid/Interfaces/ConservationEquation.mo",128,3,128,47,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta497));
        }
      }
      tmp498 = 1;
    }
  }
  threadData->lastEquationSolved = 3223;
}

/*
equation index: 3224
type: ALGORITHM

  assert(plugFlowPipe2.vol_b.dynBal.ports_H_flow[2] >= -1e8 and plugFlowPipe2.vol_b.dynBal.ports_H_flow[2] <= 1e8, "Variable violating min/max constraint: -1e8 <= plugFlowPipe2.vol_b.dynBal.ports_H_flow[2] <= 1e8, has value: " + String(plugFlowPipe2.vol_b.dynBal.ports_H_flow[2], "g"));
*/
void pump_v3_basicCold_t_eqFunction_3224(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3224};
  modelica_boolean tmp499;
  modelica_boolean tmp500;
  static const MMC_DEFSTRINGLIT(tmp501,109,"Variable violating min/max constraint: -1e8 <= plugFlowPipe2.vol_b.dynBal.ports_H_flow[2] <= 1e8, has value: ");
  modelica_string tmp502;
  modelica_metatype tmpMeta503;
  static int tmp504 = 0;
  if(!tmp504)
  {
    tmp499 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[327]] /* plugFlowPipe2.vol_b.dynBal.ports_H_flow[2] variable */),-1e8);
    tmp500 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[327]] /* plugFlowPipe2.vol_b.dynBal.ports_H_flow[2] variable */),1e8);
    if(!(tmp499 && tmp500))
    {
      tmp502 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[327]] /* plugFlowPipe2.vol_b.dynBal.ports_H_flow[2] variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta503 = stringAppend(MMC_REFSTRINGLIT(tmp501),tmp502);
      {
        const char* assert_cond = "(plugFlowPipe2.vol_b.dynBal.ports_H_flow[2] >= -1e8 and plugFlowPipe2.vol_b.dynBal.ports_H_flow[2] <= 1e8)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/work/IDEAS-master/IDEAS/Fluid/Interfaces/ConservationEquation.mo",128,3,128,47,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta503));
        } else {
          FILE_INFO info = {"/work/IDEAS-master/IDEAS/Fluid/Interfaces/ConservationEquation.mo",128,3,128,47,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta503));
        }
      }
      tmp504 = 1;
    }
  }
  threadData->lastEquationSolved = 3224;
}

/*
equation index: 3225
type: ALGORITHM

  assert(plugFlowPipe2.vol_a.T >= 1.0 and plugFlowPipe2.vol_a.T <= 1e4, "Variable violating min/max constraint: 1.0 <= plugFlowPipe2.vol_a.T <= 1e4, has value: " + String(plugFlowPipe2.vol_a.T, "g"));
*/
void pump_v3_basicCold_t_eqFunction_3225(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3225};
  modelica_boolean tmp505;
  modelica_boolean tmp506;
  static const MMC_DEFSTRINGLIT(tmp507,87,"Variable violating min/max constraint: 1.0 <= plugFlowPipe2.vol_a.T <= 1e4, has value: ");
  modelica_string tmp508;
  modelica_metatype tmpMeta509;
  static int tmp510 = 0;
  if(!tmp510)
  {
    tmp505 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[298]] /* plugFlowPipe2.vol_a.T variable */),1.0);
    tmp506 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[298]] /* plugFlowPipe2.vol_a.T variable */),1e4);
    if(!(tmp505 && tmp506))
    {
      tmp508 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[298]] /* plugFlowPipe2.vol_a.T variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta509 = stringAppend(MMC_REFSTRINGLIT(tmp507),tmp508);
      {
        const char* assert_cond = "(plugFlowPipe2.vol_a.T >= 1.0 and plugFlowPipe2.vol_a.T <= 1e4)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/work/IDEAS-master/IDEAS/Fluid/MixingVolumes/BaseClasses/PartialMixingVolume.mo",40,3,44,31,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta509));
        } else {
          FILE_INFO info = {"/work/IDEAS-master/IDEAS/Fluid/MixingVolumes/BaseClasses/PartialMixingVolume.mo",40,3,44,31,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta509));
        }
      }
      tmp510 = 1;
    }
  }
  threadData->lastEquationSolved = 3225;
}

/*
equation index: 3226
type: ALGORITHM

  assert(plugFlowPipe2.vol_a.dynBal.medium.T >= 1.0 and plugFlowPipe2.vol_a.dynBal.medium.T <= 1e4, "Variable violating min/max constraint: 1.0 <= plugFlowPipe2.vol_a.dynBal.medium.T <= 1e4, has value: " + String(plugFlowPipe2.vol_a.dynBal.medium.T, "g"));
*/
void pump_v3_basicCold_t_eqFunction_3226(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3226};
  modelica_boolean tmp511;
  modelica_boolean tmp512;
  static const MMC_DEFSTRINGLIT(tmp513,101,"Variable violating min/max constraint: 1.0 <= plugFlowPipe2.vol_a.dynBal.medium.T <= 1e4, has value: ");
  modelica_string tmp514;
  modelica_metatype tmpMeta515;
  static int tmp516 = 0;
  if(!tmp516)
  {
    tmp511 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[305]] /* plugFlowPipe2.vol_a.dynBal.medium.T variable */),1.0);
    tmp512 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[305]] /* plugFlowPipe2.vol_a.dynBal.medium.T variable */),1e4);
    if(!(tmp511 && tmp512))
    {
      tmp514 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[305]] /* plugFlowPipe2.vol_a.dynBal.medium.T variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta515 = stringAppend(MMC_REFSTRINGLIT(tmp513),tmp514);
      {
        const char* assert_cond = "(plugFlowPipe2.vol_a.dynBal.medium.T >= 1.0 and plugFlowPipe2.vol_a.dynBal.medium.T <= 1e4)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/work/IDEAS-master/IDEAS/Media/Water.mo",22,5,25,30,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta515));
        } else {
          FILE_INFO info = {"/work/IDEAS-master/IDEAS/Media/Water.mo",22,5,25,30,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta515));
        }
      }
      tmp516 = 1;
    }
  }
  threadData->lastEquationSolved = 3226;
}

/*
equation index: 3227
type: ALGORITHM

  assert(plugFlowPipe2.vol_a.dynBal.ports_H_flow[1] >= -1e8 and plugFlowPipe2.vol_a.dynBal.ports_H_flow[1] <= 1e8, "Variable violating min/max constraint: -1e8 <= plugFlowPipe2.vol_a.dynBal.ports_H_flow[1] <= 1e8, has value: " + String(plugFlowPipe2.vol_a.dynBal.ports_H_flow[1], "g"));
*/
void pump_v3_basicCold_t_eqFunction_3227(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3227};
  modelica_boolean tmp517;
  modelica_boolean tmp518;
  static const MMC_DEFSTRINGLIT(tmp519,109,"Variable violating min/max constraint: -1e8 <= plugFlowPipe2.vol_a.dynBal.ports_H_flow[1] <= 1e8, has value: ");
  modelica_string tmp520;
  modelica_metatype tmpMeta521;
  static int tmp522 = 0;
  if(!tmp522)
  {
    tmp517 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[310]] /* plugFlowPipe2.vol_a.dynBal.ports_H_flow[1] variable */),-1e8);
    tmp518 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[310]] /* plugFlowPipe2.vol_a.dynBal.ports_H_flow[1] variable */),1e8);
    if(!(tmp517 && tmp518))
    {
      tmp520 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[310]] /* plugFlowPipe2.vol_a.dynBal.ports_H_flow[1] variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta521 = stringAppend(MMC_REFSTRINGLIT(tmp519),tmp520);
      {
        const char* assert_cond = "(plugFlowPipe2.vol_a.dynBal.ports_H_flow[1] >= -1e8 and plugFlowPipe2.vol_a.dynBal.ports_H_flow[1] <= 1e8)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/work/IDEAS-master/IDEAS/Fluid/Interfaces/ConservationEquation.mo",128,3,128,47,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta521));
        } else {
          FILE_INFO info = {"/work/IDEAS-master/IDEAS/Fluid/Interfaces/ConservationEquation.mo",128,3,128,47,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta521));
        }
      }
      tmp522 = 1;
    }
  }
  threadData->lastEquationSolved = 3227;
}

/*
equation index: 3228
type: ALGORITHM

  assert(plugFlowPipe2.vol_a.dynBal.ports_H_flow[2] >= -1e8 and plugFlowPipe2.vol_a.dynBal.ports_H_flow[2] <= 1e8, "Variable violating min/max constraint: -1e8 <= plugFlowPipe2.vol_a.dynBal.ports_H_flow[2] <= 1e8, has value: " + String(plugFlowPipe2.vol_a.dynBal.ports_H_flow[2], "g"));
*/
void pump_v3_basicCold_t_eqFunction_3228(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3228};
  modelica_boolean tmp523;
  modelica_boolean tmp524;
  static const MMC_DEFSTRINGLIT(tmp525,109,"Variable violating min/max constraint: -1e8 <= plugFlowPipe2.vol_a.dynBal.ports_H_flow[2] <= 1e8, has value: ");
  modelica_string tmp526;
  modelica_metatype tmpMeta527;
  static int tmp528 = 0;
  if(!tmp528)
  {
    tmp523 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[311]] /* plugFlowPipe2.vol_a.dynBal.ports_H_flow[2] variable */),-1e8);
    tmp524 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[311]] /* plugFlowPipe2.vol_a.dynBal.ports_H_flow[2] variable */),1e8);
    if(!(tmp523 && tmp524))
    {
      tmp526 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[311]] /* plugFlowPipe2.vol_a.dynBal.ports_H_flow[2] variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta527 = stringAppend(MMC_REFSTRINGLIT(tmp525),tmp526);
      {
        const char* assert_cond = "(plugFlowPipe2.vol_a.dynBal.ports_H_flow[2] >= -1e8 and plugFlowPipe2.vol_a.dynBal.ports_H_flow[2] <= 1e8)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/work/IDEAS-master/IDEAS/Fluid/Interfaces/ConservationEquation.mo",128,3,128,47,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta527));
        } else {
          FILE_INFO info = {"/work/IDEAS-master/IDEAS/Fluid/Interfaces/ConservationEquation.mo",128,3,128,47,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta527));
        }
      }
      tmp528 = 1;
    }
  }
  threadData->lastEquationSolved = 3228;
}

/*
equation index: 3229
type: ALGORITHM

  assert(pump.port_a.p >= 0.0 and pump.port_a.p <= 1e8, "Variable violating min/max constraint: 0.0 <= pump.port_a.p <= 1e8, has value: " + String(pump.port_a.p, "g"));
*/
void pump_v3_basicCold_t_eqFunction_3229(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3229};
  modelica_boolean tmp529;
  modelica_boolean tmp530;
  static const MMC_DEFSTRINGLIT(tmp531,79,"Variable violating min/max constraint: 0.0 <= pump.port_a.p <= 1e8, has value: ");
  modelica_string tmp532;
  modelica_metatype tmpMeta533;
  static int tmp534 = 0;
  if(!tmp534)
  {
    tmp529 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[403]] /* pump.port_a.p variable */),0.0);
    tmp530 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[403]] /* pump.port_a.p variable */),1e8);
    if(!(tmp529 && tmp530))
    {
      tmp532 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[403]] /* pump.port_a.p variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta533 = stringAppend(MMC_REFSTRINGLIT(tmp531),tmp532);
      {
        const char* assert_cond = "(pump.port_a.p >= 0.0 and pump.port_a.p <= 1e8)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/root/.openmodelica/libraries/Modelica 4.0.0+maint.om/Fluid/Interfaces.mo",15,5,15,79,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta533));
        } else {
          FILE_INFO info = {"/root/.openmodelica/libraries/Modelica 4.0.0+maint.om/Fluid/Interfaces.mo",15,5,15,79,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta533));
        }
      }
      tmp534 = 1;
    }
  }
  threadData->lastEquationSolved = 3229;
}

/*
equation index: 3230
type: ALGORITHM

  assert(pump.port_b.h_outflow >= -1e10 and pump.port_b.h_outflow <= 1e10, "Variable violating min/max constraint: -1e10 <= pump.port_b.h_outflow <= 1e10, has value: " + String(pump.port_b.h_outflow, "g"));
*/
void pump_v3_basicCold_t_eqFunction_3230(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3230};
  modelica_boolean tmp535;
  modelica_boolean tmp536;
  static const MMC_DEFSTRINGLIT(tmp537,90,"Variable violating min/max constraint: -1e10 <= pump.port_b.h_outflow <= 1e10, has value: ");
  modelica_string tmp538;
  modelica_metatype tmpMeta539;
  static int tmp540 = 0;
  if(!tmp540)
  {
    tmp535 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[404]] /* pump.port_b.h_outflow variable */),-1e10);
    tmp536 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[404]] /* pump.port_b.h_outflow variable */),1e10);
    if(!(tmp535 && tmp536))
    {
      tmp538 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[404]] /* pump.port_b.h_outflow variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta539 = stringAppend(MMC_REFSTRINGLIT(tmp537),tmp538);
      {
        const char* assert_cond = "(pump.port_b.h_outflow >= -1e10 and pump.port_b.h_outflow <= 1e10)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/root/.openmodelica/libraries/Modelica 4.0.0+maint.om/Fluid/Interfaces.mo",16,5,17,84,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta539));
        } else {
          FILE_INFO info = {"/root/.openmodelica/libraries/Modelica 4.0.0+maint.om/Fluid/Interfaces.mo",16,5,17,84,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta539));
        }
      }
      tmp540 = 1;
    }
  }
  threadData->lastEquationSolved = 3230;
}

/*
equation index: 3231
type: ALGORITHM

  assert(pump.heatPort.T >= 1.0 and pump.heatPort.T <= 1e4, "Variable violating min/max constraint: 1.0 <= pump.heatPort.T <= 1e4, has value: " + String(pump.heatPort.T, "g"));
*/
void pump_v3_basicCold_t_eqFunction_3231(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3231};
  modelica_boolean tmp541;
  modelica_boolean tmp542;
  static const MMC_DEFSTRINGLIT(tmp543,81,"Variable violating min/max constraint: 1.0 <= pump.heatPort.T <= 1e4, has value: ");
  modelica_string tmp544;
  modelica_metatype tmpMeta545;
  static int tmp546 = 0;
  if(!tmp546)
  {
    tmp541 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[401]] /* pump.heatPort.T variable */),1.0);
    tmp542 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[401]] /* pump.heatPort.T variable */),1e4);
    if(!(tmp541 && tmp542))
    {
      tmp544 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[401]] /* pump.heatPort.T variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta545 = stringAppend(MMC_REFSTRINGLIT(tmp543),tmp544);
      {
        const char* assert_cond = "(pump.heatPort.T >= 1.0 and pump.heatPort.T <= 1e4)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/root/.openmodelica/libraries/Modelica 4.0.0+maint.om/Thermal/HeatTransfer/Interfaces/HeatPort.mo",3,3,3,38,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta545));
        } else {
          FILE_INFO info = {"/root/.openmodelica/libraries/Modelica 4.0.0+maint.om/Thermal/HeatTransfer/Interfaces/HeatPort.mo",3,3,3,38,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta545));
        }
      }
      tmp546 = 1;
    }
  }
  threadData->lastEquationSolved = 3231;
}

/*
equation index: 3232
type: ALGORITHM

  assert(pump.vol.dynBal.medium.T >= 1.0 and pump.vol.dynBal.medium.T <= 1e4, "Variable violating min/max constraint: 1.0 <= pump.vol.dynBal.medium.T <= 1e4, has value: " + String(pump.vol.dynBal.medium.T, "g"));
*/
void pump_v3_basicCold_t_eqFunction_3232(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3232};
  modelica_boolean tmp547;
  modelica_boolean tmp548;
  static const MMC_DEFSTRINGLIT(tmp549,90,"Variable violating min/max constraint: 1.0 <= pump.vol.dynBal.medium.T <= 1e4, has value: ");
  modelica_string tmp550;
  modelica_metatype tmpMeta551;
  static int tmp552 = 0;
  if(!tmp552)
  {
    tmp547 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[420]] /* pump.vol.dynBal.medium.T variable */),1.0);
    tmp548 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[420]] /* pump.vol.dynBal.medium.T variable */),1e4);
    if(!(tmp547 && tmp548))
    {
      tmp550 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[420]] /* pump.vol.dynBal.medium.T variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta551 = stringAppend(MMC_REFSTRINGLIT(tmp549),tmp550);
      {
        const char* assert_cond = "(pump.vol.dynBal.medium.T >= 1.0 and pump.vol.dynBal.medium.T <= 1e4)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/work/IDEAS-master/IDEAS/Media/Water.mo",22,5,25,30,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta551));
        } else {
          FILE_INFO info = {"/work/IDEAS-master/IDEAS/Media/Water.mo",22,5,25,30,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta551));
        }
      }
      tmp552 = 1;
    }
  }
  threadData->lastEquationSolved = 3232;
}

/*
equation index: 3233
type: ALGORITHM

  assert(pump.vol.dynBal.ports_H_flow[1] >= -1e8 and pump.vol.dynBal.ports_H_flow[1] <= 1e8, "Variable violating min/max constraint: -1e8 <= pump.vol.dynBal.ports_H_flow[1] <= 1e8, has value: " + String(pump.vol.dynBal.ports_H_flow[1], "g"));
*/
void pump_v3_basicCold_t_eqFunction_3233(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3233};
  modelica_boolean tmp553;
  modelica_boolean tmp554;
  static const MMC_DEFSTRINGLIT(tmp555,98,"Variable violating min/max constraint: -1e8 <= pump.vol.dynBal.ports_H_flow[1] <= 1e8, has value: ");
  modelica_string tmp556;
  modelica_metatype tmpMeta557;
  static int tmp558 = 0;
  if(!tmp558)
  {
    tmp553 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[425]] /* pump.vol.dynBal.ports_H_flow[1] variable */),-1e8);
    tmp554 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[425]] /* pump.vol.dynBal.ports_H_flow[1] variable */),1e8);
    if(!(tmp553 && tmp554))
    {
      tmp556 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[425]] /* pump.vol.dynBal.ports_H_flow[1] variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta557 = stringAppend(MMC_REFSTRINGLIT(tmp555),tmp556);
      {
        const char* assert_cond = "(pump.vol.dynBal.ports_H_flow[1] >= -1e8 and pump.vol.dynBal.ports_H_flow[1] <= 1e8)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/work/IDEAS-master/IDEAS/Fluid/Interfaces/ConservationEquation.mo",128,3,128,47,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta557));
        } else {
          FILE_INFO info = {"/work/IDEAS-master/IDEAS/Fluid/Interfaces/ConservationEquation.mo",128,3,128,47,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta557));
        }
      }
      tmp558 = 1;
    }
  }
  threadData->lastEquationSolved = 3233;
}

/*
equation index: 3234
type: ALGORITHM

  assert(pump.vol.dynBal.ports_H_flow[2] >= -1e8 and pump.vol.dynBal.ports_H_flow[2] <= 1e8, "Variable violating min/max constraint: -1e8 <= pump.vol.dynBal.ports_H_flow[2] <= 1e8, has value: " + String(pump.vol.dynBal.ports_H_flow[2], "g"));
*/
void pump_v3_basicCold_t_eqFunction_3234(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3234};
  modelica_boolean tmp559;
  modelica_boolean tmp560;
  static const MMC_DEFSTRINGLIT(tmp561,98,"Variable violating min/max constraint: -1e8 <= pump.vol.dynBal.ports_H_flow[2] <= 1e8, has value: ");
  modelica_string tmp562;
  modelica_metatype tmpMeta563;
  static int tmp564 = 0;
  if(!tmp564)
  {
    tmp559 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[426]] /* pump.vol.dynBal.ports_H_flow[2] variable */),-1e8);
    tmp560 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[426]] /* pump.vol.dynBal.ports_H_flow[2] variable */),1e8);
    if(!(tmp559 && tmp560))
    {
      tmp562 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[426]] /* pump.vol.dynBal.ports_H_flow[2] variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta563 = stringAppend(MMC_REFSTRINGLIT(tmp561),tmp562);
      {
        const char* assert_cond = "(pump.vol.dynBal.ports_H_flow[2] >= -1e8 and pump.vol.dynBal.ports_H_flow[2] <= 1e8)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/work/IDEAS-master/IDEAS/Fluid/Interfaces/ConservationEquation.mo",128,3,128,47,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta563));
        } else {
          FILE_INFO info = {"/work/IDEAS-master/IDEAS/Fluid/Interfaces/ConservationEquation.mo",128,3,128,47,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta563));
        }
      }
      tmp564 = 1;
    }
  }
  threadData->lastEquationSolved = 3234;
}

/*
equation index: 3235
type: ALGORITHM

  assert(pump.motSpe.y >= 0.0 and pump.motSpe.y <= 1e5, "Variable violating min/max constraint: 0.0 <= pump.motSpe.y <= 1e5, has value: " + String(pump.motSpe.y, "g"));
*/
void pump_v3_basicCold_t_eqFunction_3235(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3235};
  modelica_boolean tmp565;
  modelica_boolean tmp566;
  static const MMC_DEFSTRINGLIT(tmp567,79,"Variable violating min/max constraint: 0.0 <= pump.motSpe.y <= 1e5, has value: ");
  modelica_string tmp568;
  modelica_metatype tmpMeta569;
  static int tmp570 = 0;
  if(!tmp570)
  {
    tmp565 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[17]] /* pump.motSpe.y STATE(1) */),0.0);
    tmp566 = LessEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[17]] /* pump.motSpe.y STATE(1) */),1e5);
    if(!(tmp565 && tmp566))
    {
      tmp568 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[17]] /* pump.motSpe.y STATE(1) */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta569 = stringAppend(MMC_REFSTRINGLIT(tmp567),tmp568);
      {
        const char* assert_cond = "(pump.motSpe.y >= 0.0 and pump.motSpe.y <= 1e5)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/root/.openmodelica/libraries/Modelica 4.0.0+maint.om/Blocks/Interfaces.mo",329,5,330,56,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta569));
        } else {
          FILE_INFO info = {"/root/.openmodelica/libraries/Modelica 4.0.0+maint.om/Blocks/Interfaces.mo",329,5,330,56,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta569));
        }
      }
      tmp570 = 1;
    }
  }
  threadData->lastEquationSolved = 3235;
}

/*
equation index: 3236
type: ALGORITHM

  assert(pump.heaDis.etaHyd >= 0.0, "Variable violating min constraint: 0.0 <= pump.heaDis.etaHyd, has value: " + String(pump.heaDis.etaHyd, "g"));
*/
void pump_v3_basicCold_t_eqFunction_3236(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3236};
  modelica_boolean tmp571;
  static const MMC_DEFSTRINGLIT(tmp572,73,"Variable violating min constraint: 0.0 <= pump.heaDis.etaHyd, has value: ");
  modelica_string tmp573;
  modelica_metatype tmpMeta574;
  static int tmp575 = 0;
  if(!tmp575)
  {
    tmp571 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[400]] /* pump.heaDis.etaHyd variable */),0.0);
    if(!tmp571)
    {
      tmp573 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[400]] /* pump.heaDis.etaHyd variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta574 = stringAppend(MMC_REFSTRINGLIT(tmp572),tmp573);
      {
        const char* assert_cond = "(pump.heaDis.etaHyd >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/work/IDEAS-master/IDEAS/Fluid/Movers/BaseClasses/PowerInterface.mo",46,3,47,27,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta574));
        } else {
          FILE_INFO info = {"/work/IDEAS-master/IDEAS/Fluid/Movers/BaseClasses/PowerInterface.mo",46,3,47,27,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta574));
        }
      }
      tmp575 = 1;
    }
  }
  threadData->lastEquationSolved = 3236;
}

/*
equation index: 3237
type: ALGORITHM

  assert(pump.eff.yMot >= 0.0, "Variable violating min constraint: 0.0 <= pump.eff.yMot, has value: " + String(pump.eff.yMot, "g"));
*/
void pump_v3_basicCold_t_eqFunction_3237(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3237};
  modelica_boolean tmp576;
  static const MMC_DEFSTRINGLIT(tmp577,68,"Variable violating min constraint: 0.0 <= pump.eff.yMot, has value: ");
  modelica_string tmp578;
  modelica_metatype tmpMeta579;
  static int tmp580 = 0;
  if(!tmp580)
  {
    tmp576 = GreaterEq((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[397]] /* pump.eff.yMot variable */),0.0);
    if(!tmp576)
    {
      tmp578 = modelica_real_to_modelica_string_format((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[397]] /* pump.eff.yMot variable */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta579 = stringAppend(MMC_REFSTRINGLIT(tmp577),tmp578);
      {
        const char* assert_cond = "(pump.eff.yMot >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"/work/IDEAS-master/IDEAS/Fluid/Movers/BaseClasses/FlowMachineInterface.mo",311,3,315,28,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta579));
        } else {
          FILE_INFO info = {"/work/IDEAS-master/IDEAS/Fluid/Movers/BaseClasses/FlowMachineInterface.mo",311,3,315,28,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta579));
        }
      }
      tmp580 = 1;
    }
  }
  threadData->lastEquationSolved = 3237;
}
/* function to check assert after a step is done */
OMC_DISABLE_OPT
int pump_v3_basicCold_t_checkForAsserts(DATA *data, threadData_t *threadData)
{
  static void (*const eqFunctions[101])(DATA*, threadData_t*) = {
    pump_v3_basicCold_t_eqFunction_3137,
    pump_v3_basicCold_t_eqFunction_3138,
    pump_v3_basicCold_t_eqFunction_3139,
    pump_v3_basicCold_t_eqFunction_3140,
    pump_v3_basicCold_t_eqFunction_3141,
    pump_v3_basicCold_t_eqFunction_3142,
    pump_v3_basicCold_t_eqFunction_3143,
    pump_v3_basicCold_t_eqFunction_3144,
    pump_v3_basicCold_t_eqFunction_3145,
    pump_v3_basicCold_t_eqFunction_3146,
    pump_v3_basicCold_t_eqFunction_3147,
    pump_v3_basicCold_t_eqFunction_3148,
    pump_v3_basicCold_t_eqFunction_3149,
    pump_v3_basicCold_t_eqFunction_3150,
    pump_v3_basicCold_t_eqFunction_3151,
    pump_v3_basicCold_t_eqFunction_3152,
    pump_v3_basicCold_t_eqFunction_3153,
    pump_v3_basicCold_t_eqFunction_3154,
    pump_v3_basicCold_t_eqFunction_3155,
    pump_v3_basicCold_t_eqFunction_3156,
    pump_v3_basicCold_t_eqFunction_3157,
    pump_v3_basicCold_t_eqFunction_3158,
    pump_v3_basicCold_t_eqFunction_3159,
    pump_v3_basicCold_t_eqFunction_3160,
    pump_v3_basicCold_t_eqFunction_3161,
    pump_v3_basicCold_t_eqFunction_3162,
    pump_v3_basicCold_t_eqFunction_3163,
    pump_v3_basicCold_t_eqFunction_3164,
    pump_v3_basicCold_t_eqFunction_3165,
    pump_v3_basicCold_t_eqFunction_3166,
    pump_v3_basicCold_t_eqFunction_3167,
    pump_v3_basicCold_t_eqFunction_3168,
    pump_v3_basicCold_t_eqFunction_3169,
    pump_v3_basicCold_t_eqFunction_3170,
    pump_v3_basicCold_t_eqFunction_3171,
    pump_v3_basicCold_t_eqFunction_3172,
    pump_v3_basicCold_t_eqFunction_3173,
    pump_v3_basicCold_t_eqFunction_3174,
    pump_v3_basicCold_t_eqFunction_3175,
    pump_v3_basicCold_t_eqFunction_3176,
    pump_v3_basicCold_t_eqFunction_3177,
    pump_v3_basicCold_t_eqFunction_3178,
    pump_v3_basicCold_t_eqFunction_3179,
    pump_v3_basicCold_t_eqFunction_3180,
    pump_v3_basicCold_t_eqFunction_3181,
    pump_v3_basicCold_t_eqFunction_3182,
    pump_v3_basicCold_t_eqFunction_3183,
    pump_v3_basicCold_t_eqFunction_3184,
    pump_v3_basicCold_t_eqFunction_3185,
    pump_v3_basicCold_t_eqFunction_3186,
    pump_v3_basicCold_t_eqFunction_3187,
    pump_v3_basicCold_t_eqFunction_3188,
    pump_v3_basicCold_t_eqFunction_3189,
    pump_v3_basicCold_t_eqFunction_3190,
    pump_v3_basicCold_t_eqFunction_3191,
    pump_v3_basicCold_t_eqFunction_3192,
    pump_v3_basicCold_t_eqFunction_3193,
    pump_v3_basicCold_t_eqFunction_3194,
    pump_v3_basicCold_t_eqFunction_3195,
    pump_v3_basicCold_t_eqFunction_3196,
    pump_v3_basicCold_t_eqFunction_3197,
    pump_v3_basicCold_t_eqFunction_3198,
    pump_v3_basicCold_t_eqFunction_3199,
    pump_v3_basicCold_t_eqFunction_3200,
    pump_v3_basicCold_t_eqFunction_3201,
    pump_v3_basicCold_t_eqFunction_3202,
    pump_v3_basicCold_t_eqFunction_3203,
    pump_v3_basicCold_t_eqFunction_3204,
    pump_v3_basicCold_t_eqFunction_3205,
    pump_v3_basicCold_t_eqFunction_3206,
    pump_v3_basicCold_t_eqFunction_3207,
    pump_v3_basicCold_t_eqFunction_3208,
    pump_v3_basicCold_t_eqFunction_3209,
    pump_v3_basicCold_t_eqFunction_3210,
    pump_v3_basicCold_t_eqFunction_3211,
    pump_v3_basicCold_t_eqFunction_3212,
    pump_v3_basicCold_t_eqFunction_3213,
    pump_v3_basicCold_t_eqFunction_3214,
    pump_v3_basicCold_t_eqFunction_3215,
    pump_v3_basicCold_t_eqFunction_3216,
    pump_v3_basicCold_t_eqFunction_3217,
    pump_v3_basicCold_t_eqFunction_3218,
    pump_v3_basicCold_t_eqFunction_3219,
    pump_v3_basicCold_t_eqFunction_3220,
    pump_v3_basicCold_t_eqFunction_3221,
    pump_v3_basicCold_t_eqFunction_3222,
    pump_v3_basicCold_t_eqFunction_3223,
    pump_v3_basicCold_t_eqFunction_3224,
    pump_v3_basicCold_t_eqFunction_3225,
    pump_v3_basicCold_t_eqFunction_3226,
    pump_v3_basicCold_t_eqFunction_3227,
    pump_v3_basicCold_t_eqFunction_3228,
    pump_v3_basicCold_t_eqFunction_3229,
    pump_v3_basicCold_t_eqFunction_3230,
    pump_v3_basicCold_t_eqFunction_3231,
    pump_v3_basicCold_t_eqFunction_3232,
    pump_v3_basicCold_t_eqFunction_3233,
    pump_v3_basicCold_t_eqFunction_3234,
    pump_v3_basicCold_t_eqFunction_3235,
    pump_v3_basicCold_t_eqFunction_3236,
    pump_v3_basicCold_t_eqFunction_3237
  };
  
  for (int id = 0; id < 101; id++) {
    eqFunctions[id](data, threadData);
  }
  
  return 0;
}

#if defined(__cplusplus)
}
#endif
