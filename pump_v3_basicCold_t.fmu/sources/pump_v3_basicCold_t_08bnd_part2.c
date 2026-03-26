#include "pump_v3_basicCold_t_model.h"
#if defined(__cplusplus)
extern "C" {
#endif

/*
equation index: 2773
type: ALGORITHM

  assert(plugFlowPipe2.senMasFlo.m_flow_small >= 0.0, "Variable violating min constraint: 0.0 <= plugFlowPipe2.senMasFlo.m_flow_small, has value: " + String(plugFlowPipe2.senMasFlo.m_flow_small, "g"));
*/
OMC_DISABLE_OPT
static void pump_v3_basicCold_t_eqFunction_2773(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2773};
  modelica_boolean tmp1549;
  static const MMC_DEFSTRINGLIT(tmp1550,91,"Variable violating min constraint: 0.0 <= plugFlowPipe2.senMasFlo.m_flow_small, has value: ");
  modelica_string tmp1551;
  modelica_metatype tmpMeta1552;
  static int tmp1553 = 0;
  if(!tmp1553)
  {
    tmp1549 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[465]] /* plugFlowPipe2.senMasFlo.m_flow_small PARAM */),0.0);
    if(!tmp1549)
    {
      tmp1551 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[465]] /* plugFlowPipe2.senMasFlo.m_flow_small PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta1552 = stringAppend(MMC_REFSTRINGLIT(tmp1550),tmp1551);
      {
        const char* assert_cond = "(plugFlowPipe2.senMasFlo.m_flow_small >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"E:/Daniel/sgi digital twin/Modelica/IDEAS-master/IDEAS/Fluid/Sensors/BaseClasses/PartialFlowSensor.mo",8,3,11,40,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1552));
        } else {
          FILE_INFO info = {"E:/Daniel/sgi digital twin/Modelica/IDEAS-master/IDEAS/Fluid/Sensors/BaseClasses/PartialFlowSensor.mo",8,3,11,40,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1552));
        }
      }
      tmp1553 = 1;
    }
  }
  threadData->lastEquationSolved = 2773;
}

/*
equation index: 2774
type: ALGORITHM

  assert(plugFlowPipe2.senMasFlo.m_flow_nominal >= 0.0, "Variable violating min constraint: 0.0 <= plugFlowPipe2.senMasFlo.m_flow_nominal, has value: " + String(plugFlowPipe2.senMasFlo.m_flow_nominal, "g"));
*/
OMC_DISABLE_OPT
static void pump_v3_basicCold_t_eqFunction_2774(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2774};
  modelica_boolean tmp1554;
  static const MMC_DEFSTRINGLIT(tmp1555,93,"Variable violating min constraint: 0.0 <= plugFlowPipe2.senMasFlo.m_flow_nominal, has value: ");
  modelica_string tmp1556;
  modelica_metatype tmpMeta1557;
  static int tmp1558 = 0;
  if(!tmp1558)
  {
    tmp1554 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[464]] /* plugFlowPipe2.senMasFlo.m_flow_nominal PARAM */),0.0);
    if(!tmp1554)
    {
      tmp1556 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[464]] /* plugFlowPipe2.senMasFlo.m_flow_nominal PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta1557 = stringAppend(MMC_REFSTRINGLIT(tmp1555),tmp1556);
      {
        const char* assert_cond = "(plugFlowPipe2.senMasFlo.m_flow_nominal >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"E:/Daniel/sgi digital twin/Modelica/IDEAS-master/IDEAS/Fluid/Sensors/BaseClasses/PartialFlowSensor.mo",5,3,7,51,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1557));
        } else {
          FILE_INFO info = {"E:/Daniel/sgi digital twin/Modelica/IDEAS-master/IDEAS/Fluid/Sensors/BaseClasses/PartialFlowSensor.mo",5,3,7,51,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1557));
        }
      }
      tmp1558 = 1;
    }
  }
  threadData->lastEquationSolved = 2774;
}

/*
equation index: 2775
type: ALGORITHM

  assert(plugFlowPipe2.heaLos_b.sta_default.p >= 0.0 and plugFlowPipe2.heaLos_b.sta_default.p <= 1e8, "Variable violating min/max constraint: 0.0 <= plugFlowPipe2.heaLos_b.sta_default.p <= 1e8, has value: " + String(plugFlowPipe2.heaLos_b.sta_default.p, "g"));
*/
OMC_DISABLE_OPT
static void pump_v3_basicCold_t_eqFunction_2775(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2775};
  modelica_boolean tmp1559;
  modelica_boolean tmp1560;
  static const MMC_DEFSTRINGLIT(tmp1561,102,"Variable violating min/max constraint: 0.0 <= plugFlowPipe2.heaLos_b.sta_default.p <= 1e8, has value: ");
  modelica_string tmp1562;
  modelica_metatype tmpMeta1563;
  static int tmp1564 = 0;
  if(!tmp1564)
  {
    tmp1559 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[426]] /* plugFlowPipe2.heaLos_b.sta_default.p PARAM */),0.0);
    tmp1560 = LessEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[426]] /* plugFlowPipe2.heaLos_b.sta_default.p PARAM */),1e8);
    if(!(tmp1559 && tmp1560))
    {
      tmp1562 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[426]] /* plugFlowPipe2.heaLos_b.sta_default.p PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta1563 = stringAppend(MMC_REFSTRINGLIT(tmp1561),tmp1562);
      {
        const char* assert_cond = "(plugFlowPipe2.heaLos_b.sta_default.p >= 0.0 and plugFlowPipe2.heaLos_b.sta_default.p <= 1e8)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/Daniel/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Media/package.mo",5869,7,5869,55,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1563));
        } else {
          FILE_INFO info = {"C:/Users/Daniel/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Media/package.mo",5869,7,5869,55,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1563));
        }
      }
      tmp1564 = 1;
    }
  }
  threadData->lastEquationSolved = 2775;
}

/*
equation index: 2776
type: ALGORITHM

  assert(plugFlowPipe2.heaLos_b.sta_default.T >= 1.0 and plugFlowPipe2.heaLos_b.sta_default.T <= 1e4, "Variable violating min/max constraint: 1.0 <= plugFlowPipe2.heaLos_b.sta_default.T <= 1e4, has value: " + String(plugFlowPipe2.heaLos_b.sta_default.T, "g"));
*/
OMC_DISABLE_OPT
static void pump_v3_basicCold_t_eqFunction_2776(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2776};
  modelica_boolean tmp1565;
  modelica_boolean tmp1566;
  static const MMC_DEFSTRINGLIT(tmp1567,102,"Variable violating min/max constraint: 1.0 <= plugFlowPipe2.heaLos_b.sta_default.T <= 1e4, has value: ");
  modelica_string tmp1568;
  modelica_metatype tmpMeta1569;
  static int tmp1570 = 0;
  if(!tmp1570)
  {
    tmp1565 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[425]] /* plugFlowPipe2.heaLos_b.sta_default.T PARAM */),1.0);
    tmp1566 = LessEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[425]] /* plugFlowPipe2.heaLos_b.sta_default.T PARAM */),1e4);
    if(!(tmp1565 && tmp1566))
    {
      tmp1568 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[425]] /* plugFlowPipe2.heaLos_b.sta_default.T PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta1569 = stringAppend(MMC_REFSTRINGLIT(tmp1567),tmp1568);
      {
        const char* assert_cond = "(plugFlowPipe2.heaLos_b.sta_default.T >= 1.0 and plugFlowPipe2.heaLos_b.sta_default.T <= 1e4)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/Daniel/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Media/package.mo",5870,7,5870,44,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1569));
        } else {
          FILE_INFO info = {"C:/Users/Daniel/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Media/package.mo",5870,7,5870,44,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1569));
        }
      }
      tmp1570 = 1;
    }
  }
  threadData->lastEquationSolved = 2776;
}

/*
equation index: 2777
type: ALGORITHM

  assert(plugFlowPipe2.heaLos_b.T_start >= 0.0, "Variable violating min constraint: 0.0 <= plugFlowPipe2.heaLos_b.T_start, has value: " + String(plugFlowPipe2.heaLos_b.T_start, "g"));
*/
OMC_DISABLE_OPT
static void pump_v3_basicCold_t_eqFunction_2777(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2777};
  modelica_boolean tmp1571;
  static const MMC_DEFSTRINGLIT(tmp1572,85,"Variable violating min constraint: 0.0 <= plugFlowPipe2.heaLos_b.T_start, has value: ");
  modelica_string tmp1573;
  modelica_metatype tmpMeta1574;
  static int tmp1575 = 0;
  if(!tmp1575)
  {
    tmp1571 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[417]] /* plugFlowPipe2.heaLos_b.T_start PARAM */),0.0);
    if(!tmp1571)
    {
      tmp1573 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[417]] /* plugFlowPipe2.heaLos_b.T_start PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta1574 = stringAppend(MMC_REFSTRINGLIT(tmp1572),tmp1573);
      {
        const char* assert_cond = "(plugFlowPipe2.heaLos_b.T_start >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"E:/Daniel/sgi digital twin/Modelica/IDEAS-master/IDEAS/Fluid/FixedResistances/BaseClasses/PlugFlowHeatLoss.mo",16,3,16,79,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1574));
        } else {
          FILE_INFO info = {"E:/Daniel/sgi digital twin/Modelica/IDEAS-master/IDEAS/Fluid/FixedResistances/BaseClasses/PlugFlowHeatLoss.mo",16,3,16,79,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1574));
        }
      }
      tmp1575 = 1;
    }
  }
  threadData->lastEquationSolved = 2777;
}

/*
equation index: 2778
type: ALGORITHM

  assert(plugFlowPipe2.m_flow_small >= 0.0, "Variable violating min constraint: 0.0 <= plugFlowPipe2.m_flow_small, has value: " + String(plugFlowPipe2.m_flow_small, "g"));
*/
OMC_DISABLE_OPT
static void pump_v3_basicCold_t_eqFunction_2778(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2778};
  modelica_boolean tmp1576;
  static const MMC_DEFSTRINGLIT(tmp1577,81,"Variable violating min constraint: 0.0 <= plugFlowPipe2.m_flow_small, has value: ");
  modelica_string tmp1578;
  modelica_metatype tmpMeta1579;
  static int tmp1580 = 0;
  if(!tmp1580)
  {
    tmp1576 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[431]] /* plugFlowPipe2.m_flow_small PARAM */),0.0);
    if(!tmp1576)
    {
      tmp1578 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[431]] /* plugFlowPipe2.m_flow_small PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta1579 = stringAppend(MMC_REFSTRINGLIT(tmp1577),tmp1578);
      {
        const char* assert_cond = "(plugFlowPipe2.m_flow_small >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"E:/Daniel/sgi digital twin/Modelica/IDEAS-master/IDEAS/Fluid/Interfaces/PartialTwoPortInterface.mo",10,3,12,40,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1579));
        } else {
          FILE_INFO info = {"E:/Daniel/sgi digital twin/Modelica/IDEAS-master/IDEAS/Fluid/Interfaces/PartialTwoPortInterface.mo",10,3,12,40,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1579));
        }
      }
      tmp1580 = 1;
    }
  }
  threadData->lastEquationSolved = 2778;
}

/*
equation index: 2779
type: ALGORITHM

  assert(plugFlowPipe2.heaLos_b.m_flow_small >= -1e5 and plugFlowPipe2.heaLos_b.m_flow_small <= 1e5, "Variable violating min/max constraint: -1e5 <= plugFlowPipe2.heaLos_b.m_flow_small <= 1e5, has value: " + String(plugFlowPipe2.heaLos_b.m_flow_small, "g"));
*/
OMC_DISABLE_OPT
static void pump_v3_basicCold_t_eqFunction_2779(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2779};
  modelica_boolean tmp1581;
  modelica_boolean tmp1582;
  static const MMC_DEFSTRINGLIT(tmp1583,102,"Variable violating min/max constraint: -1e5 <= plugFlowPipe2.heaLos_b.m_flow_small <= 1e5, has value: ");
  modelica_string tmp1584;
  modelica_metatype tmpMeta1585;
  static int tmp1586 = 0;
  if(!tmp1586)
  {
    tmp1581 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[421]] /* plugFlowPipe2.heaLos_b.m_flow_small PARAM */),-1e5);
    tmp1582 = LessEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[421]] /* plugFlowPipe2.heaLos_b.m_flow_small PARAM */),1e5);
    if(!(tmp1581 && tmp1582))
    {
      tmp1584 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[421]] /* plugFlowPipe2.heaLos_b.m_flow_small PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta1585 = stringAppend(MMC_REFSTRINGLIT(tmp1583),tmp1584);
      {
        const char* assert_cond = "(plugFlowPipe2.heaLos_b.m_flow_small >= -1e5 and plugFlowPipe2.heaLos_b.m_flow_small <= 1e5)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"E:/Daniel/sgi digital twin/Modelica/IDEAS-master/IDEAS/Fluid/Interfaces/PartialTwoPortTransport.mo",17,3,19,41,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1585));
        } else {
          FILE_INFO info = {"E:/Daniel/sgi digital twin/Modelica/IDEAS-master/IDEAS/Fluid/Interfaces/PartialTwoPortTransport.mo",17,3,19,41,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1585));
        }
      }
      tmp1586 = 1;
    }
  }
  threadData->lastEquationSolved = 2779;
}

/*
equation index: 2780
type: ALGORITHM

  assert(plugFlowPipe2.heaLos_b.m_flow_start >= -1e5 and plugFlowPipe2.heaLos_b.m_flow_start <= 1e5, "Variable violating min/max constraint: -1e5 <= plugFlowPipe2.heaLos_b.m_flow_start <= 1e5, has value: " + String(plugFlowPipe2.heaLos_b.m_flow_start, "g"));
*/
OMC_DISABLE_OPT
static void pump_v3_basicCold_t_eqFunction_2780(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2780};
  modelica_boolean tmp1587;
  modelica_boolean tmp1588;
  static const MMC_DEFSTRINGLIT(tmp1589,102,"Variable violating min/max constraint: -1e5 <= plugFlowPipe2.heaLos_b.m_flow_start <= 1e5, has value: ");
  modelica_string tmp1590;
  modelica_metatype tmpMeta1591;
  static int tmp1592 = 0;
  if(!tmp1592)
  {
    tmp1587 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[422]] /* plugFlowPipe2.heaLos_b.m_flow_start PARAM */),-1e5);
    tmp1588 = LessEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[422]] /* plugFlowPipe2.heaLos_b.m_flow_start PARAM */),1e5);
    if(!(tmp1587 && tmp1588))
    {
      tmp1590 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[422]] /* plugFlowPipe2.heaLos_b.m_flow_start PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta1591 = stringAppend(MMC_REFSTRINGLIT(tmp1589),tmp1590);
      {
        const char* assert_cond = "(plugFlowPipe2.heaLos_b.m_flow_start >= -1e5 and plugFlowPipe2.heaLos_b.m_flow_start <= 1e5)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"E:/Daniel/sgi digital twin/Modelica/IDEAS-master/IDEAS/Fluid/Interfaces/PartialTwoPortTransport.mo",12,3,14,41,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1591));
        } else {
          FILE_INFO info = {"E:/Daniel/sgi digital twin/Modelica/IDEAS-master/IDEAS/Fluid/Interfaces/PartialTwoPortTransport.mo",12,3,14,41,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1591));
        }
      }
      tmp1592 = 1;
    }
  }
  threadData->lastEquationSolved = 2780;
}

/*
equation index: 2781
type: ALGORITHM

  assert(plugFlowPipe2.heaLos_a.sta_default.p >= 0.0 and plugFlowPipe2.heaLos_a.sta_default.p <= 1e8, "Variable violating min/max constraint: 0.0 <= plugFlowPipe2.heaLos_a.sta_default.p <= 1e8, has value: " + String(plugFlowPipe2.heaLos_a.sta_default.p, "g"));
*/
OMC_DISABLE_OPT
static void pump_v3_basicCold_t_eqFunction_2781(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2781};
  modelica_boolean tmp1593;
  modelica_boolean tmp1594;
  static const MMC_DEFSTRINGLIT(tmp1595,102,"Variable violating min/max constraint: 0.0 <= plugFlowPipe2.heaLos_a.sta_default.p <= 1e8, has value: ");
  modelica_string tmp1596;
  modelica_metatype tmpMeta1597;
  static int tmp1598 = 0;
  if(!tmp1598)
  {
    tmp1593 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[413]] /* plugFlowPipe2.heaLos_a.sta_default.p PARAM */),0.0);
    tmp1594 = LessEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[413]] /* plugFlowPipe2.heaLos_a.sta_default.p PARAM */),1e8);
    if(!(tmp1593 && tmp1594))
    {
      tmp1596 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[413]] /* plugFlowPipe2.heaLos_a.sta_default.p PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta1597 = stringAppend(MMC_REFSTRINGLIT(tmp1595),tmp1596);
      {
        const char* assert_cond = "(plugFlowPipe2.heaLos_a.sta_default.p >= 0.0 and plugFlowPipe2.heaLos_a.sta_default.p <= 1e8)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/Daniel/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Media/package.mo",5869,7,5869,55,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1597));
        } else {
          FILE_INFO info = {"C:/Users/Daniel/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Media/package.mo",5869,7,5869,55,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1597));
        }
      }
      tmp1598 = 1;
    }
  }
  threadData->lastEquationSolved = 2781;
}

/*
equation index: 2782
type: ALGORITHM

  assert(plugFlowPipe2.heaLos_a.sta_default.T >= 1.0 and plugFlowPipe2.heaLos_a.sta_default.T <= 1e4, "Variable violating min/max constraint: 1.0 <= plugFlowPipe2.heaLos_a.sta_default.T <= 1e4, has value: " + String(plugFlowPipe2.heaLos_a.sta_default.T, "g"));
*/
OMC_DISABLE_OPT
static void pump_v3_basicCold_t_eqFunction_2782(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2782};
  modelica_boolean tmp1599;
  modelica_boolean tmp1600;
  static const MMC_DEFSTRINGLIT(tmp1601,102,"Variable violating min/max constraint: 1.0 <= plugFlowPipe2.heaLos_a.sta_default.T <= 1e4, has value: ");
  modelica_string tmp1602;
  modelica_metatype tmpMeta1603;
  static int tmp1604 = 0;
  if(!tmp1604)
  {
    tmp1599 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[412]] /* plugFlowPipe2.heaLos_a.sta_default.T PARAM */),1.0);
    tmp1600 = LessEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[412]] /* plugFlowPipe2.heaLos_a.sta_default.T PARAM */),1e4);
    if(!(tmp1599 && tmp1600))
    {
      tmp1602 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[412]] /* plugFlowPipe2.heaLos_a.sta_default.T PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta1603 = stringAppend(MMC_REFSTRINGLIT(tmp1601),tmp1602);
      {
        const char* assert_cond = "(plugFlowPipe2.heaLos_a.sta_default.T >= 1.0 and plugFlowPipe2.heaLos_a.sta_default.T <= 1e4)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/Daniel/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Media/package.mo",5870,7,5870,44,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1603));
        } else {
          FILE_INFO info = {"C:/Users/Daniel/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Media/package.mo",5870,7,5870,44,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1603));
        }
      }
      tmp1604 = 1;
    }
  }
  threadData->lastEquationSolved = 2782;
}

/*
equation index: 2783
type: ALGORITHM

  assert(plugFlowPipe2.T_start_in >= 0.0, "Variable violating min constraint: 0.0 <= plugFlowPipe2.T_start_in, has value: " + String(plugFlowPipe2.T_start_in, "g"));
*/
OMC_DISABLE_OPT
static void pump_v3_basicCold_t_eqFunction_2783(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2783};
  modelica_boolean tmp1605;
  static const MMC_DEFSTRINGLIT(tmp1606,79,"Variable violating min constraint: 0.0 <= plugFlowPipe2.T_start_in, has value: ");
  modelica_string tmp1607;
  modelica_metatype tmpMeta1608;
  static int tmp1609 = 0;
  if(!tmp1609)
  {
    tmp1605 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[384]] /* plugFlowPipe2.T_start_in PARAM */),0.0);
    if(!tmp1605)
    {
      tmp1607 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[384]] /* plugFlowPipe2.T_start_in PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta1608 = stringAppend(MMC_REFSTRINGLIT(tmp1606),tmp1607);
      {
        const char* assert_cond = "(plugFlowPipe2.T_start_in >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"E:/Daniel/sgi digital twin/Modelica/IDEAS-master/IDEAS/Fluid/FixedResistances/BaseClasses/PlugFlowPipe.mo",61,3,63,46,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1608));
        } else {
          FILE_INFO info = {"E:/Daniel/sgi digital twin/Modelica/IDEAS-master/IDEAS/Fluid/FixedResistances/BaseClasses/PlugFlowPipe.mo",61,3,63,46,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1608));
        }
      }
      tmp1609 = 1;
    }
  }
  threadData->lastEquationSolved = 2783;
}

/*
equation index: 2784
type: ALGORITHM

  assert(plugFlowPipe2.heaLos_a.T_start >= 0.0, "Variable violating min constraint: 0.0 <= plugFlowPipe2.heaLos_a.T_start, has value: " + String(plugFlowPipe2.heaLos_a.T_start, "g"));
*/
OMC_DISABLE_OPT
static void pump_v3_basicCold_t_eqFunction_2784(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2784};
  modelica_boolean tmp1610;
  static const MMC_DEFSTRINGLIT(tmp1611,85,"Variable violating min constraint: 0.0 <= plugFlowPipe2.heaLos_a.T_start, has value: ");
  modelica_string tmp1612;
  modelica_metatype tmpMeta1613;
  static int tmp1614 = 0;
  if(!tmp1614)
  {
    tmp1610 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[406]] /* plugFlowPipe2.heaLos_a.T_start PARAM */),0.0);
    if(!tmp1610)
    {
      tmp1612 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[406]] /* plugFlowPipe2.heaLos_a.T_start PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta1613 = stringAppend(MMC_REFSTRINGLIT(tmp1611),tmp1612);
      {
        const char* assert_cond = "(plugFlowPipe2.heaLos_a.T_start >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"E:/Daniel/sgi digital twin/Modelica/IDEAS-master/IDEAS/Fluid/FixedResistances/BaseClasses/PlugFlowHeatLoss.mo",16,3,16,79,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1613));
        } else {
          FILE_INFO info = {"E:/Daniel/sgi digital twin/Modelica/IDEAS-master/IDEAS/Fluid/FixedResistances/BaseClasses/PlugFlowHeatLoss.mo",16,3,16,79,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1613));
        }
      }
      tmp1614 = 1;
    }
  }
  threadData->lastEquationSolved = 2784;
}

/*
equation index: 2785
type: ALGORITHM

  assert(plugFlowPipe2.heaLos_a.m_flow_small >= -1e5 and plugFlowPipe2.heaLos_a.m_flow_small <= 1e5, "Variable violating min/max constraint: -1e5 <= plugFlowPipe2.heaLos_a.m_flow_small <= 1e5, has value: " + String(plugFlowPipe2.heaLos_a.m_flow_small, "g"));
*/
OMC_DISABLE_OPT
static void pump_v3_basicCold_t_eqFunction_2785(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2785};
  modelica_boolean tmp1615;
  modelica_boolean tmp1616;
  static const MMC_DEFSTRINGLIT(tmp1617,102,"Variable violating min/max constraint: -1e5 <= plugFlowPipe2.heaLos_a.m_flow_small <= 1e5, has value: ");
  modelica_string tmp1618;
  modelica_metatype tmpMeta1619;
  static int tmp1620 = 0;
  if(!tmp1620)
  {
    tmp1615 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[410]] /* plugFlowPipe2.heaLos_a.m_flow_small PARAM */),-1e5);
    tmp1616 = LessEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[410]] /* plugFlowPipe2.heaLos_a.m_flow_small PARAM */),1e5);
    if(!(tmp1615 && tmp1616))
    {
      tmp1618 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[410]] /* plugFlowPipe2.heaLos_a.m_flow_small PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta1619 = stringAppend(MMC_REFSTRINGLIT(tmp1617),tmp1618);
      {
        const char* assert_cond = "(plugFlowPipe2.heaLos_a.m_flow_small >= -1e5 and plugFlowPipe2.heaLos_a.m_flow_small <= 1e5)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"E:/Daniel/sgi digital twin/Modelica/IDEAS-master/IDEAS/Fluid/Interfaces/PartialTwoPortTransport.mo",17,3,19,41,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1619));
        } else {
          FILE_INFO info = {"E:/Daniel/sgi digital twin/Modelica/IDEAS-master/IDEAS/Fluid/Interfaces/PartialTwoPortTransport.mo",17,3,19,41,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1619));
        }
      }
      tmp1620 = 1;
    }
  }
  threadData->lastEquationSolved = 2785;
}

/*
equation index: 2786
type: ALGORITHM

  assert(plugFlowPipe2.heaLos_a.m_flow_start >= -1e5 and plugFlowPipe2.heaLos_a.m_flow_start <= 1e5, "Variable violating min/max constraint: -1e5 <= plugFlowPipe2.heaLos_a.m_flow_start <= 1e5, has value: " + String(plugFlowPipe2.heaLos_a.m_flow_start, "g"));
*/
OMC_DISABLE_OPT
static void pump_v3_basicCold_t_eqFunction_2786(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2786};
  modelica_boolean tmp1621;
  modelica_boolean tmp1622;
  static const MMC_DEFSTRINGLIT(tmp1623,102,"Variable violating min/max constraint: -1e5 <= plugFlowPipe2.heaLos_a.m_flow_start <= 1e5, has value: ");
  modelica_string tmp1624;
  modelica_metatype tmpMeta1625;
  static int tmp1626 = 0;
  if(!tmp1626)
  {
    tmp1621 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[411]] /* plugFlowPipe2.heaLos_a.m_flow_start PARAM */),-1e5);
    tmp1622 = LessEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[411]] /* plugFlowPipe2.heaLos_a.m_flow_start PARAM */),1e5);
    if(!(tmp1621 && tmp1622))
    {
      tmp1624 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[411]] /* plugFlowPipe2.heaLos_a.m_flow_start PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta1625 = stringAppend(MMC_REFSTRINGLIT(tmp1623),tmp1624);
      {
        const char* assert_cond = "(plugFlowPipe2.heaLos_a.m_flow_start >= -1e5 and plugFlowPipe2.heaLos_a.m_flow_start <= 1e5)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"E:/Daniel/sgi digital twin/Modelica/IDEAS-master/IDEAS/Fluid/Interfaces/PartialTwoPortTransport.mo",12,3,14,41,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1625));
        } else {
          FILE_INFO info = {"E:/Daniel/sgi digital twin/Modelica/IDEAS-master/IDEAS/Fluid/Interfaces/PartialTwoPortTransport.mo",12,3,14,41,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1625));
        }
      }
      tmp1626 = 1;
    }
  }
  threadData->lastEquationSolved = 2786;
}

/*
equation index: 2787
type: ALGORITHM

  assert(plugFlowPipe2.del.T_start_out >= 0.0, "Variable violating min constraint: 0.0 <= plugFlowPipe2.del.T_start_out, has value: " + String(plugFlowPipe2.del.T_start_out, "g"));
*/
OMC_DISABLE_OPT
static void pump_v3_basicCold_t_eqFunction_2787(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2787};
  modelica_boolean tmp1627;
  static const MMC_DEFSTRINGLIT(tmp1628,84,"Variable violating min constraint: 0.0 <= plugFlowPipe2.del.T_start_out, has value: ");
  modelica_string tmp1629;
  modelica_metatype tmpMeta1630;
  static int tmp1631 = 0;
  if(!tmp1631)
  {
    tmp1627 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[394]] /* plugFlowPipe2.del.T_start_out PARAM */),0.0);
    if(!tmp1627)
    {
      tmp1629 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[394]] /* plugFlowPipe2.del.T_start_out PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta1630 = stringAppend(MMC_REFSTRINGLIT(tmp1628),tmp1629);
      {
        const char* assert_cond = "(plugFlowPipe2.del.T_start_out >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"E:/Daniel/sgi digital twin/Modelica/IDEAS-master/IDEAS/Fluid/FixedResistances/BaseClasses/PlugFlow.mo",18,3,20,48,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1630));
        } else {
          FILE_INFO info = {"E:/Daniel/sgi digital twin/Modelica/IDEAS-master/IDEAS/Fluid/FixedResistances/BaseClasses/PlugFlow.mo",18,3,20,48,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1630));
        }
      }
      tmp1631 = 1;
    }
  }
  threadData->lastEquationSolved = 2787;
}

/*
equation index: 2788
type: ALGORITHM

  assert(plugFlowPipe2.del.T_start_in >= 0.0, "Variable violating min constraint: 0.0 <= plugFlowPipe2.del.T_start_in, has value: " + String(plugFlowPipe2.del.T_start_in, "g"));
*/
OMC_DISABLE_OPT
static void pump_v3_basicCold_t_eqFunction_2788(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2788};
  modelica_boolean tmp1632;
  static const MMC_DEFSTRINGLIT(tmp1633,83,"Variable violating min constraint: 0.0 <= plugFlowPipe2.del.T_start_in, has value: ");
  modelica_string tmp1634;
  modelica_metatype tmpMeta1635;
  static int tmp1636 = 0;
  if(!tmp1636)
  {
    tmp1632 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[393]] /* plugFlowPipe2.del.T_start_in PARAM */),0.0);
    if(!tmp1632)
    {
      tmp1634 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[393]] /* plugFlowPipe2.del.T_start_in PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta1635 = stringAppend(MMC_REFSTRINGLIT(tmp1633),tmp1634);
      {
        const char* assert_cond = "(plugFlowPipe2.del.T_start_in >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"E:/Daniel/sgi digital twin/Modelica/IDEAS-master/IDEAS/Fluid/FixedResistances/BaseClasses/PlugFlow.mo",15,3,17,48,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1635));
        } else {
          FILE_INFO info = {"E:/Daniel/sgi digital twin/Modelica/IDEAS-master/IDEAS/Fluid/FixedResistances/BaseClasses/PlugFlow.mo",15,3,17,48,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1635));
        }
      }
      tmp1636 = 1;
    }
  }
  threadData->lastEquationSolved = 2788;
}

/*
equation index: 2789
type: ALGORITHM

  assert(plugFlowPipe2.del.m_flow_small >= -1e5 and plugFlowPipe2.del.m_flow_small <= 1e5, "Variable violating min/max constraint: -1e5 <= plugFlowPipe2.del.m_flow_small <= 1e5, has value: " + String(plugFlowPipe2.del.m_flow_small, "g"));
*/
OMC_DISABLE_OPT
static void pump_v3_basicCold_t_eqFunction_2789(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2789};
  modelica_boolean tmp1637;
  modelica_boolean tmp1638;
  static const MMC_DEFSTRINGLIT(tmp1639,97,"Variable violating min/max constraint: -1e5 <= plugFlowPipe2.del.m_flow_small <= 1e5, has value: ");
  modelica_string tmp1640;
  modelica_metatype tmpMeta1641;
  static int tmp1642 = 0;
  if(!tmp1642)
  {
    tmp1637 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[399]] /* plugFlowPipe2.del.m_flow_small PARAM */),-1e5);
    tmp1638 = LessEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[399]] /* plugFlowPipe2.del.m_flow_small PARAM */),1e5);
    if(!(tmp1637 && tmp1638))
    {
      tmp1640 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[399]] /* plugFlowPipe2.del.m_flow_small PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta1641 = stringAppend(MMC_REFSTRINGLIT(tmp1639),tmp1640);
      {
        const char* assert_cond = "(plugFlowPipe2.del.m_flow_small >= -1e5 and plugFlowPipe2.del.m_flow_small <= 1e5)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"E:/Daniel/sgi digital twin/Modelica/IDEAS-master/IDEAS/Fluid/FixedResistances/BaseClasses/PlugFlow.mo",12,3,14,41,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1641));
        } else {
          FILE_INFO info = {"E:/Daniel/sgi digital twin/Modelica/IDEAS-master/IDEAS/Fluid/FixedResistances/BaseClasses/PlugFlow.mo",12,3,14,41,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1641));
        }
      }
      tmp1642 = 1;
    }
  }
  threadData->lastEquationSolved = 2789;
}

/*
equation index: 2790
type: ALGORITHM

  assert(plugFlowPipe2.del.length >= 0.0, "Variable violating min constraint: 0.0 <= plugFlowPipe2.del.length, has value: " + String(plugFlowPipe2.del.length, "g"));
*/
OMC_DISABLE_OPT
static void pump_v3_basicCold_t_eqFunction_2790(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2790};
  modelica_boolean tmp1643;
  static const MMC_DEFSTRINGLIT(tmp1644,79,"Variable violating min constraint: 0.0 <= plugFlowPipe2.del.length, has value: ");
  modelica_string tmp1645;
  modelica_metatype tmpMeta1646;
  static int tmp1647 = 0;
  if(!tmp1647)
  {
    tmp1643 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[398]] /* plugFlowPipe2.del.length PARAM */),0.0);
    if(!tmp1643)
    {
      tmp1645 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[398]] /* plugFlowPipe2.del.length PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta1646 = stringAppend(MMC_REFSTRINGLIT(tmp1644),tmp1645);
      {
        const char* assert_cond = "(plugFlowPipe2.del.length >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"E:/Daniel/sgi digital twin/Modelica/IDEAS-master/IDEAS/Fluid/FixedResistances/BaseClasses/PlugFlow.mo",8,3,8,65,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1646));
        } else {
          FILE_INFO info = {"E:/Daniel/sgi digital twin/Modelica/IDEAS-master/IDEAS/Fluid/FixedResistances/BaseClasses/PlugFlow.mo",8,3,8,65,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1646));
        }
      }
      tmp1647 = 1;
    }
  }
  threadData->lastEquationSolved = 2790;
}

/*
equation index: 2791
type: ALGORITHM

  assert(plugFlowPipe2.rho_default >= 0.0, "Variable violating min constraint: 0.0 <= plugFlowPipe2.rho_default, has value: " + String(plugFlowPipe2.rho_default, "g"));
*/
OMC_DISABLE_OPT
static void pump_v3_basicCold_t_eqFunction_2791(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2791};
  modelica_boolean tmp1648;
  static const MMC_DEFSTRINGLIT(tmp1649,80,"Variable violating min constraint: 0.0 <= plugFlowPipe2.rho_default, has value: ");
  modelica_string tmp1650;
  modelica_metatype tmpMeta1651;
  static int tmp1652 = 0;
  if(!tmp1652)
  {
    tmp1648 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[462]] /* plugFlowPipe2.rho_default PARAM */),0.0);
    if(!tmp1648)
    {
      tmp1650 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[462]] /* plugFlowPipe2.rho_default PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta1651 = stringAppend(MMC_REFSTRINGLIT(tmp1649),tmp1650);
      {
        const char* assert_cond = "(plugFlowPipe2.rho_default >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"E:/Daniel/sgi digital twin/Modelica/IDEAS-master/IDEAS/Fluid/FixedResistances/BaseClasses/PlugFlowPipe.mo",140,3,145,42,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1651));
        } else {
          FILE_INFO info = {"E:/Daniel/sgi digital twin/Modelica/IDEAS-master/IDEAS/Fluid/FixedResistances/BaseClasses/PlugFlowPipe.mo",140,3,145,42,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1651));
        }
      }
      tmp1652 = 1;
    }
  }
  threadData->lastEquationSolved = 2791;
}

/*
equation index: 2792
type: ALGORITHM

  assert(plugFlowPipe2.res.mu_default >= 0.0, "Variable violating min constraint: 0.0 <= plugFlowPipe2.res.mu_default, has value: " + String(plugFlowPipe2.res.mu_default, "g"));
*/
OMC_DISABLE_OPT
static void pump_v3_basicCold_t_eqFunction_2792(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2792};
  modelica_boolean tmp1653;
  static const MMC_DEFSTRINGLIT(tmp1654,83,"Variable violating min constraint: 0.0 <= plugFlowPipe2.res.mu_default, has value: ");
  modelica_string tmp1655;
  modelica_metatype tmpMeta1656;
  static int tmp1657 = 0;
  if(!tmp1657)
  {
    tmp1653 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[452]] /* plugFlowPipe2.res.mu_default PARAM */),0.0);
    if(!tmp1653)
    {
      tmp1655 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[452]] /* plugFlowPipe2.res.mu_default PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta1656 = stringAppend(MMC_REFSTRINGLIT(tmp1654),tmp1655);
      {
        const char* assert_cond = "(plugFlowPipe2.res.mu_default >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"E:/Daniel/sgi digital twin/Modelica/IDEAS-master/IDEAS/Fluid/FixedResistances/HydraulicDiameter.mo",62,3,64,45,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1656));
        } else {
          FILE_INFO info = {"E:/Daniel/sgi digital twin/Modelica/IDEAS-master/IDEAS/Fluid/FixedResistances/HydraulicDiameter.mo",62,3,64,45,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1656));
        }
      }
      tmp1657 = 1;
    }
  }
  threadData->lastEquationSolved = 2792;
}

/*
equation index: 2793
type: ALGORITHM

  assert(plugFlowPipe2.res.rho_default >= 0.0, "Variable violating min constraint: 0.0 <= plugFlowPipe2.res.rho_default, has value: " + String(plugFlowPipe2.res.rho_default, "g"));
*/
OMC_DISABLE_OPT
static void pump_v3_basicCold_t_eqFunction_2793(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2793};
  modelica_boolean tmp1658;
  static const MMC_DEFSTRINGLIT(tmp1659,84,"Variable violating min constraint: 0.0 <= plugFlowPipe2.res.rho_default, has value: ");
  modelica_string tmp1660;
  modelica_metatype tmpMeta1661;
  static int tmp1662 = 0;
  if(!tmp1662)
  {
    tmp1658 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[454]] /* plugFlowPipe2.res.rho_default PARAM */),0.0);
    if(!tmp1658)
    {
      tmp1660 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[454]] /* plugFlowPipe2.res.rho_default PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta1661 = stringAppend(MMC_REFSTRINGLIT(tmp1659),tmp1660);
      {
        const char* assert_cond = "(plugFlowPipe2.res.rho_default >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"E:/Daniel/sgi digital twin/Modelica/IDEAS-master/IDEAS/Fluid/FixedResistances/HydraulicDiameter.mo",59,3,60,35,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1661));
        } else {
          FILE_INFO info = {"E:/Daniel/sgi digital twin/Modelica/IDEAS-master/IDEAS/Fluid/FixedResistances/HydraulicDiameter.mo",59,3,60,35,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1661));
        }
      }
      tmp1662 = 1;
    }
  }
  threadData->lastEquationSolved = 2793;
}

/*
equation index: 2794
type: ALGORITHM

  assert(plugFlowPipe2.res.state_default.T >= 1.0 and plugFlowPipe2.res.state_default.T <= 1e4, "Variable violating min/max constraint: 1.0 <= plugFlowPipe2.res.state_default.T <= 1e4, has value: " + String(plugFlowPipe2.res.state_default.T, "g"));
*/
OMC_DISABLE_OPT
static void pump_v3_basicCold_t_eqFunction_2794(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2794};
  modelica_boolean tmp1663;
  modelica_boolean tmp1664;
  static const MMC_DEFSTRINGLIT(tmp1665,99,"Variable violating min/max constraint: 1.0 <= plugFlowPipe2.res.state_default.T <= 1e4, has value: ");
  modelica_string tmp1666;
  modelica_metatype tmpMeta1667;
  static int tmp1668 = 0;
  if(!tmp1668)
  {
    tmp1663 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[458]] /* plugFlowPipe2.res.state_default.T PARAM */),1.0);
    tmp1664 = LessEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[458]] /* plugFlowPipe2.res.state_default.T PARAM */),1e4);
    if(!(tmp1663 && tmp1664))
    {
      tmp1666 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[458]] /* plugFlowPipe2.res.state_default.T PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta1667 = stringAppend(MMC_REFSTRINGLIT(tmp1665),tmp1666);
      {
        const char* assert_cond = "(plugFlowPipe2.res.state_default.T >= 1.0 and plugFlowPipe2.res.state_default.T <= 1e4)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/Daniel/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Media/package.mo",5870,7,5870,44,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1667));
        } else {
          FILE_INFO info = {"C:/Users/Daniel/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Media/package.mo",5870,7,5870,44,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1667));
        }
      }
      tmp1668 = 1;
    }
  }
  threadData->lastEquationSolved = 2794;
}

/*
equation index: 2795
type: ALGORITHM

  assert(plugFlowPipe2.res.state_default.p >= 0.0 and plugFlowPipe2.res.state_default.p <= 1e8, "Variable violating min/max constraint: 0.0 <= plugFlowPipe2.res.state_default.p <= 1e8, has value: " + String(plugFlowPipe2.res.state_default.p, "g"));
*/
OMC_DISABLE_OPT
static void pump_v3_basicCold_t_eqFunction_2795(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2795};
  modelica_boolean tmp1669;
  modelica_boolean tmp1670;
  static const MMC_DEFSTRINGLIT(tmp1671,99,"Variable violating min/max constraint: 0.0 <= plugFlowPipe2.res.state_default.p <= 1e8, has value: ");
  modelica_string tmp1672;
  modelica_metatype tmpMeta1673;
  static int tmp1674 = 0;
  if(!tmp1674)
  {
    tmp1669 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[459]] /* plugFlowPipe2.res.state_default.p PARAM */),0.0);
    tmp1670 = LessEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[459]] /* plugFlowPipe2.res.state_default.p PARAM */),1e8);
    if(!(tmp1669 && tmp1670))
    {
      tmp1672 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[459]] /* plugFlowPipe2.res.state_default.p PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta1673 = stringAppend(MMC_REFSTRINGLIT(tmp1671),tmp1672);
      {
        const char* assert_cond = "(plugFlowPipe2.res.state_default.p >= 0.0 and plugFlowPipe2.res.state_default.p <= 1e8)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/Daniel/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Media/package.mo",5869,7,5869,55,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1673));
        } else {
          FILE_INFO info = {"C:/Users/Daniel/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Media/package.mo",5869,7,5869,55,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1673));
        }
      }
      tmp1674 = 1;
    }
  }
  threadData->lastEquationSolved = 2795;
}

/*
equation index: 2796
type: ALGORITHM

  assert(plugFlowPipe2.res.fac >= 1.0, "Variable violating min constraint: 1.0 <= plugFlowPipe2.res.fac, has value: " + String(plugFlowPipe2.res.fac, "g"));
*/
OMC_DISABLE_OPT
static void pump_v3_basicCold_t_eqFunction_2796(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2796};
  modelica_boolean tmp1675;
  static const MMC_DEFSTRINGLIT(tmp1676,76,"Variable violating min constraint: 1.0 <= plugFlowPipe2.res.fac, has value: ");
  modelica_string tmp1677;
  modelica_metatype tmpMeta1678;
  static int tmp1679 = 0;
  if(!tmp1679)
  {
    tmp1675 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[445]] /* plugFlowPipe2.res.fac PARAM */),1.0);
    if(!tmp1675)
    {
      tmp1677 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[445]] /* plugFlowPipe2.res.fac PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta1678 = stringAppend(MMC_REFSTRINGLIT(tmp1676),tmp1677);
      {
        const char* assert_cond = "(plugFlowPipe2.res.fac >= 1.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"E:/Daniel/sgi digital twin/Modelica/IDEAS-master/IDEAS/Fluid/FixedResistances/HydraulicDiameter.mo",25,3,26,98,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1678));
        } else {
          FILE_INFO info = {"E:/Daniel/sgi digital twin/Modelica/IDEAS-master/IDEAS/Fluid/FixedResistances/HydraulicDiameter.mo",25,3,26,98,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1678));
        }
      }
      tmp1679 = 1;
    }
  }
  threadData->lastEquationSolved = 2796;
}

/*
equation index: 2797
type: ALGORITHM

  assert(plugFlowPipe2.res.roughness >= 0.0, "Variable violating min constraint: 0.0 <= plugFlowPipe2.res.roughness, has value: " + String(plugFlowPipe2.res.roughness, "g"));
*/
OMC_DISABLE_OPT
static void pump_v3_basicCold_t_eqFunction_2797(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2797};
  modelica_boolean tmp1680;
  static const MMC_DEFSTRINGLIT(tmp1681,82,"Variable violating min constraint: 0.0 <= plugFlowPipe2.res.roughness, has value: ");
  modelica_string tmp1682;
  modelica_metatype tmpMeta1683;
  static int tmp1684 = 0;
  if(!tmp1684)
  {
    tmp1680 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[455]] /* plugFlowPipe2.res.roughness PARAM */),0.0);
    if(!tmp1680)
    {
      tmp1682 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[455]] /* plugFlowPipe2.res.roughness PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta1683 = stringAppend(MMC_REFSTRINGLIT(tmp1681),tmp1682);
      {
        const char* assert_cond = "(plugFlowPipe2.res.roughness >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"E:/Daniel/sgi digital twin/Modelica/IDEAS-master/IDEAS/Fluid/FixedResistances/HydraulicDiameter.mo",22,3,23,106,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1683));
        } else {
          FILE_INFO info = {"E:/Daniel/sgi digital twin/Modelica/IDEAS-master/IDEAS/Fluid/FixedResistances/HydraulicDiameter.mo",22,3,23,106,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1683));
        }
      }
      tmp1684 = 1;
    }
  }
  threadData->lastEquationSolved = 2797;
}

/*
equation index: 2798
type: ALGORITHM

  assert(plugFlowPipe2.res.ReC >= 0.0, "Variable violating min constraint: 0.0 <= plugFlowPipe2.res.ReC, has value: " + String(plugFlowPipe2.res.ReC, "g"));
*/
OMC_DISABLE_OPT
static void pump_v3_basicCold_t_eqFunction_2798(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2798};
  modelica_boolean tmp1685;
  static const MMC_DEFSTRINGLIT(tmp1686,76,"Variable violating min constraint: 0.0 <= plugFlowPipe2.res.ReC, has value: ");
  modelica_string tmp1687;
  modelica_metatype tmpMeta1688;
  static int tmp1689 = 0;
  if(!tmp1689)
  {
    tmp1685 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[435]] /* plugFlowPipe2.res.ReC PARAM */),0.0);
    if(!tmp1685)
    {
      tmp1687 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[435]] /* plugFlowPipe2.res.ReC PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta1688 = stringAppend(MMC_REFSTRINGLIT(tmp1686),tmp1687);
      {
        const char* assert_cond = "(plugFlowPipe2.res.ReC >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"E:/Daniel/sgi digital twin/Modelica/IDEAS-master/IDEAS/Fluid/FixedResistances/HydraulicDiameter.mo",14,3,15,60,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1688));
        } else {
          FILE_INFO info = {"E:/Daniel/sgi digital twin/Modelica/IDEAS-master/IDEAS/Fluid/FixedResistances/HydraulicDiameter.mo",14,3,15,60,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1688));
        }
      }
      tmp1689 = 1;
    }
  }
  threadData->lastEquationSolved = 2798;
}

/*
equation index: 2799
type: ALGORITHM

  assert(plugFlowPipe2.res.deltaM >= 1e-6, "Variable violating min constraint: 1e-6 <= plugFlowPipe2.res.deltaM, has value: " + String(plugFlowPipe2.res.deltaM, "g"));
*/
OMC_DISABLE_OPT
static void pump_v3_basicCold_t_eqFunction_2799(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2799};
  modelica_boolean tmp1690;
  static const MMC_DEFSTRINGLIT(tmp1691,80,"Variable violating min constraint: 1e-6 <= plugFlowPipe2.res.deltaM, has value: ");
  modelica_string tmp1692;
  modelica_metatype tmpMeta1693;
  static int tmp1694 = 0;
  if(!tmp1694)
  {
    tmp1690 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[439]] /* plugFlowPipe2.res.deltaM PARAM */),1e-6);
    if(!tmp1690)
    {
      tmp1692 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[439]] /* plugFlowPipe2.res.deltaM PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta1693 = stringAppend(MMC_REFSTRINGLIT(tmp1691),tmp1692);
      {
        const char* assert_cond = "(plugFlowPipe2.res.deltaM >= 1e-6)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"E:/Daniel/sgi digital twin/Modelica/IDEAS-master/IDEAS/Fluid/FixedResistances/PressureDrop.mo",7,3,11,51,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1693));
        } else {
          FILE_INFO info = {"E:/Daniel/sgi digital twin/Modelica/IDEAS-master/IDEAS/Fluid/FixedResistances/PressureDrop.mo",7,3,11,51,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1693));
        }
      }
      tmp1694 = 1;
    }
  }
  threadData->lastEquationSolved = 2799;
}

/*
equation index: 2800
type: ALGORITHM

  assert(plugFlowPipe2.res.eta_default >= 0.0, "Variable violating min constraint: 0.0 <= plugFlowPipe2.res.eta_default, has value: " + String(plugFlowPipe2.res.eta_default, "g"));
*/
OMC_DISABLE_OPT
static void pump_v3_basicCold_t_eqFunction_2800(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2800};
  modelica_boolean tmp1695;
  static const MMC_DEFSTRINGLIT(tmp1696,84,"Variable violating min constraint: 0.0 <= plugFlowPipe2.res.eta_default, has value: ");
  modelica_string tmp1697;
  modelica_metatype tmpMeta1698;
  static int tmp1699 = 0;
  if(!tmp1699)
  {
    tmp1695 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[444]] /* plugFlowPipe2.res.eta_default PARAM */),0.0);
    if(!tmp1695)
    {
      tmp1697 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[444]] /* plugFlowPipe2.res.eta_default PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta1698 = stringAppend(MMC_REFSTRINGLIT(tmp1696),tmp1697);
      {
        const char* assert_cond = "(plugFlowPipe2.res.eta_default >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"E:/Daniel/sgi digital twin/Modelica/IDEAS-master/IDEAS/Fluid/BaseClasses/PartialResistance.mo",33,3,35,77,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1698));
        } else {
          FILE_INFO info = {"E:/Daniel/sgi digital twin/Modelica/IDEAS-master/IDEAS/Fluid/BaseClasses/PartialResistance.mo",33,3,35,77,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1698));
        }
      }
      tmp1699 = 1;
    }
  }
  threadData->lastEquationSolved = 2800;
}

/*
equation index: 2801
type: ALGORITHM

  assert(plugFlowPipe2.res.sta_default.T >= 1.0 and plugFlowPipe2.res.sta_default.T <= 1e4, "Variable violating min/max constraint: 1.0 <= plugFlowPipe2.res.sta_default.T <= 1e4, has value: " + String(plugFlowPipe2.res.sta_default.T, "g"));
*/
OMC_DISABLE_OPT
static void pump_v3_basicCold_t_eqFunction_2801(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2801};
  modelica_boolean tmp1700;
  modelica_boolean tmp1701;
  static const MMC_DEFSTRINGLIT(tmp1702,97,"Variable violating min/max constraint: 1.0 <= plugFlowPipe2.res.sta_default.T <= 1e4, has value: ");
  modelica_string tmp1703;
  modelica_metatype tmpMeta1704;
  static int tmp1705 = 0;
  if(!tmp1705)
  {
    tmp1700 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[456]] /* plugFlowPipe2.res.sta_default.T PARAM */),1.0);
    tmp1701 = LessEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[456]] /* plugFlowPipe2.res.sta_default.T PARAM */),1e4);
    if(!(tmp1700 && tmp1701))
    {
      tmp1703 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[456]] /* plugFlowPipe2.res.sta_default.T PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta1704 = stringAppend(MMC_REFSTRINGLIT(tmp1702),tmp1703);
      {
        const char* assert_cond = "(plugFlowPipe2.res.sta_default.T >= 1.0 and plugFlowPipe2.res.sta_default.T <= 1e4)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/Daniel/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Media/package.mo",5870,7,5870,44,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1704));
        } else {
          FILE_INFO info = {"C:/Users/Daniel/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Media/package.mo",5870,7,5870,44,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1704));
        }
      }
      tmp1705 = 1;
    }
  }
  threadData->lastEquationSolved = 2801;
}

/*
equation index: 2802
type: ALGORITHM

  assert(plugFlowPipe2.res.sta_default.p >= 0.0 and plugFlowPipe2.res.sta_default.p <= 1e8, "Variable violating min/max constraint: 0.0 <= plugFlowPipe2.res.sta_default.p <= 1e8, has value: " + String(plugFlowPipe2.res.sta_default.p, "g"));
*/
OMC_DISABLE_OPT
static void pump_v3_basicCold_t_eqFunction_2802(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2802};
  modelica_boolean tmp1706;
  modelica_boolean tmp1707;
  static const MMC_DEFSTRINGLIT(tmp1708,97,"Variable violating min/max constraint: 0.0 <= plugFlowPipe2.res.sta_default.p <= 1e8, has value: ");
  modelica_string tmp1709;
  modelica_metatype tmpMeta1710;
  static int tmp1711 = 0;
  if(!tmp1711)
  {
    tmp1706 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[457]] /* plugFlowPipe2.res.sta_default.p PARAM */),0.0);
    tmp1707 = LessEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[457]] /* plugFlowPipe2.res.sta_default.p PARAM */),1e8);
    if(!(tmp1706 && tmp1707))
    {
      tmp1709 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[457]] /* plugFlowPipe2.res.sta_default.p PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta1710 = stringAppend(MMC_REFSTRINGLIT(tmp1708),tmp1709);
      {
        const char* assert_cond = "(plugFlowPipe2.res.sta_default.p >= 0.0 and plugFlowPipe2.res.sta_default.p <= 1e8)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/Daniel/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Media/package.mo",5869,7,5869,55,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1710));
        } else {
          FILE_INFO info = {"C:/Users/Daniel/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Media/package.mo",5869,7,5869,55,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1710));
        }
      }
      tmp1711 = 1;
    }
  }
  threadData->lastEquationSolved = 2802;
}

/*
equation index: 2803
type: ALGORITHM

  assert(plugFlowPipe2.res.m_flow_turbulent >= 0.0, "Variable violating min constraint: 0.0 <= plugFlowPipe2.res.m_flow_turbulent, has value: " + String(plugFlowPipe2.res.m_flow_turbulent, "g"));
*/
OMC_DISABLE_OPT
static void pump_v3_basicCold_t_eqFunction_2803(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2803};
  modelica_boolean tmp1712;
  static const MMC_DEFSTRINGLIT(tmp1713,89,"Variable violating min constraint: 0.0 <= plugFlowPipe2.res.m_flow_turbulent, has value: ");
  modelica_string tmp1714;
  modelica_metatype tmpMeta1715;
  static int tmp1716 = 0;
  if(!tmp1716)
  {
    tmp1712 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[451]] /* plugFlowPipe2.res.m_flow_turbulent PARAM */),0.0);
    if(!tmp1712)
    {
      tmp1714 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[451]] /* plugFlowPipe2.res.m_flow_turbulent PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta1715 = stringAppend(MMC_REFSTRINGLIT(tmp1713),tmp1714);
      {
        const char* assert_cond = "(plugFlowPipe2.res.m_flow_turbulent >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"E:/Daniel/sgi digital twin/Modelica/IDEAS-master/IDEAS/Fluid/BaseClasses/PartialResistance.mo",27,3,28,53,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1715));
        } else {
          FILE_INFO info = {"E:/Daniel/sgi digital twin/Modelica/IDEAS-master/IDEAS/Fluid/BaseClasses/PartialResistance.mo",27,3,28,53,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1715));
        }
      }
      tmp1716 = 1;
    }
  }
  threadData->lastEquationSolved = 2803;
}

/*
equation index: 2804
type: ALGORITHM

  assert(plugFlowPipe2.res.m_flow_small >= 0.0, "Variable violating min constraint: 0.0 <= plugFlowPipe2.res.m_flow_small, has value: " + String(plugFlowPipe2.res.m_flow_small, "g"));
*/
OMC_DISABLE_OPT
static void pump_v3_basicCold_t_eqFunction_2804(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2804};
  modelica_boolean tmp1717;
  static const MMC_DEFSTRINGLIT(tmp1718,85,"Variable violating min constraint: 0.0 <= plugFlowPipe2.res.m_flow_small, has value: ");
  modelica_string tmp1719;
  modelica_metatype tmpMeta1720;
  static int tmp1721 = 0;
  if(!tmp1721)
  {
    tmp1717 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[450]] /* plugFlowPipe2.res.m_flow_small PARAM */),0.0);
    if(!tmp1717)
    {
      tmp1719 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[450]] /* plugFlowPipe2.res.m_flow_small PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta1720 = stringAppend(MMC_REFSTRINGLIT(tmp1718),tmp1719);
      {
        const char* assert_cond = "(plugFlowPipe2.res.m_flow_small >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"E:/Daniel/sgi digital twin/Modelica/IDEAS-master/IDEAS/Fluid/Interfaces/PartialTwoPortInterface.mo",10,3,12,40,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1720));
        } else {
          FILE_INFO info = {"E:/Daniel/sgi digital twin/Modelica/IDEAS-master/IDEAS/Fluid/Interfaces/PartialTwoPortInterface.mo",10,3,12,40,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1720));
        }
      }
      tmp1721 = 1;
    }
  }
  threadData->lastEquationSolved = 2804;
}

/*
equation index: 2805
type: ALGORITHM

  assert(plugFlowPipe2.roughness >= 0.0, "Variable violating min constraint: 0.0 <= plugFlowPipe2.roughness, has value: " + String(plugFlowPipe2.roughness, "g"));
*/
OMC_DISABLE_OPT
static void pump_v3_basicCold_t_eqFunction_2805(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2805};
  modelica_boolean tmp1722;
  static const MMC_DEFSTRINGLIT(tmp1723,78,"Variable violating min constraint: 0.0 <= plugFlowPipe2.roughness, has value: ");
  modelica_string tmp1724;
  modelica_metatype tmpMeta1725;
  static int tmp1726 = 0;
  if(!tmp1726)
  {
    tmp1722 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[463]] /* plugFlowPipe2.roughness PARAM */),0.0);
    if(!tmp1722)
    {
      tmp1724 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[463]] /* plugFlowPipe2.roughness PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta1725 = stringAppend(MMC_REFSTRINGLIT(tmp1723),tmp1724);
      {
        const char* assert_cond = "(plugFlowPipe2.roughness >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"E:/Daniel/sgi digital twin/Modelica/IDEAS-master/IDEAS/Fluid/FixedResistances/BaseClasses/PlugFlowPipe.mo",35,3,37,42,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1725));
        } else {
          FILE_INFO info = {"E:/Daniel/sgi digital twin/Modelica/IDEAS-master/IDEAS/Fluid/FixedResistances/BaseClasses/PlugFlowPipe.mo",35,3,37,42,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1725));
        }
      }
      tmp1726 = 1;
    }
  }
  threadData->lastEquationSolved = 2805;
}

/*
equation index: 2806
type: ALGORITHM

  assert(senTemOut_heat.tauHeaTra >= 1.0, "Variable violating min constraint: 1.0 <= senTemOut_heat.tauHeaTra, has value: " + String(senTemOut_heat.tauHeaTra, "g"));
*/
OMC_DISABLE_OPT
static void pump_v3_basicCold_t_eqFunction_2806(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2806};
  modelica_boolean tmp1727;
  static const MMC_DEFSTRINGLIT(tmp1728,79,"Variable violating min constraint: 1.0 <= senTemOut_heat.tauHeaTra, has value: ");
  modelica_string tmp1729;
  modelica_metatype tmpMeta1730;
  static int tmp1731 = 0;
  if(!tmp1731)
  {
    tmp1727 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[980]] /* senTemOut_heat.tauHeaTra PARAM */),1.0);
    if(!tmp1727)
    {
      tmp1729 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[980]] /* senTemOut_heat.tauHeaTra PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta1730 = stringAppend(MMC_REFSTRINGLIT(tmp1728),tmp1729);
      {
        const char* assert_cond = "(senTemOut_heat.tauHeaTra >= 1.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"E:/Daniel/sgi digital twin/Modelica/IDEAS-master/IDEAS/Fluid/Sensors/TemperatureTwoPort.mo",24,3,26,68,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1730));
        } else {
          FILE_INFO info = {"E:/Daniel/sgi digital twin/Modelica/IDEAS-master/IDEAS/Fluid/Sensors/TemperatureTwoPort.mo",24,3,26,68,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1730));
        }
      }
      tmp1731 = 1;
    }
  }
  threadData->lastEquationSolved = 2806;
}

/*
equation index: 2807
type: ALGORITHM

  assert(senTemOut_heat.TAmb >= 0.0, "Variable violating min constraint: 0.0 <= senTemOut_heat.TAmb, has value: " + String(senTemOut_heat.TAmb, "g"));
*/
OMC_DISABLE_OPT
static void pump_v3_basicCold_t_eqFunction_2807(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2807};
  modelica_boolean tmp1732;
  static const MMC_DEFSTRINGLIT(tmp1733,74,"Variable violating min constraint: 0.0 <= senTemOut_heat.TAmb, has value: ");
  modelica_string tmp1734;
  modelica_metatype tmpMeta1735;
  static int tmp1736 = 0;
  if(!tmp1736)
  {
    tmp1732 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[974]] /* senTemOut_heat.TAmb PARAM */),0.0);
    if(!tmp1732)
    {
      tmp1734 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[974]] /* senTemOut_heat.TAmb PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta1735 = stringAppend(MMC_REFSTRINGLIT(tmp1733),tmp1734);
      {
        const char* assert_cond = "(senTemOut_heat.TAmb >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"E:/Daniel/sgi digital twin/Modelica/IDEAS-master/IDEAS/Fluid/Sensors/TemperatureTwoPort.mo",21,3,23,68,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1735));
        } else {
          FILE_INFO info = {"E:/Daniel/sgi digital twin/Modelica/IDEAS-master/IDEAS/Fluid/Sensors/TemperatureTwoPort.mo",21,3,23,68,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1735));
        }
      }
      tmp1736 = 1;
    }
  }
  threadData->lastEquationSolved = 2807;
}

/*
equation index: 2808
type: ALGORITHM

  assert(senTemOut_heat.T_start >= 0.0, "Variable violating min constraint: 0.0 <= senTemOut_heat.T_start, has value: " + String(senTemOut_heat.T_start, "g"));
*/
OMC_DISABLE_OPT
static void pump_v3_basicCold_t_eqFunction_2808(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2808};
  modelica_boolean tmp1737;
  static const MMC_DEFSTRINGLIT(tmp1738,77,"Variable violating min constraint: 0.0 <= senTemOut_heat.T_start, has value: ");
  modelica_string tmp1739;
  modelica_metatype tmpMeta1740;
  static int tmp1741 = 0;
  if(!tmp1741)
  {
    tmp1737 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[975]] /* senTemOut_heat.T_start PARAM */),0.0);
    if(!tmp1737)
    {
      tmp1739 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[975]] /* senTemOut_heat.T_start PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta1740 = stringAppend(MMC_REFSTRINGLIT(tmp1738),tmp1739);
      {
        const char* assert_cond = "(senTemOut_heat.T_start >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"E:/Daniel/sgi digital twin/Modelica/IDEAS-master/IDEAS/Fluid/Sensors/TemperatureTwoPort.mo",14,3,16,48,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1740));
        } else {
          FILE_INFO info = {"E:/Daniel/sgi digital twin/Modelica/IDEAS-master/IDEAS/Fluid/Sensors/TemperatureTwoPort.mo",14,3,16,48,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1740));
        }
      }
      tmp1741 = 1;
    }
  }
  threadData->lastEquationSolved = 2808;
}

/*
equation index: 2809
type: ALGORITHM

  assert(senTemOut_heat.initType >= Modelica.Blocks.Types.Init.NoInit and senTemOut_heat.initType <= Modelica.Blocks.Types.Init.InitialOutput, "Variable violating min/max constraint: Modelica.Blocks.Types.Init.NoInit <= senTemOut_heat.initType <= Modelica.Blocks.Types.Init.InitialOutput, has value: " + String(senTemOut_heat.initType, "d"));
*/
OMC_DISABLE_OPT
static void pump_v3_basicCold_t_eqFunction_2809(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2809};
  modelica_boolean tmp1742;
  modelica_boolean tmp1743;
  static const MMC_DEFSTRINGLIT(tmp1744,156,"Variable violating min/max constraint: Modelica.Blocks.Types.Init.NoInit <= senTemOut_heat.initType <= Modelica.Blocks.Types.Init.InitialOutput, has value: ");
  modelica_string tmp1745;
  modelica_metatype tmpMeta1746;
  static int tmp1747 = 0;
  if(!tmp1747)
  {
    tmp1742 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[116]] /* senTemOut_heat.initType PARAM */),1);
    tmp1743 = LessEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[116]] /* senTemOut_heat.initType PARAM */),4);
    if(!(tmp1742 && tmp1743))
    {
      tmp1745 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[116]] /* senTemOut_heat.initType PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta1746 = stringAppend(MMC_REFSTRINGLIT(tmp1744),tmp1745);
      {
        const char* assert_cond = "(senTemOut_heat.initType >= Modelica.Blocks.Types.Init.NoInit and senTemOut_heat.initType <= Modelica.Blocks.Types.Init.InitialOutput)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"E:/Daniel/sgi digital twin/Modelica/IDEAS-master/IDEAS/Fluid/Sensors/BaseClasses/PartialDynamicFlowSensor.mo",8,3,10,60,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1746));
        } else {
          FILE_INFO info = {"E:/Daniel/sgi digital twin/Modelica/IDEAS-master/IDEAS/Fluid/Sensors/BaseClasses/PartialDynamicFlowSensor.mo",8,3,10,60,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1746));
        }
      }
      tmp1747 = 1;
    }
  }
  threadData->lastEquationSolved = 2809;
}

/*
equation index: 2810
type: ALGORITHM

  assert(senTemOut_heat.tau >= 0.0, "Variable violating min constraint: 0.0 <= senTemOut_heat.tau, has value: " + String(senTemOut_heat.tau, "g"));
*/
OMC_DISABLE_OPT
static void pump_v3_basicCold_t_eqFunction_2810(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2810};
  modelica_boolean tmp1748;
  static const MMC_DEFSTRINGLIT(tmp1749,73,"Variable violating min constraint: 0.0 <= senTemOut_heat.tau, has value: ");
  modelica_string tmp1750;
  modelica_metatype tmpMeta1751;
  static int tmp1752 = 0;
  if(!tmp1752)
  {
    tmp1748 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[979]] /* senTemOut_heat.tau PARAM */),0.0);
    if(!tmp1748)
    {
      tmp1750 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[979]] /* senTemOut_heat.tau PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta1751 = stringAppend(MMC_REFSTRINGLIT(tmp1749),tmp1750);
      {
        const char* assert_cond = "(senTemOut_heat.tau >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"E:/Daniel/sgi digital twin/Modelica/IDEAS-master/IDEAS/Fluid/Sensors/BaseClasses/PartialDynamicFlowSensor.mo",6,3,7,120,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1751));
        } else {
          FILE_INFO info = {"E:/Daniel/sgi digital twin/Modelica/IDEAS-master/IDEAS/Fluid/Sensors/BaseClasses/PartialDynamicFlowSensor.mo",6,3,7,120,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1751));
        }
      }
      tmp1752 = 1;
    }
  }
  threadData->lastEquationSolved = 2810;
}

/*
equation index: 2811
type: ALGORITHM

  assert(senTemOut_heat.m_flow_small >= 0.0, "Variable violating min constraint: 0.0 <= senTemOut_heat.m_flow_small, has value: " + String(senTemOut_heat.m_flow_small, "g"));
*/
OMC_DISABLE_OPT
static void pump_v3_basicCold_t_eqFunction_2811(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2811};
  modelica_boolean tmp1753;
  static const MMC_DEFSTRINGLIT(tmp1754,82,"Variable violating min constraint: 0.0 <= senTemOut_heat.m_flow_small, has value: ");
  modelica_string tmp1755;
  modelica_metatype tmpMeta1756;
  static int tmp1757 = 0;
  if(!tmp1757)
  {
    tmp1753 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[977]] /* senTemOut_heat.m_flow_small PARAM */),0.0);
    if(!tmp1753)
    {
      tmp1755 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[977]] /* senTemOut_heat.m_flow_small PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta1756 = stringAppend(MMC_REFSTRINGLIT(tmp1754),tmp1755);
      {
        const char* assert_cond = "(senTemOut_heat.m_flow_small >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"E:/Daniel/sgi digital twin/Modelica/IDEAS-master/IDEAS/Fluid/Sensors/BaseClasses/PartialFlowSensor.mo",8,3,11,40,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1756));
        } else {
          FILE_INFO info = {"E:/Daniel/sgi digital twin/Modelica/IDEAS-master/IDEAS/Fluid/Sensors/BaseClasses/PartialFlowSensor.mo",8,3,11,40,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1756));
        }
      }
      tmp1757 = 1;
    }
  }
  threadData->lastEquationSolved = 2811;
}

/*
equation index: 2812
type: ALGORITHM

  assert(senTemOut_heat.m_flow_nominal >= 0.0, "Variable violating min constraint: 0.0 <= senTemOut_heat.m_flow_nominal, has value: " + String(senTemOut_heat.m_flow_nominal, "g"));
*/
OMC_DISABLE_OPT
static void pump_v3_basicCold_t_eqFunction_2812(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2812};
  modelica_boolean tmp1758;
  static const MMC_DEFSTRINGLIT(tmp1759,84,"Variable violating min constraint: 0.0 <= senTemOut_heat.m_flow_nominal, has value: ");
  modelica_string tmp1760;
  modelica_metatype tmpMeta1761;
  static int tmp1762 = 0;
  if(!tmp1762)
  {
    tmp1758 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[976]] /* senTemOut_heat.m_flow_nominal PARAM */),0.0);
    if(!tmp1758)
    {
      tmp1760 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[976]] /* senTemOut_heat.m_flow_nominal PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta1761 = stringAppend(MMC_REFSTRINGLIT(tmp1759),tmp1760);
      {
        const char* assert_cond = "(senTemOut_heat.m_flow_nominal >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"E:/Daniel/sgi digital twin/Modelica/IDEAS-master/IDEAS/Fluid/Sensors/BaseClasses/PartialFlowSensor.mo",5,3,7,51,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1761));
        } else {
          FILE_INFO info = {"E:/Daniel/sgi digital twin/Modelica/IDEAS-master/IDEAS/Fluid/Sensors/BaseClasses/PartialFlowSensor.mo",5,3,7,51,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1761));
        }
      }
      tmp1762 = 1;
    }
  }
  threadData->lastEquationSolved = 2812;
}

/*
equation index: 2813
type: ALGORITHM

  assert(plugFlowPipe_heat.T_start_out >= 0.0, "Variable violating min constraint: 0.0 <= plugFlowPipe_heat.T_start_out, has value: " + String(plugFlowPipe_heat.T_start_out, "g"));
*/
OMC_DISABLE_OPT
static void pump_v3_basicCold_t_eqFunction_2813(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2813};
  modelica_boolean tmp1763;
  static const MMC_DEFSTRINGLIT(tmp1764,84,"Variable violating min constraint: 0.0 <= plugFlowPipe_heat.T_start_out, has value: ");
  modelica_string tmp1765;
  modelica_metatype tmpMeta1766;
  static int tmp1767 = 0;
  if(!tmp1767)
  {
    tmp1763 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[541]] /* plugFlowPipe_heat.T_start_out PARAM */),0.0);
    if(!tmp1763)
    {
      tmp1765 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[541]] /* plugFlowPipe_heat.T_start_out PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta1766 = stringAppend(MMC_REFSTRINGLIT(tmp1764),tmp1765);
      {
        const char* assert_cond = "(plugFlowPipe_heat.T_start_out >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"E:/Daniel/sgi digital twin/Modelica/IDEAS-master/IDEAS/Fluid/FixedResistances/BaseClasses/PlugFlowPipe.mo",64,3,66,46,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1766));
        } else {
          FILE_INFO info = {"E:/Daniel/sgi digital twin/Modelica/IDEAS-master/IDEAS/Fluid/FixedResistances/BaseClasses/PlugFlowPipe.mo",64,3,66,46,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1766));
        }
      }
      tmp1767 = 1;
    }
  }
  threadData->lastEquationSolved = 2813;
}

/*
equation index: 2814
type: ALGORITHM

  assert(plugFlowPipe_heat.vol_a.T_start >= 1.0 and plugFlowPipe_heat.vol_a.T_start <= 1e4, "Variable violating min/max constraint: 1.0 <= plugFlowPipe_heat.vol_a.T_start <= 1e4, has value: " + String(plugFlowPipe_heat.vol_a.T_start, "g"));
*/
OMC_DISABLE_OPT
static void pump_v3_basicCold_t_eqFunction_2814(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2814};
  modelica_boolean tmp1768;
  modelica_boolean tmp1769;
  static const MMC_DEFSTRINGLIT(tmp1770,97,"Variable violating min/max constraint: 1.0 <= plugFlowPipe_heat.vol_a.T_start <= 1e4, has value: ");
  modelica_string tmp1771;
  modelica_metatype tmpMeta1772;
  static int tmp1773 = 0;
  if(!tmp1773)
  {
    tmp1768 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[629]] /* plugFlowPipe_heat.vol_a.T_start PARAM */),1.0);
    tmp1769 = LessEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[629]] /* plugFlowPipe_heat.vol_a.T_start PARAM */),1e4);
    if(!(tmp1768 && tmp1769))
    {
      tmp1771 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[629]] /* plugFlowPipe_heat.vol_a.T_start PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta1772 = stringAppend(MMC_REFSTRINGLIT(tmp1770),tmp1771);
      {
        const char* assert_cond = "(plugFlowPipe_heat.vol_a.T_start >= 1.0 and plugFlowPipe_heat.vol_a.T_start <= 1e4)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"E:/Daniel/sgi digital twin/Modelica/IDEAS-master/IDEAS/Fluid/Interfaces/LumpedVolumeDeclarations.mo",32,3,34,47,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1772));
        } else {
          FILE_INFO info = {"E:/Daniel/sgi digital twin/Modelica/IDEAS-master/IDEAS/Fluid/Interfaces/LumpedVolumeDeclarations.mo",32,3,34,47,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1772));
        }
      }
      tmp1773 = 1;
    }
  }
  threadData->lastEquationSolved = 2814;
}

/*
equation index: 2815
type: ALGORITHM

  assert(plugFlowPipe_heat.vol_a.state_start.T >= 1.0 and plugFlowPipe_heat.vol_a.state_start.T <= 1e4, "Variable violating min/max constraint: 1.0 <= plugFlowPipe_heat.vol_a.state_start.T <= 1e4, has value: " + String(plugFlowPipe_heat.vol_a.state_start.T, "g"));
*/
OMC_DISABLE_OPT
static void pump_v3_basicCold_t_eqFunction_2815(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2815};
  modelica_boolean tmp1774;
  modelica_boolean tmp1775;
  static const MMC_DEFSTRINGLIT(tmp1776,103,"Variable violating min/max constraint: 1.0 <= plugFlowPipe_heat.vol_a.state_start.T <= 1e4, has value: ");
  modelica_string tmp1777;
  modelica_metatype tmpMeta1778;
  static int tmp1779 = 0;
  if(!tmp1779)
  {
    tmp1774 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[652]] /* plugFlowPipe_heat.vol_a.state_start.T PARAM */),1.0);
    tmp1775 = LessEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[652]] /* plugFlowPipe_heat.vol_a.state_start.T PARAM */),1e4);
    if(!(tmp1774 && tmp1775))
    {
      tmp1777 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[652]] /* plugFlowPipe_heat.vol_a.state_start.T PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta1778 = stringAppend(MMC_REFSTRINGLIT(tmp1776),tmp1777);
      {
        const char* assert_cond = "(plugFlowPipe_heat.vol_a.state_start.T >= 1.0 and plugFlowPipe_heat.vol_a.state_start.T <= 1e4)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/Daniel/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Media/package.mo",5870,7,5870,44,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1778));
        } else {
          FILE_INFO info = {"C:/Users/Daniel/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Media/package.mo",5870,7,5870,44,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1778));
        }
      }
      tmp1779 = 1;
    }
  }
  threadData->lastEquationSolved = 2815;
}

/*
equation index: 2816
type: ALGORITHM

  assert(plugFlowPipe_heat.vol_a.p_start >= 0.0 and plugFlowPipe_heat.vol_a.p_start <= 1e8, "Variable violating min/max constraint: 0.0 <= plugFlowPipe_heat.vol_a.p_start <= 1e8, has value: " + String(plugFlowPipe_heat.vol_a.p_start, "g"));
*/
OMC_DISABLE_OPT
static void pump_v3_basicCold_t_eqFunction_2816(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2816};
  modelica_boolean tmp1780;
  modelica_boolean tmp1781;
  static const MMC_DEFSTRINGLIT(tmp1782,97,"Variable violating min/max constraint: 0.0 <= plugFlowPipe_heat.vol_a.p_start <= 1e8, has value: ");
  modelica_string tmp1783;
  modelica_metatype tmpMeta1784;
  static int tmp1785 = 0;
  if(!tmp1785)
  {
    tmp1780 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[647]] /* plugFlowPipe_heat.vol_a.p_start PARAM */),0.0);
    tmp1781 = LessEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[647]] /* plugFlowPipe_heat.vol_a.p_start PARAM */),1e8);
    if(!(tmp1780 && tmp1781))
    {
      tmp1783 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[647]] /* plugFlowPipe_heat.vol_a.p_start PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta1784 = stringAppend(MMC_REFSTRINGLIT(tmp1782),tmp1783);
      {
        const char* assert_cond = "(plugFlowPipe_heat.vol_a.p_start >= 0.0 and plugFlowPipe_heat.vol_a.p_start <= 1e8)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"E:/Daniel/sgi digital twin/Modelica/IDEAS-master/IDEAS/Fluid/Interfaces/LumpedVolumeDeclarations.mo",29,3,31,47,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1784));
        } else {
          FILE_INFO info = {"E:/Daniel/sgi digital twin/Modelica/IDEAS-master/IDEAS/Fluid/Interfaces/LumpedVolumeDeclarations.mo",29,3,31,47,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1784));
        }
      }
      tmp1785 = 1;
    }
  }
  threadData->lastEquationSolved = 2816;
}

/*
equation index: 2817
type: ALGORITHM

  assert(plugFlowPipe_heat.vol_a.state_start.p >= 0.0 and plugFlowPipe_heat.vol_a.state_start.p <= 1e8, "Variable violating min/max constraint: 0.0 <= plugFlowPipe_heat.vol_a.state_start.p <= 1e8, has value: " + String(plugFlowPipe_heat.vol_a.state_start.p, "g"));
*/
OMC_DISABLE_OPT
static void pump_v3_basicCold_t_eqFunction_2817(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2817};
  modelica_boolean tmp1786;
  modelica_boolean tmp1787;
  static const MMC_DEFSTRINGLIT(tmp1788,103,"Variable violating min/max constraint: 0.0 <= plugFlowPipe_heat.vol_a.state_start.p <= 1e8, has value: ");
  modelica_string tmp1789;
  modelica_metatype tmpMeta1790;
  static int tmp1791 = 0;
  if(!tmp1791)
  {
    tmp1786 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[653]] /* plugFlowPipe_heat.vol_a.state_start.p PARAM */),0.0);
    tmp1787 = LessEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[653]] /* plugFlowPipe_heat.vol_a.state_start.p PARAM */),1e8);
    if(!(tmp1786 && tmp1787))
    {
      tmp1789 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[653]] /* plugFlowPipe_heat.vol_a.state_start.p PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta1790 = stringAppend(MMC_REFSTRINGLIT(tmp1788),tmp1789);
      {
        const char* assert_cond = "(plugFlowPipe_heat.vol_a.state_start.p >= 0.0 and plugFlowPipe_heat.vol_a.state_start.p <= 1e8)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/Daniel/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Media/package.mo",5869,7,5869,55,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1790));
        } else {
          FILE_INFO info = {"C:/Users/Daniel/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Media/package.mo",5869,7,5869,55,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1790));
        }
      }
      tmp1791 = 1;
    }
  }
  threadData->lastEquationSolved = 2817;
}

/*
equation index: 2818
type: ALGORITHM

  assert(plugFlowPipe_heat.vol_a.rho_default >= 0.0, "Variable violating min constraint: 0.0 <= plugFlowPipe_heat.vol_a.rho_default, has value: " + String(plugFlowPipe_heat.vol_a.rho_default, "g"));
*/
OMC_DISABLE_OPT
static void pump_v3_basicCold_t_eqFunction_2818(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2818};
  modelica_boolean tmp1792;
  static const MMC_DEFSTRINGLIT(tmp1793,90,"Variable violating min constraint: 0.0 <= plugFlowPipe_heat.vol_a.rho_default, has value: ");
  modelica_string tmp1794;
  modelica_metatype tmpMeta1795;
  static int tmp1796 = 0;
  if(!tmp1796)
  {
    tmp1792 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[648]] /* plugFlowPipe_heat.vol_a.rho_default PARAM */),0.0);
    if(!tmp1792)
    {
      tmp1794 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[648]] /* plugFlowPipe_heat.vol_a.rho_default PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta1795 = stringAppend(MMC_REFSTRINGLIT(tmp1793),tmp1794);
      {
        const char* assert_cond = "(plugFlowPipe_heat.vol_a.rho_default >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"E:/Daniel/sgi digital twin/Modelica/IDEAS-master/IDEAS/Fluid/MixingVolumes/BaseClasses/PartialMixingVolume.mo",99,3,100,63,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1795));
        } else {
          FILE_INFO info = {"E:/Daniel/sgi digital twin/Modelica/IDEAS-master/IDEAS/Fluid/MixingVolumes/BaseClasses/PartialMixingVolume.mo",99,3,100,63,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1795));
        }
      }
      tmp1796 = 1;
    }
  }
  threadData->lastEquationSolved = 2818;
}

/*
equation index: 2819
type: ALGORITHM

  assert(plugFlowPipe_heat.vol_a.state_default.T >= 1.0 and plugFlowPipe_heat.vol_a.state_default.T <= 1e4, "Variable violating min/max constraint: 1.0 <= plugFlowPipe_heat.vol_a.state_default.T <= 1e4, has value: " + String(plugFlowPipe_heat.vol_a.state_default.T, "g"));
*/
OMC_DISABLE_OPT
static void pump_v3_basicCold_t_eqFunction_2819(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2819};
  modelica_boolean tmp1797;
  modelica_boolean tmp1798;
  static const MMC_DEFSTRINGLIT(tmp1799,105,"Variable violating min/max constraint: 1.0 <= plugFlowPipe_heat.vol_a.state_default.T <= 1e4, has value: ");
  modelica_string tmp1800;
  modelica_metatype tmpMeta1801;
  static int tmp1802 = 0;
  if(!tmp1802)
  {
    tmp1797 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[650]] /* plugFlowPipe_heat.vol_a.state_default.T PARAM */),1.0);
    tmp1798 = LessEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[650]] /* plugFlowPipe_heat.vol_a.state_default.T PARAM */),1e4);
    if(!(tmp1797 && tmp1798))
    {
      tmp1800 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[650]] /* plugFlowPipe_heat.vol_a.state_default.T PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta1801 = stringAppend(MMC_REFSTRINGLIT(tmp1799),tmp1800);
      {
        const char* assert_cond = "(plugFlowPipe_heat.vol_a.state_default.T >= 1.0 and plugFlowPipe_heat.vol_a.state_default.T <= 1e4)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/Daniel/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Media/package.mo",5870,7,5870,44,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1801));
        } else {
          FILE_INFO info = {"C:/Users/Daniel/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Media/package.mo",5870,7,5870,44,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1801));
        }
      }
      tmp1802 = 1;
    }
  }
  threadData->lastEquationSolved = 2819;
}

/*
equation index: 2820
type: ALGORITHM

  assert(plugFlowPipe_heat.vol_a.state_default.p >= 0.0 and plugFlowPipe_heat.vol_a.state_default.p <= 1e8, "Variable violating min/max constraint: 0.0 <= plugFlowPipe_heat.vol_a.state_default.p <= 1e8, has value: " + String(plugFlowPipe_heat.vol_a.state_default.p, "g"));
*/
OMC_DISABLE_OPT
static void pump_v3_basicCold_t_eqFunction_2820(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2820};
  modelica_boolean tmp1803;
  modelica_boolean tmp1804;
  static const MMC_DEFSTRINGLIT(tmp1805,105,"Variable violating min/max constraint: 0.0 <= plugFlowPipe_heat.vol_a.state_default.p <= 1e8, has value: ");
  modelica_string tmp1806;
  modelica_metatype tmpMeta1807;
  static int tmp1808 = 0;
  if(!tmp1808)
  {
    tmp1803 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[651]] /* plugFlowPipe_heat.vol_a.state_default.p PARAM */),0.0);
    tmp1804 = LessEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[651]] /* plugFlowPipe_heat.vol_a.state_default.p PARAM */),1e8);
    if(!(tmp1803 && tmp1804))
    {
      tmp1806 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[651]] /* plugFlowPipe_heat.vol_a.state_default.p PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta1807 = stringAppend(MMC_REFSTRINGLIT(tmp1805),tmp1806);
      {
        const char* assert_cond = "(plugFlowPipe_heat.vol_a.state_default.p >= 0.0 and plugFlowPipe_heat.vol_a.state_default.p <= 1e8)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/Daniel/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Media/package.mo",5869,7,5869,55,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1807));
        } else {
          FILE_INFO info = {"C:/Users/Daniel/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Media/package.mo",5869,7,5869,55,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1807));
        }
      }
      tmp1808 = 1;
    }
  }
  threadData->lastEquationSolved = 2820;
}

/*
equation index: 2821
type: ALGORITHM

  assert(plugFlowPipe_heat.vol_a.rho_start >= 0.0, "Variable violating min constraint: 0.0 <= plugFlowPipe_heat.vol_a.rho_start, has value: " + String(plugFlowPipe_heat.vol_a.rho_start, "g"));
*/
OMC_DISABLE_OPT
static void pump_v3_basicCold_t_eqFunction_2821(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2821};
  modelica_boolean tmp1809;
  static const MMC_DEFSTRINGLIT(tmp1810,88,"Variable violating min constraint: 0.0 <= plugFlowPipe_heat.vol_a.rho_start, has value: ");
  modelica_string tmp1811;
  modelica_metatype tmpMeta1812;
  static int tmp1813 = 0;
  if(!tmp1813)
  {
    tmp1809 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[649]] /* plugFlowPipe_heat.vol_a.rho_start PARAM */),0.0);
    if(!tmp1809)
    {
      tmp1811 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[649]] /* plugFlowPipe_heat.vol_a.rho_start PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta1812 = stringAppend(MMC_REFSTRINGLIT(tmp1810),tmp1811);
      {
        const char* assert_cond = "(plugFlowPipe_heat.vol_a.rho_start >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"E:/Daniel/sgi digital twin/Modelica/IDEAS-master/IDEAS/Fluid/MixingVolumes/BaseClasses/PartialMixingVolume.mo",92,3,93,73,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1812));
        } else {
          FILE_INFO info = {"E:/Daniel/sgi digital twin/Modelica/IDEAS-master/IDEAS/Fluid/MixingVolumes/BaseClasses/PartialMixingVolume.mo",92,3,93,73,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1812));
        }
      }
      tmp1813 = 1;
    }
  }
  threadData->lastEquationSolved = 2821;
}

/*
equation index: 2822
type: ALGORITHM

  assert(plugFlowPipe_heat.vol_a.dynBal.p_start >= 0.0 and plugFlowPipe_heat.vol_a.dynBal.p_start <= 1e8, "Variable violating min/max constraint: 0.0 <= plugFlowPipe_heat.vol_a.dynBal.p_start <= 1e8, has value: " + String(plugFlowPipe_heat.vol_a.dynBal.p_start, "g"));
*/
OMC_DISABLE_OPT
static void pump_v3_basicCold_t_eqFunction_2822(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2822};
  modelica_boolean tmp1814;
  modelica_boolean tmp1815;
  static const MMC_DEFSTRINGLIT(tmp1816,104,"Variable violating min/max constraint: 0.0 <= plugFlowPipe_heat.vol_a.dynBal.p_start <= 1e8, has value: ");
  modelica_string tmp1817;
  modelica_metatype tmpMeta1818;
  static int tmp1819 = 0;
  if(!tmp1819)
  {
    tmp1814 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[639]] /* plugFlowPipe_heat.vol_a.dynBal.p_start PARAM */),0.0);
    tmp1815 = LessEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[639]] /* plugFlowPipe_heat.vol_a.dynBal.p_start PARAM */),1e8);
    if(!(tmp1814 && tmp1815))
    {
      tmp1817 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[639]] /* plugFlowPipe_heat.vol_a.dynBal.p_start PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta1818 = stringAppend(MMC_REFSTRINGLIT(tmp1816),tmp1817);
      {
        const char* assert_cond = "(plugFlowPipe_heat.vol_a.dynBal.p_start >= 0.0 and plugFlowPipe_heat.vol_a.dynBal.p_start <= 1e8)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"E:/Daniel/sgi digital twin/Modelica/IDEAS-master/IDEAS/Fluid/Interfaces/LumpedVolumeDeclarations.mo",29,3,31,47,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1818));
        } else {
          FILE_INFO info = {"E:/Daniel/sgi digital twin/Modelica/IDEAS-master/IDEAS/Fluid/Interfaces/LumpedVolumeDeclarations.mo",29,3,31,47,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1818));
        }
      }
      tmp1819 = 1;
    }
  }
  threadData->lastEquationSolved = 2822;
}

/*
equation index: 2823
type: ALGORITHM

  assert(plugFlowPipe_heat.vol_a.dynBal.T_start >= 1.0 and plugFlowPipe_heat.vol_a.dynBal.T_start <= 1e4, "Variable violating min/max constraint: 1.0 <= plugFlowPipe_heat.vol_a.dynBal.T_start <= 1e4, has value: " + String(plugFlowPipe_heat.vol_a.dynBal.T_start, "g"));
*/
OMC_DISABLE_OPT
static void pump_v3_basicCold_t_eqFunction_2823(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2823};
  modelica_boolean tmp1820;
  modelica_boolean tmp1821;
  static const MMC_DEFSTRINGLIT(tmp1822,104,"Variable violating min/max constraint: 1.0 <= plugFlowPipe_heat.vol_a.dynBal.T_start <= 1e4, has value: ");
  modelica_string tmp1823;
  modelica_metatype tmpMeta1824;
  static int tmp1825 = 0;
  if(!tmp1825)
  {
    tmp1820 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[633]] /* plugFlowPipe_heat.vol_a.dynBal.T_start PARAM */),1.0);
    tmp1821 = LessEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[633]] /* plugFlowPipe_heat.vol_a.dynBal.T_start PARAM */),1e4);
    if(!(tmp1820 && tmp1821))
    {
      tmp1823 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[633]] /* plugFlowPipe_heat.vol_a.dynBal.T_start PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta1824 = stringAppend(MMC_REFSTRINGLIT(tmp1822),tmp1823);
      {
        const char* assert_cond = "(plugFlowPipe_heat.vol_a.dynBal.T_start >= 1.0 and plugFlowPipe_heat.vol_a.dynBal.T_start <= 1e4)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"E:/Daniel/sgi digital twin/Modelica/IDEAS-master/IDEAS/Fluid/Interfaces/LumpedVolumeDeclarations.mo",32,3,34,47,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1824));
        } else {
          FILE_INFO info = {"E:/Daniel/sgi digital twin/Modelica/IDEAS-master/IDEAS/Fluid/Interfaces/LumpedVolumeDeclarations.mo",32,3,34,47,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1824));
        }
      }
      tmp1825 = 1;
    }
  }
  threadData->lastEquationSolved = 2823;
}

/*
equation index: 2824
type: ALGORITHM

  assert(plugFlowPipe_heat.vol_a.X_start[1] >= 0.0 and plugFlowPipe_heat.vol_a.X_start[1] <= 1.0, "Variable violating min/max constraint: 0.0 <= plugFlowPipe_heat.vol_a.X_start[1] <= 1.0, has value: " + String(plugFlowPipe_heat.vol_a.X_start[1], "g"));
*/
OMC_DISABLE_OPT
static void pump_v3_basicCold_t_eqFunction_2824(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2824};
  modelica_boolean tmp1826;
  modelica_boolean tmp1827;
  static const MMC_DEFSTRINGLIT(tmp1828,100,"Variable violating min/max constraint: 0.0 <= plugFlowPipe_heat.vol_a.X_start[1] <= 1.0, has value: ");
  modelica_string tmp1829;
  modelica_metatype tmpMeta1830;
  static int tmp1831 = 0;
  if(!tmp1831)
  {
    tmp1826 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[631]] /* plugFlowPipe_heat.vol_a.X_start[1] PARAM */),0.0);
    tmp1827 = LessEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[631]] /* plugFlowPipe_heat.vol_a.X_start[1] PARAM */),1.0);
    if(!(tmp1826 && tmp1827))
    {
      tmp1829 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[631]] /* plugFlowPipe_heat.vol_a.X_start[1] PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta1830 = stringAppend(MMC_REFSTRINGLIT(tmp1828),tmp1829);
      {
        const char* assert_cond = "(plugFlowPipe_heat.vol_a.X_start[1] >= 0.0 and plugFlowPipe_heat.vol_a.X_start[1] <= 1.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"E:/Daniel/sgi digital twin/Modelica/IDEAS-master/IDEAS/Fluid/Interfaces/LumpedVolumeDeclarations.mo",35,3,38,69,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1830));
        } else {
          FILE_INFO info = {"E:/Daniel/sgi digital twin/Modelica/IDEAS-master/IDEAS/Fluid/Interfaces/LumpedVolumeDeclarations.mo",35,3,38,69,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1830));
        }
      }
      tmp1831 = 1;
    }
  }
  threadData->lastEquationSolved = 2824;
}

/*
equation index: 2825
type: ALGORITHM

  assert(plugFlowPipe_heat.vol_a.dynBal.X_start[1] >= 0.0 and plugFlowPipe_heat.vol_a.dynBal.X_start[1] <= 1.0, "Variable violating min/max constraint: 0.0 <= plugFlowPipe_heat.vol_a.dynBal.X_start[1] <= 1.0, has value: " + String(plugFlowPipe_heat.vol_a.dynBal.X_start[1], "g"));
*/
OMC_DISABLE_OPT
static void pump_v3_basicCold_t_eqFunction_2825(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2825};
  modelica_boolean tmp1832;
  modelica_boolean tmp1833;
  static const MMC_DEFSTRINGLIT(tmp1834,107,"Variable violating min/max constraint: 0.0 <= plugFlowPipe_heat.vol_a.dynBal.X_start[1] <= 1.0, has value: ");
  modelica_string tmp1835;
  modelica_metatype tmpMeta1836;
  static int tmp1837 = 0;
  if(!tmp1837)
  {
    tmp1832 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[634]] /* plugFlowPipe_heat.vol_a.dynBal.X_start[1] PARAM */),0.0);
    tmp1833 = LessEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[634]] /* plugFlowPipe_heat.vol_a.dynBal.X_start[1] PARAM */),1.0);
    if(!(tmp1832 && tmp1833))
    {
      tmp1835 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[634]] /* plugFlowPipe_heat.vol_a.dynBal.X_start[1] PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta1836 = stringAppend(MMC_REFSTRINGLIT(tmp1834),tmp1835);
      {
        const char* assert_cond = "(plugFlowPipe_heat.vol_a.dynBal.X_start[1] >= 0.0 and plugFlowPipe_heat.vol_a.dynBal.X_start[1] <= 1.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"E:/Daniel/sgi digital twin/Modelica/IDEAS-master/IDEAS/Fluid/Interfaces/LumpedVolumeDeclarations.mo",35,3,38,69,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1836));
        } else {
          FILE_INFO info = {"E:/Daniel/sgi digital twin/Modelica/IDEAS-master/IDEAS/Fluid/Interfaces/LumpedVolumeDeclarations.mo",35,3,38,69,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1836));
        }
      }
      tmp1837 = 1;
    }
  }
  threadData->lastEquationSolved = 2825;
}

/*
equation index: 2826
type: ALGORITHM

  assert(plugFlowPipe_heat.vol_a.dynBal.rho_default >= 0.0, "Variable violating min constraint: 0.0 <= plugFlowPipe_heat.vol_a.dynBal.rho_default, has value: " + String(plugFlowPipe_heat.vol_a.dynBal.rho_default, "g"));
*/
OMC_DISABLE_OPT
static void pump_v3_basicCold_t_eqFunction_2826(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2826};
  modelica_boolean tmp1838;
  static const MMC_DEFSTRINGLIT(tmp1839,97,"Variable violating min constraint: 0.0 <= plugFlowPipe_heat.vol_a.dynBal.rho_default, has value: ");
  modelica_string tmp1840;
  modelica_metatype tmpMeta1841;
  static int tmp1842 = 0;
  if(!tmp1842)
  {
    tmp1838 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[640]] /* plugFlowPipe_heat.vol_a.dynBal.rho_default PARAM */),0.0);
    if(!tmp1838)
    {
      tmp1840 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[640]] /* plugFlowPipe_heat.vol_a.dynBal.rho_default PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta1841 = stringAppend(MMC_REFSTRINGLIT(tmp1839),tmp1840);
      {
        const char* assert_cond = "(plugFlowPipe_heat.vol_a.dynBal.rho_default >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"E:/Daniel/sgi digital twin/Modelica/IDEAS-master/IDEAS/Fluid/Interfaces/ConservationEquation.mo",148,3,149,59,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1841));
        } else {
          FILE_INFO info = {"E:/Daniel/sgi digital twin/Modelica/IDEAS-master/IDEAS/Fluid/Interfaces/ConservationEquation.mo",148,3,149,59,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1841));
        }
      }
      tmp1842 = 1;
    }
  }
  threadData->lastEquationSolved = 2826;
}

/*
equation index: 2827
type: ALGORITHM

  assert(plugFlowPipe_heat.vol_a.dynBal.state_default.T >= 1.0 and plugFlowPipe_heat.vol_a.dynBal.state_default.T <= 1e4, "Variable violating min/max constraint: 1.0 <= plugFlowPipe_heat.vol_a.dynBal.state_default.T <= 1e4, has value: " + String(plugFlowPipe_heat.vol_a.dynBal.state_default.T, "g"));
*/
OMC_DISABLE_OPT
static void pump_v3_basicCold_t_eqFunction_2827(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2827};
  modelica_boolean tmp1843;
  modelica_boolean tmp1844;
  static const MMC_DEFSTRINGLIT(tmp1845,112,"Variable violating min/max constraint: 1.0 <= plugFlowPipe_heat.vol_a.dynBal.state_default.T <= 1e4, has value: ");
  modelica_string tmp1846;
  modelica_metatype tmpMeta1847;
  static int tmp1848 = 0;
  if(!tmp1848)
  {
    tmp1843 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[642]] /* plugFlowPipe_heat.vol_a.dynBal.state_default.T PARAM */),1.0);
    tmp1844 = LessEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[642]] /* plugFlowPipe_heat.vol_a.dynBal.state_default.T PARAM */),1e4);
    if(!(tmp1843 && tmp1844))
    {
      tmp1846 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[642]] /* plugFlowPipe_heat.vol_a.dynBal.state_default.T PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta1847 = stringAppend(MMC_REFSTRINGLIT(tmp1845),tmp1846);
      {
        const char* assert_cond = "(plugFlowPipe_heat.vol_a.dynBal.state_default.T >= 1.0 and plugFlowPipe_heat.vol_a.dynBal.state_default.T <= 1e4)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/Daniel/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Media/package.mo",5870,7,5870,44,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1847));
        } else {
          FILE_INFO info = {"C:/Users/Daniel/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Media/package.mo",5870,7,5870,44,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1847));
        }
      }
      tmp1848 = 1;
    }
  }
  threadData->lastEquationSolved = 2827;
}

/*
equation index: 2828
type: ALGORITHM

  assert(plugFlowPipe_heat.vol_a.dynBal.state_default.p >= 0.0 and plugFlowPipe_heat.vol_a.dynBal.state_default.p <= 1e8, "Variable violating min/max constraint: 0.0 <= plugFlowPipe_heat.vol_a.dynBal.state_default.p <= 1e8, has value: " + String(plugFlowPipe_heat.vol_a.dynBal.state_default.p, "g"));
*/
OMC_DISABLE_OPT
static void pump_v3_basicCold_t_eqFunction_2828(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2828};
  modelica_boolean tmp1849;
  modelica_boolean tmp1850;
  static const MMC_DEFSTRINGLIT(tmp1851,112,"Variable violating min/max constraint: 0.0 <= plugFlowPipe_heat.vol_a.dynBal.state_default.p <= 1e8, has value: ");
  modelica_string tmp1852;
  modelica_metatype tmpMeta1853;
  static int tmp1854 = 0;
  if(!tmp1854)
  {
    tmp1849 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[643]] /* plugFlowPipe_heat.vol_a.dynBal.state_default.p PARAM */),0.0);
    tmp1850 = LessEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[643]] /* plugFlowPipe_heat.vol_a.dynBal.state_default.p PARAM */),1e8);
    if(!(tmp1849 && tmp1850))
    {
      tmp1852 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[643]] /* plugFlowPipe_heat.vol_a.dynBal.state_default.p PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta1853 = stringAppend(MMC_REFSTRINGLIT(tmp1851),tmp1852);
      {
        const char* assert_cond = "(plugFlowPipe_heat.vol_a.dynBal.state_default.p >= 0.0 and plugFlowPipe_heat.vol_a.dynBal.state_default.p <= 1e8)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/Daniel/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Media/package.mo",5869,7,5869,55,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1853));
        } else {
          FILE_INFO info = {"C:/Users/Daniel/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Media/package.mo",5869,7,5869,55,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1853));
        }
      }
      tmp1854 = 1;
    }
  }
  threadData->lastEquationSolved = 2828;
}

/*
equation index: 2829
type: ALGORITHM

  assert(plugFlowPipe_heat.vol_a.dynBal.rho_start >= 0.0, "Variable violating min constraint: 0.0 <= plugFlowPipe_heat.vol_a.dynBal.rho_start, has value: " + String(plugFlowPipe_heat.vol_a.dynBal.rho_start, "g"));
*/
OMC_DISABLE_OPT
static void pump_v3_basicCold_t_eqFunction_2829(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2829};
  modelica_boolean tmp1855;
  static const MMC_DEFSTRINGLIT(tmp1856,95,"Variable violating min constraint: 0.0 <= plugFlowPipe_heat.vol_a.dynBal.rho_start, has value: ");
  modelica_string tmp1857;
  modelica_metatype tmpMeta1858;
  static int tmp1859 = 0;
  if(!tmp1859)
  {
    tmp1855 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[641]] /* plugFlowPipe_heat.vol_a.dynBal.rho_start PARAM */),0.0);
    if(!tmp1855)
    {
      tmp1857 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[641]] /* plugFlowPipe_heat.vol_a.dynBal.rho_start PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta1858 = stringAppend(MMC_REFSTRINGLIT(tmp1856),tmp1857);
      {
        const char* assert_cond = "(plugFlowPipe_heat.vol_a.dynBal.rho_start >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"E:/Daniel/sgi digital twin/Modelica/IDEAS-master/IDEAS/Fluid/Interfaces/ConservationEquation.mo",134,3,138,70,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1858));
        } else {
          FILE_INFO info = {"E:/Daniel/sgi digital twin/Modelica/IDEAS-master/IDEAS/Fluid/Interfaces/ConservationEquation.mo",134,3,138,70,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1858));
        }
      }
      tmp1859 = 1;
    }
  }
  threadData->lastEquationSolved = 2829;
}

/*
equation index: 2830
type: ALGORITHM

  assert(rhoPipe_heat >= 0.0, "Variable violating min constraint: 0.0 <= rhoPipe_heat, has value: " + String(rhoPipe_heat, "g"));
*/
OMC_DISABLE_OPT
static void pump_v3_basicCold_t_eqFunction_2830(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2830};
  modelica_boolean tmp1860;
  static const MMC_DEFSTRINGLIT(tmp1861,67,"Variable violating min constraint: 0.0 <= rhoPipe_heat, has value: ");
  modelica_string tmp1862;
  modelica_metatype tmpMeta1863;
  static int tmp1864 = 0;
  if(!tmp1864)
  {
    tmp1860 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[951]] /* rhoPipe_heat PARAM */),0.0);
    if(!tmp1860)
    {
      tmp1862 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[951]] /* rhoPipe_heat PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta1863 = stringAppend(MMC_REFSTRINGLIT(tmp1861),tmp1862);
      {
        const char* assert_cond = "(rhoPipe_heat >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"E:/Daniel/sgi digital twin/Modelica/pump_v3_basicCold_TinitParam.mo",69,3,69,76,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1863));
        } else {
          FILE_INFO info = {"E:/Daniel/sgi digital twin/Modelica/pump_v3_basicCold_TinitParam.mo",69,3,69,76,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1863));
        }
      }
      tmp1864 = 1;
    }
  }
  threadData->lastEquationSolved = 2830;
}

/*
equation index: 2831
type: ALGORITHM

  assert(plugFlowPipe_heat.rhoPip >= 0.0, "Variable violating min constraint: 0.0 <= plugFlowPipe_heat.rhoPip, has value: " + String(plugFlowPipe_heat.rhoPip, "g"));
*/
OMC_DISABLE_OPT
static void pump_v3_basicCold_t_eqFunction_2831(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2831};
  modelica_boolean tmp1865;
  static const MMC_DEFSTRINGLIT(tmp1866,79,"Variable violating min constraint: 0.0 <= plugFlowPipe_heat.rhoPip, has value: ");
  modelica_string tmp1867;
  modelica_metatype tmpMeta1868;
  static int tmp1869 = 0;
  if(!tmp1869)
  {
    tmp1865 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[611]] /* plugFlowPipe_heat.rhoPip PARAM */),0.0);
    if(!tmp1865)
    {
      tmp1867 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[611]] /* plugFlowPipe_heat.rhoPip PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta1868 = stringAppend(MMC_REFSTRINGLIT(tmp1866),tmp1867);
      {
        const char* assert_cond = "(plugFlowPipe_heat.rhoPip >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"E:/Daniel/sgi digital twin/Modelica/IDEAS-master/IDEAS/Fluid/FixedResistances/BaseClasses/PlugFlowPipe.mo",54,3,56,62,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1868));
        } else {
          FILE_INFO info = {"E:/Daniel/sgi digital twin/Modelica/IDEAS-master/IDEAS/Fluid/FixedResistances/BaseClasses/PlugFlowPipe.mo",54,3,56,62,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1868));
        }
      }
      tmp1869 = 1;
    }
  }
  threadData->lastEquationSolved = 2831;
}

/*
equation index: 2832
type: ALGORITHM

  assert(plugFlowPipe_heat.sta_default.p >= 0.0 and plugFlowPipe_heat.sta_default.p <= 1e8, "Variable violating min/max constraint: 0.0 <= plugFlowPipe_heat.sta_default.p <= 1e8, has value: " + String(plugFlowPipe_heat.sta_default.p, "g"));
*/
OMC_DISABLE_OPT
static void pump_v3_basicCold_t_eqFunction_2832(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2832};
  modelica_boolean tmp1870;
  modelica_boolean tmp1871;
  static const MMC_DEFSTRINGLIT(tmp1872,97,"Variable violating min/max constraint: 0.0 <= plugFlowPipe_heat.sta_default.p <= 1e8, has value: ");
  modelica_string tmp1873;
  modelica_metatype tmpMeta1874;
  static int tmp1875 = 0;
  if(!tmp1875)
  {
    tmp1870 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[617]] /* plugFlowPipe_heat.sta_default.p PARAM */),0.0);
    tmp1871 = LessEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[617]] /* plugFlowPipe_heat.sta_default.p PARAM */),1e8);
    if(!(tmp1870 && tmp1871))
    {
      tmp1873 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[617]] /* plugFlowPipe_heat.sta_default.p PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta1874 = stringAppend(MMC_REFSTRINGLIT(tmp1872),tmp1873);
      {
        const char* assert_cond = "(plugFlowPipe_heat.sta_default.p >= 0.0 and plugFlowPipe_heat.sta_default.p <= 1e8)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/Daniel/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Media/package.mo",5869,7,5869,55,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1874));
        } else {
          FILE_INFO info = {"C:/Users/Daniel/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Media/package.mo",5869,7,5869,55,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1874));
        }
      }
      tmp1875 = 1;
    }
  }
  threadData->lastEquationSolved = 2832;
}

/*
equation index: 2833
type: ALGORITHM

  assert(plugFlowPipe_heat.sta_default.T >= 1.0 and plugFlowPipe_heat.sta_default.T <= 1e4, "Variable violating min/max constraint: 1.0 <= plugFlowPipe_heat.sta_default.T <= 1e4, has value: " + String(plugFlowPipe_heat.sta_default.T, "g"));
*/
OMC_DISABLE_OPT
static void pump_v3_basicCold_t_eqFunction_2833(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2833};
  modelica_boolean tmp1876;
  modelica_boolean tmp1877;
  static const MMC_DEFSTRINGLIT(tmp1878,97,"Variable violating min/max constraint: 1.0 <= plugFlowPipe_heat.sta_default.T <= 1e4, has value: ");
  modelica_string tmp1879;
  modelica_metatype tmpMeta1880;
  static int tmp1881 = 0;
  if(!tmp1881)
  {
    tmp1876 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[616]] /* plugFlowPipe_heat.sta_default.T PARAM */),1.0);
    tmp1877 = LessEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[616]] /* plugFlowPipe_heat.sta_default.T PARAM */),1e4);
    if(!(tmp1876 && tmp1877))
    {
      tmp1879 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[616]] /* plugFlowPipe_heat.sta_default.T PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta1880 = stringAppend(MMC_REFSTRINGLIT(tmp1878),tmp1879);
      {
        const char* assert_cond = "(plugFlowPipe_heat.sta_default.T >= 1.0 and plugFlowPipe_heat.sta_default.T <= 1e4)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/Daniel/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Media/package.mo",5870,7,5870,44,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1880));
        } else {
          FILE_INFO info = {"C:/Users/Daniel/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Media/package.mo",5870,7,5870,44,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1880));
        }
      }
      tmp1881 = 1;
    }
  }
  threadData->lastEquationSolved = 2833;
}

/*
equation index: 2834
type: ALGORITHM

  assert(plugFlowPipe_heat.vol_a.dynBal.mSenFac >= 1.0, "Variable violating min constraint: 1.0 <= plugFlowPipe_heat.vol_a.dynBal.mSenFac, has value: " + String(plugFlowPipe_heat.vol_a.dynBal.mSenFac, "g"));
*/
OMC_DISABLE_OPT
static void pump_v3_basicCold_t_eqFunction_2834(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2834};
  modelica_boolean tmp1882;
  static const MMC_DEFSTRINGLIT(tmp1883,93,"Variable violating min constraint: 1.0 <= plugFlowPipe_heat.vol_a.dynBal.mSenFac, has value: ");
  modelica_string tmp1884;
  modelica_metatype tmpMeta1885;
  static int tmp1886 = 0;
  if(!tmp1886)
  {
    tmp1882 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[638]] /* plugFlowPipe_heat.vol_a.dynBal.mSenFac PARAM */),1.0);
    if(!tmp1882)
    {
      tmp1884 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[638]] /* plugFlowPipe_heat.vol_a.dynBal.mSenFac PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta1885 = stringAppend(MMC_REFSTRINGLIT(tmp1883),tmp1884);
      {
        const char* assert_cond = "(plugFlowPipe_heat.vol_a.dynBal.mSenFac >= 1.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"E:/Daniel/sgi digital twin/Modelica/IDEAS-master/IDEAS/Fluid/Interfaces/LumpedVolumeDeclarations.mo",47,3,49,39,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1885));
        } else {
          FILE_INFO info = {"E:/Daniel/sgi digital twin/Modelica/IDEAS-master/IDEAS/Fluid/Interfaces/LumpedVolumeDeclarations.mo",47,3,49,39,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1885));
        }
      }
      tmp1886 = 1;
    }
  }
  threadData->lastEquationSolved = 2834;
}

/*
equation index: 2835
type: ALGORITHM

  assert(plugFlowPipe_heat.vol_a.dynBal.traceDynamics >= Modelica.Fluid.Types.Dynamics.DynamicFreeInitial and plugFlowPipe_heat.vol_a.dynBal.traceDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, "Variable violating min/max constraint: Modelica.Fluid.Types.Dynamics.DynamicFreeInitial <= plugFlowPipe_heat.vol_a.dynBal.traceDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, has value: " + String(plugFlowPipe_heat.vol_a.dynBal.traceDynamics, "d"));
*/
OMC_DISABLE_OPT
static void pump_v3_basicCold_t_eqFunction_2835(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2835};
  modelica_boolean tmp1887;
  modelica_boolean tmp1888;
  static const MMC_DEFSTRINGLIT(tmp1889,193,"Variable violating min/max constraint: Modelica.Fluid.Types.Dynamics.DynamicFreeInitial <= plugFlowPipe_heat.vol_a.dynBal.traceDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, has value: ");
  modelica_string tmp1890;
  modelica_metatype tmpMeta1891;
  static int tmp1892 = 0;
  if(!tmp1892)
  {
    tmp1887 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[69]] /* plugFlowPipe_heat.vol_a.dynBal.traceDynamics PARAM */),1);
    tmp1888 = LessEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[69]] /* plugFlowPipe_heat.vol_a.dynBal.traceDynamics PARAM */),4);
    if(!(tmp1887 && tmp1888))
    {
      tmp1890 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[69]] /* plugFlowPipe_heat.vol_a.dynBal.traceDynamics PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta1891 = stringAppend(MMC_REFSTRINGLIT(tmp1889),tmp1890);
      {
        const char* assert_cond = "(plugFlowPipe_heat.vol_a.dynBal.traceDynamics >= Modelica.Fluid.Types.Dynamics.DynamicFreeInitial and plugFlowPipe_heat.vol_a.dynBal.traceDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"E:/Daniel/sgi digital twin/Modelica/IDEAS-master/IDEAS/Fluid/Interfaces/LumpedVolumeDeclarations.mo",24,3,26,88,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1891));
        } else {
          FILE_INFO info = {"E:/Daniel/sgi digital twin/Modelica/IDEAS-master/IDEAS/Fluid/Interfaces/LumpedVolumeDeclarations.mo",24,3,26,88,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1891));
        }
      }
      tmp1892 = 1;
    }
  }
  threadData->lastEquationSolved = 2835;
}

/*
equation index: 2836
type: ALGORITHM

  assert(plugFlowPipe_heat.vol_a.dynBal.substanceDynamics >= Modelica.Fluid.Types.Dynamics.DynamicFreeInitial and plugFlowPipe_heat.vol_a.dynBal.substanceDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, "Variable violating min/max constraint: Modelica.Fluid.Types.Dynamics.DynamicFreeInitial <= plugFlowPipe_heat.vol_a.dynBal.substanceDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, has value: " + String(plugFlowPipe_heat.vol_a.dynBal.substanceDynamics, "d"));
*/
OMC_DISABLE_OPT
static void pump_v3_basicCold_t_eqFunction_2836(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2836};
  modelica_boolean tmp1893;
  modelica_boolean tmp1894;
  static const MMC_DEFSTRINGLIT(tmp1895,197,"Variable violating min/max constraint: Modelica.Fluid.Types.Dynamics.DynamicFreeInitial <= plugFlowPipe_heat.vol_a.dynBal.substanceDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, has value: ");
  modelica_string tmp1896;
  modelica_metatype tmpMeta1897;
  static int tmp1898 = 0;
  if(!tmp1898)
  {
    tmp1893 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[68]] /* plugFlowPipe_heat.vol_a.dynBal.substanceDynamics PARAM */),1);
    tmp1894 = LessEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[68]] /* plugFlowPipe_heat.vol_a.dynBal.substanceDynamics PARAM */),4);
    if(!(tmp1893 && tmp1894))
    {
      tmp1896 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[68]] /* plugFlowPipe_heat.vol_a.dynBal.substanceDynamics PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta1897 = stringAppend(MMC_REFSTRINGLIT(tmp1895),tmp1896);
      {
        const char* assert_cond = "(plugFlowPipe_heat.vol_a.dynBal.substanceDynamics >= Modelica.Fluid.Types.Dynamics.DynamicFreeInitial and plugFlowPipe_heat.vol_a.dynBal.substanceDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"E:/Daniel/sgi digital twin/Modelica/IDEAS-master/IDEAS/Fluid/Interfaces/LumpedVolumeDeclarations.mo",21,3,23,88,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1897));
        } else {
          FILE_INFO info = {"E:/Daniel/sgi digital twin/Modelica/IDEAS-master/IDEAS/Fluid/Interfaces/LumpedVolumeDeclarations.mo",21,3,23,88,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1897));
        }
      }
      tmp1898 = 1;
    }
  }
  threadData->lastEquationSolved = 2836;
}

/*
equation index: 2837
type: ALGORITHM

  assert(plugFlowPipe_heat.vol_a.dynBal.massDynamics >= Modelica.Fluid.Types.Dynamics.DynamicFreeInitial and plugFlowPipe_heat.vol_a.dynBal.massDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, "Variable violating min/max constraint: Modelica.Fluid.Types.Dynamics.DynamicFreeInitial <= plugFlowPipe_heat.vol_a.dynBal.massDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, has value: " + String(plugFlowPipe_heat.vol_a.dynBal.massDynamics, "d"));
*/
OMC_DISABLE_OPT
static void pump_v3_basicCold_t_eqFunction_2837(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2837};
  modelica_boolean tmp1899;
  modelica_boolean tmp1900;
  static const MMC_DEFSTRINGLIT(tmp1901,192,"Variable violating min/max constraint: Modelica.Fluid.Types.Dynamics.DynamicFreeInitial <= plugFlowPipe_heat.vol_a.dynBal.massDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, has value: ");
  modelica_string tmp1902;
  modelica_metatype tmpMeta1903;
  static int tmp1904 = 0;
  if(!tmp1904)
  {
    tmp1899 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[66]] /* plugFlowPipe_heat.vol_a.dynBal.massDynamics PARAM */),1);
    tmp1900 = LessEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[66]] /* plugFlowPipe_heat.vol_a.dynBal.massDynamics PARAM */),4);
    if(!(tmp1899 && tmp1900))
    {
      tmp1902 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[66]] /* plugFlowPipe_heat.vol_a.dynBal.massDynamics PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta1903 = stringAppend(MMC_REFSTRINGLIT(tmp1901),tmp1902);
      {
        const char* assert_cond = "(plugFlowPipe_heat.vol_a.dynBal.massDynamics >= Modelica.Fluid.Types.Dynamics.DynamicFreeInitial and plugFlowPipe_heat.vol_a.dynBal.massDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"E:/Daniel/sgi digital twin/Modelica/IDEAS-master/IDEAS/Fluid/Interfaces/LumpedVolumeDeclarations.mo",18,3,20,74,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1903));
        } else {
          FILE_INFO info = {"E:/Daniel/sgi digital twin/Modelica/IDEAS-master/IDEAS/Fluid/Interfaces/LumpedVolumeDeclarations.mo",18,3,20,74,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1903));
        }
      }
      tmp1904 = 1;
    }
  }
  threadData->lastEquationSolved = 2837;
}

/*
equation index: 2838
type: ALGORITHM

  assert(plugFlowPipe_heat.vol_a.dynBal.energyDynamics >= Modelica.Fluid.Types.Dynamics.DynamicFreeInitial and plugFlowPipe_heat.vol_a.dynBal.energyDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, "Variable violating min/max constraint: Modelica.Fluid.Types.Dynamics.DynamicFreeInitial <= plugFlowPipe_heat.vol_a.dynBal.energyDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, has value: " + String(plugFlowPipe_heat.vol_a.dynBal.energyDynamics, "d"));
*/
OMC_DISABLE_OPT
static void pump_v3_basicCold_t_eqFunction_2838(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2838};
  modelica_boolean tmp1905;
  modelica_boolean tmp1906;
  static const MMC_DEFSTRINGLIT(tmp1907,194,"Variable violating min/max constraint: Modelica.Fluid.Types.Dynamics.DynamicFreeInitial <= plugFlowPipe_heat.vol_a.dynBal.energyDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, has value: ");
  modelica_string tmp1908;
  modelica_metatype tmpMeta1909;
  static int tmp1910 = 0;
  if(!tmp1910)
  {
    tmp1905 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[65]] /* plugFlowPipe_heat.vol_a.dynBal.energyDynamics PARAM */),1);
    tmp1906 = LessEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[65]] /* plugFlowPipe_heat.vol_a.dynBal.energyDynamics PARAM */),4);
    if(!(tmp1905 && tmp1906))
    {
      tmp1908 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[65]] /* plugFlowPipe_heat.vol_a.dynBal.energyDynamics PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta1909 = stringAppend(MMC_REFSTRINGLIT(tmp1907),tmp1908);
      {
        const char* assert_cond = "(plugFlowPipe_heat.vol_a.dynBal.energyDynamics >= Modelica.Fluid.Types.Dynamics.DynamicFreeInitial and plugFlowPipe_heat.vol_a.dynBal.energyDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"E:/Daniel/sgi digital twin/Modelica/IDEAS-master/IDEAS/Fluid/Interfaces/LumpedVolumeDeclarations.mo",15,3,17,88,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1909));
        } else {
          FILE_INFO info = {"E:/Daniel/sgi digital twin/Modelica/IDEAS-master/IDEAS/Fluid/Interfaces/LumpedVolumeDeclarations.mo",15,3,17,88,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1909));
        }
      }
      tmp1910 = 1;
    }
  }
  threadData->lastEquationSolved = 2838;
}

/*
equation index: 2839
type: ALGORITHM

  assert(plugFlowPipe_heat.vol_a.m_flow_small >= 0.0, "Variable violating min constraint: 0.0 <= plugFlowPipe_heat.vol_a.m_flow_small, has value: " + String(plugFlowPipe_heat.vol_a.m_flow_small, "g"));
*/
OMC_DISABLE_OPT
static void pump_v3_basicCold_t_eqFunction_2839(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2839};
  modelica_boolean tmp1911;
  static const MMC_DEFSTRINGLIT(tmp1912,91,"Variable violating min constraint: 0.0 <= plugFlowPipe_heat.vol_a.m_flow_small, has value: ");
  modelica_string tmp1913;
  modelica_metatype tmpMeta1914;
  static int tmp1915 = 0;
  if(!tmp1915)
  {
    tmp1911 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[646]] /* plugFlowPipe_heat.vol_a.m_flow_small PARAM */),0.0);
    if(!tmp1911)
    {
      tmp1913 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[646]] /* plugFlowPipe_heat.vol_a.m_flow_small PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta1914 = stringAppend(MMC_REFSTRINGLIT(tmp1912),tmp1913);
      {
        const char* assert_cond = "(plugFlowPipe_heat.vol_a.m_flow_small >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"E:/Daniel/sgi digital twin/Modelica/IDEAS-master/IDEAS/Fluid/MixingVolumes/BaseClasses/PartialMixingVolume.mo",25,3,27,40,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1914));
        } else {
          FILE_INFO info = {"E:/Daniel/sgi digital twin/Modelica/IDEAS-master/IDEAS/Fluid/MixingVolumes/BaseClasses/PartialMixingVolume.mo",25,3,27,40,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1914));
        }
      }
      tmp1915 = 1;
    }
  }
  threadData->lastEquationSolved = 2839;
}

/*
equation index: 2840
type: ALGORITHM

  assert(plugFlowPipe_heat.vol_a.m_flow_nominal >= 0.0, "Variable violating min constraint: 0.0 <= plugFlowPipe_heat.vol_a.m_flow_nominal, has value: " + String(plugFlowPipe_heat.vol_a.m_flow_nominal, "g"));
*/
OMC_DISABLE_OPT
static void pump_v3_basicCold_t_eqFunction_2840(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2840};
  modelica_boolean tmp1916;
  static const MMC_DEFSTRINGLIT(tmp1917,93,"Variable violating min constraint: 0.0 <= plugFlowPipe_heat.vol_a.m_flow_nominal, has value: ");
  modelica_string tmp1918;
  modelica_metatype tmpMeta1919;
  static int tmp1920 = 0;
  if(!tmp1920)
  {
    tmp1916 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[645]] /* plugFlowPipe_heat.vol_a.m_flow_nominal PARAM */),0.0);
    if(!tmp1916)
    {
      tmp1918 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[645]] /* plugFlowPipe_heat.vol_a.m_flow_nominal PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta1919 = stringAppend(MMC_REFSTRINGLIT(tmp1917),tmp1918);
      {
        const char* assert_cond = "(plugFlowPipe_heat.vol_a.m_flow_nominal >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"E:/Daniel/sgi digital twin/Modelica/IDEAS-master/IDEAS/Fluid/MixingVolumes/BaseClasses/PartialMixingVolume.mo",20,3,21,76,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1919));
        } else {
          FILE_INFO info = {"E:/Daniel/sgi digital twin/Modelica/IDEAS-master/IDEAS/Fluid/MixingVolumes/BaseClasses/PartialMixingVolume.mo",20,3,21,76,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1919));
        }
      }
      tmp1920 = 1;
    }
  }
  threadData->lastEquationSolved = 2840;
}

/*
equation index: 2841
type: ALGORITHM

  assert(plugFlowPipe_heat.vol_a.mSenFac >= 1.0, "Variable violating min constraint: 1.0 <= plugFlowPipe_heat.vol_a.mSenFac, has value: " + String(plugFlowPipe_heat.vol_a.mSenFac, "g"));
*/
OMC_DISABLE_OPT
static void pump_v3_basicCold_t_eqFunction_2841(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2841};
  modelica_boolean tmp1921;
  static const MMC_DEFSTRINGLIT(tmp1922,86,"Variable violating min constraint: 1.0 <= plugFlowPipe_heat.vol_a.mSenFac, has value: ");
  modelica_string tmp1923;
  modelica_metatype tmpMeta1924;
  static int tmp1925 = 0;
  if(!tmp1925)
  {
    tmp1921 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[644]] /* plugFlowPipe_heat.vol_a.mSenFac PARAM */),1.0);
    if(!tmp1921)
    {
      tmp1923 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[644]] /* plugFlowPipe_heat.vol_a.mSenFac PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta1924 = stringAppend(MMC_REFSTRINGLIT(tmp1922),tmp1923);
      {
        const char* assert_cond = "(plugFlowPipe_heat.vol_a.mSenFac >= 1.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"E:/Daniel/sgi digital twin/Modelica/IDEAS-master/IDEAS/Fluid/Interfaces/LumpedVolumeDeclarations.mo",47,3,49,39,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1924));
        } else {
          FILE_INFO info = {"E:/Daniel/sgi digital twin/Modelica/IDEAS-master/IDEAS/Fluid/Interfaces/LumpedVolumeDeclarations.mo",47,3,49,39,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1924));
        }
      }
      tmp1925 = 1;
    }
  }
  threadData->lastEquationSolved = 2841;
}

/*
equation index: 2842
type: ALGORITHM

  assert(plugFlowPipe_heat.vol_a.traceDynamics >= Modelica.Fluid.Types.Dynamics.DynamicFreeInitial and plugFlowPipe_heat.vol_a.traceDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, "Variable violating min/max constraint: Modelica.Fluid.Types.Dynamics.DynamicFreeInitial <= plugFlowPipe_heat.vol_a.traceDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, has value: " + String(plugFlowPipe_heat.vol_a.traceDynamics, "d"));
*/
OMC_DISABLE_OPT
static void pump_v3_basicCold_t_eqFunction_2842(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2842};
  modelica_boolean tmp1926;
  modelica_boolean tmp1927;
  static const MMC_DEFSTRINGLIT(tmp1928,186,"Variable violating min/max constraint: Modelica.Fluid.Types.Dynamics.DynamicFreeInitial <= plugFlowPipe_heat.vol_a.traceDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, has value: ");
  modelica_string tmp1929;
  modelica_metatype tmpMeta1930;
  static int tmp1931 = 0;
  if(!tmp1931)
  {
    tmp1926 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[74]] /* plugFlowPipe_heat.vol_a.traceDynamics PARAM */),1);
    tmp1927 = LessEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[74]] /* plugFlowPipe_heat.vol_a.traceDynamics PARAM */),4);
    if(!(tmp1926 && tmp1927))
    {
      tmp1929 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[74]] /* plugFlowPipe_heat.vol_a.traceDynamics PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta1930 = stringAppend(MMC_REFSTRINGLIT(tmp1928),tmp1929);
      {
        const char* assert_cond = "(plugFlowPipe_heat.vol_a.traceDynamics >= Modelica.Fluid.Types.Dynamics.DynamicFreeInitial and plugFlowPipe_heat.vol_a.traceDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"E:/Daniel/sgi digital twin/Modelica/IDEAS-master/IDEAS/Fluid/Interfaces/LumpedVolumeDeclarations.mo",24,3,26,88,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1930));
        } else {
          FILE_INFO info = {"E:/Daniel/sgi digital twin/Modelica/IDEAS-master/IDEAS/Fluid/Interfaces/LumpedVolumeDeclarations.mo",24,3,26,88,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1930));
        }
      }
      tmp1931 = 1;
    }
  }
  threadData->lastEquationSolved = 2842;
}

/*
equation index: 2843
type: ALGORITHM

  assert(plugFlowPipe_heat.vol_a.substanceDynamics >= Modelica.Fluid.Types.Dynamics.DynamicFreeInitial and plugFlowPipe_heat.vol_a.substanceDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, "Variable violating min/max constraint: Modelica.Fluid.Types.Dynamics.DynamicFreeInitial <= plugFlowPipe_heat.vol_a.substanceDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, has value: " + String(plugFlowPipe_heat.vol_a.substanceDynamics, "d"));
*/
OMC_DISABLE_OPT
static void pump_v3_basicCold_t_eqFunction_2843(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2843};
  modelica_boolean tmp1932;
  modelica_boolean tmp1933;
  static const MMC_DEFSTRINGLIT(tmp1934,190,"Variable violating min/max constraint: Modelica.Fluid.Types.Dynamics.DynamicFreeInitial <= plugFlowPipe_heat.vol_a.substanceDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, has value: ");
  modelica_string tmp1935;
  modelica_metatype tmpMeta1936;
  static int tmp1937 = 0;
  if(!tmp1937)
  {
    tmp1932 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[73]] /* plugFlowPipe_heat.vol_a.substanceDynamics PARAM */),1);
    tmp1933 = LessEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[73]] /* plugFlowPipe_heat.vol_a.substanceDynamics PARAM */),4);
    if(!(tmp1932 && tmp1933))
    {
      tmp1935 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[73]] /* plugFlowPipe_heat.vol_a.substanceDynamics PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta1936 = stringAppend(MMC_REFSTRINGLIT(tmp1934),tmp1935);
      {
        const char* assert_cond = "(plugFlowPipe_heat.vol_a.substanceDynamics >= Modelica.Fluid.Types.Dynamics.DynamicFreeInitial and plugFlowPipe_heat.vol_a.substanceDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"E:/Daniel/sgi digital twin/Modelica/IDEAS-master/IDEAS/Fluid/Interfaces/LumpedVolumeDeclarations.mo",21,3,23,88,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1936));
        } else {
          FILE_INFO info = {"E:/Daniel/sgi digital twin/Modelica/IDEAS-master/IDEAS/Fluid/Interfaces/LumpedVolumeDeclarations.mo",21,3,23,88,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1936));
        }
      }
      tmp1937 = 1;
    }
  }
  threadData->lastEquationSolved = 2843;
}

/*
equation index: 2844
type: ALGORITHM

  assert(plugFlowPipe_heat.vol_a.massDynamics >= Modelica.Fluid.Types.Dynamics.DynamicFreeInitial and plugFlowPipe_heat.vol_a.massDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, "Variable violating min/max constraint: Modelica.Fluid.Types.Dynamics.DynamicFreeInitial <= plugFlowPipe_heat.vol_a.massDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, has value: " + String(plugFlowPipe_heat.vol_a.massDynamics, "d"));
*/
OMC_DISABLE_OPT
static void pump_v3_basicCold_t_eqFunction_2844(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2844};
  modelica_boolean tmp1938;
  modelica_boolean tmp1939;
  static const MMC_DEFSTRINGLIT(tmp1940,185,"Variable violating min/max constraint: Modelica.Fluid.Types.Dynamics.DynamicFreeInitial <= plugFlowPipe_heat.vol_a.massDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, has value: ");
  modelica_string tmp1941;
  modelica_metatype tmpMeta1942;
  static int tmp1943 = 0;
  if(!tmp1943)
  {
    tmp1938 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[71]] /* plugFlowPipe_heat.vol_a.massDynamics PARAM */),1);
    tmp1939 = LessEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[71]] /* plugFlowPipe_heat.vol_a.massDynamics PARAM */),4);
    if(!(tmp1938 && tmp1939))
    {
      tmp1941 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[71]] /* plugFlowPipe_heat.vol_a.massDynamics PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta1942 = stringAppend(MMC_REFSTRINGLIT(tmp1940),tmp1941);
      {
        const char* assert_cond = "(plugFlowPipe_heat.vol_a.massDynamics >= Modelica.Fluid.Types.Dynamics.DynamicFreeInitial and plugFlowPipe_heat.vol_a.massDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"E:/Daniel/sgi digital twin/Modelica/IDEAS-master/IDEAS/Fluid/Interfaces/LumpedVolumeDeclarations.mo",18,3,20,74,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1942));
        } else {
          FILE_INFO info = {"E:/Daniel/sgi digital twin/Modelica/IDEAS-master/IDEAS/Fluid/Interfaces/LumpedVolumeDeclarations.mo",18,3,20,74,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1942));
        }
      }
      tmp1943 = 1;
    }
  }
  threadData->lastEquationSolved = 2844;
}

/*
equation index: 2845
type: ALGORITHM

  assert(plugFlowPipe_heat.vol_a.energyDynamics >= Modelica.Fluid.Types.Dynamics.DynamicFreeInitial and plugFlowPipe_heat.vol_a.energyDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, "Variable violating min/max constraint: Modelica.Fluid.Types.Dynamics.DynamicFreeInitial <= plugFlowPipe_heat.vol_a.energyDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, has value: " + String(plugFlowPipe_heat.vol_a.energyDynamics, "d"));
*/
OMC_DISABLE_OPT
static void pump_v3_basicCold_t_eqFunction_2845(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2845};
  modelica_boolean tmp1944;
  modelica_boolean tmp1945;
  static const MMC_DEFSTRINGLIT(tmp1946,187,"Variable violating min/max constraint: Modelica.Fluid.Types.Dynamics.DynamicFreeInitial <= plugFlowPipe_heat.vol_a.energyDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, has value: ");
  modelica_string tmp1947;
  modelica_metatype tmpMeta1948;
  static int tmp1949 = 0;
  if(!tmp1949)
  {
    tmp1944 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[70]] /* plugFlowPipe_heat.vol_a.energyDynamics PARAM */),1);
    tmp1945 = LessEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[70]] /* plugFlowPipe_heat.vol_a.energyDynamics PARAM */),4);
    if(!(tmp1944 && tmp1945))
    {
      tmp1947 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[70]] /* plugFlowPipe_heat.vol_a.energyDynamics PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta1948 = stringAppend(MMC_REFSTRINGLIT(tmp1946),tmp1947);
      {
        const char* assert_cond = "(plugFlowPipe_heat.vol_a.energyDynamics >= Modelica.Fluid.Types.Dynamics.DynamicFreeInitial and plugFlowPipe_heat.vol_a.energyDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"E:/Daniel/sgi digital twin/Modelica/IDEAS-master/IDEAS/Fluid/Interfaces/LumpedVolumeDeclarations.mo",15,3,17,88,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1948));
        } else {
          FILE_INFO info = {"E:/Daniel/sgi digital twin/Modelica/IDEAS-master/IDEAS/Fluid/Interfaces/LumpedVolumeDeclarations.mo",15,3,17,88,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1948));
        }
      }
      tmp1949 = 1;
    }
  }
  threadData->lastEquationSolved = 2845;
}

/*
equation index: 2846
type: ALGORITHM

  assert(plugFlowPipe_heat.vol_b.T_start >= 1.0 and plugFlowPipe_heat.vol_b.T_start <= 1e4, "Variable violating min/max constraint: 1.0 <= plugFlowPipe_heat.vol_b.T_start <= 1e4, has value: " + String(plugFlowPipe_heat.vol_b.T_start, "g"));
*/
OMC_DISABLE_OPT
static void pump_v3_basicCold_t_eqFunction_2846(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2846};
  modelica_boolean tmp1950;
  modelica_boolean tmp1951;
  static const MMC_DEFSTRINGLIT(tmp1952,97,"Variable violating min/max constraint: 1.0 <= plugFlowPipe_heat.vol_b.T_start <= 1e4, has value: ");
  modelica_string tmp1953;
  modelica_metatype tmpMeta1954;
  static int tmp1955 = 0;
  if(!tmp1955)
  {
    tmp1950 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[654]] /* plugFlowPipe_heat.vol_b.T_start PARAM */),1.0);
    tmp1951 = LessEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[654]] /* plugFlowPipe_heat.vol_b.T_start PARAM */),1e4);
    if(!(tmp1950 && tmp1951))
    {
      tmp1953 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[654]] /* plugFlowPipe_heat.vol_b.T_start PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta1954 = stringAppend(MMC_REFSTRINGLIT(tmp1952),tmp1953);
      {
        const char* assert_cond = "(plugFlowPipe_heat.vol_b.T_start >= 1.0 and plugFlowPipe_heat.vol_b.T_start <= 1e4)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"E:/Daniel/sgi digital twin/Modelica/IDEAS-master/IDEAS/Fluid/Interfaces/LumpedVolumeDeclarations.mo",32,3,34,47,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1954));
        } else {
          FILE_INFO info = {"E:/Daniel/sgi digital twin/Modelica/IDEAS-master/IDEAS/Fluid/Interfaces/LumpedVolumeDeclarations.mo",32,3,34,47,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1954));
        }
      }
      tmp1955 = 1;
    }
  }
  threadData->lastEquationSolved = 2846;
}

/*
equation index: 2847
type: ALGORITHM

  assert(plugFlowPipe_heat.vol_b.state_start.T >= 1.0 and plugFlowPipe_heat.vol_b.state_start.T <= 1e4, "Variable violating min/max constraint: 1.0 <= plugFlowPipe_heat.vol_b.state_start.T <= 1e4, has value: " + String(plugFlowPipe_heat.vol_b.state_start.T, "g"));
*/
OMC_DISABLE_OPT
static void pump_v3_basicCold_t_eqFunction_2847(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2847};
  modelica_boolean tmp1956;
  modelica_boolean tmp1957;
  static const MMC_DEFSTRINGLIT(tmp1958,103,"Variable violating min/max constraint: 1.0 <= plugFlowPipe_heat.vol_b.state_start.T <= 1e4, has value: ");
  modelica_string tmp1959;
  modelica_metatype tmpMeta1960;
  static int tmp1961 = 0;
  if(!tmp1961)
  {
    tmp1956 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[677]] /* plugFlowPipe_heat.vol_b.state_start.T PARAM */),1.0);
    tmp1957 = LessEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[677]] /* plugFlowPipe_heat.vol_b.state_start.T PARAM */),1e4);
    if(!(tmp1956 && tmp1957))
    {
      tmp1959 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[677]] /* plugFlowPipe_heat.vol_b.state_start.T PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta1960 = stringAppend(MMC_REFSTRINGLIT(tmp1958),tmp1959);
      {
        const char* assert_cond = "(plugFlowPipe_heat.vol_b.state_start.T >= 1.0 and plugFlowPipe_heat.vol_b.state_start.T <= 1e4)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/Daniel/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Media/package.mo",5870,7,5870,44,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1960));
        } else {
          FILE_INFO info = {"C:/Users/Daniel/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Media/package.mo",5870,7,5870,44,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1960));
        }
      }
      tmp1961 = 1;
    }
  }
  threadData->lastEquationSolved = 2847;
}

/*
equation index: 2848
type: ALGORITHM

  assert(plugFlowPipe_heat.vol_b.p_start >= 0.0 and plugFlowPipe_heat.vol_b.p_start <= 1e8, "Variable violating min/max constraint: 0.0 <= plugFlowPipe_heat.vol_b.p_start <= 1e8, has value: " + String(plugFlowPipe_heat.vol_b.p_start, "g"));
*/
OMC_DISABLE_OPT
static void pump_v3_basicCold_t_eqFunction_2848(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2848};
  modelica_boolean tmp1962;
  modelica_boolean tmp1963;
  static const MMC_DEFSTRINGLIT(tmp1964,97,"Variable violating min/max constraint: 0.0 <= plugFlowPipe_heat.vol_b.p_start <= 1e8, has value: ");
  modelica_string tmp1965;
  modelica_metatype tmpMeta1966;
  static int tmp1967 = 0;
  if(!tmp1967)
  {
    tmp1962 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[672]] /* plugFlowPipe_heat.vol_b.p_start PARAM */),0.0);
    tmp1963 = LessEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[672]] /* plugFlowPipe_heat.vol_b.p_start PARAM */),1e8);
    if(!(tmp1962 && tmp1963))
    {
      tmp1965 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[672]] /* plugFlowPipe_heat.vol_b.p_start PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta1966 = stringAppend(MMC_REFSTRINGLIT(tmp1964),tmp1965);
      {
        const char* assert_cond = "(plugFlowPipe_heat.vol_b.p_start >= 0.0 and plugFlowPipe_heat.vol_b.p_start <= 1e8)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"E:/Daniel/sgi digital twin/Modelica/IDEAS-master/IDEAS/Fluid/Interfaces/LumpedVolumeDeclarations.mo",29,3,31,47,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1966));
        } else {
          FILE_INFO info = {"E:/Daniel/sgi digital twin/Modelica/IDEAS-master/IDEAS/Fluid/Interfaces/LumpedVolumeDeclarations.mo",29,3,31,47,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1966));
        }
      }
      tmp1967 = 1;
    }
  }
  threadData->lastEquationSolved = 2848;
}

/*
equation index: 2849
type: ALGORITHM

  assert(plugFlowPipe_heat.vol_b.state_start.p >= 0.0 and plugFlowPipe_heat.vol_b.state_start.p <= 1e8, "Variable violating min/max constraint: 0.0 <= plugFlowPipe_heat.vol_b.state_start.p <= 1e8, has value: " + String(plugFlowPipe_heat.vol_b.state_start.p, "g"));
*/
OMC_DISABLE_OPT
static void pump_v3_basicCold_t_eqFunction_2849(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2849};
  modelica_boolean tmp1968;
  modelica_boolean tmp1969;
  static const MMC_DEFSTRINGLIT(tmp1970,103,"Variable violating min/max constraint: 0.0 <= plugFlowPipe_heat.vol_b.state_start.p <= 1e8, has value: ");
  modelica_string tmp1971;
  modelica_metatype tmpMeta1972;
  static int tmp1973 = 0;
  if(!tmp1973)
  {
    tmp1968 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[678]] /* plugFlowPipe_heat.vol_b.state_start.p PARAM */),0.0);
    tmp1969 = LessEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[678]] /* plugFlowPipe_heat.vol_b.state_start.p PARAM */),1e8);
    if(!(tmp1968 && tmp1969))
    {
      tmp1971 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[678]] /* plugFlowPipe_heat.vol_b.state_start.p PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta1972 = stringAppend(MMC_REFSTRINGLIT(tmp1970),tmp1971);
      {
        const char* assert_cond = "(plugFlowPipe_heat.vol_b.state_start.p >= 0.0 and plugFlowPipe_heat.vol_b.state_start.p <= 1e8)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/Daniel/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Media/package.mo",5869,7,5869,55,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1972));
        } else {
          FILE_INFO info = {"C:/Users/Daniel/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Media/package.mo",5869,7,5869,55,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1972));
        }
      }
      tmp1973 = 1;
    }
  }
  threadData->lastEquationSolved = 2849;
}

/*
equation index: 2850
type: ALGORITHM

  assert(plugFlowPipe_heat.vol_b.rho_default >= 0.0, "Variable violating min constraint: 0.0 <= plugFlowPipe_heat.vol_b.rho_default, has value: " + String(plugFlowPipe_heat.vol_b.rho_default, "g"));
*/
OMC_DISABLE_OPT
static void pump_v3_basicCold_t_eqFunction_2850(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2850};
  modelica_boolean tmp1974;
  static const MMC_DEFSTRINGLIT(tmp1975,90,"Variable violating min constraint: 0.0 <= plugFlowPipe_heat.vol_b.rho_default, has value: ");
  modelica_string tmp1976;
  modelica_metatype tmpMeta1977;
  static int tmp1978 = 0;
  if(!tmp1978)
  {
    tmp1974 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[673]] /* plugFlowPipe_heat.vol_b.rho_default PARAM */),0.0);
    if(!tmp1974)
    {
      tmp1976 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[673]] /* plugFlowPipe_heat.vol_b.rho_default PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta1977 = stringAppend(MMC_REFSTRINGLIT(tmp1975),tmp1976);
      {
        const char* assert_cond = "(plugFlowPipe_heat.vol_b.rho_default >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"E:/Daniel/sgi digital twin/Modelica/IDEAS-master/IDEAS/Fluid/MixingVolumes/BaseClasses/PartialMixingVolume.mo",99,3,100,63,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1977));
        } else {
          FILE_INFO info = {"E:/Daniel/sgi digital twin/Modelica/IDEAS-master/IDEAS/Fluid/MixingVolumes/BaseClasses/PartialMixingVolume.mo",99,3,100,63,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1977));
        }
      }
      tmp1978 = 1;
    }
  }
  threadData->lastEquationSolved = 2850;
}

/*
equation index: 2851
type: ALGORITHM

  assert(plugFlowPipe_heat.vol_b.state_default.T >= 1.0 and plugFlowPipe_heat.vol_b.state_default.T <= 1e4, "Variable violating min/max constraint: 1.0 <= plugFlowPipe_heat.vol_b.state_default.T <= 1e4, has value: " + String(plugFlowPipe_heat.vol_b.state_default.T, "g"));
*/
OMC_DISABLE_OPT
static void pump_v3_basicCold_t_eqFunction_2851(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2851};
  modelica_boolean tmp1979;
  modelica_boolean tmp1980;
  static const MMC_DEFSTRINGLIT(tmp1981,105,"Variable violating min/max constraint: 1.0 <= plugFlowPipe_heat.vol_b.state_default.T <= 1e4, has value: ");
  modelica_string tmp1982;
  modelica_metatype tmpMeta1983;
  static int tmp1984 = 0;
  if(!tmp1984)
  {
    tmp1979 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[675]] /* plugFlowPipe_heat.vol_b.state_default.T PARAM */),1.0);
    tmp1980 = LessEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[675]] /* plugFlowPipe_heat.vol_b.state_default.T PARAM */),1e4);
    if(!(tmp1979 && tmp1980))
    {
      tmp1982 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[675]] /* plugFlowPipe_heat.vol_b.state_default.T PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta1983 = stringAppend(MMC_REFSTRINGLIT(tmp1981),tmp1982);
      {
        const char* assert_cond = "(plugFlowPipe_heat.vol_b.state_default.T >= 1.0 and plugFlowPipe_heat.vol_b.state_default.T <= 1e4)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/Daniel/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Media/package.mo",5870,7,5870,44,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1983));
        } else {
          FILE_INFO info = {"C:/Users/Daniel/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Media/package.mo",5870,7,5870,44,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1983));
        }
      }
      tmp1984 = 1;
    }
  }
  threadData->lastEquationSolved = 2851;
}

/*
equation index: 2852
type: ALGORITHM

  assert(plugFlowPipe_heat.vol_b.state_default.p >= 0.0 and plugFlowPipe_heat.vol_b.state_default.p <= 1e8, "Variable violating min/max constraint: 0.0 <= plugFlowPipe_heat.vol_b.state_default.p <= 1e8, has value: " + String(plugFlowPipe_heat.vol_b.state_default.p, "g"));
*/
OMC_DISABLE_OPT
static void pump_v3_basicCold_t_eqFunction_2852(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2852};
  modelica_boolean tmp1985;
  modelica_boolean tmp1986;
  static const MMC_DEFSTRINGLIT(tmp1987,105,"Variable violating min/max constraint: 0.0 <= plugFlowPipe_heat.vol_b.state_default.p <= 1e8, has value: ");
  modelica_string tmp1988;
  modelica_metatype tmpMeta1989;
  static int tmp1990 = 0;
  if(!tmp1990)
  {
    tmp1985 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[676]] /* plugFlowPipe_heat.vol_b.state_default.p PARAM */),0.0);
    tmp1986 = LessEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[676]] /* plugFlowPipe_heat.vol_b.state_default.p PARAM */),1e8);
    if(!(tmp1985 && tmp1986))
    {
      tmp1988 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[676]] /* plugFlowPipe_heat.vol_b.state_default.p PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta1989 = stringAppend(MMC_REFSTRINGLIT(tmp1987),tmp1988);
      {
        const char* assert_cond = "(plugFlowPipe_heat.vol_b.state_default.p >= 0.0 and plugFlowPipe_heat.vol_b.state_default.p <= 1e8)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/Daniel/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Media/package.mo",5869,7,5869,55,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1989));
        } else {
          FILE_INFO info = {"C:/Users/Daniel/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Media/package.mo",5869,7,5869,55,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1989));
        }
      }
      tmp1990 = 1;
    }
  }
  threadData->lastEquationSolved = 2852;
}

/*
equation index: 2853
type: ALGORITHM

  assert(plugFlowPipe_heat.vol_b.rho_start >= 0.0, "Variable violating min constraint: 0.0 <= plugFlowPipe_heat.vol_b.rho_start, has value: " + String(plugFlowPipe_heat.vol_b.rho_start, "g"));
*/
OMC_DISABLE_OPT
static void pump_v3_basicCold_t_eqFunction_2853(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2853};
  modelica_boolean tmp1991;
  static const MMC_DEFSTRINGLIT(tmp1992,88,"Variable violating min constraint: 0.0 <= plugFlowPipe_heat.vol_b.rho_start, has value: ");
  modelica_string tmp1993;
  modelica_metatype tmpMeta1994;
  static int tmp1995 = 0;
  if(!tmp1995)
  {
    tmp1991 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[674]] /* plugFlowPipe_heat.vol_b.rho_start PARAM */),0.0);
    if(!tmp1991)
    {
      tmp1993 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[674]] /* plugFlowPipe_heat.vol_b.rho_start PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta1994 = stringAppend(MMC_REFSTRINGLIT(tmp1992),tmp1993);
      {
        const char* assert_cond = "(plugFlowPipe_heat.vol_b.rho_start >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"E:/Daniel/sgi digital twin/Modelica/IDEAS-master/IDEAS/Fluid/MixingVolumes/BaseClasses/PartialMixingVolume.mo",92,3,93,73,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1994));
        } else {
          FILE_INFO info = {"E:/Daniel/sgi digital twin/Modelica/IDEAS-master/IDEAS/Fluid/MixingVolumes/BaseClasses/PartialMixingVolume.mo",92,3,93,73,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta1994));
        }
      }
      tmp1995 = 1;
    }
  }
  threadData->lastEquationSolved = 2853;
}

/*
equation index: 2854
type: ALGORITHM

  assert(plugFlowPipe_heat.vol_b.dynBal.p_start >= 0.0 and plugFlowPipe_heat.vol_b.dynBal.p_start <= 1e8, "Variable violating min/max constraint: 0.0 <= plugFlowPipe_heat.vol_b.dynBal.p_start <= 1e8, has value: " + String(plugFlowPipe_heat.vol_b.dynBal.p_start, "g"));
*/
OMC_DISABLE_OPT
static void pump_v3_basicCold_t_eqFunction_2854(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2854};
  modelica_boolean tmp1996;
  modelica_boolean tmp1997;
  static const MMC_DEFSTRINGLIT(tmp1998,104,"Variable violating min/max constraint: 0.0 <= plugFlowPipe_heat.vol_b.dynBal.p_start <= 1e8, has value: ");
  modelica_string tmp1999;
  modelica_metatype tmpMeta2000;
  static int tmp2001 = 0;
  if(!tmp2001)
  {
    tmp1996 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[664]] /* plugFlowPipe_heat.vol_b.dynBal.p_start PARAM */),0.0);
    tmp1997 = LessEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[664]] /* plugFlowPipe_heat.vol_b.dynBal.p_start PARAM */),1e8);
    if(!(tmp1996 && tmp1997))
    {
      tmp1999 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[664]] /* plugFlowPipe_heat.vol_b.dynBal.p_start PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta2000 = stringAppend(MMC_REFSTRINGLIT(tmp1998),tmp1999);
      {
        const char* assert_cond = "(plugFlowPipe_heat.vol_b.dynBal.p_start >= 0.0 and plugFlowPipe_heat.vol_b.dynBal.p_start <= 1e8)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"E:/Daniel/sgi digital twin/Modelica/IDEAS-master/IDEAS/Fluid/Interfaces/LumpedVolumeDeclarations.mo",29,3,31,47,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2000));
        } else {
          FILE_INFO info = {"E:/Daniel/sgi digital twin/Modelica/IDEAS-master/IDEAS/Fluid/Interfaces/LumpedVolumeDeclarations.mo",29,3,31,47,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2000));
        }
      }
      tmp2001 = 1;
    }
  }
  threadData->lastEquationSolved = 2854;
}

/*
equation index: 2855
type: ALGORITHM

  assert(plugFlowPipe_heat.vol_b.dynBal.T_start >= 1.0 and plugFlowPipe_heat.vol_b.dynBal.T_start <= 1e4, "Variable violating min/max constraint: 1.0 <= plugFlowPipe_heat.vol_b.dynBal.T_start <= 1e4, has value: " + String(plugFlowPipe_heat.vol_b.dynBal.T_start, "g"));
*/
OMC_DISABLE_OPT
static void pump_v3_basicCold_t_eqFunction_2855(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2855};
  modelica_boolean tmp2002;
  modelica_boolean tmp2003;
  static const MMC_DEFSTRINGLIT(tmp2004,104,"Variable violating min/max constraint: 1.0 <= plugFlowPipe_heat.vol_b.dynBal.T_start <= 1e4, has value: ");
  modelica_string tmp2005;
  modelica_metatype tmpMeta2006;
  static int tmp2007 = 0;
  if(!tmp2007)
  {
    tmp2002 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[658]] /* plugFlowPipe_heat.vol_b.dynBal.T_start PARAM */),1.0);
    tmp2003 = LessEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[658]] /* plugFlowPipe_heat.vol_b.dynBal.T_start PARAM */),1e4);
    if(!(tmp2002 && tmp2003))
    {
      tmp2005 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[658]] /* plugFlowPipe_heat.vol_b.dynBal.T_start PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta2006 = stringAppend(MMC_REFSTRINGLIT(tmp2004),tmp2005);
      {
        const char* assert_cond = "(plugFlowPipe_heat.vol_b.dynBal.T_start >= 1.0 and plugFlowPipe_heat.vol_b.dynBal.T_start <= 1e4)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"E:/Daniel/sgi digital twin/Modelica/IDEAS-master/IDEAS/Fluid/Interfaces/LumpedVolumeDeclarations.mo",32,3,34,47,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2006));
        } else {
          FILE_INFO info = {"E:/Daniel/sgi digital twin/Modelica/IDEAS-master/IDEAS/Fluid/Interfaces/LumpedVolumeDeclarations.mo",32,3,34,47,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2006));
        }
      }
      tmp2007 = 1;
    }
  }
  threadData->lastEquationSolved = 2855;
}

/*
equation index: 2856
type: ALGORITHM

  assert(plugFlowPipe_heat.vol_b.X_start[1] >= 0.0 and plugFlowPipe_heat.vol_b.X_start[1] <= 1.0, "Variable violating min/max constraint: 0.0 <= plugFlowPipe_heat.vol_b.X_start[1] <= 1.0, has value: " + String(plugFlowPipe_heat.vol_b.X_start[1], "g"));
*/
OMC_DISABLE_OPT
static void pump_v3_basicCold_t_eqFunction_2856(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2856};
  modelica_boolean tmp2008;
  modelica_boolean tmp2009;
  static const MMC_DEFSTRINGLIT(tmp2010,100,"Variable violating min/max constraint: 0.0 <= plugFlowPipe_heat.vol_b.X_start[1] <= 1.0, has value: ");
  modelica_string tmp2011;
  modelica_metatype tmpMeta2012;
  static int tmp2013 = 0;
  if(!tmp2013)
  {
    tmp2008 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[656]] /* plugFlowPipe_heat.vol_b.X_start[1] PARAM */),0.0);
    tmp2009 = LessEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[656]] /* plugFlowPipe_heat.vol_b.X_start[1] PARAM */),1.0);
    if(!(tmp2008 && tmp2009))
    {
      tmp2011 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[656]] /* plugFlowPipe_heat.vol_b.X_start[1] PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta2012 = stringAppend(MMC_REFSTRINGLIT(tmp2010),tmp2011);
      {
        const char* assert_cond = "(plugFlowPipe_heat.vol_b.X_start[1] >= 0.0 and plugFlowPipe_heat.vol_b.X_start[1] <= 1.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"E:/Daniel/sgi digital twin/Modelica/IDEAS-master/IDEAS/Fluid/Interfaces/LumpedVolumeDeclarations.mo",35,3,38,69,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2012));
        } else {
          FILE_INFO info = {"E:/Daniel/sgi digital twin/Modelica/IDEAS-master/IDEAS/Fluid/Interfaces/LumpedVolumeDeclarations.mo",35,3,38,69,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2012));
        }
      }
      tmp2013 = 1;
    }
  }
  threadData->lastEquationSolved = 2856;
}

/*
equation index: 2857
type: ALGORITHM

  assert(plugFlowPipe_heat.vol_b.dynBal.X_start[1] >= 0.0 and plugFlowPipe_heat.vol_b.dynBal.X_start[1] <= 1.0, "Variable violating min/max constraint: 0.0 <= plugFlowPipe_heat.vol_b.dynBal.X_start[1] <= 1.0, has value: " + String(plugFlowPipe_heat.vol_b.dynBal.X_start[1], "g"));
*/
OMC_DISABLE_OPT
static void pump_v3_basicCold_t_eqFunction_2857(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2857};
  modelica_boolean tmp2014;
  modelica_boolean tmp2015;
  static const MMC_DEFSTRINGLIT(tmp2016,107,"Variable violating min/max constraint: 0.0 <= plugFlowPipe_heat.vol_b.dynBal.X_start[1] <= 1.0, has value: ");
  modelica_string tmp2017;
  modelica_metatype tmpMeta2018;
  static int tmp2019 = 0;
  if(!tmp2019)
  {
    tmp2014 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[659]] /* plugFlowPipe_heat.vol_b.dynBal.X_start[1] PARAM */),0.0);
    tmp2015 = LessEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[659]] /* plugFlowPipe_heat.vol_b.dynBal.X_start[1] PARAM */),1.0);
    if(!(tmp2014 && tmp2015))
    {
      tmp2017 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[659]] /* plugFlowPipe_heat.vol_b.dynBal.X_start[1] PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta2018 = stringAppend(MMC_REFSTRINGLIT(tmp2016),tmp2017);
      {
        const char* assert_cond = "(plugFlowPipe_heat.vol_b.dynBal.X_start[1] >= 0.0 and plugFlowPipe_heat.vol_b.dynBal.X_start[1] <= 1.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"E:/Daniel/sgi digital twin/Modelica/IDEAS-master/IDEAS/Fluid/Interfaces/LumpedVolumeDeclarations.mo",35,3,38,69,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2018));
        } else {
          FILE_INFO info = {"E:/Daniel/sgi digital twin/Modelica/IDEAS-master/IDEAS/Fluid/Interfaces/LumpedVolumeDeclarations.mo",35,3,38,69,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2018));
        }
      }
      tmp2019 = 1;
    }
  }
  threadData->lastEquationSolved = 2857;
}

/*
equation index: 2858
type: ALGORITHM

  assert(plugFlowPipe_heat.vol_b.dynBal.rho_default >= 0.0, "Variable violating min constraint: 0.0 <= plugFlowPipe_heat.vol_b.dynBal.rho_default, has value: " + String(plugFlowPipe_heat.vol_b.dynBal.rho_default, "g"));
*/
OMC_DISABLE_OPT
static void pump_v3_basicCold_t_eqFunction_2858(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2858};
  modelica_boolean tmp2020;
  static const MMC_DEFSTRINGLIT(tmp2021,97,"Variable violating min constraint: 0.0 <= plugFlowPipe_heat.vol_b.dynBal.rho_default, has value: ");
  modelica_string tmp2022;
  modelica_metatype tmpMeta2023;
  static int tmp2024 = 0;
  if(!tmp2024)
  {
    tmp2020 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[665]] /* plugFlowPipe_heat.vol_b.dynBal.rho_default PARAM */),0.0);
    if(!tmp2020)
    {
      tmp2022 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[665]] /* plugFlowPipe_heat.vol_b.dynBal.rho_default PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta2023 = stringAppend(MMC_REFSTRINGLIT(tmp2021),tmp2022);
      {
        const char* assert_cond = "(plugFlowPipe_heat.vol_b.dynBal.rho_default >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"E:/Daniel/sgi digital twin/Modelica/IDEAS-master/IDEAS/Fluid/Interfaces/ConservationEquation.mo",148,3,149,59,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2023));
        } else {
          FILE_INFO info = {"E:/Daniel/sgi digital twin/Modelica/IDEAS-master/IDEAS/Fluid/Interfaces/ConservationEquation.mo",148,3,149,59,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2023));
        }
      }
      tmp2024 = 1;
    }
  }
  threadData->lastEquationSolved = 2858;
}

/*
equation index: 2859
type: ALGORITHM

  assert(plugFlowPipe_heat.vol_b.dynBal.state_default.T >= 1.0 and plugFlowPipe_heat.vol_b.dynBal.state_default.T <= 1e4, "Variable violating min/max constraint: 1.0 <= plugFlowPipe_heat.vol_b.dynBal.state_default.T <= 1e4, has value: " + String(plugFlowPipe_heat.vol_b.dynBal.state_default.T, "g"));
*/
OMC_DISABLE_OPT
static void pump_v3_basicCold_t_eqFunction_2859(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2859};
  modelica_boolean tmp2025;
  modelica_boolean tmp2026;
  static const MMC_DEFSTRINGLIT(tmp2027,112,"Variable violating min/max constraint: 1.0 <= plugFlowPipe_heat.vol_b.dynBal.state_default.T <= 1e4, has value: ");
  modelica_string tmp2028;
  modelica_metatype tmpMeta2029;
  static int tmp2030 = 0;
  if(!tmp2030)
  {
    tmp2025 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[667]] /* plugFlowPipe_heat.vol_b.dynBal.state_default.T PARAM */),1.0);
    tmp2026 = LessEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[667]] /* plugFlowPipe_heat.vol_b.dynBal.state_default.T PARAM */),1e4);
    if(!(tmp2025 && tmp2026))
    {
      tmp2028 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[667]] /* plugFlowPipe_heat.vol_b.dynBal.state_default.T PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta2029 = stringAppend(MMC_REFSTRINGLIT(tmp2027),tmp2028);
      {
        const char* assert_cond = "(plugFlowPipe_heat.vol_b.dynBal.state_default.T >= 1.0 and plugFlowPipe_heat.vol_b.dynBal.state_default.T <= 1e4)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/Daniel/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Media/package.mo",5870,7,5870,44,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2029));
        } else {
          FILE_INFO info = {"C:/Users/Daniel/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Media/package.mo",5870,7,5870,44,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2029));
        }
      }
      tmp2030 = 1;
    }
  }
  threadData->lastEquationSolved = 2859;
}

/*
equation index: 2860
type: ALGORITHM

  assert(plugFlowPipe_heat.vol_b.dynBal.state_default.p >= 0.0 and plugFlowPipe_heat.vol_b.dynBal.state_default.p <= 1e8, "Variable violating min/max constraint: 0.0 <= plugFlowPipe_heat.vol_b.dynBal.state_default.p <= 1e8, has value: " + String(plugFlowPipe_heat.vol_b.dynBal.state_default.p, "g"));
*/
OMC_DISABLE_OPT
static void pump_v3_basicCold_t_eqFunction_2860(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2860};
  modelica_boolean tmp2031;
  modelica_boolean tmp2032;
  static const MMC_DEFSTRINGLIT(tmp2033,112,"Variable violating min/max constraint: 0.0 <= plugFlowPipe_heat.vol_b.dynBal.state_default.p <= 1e8, has value: ");
  modelica_string tmp2034;
  modelica_metatype tmpMeta2035;
  static int tmp2036 = 0;
  if(!tmp2036)
  {
    tmp2031 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[668]] /* plugFlowPipe_heat.vol_b.dynBal.state_default.p PARAM */),0.0);
    tmp2032 = LessEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[668]] /* plugFlowPipe_heat.vol_b.dynBal.state_default.p PARAM */),1e8);
    if(!(tmp2031 && tmp2032))
    {
      tmp2034 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[668]] /* plugFlowPipe_heat.vol_b.dynBal.state_default.p PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta2035 = stringAppend(MMC_REFSTRINGLIT(tmp2033),tmp2034);
      {
        const char* assert_cond = "(plugFlowPipe_heat.vol_b.dynBal.state_default.p >= 0.0 and plugFlowPipe_heat.vol_b.dynBal.state_default.p <= 1e8)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/Daniel/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Media/package.mo",5869,7,5869,55,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2035));
        } else {
          FILE_INFO info = {"C:/Users/Daniel/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Media/package.mo",5869,7,5869,55,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2035));
        }
      }
      tmp2036 = 1;
    }
  }
  threadData->lastEquationSolved = 2860;
}

/*
equation index: 2861
type: ALGORITHM

  assert(plugFlowPipe_heat.vol_b.dynBal.rho_start >= 0.0, "Variable violating min constraint: 0.0 <= plugFlowPipe_heat.vol_b.dynBal.rho_start, has value: " + String(plugFlowPipe_heat.vol_b.dynBal.rho_start, "g"));
*/
OMC_DISABLE_OPT
static void pump_v3_basicCold_t_eqFunction_2861(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2861};
  modelica_boolean tmp2037;
  static const MMC_DEFSTRINGLIT(tmp2038,95,"Variable violating min constraint: 0.0 <= plugFlowPipe_heat.vol_b.dynBal.rho_start, has value: ");
  modelica_string tmp2039;
  modelica_metatype tmpMeta2040;
  static int tmp2041 = 0;
  if(!tmp2041)
  {
    tmp2037 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[666]] /* plugFlowPipe_heat.vol_b.dynBal.rho_start PARAM */),0.0);
    if(!tmp2037)
    {
      tmp2039 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[666]] /* plugFlowPipe_heat.vol_b.dynBal.rho_start PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta2040 = stringAppend(MMC_REFSTRINGLIT(tmp2038),tmp2039);
      {
        const char* assert_cond = "(plugFlowPipe_heat.vol_b.dynBal.rho_start >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"E:/Daniel/sgi digital twin/Modelica/IDEAS-master/IDEAS/Fluid/Interfaces/ConservationEquation.mo",134,3,138,70,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2040));
        } else {
          FILE_INFO info = {"E:/Daniel/sgi digital twin/Modelica/IDEAS-master/IDEAS/Fluid/Interfaces/ConservationEquation.mo",134,3,138,70,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2040));
        }
      }
      tmp2041 = 1;
    }
  }
  threadData->lastEquationSolved = 2861;
}

/*
equation index: 2862
type: ALGORITHM

  assert(plugFlowPipe_heat.vol_b.dynBal.mSenFac >= 1.0, "Variable violating min constraint: 1.0 <= plugFlowPipe_heat.vol_b.dynBal.mSenFac, has value: " + String(plugFlowPipe_heat.vol_b.dynBal.mSenFac, "g"));
*/
OMC_DISABLE_OPT
static void pump_v3_basicCold_t_eqFunction_2862(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2862};
  modelica_boolean tmp2042;
  static const MMC_DEFSTRINGLIT(tmp2043,93,"Variable violating min constraint: 1.0 <= plugFlowPipe_heat.vol_b.dynBal.mSenFac, has value: ");
  modelica_string tmp2044;
  modelica_metatype tmpMeta2045;
  static int tmp2046 = 0;
  if(!tmp2046)
  {
    tmp2042 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[663]] /* plugFlowPipe_heat.vol_b.dynBal.mSenFac PARAM */),1.0);
    if(!tmp2042)
    {
      tmp2044 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[663]] /* plugFlowPipe_heat.vol_b.dynBal.mSenFac PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta2045 = stringAppend(MMC_REFSTRINGLIT(tmp2043),tmp2044);
      {
        const char* assert_cond = "(plugFlowPipe_heat.vol_b.dynBal.mSenFac >= 1.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"E:/Daniel/sgi digital twin/Modelica/IDEAS-master/IDEAS/Fluid/Interfaces/LumpedVolumeDeclarations.mo",47,3,49,39,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2045));
        } else {
          FILE_INFO info = {"E:/Daniel/sgi digital twin/Modelica/IDEAS-master/IDEAS/Fluid/Interfaces/LumpedVolumeDeclarations.mo",47,3,49,39,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2045));
        }
      }
      tmp2046 = 1;
    }
  }
  threadData->lastEquationSolved = 2862;
}

/*
equation index: 2863
type: ALGORITHM

  assert(plugFlowPipe_heat.vol_b.dynBal.traceDynamics >= Modelica.Fluid.Types.Dynamics.DynamicFreeInitial and plugFlowPipe_heat.vol_b.dynBal.traceDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, "Variable violating min/max constraint: Modelica.Fluid.Types.Dynamics.DynamicFreeInitial <= plugFlowPipe_heat.vol_b.dynBal.traceDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, has value: " + String(plugFlowPipe_heat.vol_b.dynBal.traceDynamics, "d"));
*/
OMC_DISABLE_OPT
static void pump_v3_basicCold_t_eqFunction_2863(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2863};
  modelica_boolean tmp2047;
  modelica_boolean tmp2048;
  static const MMC_DEFSTRINGLIT(tmp2049,193,"Variable violating min/max constraint: Modelica.Fluid.Types.Dynamics.DynamicFreeInitial <= plugFlowPipe_heat.vol_b.dynBal.traceDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, has value: ");
  modelica_string tmp2050;
  modelica_metatype tmpMeta2051;
  static int tmp2052 = 0;
  if(!tmp2052)
  {
    tmp2047 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[79]] /* plugFlowPipe_heat.vol_b.dynBal.traceDynamics PARAM */),1);
    tmp2048 = LessEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[79]] /* plugFlowPipe_heat.vol_b.dynBal.traceDynamics PARAM */),4);
    if(!(tmp2047 && tmp2048))
    {
      tmp2050 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[79]] /* plugFlowPipe_heat.vol_b.dynBal.traceDynamics PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta2051 = stringAppend(MMC_REFSTRINGLIT(tmp2049),tmp2050);
      {
        const char* assert_cond = "(plugFlowPipe_heat.vol_b.dynBal.traceDynamics >= Modelica.Fluid.Types.Dynamics.DynamicFreeInitial and plugFlowPipe_heat.vol_b.dynBal.traceDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"E:/Daniel/sgi digital twin/Modelica/IDEAS-master/IDEAS/Fluid/Interfaces/LumpedVolumeDeclarations.mo",24,3,26,88,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2051));
        } else {
          FILE_INFO info = {"E:/Daniel/sgi digital twin/Modelica/IDEAS-master/IDEAS/Fluid/Interfaces/LumpedVolumeDeclarations.mo",24,3,26,88,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2051));
        }
      }
      tmp2052 = 1;
    }
  }
  threadData->lastEquationSolved = 2863;
}

/*
equation index: 2864
type: ALGORITHM

  assert(plugFlowPipe_heat.vol_b.dynBal.substanceDynamics >= Modelica.Fluid.Types.Dynamics.DynamicFreeInitial and plugFlowPipe_heat.vol_b.dynBal.substanceDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, "Variable violating min/max constraint: Modelica.Fluid.Types.Dynamics.DynamicFreeInitial <= plugFlowPipe_heat.vol_b.dynBal.substanceDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, has value: " + String(plugFlowPipe_heat.vol_b.dynBal.substanceDynamics, "d"));
*/
OMC_DISABLE_OPT
static void pump_v3_basicCold_t_eqFunction_2864(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2864};
  modelica_boolean tmp2053;
  modelica_boolean tmp2054;
  static const MMC_DEFSTRINGLIT(tmp2055,197,"Variable violating min/max constraint: Modelica.Fluid.Types.Dynamics.DynamicFreeInitial <= plugFlowPipe_heat.vol_b.dynBal.substanceDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, has value: ");
  modelica_string tmp2056;
  modelica_metatype tmpMeta2057;
  static int tmp2058 = 0;
  if(!tmp2058)
  {
    tmp2053 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[78]] /* plugFlowPipe_heat.vol_b.dynBal.substanceDynamics PARAM */),1);
    tmp2054 = LessEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[78]] /* plugFlowPipe_heat.vol_b.dynBal.substanceDynamics PARAM */),4);
    if(!(tmp2053 && tmp2054))
    {
      tmp2056 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[78]] /* plugFlowPipe_heat.vol_b.dynBal.substanceDynamics PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta2057 = stringAppend(MMC_REFSTRINGLIT(tmp2055),tmp2056);
      {
        const char* assert_cond = "(plugFlowPipe_heat.vol_b.dynBal.substanceDynamics >= Modelica.Fluid.Types.Dynamics.DynamicFreeInitial and plugFlowPipe_heat.vol_b.dynBal.substanceDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"E:/Daniel/sgi digital twin/Modelica/IDEAS-master/IDEAS/Fluid/Interfaces/LumpedVolumeDeclarations.mo",21,3,23,88,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2057));
        } else {
          FILE_INFO info = {"E:/Daniel/sgi digital twin/Modelica/IDEAS-master/IDEAS/Fluid/Interfaces/LumpedVolumeDeclarations.mo",21,3,23,88,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2057));
        }
      }
      tmp2058 = 1;
    }
  }
  threadData->lastEquationSolved = 2864;
}

/*
equation index: 2865
type: ALGORITHM

  assert(plugFlowPipe_heat.vol_b.dynBal.massDynamics >= Modelica.Fluid.Types.Dynamics.DynamicFreeInitial and plugFlowPipe_heat.vol_b.dynBal.massDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, "Variable violating min/max constraint: Modelica.Fluid.Types.Dynamics.DynamicFreeInitial <= plugFlowPipe_heat.vol_b.dynBal.massDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, has value: " + String(plugFlowPipe_heat.vol_b.dynBal.massDynamics, "d"));
*/
OMC_DISABLE_OPT
static void pump_v3_basicCold_t_eqFunction_2865(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2865};
  modelica_boolean tmp2059;
  modelica_boolean tmp2060;
  static const MMC_DEFSTRINGLIT(tmp2061,192,"Variable violating min/max constraint: Modelica.Fluid.Types.Dynamics.DynamicFreeInitial <= plugFlowPipe_heat.vol_b.dynBal.massDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, has value: ");
  modelica_string tmp2062;
  modelica_metatype tmpMeta2063;
  static int tmp2064 = 0;
  if(!tmp2064)
  {
    tmp2059 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[76]] /* plugFlowPipe_heat.vol_b.dynBal.massDynamics PARAM */),1);
    tmp2060 = LessEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[76]] /* plugFlowPipe_heat.vol_b.dynBal.massDynamics PARAM */),4);
    if(!(tmp2059 && tmp2060))
    {
      tmp2062 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[76]] /* plugFlowPipe_heat.vol_b.dynBal.massDynamics PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta2063 = stringAppend(MMC_REFSTRINGLIT(tmp2061),tmp2062);
      {
        const char* assert_cond = "(plugFlowPipe_heat.vol_b.dynBal.massDynamics >= Modelica.Fluid.Types.Dynamics.DynamicFreeInitial and plugFlowPipe_heat.vol_b.dynBal.massDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"E:/Daniel/sgi digital twin/Modelica/IDEAS-master/IDEAS/Fluid/Interfaces/LumpedVolumeDeclarations.mo",18,3,20,74,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2063));
        } else {
          FILE_INFO info = {"E:/Daniel/sgi digital twin/Modelica/IDEAS-master/IDEAS/Fluid/Interfaces/LumpedVolumeDeclarations.mo",18,3,20,74,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2063));
        }
      }
      tmp2064 = 1;
    }
  }
  threadData->lastEquationSolved = 2865;
}

/*
equation index: 2866
type: ALGORITHM

  assert(plugFlowPipe_heat.vol_b.dynBal.energyDynamics >= Modelica.Fluid.Types.Dynamics.DynamicFreeInitial and plugFlowPipe_heat.vol_b.dynBal.energyDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, "Variable violating min/max constraint: Modelica.Fluid.Types.Dynamics.DynamicFreeInitial <= plugFlowPipe_heat.vol_b.dynBal.energyDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, has value: " + String(plugFlowPipe_heat.vol_b.dynBal.energyDynamics, "d"));
*/
OMC_DISABLE_OPT
static void pump_v3_basicCold_t_eqFunction_2866(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2866};
  modelica_boolean tmp2065;
  modelica_boolean tmp2066;
  static const MMC_DEFSTRINGLIT(tmp2067,194,"Variable violating min/max constraint: Modelica.Fluid.Types.Dynamics.DynamicFreeInitial <= plugFlowPipe_heat.vol_b.dynBal.energyDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, has value: ");
  modelica_string tmp2068;
  modelica_metatype tmpMeta2069;
  static int tmp2070 = 0;
  if(!tmp2070)
  {
    tmp2065 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[75]] /* plugFlowPipe_heat.vol_b.dynBal.energyDynamics PARAM */),1);
    tmp2066 = LessEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[75]] /* plugFlowPipe_heat.vol_b.dynBal.energyDynamics PARAM */),4);
    if(!(tmp2065 && tmp2066))
    {
      tmp2068 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[75]] /* plugFlowPipe_heat.vol_b.dynBal.energyDynamics PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta2069 = stringAppend(MMC_REFSTRINGLIT(tmp2067),tmp2068);
      {
        const char* assert_cond = "(plugFlowPipe_heat.vol_b.dynBal.energyDynamics >= Modelica.Fluid.Types.Dynamics.DynamicFreeInitial and plugFlowPipe_heat.vol_b.dynBal.energyDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"E:/Daniel/sgi digital twin/Modelica/IDEAS-master/IDEAS/Fluid/Interfaces/LumpedVolumeDeclarations.mo",15,3,17,88,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2069));
        } else {
          FILE_INFO info = {"E:/Daniel/sgi digital twin/Modelica/IDEAS-master/IDEAS/Fluid/Interfaces/LumpedVolumeDeclarations.mo",15,3,17,88,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2069));
        }
      }
      tmp2070 = 1;
    }
  }
  threadData->lastEquationSolved = 2866;
}

/*
equation index: 2867
type: ALGORITHM

  assert(plugFlowPipe_heat.vol_b.m_flow_small >= 0.0, "Variable violating min constraint: 0.0 <= plugFlowPipe_heat.vol_b.m_flow_small, has value: " + String(plugFlowPipe_heat.vol_b.m_flow_small, "g"));
*/
OMC_DISABLE_OPT
static void pump_v3_basicCold_t_eqFunction_2867(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2867};
  modelica_boolean tmp2071;
  static const MMC_DEFSTRINGLIT(tmp2072,91,"Variable violating min constraint: 0.0 <= plugFlowPipe_heat.vol_b.m_flow_small, has value: ");
  modelica_string tmp2073;
  modelica_metatype tmpMeta2074;
  static int tmp2075 = 0;
  if(!tmp2075)
  {
    tmp2071 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[671]] /* plugFlowPipe_heat.vol_b.m_flow_small PARAM */),0.0);
    if(!tmp2071)
    {
      tmp2073 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[671]] /* plugFlowPipe_heat.vol_b.m_flow_small PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta2074 = stringAppend(MMC_REFSTRINGLIT(tmp2072),tmp2073);
      {
        const char* assert_cond = "(plugFlowPipe_heat.vol_b.m_flow_small >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"E:/Daniel/sgi digital twin/Modelica/IDEAS-master/IDEAS/Fluid/MixingVolumes/BaseClasses/PartialMixingVolume.mo",25,3,27,40,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2074));
        } else {
          FILE_INFO info = {"E:/Daniel/sgi digital twin/Modelica/IDEAS-master/IDEAS/Fluid/MixingVolumes/BaseClasses/PartialMixingVolume.mo",25,3,27,40,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2074));
        }
      }
      tmp2075 = 1;
    }
  }
  threadData->lastEquationSolved = 2867;
}

/*
equation index: 2868
type: ALGORITHM

  assert(plugFlowPipe_heat.vol_b.m_flow_nominal >= 0.0, "Variable violating min constraint: 0.0 <= plugFlowPipe_heat.vol_b.m_flow_nominal, has value: " + String(plugFlowPipe_heat.vol_b.m_flow_nominal, "g"));
*/
OMC_DISABLE_OPT
static void pump_v3_basicCold_t_eqFunction_2868(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2868};
  modelica_boolean tmp2076;
  static const MMC_DEFSTRINGLIT(tmp2077,93,"Variable violating min constraint: 0.0 <= plugFlowPipe_heat.vol_b.m_flow_nominal, has value: ");
  modelica_string tmp2078;
  modelica_metatype tmpMeta2079;
  static int tmp2080 = 0;
  if(!tmp2080)
  {
    tmp2076 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[670]] /* plugFlowPipe_heat.vol_b.m_flow_nominal PARAM */),0.0);
    if(!tmp2076)
    {
      tmp2078 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[670]] /* plugFlowPipe_heat.vol_b.m_flow_nominal PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta2079 = stringAppend(MMC_REFSTRINGLIT(tmp2077),tmp2078);
      {
        const char* assert_cond = "(plugFlowPipe_heat.vol_b.m_flow_nominal >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"E:/Daniel/sgi digital twin/Modelica/IDEAS-master/IDEAS/Fluid/MixingVolumes/BaseClasses/PartialMixingVolume.mo",20,3,21,76,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2079));
        } else {
          FILE_INFO info = {"E:/Daniel/sgi digital twin/Modelica/IDEAS-master/IDEAS/Fluid/MixingVolumes/BaseClasses/PartialMixingVolume.mo",20,3,21,76,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2079));
        }
      }
      tmp2080 = 1;
    }
  }
  threadData->lastEquationSolved = 2868;
}

/*
equation index: 2869
type: ALGORITHM

  assert(plugFlowPipe_heat.vol_b.mSenFac >= 1.0, "Variable violating min constraint: 1.0 <= plugFlowPipe_heat.vol_b.mSenFac, has value: " + String(plugFlowPipe_heat.vol_b.mSenFac, "g"));
*/
OMC_DISABLE_OPT
static void pump_v3_basicCold_t_eqFunction_2869(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2869};
  modelica_boolean tmp2081;
  static const MMC_DEFSTRINGLIT(tmp2082,86,"Variable violating min constraint: 1.0 <= plugFlowPipe_heat.vol_b.mSenFac, has value: ");
  modelica_string tmp2083;
  modelica_metatype tmpMeta2084;
  static int tmp2085 = 0;
  if(!tmp2085)
  {
    tmp2081 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[669]] /* plugFlowPipe_heat.vol_b.mSenFac PARAM */),1.0);
    if(!tmp2081)
    {
      tmp2083 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[669]] /* plugFlowPipe_heat.vol_b.mSenFac PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta2084 = stringAppend(MMC_REFSTRINGLIT(tmp2082),tmp2083);
      {
        const char* assert_cond = "(plugFlowPipe_heat.vol_b.mSenFac >= 1.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"E:/Daniel/sgi digital twin/Modelica/IDEAS-master/IDEAS/Fluid/Interfaces/LumpedVolumeDeclarations.mo",47,3,49,39,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2084));
        } else {
          FILE_INFO info = {"E:/Daniel/sgi digital twin/Modelica/IDEAS-master/IDEAS/Fluid/Interfaces/LumpedVolumeDeclarations.mo",47,3,49,39,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2084));
        }
      }
      tmp2085 = 1;
    }
  }
  threadData->lastEquationSolved = 2869;
}

/*
equation index: 2870
type: ALGORITHM

  assert(plugFlowPipe_heat.vol_b.traceDynamics >= Modelica.Fluid.Types.Dynamics.DynamicFreeInitial and plugFlowPipe_heat.vol_b.traceDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, "Variable violating min/max constraint: Modelica.Fluid.Types.Dynamics.DynamicFreeInitial <= plugFlowPipe_heat.vol_b.traceDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, has value: " + String(plugFlowPipe_heat.vol_b.traceDynamics, "d"));
*/
OMC_DISABLE_OPT
static void pump_v3_basicCold_t_eqFunction_2870(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2870};
  modelica_boolean tmp2086;
  modelica_boolean tmp2087;
  static const MMC_DEFSTRINGLIT(tmp2088,186,"Variable violating min/max constraint: Modelica.Fluid.Types.Dynamics.DynamicFreeInitial <= plugFlowPipe_heat.vol_b.traceDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, has value: ");
  modelica_string tmp2089;
  modelica_metatype tmpMeta2090;
  static int tmp2091 = 0;
  if(!tmp2091)
  {
    tmp2086 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[84]] /* plugFlowPipe_heat.vol_b.traceDynamics PARAM */),1);
    tmp2087 = LessEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[84]] /* plugFlowPipe_heat.vol_b.traceDynamics PARAM */),4);
    if(!(tmp2086 && tmp2087))
    {
      tmp2089 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[84]] /* plugFlowPipe_heat.vol_b.traceDynamics PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta2090 = stringAppend(MMC_REFSTRINGLIT(tmp2088),tmp2089);
      {
        const char* assert_cond = "(plugFlowPipe_heat.vol_b.traceDynamics >= Modelica.Fluid.Types.Dynamics.DynamicFreeInitial and plugFlowPipe_heat.vol_b.traceDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"E:/Daniel/sgi digital twin/Modelica/IDEAS-master/IDEAS/Fluid/Interfaces/LumpedVolumeDeclarations.mo",24,3,26,88,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2090));
        } else {
          FILE_INFO info = {"E:/Daniel/sgi digital twin/Modelica/IDEAS-master/IDEAS/Fluid/Interfaces/LumpedVolumeDeclarations.mo",24,3,26,88,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2090));
        }
      }
      tmp2091 = 1;
    }
  }
  threadData->lastEquationSolved = 2870;
}

/*
equation index: 2871
type: ALGORITHM

  assert(plugFlowPipe_heat.vol_b.substanceDynamics >= Modelica.Fluid.Types.Dynamics.DynamicFreeInitial and plugFlowPipe_heat.vol_b.substanceDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, "Variable violating min/max constraint: Modelica.Fluid.Types.Dynamics.DynamicFreeInitial <= plugFlowPipe_heat.vol_b.substanceDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, has value: " + String(plugFlowPipe_heat.vol_b.substanceDynamics, "d"));
*/
OMC_DISABLE_OPT
static void pump_v3_basicCold_t_eqFunction_2871(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2871};
  modelica_boolean tmp2092;
  modelica_boolean tmp2093;
  static const MMC_DEFSTRINGLIT(tmp2094,190,"Variable violating min/max constraint: Modelica.Fluid.Types.Dynamics.DynamicFreeInitial <= plugFlowPipe_heat.vol_b.substanceDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, has value: ");
  modelica_string tmp2095;
  modelica_metatype tmpMeta2096;
  static int tmp2097 = 0;
  if(!tmp2097)
  {
    tmp2092 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[83]] /* plugFlowPipe_heat.vol_b.substanceDynamics PARAM */),1);
    tmp2093 = LessEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[83]] /* plugFlowPipe_heat.vol_b.substanceDynamics PARAM */),4);
    if(!(tmp2092 && tmp2093))
    {
      tmp2095 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[83]] /* plugFlowPipe_heat.vol_b.substanceDynamics PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta2096 = stringAppend(MMC_REFSTRINGLIT(tmp2094),tmp2095);
      {
        const char* assert_cond = "(plugFlowPipe_heat.vol_b.substanceDynamics >= Modelica.Fluid.Types.Dynamics.DynamicFreeInitial and plugFlowPipe_heat.vol_b.substanceDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"E:/Daniel/sgi digital twin/Modelica/IDEAS-master/IDEAS/Fluid/Interfaces/LumpedVolumeDeclarations.mo",21,3,23,88,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2096));
        } else {
          FILE_INFO info = {"E:/Daniel/sgi digital twin/Modelica/IDEAS-master/IDEAS/Fluid/Interfaces/LumpedVolumeDeclarations.mo",21,3,23,88,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2096));
        }
      }
      tmp2097 = 1;
    }
  }
  threadData->lastEquationSolved = 2871;
}

/*
equation index: 2872
type: ALGORITHM

  assert(plugFlowPipe_heat.vol_b.massDynamics >= Modelica.Fluid.Types.Dynamics.DynamicFreeInitial and plugFlowPipe_heat.vol_b.massDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, "Variable violating min/max constraint: Modelica.Fluid.Types.Dynamics.DynamicFreeInitial <= plugFlowPipe_heat.vol_b.massDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, has value: " + String(plugFlowPipe_heat.vol_b.massDynamics, "d"));
*/
OMC_DISABLE_OPT
static void pump_v3_basicCold_t_eqFunction_2872(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2872};
  modelica_boolean tmp2098;
  modelica_boolean tmp2099;
  static const MMC_DEFSTRINGLIT(tmp2100,185,"Variable violating min/max constraint: Modelica.Fluid.Types.Dynamics.DynamicFreeInitial <= plugFlowPipe_heat.vol_b.massDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, has value: ");
  modelica_string tmp2101;
  modelica_metatype tmpMeta2102;
  static int tmp2103 = 0;
  if(!tmp2103)
  {
    tmp2098 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[81]] /* plugFlowPipe_heat.vol_b.massDynamics PARAM */),1);
    tmp2099 = LessEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[81]] /* plugFlowPipe_heat.vol_b.massDynamics PARAM */),4);
    if(!(tmp2098 && tmp2099))
    {
      tmp2101 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[81]] /* plugFlowPipe_heat.vol_b.massDynamics PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta2102 = stringAppend(MMC_REFSTRINGLIT(tmp2100),tmp2101);
      {
        const char* assert_cond = "(plugFlowPipe_heat.vol_b.massDynamics >= Modelica.Fluid.Types.Dynamics.DynamicFreeInitial and plugFlowPipe_heat.vol_b.massDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"E:/Daniel/sgi digital twin/Modelica/IDEAS-master/IDEAS/Fluid/Interfaces/LumpedVolumeDeclarations.mo",18,3,20,74,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2102));
        } else {
          FILE_INFO info = {"E:/Daniel/sgi digital twin/Modelica/IDEAS-master/IDEAS/Fluid/Interfaces/LumpedVolumeDeclarations.mo",18,3,20,74,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2102));
        }
      }
      tmp2103 = 1;
    }
  }
  threadData->lastEquationSolved = 2872;
}

/*
equation index: 2873
type: ALGORITHM

  assert(plugFlowPipe_heat.vol_b.energyDynamics >= Modelica.Fluid.Types.Dynamics.DynamicFreeInitial and plugFlowPipe_heat.vol_b.energyDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, "Variable violating min/max constraint: Modelica.Fluid.Types.Dynamics.DynamicFreeInitial <= plugFlowPipe_heat.vol_b.energyDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, has value: " + String(plugFlowPipe_heat.vol_b.energyDynamics, "d"));
*/
OMC_DISABLE_OPT
static void pump_v3_basicCold_t_eqFunction_2873(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2873};
  modelica_boolean tmp2104;
  modelica_boolean tmp2105;
  static const MMC_DEFSTRINGLIT(tmp2106,187,"Variable violating min/max constraint: Modelica.Fluid.Types.Dynamics.DynamicFreeInitial <= plugFlowPipe_heat.vol_b.energyDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, has value: ");
  modelica_string tmp2107;
  modelica_metatype tmpMeta2108;
  static int tmp2109 = 0;
  if(!tmp2109)
  {
    tmp2104 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[80]] /* plugFlowPipe_heat.vol_b.energyDynamics PARAM */),1);
    tmp2105 = LessEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[80]] /* plugFlowPipe_heat.vol_b.energyDynamics PARAM */),4);
    if(!(tmp2104 && tmp2105))
    {
      tmp2107 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[80]] /* plugFlowPipe_heat.vol_b.energyDynamics PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta2108 = stringAppend(MMC_REFSTRINGLIT(tmp2106),tmp2107);
      {
        const char* assert_cond = "(plugFlowPipe_heat.vol_b.energyDynamics >= Modelica.Fluid.Types.Dynamics.DynamicFreeInitial and plugFlowPipe_heat.vol_b.energyDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"E:/Daniel/sgi digital twin/Modelica/IDEAS-master/IDEAS/Fluid/Interfaces/LumpedVolumeDeclarations.mo",15,3,17,88,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2108));
        } else {
          FILE_INFO info = {"E:/Daniel/sgi digital twin/Modelica/IDEAS-master/IDEAS/Fluid/Interfaces/LumpedVolumeDeclarations.mo",15,3,17,88,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2108));
        }
      }
      tmp2109 = 1;
    }
  }
  threadData->lastEquationSolved = 2873;
}

/*
equation index: 2874
type: ALGORITHM

  assert(plugFlowPipe_heat.timDel.m_flow_nominal >= 0.0, "Variable violating min constraint: 0.0 <= plugFlowPipe_heat.timDel.m_flow_nominal, has value: " + String(plugFlowPipe_heat.timDel.m_flow_nominal, "g"));
*/
OMC_DISABLE_OPT
static void pump_v3_basicCold_t_eqFunction_2874(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2874};
  modelica_boolean tmp2110;
  static const MMC_DEFSTRINGLIT(tmp2111,94,"Variable violating min constraint: 0.0 <= plugFlowPipe_heat.timDel.m_flow_nominal, has value: ");
  modelica_string tmp2112;
  modelica_metatype tmpMeta2113;
  static int tmp2114 = 0;
  if(!tmp2114)
  {
    tmp2110 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[622]] /* plugFlowPipe_heat.timDel.m_flow_nominal PARAM */),0.0);
    if(!tmp2110)
    {
      tmp2112 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[622]] /* plugFlowPipe_heat.timDel.m_flow_nominal PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta2113 = stringAppend(MMC_REFSTRINGLIT(tmp2111),tmp2112);
      {
        const char* assert_cond = "(plugFlowPipe_heat.timDel.m_flow_nominal >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"E:/Daniel/sgi digital twin/Modelica/IDEAS-master/IDEAS/Fluid/FixedResistances/BaseClasses/PlugFlowTransportDelay.mo",15,3,16,76,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2113));
        } else {
          FILE_INFO info = {"E:/Daniel/sgi digital twin/Modelica/IDEAS-master/IDEAS/Fluid/FixedResistances/BaseClasses/PlugFlowTransportDelay.mo",15,3,16,76,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2113));
        }
      }
      tmp2114 = 1;
    }
  }
  threadData->lastEquationSolved = 2874;
}

/*
equation index: 2875
type: ALGORITHM

  assert(plugFlowPipe_heat.timDel.rho >= 0.0, "Variable violating min constraint: 0.0 <= plugFlowPipe_heat.timDel.rho, has value: " + String(plugFlowPipe_heat.timDel.rho, "g"));
*/
OMC_DISABLE_OPT
static void pump_v3_basicCold_t_eqFunction_2875(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2875};
  modelica_boolean tmp2115;
  static const MMC_DEFSTRINGLIT(tmp2116,83,"Variable violating min constraint: 0.0 <= plugFlowPipe_heat.timDel.rho, has value: ");
  modelica_string tmp2117;
  modelica_metatype tmpMeta2118;
  static int tmp2119 = 0;
  if(!tmp2119)
  {
    tmp2115 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[624]] /* plugFlowPipe_heat.timDel.rho PARAM */),0.0);
    if(!tmp2115)
    {
      tmp2117 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[624]] /* plugFlowPipe_heat.timDel.rho PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta2118 = stringAppend(MMC_REFSTRINGLIT(tmp2116),tmp2117);
      {
        const char* assert_cond = "(plugFlowPipe_heat.timDel.rho >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"E:/Daniel/sgi digital twin/Modelica/IDEAS-master/IDEAS/Fluid/FixedResistances/BaseClasses/PlugFlowTransportDelay.mo",7,3,7,70,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2118));
        } else {
          FILE_INFO info = {"E:/Daniel/sgi digital twin/Modelica/IDEAS-master/IDEAS/Fluid/FixedResistances/BaseClasses/PlugFlowTransportDelay.mo",7,3,7,70,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2118));
        }
      }
      tmp2119 = 1;
    }
  }
  threadData->lastEquationSolved = 2875;
}

/*
equation index: 2876
type: ALGORITHM

  assert(plugFlowPipe_heat.senMasFlo.m_flow_small >= 0.0, "Variable violating min constraint: 0.0 <= plugFlowPipe_heat.senMasFlo.m_flow_small, has value: " + String(plugFlowPipe_heat.senMasFlo.m_flow_small, "g"));
*/
OMC_DISABLE_OPT
static void pump_v3_basicCold_t_eqFunction_2876(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2876};
  modelica_boolean tmp2120;
  static const MMC_DEFSTRINGLIT(tmp2121,95,"Variable violating min constraint: 0.0 <= plugFlowPipe_heat.senMasFlo.m_flow_small, has value: ");
  modelica_string tmp2122;
  modelica_metatype tmpMeta2123;
  static int tmp2124 = 0;
  if(!tmp2124)
  {
    tmp2120 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[615]] /* plugFlowPipe_heat.senMasFlo.m_flow_small PARAM */),0.0);
    if(!tmp2120)
    {
      tmp2122 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[615]] /* plugFlowPipe_heat.senMasFlo.m_flow_small PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta2123 = stringAppend(MMC_REFSTRINGLIT(tmp2121),tmp2122);
      {
        const char* assert_cond = "(plugFlowPipe_heat.senMasFlo.m_flow_small >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"E:/Daniel/sgi digital twin/Modelica/IDEAS-master/IDEAS/Fluid/Sensors/BaseClasses/PartialFlowSensor.mo",8,3,11,40,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2123));
        } else {
          FILE_INFO info = {"E:/Daniel/sgi digital twin/Modelica/IDEAS-master/IDEAS/Fluid/Sensors/BaseClasses/PartialFlowSensor.mo",8,3,11,40,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2123));
        }
      }
      tmp2124 = 1;
    }
  }
  threadData->lastEquationSolved = 2876;
}

/*
equation index: 2877
type: ALGORITHM

  assert(plugFlowPipe_heat.senMasFlo.m_flow_nominal >= 0.0, "Variable violating min constraint: 0.0 <= plugFlowPipe_heat.senMasFlo.m_flow_nominal, has value: " + String(plugFlowPipe_heat.senMasFlo.m_flow_nominal, "g"));
*/
OMC_DISABLE_OPT
static void pump_v3_basicCold_t_eqFunction_2877(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2877};
  modelica_boolean tmp2125;
  static const MMC_DEFSTRINGLIT(tmp2126,97,"Variable violating min constraint: 0.0 <= plugFlowPipe_heat.senMasFlo.m_flow_nominal, has value: ");
  modelica_string tmp2127;
  modelica_metatype tmpMeta2128;
  static int tmp2129 = 0;
  if(!tmp2129)
  {
    tmp2125 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[614]] /* plugFlowPipe_heat.senMasFlo.m_flow_nominal PARAM */),0.0);
    if(!tmp2125)
    {
      tmp2127 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[614]] /* plugFlowPipe_heat.senMasFlo.m_flow_nominal PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta2128 = stringAppend(MMC_REFSTRINGLIT(tmp2126),tmp2127);
      {
        const char* assert_cond = "(plugFlowPipe_heat.senMasFlo.m_flow_nominal >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"E:/Daniel/sgi digital twin/Modelica/IDEAS-master/IDEAS/Fluid/Sensors/BaseClasses/PartialFlowSensor.mo",5,3,7,51,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2128));
        } else {
          FILE_INFO info = {"E:/Daniel/sgi digital twin/Modelica/IDEAS-master/IDEAS/Fluid/Sensors/BaseClasses/PartialFlowSensor.mo",5,3,7,51,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2128));
        }
      }
      tmp2129 = 1;
    }
  }
  threadData->lastEquationSolved = 2877;
}

/*
equation index: 2878
type: ALGORITHM

  assert(plugFlowPipe_heat.heaLos_b.sta_default.p >= 0.0 and plugFlowPipe_heat.heaLos_b.sta_default.p <= 1e8, "Variable violating min/max constraint: 0.0 <= plugFlowPipe_heat.heaLos_b.sta_default.p <= 1e8, has value: " + String(plugFlowPipe_heat.heaLos_b.sta_default.p, "g"));
*/
OMC_DISABLE_OPT
static void pump_v3_basicCold_t_eqFunction_2878(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2878};
  modelica_boolean tmp2130;
  modelica_boolean tmp2131;
  static const MMC_DEFSTRINGLIT(tmp2132,106,"Variable violating min/max constraint: 0.0 <= plugFlowPipe_heat.heaLos_b.sta_default.p <= 1e8, has value: ");
  modelica_string tmp2133;
  modelica_metatype tmpMeta2134;
  static int tmp2135 = 0;
  if(!tmp2135)
  {
    tmp2130 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[578]] /* plugFlowPipe_heat.heaLos_b.sta_default.p PARAM */),0.0);
    tmp2131 = LessEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[578]] /* plugFlowPipe_heat.heaLos_b.sta_default.p PARAM */),1e8);
    if(!(tmp2130 && tmp2131))
    {
      tmp2133 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[578]] /* plugFlowPipe_heat.heaLos_b.sta_default.p PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta2134 = stringAppend(MMC_REFSTRINGLIT(tmp2132),tmp2133);
      {
        const char* assert_cond = "(plugFlowPipe_heat.heaLos_b.sta_default.p >= 0.0 and plugFlowPipe_heat.heaLos_b.sta_default.p <= 1e8)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/Daniel/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Media/package.mo",5869,7,5869,55,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2134));
        } else {
          FILE_INFO info = {"C:/Users/Daniel/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Media/package.mo",5869,7,5869,55,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2134));
        }
      }
      tmp2135 = 1;
    }
  }
  threadData->lastEquationSolved = 2878;
}

/*
equation index: 2879
type: ALGORITHM

  assert(plugFlowPipe_heat.heaLos_b.sta_default.T >= 1.0 and plugFlowPipe_heat.heaLos_b.sta_default.T <= 1e4, "Variable violating min/max constraint: 1.0 <= plugFlowPipe_heat.heaLos_b.sta_default.T <= 1e4, has value: " + String(plugFlowPipe_heat.heaLos_b.sta_default.T, "g"));
*/
OMC_DISABLE_OPT
static void pump_v3_basicCold_t_eqFunction_2879(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2879};
  modelica_boolean tmp2136;
  modelica_boolean tmp2137;
  static const MMC_DEFSTRINGLIT(tmp2138,106,"Variable violating min/max constraint: 1.0 <= plugFlowPipe_heat.heaLos_b.sta_default.T <= 1e4, has value: ");
  modelica_string tmp2139;
  modelica_metatype tmpMeta2140;
  static int tmp2141 = 0;
  if(!tmp2141)
  {
    tmp2136 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[577]] /* plugFlowPipe_heat.heaLos_b.sta_default.T PARAM */),1.0);
    tmp2137 = LessEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[577]] /* plugFlowPipe_heat.heaLos_b.sta_default.T PARAM */),1e4);
    if(!(tmp2136 && tmp2137))
    {
      tmp2139 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[577]] /* plugFlowPipe_heat.heaLos_b.sta_default.T PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta2140 = stringAppend(MMC_REFSTRINGLIT(tmp2138),tmp2139);
      {
        const char* assert_cond = "(plugFlowPipe_heat.heaLos_b.sta_default.T >= 1.0 and plugFlowPipe_heat.heaLos_b.sta_default.T <= 1e4)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/Daniel/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Media/package.mo",5870,7,5870,44,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2140));
        } else {
          FILE_INFO info = {"C:/Users/Daniel/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Media/package.mo",5870,7,5870,44,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2140));
        }
      }
      tmp2141 = 1;
    }
  }
  threadData->lastEquationSolved = 2879;
}

/*
equation index: 2880
type: ALGORITHM

  assert(plugFlowPipe_heat.heaLos_b.T_start >= 0.0, "Variable violating min constraint: 0.0 <= plugFlowPipe_heat.heaLos_b.T_start, has value: " + String(plugFlowPipe_heat.heaLos_b.T_start, "g"));
*/
OMC_DISABLE_OPT
static void pump_v3_basicCold_t_eqFunction_2880(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2880};
  modelica_boolean tmp2142;
  static const MMC_DEFSTRINGLIT(tmp2143,89,"Variable violating min constraint: 0.0 <= plugFlowPipe_heat.heaLos_b.T_start, has value: ");
  modelica_string tmp2144;
  modelica_metatype tmpMeta2145;
  static int tmp2146 = 0;
  if(!tmp2146)
  {
    tmp2142 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[571]] /* plugFlowPipe_heat.heaLos_b.T_start PARAM */),0.0);
    if(!tmp2142)
    {
      tmp2144 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[571]] /* plugFlowPipe_heat.heaLos_b.T_start PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta2145 = stringAppend(MMC_REFSTRINGLIT(tmp2143),tmp2144);
      {
        const char* assert_cond = "(plugFlowPipe_heat.heaLos_b.T_start >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"E:/Daniel/sgi digital twin/Modelica/IDEAS-master/IDEAS/Fluid/FixedResistances/BaseClasses/PlugFlowHeatLoss.mo",16,3,16,79,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2145));
        } else {
          FILE_INFO info = {"E:/Daniel/sgi digital twin/Modelica/IDEAS-master/IDEAS/Fluid/FixedResistances/BaseClasses/PlugFlowHeatLoss.mo",16,3,16,79,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2145));
        }
      }
      tmp2146 = 1;
    }
  }
  threadData->lastEquationSolved = 2880;
}

/*
equation index: 2881
type: ALGORITHM

  assert(plugFlowPipe_heat.m_flow_small >= 0.0, "Variable violating min constraint: 0.0 <= plugFlowPipe_heat.m_flow_small, has value: " + String(plugFlowPipe_heat.m_flow_small, "g"));
*/
OMC_DISABLE_OPT
static void pump_v3_basicCold_t_eqFunction_2881(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2881};
  modelica_boolean tmp2147;
  static const MMC_DEFSTRINGLIT(tmp2148,85,"Variable violating min constraint: 0.0 <= plugFlowPipe_heat.m_flow_small, has value: ");
  modelica_string tmp2149;
  modelica_metatype tmpMeta2150;
  static int tmp2151 = 0;
  if(!tmp2151)
  {
    tmp2147 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[583]] /* plugFlowPipe_heat.m_flow_small PARAM */),0.0);
    if(!tmp2147)
    {
      tmp2149 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[583]] /* plugFlowPipe_heat.m_flow_small PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta2150 = stringAppend(MMC_REFSTRINGLIT(tmp2148),tmp2149);
      {
        const char* assert_cond = "(plugFlowPipe_heat.m_flow_small >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"E:/Daniel/sgi digital twin/Modelica/IDEAS-master/IDEAS/Fluid/Interfaces/PartialTwoPortInterface.mo",10,3,12,40,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2150));
        } else {
          FILE_INFO info = {"E:/Daniel/sgi digital twin/Modelica/IDEAS-master/IDEAS/Fluid/Interfaces/PartialTwoPortInterface.mo",10,3,12,40,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2150));
        }
      }
      tmp2151 = 1;
    }
  }
  threadData->lastEquationSolved = 2881;
}

/*
equation index: 2882
type: ALGORITHM

  assert(plugFlowPipe_heat.heaLos_b.m_flow_small >= -1e5 and plugFlowPipe_heat.heaLos_b.m_flow_small <= 1e5, "Variable violating min/max constraint: -1e5 <= plugFlowPipe_heat.heaLos_b.m_flow_small <= 1e5, has value: " + String(plugFlowPipe_heat.heaLos_b.m_flow_small, "g"));
*/
OMC_DISABLE_OPT
static void pump_v3_basicCold_t_eqFunction_2882(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2882};
  modelica_boolean tmp2152;
  modelica_boolean tmp2153;
  static const MMC_DEFSTRINGLIT(tmp2154,106,"Variable violating min/max constraint: -1e5 <= plugFlowPipe_heat.heaLos_b.m_flow_small <= 1e5, has value: ");
  modelica_string tmp2155;
  modelica_metatype tmpMeta2156;
  static int tmp2157 = 0;
  if(!tmp2157)
  {
    tmp2152 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[575]] /* plugFlowPipe_heat.heaLos_b.m_flow_small PARAM */),-1e5);
    tmp2153 = LessEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[575]] /* plugFlowPipe_heat.heaLos_b.m_flow_small PARAM */),1e5);
    if(!(tmp2152 && tmp2153))
    {
      tmp2155 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[575]] /* plugFlowPipe_heat.heaLos_b.m_flow_small PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta2156 = stringAppend(MMC_REFSTRINGLIT(tmp2154),tmp2155);
      {
        const char* assert_cond = "(plugFlowPipe_heat.heaLos_b.m_flow_small >= -1e5 and plugFlowPipe_heat.heaLos_b.m_flow_small <= 1e5)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"E:/Daniel/sgi digital twin/Modelica/IDEAS-master/IDEAS/Fluid/Interfaces/PartialTwoPortTransport.mo",17,3,19,41,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2156));
        } else {
          FILE_INFO info = {"E:/Daniel/sgi digital twin/Modelica/IDEAS-master/IDEAS/Fluid/Interfaces/PartialTwoPortTransport.mo",17,3,19,41,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2156));
        }
      }
      tmp2157 = 1;
    }
  }
  threadData->lastEquationSolved = 2882;
}

/*
equation index: 2883
type: ALGORITHM

  assert(plugFlowPipe_heat.heaLos_b.m_flow_start >= -1e5 and plugFlowPipe_heat.heaLos_b.m_flow_start <= 1e5, "Variable violating min/max constraint: -1e5 <= plugFlowPipe_heat.heaLos_b.m_flow_start <= 1e5, has value: " + String(plugFlowPipe_heat.heaLos_b.m_flow_start, "g"));
*/
OMC_DISABLE_OPT
static void pump_v3_basicCold_t_eqFunction_2883(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2883};
  modelica_boolean tmp2158;
  modelica_boolean tmp2159;
  static const MMC_DEFSTRINGLIT(tmp2160,106,"Variable violating min/max constraint: -1e5 <= plugFlowPipe_heat.heaLos_b.m_flow_start <= 1e5, has value: ");
  modelica_string tmp2161;
  modelica_metatype tmpMeta2162;
  static int tmp2163 = 0;
  if(!tmp2163)
  {
    tmp2158 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[576]] /* plugFlowPipe_heat.heaLos_b.m_flow_start PARAM */),-1e5);
    tmp2159 = LessEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[576]] /* plugFlowPipe_heat.heaLos_b.m_flow_start PARAM */),1e5);
    if(!(tmp2158 && tmp2159))
    {
      tmp2161 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[576]] /* plugFlowPipe_heat.heaLos_b.m_flow_start PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta2162 = stringAppend(MMC_REFSTRINGLIT(tmp2160),tmp2161);
      {
        const char* assert_cond = "(plugFlowPipe_heat.heaLos_b.m_flow_start >= -1e5 and plugFlowPipe_heat.heaLos_b.m_flow_start <= 1e5)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"E:/Daniel/sgi digital twin/Modelica/IDEAS-master/IDEAS/Fluid/Interfaces/PartialTwoPortTransport.mo",12,3,14,41,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2162));
        } else {
          FILE_INFO info = {"E:/Daniel/sgi digital twin/Modelica/IDEAS-master/IDEAS/Fluid/Interfaces/PartialTwoPortTransport.mo",12,3,14,41,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2162));
        }
      }
      tmp2163 = 1;
    }
  }
  threadData->lastEquationSolved = 2883;
}

/*
equation index: 2884
type: ALGORITHM

  assert(plugFlowPipe_heat.heaLos_a.sta_default.p >= 0.0 and plugFlowPipe_heat.heaLos_a.sta_default.p <= 1e8, "Variable violating min/max constraint: 0.0 <= plugFlowPipe_heat.heaLos_a.sta_default.p <= 1e8, has value: " + String(plugFlowPipe_heat.heaLos_a.sta_default.p, "g"));
*/
OMC_DISABLE_OPT
static void pump_v3_basicCold_t_eqFunction_2884(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2884};
  modelica_boolean tmp2164;
  modelica_boolean tmp2165;
  static const MMC_DEFSTRINGLIT(tmp2166,106,"Variable violating min/max constraint: 0.0 <= plugFlowPipe_heat.heaLos_a.sta_default.p <= 1e8, has value: ");
  modelica_string tmp2167;
  modelica_metatype tmpMeta2168;
  static int tmp2169 = 0;
  if(!tmp2169)
  {
    tmp2164 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[567]] /* plugFlowPipe_heat.heaLos_a.sta_default.p PARAM */),0.0);
    tmp2165 = LessEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[567]] /* plugFlowPipe_heat.heaLos_a.sta_default.p PARAM */),1e8);
    if(!(tmp2164 && tmp2165))
    {
      tmp2167 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[567]] /* plugFlowPipe_heat.heaLos_a.sta_default.p PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta2168 = stringAppend(MMC_REFSTRINGLIT(tmp2166),tmp2167);
      {
        const char* assert_cond = "(plugFlowPipe_heat.heaLos_a.sta_default.p >= 0.0 and plugFlowPipe_heat.heaLos_a.sta_default.p <= 1e8)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/Daniel/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Media/package.mo",5869,7,5869,55,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2168));
        } else {
          FILE_INFO info = {"C:/Users/Daniel/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Media/package.mo",5869,7,5869,55,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2168));
        }
      }
      tmp2169 = 1;
    }
  }
  threadData->lastEquationSolved = 2884;
}

/*
equation index: 2885
type: ALGORITHM

  assert(plugFlowPipe_heat.heaLos_a.sta_default.T >= 1.0 and plugFlowPipe_heat.heaLos_a.sta_default.T <= 1e4, "Variable violating min/max constraint: 1.0 <= plugFlowPipe_heat.heaLos_a.sta_default.T <= 1e4, has value: " + String(plugFlowPipe_heat.heaLos_a.sta_default.T, "g"));
*/
OMC_DISABLE_OPT
static void pump_v3_basicCold_t_eqFunction_2885(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2885};
  modelica_boolean tmp2170;
  modelica_boolean tmp2171;
  static const MMC_DEFSTRINGLIT(tmp2172,106,"Variable violating min/max constraint: 1.0 <= plugFlowPipe_heat.heaLos_a.sta_default.T <= 1e4, has value: ");
  modelica_string tmp2173;
  modelica_metatype tmpMeta2174;
  static int tmp2175 = 0;
  if(!tmp2175)
  {
    tmp2170 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[566]] /* plugFlowPipe_heat.heaLos_a.sta_default.T PARAM */),1.0);
    tmp2171 = LessEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[566]] /* plugFlowPipe_heat.heaLos_a.sta_default.T PARAM */),1e4);
    if(!(tmp2170 && tmp2171))
    {
      tmp2173 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[566]] /* plugFlowPipe_heat.heaLos_a.sta_default.T PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta2174 = stringAppend(MMC_REFSTRINGLIT(tmp2172),tmp2173);
      {
        const char* assert_cond = "(plugFlowPipe_heat.heaLos_a.sta_default.T >= 1.0 and plugFlowPipe_heat.heaLos_a.sta_default.T <= 1e4)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/Daniel/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Media/package.mo",5870,7,5870,44,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2174));
        } else {
          FILE_INFO info = {"C:/Users/Daniel/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Media/package.mo",5870,7,5870,44,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2174));
        }
      }
      tmp2175 = 1;
    }
  }
  threadData->lastEquationSolved = 2885;
}

/*
equation index: 2886
type: ALGORITHM

  assert(plugFlowPipe_heat.T_start_in >= 0.0, "Variable violating min constraint: 0.0 <= plugFlowPipe_heat.T_start_in, has value: " + String(plugFlowPipe_heat.T_start_in, "g"));
*/
OMC_DISABLE_OPT
static void pump_v3_basicCold_t_eqFunction_2886(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2886};
  modelica_boolean tmp2176;
  static const MMC_DEFSTRINGLIT(tmp2177,83,"Variable violating min constraint: 0.0 <= plugFlowPipe_heat.T_start_in, has value: ");
  modelica_string tmp2178;
  modelica_metatype tmpMeta2179;
  static int tmp2180 = 0;
  if(!tmp2180)
  {
    tmp2176 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[540]] /* plugFlowPipe_heat.T_start_in PARAM */),0.0);
    if(!tmp2176)
    {
      tmp2178 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[540]] /* plugFlowPipe_heat.T_start_in PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta2179 = stringAppend(MMC_REFSTRINGLIT(tmp2177),tmp2178);
      {
        const char* assert_cond = "(plugFlowPipe_heat.T_start_in >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"E:/Daniel/sgi digital twin/Modelica/IDEAS-master/IDEAS/Fluid/FixedResistances/BaseClasses/PlugFlowPipe.mo",61,3,63,46,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2179));
        } else {
          FILE_INFO info = {"E:/Daniel/sgi digital twin/Modelica/IDEAS-master/IDEAS/Fluid/FixedResistances/BaseClasses/PlugFlowPipe.mo",61,3,63,46,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2179));
        }
      }
      tmp2180 = 1;
    }
  }
  threadData->lastEquationSolved = 2886;
}

/*
equation index: 2887
type: ALGORITHM

  assert(plugFlowPipe_heat.heaLos_a.T_start >= 0.0, "Variable violating min constraint: 0.0 <= plugFlowPipe_heat.heaLos_a.T_start, has value: " + String(plugFlowPipe_heat.heaLos_a.T_start, "g"));
*/
OMC_DISABLE_OPT
static void pump_v3_basicCold_t_eqFunction_2887(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2887};
  modelica_boolean tmp2181;
  static const MMC_DEFSTRINGLIT(tmp2182,89,"Variable violating min constraint: 0.0 <= plugFlowPipe_heat.heaLos_a.T_start, has value: ");
  modelica_string tmp2183;
  modelica_metatype tmpMeta2184;
  static int tmp2185 = 0;
  if(!tmp2185)
  {
    tmp2181 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[560]] /* plugFlowPipe_heat.heaLos_a.T_start PARAM */),0.0);
    if(!tmp2181)
    {
      tmp2183 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[560]] /* plugFlowPipe_heat.heaLos_a.T_start PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta2184 = stringAppend(MMC_REFSTRINGLIT(tmp2182),tmp2183);
      {
        const char* assert_cond = "(plugFlowPipe_heat.heaLos_a.T_start >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"E:/Daniel/sgi digital twin/Modelica/IDEAS-master/IDEAS/Fluid/FixedResistances/BaseClasses/PlugFlowHeatLoss.mo",16,3,16,79,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2184));
        } else {
          FILE_INFO info = {"E:/Daniel/sgi digital twin/Modelica/IDEAS-master/IDEAS/Fluid/FixedResistances/BaseClasses/PlugFlowHeatLoss.mo",16,3,16,79,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2184));
        }
      }
      tmp2185 = 1;
    }
  }
  threadData->lastEquationSolved = 2887;
}

/*
equation index: 2888
type: ALGORITHM

  assert(plugFlowPipe_heat.heaLos_a.m_flow_small >= -1e5 and plugFlowPipe_heat.heaLos_a.m_flow_small <= 1e5, "Variable violating min/max constraint: -1e5 <= plugFlowPipe_heat.heaLos_a.m_flow_small <= 1e5, has value: " + String(plugFlowPipe_heat.heaLos_a.m_flow_small, "g"));
*/
OMC_DISABLE_OPT
static void pump_v3_basicCold_t_eqFunction_2888(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2888};
  modelica_boolean tmp2186;
  modelica_boolean tmp2187;
  static const MMC_DEFSTRINGLIT(tmp2188,106,"Variable violating min/max constraint: -1e5 <= plugFlowPipe_heat.heaLos_a.m_flow_small <= 1e5, has value: ");
  modelica_string tmp2189;
  modelica_metatype tmpMeta2190;
  static int tmp2191 = 0;
  if(!tmp2191)
  {
    tmp2186 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[564]] /* plugFlowPipe_heat.heaLos_a.m_flow_small PARAM */),-1e5);
    tmp2187 = LessEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[564]] /* plugFlowPipe_heat.heaLos_a.m_flow_small PARAM */),1e5);
    if(!(tmp2186 && tmp2187))
    {
      tmp2189 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[564]] /* plugFlowPipe_heat.heaLos_a.m_flow_small PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta2190 = stringAppend(MMC_REFSTRINGLIT(tmp2188),tmp2189);
      {
        const char* assert_cond = "(plugFlowPipe_heat.heaLos_a.m_flow_small >= -1e5 and plugFlowPipe_heat.heaLos_a.m_flow_small <= 1e5)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"E:/Daniel/sgi digital twin/Modelica/IDEAS-master/IDEAS/Fluid/Interfaces/PartialTwoPortTransport.mo",17,3,19,41,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2190));
        } else {
          FILE_INFO info = {"E:/Daniel/sgi digital twin/Modelica/IDEAS-master/IDEAS/Fluid/Interfaces/PartialTwoPortTransport.mo",17,3,19,41,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2190));
        }
      }
      tmp2191 = 1;
    }
  }
  threadData->lastEquationSolved = 2888;
}

/*
equation index: 2889
type: ALGORITHM

  assert(plugFlowPipe_heat.heaLos_a.m_flow_start >= -1e5 and plugFlowPipe_heat.heaLos_a.m_flow_start <= 1e5, "Variable violating min/max constraint: -1e5 <= plugFlowPipe_heat.heaLos_a.m_flow_start <= 1e5, has value: " + String(plugFlowPipe_heat.heaLos_a.m_flow_start, "g"));
*/
OMC_DISABLE_OPT
static void pump_v3_basicCold_t_eqFunction_2889(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2889};
  modelica_boolean tmp2192;
  modelica_boolean tmp2193;
  static const MMC_DEFSTRINGLIT(tmp2194,106,"Variable violating min/max constraint: -1e5 <= plugFlowPipe_heat.heaLos_a.m_flow_start <= 1e5, has value: ");
  modelica_string tmp2195;
  modelica_metatype tmpMeta2196;
  static int tmp2197 = 0;
  if(!tmp2197)
  {
    tmp2192 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[565]] /* plugFlowPipe_heat.heaLos_a.m_flow_start PARAM */),-1e5);
    tmp2193 = LessEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[565]] /* plugFlowPipe_heat.heaLos_a.m_flow_start PARAM */),1e5);
    if(!(tmp2192 && tmp2193))
    {
      tmp2195 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[565]] /* plugFlowPipe_heat.heaLos_a.m_flow_start PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta2196 = stringAppend(MMC_REFSTRINGLIT(tmp2194),tmp2195);
      {
        const char* assert_cond = "(plugFlowPipe_heat.heaLos_a.m_flow_start >= -1e5 and plugFlowPipe_heat.heaLos_a.m_flow_start <= 1e5)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"E:/Daniel/sgi digital twin/Modelica/IDEAS-master/IDEAS/Fluid/Interfaces/PartialTwoPortTransport.mo",12,3,14,41,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2196));
        } else {
          FILE_INFO info = {"E:/Daniel/sgi digital twin/Modelica/IDEAS-master/IDEAS/Fluid/Interfaces/PartialTwoPortTransport.mo",12,3,14,41,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2196));
        }
      }
      tmp2197 = 1;
    }
  }
  threadData->lastEquationSolved = 2889;
}

/*
equation index: 2890
type: ALGORITHM

  assert(plugFlowPipe_heat.del.T_start_out >= 0.0, "Variable violating min constraint: 0.0 <= plugFlowPipe_heat.del.T_start_out, has value: " + String(plugFlowPipe_heat.del.T_start_out, "g"));
*/
OMC_DISABLE_OPT
static void pump_v3_basicCold_t_eqFunction_2890(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2890};
  modelica_boolean tmp2198;
  static const MMC_DEFSTRINGLIT(tmp2199,88,"Variable violating min constraint: 0.0 <= plugFlowPipe_heat.del.T_start_out, has value: ");
  modelica_string tmp2200;
  modelica_metatype tmpMeta2201;
  static int tmp2202 = 0;
  if(!tmp2202)
  {
    tmp2198 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[550]] /* plugFlowPipe_heat.del.T_start_out PARAM */),0.0);
    if(!tmp2198)
    {
      tmp2200 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[550]] /* plugFlowPipe_heat.del.T_start_out PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta2201 = stringAppend(MMC_REFSTRINGLIT(tmp2199),tmp2200);
      {
        const char* assert_cond = "(plugFlowPipe_heat.del.T_start_out >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"E:/Daniel/sgi digital twin/Modelica/IDEAS-master/IDEAS/Fluid/FixedResistances/BaseClasses/PlugFlow.mo",18,3,20,48,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2201));
        } else {
          FILE_INFO info = {"E:/Daniel/sgi digital twin/Modelica/IDEAS-master/IDEAS/Fluid/FixedResistances/BaseClasses/PlugFlow.mo",18,3,20,48,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2201));
        }
      }
      tmp2202 = 1;
    }
  }
  threadData->lastEquationSolved = 2890;
}

/*
equation index: 2891
type: ALGORITHM

  assert(plugFlowPipe_heat.del.T_start_in >= 0.0, "Variable violating min constraint: 0.0 <= plugFlowPipe_heat.del.T_start_in, has value: " + String(plugFlowPipe_heat.del.T_start_in, "g"));
*/
OMC_DISABLE_OPT
static void pump_v3_basicCold_t_eqFunction_2891(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2891};
  modelica_boolean tmp2203;
  static const MMC_DEFSTRINGLIT(tmp2204,87,"Variable violating min constraint: 0.0 <= plugFlowPipe_heat.del.T_start_in, has value: ");
  modelica_string tmp2205;
  modelica_metatype tmpMeta2206;
  static int tmp2207 = 0;
  if(!tmp2207)
  {
    tmp2203 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[549]] /* plugFlowPipe_heat.del.T_start_in PARAM */),0.0);
    if(!tmp2203)
    {
      tmp2205 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[549]] /* plugFlowPipe_heat.del.T_start_in PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta2206 = stringAppend(MMC_REFSTRINGLIT(tmp2204),tmp2205);
      {
        const char* assert_cond = "(plugFlowPipe_heat.del.T_start_in >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"E:/Daniel/sgi digital twin/Modelica/IDEAS-master/IDEAS/Fluid/FixedResistances/BaseClasses/PlugFlow.mo",15,3,17,48,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2206));
        } else {
          FILE_INFO info = {"E:/Daniel/sgi digital twin/Modelica/IDEAS-master/IDEAS/Fluid/FixedResistances/BaseClasses/PlugFlow.mo",15,3,17,48,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2206));
        }
      }
      tmp2207 = 1;
    }
  }
  threadData->lastEquationSolved = 2891;
}

/*
equation index: 2892
type: ALGORITHM

  assert(plugFlowPipe_heat.del.m_flow_small >= -1e5 and plugFlowPipe_heat.del.m_flow_small <= 1e5, "Variable violating min/max constraint: -1e5 <= plugFlowPipe_heat.del.m_flow_small <= 1e5, has value: " + String(plugFlowPipe_heat.del.m_flow_small, "g"));
*/
OMC_DISABLE_OPT
static void pump_v3_basicCold_t_eqFunction_2892(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2892};
  modelica_boolean tmp2208;
  modelica_boolean tmp2209;
  static const MMC_DEFSTRINGLIT(tmp2210,101,"Variable violating min/max constraint: -1e5 <= plugFlowPipe_heat.del.m_flow_small <= 1e5, has value: ");
  modelica_string tmp2211;
  modelica_metatype tmpMeta2212;
  static int tmp2213 = 0;
  if(!tmp2213)
  {
    tmp2208 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[555]] /* plugFlowPipe_heat.del.m_flow_small PARAM */),-1e5);
    tmp2209 = LessEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[555]] /* plugFlowPipe_heat.del.m_flow_small PARAM */),1e5);
    if(!(tmp2208 && tmp2209))
    {
      tmp2211 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[555]] /* plugFlowPipe_heat.del.m_flow_small PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta2212 = stringAppend(MMC_REFSTRINGLIT(tmp2210),tmp2211);
      {
        const char* assert_cond = "(plugFlowPipe_heat.del.m_flow_small >= -1e5 and plugFlowPipe_heat.del.m_flow_small <= 1e5)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"E:/Daniel/sgi digital twin/Modelica/IDEAS-master/IDEAS/Fluid/FixedResistances/BaseClasses/PlugFlow.mo",12,3,14,41,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2212));
        } else {
          FILE_INFO info = {"E:/Daniel/sgi digital twin/Modelica/IDEAS-master/IDEAS/Fluid/FixedResistances/BaseClasses/PlugFlow.mo",12,3,14,41,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2212));
        }
      }
      tmp2213 = 1;
    }
  }
  threadData->lastEquationSolved = 2892;
}

/*
equation index: 2893
type: ALGORITHM

  assert(plugFlowPipe_heat.del.length >= 0.0, "Variable violating min constraint: 0.0 <= plugFlowPipe_heat.del.length, has value: " + String(plugFlowPipe_heat.del.length, "g"));
*/
OMC_DISABLE_OPT
static void pump_v3_basicCold_t_eqFunction_2893(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2893};
  modelica_boolean tmp2214;
  static const MMC_DEFSTRINGLIT(tmp2215,83,"Variable violating min constraint: 0.0 <= plugFlowPipe_heat.del.length, has value: ");
  modelica_string tmp2216;
  modelica_metatype tmpMeta2217;
  static int tmp2218 = 0;
  if(!tmp2218)
  {
    tmp2214 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[554]] /* plugFlowPipe_heat.del.length PARAM */),0.0);
    if(!tmp2214)
    {
      tmp2216 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[554]] /* plugFlowPipe_heat.del.length PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta2217 = stringAppend(MMC_REFSTRINGLIT(tmp2215),tmp2216);
      {
        const char* assert_cond = "(plugFlowPipe_heat.del.length >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"E:/Daniel/sgi digital twin/Modelica/IDEAS-master/IDEAS/Fluid/FixedResistances/BaseClasses/PlugFlow.mo",8,3,8,65,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2217));
        } else {
          FILE_INFO info = {"E:/Daniel/sgi digital twin/Modelica/IDEAS-master/IDEAS/Fluid/FixedResistances/BaseClasses/PlugFlow.mo",8,3,8,65,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2217));
        }
      }
      tmp2218 = 1;
    }
  }
  threadData->lastEquationSolved = 2893;
}

/*
equation index: 2894
type: ALGORITHM

  assert(plugFlowPipe_heat.rho_default >= 0.0, "Variable violating min constraint: 0.0 <= plugFlowPipe_heat.rho_default, has value: " + String(plugFlowPipe_heat.rho_default, "g"));
*/
OMC_DISABLE_OPT
static void pump_v3_basicCold_t_eqFunction_2894(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2894};
  modelica_boolean tmp2219;
  static const MMC_DEFSTRINGLIT(tmp2220,84,"Variable violating min constraint: 0.0 <= plugFlowPipe_heat.rho_default, has value: ");
  modelica_string tmp2221;
  modelica_metatype tmpMeta2222;
  static int tmp2223 = 0;
  if(!tmp2223)
  {
    tmp2219 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[612]] /* plugFlowPipe_heat.rho_default PARAM */),0.0);
    if(!tmp2219)
    {
      tmp2221 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[612]] /* plugFlowPipe_heat.rho_default PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta2222 = stringAppend(MMC_REFSTRINGLIT(tmp2220),tmp2221);
      {
        const char* assert_cond = "(plugFlowPipe_heat.rho_default >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"E:/Daniel/sgi digital twin/Modelica/IDEAS-master/IDEAS/Fluid/FixedResistances/BaseClasses/PlugFlowPipe.mo",140,3,145,42,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2222));
        } else {
          FILE_INFO info = {"E:/Daniel/sgi digital twin/Modelica/IDEAS-master/IDEAS/Fluid/FixedResistances/BaseClasses/PlugFlowPipe.mo",140,3,145,42,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2222));
        }
      }
      tmp2223 = 1;
    }
  }
  threadData->lastEquationSolved = 2894;
}

/*
equation index: 2895
type: ALGORITHM

  assert(plugFlowPipe_heat.res.mu_default >= 0.0, "Variable violating min constraint: 0.0 <= plugFlowPipe_heat.res.mu_default, has value: " + String(plugFlowPipe_heat.res.mu_default, "g"));
*/
OMC_DISABLE_OPT
static void pump_v3_basicCold_t_eqFunction_2895(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2895};
  modelica_boolean tmp2224;
  static const MMC_DEFSTRINGLIT(tmp2225,87,"Variable violating min constraint: 0.0 <= plugFlowPipe_heat.res.mu_default, has value: ");
  modelica_string tmp2226;
  modelica_metatype tmpMeta2227;
  static int tmp2228 = 0;
  if(!tmp2228)
  {
    tmp2224 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[603]] /* plugFlowPipe_heat.res.mu_default PARAM */),0.0);
    if(!tmp2224)
    {
      tmp2226 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[603]] /* plugFlowPipe_heat.res.mu_default PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta2227 = stringAppend(MMC_REFSTRINGLIT(tmp2225),tmp2226);
      {
        const char* assert_cond = "(plugFlowPipe_heat.res.mu_default >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"E:/Daniel/sgi digital twin/Modelica/IDEAS-master/IDEAS/Fluid/FixedResistances/HydraulicDiameter.mo",62,3,64,45,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2227));
        } else {
          FILE_INFO info = {"E:/Daniel/sgi digital twin/Modelica/IDEAS-master/IDEAS/Fluid/FixedResistances/HydraulicDiameter.mo",62,3,64,45,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2227));
        }
      }
      tmp2228 = 1;
    }
  }
  threadData->lastEquationSolved = 2895;
}

/*
equation index: 2896
type: ALGORITHM

  assert(plugFlowPipe_heat.res.rho_default >= 0.0, "Variable violating min constraint: 0.0 <= plugFlowPipe_heat.res.rho_default, has value: " + String(plugFlowPipe_heat.res.rho_default, "g"));
*/
OMC_DISABLE_OPT
static void pump_v3_basicCold_t_eqFunction_2896(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2896};
  modelica_boolean tmp2229;
  static const MMC_DEFSTRINGLIT(tmp2230,88,"Variable violating min constraint: 0.0 <= plugFlowPipe_heat.res.rho_default, has value: ");
  modelica_string tmp2231;
  modelica_metatype tmpMeta2232;
  static int tmp2233 = 0;
  if(!tmp2233)
  {
    tmp2229 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[604]] /* plugFlowPipe_heat.res.rho_default PARAM */),0.0);
    if(!tmp2229)
    {
      tmp2231 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[604]] /* plugFlowPipe_heat.res.rho_default PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta2232 = stringAppend(MMC_REFSTRINGLIT(tmp2230),tmp2231);
      {
        const char* assert_cond = "(plugFlowPipe_heat.res.rho_default >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"E:/Daniel/sgi digital twin/Modelica/IDEAS-master/IDEAS/Fluid/FixedResistances/HydraulicDiameter.mo",59,3,60,35,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2232));
        } else {
          FILE_INFO info = {"E:/Daniel/sgi digital twin/Modelica/IDEAS-master/IDEAS/Fluid/FixedResistances/HydraulicDiameter.mo",59,3,60,35,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2232));
        }
      }
      tmp2233 = 1;
    }
  }
  threadData->lastEquationSolved = 2896;
}

/*
equation index: 2897
type: ALGORITHM

  assert(plugFlowPipe_heat.res.state_default.T >= 1.0 and plugFlowPipe_heat.res.state_default.T <= 1e4, "Variable violating min/max constraint: 1.0 <= plugFlowPipe_heat.res.state_default.T <= 1e4, has value: " + String(plugFlowPipe_heat.res.state_default.T, "g"));
*/
OMC_DISABLE_OPT
static void pump_v3_basicCold_t_eqFunction_2897(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2897};
  modelica_boolean tmp2234;
  modelica_boolean tmp2235;
  static const MMC_DEFSTRINGLIT(tmp2236,103,"Variable violating min/max constraint: 1.0 <= plugFlowPipe_heat.res.state_default.T <= 1e4, has value: ");
  modelica_string tmp2237;
  modelica_metatype tmpMeta2238;
  static int tmp2239 = 0;
  if(!tmp2239)
  {
    tmp2234 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[608]] /* plugFlowPipe_heat.res.state_default.T PARAM */),1.0);
    tmp2235 = LessEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[608]] /* plugFlowPipe_heat.res.state_default.T PARAM */),1e4);
    if(!(tmp2234 && tmp2235))
    {
      tmp2237 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[608]] /* plugFlowPipe_heat.res.state_default.T PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta2238 = stringAppend(MMC_REFSTRINGLIT(tmp2236),tmp2237);
      {
        const char* assert_cond = "(plugFlowPipe_heat.res.state_default.T >= 1.0 and plugFlowPipe_heat.res.state_default.T <= 1e4)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/Daniel/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Media/package.mo",5870,7,5870,44,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2238));
        } else {
          FILE_INFO info = {"C:/Users/Daniel/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Media/package.mo",5870,7,5870,44,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2238));
        }
      }
      tmp2239 = 1;
    }
  }
  threadData->lastEquationSolved = 2897;
}

/*
equation index: 2898
type: ALGORITHM

  assert(plugFlowPipe_heat.res.state_default.p >= 0.0 and plugFlowPipe_heat.res.state_default.p <= 1e8, "Variable violating min/max constraint: 0.0 <= plugFlowPipe_heat.res.state_default.p <= 1e8, has value: " + String(plugFlowPipe_heat.res.state_default.p, "g"));
*/
OMC_DISABLE_OPT
static void pump_v3_basicCold_t_eqFunction_2898(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2898};
  modelica_boolean tmp2240;
  modelica_boolean tmp2241;
  static const MMC_DEFSTRINGLIT(tmp2242,103,"Variable violating min/max constraint: 0.0 <= plugFlowPipe_heat.res.state_default.p <= 1e8, has value: ");
  modelica_string tmp2243;
  modelica_metatype tmpMeta2244;
  static int tmp2245 = 0;
  if(!tmp2245)
  {
    tmp2240 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[609]] /* plugFlowPipe_heat.res.state_default.p PARAM */),0.0);
    tmp2241 = LessEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[609]] /* plugFlowPipe_heat.res.state_default.p PARAM */),1e8);
    if(!(tmp2240 && tmp2241))
    {
      tmp2243 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[609]] /* plugFlowPipe_heat.res.state_default.p PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta2244 = stringAppend(MMC_REFSTRINGLIT(tmp2242),tmp2243);
      {
        const char* assert_cond = "(plugFlowPipe_heat.res.state_default.p >= 0.0 and plugFlowPipe_heat.res.state_default.p <= 1e8)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/Daniel/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Media/package.mo",5869,7,5869,55,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2244));
        } else {
          FILE_INFO info = {"C:/Users/Daniel/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Media/package.mo",5869,7,5869,55,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2244));
        }
      }
      tmp2245 = 1;
    }
  }
  threadData->lastEquationSolved = 2898;
}

/*
equation index: 2899
type: ALGORITHM

  assert(plugFlowPipe_heat.res.fac >= 1.0, "Variable violating min constraint: 1.0 <= plugFlowPipe_heat.res.fac, has value: " + String(plugFlowPipe_heat.res.fac, "g"));
*/
OMC_DISABLE_OPT
static void pump_v3_basicCold_t_eqFunction_2899(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2899};
  modelica_boolean tmp2246;
  static const MMC_DEFSTRINGLIT(tmp2247,80,"Variable violating min constraint: 1.0 <= plugFlowPipe_heat.res.fac, has value: ");
  modelica_string tmp2248;
  modelica_metatype tmpMeta2249;
  static int tmp2250 = 0;
  if(!tmp2250)
  {
    tmp2246 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[596]] /* plugFlowPipe_heat.res.fac PARAM */),1.0);
    if(!tmp2246)
    {
      tmp2248 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[596]] /* plugFlowPipe_heat.res.fac PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta2249 = stringAppend(MMC_REFSTRINGLIT(tmp2247),tmp2248);
      {
        const char* assert_cond = "(plugFlowPipe_heat.res.fac >= 1.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"E:/Daniel/sgi digital twin/Modelica/IDEAS-master/IDEAS/Fluid/FixedResistances/HydraulicDiameter.mo",25,3,26,98,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2249));
        } else {
          FILE_INFO info = {"E:/Daniel/sgi digital twin/Modelica/IDEAS-master/IDEAS/Fluid/FixedResistances/HydraulicDiameter.mo",25,3,26,98,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2249));
        }
      }
      tmp2250 = 1;
    }
  }
  threadData->lastEquationSolved = 2899;
}

/*
equation index: 2900
type: ALGORITHM

  assert(plugFlowPipe_heat.res.roughness >= 0.0, "Variable violating min constraint: 0.0 <= plugFlowPipe_heat.res.roughness, has value: " + String(plugFlowPipe_heat.res.roughness, "g"));
*/
OMC_DISABLE_OPT
static void pump_v3_basicCold_t_eqFunction_2900(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2900};
  modelica_boolean tmp2251;
  static const MMC_DEFSTRINGLIT(tmp2252,86,"Variable violating min constraint: 0.0 <= plugFlowPipe_heat.res.roughness, has value: ");
  modelica_string tmp2253;
  modelica_metatype tmpMeta2254;
  static int tmp2255 = 0;
  if(!tmp2255)
  {
    tmp2251 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[605]] /* plugFlowPipe_heat.res.roughness PARAM */),0.0);
    if(!tmp2251)
    {
      tmp2253 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[605]] /* plugFlowPipe_heat.res.roughness PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta2254 = stringAppend(MMC_REFSTRINGLIT(tmp2252),tmp2253);
      {
        const char* assert_cond = "(plugFlowPipe_heat.res.roughness >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"E:/Daniel/sgi digital twin/Modelica/IDEAS-master/IDEAS/Fluid/FixedResistances/HydraulicDiameter.mo",22,3,23,106,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2254));
        } else {
          FILE_INFO info = {"E:/Daniel/sgi digital twin/Modelica/IDEAS-master/IDEAS/Fluid/FixedResistances/HydraulicDiameter.mo",22,3,23,106,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2254));
        }
      }
      tmp2255 = 1;
    }
  }
  threadData->lastEquationSolved = 2900;
}

/*
equation index: 2901
type: ALGORITHM

  assert(plugFlowPipe_heat.res.ReC >= 0.0, "Variable violating min constraint: 0.0 <= plugFlowPipe_heat.res.ReC, has value: " + String(plugFlowPipe_heat.res.ReC, "g"));
*/
OMC_DISABLE_OPT
static void pump_v3_basicCold_t_eqFunction_2901(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2901};
  modelica_boolean tmp2256;
  static const MMC_DEFSTRINGLIT(tmp2257,80,"Variable violating min constraint: 0.0 <= plugFlowPipe_heat.res.ReC, has value: ");
  modelica_string tmp2258;
  modelica_metatype tmpMeta2259;
  static int tmp2260 = 0;
  if(!tmp2260)
  {
    tmp2256 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[586]] /* plugFlowPipe_heat.res.ReC PARAM */),0.0);
    if(!tmp2256)
    {
      tmp2258 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[586]] /* plugFlowPipe_heat.res.ReC PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta2259 = stringAppend(MMC_REFSTRINGLIT(tmp2257),tmp2258);
      {
        const char* assert_cond = "(plugFlowPipe_heat.res.ReC >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"E:/Daniel/sgi digital twin/Modelica/IDEAS-master/IDEAS/Fluid/FixedResistances/HydraulicDiameter.mo",14,3,15,60,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2259));
        } else {
          FILE_INFO info = {"E:/Daniel/sgi digital twin/Modelica/IDEAS-master/IDEAS/Fluid/FixedResistances/HydraulicDiameter.mo",14,3,15,60,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2259));
        }
      }
      tmp2260 = 1;
    }
  }
  threadData->lastEquationSolved = 2901;
}

/*
equation index: 2902
type: ALGORITHM

  assert(plugFlowPipe_heat.res.deltaM >= 1e-6, "Variable violating min constraint: 1e-6 <= plugFlowPipe_heat.res.deltaM, has value: " + String(plugFlowPipe_heat.res.deltaM, "g"));
*/
OMC_DISABLE_OPT
static void pump_v3_basicCold_t_eqFunction_2902(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2902};
  modelica_boolean tmp2261;
  static const MMC_DEFSTRINGLIT(tmp2262,84,"Variable violating min constraint: 1e-6 <= plugFlowPipe_heat.res.deltaM, has value: ");
  modelica_string tmp2263;
  modelica_metatype tmpMeta2264;
  static int tmp2265 = 0;
  if(!tmp2265)
  {
    tmp2261 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[590]] /* plugFlowPipe_heat.res.deltaM PARAM */),1e-6);
    if(!tmp2261)
    {
      tmp2263 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[590]] /* plugFlowPipe_heat.res.deltaM PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta2264 = stringAppend(MMC_REFSTRINGLIT(tmp2262),tmp2263);
      {
        const char* assert_cond = "(plugFlowPipe_heat.res.deltaM >= 1e-6)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"E:/Daniel/sgi digital twin/Modelica/IDEAS-master/IDEAS/Fluid/FixedResistances/PressureDrop.mo",7,3,11,51,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2264));
        } else {
          FILE_INFO info = {"E:/Daniel/sgi digital twin/Modelica/IDEAS-master/IDEAS/Fluid/FixedResistances/PressureDrop.mo",7,3,11,51,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2264));
        }
      }
      tmp2265 = 1;
    }
  }
  threadData->lastEquationSolved = 2902;
}

/*
equation index: 2903
type: ALGORITHM

  assert(plugFlowPipe_heat.res.eta_default >= 0.0, "Variable violating min constraint: 0.0 <= plugFlowPipe_heat.res.eta_default, has value: " + String(plugFlowPipe_heat.res.eta_default, "g"));
*/
OMC_DISABLE_OPT
static void pump_v3_basicCold_t_eqFunction_2903(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2903};
  modelica_boolean tmp2266;
  static const MMC_DEFSTRINGLIT(tmp2267,88,"Variable violating min constraint: 0.0 <= plugFlowPipe_heat.res.eta_default, has value: ");
  modelica_string tmp2268;
  modelica_metatype tmpMeta2269;
  static int tmp2270 = 0;
  if(!tmp2270)
  {
    tmp2266 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[595]] /* plugFlowPipe_heat.res.eta_default PARAM */),0.0);
    if(!tmp2266)
    {
      tmp2268 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[595]] /* plugFlowPipe_heat.res.eta_default PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta2269 = stringAppend(MMC_REFSTRINGLIT(tmp2267),tmp2268);
      {
        const char* assert_cond = "(plugFlowPipe_heat.res.eta_default >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"E:/Daniel/sgi digital twin/Modelica/IDEAS-master/IDEAS/Fluid/BaseClasses/PartialResistance.mo",33,3,35,77,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2269));
        } else {
          FILE_INFO info = {"E:/Daniel/sgi digital twin/Modelica/IDEAS-master/IDEAS/Fluid/BaseClasses/PartialResistance.mo",33,3,35,77,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2269));
        }
      }
      tmp2270 = 1;
    }
  }
  threadData->lastEquationSolved = 2903;
}

/*
equation index: 2904
type: ALGORITHM

  assert(plugFlowPipe_heat.res.sta_default.T >= 1.0 and plugFlowPipe_heat.res.sta_default.T <= 1e4, "Variable violating min/max constraint: 1.0 <= plugFlowPipe_heat.res.sta_default.T <= 1e4, has value: " + String(plugFlowPipe_heat.res.sta_default.T, "g"));
*/
OMC_DISABLE_OPT
static void pump_v3_basicCold_t_eqFunction_2904(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2904};
  modelica_boolean tmp2271;
  modelica_boolean tmp2272;
  static const MMC_DEFSTRINGLIT(tmp2273,101,"Variable violating min/max constraint: 1.0 <= plugFlowPipe_heat.res.sta_default.T <= 1e4, has value: ");
  modelica_string tmp2274;
  modelica_metatype tmpMeta2275;
  static int tmp2276 = 0;
  if(!tmp2276)
  {
    tmp2271 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[606]] /* plugFlowPipe_heat.res.sta_default.T PARAM */),1.0);
    tmp2272 = LessEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[606]] /* plugFlowPipe_heat.res.sta_default.T PARAM */),1e4);
    if(!(tmp2271 && tmp2272))
    {
      tmp2274 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[606]] /* plugFlowPipe_heat.res.sta_default.T PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta2275 = stringAppend(MMC_REFSTRINGLIT(tmp2273),tmp2274);
      {
        const char* assert_cond = "(plugFlowPipe_heat.res.sta_default.T >= 1.0 and plugFlowPipe_heat.res.sta_default.T <= 1e4)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/Daniel/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Media/package.mo",5870,7,5870,44,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2275));
        } else {
          FILE_INFO info = {"C:/Users/Daniel/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Media/package.mo",5870,7,5870,44,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2275));
        }
      }
      tmp2276 = 1;
    }
  }
  threadData->lastEquationSolved = 2904;
}

/*
equation index: 2905
type: ALGORITHM

  assert(plugFlowPipe_heat.res.sta_default.p >= 0.0 and plugFlowPipe_heat.res.sta_default.p <= 1e8, "Variable violating min/max constraint: 0.0 <= plugFlowPipe_heat.res.sta_default.p <= 1e8, has value: " + String(plugFlowPipe_heat.res.sta_default.p, "g"));
*/
OMC_DISABLE_OPT
static void pump_v3_basicCold_t_eqFunction_2905(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2905};
  modelica_boolean tmp2277;
  modelica_boolean tmp2278;
  static const MMC_DEFSTRINGLIT(tmp2279,101,"Variable violating min/max constraint: 0.0 <= plugFlowPipe_heat.res.sta_default.p <= 1e8, has value: ");
  modelica_string tmp2280;
  modelica_metatype tmpMeta2281;
  static int tmp2282 = 0;
  if(!tmp2282)
  {
    tmp2277 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[607]] /* plugFlowPipe_heat.res.sta_default.p PARAM */),0.0);
    tmp2278 = LessEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[607]] /* plugFlowPipe_heat.res.sta_default.p PARAM */),1e8);
    if(!(tmp2277 && tmp2278))
    {
      tmp2280 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[607]] /* plugFlowPipe_heat.res.sta_default.p PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta2281 = stringAppend(MMC_REFSTRINGLIT(tmp2279),tmp2280);
      {
        const char* assert_cond = "(plugFlowPipe_heat.res.sta_default.p >= 0.0 and plugFlowPipe_heat.res.sta_default.p <= 1e8)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/Daniel/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Media/package.mo",5869,7,5869,55,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2281));
        } else {
          FILE_INFO info = {"C:/Users/Daniel/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Media/package.mo",5869,7,5869,55,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2281));
        }
      }
      tmp2282 = 1;
    }
  }
  threadData->lastEquationSolved = 2905;
}

/*
equation index: 2906
type: ALGORITHM

  assert(plugFlowPipe_heat.res.m_flow_turbulent >= 0.0, "Variable violating min constraint: 0.0 <= plugFlowPipe_heat.res.m_flow_turbulent, has value: " + String(plugFlowPipe_heat.res.m_flow_turbulent, "g"));
*/
OMC_DISABLE_OPT
static void pump_v3_basicCold_t_eqFunction_2906(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2906};
  modelica_boolean tmp2283;
  static const MMC_DEFSTRINGLIT(tmp2284,93,"Variable violating min constraint: 0.0 <= plugFlowPipe_heat.res.m_flow_turbulent, has value: ");
  modelica_string tmp2285;
  modelica_metatype tmpMeta2286;
  static int tmp2287 = 0;
  if(!tmp2287)
  {
    tmp2283 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[602]] /* plugFlowPipe_heat.res.m_flow_turbulent PARAM */),0.0);
    if(!tmp2283)
    {
      tmp2285 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[602]] /* plugFlowPipe_heat.res.m_flow_turbulent PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta2286 = stringAppend(MMC_REFSTRINGLIT(tmp2284),tmp2285);
      {
        const char* assert_cond = "(plugFlowPipe_heat.res.m_flow_turbulent >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"E:/Daniel/sgi digital twin/Modelica/IDEAS-master/IDEAS/Fluid/BaseClasses/PartialResistance.mo",27,3,28,53,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2286));
        } else {
          FILE_INFO info = {"E:/Daniel/sgi digital twin/Modelica/IDEAS-master/IDEAS/Fluid/BaseClasses/PartialResistance.mo",27,3,28,53,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2286));
        }
      }
      tmp2287 = 1;
    }
  }
  threadData->lastEquationSolved = 2906;
}

/*
equation index: 2907
type: ALGORITHM

  assert(plugFlowPipe_heat.res.m_flow_small >= 0.0, "Variable violating min constraint: 0.0 <= plugFlowPipe_heat.res.m_flow_small, has value: " + String(plugFlowPipe_heat.res.m_flow_small, "g"));
*/
OMC_DISABLE_OPT
static void pump_v3_basicCold_t_eqFunction_2907(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2907};
  modelica_boolean tmp2288;
  static const MMC_DEFSTRINGLIT(tmp2289,89,"Variable violating min constraint: 0.0 <= plugFlowPipe_heat.res.m_flow_small, has value: ");
  modelica_string tmp2290;
  modelica_metatype tmpMeta2291;
  static int tmp2292 = 0;
  if(!tmp2292)
  {
    tmp2288 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[601]] /* plugFlowPipe_heat.res.m_flow_small PARAM */),0.0);
    if(!tmp2288)
    {
      tmp2290 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[601]] /* plugFlowPipe_heat.res.m_flow_small PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta2291 = stringAppend(MMC_REFSTRINGLIT(tmp2289),tmp2290);
      {
        const char* assert_cond = "(plugFlowPipe_heat.res.m_flow_small >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"E:/Daniel/sgi digital twin/Modelica/IDEAS-master/IDEAS/Fluid/Interfaces/PartialTwoPortInterface.mo",10,3,12,40,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2291));
        } else {
          FILE_INFO info = {"E:/Daniel/sgi digital twin/Modelica/IDEAS-master/IDEAS/Fluid/Interfaces/PartialTwoPortInterface.mo",10,3,12,40,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2291));
        }
      }
      tmp2292 = 1;
    }
  }
  threadData->lastEquationSolved = 2907;
}

/*
equation index: 2908
type: ALGORITHM

  assert(plugFlowPipe_heat.roughness >= 0.0, "Variable violating min constraint: 0.0 <= plugFlowPipe_heat.roughness, has value: " + String(plugFlowPipe_heat.roughness, "g"));
*/
OMC_DISABLE_OPT
static void pump_v3_basicCold_t_eqFunction_2908(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2908};
  modelica_boolean tmp2293;
  static const MMC_DEFSTRINGLIT(tmp2294,82,"Variable violating min constraint: 0.0 <= plugFlowPipe_heat.roughness, has value: ");
  modelica_string tmp2295;
  modelica_metatype tmpMeta2296;
  static int tmp2297 = 0;
  if(!tmp2297)
  {
    tmp2293 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[613]] /* plugFlowPipe_heat.roughness PARAM */),0.0);
    if(!tmp2293)
    {
      tmp2295 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[613]] /* plugFlowPipe_heat.roughness PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta2296 = stringAppend(MMC_REFSTRINGLIT(tmp2294),tmp2295);
      {
        const char* assert_cond = "(plugFlowPipe_heat.roughness >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"E:/Daniel/sgi digital twin/Modelica/IDEAS-master/IDEAS/Fluid/FixedResistances/BaseClasses/PlugFlowPipe.mo",35,3,37,42,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2296));
        } else {
          FILE_INFO info = {"E:/Daniel/sgi digital twin/Modelica/IDEAS-master/IDEAS/Fluid/FixedResistances/BaseClasses/PlugFlowPipe.mo",35,3,37,42,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2296));
        }
      }
      tmp2297 = 1;
    }
  }
  threadData->lastEquationSolved = 2908;
}

/*
equation index: 2909
type: ALGORITHM

  assert(senTemIn_heat.tauHeaTra >= 1.0, "Variable violating min constraint: 1.0 <= senTemIn_heat.tauHeaTra, has value: " + String(senTemIn_heat.tauHeaTra, "g"));
*/
OMC_DISABLE_OPT
static void pump_v3_basicCold_t_eqFunction_2909(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2909};
  modelica_boolean tmp2298;
  static const MMC_DEFSTRINGLIT(tmp2299,78,"Variable violating min constraint: 1.0 <= senTemIn_heat.tauHeaTra, has value: ");
  modelica_string tmp2300;
  modelica_metatype tmpMeta2301;
  static int tmp2302 = 0;
  if(!tmp2302)
  {
    tmp2298 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[962]] /* senTemIn_heat.tauHeaTra PARAM */),1.0);
    if(!tmp2298)
    {
      tmp2300 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[962]] /* senTemIn_heat.tauHeaTra PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta2301 = stringAppend(MMC_REFSTRINGLIT(tmp2299),tmp2300);
      {
        const char* assert_cond = "(senTemIn_heat.tauHeaTra >= 1.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"E:/Daniel/sgi digital twin/Modelica/IDEAS-master/IDEAS/Fluid/Sensors/TemperatureTwoPort.mo",24,3,26,68,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2301));
        } else {
          FILE_INFO info = {"E:/Daniel/sgi digital twin/Modelica/IDEAS-master/IDEAS/Fluid/Sensors/TemperatureTwoPort.mo",24,3,26,68,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2301));
        }
      }
      tmp2302 = 1;
    }
  }
  threadData->lastEquationSolved = 2909;
}

/*
equation index: 2910
type: ALGORITHM

  assert(senTemIn_heat.TAmb >= 0.0, "Variable violating min constraint: 0.0 <= senTemIn_heat.TAmb, has value: " + String(senTemIn_heat.TAmb, "g"));
*/
OMC_DISABLE_OPT
static void pump_v3_basicCold_t_eqFunction_2910(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2910};
  modelica_boolean tmp2303;
  static const MMC_DEFSTRINGLIT(tmp2304,73,"Variable violating min constraint: 0.0 <= senTemIn_heat.TAmb, has value: ");
  modelica_string tmp2305;
  modelica_metatype tmpMeta2306;
  static int tmp2307 = 0;
  if(!tmp2307)
  {
    tmp2303 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[956]] /* senTemIn_heat.TAmb PARAM */),0.0);
    if(!tmp2303)
    {
      tmp2305 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[956]] /* senTemIn_heat.TAmb PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta2306 = stringAppend(MMC_REFSTRINGLIT(tmp2304),tmp2305);
      {
        const char* assert_cond = "(senTemIn_heat.TAmb >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"E:/Daniel/sgi digital twin/Modelica/IDEAS-master/IDEAS/Fluid/Sensors/TemperatureTwoPort.mo",21,3,23,68,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2306));
        } else {
          FILE_INFO info = {"E:/Daniel/sgi digital twin/Modelica/IDEAS-master/IDEAS/Fluid/Sensors/TemperatureTwoPort.mo",21,3,23,68,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2306));
        }
      }
      tmp2307 = 1;
    }
  }
  threadData->lastEquationSolved = 2910;
}

/*
equation index: 2911
type: ALGORITHM

  assert(senTemIn_heat.T_start >= 0.0, "Variable violating min constraint: 0.0 <= senTemIn_heat.T_start, has value: " + String(senTemIn_heat.T_start, "g"));
*/
OMC_DISABLE_OPT
static void pump_v3_basicCold_t_eqFunction_2911(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2911};
  modelica_boolean tmp2308;
  static const MMC_DEFSTRINGLIT(tmp2309,76,"Variable violating min constraint: 0.0 <= senTemIn_heat.T_start, has value: ");
  modelica_string tmp2310;
  modelica_metatype tmpMeta2311;
  static int tmp2312 = 0;
  if(!tmp2312)
  {
    tmp2308 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[957]] /* senTemIn_heat.T_start PARAM */),0.0);
    if(!tmp2308)
    {
      tmp2310 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[957]] /* senTemIn_heat.T_start PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta2311 = stringAppend(MMC_REFSTRINGLIT(tmp2309),tmp2310);
      {
        const char* assert_cond = "(senTemIn_heat.T_start >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"E:/Daniel/sgi digital twin/Modelica/IDEAS-master/IDEAS/Fluid/Sensors/TemperatureTwoPort.mo",14,3,16,48,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2311));
        } else {
          FILE_INFO info = {"E:/Daniel/sgi digital twin/Modelica/IDEAS-master/IDEAS/Fluid/Sensors/TemperatureTwoPort.mo",14,3,16,48,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2311));
        }
      }
      tmp2312 = 1;
    }
  }
  threadData->lastEquationSolved = 2911;
}

/*
equation index: 2912
type: ALGORITHM

  assert(senTemIn_heat.initType >= Modelica.Blocks.Types.Init.NoInit and senTemIn_heat.initType <= Modelica.Blocks.Types.Init.InitialOutput, "Variable violating min/max constraint: Modelica.Blocks.Types.Init.NoInit <= senTemIn_heat.initType <= Modelica.Blocks.Types.Init.InitialOutput, has value: " + String(senTemIn_heat.initType, "d"));
*/
OMC_DISABLE_OPT
static void pump_v3_basicCold_t_eqFunction_2912(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2912};
  modelica_boolean tmp2313;
  modelica_boolean tmp2314;
  static const MMC_DEFSTRINGLIT(tmp2315,155,"Variable violating min/max constraint: Modelica.Blocks.Types.Init.NoInit <= senTemIn_heat.initType <= Modelica.Blocks.Types.Init.InitialOutput, has value: ");
  modelica_string tmp2316;
  modelica_metatype tmpMeta2317;
  static int tmp2318 = 0;
  if(!tmp2318)
  {
    tmp2313 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[114]] /* senTemIn_heat.initType PARAM */),1);
    tmp2314 = LessEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[114]] /* senTemIn_heat.initType PARAM */),4);
    if(!(tmp2313 && tmp2314))
    {
      tmp2316 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[114]] /* senTemIn_heat.initType PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta2317 = stringAppend(MMC_REFSTRINGLIT(tmp2315),tmp2316);
      {
        const char* assert_cond = "(senTemIn_heat.initType >= Modelica.Blocks.Types.Init.NoInit and senTemIn_heat.initType <= Modelica.Blocks.Types.Init.InitialOutput)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"E:/Daniel/sgi digital twin/Modelica/IDEAS-master/IDEAS/Fluid/Sensors/BaseClasses/PartialDynamicFlowSensor.mo",8,3,10,60,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2317));
        } else {
          FILE_INFO info = {"E:/Daniel/sgi digital twin/Modelica/IDEAS-master/IDEAS/Fluid/Sensors/BaseClasses/PartialDynamicFlowSensor.mo",8,3,10,60,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2317));
        }
      }
      tmp2318 = 1;
    }
  }
  threadData->lastEquationSolved = 2912;
}

/*
equation index: 2913
type: ALGORITHM

  assert(senTemIn_heat.tau >= 0.0, "Variable violating min constraint: 0.0 <= senTemIn_heat.tau, has value: " + String(senTemIn_heat.tau, "g"));
*/
OMC_DISABLE_OPT
static void pump_v3_basicCold_t_eqFunction_2913(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2913};
  modelica_boolean tmp2319;
  static const MMC_DEFSTRINGLIT(tmp2320,72,"Variable violating min constraint: 0.0 <= senTemIn_heat.tau, has value: ");
  modelica_string tmp2321;
  modelica_metatype tmpMeta2322;
  static int tmp2323 = 0;
  if(!tmp2323)
  {
    tmp2319 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[961]] /* senTemIn_heat.tau PARAM */),0.0);
    if(!tmp2319)
    {
      tmp2321 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[961]] /* senTemIn_heat.tau PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta2322 = stringAppend(MMC_REFSTRINGLIT(tmp2320),tmp2321);
      {
        const char* assert_cond = "(senTemIn_heat.tau >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"E:/Daniel/sgi digital twin/Modelica/IDEAS-master/IDEAS/Fluid/Sensors/BaseClasses/PartialDynamicFlowSensor.mo",6,3,7,120,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2322));
        } else {
          FILE_INFO info = {"E:/Daniel/sgi digital twin/Modelica/IDEAS-master/IDEAS/Fluid/Sensors/BaseClasses/PartialDynamicFlowSensor.mo",6,3,7,120,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2322));
        }
      }
      tmp2323 = 1;
    }
  }
  threadData->lastEquationSolved = 2913;
}

/*
equation index: 2914
type: ALGORITHM

  assert(senTemIn_heat.m_flow_small >= 0.0, "Variable violating min constraint: 0.0 <= senTemIn_heat.m_flow_small, has value: " + String(senTemIn_heat.m_flow_small, "g"));
*/
OMC_DISABLE_OPT
static void pump_v3_basicCold_t_eqFunction_2914(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2914};
  modelica_boolean tmp2324;
  static const MMC_DEFSTRINGLIT(tmp2325,81,"Variable violating min constraint: 0.0 <= senTemIn_heat.m_flow_small, has value: ");
  modelica_string tmp2326;
  modelica_metatype tmpMeta2327;
  static int tmp2328 = 0;
  if(!tmp2328)
  {
    tmp2324 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[959]] /* senTemIn_heat.m_flow_small PARAM */),0.0);
    if(!tmp2324)
    {
      tmp2326 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[959]] /* senTemIn_heat.m_flow_small PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta2327 = stringAppend(MMC_REFSTRINGLIT(tmp2325),tmp2326);
      {
        const char* assert_cond = "(senTemIn_heat.m_flow_small >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"E:/Daniel/sgi digital twin/Modelica/IDEAS-master/IDEAS/Fluid/Sensors/BaseClasses/PartialFlowSensor.mo",8,3,11,40,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2327));
        } else {
          FILE_INFO info = {"E:/Daniel/sgi digital twin/Modelica/IDEAS-master/IDEAS/Fluid/Sensors/BaseClasses/PartialFlowSensor.mo",8,3,11,40,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2327));
        }
      }
      tmp2328 = 1;
    }
  }
  threadData->lastEquationSolved = 2914;
}

/*
equation index: 2915
type: ALGORITHM

  assert(senTemIn_heat.m_flow_nominal >= 0.0, "Variable violating min constraint: 0.0 <= senTemIn_heat.m_flow_nominal, has value: " + String(senTemIn_heat.m_flow_nominal, "g"));
*/
OMC_DISABLE_OPT
static void pump_v3_basicCold_t_eqFunction_2915(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2915};
  modelica_boolean tmp2329;
  static const MMC_DEFSTRINGLIT(tmp2330,83,"Variable violating min constraint: 0.0 <= senTemIn_heat.m_flow_nominal, has value: ");
  modelica_string tmp2331;
  modelica_metatype tmpMeta2332;
  static int tmp2333 = 0;
  if(!tmp2333)
  {
    tmp2329 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[958]] /* senTemIn_heat.m_flow_nominal PARAM */),0.0);
    if(!tmp2329)
    {
      tmp2331 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[958]] /* senTemIn_heat.m_flow_nominal PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta2332 = stringAppend(MMC_REFSTRINGLIT(tmp2330),tmp2331);
      {
        const char* assert_cond = "(senTemIn_heat.m_flow_nominal >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"E:/Daniel/sgi digital twin/Modelica/IDEAS-master/IDEAS/Fluid/Sensors/BaseClasses/PartialFlowSensor.mo",5,3,7,51,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2332));
        } else {
          FILE_INFO info = {"E:/Daniel/sgi digital twin/Modelica/IDEAS-master/IDEAS/Fluid/Sensors/BaseClasses/PartialFlowSensor.mo",5,3,7,51,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2332));
        }
      }
      tmp2333 = 1;
    }
  }
  threadData->lastEquationSolved = 2915;
}

/*
equation index: 2916
type: ALGORITHM

  assert(plugFlowPipe1.T_start_out >= 0.0, "Variable violating min constraint: 0.0 <= plugFlowPipe1.T_start_out, has value: " + String(plugFlowPipe1.T_start_out, "g"));
*/
OMC_DISABLE_OPT
static void pump_v3_basicCold_t_eqFunction_2916(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2916};
  modelica_boolean tmp2334;
  static const MMC_DEFSTRINGLIT(tmp2335,80,"Variable violating min constraint: 0.0 <= plugFlowPipe1.T_start_out, has value: ");
  modelica_string tmp2336;
  modelica_metatype tmpMeta2337;
  static int tmp2338 = 0;
  if(!tmp2338)
  {
    tmp2334 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[242]] /* plugFlowPipe1.T_start_out PARAM */),0.0);
    if(!tmp2334)
    {
      tmp2336 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[242]] /* plugFlowPipe1.T_start_out PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta2337 = stringAppend(MMC_REFSTRINGLIT(tmp2335),tmp2336);
      {
        const char* assert_cond = "(plugFlowPipe1.T_start_out >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"E:/Daniel/sgi digital twin/Modelica/IDEAS-master/IDEAS/Fluid/FixedResistances/BaseClasses/PlugFlowPipe.mo",64,3,66,46,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2337));
        } else {
          FILE_INFO info = {"E:/Daniel/sgi digital twin/Modelica/IDEAS-master/IDEAS/Fluid/FixedResistances/BaseClasses/PlugFlowPipe.mo",64,3,66,46,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2337));
        }
      }
      tmp2338 = 1;
    }
  }
  threadData->lastEquationSolved = 2916;
}

/*
equation index: 2917
type: ALGORITHM

  assert(plugFlowPipe1.vol_a.T_start >= 1.0 and plugFlowPipe1.vol_a.T_start <= 1e4, "Variable violating min/max constraint: 1.0 <= plugFlowPipe1.vol_a.T_start <= 1e4, has value: " + String(plugFlowPipe1.vol_a.T_start, "g"));
*/
OMC_DISABLE_OPT
static void pump_v3_basicCold_t_eqFunction_2917(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2917};
  modelica_boolean tmp2339;
  modelica_boolean tmp2340;
  static const MMC_DEFSTRINGLIT(tmp2341,93,"Variable violating min/max constraint: 1.0 <= plugFlowPipe1.vol_a.T_start <= 1e4, has value: ");
  modelica_string tmp2342;
  modelica_metatype tmpMeta2343;
  static int tmp2344 = 0;
  if(!tmp2344)
  {
    tmp2339 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[330]] /* plugFlowPipe1.vol_a.T_start PARAM */),1.0);
    tmp2340 = LessEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[330]] /* plugFlowPipe1.vol_a.T_start PARAM */),1e4);
    if(!(tmp2339 && tmp2340))
    {
      tmp2342 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[330]] /* plugFlowPipe1.vol_a.T_start PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta2343 = stringAppend(MMC_REFSTRINGLIT(tmp2341),tmp2342);
      {
        const char* assert_cond = "(plugFlowPipe1.vol_a.T_start >= 1.0 and plugFlowPipe1.vol_a.T_start <= 1e4)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"E:/Daniel/sgi digital twin/Modelica/IDEAS-master/IDEAS/Fluid/Interfaces/LumpedVolumeDeclarations.mo",32,3,34,47,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2343));
        } else {
          FILE_INFO info = {"E:/Daniel/sgi digital twin/Modelica/IDEAS-master/IDEAS/Fluid/Interfaces/LumpedVolumeDeclarations.mo",32,3,34,47,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2343));
        }
      }
      tmp2344 = 1;
    }
  }
  threadData->lastEquationSolved = 2917;
}

/*
equation index: 2918
type: ALGORITHM

  assert(plugFlowPipe1.vol_a.state_start.T >= 1.0 and plugFlowPipe1.vol_a.state_start.T <= 1e4, "Variable violating min/max constraint: 1.0 <= plugFlowPipe1.vol_a.state_start.T <= 1e4, has value: " + String(plugFlowPipe1.vol_a.state_start.T, "g"));
*/
OMC_DISABLE_OPT
static void pump_v3_basicCold_t_eqFunction_2918(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2918};
  modelica_boolean tmp2345;
  modelica_boolean tmp2346;
  static const MMC_DEFSTRINGLIT(tmp2347,99,"Variable violating min/max constraint: 1.0 <= plugFlowPipe1.vol_a.state_start.T <= 1e4, has value: ");
  modelica_string tmp2348;
  modelica_metatype tmpMeta2349;
  static int tmp2350 = 0;
  if(!tmp2350)
  {
    tmp2345 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[353]] /* plugFlowPipe1.vol_a.state_start.T PARAM */),1.0);
    tmp2346 = LessEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[353]] /* plugFlowPipe1.vol_a.state_start.T PARAM */),1e4);
    if(!(tmp2345 && tmp2346))
    {
      tmp2348 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[353]] /* plugFlowPipe1.vol_a.state_start.T PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta2349 = stringAppend(MMC_REFSTRINGLIT(tmp2347),tmp2348);
      {
        const char* assert_cond = "(plugFlowPipe1.vol_a.state_start.T >= 1.0 and plugFlowPipe1.vol_a.state_start.T <= 1e4)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/Daniel/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Media/package.mo",5870,7,5870,44,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2349));
        } else {
          FILE_INFO info = {"C:/Users/Daniel/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Media/package.mo",5870,7,5870,44,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2349));
        }
      }
      tmp2350 = 1;
    }
  }
  threadData->lastEquationSolved = 2918;
}

/*
equation index: 2919
type: ALGORITHM

  assert(plugFlowPipe1.vol_a.p_start >= 0.0 and plugFlowPipe1.vol_a.p_start <= 1e8, "Variable violating min/max constraint: 0.0 <= plugFlowPipe1.vol_a.p_start <= 1e8, has value: " + String(plugFlowPipe1.vol_a.p_start, "g"));
*/
OMC_DISABLE_OPT
static void pump_v3_basicCold_t_eqFunction_2919(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2919};
  modelica_boolean tmp2351;
  modelica_boolean tmp2352;
  static const MMC_DEFSTRINGLIT(tmp2353,93,"Variable violating min/max constraint: 0.0 <= plugFlowPipe1.vol_a.p_start <= 1e8, has value: ");
  modelica_string tmp2354;
  modelica_metatype tmpMeta2355;
  static int tmp2356 = 0;
  if(!tmp2356)
  {
    tmp2351 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[348]] /* plugFlowPipe1.vol_a.p_start PARAM */),0.0);
    tmp2352 = LessEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[348]] /* plugFlowPipe1.vol_a.p_start PARAM */),1e8);
    if(!(tmp2351 && tmp2352))
    {
      tmp2354 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[348]] /* plugFlowPipe1.vol_a.p_start PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta2355 = stringAppend(MMC_REFSTRINGLIT(tmp2353),tmp2354);
      {
        const char* assert_cond = "(plugFlowPipe1.vol_a.p_start >= 0.0 and plugFlowPipe1.vol_a.p_start <= 1e8)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"E:/Daniel/sgi digital twin/Modelica/IDEAS-master/IDEAS/Fluid/Interfaces/LumpedVolumeDeclarations.mo",29,3,31,47,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2355));
        } else {
          FILE_INFO info = {"E:/Daniel/sgi digital twin/Modelica/IDEAS-master/IDEAS/Fluid/Interfaces/LumpedVolumeDeclarations.mo",29,3,31,47,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2355));
        }
      }
      tmp2356 = 1;
    }
  }
  threadData->lastEquationSolved = 2919;
}

/*
equation index: 2920
type: ALGORITHM

  assert(plugFlowPipe1.vol_a.state_start.p >= 0.0 and plugFlowPipe1.vol_a.state_start.p <= 1e8, "Variable violating min/max constraint: 0.0 <= plugFlowPipe1.vol_a.state_start.p <= 1e8, has value: " + String(plugFlowPipe1.vol_a.state_start.p, "g"));
*/
OMC_DISABLE_OPT
static void pump_v3_basicCold_t_eqFunction_2920(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2920};
  modelica_boolean tmp2357;
  modelica_boolean tmp2358;
  static const MMC_DEFSTRINGLIT(tmp2359,99,"Variable violating min/max constraint: 0.0 <= plugFlowPipe1.vol_a.state_start.p <= 1e8, has value: ");
  modelica_string tmp2360;
  modelica_metatype tmpMeta2361;
  static int tmp2362 = 0;
  if(!tmp2362)
  {
    tmp2357 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[354]] /* plugFlowPipe1.vol_a.state_start.p PARAM */),0.0);
    tmp2358 = LessEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[354]] /* plugFlowPipe1.vol_a.state_start.p PARAM */),1e8);
    if(!(tmp2357 && tmp2358))
    {
      tmp2360 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[354]] /* plugFlowPipe1.vol_a.state_start.p PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta2361 = stringAppend(MMC_REFSTRINGLIT(tmp2359),tmp2360);
      {
        const char* assert_cond = "(plugFlowPipe1.vol_a.state_start.p >= 0.0 and plugFlowPipe1.vol_a.state_start.p <= 1e8)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/Daniel/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Media/package.mo",5869,7,5869,55,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2361));
        } else {
          FILE_INFO info = {"C:/Users/Daniel/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Media/package.mo",5869,7,5869,55,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2361));
        }
      }
      tmp2362 = 1;
    }
  }
  threadData->lastEquationSolved = 2920;
}

/*
equation index: 2921
type: ALGORITHM

  assert(plugFlowPipe1.vol_a.rho_default >= 0.0, "Variable violating min constraint: 0.0 <= plugFlowPipe1.vol_a.rho_default, has value: " + String(plugFlowPipe1.vol_a.rho_default, "g"));
*/
OMC_DISABLE_OPT
static void pump_v3_basicCold_t_eqFunction_2921(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2921};
  modelica_boolean tmp2363;
  static const MMC_DEFSTRINGLIT(tmp2364,86,"Variable violating min constraint: 0.0 <= plugFlowPipe1.vol_a.rho_default, has value: ");
  modelica_string tmp2365;
  modelica_metatype tmpMeta2366;
  static int tmp2367 = 0;
  if(!tmp2367)
  {
    tmp2363 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[349]] /* plugFlowPipe1.vol_a.rho_default PARAM */),0.0);
    if(!tmp2363)
    {
      tmp2365 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[349]] /* plugFlowPipe1.vol_a.rho_default PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta2366 = stringAppend(MMC_REFSTRINGLIT(tmp2364),tmp2365);
      {
        const char* assert_cond = "(plugFlowPipe1.vol_a.rho_default >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"E:/Daniel/sgi digital twin/Modelica/IDEAS-master/IDEAS/Fluid/MixingVolumes/BaseClasses/PartialMixingVolume.mo",99,3,100,63,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2366));
        } else {
          FILE_INFO info = {"E:/Daniel/sgi digital twin/Modelica/IDEAS-master/IDEAS/Fluid/MixingVolumes/BaseClasses/PartialMixingVolume.mo",99,3,100,63,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2366));
        }
      }
      tmp2367 = 1;
    }
  }
  threadData->lastEquationSolved = 2921;
}

/*
equation index: 2922
type: ALGORITHM

  assert(plugFlowPipe1.vol_a.state_default.T >= 1.0 and plugFlowPipe1.vol_a.state_default.T <= 1e4, "Variable violating min/max constraint: 1.0 <= plugFlowPipe1.vol_a.state_default.T <= 1e4, has value: " + String(plugFlowPipe1.vol_a.state_default.T, "g"));
*/
OMC_DISABLE_OPT
static void pump_v3_basicCold_t_eqFunction_2922(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2922};
  modelica_boolean tmp2368;
  modelica_boolean tmp2369;
  static const MMC_DEFSTRINGLIT(tmp2370,101,"Variable violating min/max constraint: 1.0 <= plugFlowPipe1.vol_a.state_default.T <= 1e4, has value: ");
  modelica_string tmp2371;
  modelica_metatype tmpMeta2372;
  static int tmp2373 = 0;
  if(!tmp2373)
  {
    tmp2368 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[351]] /* plugFlowPipe1.vol_a.state_default.T PARAM */),1.0);
    tmp2369 = LessEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[351]] /* plugFlowPipe1.vol_a.state_default.T PARAM */),1e4);
    if(!(tmp2368 && tmp2369))
    {
      tmp2371 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[351]] /* plugFlowPipe1.vol_a.state_default.T PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta2372 = stringAppend(MMC_REFSTRINGLIT(tmp2370),tmp2371);
      {
        const char* assert_cond = "(plugFlowPipe1.vol_a.state_default.T >= 1.0 and plugFlowPipe1.vol_a.state_default.T <= 1e4)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/Daniel/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Media/package.mo",5870,7,5870,44,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2372));
        } else {
          FILE_INFO info = {"C:/Users/Daniel/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Media/package.mo",5870,7,5870,44,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2372));
        }
      }
      tmp2373 = 1;
    }
  }
  threadData->lastEquationSolved = 2922;
}

/*
equation index: 2923
type: ALGORITHM

  assert(plugFlowPipe1.vol_a.state_default.p >= 0.0 and plugFlowPipe1.vol_a.state_default.p <= 1e8, "Variable violating min/max constraint: 0.0 <= plugFlowPipe1.vol_a.state_default.p <= 1e8, has value: " + String(plugFlowPipe1.vol_a.state_default.p, "g"));
*/
OMC_DISABLE_OPT
static void pump_v3_basicCold_t_eqFunction_2923(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2923};
  modelica_boolean tmp2374;
  modelica_boolean tmp2375;
  static const MMC_DEFSTRINGLIT(tmp2376,101,"Variable violating min/max constraint: 0.0 <= plugFlowPipe1.vol_a.state_default.p <= 1e8, has value: ");
  modelica_string tmp2377;
  modelica_metatype tmpMeta2378;
  static int tmp2379 = 0;
  if(!tmp2379)
  {
    tmp2374 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[352]] /* plugFlowPipe1.vol_a.state_default.p PARAM */),0.0);
    tmp2375 = LessEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[352]] /* plugFlowPipe1.vol_a.state_default.p PARAM */),1e8);
    if(!(tmp2374 && tmp2375))
    {
      tmp2377 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[352]] /* plugFlowPipe1.vol_a.state_default.p PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta2378 = stringAppend(MMC_REFSTRINGLIT(tmp2376),tmp2377);
      {
        const char* assert_cond = "(plugFlowPipe1.vol_a.state_default.p >= 0.0 and plugFlowPipe1.vol_a.state_default.p <= 1e8)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/Daniel/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Media/package.mo",5869,7,5869,55,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2378));
        } else {
          FILE_INFO info = {"C:/Users/Daniel/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Media/package.mo",5869,7,5869,55,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2378));
        }
      }
      tmp2379 = 1;
    }
  }
  threadData->lastEquationSolved = 2923;
}

/*
equation index: 2924
type: ALGORITHM

  assert(plugFlowPipe1.vol_a.rho_start >= 0.0, "Variable violating min constraint: 0.0 <= plugFlowPipe1.vol_a.rho_start, has value: " + String(plugFlowPipe1.vol_a.rho_start, "g"));
*/
OMC_DISABLE_OPT
static void pump_v3_basicCold_t_eqFunction_2924(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2924};
  modelica_boolean tmp2380;
  static const MMC_DEFSTRINGLIT(tmp2381,84,"Variable violating min constraint: 0.0 <= plugFlowPipe1.vol_a.rho_start, has value: ");
  modelica_string tmp2382;
  modelica_metatype tmpMeta2383;
  static int tmp2384 = 0;
  if(!tmp2384)
  {
    tmp2380 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[350]] /* plugFlowPipe1.vol_a.rho_start PARAM */),0.0);
    if(!tmp2380)
    {
      tmp2382 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[350]] /* plugFlowPipe1.vol_a.rho_start PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta2383 = stringAppend(MMC_REFSTRINGLIT(tmp2381),tmp2382);
      {
        const char* assert_cond = "(plugFlowPipe1.vol_a.rho_start >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"E:/Daniel/sgi digital twin/Modelica/IDEAS-master/IDEAS/Fluid/MixingVolumes/BaseClasses/PartialMixingVolume.mo",92,3,93,73,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2383));
        } else {
          FILE_INFO info = {"E:/Daniel/sgi digital twin/Modelica/IDEAS-master/IDEAS/Fluid/MixingVolumes/BaseClasses/PartialMixingVolume.mo",92,3,93,73,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2383));
        }
      }
      tmp2384 = 1;
    }
  }
  threadData->lastEquationSolved = 2924;
}

/*
equation index: 2925
type: ALGORITHM

  assert(plugFlowPipe1.vol_a.dynBal.p_start >= 0.0 and plugFlowPipe1.vol_a.dynBal.p_start <= 1e8, "Variable violating min/max constraint: 0.0 <= plugFlowPipe1.vol_a.dynBal.p_start <= 1e8, has value: " + String(plugFlowPipe1.vol_a.dynBal.p_start, "g"));
*/
OMC_DISABLE_OPT
static void pump_v3_basicCold_t_eqFunction_2925(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2925};
  modelica_boolean tmp2385;
  modelica_boolean tmp2386;
  static const MMC_DEFSTRINGLIT(tmp2387,100,"Variable violating min/max constraint: 0.0 <= plugFlowPipe1.vol_a.dynBal.p_start <= 1e8, has value: ");
  modelica_string tmp2388;
  modelica_metatype tmpMeta2389;
  static int tmp2390 = 0;
  if(!tmp2390)
  {
    tmp2385 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[340]] /* plugFlowPipe1.vol_a.dynBal.p_start PARAM */),0.0);
    tmp2386 = LessEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[340]] /* plugFlowPipe1.vol_a.dynBal.p_start PARAM */),1e8);
    if(!(tmp2385 && tmp2386))
    {
      tmp2388 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[340]] /* plugFlowPipe1.vol_a.dynBal.p_start PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta2389 = stringAppend(MMC_REFSTRINGLIT(tmp2387),tmp2388);
      {
        const char* assert_cond = "(plugFlowPipe1.vol_a.dynBal.p_start >= 0.0 and plugFlowPipe1.vol_a.dynBal.p_start <= 1e8)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"E:/Daniel/sgi digital twin/Modelica/IDEAS-master/IDEAS/Fluid/Interfaces/LumpedVolumeDeclarations.mo",29,3,31,47,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2389));
        } else {
          FILE_INFO info = {"E:/Daniel/sgi digital twin/Modelica/IDEAS-master/IDEAS/Fluid/Interfaces/LumpedVolumeDeclarations.mo",29,3,31,47,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2389));
        }
      }
      tmp2390 = 1;
    }
  }
  threadData->lastEquationSolved = 2925;
}

/*
equation index: 2926
type: ALGORITHM

  assert(plugFlowPipe1.vol_a.dynBal.T_start >= 1.0 and plugFlowPipe1.vol_a.dynBal.T_start <= 1e4, "Variable violating min/max constraint: 1.0 <= plugFlowPipe1.vol_a.dynBal.T_start <= 1e4, has value: " + String(plugFlowPipe1.vol_a.dynBal.T_start, "g"));
*/
OMC_DISABLE_OPT
static void pump_v3_basicCold_t_eqFunction_2926(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2926};
  modelica_boolean tmp2391;
  modelica_boolean tmp2392;
  static const MMC_DEFSTRINGLIT(tmp2393,100,"Variable violating min/max constraint: 1.0 <= plugFlowPipe1.vol_a.dynBal.T_start <= 1e4, has value: ");
  modelica_string tmp2394;
  modelica_metatype tmpMeta2395;
  static int tmp2396 = 0;
  if(!tmp2396)
  {
    tmp2391 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[334]] /* plugFlowPipe1.vol_a.dynBal.T_start PARAM */),1.0);
    tmp2392 = LessEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[334]] /* plugFlowPipe1.vol_a.dynBal.T_start PARAM */),1e4);
    if(!(tmp2391 && tmp2392))
    {
      tmp2394 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[334]] /* plugFlowPipe1.vol_a.dynBal.T_start PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta2395 = stringAppend(MMC_REFSTRINGLIT(tmp2393),tmp2394);
      {
        const char* assert_cond = "(plugFlowPipe1.vol_a.dynBal.T_start >= 1.0 and plugFlowPipe1.vol_a.dynBal.T_start <= 1e4)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"E:/Daniel/sgi digital twin/Modelica/IDEAS-master/IDEAS/Fluid/Interfaces/LumpedVolumeDeclarations.mo",32,3,34,47,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2395));
        } else {
          FILE_INFO info = {"E:/Daniel/sgi digital twin/Modelica/IDEAS-master/IDEAS/Fluid/Interfaces/LumpedVolumeDeclarations.mo",32,3,34,47,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2395));
        }
      }
      tmp2396 = 1;
    }
  }
  threadData->lastEquationSolved = 2926;
}

/*
equation index: 2927
type: ALGORITHM

  assert(plugFlowPipe1.vol_a.X_start[1] >= 0.0 and plugFlowPipe1.vol_a.X_start[1] <= 1.0, "Variable violating min/max constraint: 0.0 <= plugFlowPipe1.vol_a.X_start[1] <= 1.0, has value: " + String(plugFlowPipe1.vol_a.X_start[1], "g"));
*/
OMC_DISABLE_OPT
static void pump_v3_basicCold_t_eqFunction_2927(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2927};
  modelica_boolean tmp2397;
  modelica_boolean tmp2398;
  static const MMC_DEFSTRINGLIT(tmp2399,96,"Variable violating min/max constraint: 0.0 <= plugFlowPipe1.vol_a.X_start[1] <= 1.0, has value: ");
  modelica_string tmp2400;
  modelica_metatype tmpMeta2401;
  static int tmp2402 = 0;
  if(!tmp2402)
  {
    tmp2397 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[332]] /* plugFlowPipe1.vol_a.X_start[1] PARAM */),0.0);
    tmp2398 = LessEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[332]] /* plugFlowPipe1.vol_a.X_start[1] PARAM */),1.0);
    if(!(tmp2397 && tmp2398))
    {
      tmp2400 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[332]] /* plugFlowPipe1.vol_a.X_start[1] PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta2401 = stringAppend(MMC_REFSTRINGLIT(tmp2399),tmp2400);
      {
        const char* assert_cond = "(plugFlowPipe1.vol_a.X_start[1] >= 0.0 and plugFlowPipe1.vol_a.X_start[1] <= 1.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"E:/Daniel/sgi digital twin/Modelica/IDEAS-master/IDEAS/Fluid/Interfaces/LumpedVolumeDeclarations.mo",35,3,38,69,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2401));
        } else {
          FILE_INFO info = {"E:/Daniel/sgi digital twin/Modelica/IDEAS-master/IDEAS/Fluid/Interfaces/LumpedVolumeDeclarations.mo",35,3,38,69,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2401));
        }
      }
      tmp2402 = 1;
    }
  }
  threadData->lastEquationSolved = 2927;
}

/*
equation index: 2928
type: ALGORITHM

  assert(plugFlowPipe1.vol_a.dynBal.X_start[1] >= 0.0 and plugFlowPipe1.vol_a.dynBal.X_start[1] <= 1.0, "Variable violating min/max constraint: 0.0 <= plugFlowPipe1.vol_a.dynBal.X_start[1] <= 1.0, has value: " + String(plugFlowPipe1.vol_a.dynBal.X_start[1], "g"));
*/
OMC_DISABLE_OPT
static void pump_v3_basicCold_t_eqFunction_2928(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2928};
  modelica_boolean tmp2403;
  modelica_boolean tmp2404;
  static const MMC_DEFSTRINGLIT(tmp2405,103,"Variable violating min/max constraint: 0.0 <= plugFlowPipe1.vol_a.dynBal.X_start[1] <= 1.0, has value: ");
  modelica_string tmp2406;
  modelica_metatype tmpMeta2407;
  static int tmp2408 = 0;
  if(!tmp2408)
  {
    tmp2403 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[335]] /* plugFlowPipe1.vol_a.dynBal.X_start[1] PARAM */),0.0);
    tmp2404 = LessEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[335]] /* plugFlowPipe1.vol_a.dynBal.X_start[1] PARAM */),1.0);
    if(!(tmp2403 && tmp2404))
    {
      tmp2406 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[335]] /* plugFlowPipe1.vol_a.dynBal.X_start[1] PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta2407 = stringAppend(MMC_REFSTRINGLIT(tmp2405),tmp2406);
      {
        const char* assert_cond = "(plugFlowPipe1.vol_a.dynBal.X_start[1] >= 0.0 and plugFlowPipe1.vol_a.dynBal.X_start[1] <= 1.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"E:/Daniel/sgi digital twin/Modelica/IDEAS-master/IDEAS/Fluid/Interfaces/LumpedVolumeDeclarations.mo",35,3,38,69,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2407));
        } else {
          FILE_INFO info = {"E:/Daniel/sgi digital twin/Modelica/IDEAS-master/IDEAS/Fluid/Interfaces/LumpedVolumeDeclarations.mo",35,3,38,69,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2407));
        }
      }
      tmp2408 = 1;
    }
  }
  threadData->lastEquationSolved = 2928;
}

/*
equation index: 2929
type: ALGORITHM

  assert(plugFlowPipe1.vol_a.dynBal.rho_default >= 0.0, "Variable violating min constraint: 0.0 <= plugFlowPipe1.vol_a.dynBal.rho_default, has value: " + String(plugFlowPipe1.vol_a.dynBal.rho_default, "g"));
*/
OMC_DISABLE_OPT
static void pump_v3_basicCold_t_eqFunction_2929(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2929};
  modelica_boolean tmp2409;
  static const MMC_DEFSTRINGLIT(tmp2410,93,"Variable violating min constraint: 0.0 <= plugFlowPipe1.vol_a.dynBal.rho_default, has value: ");
  modelica_string tmp2411;
  modelica_metatype tmpMeta2412;
  static int tmp2413 = 0;
  if(!tmp2413)
  {
    tmp2409 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[341]] /* plugFlowPipe1.vol_a.dynBal.rho_default PARAM */),0.0);
    if(!tmp2409)
    {
      tmp2411 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[341]] /* plugFlowPipe1.vol_a.dynBal.rho_default PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta2412 = stringAppend(MMC_REFSTRINGLIT(tmp2410),tmp2411);
      {
        const char* assert_cond = "(plugFlowPipe1.vol_a.dynBal.rho_default >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"E:/Daniel/sgi digital twin/Modelica/IDEAS-master/IDEAS/Fluid/Interfaces/ConservationEquation.mo",148,3,149,59,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2412));
        } else {
          FILE_INFO info = {"E:/Daniel/sgi digital twin/Modelica/IDEAS-master/IDEAS/Fluid/Interfaces/ConservationEquation.mo",148,3,149,59,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2412));
        }
      }
      tmp2413 = 1;
    }
  }
  threadData->lastEquationSolved = 2929;
}

/*
equation index: 2930
type: ALGORITHM

  assert(plugFlowPipe1.vol_a.dynBal.state_default.T >= 1.0 and plugFlowPipe1.vol_a.dynBal.state_default.T <= 1e4, "Variable violating min/max constraint: 1.0 <= plugFlowPipe1.vol_a.dynBal.state_default.T <= 1e4, has value: " + String(plugFlowPipe1.vol_a.dynBal.state_default.T, "g"));
*/
OMC_DISABLE_OPT
static void pump_v3_basicCold_t_eqFunction_2930(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2930};
  modelica_boolean tmp2414;
  modelica_boolean tmp2415;
  static const MMC_DEFSTRINGLIT(tmp2416,108,"Variable violating min/max constraint: 1.0 <= plugFlowPipe1.vol_a.dynBal.state_default.T <= 1e4, has value: ");
  modelica_string tmp2417;
  modelica_metatype tmpMeta2418;
  static int tmp2419 = 0;
  if(!tmp2419)
  {
    tmp2414 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[343]] /* plugFlowPipe1.vol_a.dynBal.state_default.T PARAM */),1.0);
    tmp2415 = LessEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[343]] /* plugFlowPipe1.vol_a.dynBal.state_default.T PARAM */),1e4);
    if(!(tmp2414 && tmp2415))
    {
      tmp2417 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[343]] /* plugFlowPipe1.vol_a.dynBal.state_default.T PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta2418 = stringAppend(MMC_REFSTRINGLIT(tmp2416),tmp2417);
      {
        const char* assert_cond = "(plugFlowPipe1.vol_a.dynBal.state_default.T >= 1.0 and plugFlowPipe1.vol_a.dynBal.state_default.T <= 1e4)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/Daniel/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Media/package.mo",5870,7,5870,44,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2418));
        } else {
          FILE_INFO info = {"C:/Users/Daniel/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Media/package.mo",5870,7,5870,44,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2418));
        }
      }
      tmp2419 = 1;
    }
  }
  threadData->lastEquationSolved = 2930;
}

/*
equation index: 2931
type: ALGORITHM

  assert(plugFlowPipe1.vol_a.dynBal.state_default.p >= 0.0 and plugFlowPipe1.vol_a.dynBal.state_default.p <= 1e8, "Variable violating min/max constraint: 0.0 <= plugFlowPipe1.vol_a.dynBal.state_default.p <= 1e8, has value: " + String(plugFlowPipe1.vol_a.dynBal.state_default.p, "g"));
*/
OMC_DISABLE_OPT
static void pump_v3_basicCold_t_eqFunction_2931(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2931};
  modelica_boolean tmp2420;
  modelica_boolean tmp2421;
  static const MMC_DEFSTRINGLIT(tmp2422,108,"Variable violating min/max constraint: 0.0 <= plugFlowPipe1.vol_a.dynBal.state_default.p <= 1e8, has value: ");
  modelica_string tmp2423;
  modelica_metatype tmpMeta2424;
  static int tmp2425 = 0;
  if(!tmp2425)
  {
    tmp2420 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[344]] /* plugFlowPipe1.vol_a.dynBal.state_default.p PARAM */),0.0);
    tmp2421 = LessEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[344]] /* plugFlowPipe1.vol_a.dynBal.state_default.p PARAM */),1e8);
    if(!(tmp2420 && tmp2421))
    {
      tmp2423 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[344]] /* plugFlowPipe1.vol_a.dynBal.state_default.p PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta2424 = stringAppend(MMC_REFSTRINGLIT(tmp2422),tmp2423);
      {
        const char* assert_cond = "(plugFlowPipe1.vol_a.dynBal.state_default.p >= 0.0 and plugFlowPipe1.vol_a.dynBal.state_default.p <= 1e8)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/Daniel/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Media/package.mo",5869,7,5869,55,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2424));
        } else {
          FILE_INFO info = {"C:/Users/Daniel/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Media/package.mo",5869,7,5869,55,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2424));
        }
      }
      tmp2425 = 1;
    }
  }
  threadData->lastEquationSolved = 2931;
}

/*
equation index: 2932
type: ALGORITHM

  assert(plugFlowPipe1.vol_a.dynBal.rho_start >= 0.0, "Variable violating min constraint: 0.0 <= plugFlowPipe1.vol_a.dynBal.rho_start, has value: " + String(plugFlowPipe1.vol_a.dynBal.rho_start, "g"));
*/
OMC_DISABLE_OPT
static void pump_v3_basicCold_t_eqFunction_2932(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2932};
  modelica_boolean tmp2426;
  static const MMC_DEFSTRINGLIT(tmp2427,91,"Variable violating min constraint: 0.0 <= plugFlowPipe1.vol_a.dynBal.rho_start, has value: ");
  modelica_string tmp2428;
  modelica_metatype tmpMeta2429;
  static int tmp2430 = 0;
  if(!tmp2430)
  {
    tmp2426 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[342]] /* plugFlowPipe1.vol_a.dynBal.rho_start PARAM */),0.0);
    if(!tmp2426)
    {
      tmp2428 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[342]] /* plugFlowPipe1.vol_a.dynBal.rho_start PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta2429 = stringAppend(MMC_REFSTRINGLIT(tmp2427),tmp2428);
      {
        const char* assert_cond = "(plugFlowPipe1.vol_a.dynBal.rho_start >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"E:/Daniel/sgi digital twin/Modelica/IDEAS-master/IDEAS/Fluid/Interfaces/ConservationEquation.mo",134,3,138,70,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2429));
        } else {
          FILE_INFO info = {"E:/Daniel/sgi digital twin/Modelica/IDEAS-master/IDEAS/Fluid/Interfaces/ConservationEquation.mo",134,3,138,70,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2429));
        }
      }
      tmp2430 = 1;
    }
  }
  threadData->lastEquationSolved = 2932;
}

/*
equation index: 2933
type: ALGORITHM

  assert(plugFlowPipe1.rhoPip >= 0.0, "Variable violating min constraint: 0.0 <= plugFlowPipe1.rhoPip, has value: " + String(plugFlowPipe1.rhoPip, "g"));
*/
OMC_DISABLE_OPT
static void pump_v3_basicCold_t_eqFunction_2933(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2933};
  modelica_boolean tmp2431;
  static const MMC_DEFSTRINGLIT(tmp2432,75,"Variable violating min constraint: 0.0 <= plugFlowPipe1.rhoPip, has value: ");
  modelica_string tmp2433;
  modelica_metatype tmpMeta2434;
  static int tmp2435 = 0;
  if(!tmp2435)
  {
    tmp2431 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[312]] /* plugFlowPipe1.rhoPip PARAM */),0.0);
    if(!tmp2431)
    {
      tmp2433 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[312]] /* plugFlowPipe1.rhoPip PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta2434 = stringAppend(MMC_REFSTRINGLIT(tmp2432),tmp2433);
      {
        const char* assert_cond = "(plugFlowPipe1.rhoPip >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"E:/Daniel/sgi digital twin/Modelica/IDEAS-master/IDEAS/Fluid/FixedResistances/BaseClasses/PlugFlowPipe.mo",54,3,56,62,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2434));
        } else {
          FILE_INFO info = {"E:/Daniel/sgi digital twin/Modelica/IDEAS-master/IDEAS/Fluid/FixedResistances/BaseClasses/PlugFlowPipe.mo",54,3,56,62,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2434));
        }
      }
      tmp2435 = 1;
    }
  }
  threadData->lastEquationSolved = 2933;
}

/*
equation index: 2934
type: ALGORITHM

  assert(plugFlowPipe1.sta_default.p >= 0.0 and plugFlowPipe1.sta_default.p <= 1e8, "Variable violating min/max constraint: 0.0 <= plugFlowPipe1.sta_default.p <= 1e8, has value: " + String(plugFlowPipe1.sta_default.p, "g"));
*/
OMC_DISABLE_OPT
static void pump_v3_basicCold_t_eqFunction_2934(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2934};
  modelica_boolean tmp2436;
  modelica_boolean tmp2437;
  static const MMC_DEFSTRINGLIT(tmp2438,93,"Variable violating min/max constraint: 0.0 <= plugFlowPipe1.sta_default.p <= 1e8, has value: ");
  modelica_string tmp2439;
  modelica_metatype tmpMeta2440;
  static int tmp2441 = 0;
  if(!tmp2441)
  {
    tmp2436 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[318]] /* plugFlowPipe1.sta_default.p PARAM */),0.0);
    tmp2437 = LessEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[318]] /* plugFlowPipe1.sta_default.p PARAM */),1e8);
    if(!(tmp2436 && tmp2437))
    {
      tmp2439 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[318]] /* plugFlowPipe1.sta_default.p PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta2440 = stringAppend(MMC_REFSTRINGLIT(tmp2438),tmp2439);
      {
        const char* assert_cond = "(plugFlowPipe1.sta_default.p >= 0.0 and plugFlowPipe1.sta_default.p <= 1e8)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/Daniel/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Media/package.mo",5869,7,5869,55,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2440));
        } else {
          FILE_INFO info = {"C:/Users/Daniel/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Media/package.mo",5869,7,5869,55,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2440));
        }
      }
      tmp2441 = 1;
    }
  }
  threadData->lastEquationSolved = 2934;
}

/*
equation index: 2935
type: ALGORITHM

  assert(plugFlowPipe1.sta_default.T >= 1.0 and plugFlowPipe1.sta_default.T <= 1e4, "Variable violating min/max constraint: 1.0 <= plugFlowPipe1.sta_default.T <= 1e4, has value: " + String(plugFlowPipe1.sta_default.T, "g"));
*/
OMC_DISABLE_OPT
static void pump_v3_basicCold_t_eqFunction_2935(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2935};
  modelica_boolean tmp2442;
  modelica_boolean tmp2443;
  static const MMC_DEFSTRINGLIT(tmp2444,93,"Variable violating min/max constraint: 1.0 <= plugFlowPipe1.sta_default.T <= 1e4, has value: ");
  modelica_string tmp2445;
  modelica_metatype tmpMeta2446;
  static int tmp2447 = 0;
  if(!tmp2447)
  {
    tmp2442 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[317]] /* plugFlowPipe1.sta_default.T PARAM */),1.0);
    tmp2443 = LessEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[317]] /* plugFlowPipe1.sta_default.T PARAM */),1e4);
    if(!(tmp2442 && tmp2443))
    {
      tmp2445 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[317]] /* plugFlowPipe1.sta_default.T PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta2446 = stringAppend(MMC_REFSTRINGLIT(tmp2444),tmp2445);
      {
        const char* assert_cond = "(plugFlowPipe1.sta_default.T >= 1.0 and plugFlowPipe1.sta_default.T <= 1e4)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/Daniel/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Media/package.mo",5870,7,5870,44,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2446));
        } else {
          FILE_INFO info = {"C:/Users/Daniel/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Media/package.mo",5870,7,5870,44,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2446));
        }
      }
      tmp2447 = 1;
    }
  }
  threadData->lastEquationSolved = 2935;
}

/*
equation index: 2936
type: ALGORITHM

  assert(plugFlowPipe1.vol_a.dynBal.mSenFac >= 1.0, "Variable violating min constraint: 1.0 <= plugFlowPipe1.vol_a.dynBal.mSenFac, has value: " + String(plugFlowPipe1.vol_a.dynBal.mSenFac, "g"));
*/
OMC_DISABLE_OPT
static void pump_v3_basicCold_t_eqFunction_2936(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2936};
  modelica_boolean tmp2448;
  static const MMC_DEFSTRINGLIT(tmp2449,89,"Variable violating min constraint: 1.0 <= plugFlowPipe1.vol_a.dynBal.mSenFac, has value: ");
  modelica_string tmp2450;
  modelica_metatype tmpMeta2451;
  static int tmp2452 = 0;
  if(!tmp2452)
  {
    tmp2448 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[339]] /* plugFlowPipe1.vol_a.dynBal.mSenFac PARAM */),1.0);
    if(!tmp2448)
    {
      tmp2450 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[339]] /* plugFlowPipe1.vol_a.dynBal.mSenFac PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta2451 = stringAppend(MMC_REFSTRINGLIT(tmp2449),tmp2450);
      {
        const char* assert_cond = "(plugFlowPipe1.vol_a.dynBal.mSenFac >= 1.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"E:/Daniel/sgi digital twin/Modelica/IDEAS-master/IDEAS/Fluid/Interfaces/LumpedVolumeDeclarations.mo",47,3,49,39,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2451));
        } else {
          FILE_INFO info = {"E:/Daniel/sgi digital twin/Modelica/IDEAS-master/IDEAS/Fluid/Interfaces/LumpedVolumeDeclarations.mo",47,3,49,39,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2451));
        }
      }
      tmp2452 = 1;
    }
  }
  threadData->lastEquationSolved = 2936;
}

/*
equation index: 2937
type: ALGORITHM

  assert(plugFlowPipe1.vol_a.dynBal.traceDynamics >= Modelica.Fluid.Types.Dynamics.DynamicFreeInitial and plugFlowPipe1.vol_a.dynBal.traceDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, "Variable violating min/max constraint: Modelica.Fluid.Types.Dynamics.DynamicFreeInitial <= plugFlowPipe1.vol_a.dynBal.traceDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, has value: " + String(plugFlowPipe1.vol_a.dynBal.traceDynamics, "d"));
*/
OMC_DISABLE_OPT
static void pump_v3_basicCold_t_eqFunction_2937(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2937};
  modelica_boolean tmp2453;
  modelica_boolean tmp2454;
  static const MMC_DEFSTRINGLIT(tmp2455,189,"Variable violating min/max constraint: Modelica.Fluid.Types.Dynamics.DynamicFreeInitial <= plugFlowPipe1.vol_a.dynBal.traceDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, has value: ");
  modelica_string tmp2456;
  modelica_metatype tmpMeta2457;
  static int tmp2458 = 0;
  if(!tmp2458)
  {
    tmp2453 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[29]] /* plugFlowPipe1.vol_a.dynBal.traceDynamics PARAM */),1);
    tmp2454 = LessEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[29]] /* plugFlowPipe1.vol_a.dynBal.traceDynamics PARAM */),4);
    if(!(tmp2453 && tmp2454))
    {
      tmp2456 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[29]] /* plugFlowPipe1.vol_a.dynBal.traceDynamics PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta2457 = stringAppend(MMC_REFSTRINGLIT(tmp2455),tmp2456);
      {
        const char* assert_cond = "(plugFlowPipe1.vol_a.dynBal.traceDynamics >= Modelica.Fluid.Types.Dynamics.DynamicFreeInitial and plugFlowPipe1.vol_a.dynBal.traceDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"E:/Daniel/sgi digital twin/Modelica/IDEAS-master/IDEAS/Fluid/Interfaces/LumpedVolumeDeclarations.mo",24,3,26,88,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2457));
        } else {
          FILE_INFO info = {"E:/Daniel/sgi digital twin/Modelica/IDEAS-master/IDEAS/Fluid/Interfaces/LumpedVolumeDeclarations.mo",24,3,26,88,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2457));
        }
      }
      tmp2458 = 1;
    }
  }
  threadData->lastEquationSolved = 2937;
}

/*
equation index: 2938
type: ALGORITHM

  assert(plugFlowPipe1.vol_a.dynBal.substanceDynamics >= Modelica.Fluid.Types.Dynamics.DynamicFreeInitial and plugFlowPipe1.vol_a.dynBal.substanceDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, "Variable violating min/max constraint: Modelica.Fluid.Types.Dynamics.DynamicFreeInitial <= plugFlowPipe1.vol_a.dynBal.substanceDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, has value: " + String(plugFlowPipe1.vol_a.dynBal.substanceDynamics, "d"));
*/
OMC_DISABLE_OPT
static void pump_v3_basicCold_t_eqFunction_2938(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2938};
  modelica_boolean tmp2459;
  modelica_boolean tmp2460;
  static const MMC_DEFSTRINGLIT(tmp2461,193,"Variable violating min/max constraint: Modelica.Fluid.Types.Dynamics.DynamicFreeInitial <= plugFlowPipe1.vol_a.dynBal.substanceDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, has value: ");
  modelica_string tmp2462;
  modelica_metatype tmpMeta2463;
  static int tmp2464 = 0;
  if(!tmp2464)
  {
    tmp2459 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[28]] /* plugFlowPipe1.vol_a.dynBal.substanceDynamics PARAM */),1);
    tmp2460 = LessEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[28]] /* plugFlowPipe1.vol_a.dynBal.substanceDynamics PARAM */),4);
    if(!(tmp2459 && tmp2460))
    {
      tmp2462 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[28]] /* plugFlowPipe1.vol_a.dynBal.substanceDynamics PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta2463 = stringAppend(MMC_REFSTRINGLIT(tmp2461),tmp2462);
      {
        const char* assert_cond = "(plugFlowPipe1.vol_a.dynBal.substanceDynamics >= Modelica.Fluid.Types.Dynamics.DynamicFreeInitial and plugFlowPipe1.vol_a.dynBal.substanceDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"E:/Daniel/sgi digital twin/Modelica/IDEAS-master/IDEAS/Fluid/Interfaces/LumpedVolumeDeclarations.mo",21,3,23,88,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2463));
        } else {
          FILE_INFO info = {"E:/Daniel/sgi digital twin/Modelica/IDEAS-master/IDEAS/Fluid/Interfaces/LumpedVolumeDeclarations.mo",21,3,23,88,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2463));
        }
      }
      tmp2464 = 1;
    }
  }
  threadData->lastEquationSolved = 2938;
}

/*
equation index: 2939
type: ALGORITHM

  assert(plugFlowPipe1.vol_a.dynBal.massDynamics >= Modelica.Fluid.Types.Dynamics.DynamicFreeInitial and plugFlowPipe1.vol_a.dynBal.massDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, "Variable violating min/max constraint: Modelica.Fluid.Types.Dynamics.DynamicFreeInitial <= plugFlowPipe1.vol_a.dynBal.massDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, has value: " + String(plugFlowPipe1.vol_a.dynBal.massDynamics, "d"));
*/
OMC_DISABLE_OPT
static void pump_v3_basicCold_t_eqFunction_2939(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2939};
  modelica_boolean tmp2465;
  modelica_boolean tmp2466;
  static const MMC_DEFSTRINGLIT(tmp2467,188,"Variable violating min/max constraint: Modelica.Fluid.Types.Dynamics.DynamicFreeInitial <= plugFlowPipe1.vol_a.dynBal.massDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, has value: ");
  modelica_string tmp2468;
  modelica_metatype tmpMeta2469;
  static int tmp2470 = 0;
  if(!tmp2470)
  {
    tmp2465 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[26]] /* plugFlowPipe1.vol_a.dynBal.massDynamics PARAM */),1);
    tmp2466 = LessEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[26]] /* plugFlowPipe1.vol_a.dynBal.massDynamics PARAM */),4);
    if(!(tmp2465 && tmp2466))
    {
      tmp2468 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[26]] /* plugFlowPipe1.vol_a.dynBal.massDynamics PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta2469 = stringAppend(MMC_REFSTRINGLIT(tmp2467),tmp2468);
      {
        const char* assert_cond = "(plugFlowPipe1.vol_a.dynBal.massDynamics >= Modelica.Fluid.Types.Dynamics.DynamicFreeInitial and plugFlowPipe1.vol_a.dynBal.massDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"E:/Daniel/sgi digital twin/Modelica/IDEAS-master/IDEAS/Fluid/Interfaces/LumpedVolumeDeclarations.mo",18,3,20,74,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2469));
        } else {
          FILE_INFO info = {"E:/Daniel/sgi digital twin/Modelica/IDEAS-master/IDEAS/Fluid/Interfaces/LumpedVolumeDeclarations.mo",18,3,20,74,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2469));
        }
      }
      tmp2470 = 1;
    }
  }
  threadData->lastEquationSolved = 2939;
}

/*
equation index: 2940
type: ALGORITHM

  assert(plugFlowPipe1.vol_a.dynBal.energyDynamics >= Modelica.Fluid.Types.Dynamics.DynamicFreeInitial and plugFlowPipe1.vol_a.dynBal.energyDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, "Variable violating min/max constraint: Modelica.Fluid.Types.Dynamics.DynamicFreeInitial <= plugFlowPipe1.vol_a.dynBal.energyDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, has value: " + String(plugFlowPipe1.vol_a.dynBal.energyDynamics, "d"));
*/
OMC_DISABLE_OPT
static void pump_v3_basicCold_t_eqFunction_2940(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2940};
  modelica_boolean tmp2471;
  modelica_boolean tmp2472;
  static const MMC_DEFSTRINGLIT(tmp2473,190,"Variable violating min/max constraint: Modelica.Fluid.Types.Dynamics.DynamicFreeInitial <= plugFlowPipe1.vol_a.dynBal.energyDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, has value: ");
  modelica_string tmp2474;
  modelica_metatype tmpMeta2475;
  static int tmp2476 = 0;
  if(!tmp2476)
  {
    tmp2471 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[25]] /* plugFlowPipe1.vol_a.dynBal.energyDynamics PARAM */),1);
    tmp2472 = LessEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[25]] /* plugFlowPipe1.vol_a.dynBal.energyDynamics PARAM */),4);
    if(!(tmp2471 && tmp2472))
    {
      tmp2474 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[25]] /* plugFlowPipe1.vol_a.dynBal.energyDynamics PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta2475 = stringAppend(MMC_REFSTRINGLIT(tmp2473),tmp2474);
      {
        const char* assert_cond = "(plugFlowPipe1.vol_a.dynBal.energyDynamics >= Modelica.Fluid.Types.Dynamics.DynamicFreeInitial and plugFlowPipe1.vol_a.dynBal.energyDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"E:/Daniel/sgi digital twin/Modelica/IDEAS-master/IDEAS/Fluid/Interfaces/LumpedVolumeDeclarations.mo",15,3,17,88,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2475));
        } else {
          FILE_INFO info = {"E:/Daniel/sgi digital twin/Modelica/IDEAS-master/IDEAS/Fluid/Interfaces/LumpedVolumeDeclarations.mo",15,3,17,88,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2475));
        }
      }
      tmp2476 = 1;
    }
  }
  threadData->lastEquationSolved = 2940;
}

/*
equation index: 2941
type: ALGORITHM

  assert(plugFlowPipe1.vol_a.m_flow_small >= 0.0, "Variable violating min constraint: 0.0 <= plugFlowPipe1.vol_a.m_flow_small, has value: " + String(plugFlowPipe1.vol_a.m_flow_small, "g"));
*/
OMC_DISABLE_OPT
static void pump_v3_basicCold_t_eqFunction_2941(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2941};
  modelica_boolean tmp2477;
  static const MMC_DEFSTRINGLIT(tmp2478,87,"Variable violating min constraint: 0.0 <= plugFlowPipe1.vol_a.m_flow_small, has value: ");
  modelica_string tmp2479;
  modelica_metatype tmpMeta2480;
  static int tmp2481 = 0;
  if(!tmp2481)
  {
    tmp2477 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[347]] /* plugFlowPipe1.vol_a.m_flow_small PARAM */),0.0);
    if(!tmp2477)
    {
      tmp2479 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[347]] /* plugFlowPipe1.vol_a.m_flow_small PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta2480 = stringAppend(MMC_REFSTRINGLIT(tmp2478),tmp2479);
      {
        const char* assert_cond = "(plugFlowPipe1.vol_a.m_flow_small >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"E:/Daniel/sgi digital twin/Modelica/IDEAS-master/IDEAS/Fluid/MixingVolumes/BaseClasses/PartialMixingVolume.mo",25,3,27,40,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2480));
        } else {
          FILE_INFO info = {"E:/Daniel/sgi digital twin/Modelica/IDEAS-master/IDEAS/Fluid/MixingVolumes/BaseClasses/PartialMixingVolume.mo",25,3,27,40,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2480));
        }
      }
      tmp2481 = 1;
    }
  }
  threadData->lastEquationSolved = 2941;
}

/*
equation index: 2942
type: ALGORITHM

  assert(plugFlowPipe1.vol_a.m_flow_nominal >= 0.0, "Variable violating min constraint: 0.0 <= plugFlowPipe1.vol_a.m_flow_nominal, has value: " + String(plugFlowPipe1.vol_a.m_flow_nominal, "g"));
*/
OMC_DISABLE_OPT
static void pump_v3_basicCold_t_eqFunction_2942(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2942};
  modelica_boolean tmp2482;
  static const MMC_DEFSTRINGLIT(tmp2483,89,"Variable violating min constraint: 0.0 <= plugFlowPipe1.vol_a.m_flow_nominal, has value: ");
  modelica_string tmp2484;
  modelica_metatype tmpMeta2485;
  static int tmp2486 = 0;
  if(!tmp2486)
  {
    tmp2482 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[346]] /* plugFlowPipe1.vol_a.m_flow_nominal PARAM */),0.0);
    if(!tmp2482)
    {
      tmp2484 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[346]] /* plugFlowPipe1.vol_a.m_flow_nominal PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta2485 = stringAppend(MMC_REFSTRINGLIT(tmp2483),tmp2484);
      {
        const char* assert_cond = "(plugFlowPipe1.vol_a.m_flow_nominal >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"E:/Daniel/sgi digital twin/Modelica/IDEAS-master/IDEAS/Fluid/MixingVolumes/BaseClasses/PartialMixingVolume.mo",20,3,21,76,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2485));
        } else {
          FILE_INFO info = {"E:/Daniel/sgi digital twin/Modelica/IDEAS-master/IDEAS/Fluid/MixingVolumes/BaseClasses/PartialMixingVolume.mo",20,3,21,76,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2485));
        }
      }
      tmp2486 = 1;
    }
  }
  threadData->lastEquationSolved = 2942;
}

/*
equation index: 2943
type: ALGORITHM

  assert(plugFlowPipe1.vol_a.mSenFac >= 1.0, "Variable violating min constraint: 1.0 <= plugFlowPipe1.vol_a.mSenFac, has value: " + String(plugFlowPipe1.vol_a.mSenFac, "g"));
*/
OMC_DISABLE_OPT
static void pump_v3_basicCold_t_eqFunction_2943(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2943};
  modelica_boolean tmp2487;
  static const MMC_DEFSTRINGLIT(tmp2488,82,"Variable violating min constraint: 1.0 <= plugFlowPipe1.vol_a.mSenFac, has value: ");
  modelica_string tmp2489;
  modelica_metatype tmpMeta2490;
  static int tmp2491 = 0;
  if(!tmp2491)
  {
    tmp2487 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[345]] /* plugFlowPipe1.vol_a.mSenFac PARAM */),1.0);
    if(!tmp2487)
    {
      tmp2489 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[345]] /* plugFlowPipe1.vol_a.mSenFac PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta2490 = stringAppend(MMC_REFSTRINGLIT(tmp2488),tmp2489);
      {
        const char* assert_cond = "(plugFlowPipe1.vol_a.mSenFac >= 1.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"E:/Daniel/sgi digital twin/Modelica/IDEAS-master/IDEAS/Fluid/Interfaces/LumpedVolumeDeclarations.mo",47,3,49,39,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2490));
        } else {
          FILE_INFO info = {"E:/Daniel/sgi digital twin/Modelica/IDEAS-master/IDEAS/Fluid/Interfaces/LumpedVolumeDeclarations.mo",47,3,49,39,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2490));
        }
      }
      tmp2491 = 1;
    }
  }
  threadData->lastEquationSolved = 2943;
}

/*
equation index: 2944
type: ALGORITHM

  assert(plugFlowPipe1.vol_a.traceDynamics >= Modelica.Fluid.Types.Dynamics.DynamicFreeInitial and plugFlowPipe1.vol_a.traceDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, "Variable violating min/max constraint: Modelica.Fluid.Types.Dynamics.DynamicFreeInitial <= plugFlowPipe1.vol_a.traceDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, has value: " + String(plugFlowPipe1.vol_a.traceDynamics, "d"));
*/
OMC_DISABLE_OPT
static void pump_v3_basicCold_t_eqFunction_2944(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2944};
  modelica_boolean tmp2492;
  modelica_boolean tmp2493;
  static const MMC_DEFSTRINGLIT(tmp2494,182,"Variable violating min/max constraint: Modelica.Fluid.Types.Dynamics.DynamicFreeInitial <= plugFlowPipe1.vol_a.traceDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, has value: ");
  modelica_string tmp2495;
  modelica_metatype tmpMeta2496;
  static int tmp2497 = 0;
  if(!tmp2497)
  {
    tmp2492 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[34]] /* plugFlowPipe1.vol_a.traceDynamics PARAM */),1);
    tmp2493 = LessEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[34]] /* plugFlowPipe1.vol_a.traceDynamics PARAM */),4);
    if(!(tmp2492 && tmp2493))
    {
      tmp2495 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[34]] /* plugFlowPipe1.vol_a.traceDynamics PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta2496 = stringAppend(MMC_REFSTRINGLIT(tmp2494),tmp2495);
      {
        const char* assert_cond = "(plugFlowPipe1.vol_a.traceDynamics >= Modelica.Fluid.Types.Dynamics.DynamicFreeInitial and plugFlowPipe1.vol_a.traceDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"E:/Daniel/sgi digital twin/Modelica/IDEAS-master/IDEAS/Fluid/Interfaces/LumpedVolumeDeclarations.mo",24,3,26,88,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2496));
        } else {
          FILE_INFO info = {"E:/Daniel/sgi digital twin/Modelica/IDEAS-master/IDEAS/Fluid/Interfaces/LumpedVolumeDeclarations.mo",24,3,26,88,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2496));
        }
      }
      tmp2497 = 1;
    }
  }
  threadData->lastEquationSolved = 2944;
}

/*
equation index: 2945
type: ALGORITHM

  assert(plugFlowPipe1.vol_a.substanceDynamics >= Modelica.Fluid.Types.Dynamics.DynamicFreeInitial and plugFlowPipe1.vol_a.substanceDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, "Variable violating min/max constraint: Modelica.Fluid.Types.Dynamics.DynamicFreeInitial <= plugFlowPipe1.vol_a.substanceDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, has value: " + String(plugFlowPipe1.vol_a.substanceDynamics, "d"));
*/
OMC_DISABLE_OPT
static void pump_v3_basicCold_t_eqFunction_2945(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2945};
  modelica_boolean tmp2498;
  modelica_boolean tmp2499;
  static const MMC_DEFSTRINGLIT(tmp2500,186,"Variable violating min/max constraint: Modelica.Fluid.Types.Dynamics.DynamicFreeInitial <= plugFlowPipe1.vol_a.substanceDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, has value: ");
  modelica_string tmp2501;
  modelica_metatype tmpMeta2502;
  static int tmp2503 = 0;
  if(!tmp2503)
  {
    tmp2498 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[33]] /* plugFlowPipe1.vol_a.substanceDynamics PARAM */),1);
    tmp2499 = LessEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[33]] /* plugFlowPipe1.vol_a.substanceDynamics PARAM */),4);
    if(!(tmp2498 && tmp2499))
    {
      tmp2501 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[33]] /* plugFlowPipe1.vol_a.substanceDynamics PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta2502 = stringAppend(MMC_REFSTRINGLIT(tmp2500),tmp2501);
      {
        const char* assert_cond = "(plugFlowPipe1.vol_a.substanceDynamics >= Modelica.Fluid.Types.Dynamics.DynamicFreeInitial and plugFlowPipe1.vol_a.substanceDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"E:/Daniel/sgi digital twin/Modelica/IDEAS-master/IDEAS/Fluid/Interfaces/LumpedVolumeDeclarations.mo",21,3,23,88,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2502));
        } else {
          FILE_INFO info = {"E:/Daniel/sgi digital twin/Modelica/IDEAS-master/IDEAS/Fluid/Interfaces/LumpedVolumeDeclarations.mo",21,3,23,88,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2502));
        }
      }
      tmp2503 = 1;
    }
  }
  threadData->lastEquationSolved = 2945;
}

/*
equation index: 2946
type: ALGORITHM

  assert(plugFlowPipe1.vol_a.massDynamics >= Modelica.Fluid.Types.Dynamics.DynamicFreeInitial and plugFlowPipe1.vol_a.massDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, "Variable violating min/max constraint: Modelica.Fluid.Types.Dynamics.DynamicFreeInitial <= plugFlowPipe1.vol_a.massDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, has value: " + String(plugFlowPipe1.vol_a.massDynamics, "d"));
*/
OMC_DISABLE_OPT
static void pump_v3_basicCold_t_eqFunction_2946(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2946};
  modelica_boolean tmp2504;
  modelica_boolean tmp2505;
  static const MMC_DEFSTRINGLIT(tmp2506,181,"Variable violating min/max constraint: Modelica.Fluid.Types.Dynamics.DynamicFreeInitial <= plugFlowPipe1.vol_a.massDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, has value: ");
  modelica_string tmp2507;
  modelica_metatype tmpMeta2508;
  static int tmp2509 = 0;
  if(!tmp2509)
  {
    tmp2504 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[31]] /* plugFlowPipe1.vol_a.massDynamics PARAM */),1);
    tmp2505 = LessEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[31]] /* plugFlowPipe1.vol_a.massDynamics PARAM */),4);
    if(!(tmp2504 && tmp2505))
    {
      tmp2507 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[31]] /* plugFlowPipe1.vol_a.massDynamics PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta2508 = stringAppend(MMC_REFSTRINGLIT(tmp2506),tmp2507);
      {
        const char* assert_cond = "(plugFlowPipe1.vol_a.massDynamics >= Modelica.Fluid.Types.Dynamics.DynamicFreeInitial and plugFlowPipe1.vol_a.massDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"E:/Daniel/sgi digital twin/Modelica/IDEAS-master/IDEAS/Fluid/Interfaces/LumpedVolumeDeclarations.mo",18,3,20,74,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2508));
        } else {
          FILE_INFO info = {"E:/Daniel/sgi digital twin/Modelica/IDEAS-master/IDEAS/Fluid/Interfaces/LumpedVolumeDeclarations.mo",18,3,20,74,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2508));
        }
      }
      tmp2509 = 1;
    }
  }
  threadData->lastEquationSolved = 2946;
}

/*
equation index: 2947
type: ALGORITHM

  assert(plugFlowPipe1.vol_a.energyDynamics >= Modelica.Fluid.Types.Dynamics.DynamicFreeInitial and plugFlowPipe1.vol_a.energyDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, "Variable violating min/max constraint: Modelica.Fluid.Types.Dynamics.DynamicFreeInitial <= plugFlowPipe1.vol_a.energyDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, has value: " + String(plugFlowPipe1.vol_a.energyDynamics, "d"));
*/
OMC_DISABLE_OPT
static void pump_v3_basicCold_t_eqFunction_2947(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2947};
  modelica_boolean tmp2510;
  modelica_boolean tmp2511;
  static const MMC_DEFSTRINGLIT(tmp2512,183,"Variable violating min/max constraint: Modelica.Fluid.Types.Dynamics.DynamicFreeInitial <= plugFlowPipe1.vol_a.energyDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, has value: ");
  modelica_string tmp2513;
  modelica_metatype tmpMeta2514;
  static int tmp2515 = 0;
  if(!tmp2515)
  {
    tmp2510 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[30]] /* plugFlowPipe1.vol_a.energyDynamics PARAM */),1);
    tmp2511 = LessEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[30]] /* plugFlowPipe1.vol_a.energyDynamics PARAM */),4);
    if(!(tmp2510 && tmp2511))
    {
      tmp2513 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[30]] /* plugFlowPipe1.vol_a.energyDynamics PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta2514 = stringAppend(MMC_REFSTRINGLIT(tmp2512),tmp2513);
      {
        const char* assert_cond = "(plugFlowPipe1.vol_a.energyDynamics >= Modelica.Fluid.Types.Dynamics.DynamicFreeInitial and plugFlowPipe1.vol_a.energyDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"E:/Daniel/sgi digital twin/Modelica/IDEAS-master/IDEAS/Fluid/Interfaces/LumpedVolumeDeclarations.mo",15,3,17,88,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2514));
        } else {
          FILE_INFO info = {"E:/Daniel/sgi digital twin/Modelica/IDEAS-master/IDEAS/Fluid/Interfaces/LumpedVolumeDeclarations.mo",15,3,17,88,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2514));
        }
      }
      tmp2515 = 1;
    }
  }
  threadData->lastEquationSolved = 2947;
}

/*
equation index: 2948
type: ALGORITHM

  assert(plugFlowPipe1.vol_b.T_start >= 1.0 and plugFlowPipe1.vol_b.T_start <= 1e4, "Variable violating min/max constraint: 1.0 <= plugFlowPipe1.vol_b.T_start <= 1e4, has value: " + String(plugFlowPipe1.vol_b.T_start, "g"));
*/
OMC_DISABLE_OPT
static void pump_v3_basicCold_t_eqFunction_2948(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2948};
  modelica_boolean tmp2516;
  modelica_boolean tmp2517;
  static const MMC_DEFSTRINGLIT(tmp2518,93,"Variable violating min/max constraint: 1.0 <= plugFlowPipe1.vol_b.T_start <= 1e4, has value: ");
  modelica_string tmp2519;
  modelica_metatype tmpMeta2520;
  static int tmp2521 = 0;
  if(!tmp2521)
  {
    tmp2516 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[355]] /* plugFlowPipe1.vol_b.T_start PARAM */),1.0);
    tmp2517 = LessEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[355]] /* plugFlowPipe1.vol_b.T_start PARAM */),1e4);
    if(!(tmp2516 && tmp2517))
    {
      tmp2519 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[355]] /* plugFlowPipe1.vol_b.T_start PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta2520 = stringAppend(MMC_REFSTRINGLIT(tmp2518),tmp2519);
      {
        const char* assert_cond = "(plugFlowPipe1.vol_b.T_start >= 1.0 and plugFlowPipe1.vol_b.T_start <= 1e4)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"E:/Daniel/sgi digital twin/Modelica/IDEAS-master/IDEAS/Fluid/Interfaces/LumpedVolumeDeclarations.mo",32,3,34,47,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2520));
        } else {
          FILE_INFO info = {"E:/Daniel/sgi digital twin/Modelica/IDEAS-master/IDEAS/Fluid/Interfaces/LumpedVolumeDeclarations.mo",32,3,34,47,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2520));
        }
      }
      tmp2521 = 1;
    }
  }
  threadData->lastEquationSolved = 2948;
}

/*
equation index: 2949
type: ALGORITHM

  assert(plugFlowPipe1.vol_b.state_start.T >= 1.0 and plugFlowPipe1.vol_b.state_start.T <= 1e4, "Variable violating min/max constraint: 1.0 <= plugFlowPipe1.vol_b.state_start.T <= 1e4, has value: " + String(plugFlowPipe1.vol_b.state_start.T, "g"));
*/
OMC_DISABLE_OPT
static void pump_v3_basicCold_t_eqFunction_2949(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2949};
  modelica_boolean tmp2522;
  modelica_boolean tmp2523;
  static const MMC_DEFSTRINGLIT(tmp2524,99,"Variable violating min/max constraint: 1.0 <= plugFlowPipe1.vol_b.state_start.T <= 1e4, has value: ");
  modelica_string tmp2525;
  modelica_metatype tmpMeta2526;
  static int tmp2527 = 0;
  if(!tmp2527)
  {
    tmp2522 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[378]] /* plugFlowPipe1.vol_b.state_start.T PARAM */),1.0);
    tmp2523 = LessEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[378]] /* plugFlowPipe1.vol_b.state_start.T PARAM */),1e4);
    if(!(tmp2522 && tmp2523))
    {
      tmp2525 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[378]] /* plugFlowPipe1.vol_b.state_start.T PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta2526 = stringAppend(MMC_REFSTRINGLIT(tmp2524),tmp2525);
      {
        const char* assert_cond = "(plugFlowPipe1.vol_b.state_start.T >= 1.0 and plugFlowPipe1.vol_b.state_start.T <= 1e4)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/Daniel/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Media/package.mo",5870,7,5870,44,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2526));
        } else {
          FILE_INFO info = {"C:/Users/Daniel/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Media/package.mo",5870,7,5870,44,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2526));
        }
      }
      tmp2527 = 1;
    }
  }
  threadData->lastEquationSolved = 2949;
}

/*
equation index: 2950
type: ALGORITHM

  assert(plugFlowPipe1.vol_b.p_start >= 0.0 and plugFlowPipe1.vol_b.p_start <= 1e8, "Variable violating min/max constraint: 0.0 <= plugFlowPipe1.vol_b.p_start <= 1e8, has value: " + String(plugFlowPipe1.vol_b.p_start, "g"));
*/
OMC_DISABLE_OPT
static void pump_v3_basicCold_t_eqFunction_2950(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2950};
  modelica_boolean tmp2528;
  modelica_boolean tmp2529;
  static const MMC_DEFSTRINGLIT(tmp2530,93,"Variable violating min/max constraint: 0.0 <= plugFlowPipe1.vol_b.p_start <= 1e8, has value: ");
  modelica_string tmp2531;
  modelica_metatype tmpMeta2532;
  static int tmp2533 = 0;
  if(!tmp2533)
  {
    tmp2528 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[373]] /* plugFlowPipe1.vol_b.p_start PARAM */),0.0);
    tmp2529 = LessEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[373]] /* plugFlowPipe1.vol_b.p_start PARAM */),1e8);
    if(!(tmp2528 && tmp2529))
    {
      tmp2531 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[373]] /* plugFlowPipe1.vol_b.p_start PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta2532 = stringAppend(MMC_REFSTRINGLIT(tmp2530),tmp2531);
      {
        const char* assert_cond = "(plugFlowPipe1.vol_b.p_start >= 0.0 and plugFlowPipe1.vol_b.p_start <= 1e8)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"E:/Daniel/sgi digital twin/Modelica/IDEAS-master/IDEAS/Fluid/Interfaces/LumpedVolumeDeclarations.mo",29,3,31,47,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2532));
        } else {
          FILE_INFO info = {"E:/Daniel/sgi digital twin/Modelica/IDEAS-master/IDEAS/Fluid/Interfaces/LumpedVolumeDeclarations.mo",29,3,31,47,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2532));
        }
      }
      tmp2533 = 1;
    }
  }
  threadData->lastEquationSolved = 2950;
}

/*
equation index: 2951
type: ALGORITHM

  assert(plugFlowPipe1.vol_b.state_start.p >= 0.0 and plugFlowPipe1.vol_b.state_start.p <= 1e8, "Variable violating min/max constraint: 0.0 <= plugFlowPipe1.vol_b.state_start.p <= 1e8, has value: " + String(plugFlowPipe1.vol_b.state_start.p, "g"));
*/
OMC_DISABLE_OPT
static void pump_v3_basicCold_t_eqFunction_2951(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2951};
  modelica_boolean tmp2534;
  modelica_boolean tmp2535;
  static const MMC_DEFSTRINGLIT(tmp2536,99,"Variable violating min/max constraint: 0.0 <= plugFlowPipe1.vol_b.state_start.p <= 1e8, has value: ");
  modelica_string tmp2537;
  modelica_metatype tmpMeta2538;
  static int tmp2539 = 0;
  if(!tmp2539)
  {
    tmp2534 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[379]] /* plugFlowPipe1.vol_b.state_start.p PARAM */),0.0);
    tmp2535 = LessEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[379]] /* plugFlowPipe1.vol_b.state_start.p PARAM */),1e8);
    if(!(tmp2534 && tmp2535))
    {
      tmp2537 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[379]] /* plugFlowPipe1.vol_b.state_start.p PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta2538 = stringAppend(MMC_REFSTRINGLIT(tmp2536),tmp2537);
      {
        const char* assert_cond = "(plugFlowPipe1.vol_b.state_start.p >= 0.0 and plugFlowPipe1.vol_b.state_start.p <= 1e8)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/Daniel/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Media/package.mo",5869,7,5869,55,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2538));
        } else {
          FILE_INFO info = {"C:/Users/Daniel/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Media/package.mo",5869,7,5869,55,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2538));
        }
      }
      tmp2539 = 1;
    }
  }
  threadData->lastEquationSolved = 2951;
}

/*
equation index: 2952
type: ALGORITHM

  assert(plugFlowPipe1.vol_b.rho_default >= 0.0, "Variable violating min constraint: 0.0 <= plugFlowPipe1.vol_b.rho_default, has value: " + String(plugFlowPipe1.vol_b.rho_default, "g"));
*/
OMC_DISABLE_OPT
static void pump_v3_basicCold_t_eqFunction_2952(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2952};
  modelica_boolean tmp2540;
  static const MMC_DEFSTRINGLIT(tmp2541,86,"Variable violating min constraint: 0.0 <= plugFlowPipe1.vol_b.rho_default, has value: ");
  modelica_string tmp2542;
  modelica_metatype tmpMeta2543;
  static int tmp2544 = 0;
  if(!tmp2544)
  {
    tmp2540 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[374]] /* plugFlowPipe1.vol_b.rho_default PARAM */),0.0);
    if(!tmp2540)
    {
      tmp2542 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[374]] /* plugFlowPipe1.vol_b.rho_default PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta2543 = stringAppend(MMC_REFSTRINGLIT(tmp2541),tmp2542);
      {
        const char* assert_cond = "(plugFlowPipe1.vol_b.rho_default >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"E:/Daniel/sgi digital twin/Modelica/IDEAS-master/IDEAS/Fluid/MixingVolumes/BaseClasses/PartialMixingVolume.mo",99,3,100,63,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2543));
        } else {
          FILE_INFO info = {"E:/Daniel/sgi digital twin/Modelica/IDEAS-master/IDEAS/Fluid/MixingVolumes/BaseClasses/PartialMixingVolume.mo",99,3,100,63,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2543));
        }
      }
      tmp2544 = 1;
    }
  }
  threadData->lastEquationSolved = 2952;
}

/*
equation index: 2953
type: ALGORITHM

  assert(plugFlowPipe1.vol_b.state_default.T >= 1.0 and plugFlowPipe1.vol_b.state_default.T <= 1e4, "Variable violating min/max constraint: 1.0 <= plugFlowPipe1.vol_b.state_default.T <= 1e4, has value: " + String(plugFlowPipe1.vol_b.state_default.T, "g"));
*/
OMC_DISABLE_OPT
static void pump_v3_basicCold_t_eqFunction_2953(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2953};
  modelica_boolean tmp2545;
  modelica_boolean tmp2546;
  static const MMC_DEFSTRINGLIT(tmp2547,101,"Variable violating min/max constraint: 1.0 <= plugFlowPipe1.vol_b.state_default.T <= 1e4, has value: ");
  modelica_string tmp2548;
  modelica_metatype tmpMeta2549;
  static int tmp2550 = 0;
  if(!tmp2550)
  {
    tmp2545 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[376]] /* plugFlowPipe1.vol_b.state_default.T PARAM */),1.0);
    tmp2546 = LessEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[376]] /* plugFlowPipe1.vol_b.state_default.T PARAM */),1e4);
    if(!(tmp2545 && tmp2546))
    {
      tmp2548 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[376]] /* plugFlowPipe1.vol_b.state_default.T PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta2549 = stringAppend(MMC_REFSTRINGLIT(tmp2547),tmp2548);
      {
        const char* assert_cond = "(plugFlowPipe1.vol_b.state_default.T >= 1.0 and plugFlowPipe1.vol_b.state_default.T <= 1e4)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/Daniel/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Media/package.mo",5870,7,5870,44,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2549));
        } else {
          FILE_INFO info = {"C:/Users/Daniel/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Media/package.mo",5870,7,5870,44,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2549));
        }
      }
      tmp2550 = 1;
    }
  }
  threadData->lastEquationSolved = 2953;
}

/*
equation index: 2954
type: ALGORITHM

  assert(plugFlowPipe1.vol_b.state_default.p >= 0.0 and plugFlowPipe1.vol_b.state_default.p <= 1e8, "Variable violating min/max constraint: 0.0 <= plugFlowPipe1.vol_b.state_default.p <= 1e8, has value: " + String(plugFlowPipe1.vol_b.state_default.p, "g"));
*/
OMC_DISABLE_OPT
static void pump_v3_basicCold_t_eqFunction_2954(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2954};
  modelica_boolean tmp2551;
  modelica_boolean tmp2552;
  static const MMC_DEFSTRINGLIT(tmp2553,101,"Variable violating min/max constraint: 0.0 <= plugFlowPipe1.vol_b.state_default.p <= 1e8, has value: ");
  modelica_string tmp2554;
  modelica_metatype tmpMeta2555;
  static int tmp2556 = 0;
  if(!tmp2556)
  {
    tmp2551 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[377]] /* plugFlowPipe1.vol_b.state_default.p PARAM */),0.0);
    tmp2552 = LessEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[377]] /* plugFlowPipe1.vol_b.state_default.p PARAM */),1e8);
    if(!(tmp2551 && tmp2552))
    {
      tmp2554 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[377]] /* plugFlowPipe1.vol_b.state_default.p PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta2555 = stringAppend(MMC_REFSTRINGLIT(tmp2553),tmp2554);
      {
        const char* assert_cond = "(plugFlowPipe1.vol_b.state_default.p >= 0.0 and plugFlowPipe1.vol_b.state_default.p <= 1e8)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/Daniel/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Media/package.mo",5869,7,5869,55,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2555));
        } else {
          FILE_INFO info = {"C:/Users/Daniel/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Media/package.mo",5869,7,5869,55,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2555));
        }
      }
      tmp2556 = 1;
    }
  }
  threadData->lastEquationSolved = 2954;
}

/*
equation index: 2955
type: ALGORITHM

  assert(plugFlowPipe1.vol_b.rho_start >= 0.0, "Variable violating min constraint: 0.0 <= plugFlowPipe1.vol_b.rho_start, has value: " + String(plugFlowPipe1.vol_b.rho_start, "g"));
*/
OMC_DISABLE_OPT
static void pump_v3_basicCold_t_eqFunction_2955(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2955};
  modelica_boolean tmp2557;
  static const MMC_DEFSTRINGLIT(tmp2558,84,"Variable violating min constraint: 0.0 <= plugFlowPipe1.vol_b.rho_start, has value: ");
  modelica_string tmp2559;
  modelica_metatype tmpMeta2560;
  static int tmp2561 = 0;
  if(!tmp2561)
  {
    tmp2557 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[375]] /* plugFlowPipe1.vol_b.rho_start PARAM */),0.0);
    if(!tmp2557)
    {
      tmp2559 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[375]] /* plugFlowPipe1.vol_b.rho_start PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta2560 = stringAppend(MMC_REFSTRINGLIT(tmp2558),tmp2559);
      {
        const char* assert_cond = "(plugFlowPipe1.vol_b.rho_start >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"E:/Daniel/sgi digital twin/Modelica/IDEAS-master/IDEAS/Fluid/MixingVolumes/BaseClasses/PartialMixingVolume.mo",92,3,93,73,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2560));
        } else {
          FILE_INFO info = {"E:/Daniel/sgi digital twin/Modelica/IDEAS-master/IDEAS/Fluid/MixingVolumes/BaseClasses/PartialMixingVolume.mo",92,3,93,73,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2560));
        }
      }
      tmp2561 = 1;
    }
  }
  threadData->lastEquationSolved = 2955;
}

/*
equation index: 2956
type: ALGORITHM

  assert(plugFlowPipe1.vol_b.dynBal.p_start >= 0.0 and plugFlowPipe1.vol_b.dynBal.p_start <= 1e8, "Variable violating min/max constraint: 0.0 <= plugFlowPipe1.vol_b.dynBal.p_start <= 1e8, has value: " + String(plugFlowPipe1.vol_b.dynBal.p_start, "g"));
*/
OMC_DISABLE_OPT
static void pump_v3_basicCold_t_eqFunction_2956(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2956};
  modelica_boolean tmp2562;
  modelica_boolean tmp2563;
  static const MMC_DEFSTRINGLIT(tmp2564,100,"Variable violating min/max constraint: 0.0 <= plugFlowPipe1.vol_b.dynBal.p_start <= 1e8, has value: ");
  modelica_string tmp2565;
  modelica_metatype tmpMeta2566;
  static int tmp2567 = 0;
  if(!tmp2567)
  {
    tmp2562 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[365]] /* plugFlowPipe1.vol_b.dynBal.p_start PARAM */),0.0);
    tmp2563 = LessEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[365]] /* plugFlowPipe1.vol_b.dynBal.p_start PARAM */),1e8);
    if(!(tmp2562 && tmp2563))
    {
      tmp2565 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[365]] /* plugFlowPipe1.vol_b.dynBal.p_start PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta2566 = stringAppend(MMC_REFSTRINGLIT(tmp2564),tmp2565);
      {
        const char* assert_cond = "(plugFlowPipe1.vol_b.dynBal.p_start >= 0.0 and plugFlowPipe1.vol_b.dynBal.p_start <= 1e8)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"E:/Daniel/sgi digital twin/Modelica/IDEAS-master/IDEAS/Fluid/Interfaces/LumpedVolumeDeclarations.mo",29,3,31,47,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2566));
        } else {
          FILE_INFO info = {"E:/Daniel/sgi digital twin/Modelica/IDEAS-master/IDEAS/Fluid/Interfaces/LumpedVolumeDeclarations.mo",29,3,31,47,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2566));
        }
      }
      tmp2567 = 1;
    }
  }
  threadData->lastEquationSolved = 2956;
}

/*
equation index: 2957
type: ALGORITHM

  assert(plugFlowPipe1.vol_b.dynBal.T_start >= 1.0 and plugFlowPipe1.vol_b.dynBal.T_start <= 1e4, "Variable violating min/max constraint: 1.0 <= plugFlowPipe1.vol_b.dynBal.T_start <= 1e4, has value: " + String(plugFlowPipe1.vol_b.dynBal.T_start, "g"));
*/
OMC_DISABLE_OPT
static void pump_v3_basicCold_t_eqFunction_2957(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2957};
  modelica_boolean tmp2568;
  modelica_boolean tmp2569;
  static const MMC_DEFSTRINGLIT(tmp2570,100,"Variable violating min/max constraint: 1.0 <= plugFlowPipe1.vol_b.dynBal.T_start <= 1e4, has value: ");
  modelica_string tmp2571;
  modelica_metatype tmpMeta2572;
  static int tmp2573 = 0;
  if(!tmp2573)
  {
    tmp2568 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[359]] /* plugFlowPipe1.vol_b.dynBal.T_start PARAM */),1.0);
    tmp2569 = LessEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[359]] /* plugFlowPipe1.vol_b.dynBal.T_start PARAM */),1e4);
    if(!(tmp2568 && tmp2569))
    {
      tmp2571 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[359]] /* plugFlowPipe1.vol_b.dynBal.T_start PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta2572 = stringAppend(MMC_REFSTRINGLIT(tmp2570),tmp2571);
      {
        const char* assert_cond = "(plugFlowPipe1.vol_b.dynBal.T_start >= 1.0 and plugFlowPipe1.vol_b.dynBal.T_start <= 1e4)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"E:/Daniel/sgi digital twin/Modelica/IDEAS-master/IDEAS/Fluid/Interfaces/LumpedVolumeDeclarations.mo",32,3,34,47,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2572));
        } else {
          FILE_INFO info = {"E:/Daniel/sgi digital twin/Modelica/IDEAS-master/IDEAS/Fluid/Interfaces/LumpedVolumeDeclarations.mo",32,3,34,47,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2572));
        }
      }
      tmp2573 = 1;
    }
  }
  threadData->lastEquationSolved = 2957;
}

/*
equation index: 2958
type: ALGORITHM

  assert(plugFlowPipe1.vol_b.X_start[1] >= 0.0 and plugFlowPipe1.vol_b.X_start[1] <= 1.0, "Variable violating min/max constraint: 0.0 <= plugFlowPipe1.vol_b.X_start[1] <= 1.0, has value: " + String(plugFlowPipe1.vol_b.X_start[1], "g"));
*/
OMC_DISABLE_OPT
static void pump_v3_basicCold_t_eqFunction_2958(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2958};
  modelica_boolean tmp2574;
  modelica_boolean tmp2575;
  static const MMC_DEFSTRINGLIT(tmp2576,96,"Variable violating min/max constraint: 0.0 <= plugFlowPipe1.vol_b.X_start[1] <= 1.0, has value: ");
  modelica_string tmp2577;
  modelica_metatype tmpMeta2578;
  static int tmp2579 = 0;
  if(!tmp2579)
  {
    tmp2574 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[357]] /* plugFlowPipe1.vol_b.X_start[1] PARAM */),0.0);
    tmp2575 = LessEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[357]] /* plugFlowPipe1.vol_b.X_start[1] PARAM */),1.0);
    if(!(tmp2574 && tmp2575))
    {
      tmp2577 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[357]] /* plugFlowPipe1.vol_b.X_start[1] PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta2578 = stringAppend(MMC_REFSTRINGLIT(tmp2576),tmp2577);
      {
        const char* assert_cond = "(plugFlowPipe1.vol_b.X_start[1] >= 0.0 and plugFlowPipe1.vol_b.X_start[1] <= 1.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"E:/Daniel/sgi digital twin/Modelica/IDEAS-master/IDEAS/Fluid/Interfaces/LumpedVolumeDeclarations.mo",35,3,38,69,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2578));
        } else {
          FILE_INFO info = {"E:/Daniel/sgi digital twin/Modelica/IDEAS-master/IDEAS/Fluid/Interfaces/LumpedVolumeDeclarations.mo",35,3,38,69,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2578));
        }
      }
      tmp2579 = 1;
    }
  }
  threadData->lastEquationSolved = 2958;
}

/*
equation index: 2959
type: ALGORITHM

  assert(plugFlowPipe1.vol_b.dynBal.X_start[1] >= 0.0 and plugFlowPipe1.vol_b.dynBal.X_start[1] <= 1.0, "Variable violating min/max constraint: 0.0 <= plugFlowPipe1.vol_b.dynBal.X_start[1] <= 1.0, has value: " + String(plugFlowPipe1.vol_b.dynBal.X_start[1], "g"));
*/
OMC_DISABLE_OPT
static void pump_v3_basicCold_t_eqFunction_2959(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2959};
  modelica_boolean tmp2580;
  modelica_boolean tmp2581;
  static const MMC_DEFSTRINGLIT(tmp2582,103,"Variable violating min/max constraint: 0.0 <= plugFlowPipe1.vol_b.dynBal.X_start[1] <= 1.0, has value: ");
  modelica_string tmp2583;
  modelica_metatype tmpMeta2584;
  static int tmp2585 = 0;
  if(!tmp2585)
  {
    tmp2580 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[360]] /* plugFlowPipe1.vol_b.dynBal.X_start[1] PARAM */),0.0);
    tmp2581 = LessEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[360]] /* plugFlowPipe1.vol_b.dynBal.X_start[1] PARAM */),1.0);
    if(!(tmp2580 && tmp2581))
    {
      tmp2583 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[360]] /* plugFlowPipe1.vol_b.dynBal.X_start[1] PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta2584 = stringAppend(MMC_REFSTRINGLIT(tmp2582),tmp2583);
      {
        const char* assert_cond = "(plugFlowPipe1.vol_b.dynBal.X_start[1] >= 0.0 and plugFlowPipe1.vol_b.dynBal.X_start[1] <= 1.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"E:/Daniel/sgi digital twin/Modelica/IDEAS-master/IDEAS/Fluid/Interfaces/LumpedVolumeDeclarations.mo",35,3,38,69,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2584));
        } else {
          FILE_INFO info = {"E:/Daniel/sgi digital twin/Modelica/IDEAS-master/IDEAS/Fluid/Interfaces/LumpedVolumeDeclarations.mo",35,3,38,69,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2584));
        }
      }
      tmp2585 = 1;
    }
  }
  threadData->lastEquationSolved = 2959;
}

/*
equation index: 2960
type: ALGORITHM

  assert(plugFlowPipe1.vol_b.dynBal.rho_default >= 0.0, "Variable violating min constraint: 0.0 <= plugFlowPipe1.vol_b.dynBal.rho_default, has value: " + String(plugFlowPipe1.vol_b.dynBal.rho_default, "g"));
*/
OMC_DISABLE_OPT
static void pump_v3_basicCold_t_eqFunction_2960(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2960};
  modelica_boolean tmp2586;
  static const MMC_DEFSTRINGLIT(tmp2587,93,"Variable violating min constraint: 0.0 <= plugFlowPipe1.vol_b.dynBal.rho_default, has value: ");
  modelica_string tmp2588;
  modelica_metatype tmpMeta2589;
  static int tmp2590 = 0;
  if(!tmp2590)
  {
    tmp2586 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[366]] /* plugFlowPipe1.vol_b.dynBal.rho_default PARAM */),0.0);
    if(!tmp2586)
    {
      tmp2588 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[366]] /* plugFlowPipe1.vol_b.dynBal.rho_default PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta2589 = stringAppend(MMC_REFSTRINGLIT(tmp2587),tmp2588);
      {
        const char* assert_cond = "(plugFlowPipe1.vol_b.dynBal.rho_default >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"E:/Daniel/sgi digital twin/Modelica/IDEAS-master/IDEAS/Fluid/Interfaces/ConservationEquation.mo",148,3,149,59,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2589));
        } else {
          FILE_INFO info = {"E:/Daniel/sgi digital twin/Modelica/IDEAS-master/IDEAS/Fluid/Interfaces/ConservationEquation.mo",148,3,149,59,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2589));
        }
      }
      tmp2590 = 1;
    }
  }
  threadData->lastEquationSolved = 2960;
}

/*
equation index: 2961
type: ALGORITHM

  assert(plugFlowPipe1.vol_b.dynBal.state_default.T >= 1.0 and plugFlowPipe1.vol_b.dynBal.state_default.T <= 1e4, "Variable violating min/max constraint: 1.0 <= plugFlowPipe1.vol_b.dynBal.state_default.T <= 1e4, has value: " + String(plugFlowPipe1.vol_b.dynBal.state_default.T, "g"));
*/
OMC_DISABLE_OPT
static void pump_v3_basicCold_t_eqFunction_2961(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2961};
  modelica_boolean tmp2591;
  modelica_boolean tmp2592;
  static const MMC_DEFSTRINGLIT(tmp2593,108,"Variable violating min/max constraint: 1.0 <= plugFlowPipe1.vol_b.dynBal.state_default.T <= 1e4, has value: ");
  modelica_string tmp2594;
  modelica_metatype tmpMeta2595;
  static int tmp2596 = 0;
  if(!tmp2596)
  {
    tmp2591 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[368]] /* plugFlowPipe1.vol_b.dynBal.state_default.T PARAM */),1.0);
    tmp2592 = LessEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[368]] /* plugFlowPipe1.vol_b.dynBal.state_default.T PARAM */),1e4);
    if(!(tmp2591 && tmp2592))
    {
      tmp2594 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[368]] /* plugFlowPipe1.vol_b.dynBal.state_default.T PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta2595 = stringAppend(MMC_REFSTRINGLIT(tmp2593),tmp2594);
      {
        const char* assert_cond = "(plugFlowPipe1.vol_b.dynBal.state_default.T >= 1.0 and plugFlowPipe1.vol_b.dynBal.state_default.T <= 1e4)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/Daniel/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Media/package.mo",5870,7,5870,44,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2595));
        } else {
          FILE_INFO info = {"C:/Users/Daniel/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Media/package.mo",5870,7,5870,44,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2595));
        }
      }
      tmp2596 = 1;
    }
  }
  threadData->lastEquationSolved = 2961;
}

/*
equation index: 2962
type: ALGORITHM

  assert(plugFlowPipe1.vol_b.dynBal.state_default.p >= 0.0 and plugFlowPipe1.vol_b.dynBal.state_default.p <= 1e8, "Variable violating min/max constraint: 0.0 <= plugFlowPipe1.vol_b.dynBal.state_default.p <= 1e8, has value: " + String(plugFlowPipe1.vol_b.dynBal.state_default.p, "g"));
*/
OMC_DISABLE_OPT
static void pump_v3_basicCold_t_eqFunction_2962(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2962};
  modelica_boolean tmp2597;
  modelica_boolean tmp2598;
  static const MMC_DEFSTRINGLIT(tmp2599,108,"Variable violating min/max constraint: 0.0 <= plugFlowPipe1.vol_b.dynBal.state_default.p <= 1e8, has value: ");
  modelica_string tmp2600;
  modelica_metatype tmpMeta2601;
  static int tmp2602 = 0;
  if(!tmp2602)
  {
    tmp2597 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[369]] /* plugFlowPipe1.vol_b.dynBal.state_default.p PARAM */),0.0);
    tmp2598 = LessEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[369]] /* plugFlowPipe1.vol_b.dynBal.state_default.p PARAM */),1e8);
    if(!(tmp2597 && tmp2598))
    {
      tmp2600 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[369]] /* plugFlowPipe1.vol_b.dynBal.state_default.p PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta2601 = stringAppend(MMC_REFSTRINGLIT(tmp2599),tmp2600);
      {
        const char* assert_cond = "(plugFlowPipe1.vol_b.dynBal.state_default.p >= 0.0 and plugFlowPipe1.vol_b.dynBal.state_default.p <= 1e8)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/Daniel/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Media/package.mo",5869,7,5869,55,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2601));
        } else {
          FILE_INFO info = {"C:/Users/Daniel/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Media/package.mo",5869,7,5869,55,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2601));
        }
      }
      tmp2602 = 1;
    }
  }
  threadData->lastEquationSolved = 2962;
}

/*
equation index: 2963
type: ALGORITHM

  assert(plugFlowPipe1.vol_b.dynBal.rho_start >= 0.0, "Variable violating min constraint: 0.0 <= plugFlowPipe1.vol_b.dynBal.rho_start, has value: " + String(plugFlowPipe1.vol_b.dynBal.rho_start, "g"));
*/
OMC_DISABLE_OPT
static void pump_v3_basicCold_t_eqFunction_2963(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2963};
  modelica_boolean tmp2603;
  static const MMC_DEFSTRINGLIT(tmp2604,91,"Variable violating min constraint: 0.0 <= plugFlowPipe1.vol_b.dynBal.rho_start, has value: ");
  modelica_string tmp2605;
  modelica_metatype tmpMeta2606;
  static int tmp2607 = 0;
  if(!tmp2607)
  {
    tmp2603 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[367]] /* plugFlowPipe1.vol_b.dynBal.rho_start PARAM */),0.0);
    if(!tmp2603)
    {
      tmp2605 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[367]] /* plugFlowPipe1.vol_b.dynBal.rho_start PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta2606 = stringAppend(MMC_REFSTRINGLIT(tmp2604),tmp2605);
      {
        const char* assert_cond = "(plugFlowPipe1.vol_b.dynBal.rho_start >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"E:/Daniel/sgi digital twin/Modelica/IDEAS-master/IDEAS/Fluid/Interfaces/ConservationEquation.mo",134,3,138,70,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2606));
        } else {
          FILE_INFO info = {"E:/Daniel/sgi digital twin/Modelica/IDEAS-master/IDEAS/Fluid/Interfaces/ConservationEquation.mo",134,3,138,70,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2606));
        }
      }
      tmp2607 = 1;
    }
  }
  threadData->lastEquationSolved = 2963;
}

/*
equation index: 2964
type: ALGORITHM

  assert(plugFlowPipe1.vol_b.dynBal.mSenFac >= 1.0, "Variable violating min constraint: 1.0 <= plugFlowPipe1.vol_b.dynBal.mSenFac, has value: " + String(plugFlowPipe1.vol_b.dynBal.mSenFac, "g"));
*/
OMC_DISABLE_OPT
static void pump_v3_basicCold_t_eqFunction_2964(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2964};
  modelica_boolean tmp2608;
  static const MMC_DEFSTRINGLIT(tmp2609,89,"Variable violating min constraint: 1.0 <= plugFlowPipe1.vol_b.dynBal.mSenFac, has value: ");
  modelica_string tmp2610;
  modelica_metatype tmpMeta2611;
  static int tmp2612 = 0;
  if(!tmp2612)
  {
    tmp2608 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[364]] /* plugFlowPipe1.vol_b.dynBal.mSenFac PARAM */),1.0);
    if(!tmp2608)
    {
      tmp2610 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[364]] /* plugFlowPipe1.vol_b.dynBal.mSenFac PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta2611 = stringAppend(MMC_REFSTRINGLIT(tmp2609),tmp2610);
      {
        const char* assert_cond = "(plugFlowPipe1.vol_b.dynBal.mSenFac >= 1.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"E:/Daniel/sgi digital twin/Modelica/IDEAS-master/IDEAS/Fluid/Interfaces/LumpedVolumeDeclarations.mo",47,3,49,39,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2611));
        } else {
          FILE_INFO info = {"E:/Daniel/sgi digital twin/Modelica/IDEAS-master/IDEAS/Fluid/Interfaces/LumpedVolumeDeclarations.mo",47,3,49,39,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2611));
        }
      }
      tmp2612 = 1;
    }
  }
  threadData->lastEquationSolved = 2964;
}

/*
equation index: 2965
type: ALGORITHM

  assert(plugFlowPipe1.vol_b.dynBal.traceDynamics >= Modelica.Fluid.Types.Dynamics.DynamicFreeInitial and plugFlowPipe1.vol_b.dynBal.traceDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, "Variable violating min/max constraint: Modelica.Fluid.Types.Dynamics.DynamicFreeInitial <= plugFlowPipe1.vol_b.dynBal.traceDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, has value: " + String(plugFlowPipe1.vol_b.dynBal.traceDynamics, "d"));
*/
OMC_DISABLE_OPT
static void pump_v3_basicCold_t_eqFunction_2965(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2965};
  modelica_boolean tmp2613;
  modelica_boolean tmp2614;
  static const MMC_DEFSTRINGLIT(tmp2615,189,"Variable violating min/max constraint: Modelica.Fluid.Types.Dynamics.DynamicFreeInitial <= plugFlowPipe1.vol_b.dynBal.traceDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, has value: ");
  modelica_string tmp2616;
  modelica_metatype tmpMeta2617;
  static int tmp2618 = 0;
  if(!tmp2618)
  {
    tmp2613 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[39]] /* plugFlowPipe1.vol_b.dynBal.traceDynamics PARAM */),1);
    tmp2614 = LessEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[39]] /* plugFlowPipe1.vol_b.dynBal.traceDynamics PARAM */),4);
    if(!(tmp2613 && tmp2614))
    {
      tmp2616 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[39]] /* plugFlowPipe1.vol_b.dynBal.traceDynamics PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta2617 = stringAppend(MMC_REFSTRINGLIT(tmp2615),tmp2616);
      {
        const char* assert_cond = "(plugFlowPipe1.vol_b.dynBal.traceDynamics >= Modelica.Fluid.Types.Dynamics.DynamicFreeInitial and plugFlowPipe1.vol_b.dynBal.traceDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"E:/Daniel/sgi digital twin/Modelica/IDEAS-master/IDEAS/Fluid/Interfaces/LumpedVolumeDeclarations.mo",24,3,26,88,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2617));
        } else {
          FILE_INFO info = {"E:/Daniel/sgi digital twin/Modelica/IDEAS-master/IDEAS/Fluid/Interfaces/LumpedVolumeDeclarations.mo",24,3,26,88,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2617));
        }
      }
      tmp2618 = 1;
    }
  }
  threadData->lastEquationSolved = 2965;
}

/*
equation index: 2966
type: ALGORITHM

  assert(plugFlowPipe1.vol_b.dynBal.substanceDynamics >= Modelica.Fluid.Types.Dynamics.DynamicFreeInitial and plugFlowPipe1.vol_b.dynBal.substanceDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, "Variable violating min/max constraint: Modelica.Fluid.Types.Dynamics.DynamicFreeInitial <= plugFlowPipe1.vol_b.dynBal.substanceDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, has value: " + String(plugFlowPipe1.vol_b.dynBal.substanceDynamics, "d"));
*/
OMC_DISABLE_OPT
static void pump_v3_basicCold_t_eqFunction_2966(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2966};
  modelica_boolean tmp2619;
  modelica_boolean tmp2620;
  static const MMC_DEFSTRINGLIT(tmp2621,193,"Variable violating min/max constraint: Modelica.Fluid.Types.Dynamics.DynamicFreeInitial <= plugFlowPipe1.vol_b.dynBal.substanceDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, has value: ");
  modelica_string tmp2622;
  modelica_metatype tmpMeta2623;
  static int tmp2624 = 0;
  if(!tmp2624)
  {
    tmp2619 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[38]] /* plugFlowPipe1.vol_b.dynBal.substanceDynamics PARAM */),1);
    tmp2620 = LessEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[38]] /* plugFlowPipe1.vol_b.dynBal.substanceDynamics PARAM */),4);
    if(!(tmp2619 && tmp2620))
    {
      tmp2622 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[38]] /* plugFlowPipe1.vol_b.dynBal.substanceDynamics PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta2623 = stringAppend(MMC_REFSTRINGLIT(tmp2621),tmp2622);
      {
        const char* assert_cond = "(plugFlowPipe1.vol_b.dynBal.substanceDynamics >= Modelica.Fluid.Types.Dynamics.DynamicFreeInitial and plugFlowPipe1.vol_b.dynBal.substanceDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"E:/Daniel/sgi digital twin/Modelica/IDEAS-master/IDEAS/Fluid/Interfaces/LumpedVolumeDeclarations.mo",21,3,23,88,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2623));
        } else {
          FILE_INFO info = {"E:/Daniel/sgi digital twin/Modelica/IDEAS-master/IDEAS/Fluid/Interfaces/LumpedVolumeDeclarations.mo",21,3,23,88,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2623));
        }
      }
      tmp2624 = 1;
    }
  }
  threadData->lastEquationSolved = 2966;
}

/*
equation index: 2967
type: ALGORITHM

  assert(plugFlowPipe1.vol_b.dynBal.massDynamics >= Modelica.Fluid.Types.Dynamics.DynamicFreeInitial and plugFlowPipe1.vol_b.dynBal.massDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, "Variable violating min/max constraint: Modelica.Fluid.Types.Dynamics.DynamicFreeInitial <= plugFlowPipe1.vol_b.dynBal.massDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, has value: " + String(plugFlowPipe1.vol_b.dynBal.massDynamics, "d"));
*/
OMC_DISABLE_OPT
static void pump_v3_basicCold_t_eqFunction_2967(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2967};
  modelica_boolean tmp2625;
  modelica_boolean tmp2626;
  static const MMC_DEFSTRINGLIT(tmp2627,188,"Variable violating min/max constraint: Modelica.Fluid.Types.Dynamics.DynamicFreeInitial <= plugFlowPipe1.vol_b.dynBal.massDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, has value: ");
  modelica_string tmp2628;
  modelica_metatype tmpMeta2629;
  static int tmp2630 = 0;
  if(!tmp2630)
  {
    tmp2625 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[36]] /* plugFlowPipe1.vol_b.dynBal.massDynamics PARAM */),1);
    tmp2626 = LessEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[36]] /* plugFlowPipe1.vol_b.dynBal.massDynamics PARAM */),4);
    if(!(tmp2625 && tmp2626))
    {
      tmp2628 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[36]] /* plugFlowPipe1.vol_b.dynBal.massDynamics PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta2629 = stringAppend(MMC_REFSTRINGLIT(tmp2627),tmp2628);
      {
        const char* assert_cond = "(plugFlowPipe1.vol_b.dynBal.massDynamics >= Modelica.Fluid.Types.Dynamics.DynamicFreeInitial and plugFlowPipe1.vol_b.dynBal.massDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"E:/Daniel/sgi digital twin/Modelica/IDEAS-master/IDEAS/Fluid/Interfaces/LumpedVolumeDeclarations.mo",18,3,20,74,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2629));
        } else {
          FILE_INFO info = {"E:/Daniel/sgi digital twin/Modelica/IDEAS-master/IDEAS/Fluid/Interfaces/LumpedVolumeDeclarations.mo",18,3,20,74,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2629));
        }
      }
      tmp2630 = 1;
    }
  }
  threadData->lastEquationSolved = 2967;
}

/*
equation index: 2968
type: ALGORITHM

  assert(plugFlowPipe1.vol_b.dynBal.energyDynamics >= Modelica.Fluid.Types.Dynamics.DynamicFreeInitial and plugFlowPipe1.vol_b.dynBal.energyDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, "Variable violating min/max constraint: Modelica.Fluid.Types.Dynamics.DynamicFreeInitial <= plugFlowPipe1.vol_b.dynBal.energyDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, has value: " + String(plugFlowPipe1.vol_b.dynBal.energyDynamics, "d"));
*/
OMC_DISABLE_OPT
static void pump_v3_basicCold_t_eqFunction_2968(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2968};
  modelica_boolean tmp2631;
  modelica_boolean tmp2632;
  static const MMC_DEFSTRINGLIT(tmp2633,190,"Variable violating min/max constraint: Modelica.Fluid.Types.Dynamics.DynamicFreeInitial <= plugFlowPipe1.vol_b.dynBal.energyDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, has value: ");
  modelica_string tmp2634;
  modelica_metatype tmpMeta2635;
  static int tmp2636 = 0;
  if(!tmp2636)
  {
    tmp2631 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[35]] /* plugFlowPipe1.vol_b.dynBal.energyDynamics PARAM */),1);
    tmp2632 = LessEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[35]] /* plugFlowPipe1.vol_b.dynBal.energyDynamics PARAM */),4);
    if(!(tmp2631 && tmp2632))
    {
      tmp2634 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[35]] /* plugFlowPipe1.vol_b.dynBal.energyDynamics PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta2635 = stringAppend(MMC_REFSTRINGLIT(tmp2633),tmp2634);
      {
        const char* assert_cond = "(plugFlowPipe1.vol_b.dynBal.energyDynamics >= Modelica.Fluid.Types.Dynamics.DynamicFreeInitial and plugFlowPipe1.vol_b.dynBal.energyDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"E:/Daniel/sgi digital twin/Modelica/IDEAS-master/IDEAS/Fluid/Interfaces/LumpedVolumeDeclarations.mo",15,3,17,88,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2635));
        } else {
          FILE_INFO info = {"E:/Daniel/sgi digital twin/Modelica/IDEAS-master/IDEAS/Fluid/Interfaces/LumpedVolumeDeclarations.mo",15,3,17,88,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2635));
        }
      }
      tmp2636 = 1;
    }
  }
  threadData->lastEquationSolved = 2968;
}

/*
equation index: 2969
type: ALGORITHM

  assert(plugFlowPipe1.vol_b.m_flow_small >= 0.0, "Variable violating min constraint: 0.0 <= plugFlowPipe1.vol_b.m_flow_small, has value: " + String(plugFlowPipe1.vol_b.m_flow_small, "g"));
*/
OMC_DISABLE_OPT
static void pump_v3_basicCold_t_eqFunction_2969(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2969};
  modelica_boolean tmp2637;
  static const MMC_DEFSTRINGLIT(tmp2638,87,"Variable violating min constraint: 0.0 <= plugFlowPipe1.vol_b.m_flow_small, has value: ");
  modelica_string tmp2639;
  modelica_metatype tmpMeta2640;
  static int tmp2641 = 0;
  if(!tmp2641)
  {
    tmp2637 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[372]] /* plugFlowPipe1.vol_b.m_flow_small PARAM */),0.0);
    if(!tmp2637)
    {
      tmp2639 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[372]] /* plugFlowPipe1.vol_b.m_flow_small PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta2640 = stringAppend(MMC_REFSTRINGLIT(tmp2638),tmp2639);
      {
        const char* assert_cond = "(plugFlowPipe1.vol_b.m_flow_small >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"E:/Daniel/sgi digital twin/Modelica/IDEAS-master/IDEAS/Fluid/MixingVolumes/BaseClasses/PartialMixingVolume.mo",25,3,27,40,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2640));
        } else {
          FILE_INFO info = {"E:/Daniel/sgi digital twin/Modelica/IDEAS-master/IDEAS/Fluid/MixingVolumes/BaseClasses/PartialMixingVolume.mo",25,3,27,40,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2640));
        }
      }
      tmp2641 = 1;
    }
  }
  threadData->lastEquationSolved = 2969;
}

/*
equation index: 2970
type: ALGORITHM

  assert(plugFlowPipe1.vol_b.m_flow_nominal >= 0.0, "Variable violating min constraint: 0.0 <= plugFlowPipe1.vol_b.m_flow_nominal, has value: " + String(plugFlowPipe1.vol_b.m_flow_nominal, "g"));
*/
OMC_DISABLE_OPT
static void pump_v3_basicCold_t_eqFunction_2970(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2970};
  modelica_boolean tmp2642;
  static const MMC_DEFSTRINGLIT(tmp2643,89,"Variable violating min constraint: 0.0 <= plugFlowPipe1.vol_b.m_flow_nominal, has value: ");
  modelica_string tmp2644;
  modelica_metatype tmpMeta2645;
  static int tmp2646 = 0;
  if(!tmp2646)
  {
    tmp2642 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[371]] /* plugFlowPipe1.vol_b.m_flow_nominal PARAM */),0.0);
    if(!tmp2642)
    {
      tmp2644 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[371]] /* plugFlowPipe1.vol_b.m_flow_nominal PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta2645 = stringAppend(MMC_REFSTRINGLIT(tmp2643),tmp2644);
      {
        const char* assert_cond = "(plugFlowPipe1.vol_b.m_flow_nominal >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"E:/Daniel/sgi digital twin/Modelica/IDEAS-master/IDEAS/Fluid/MixingVolumes/BaseClasses/PartialMixingVolume.mo",20,3,21,76,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2645));
        } else {
          FILE_INFO info = {"E:/Daniel/sgi digital twin/Modelica/IDEAS-master/IDEAS/Fluid/MixingVolumes/BaseClasses/PartialMixingVolume.mo",20,3,21,76,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2645));
        }
      }
      tmp2646 = 1;
    }
  }
  threadData->lastEquationSolved = 2970;
}

/*
equation index: 2971
type: ALGORITHM

  assert(plugFlowPipe1.vol_b.mSenFac >= 1.0, "Variable violating min constraint: 1.0 <= plugFlowPipe1.vol_b.mSenFac, has value: " + String(plugFlowPipe1.vol_b.mSenFac, "g"));
*/
OMC_DISABLE_OPT
static void pump_v3_basicCold_t_eqFunction_2971(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2971};
  modelica_boolean tmp2647;
  static const MMC_DEFSTRINGLIT(tmp2648,82,"Variable violating min constraint: 1.0 <= plugFlowPipe1.vol_b.mSenFac, has value: ");
  modelica_string tmp2649;
  modelica_metatype tmpMeta2650;
  static int tmp2651 = 0;
  if(!tmp2651)
  {
    tmp2647 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[370]] /* plugFlowPipe1.vol_b.mSenFac PARAM */),1.0);
    if(!tmp2647)
    {
      tmp2649 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[370]] /* plugFlowPipe1.vol_b.mSenFac PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta2650 = stringAppend(MMC_REFSTRINGLIT(tmp2648),tmp2649);
      {
        const char* assert_cond = "(plugFlowPipe1.vol_b.mSenFac >= 1.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"E:/Daniel/sgi digital twin/Modelica/IDEAS-master/IDEAS/Fluid/Interfaces/LumpedVolumeDeclarations.mo",47,3,49,39,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2650));
        } else {
          FILE_INFO info = {"E:/Daniel/sgi digital twin/Modelica/IDEAS-master/IDEAS/Fluid/Interfaces/LumpedVolumeDeclarations.mo",47,3,49,39,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2650));
        }
      }
      tmp2651 = 1;
    }
  }
  threadData->lastEquationSolved = 2971;
}

/*
equation index: 2972
type: ALGORITHM

  assert(plugFlowPipe1.vol_b.traceDynamics >= Modelica.Fluid.Types.Dynamics.DynamicFreeInitial and plugFlowPipe1.vol_b.traceDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, "Variable violating min/max constraint: Modelica.Fluid.Types.Dynamics.DynamicFreeInitial <= plugFlowPipe1.vol_b.traceDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, has value: " + String(plugFlowPipe1.vol_b.traceDynamics, "d"));
*/
OMC_DISABLE_OPT
static void pump_v3_basicCold_t_eqFunction_2972(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2972};
  modelica_boolean tmp2652;
  modelica_boolean tmp2653;
  static const MMC_DEFSTRINGLIT(tmp2654,182,"Variable violating min/max constraint: Modelica.Fluid.Types.Dynamics.DynamicFreeInitial <= plugFlowPipe1.vol_b.traceDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, has value: ");
  modelica_string tmp2655;
  modelica_metatype tmpMeta2656;
  static int tmp2657 = 0;
  if(!tmp2657)
  {
    tmp2652 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[44]] /* plugFlowPipe1.vol_b.traceDynamics PARAM */),1);
    tmp2653 = LessEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[44]] /* plugFlowPipe1.vol_b.traceDynamics PARAM */),4);
    if(!(tmp2652 && tmp2653))
    {
      tmp2655 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[44]] /* plugFlowPipe1.vol_b.traceDynamics PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta2656 = stringAppend(MMC_REFSTRINGLIT(tmp2654),tmp2655);
      {
        const char* assert_cond = "(plugFlowPipe1.vol_b.traceDynamics >= Modelica.Fluid.Types.Dynamics.DynamicFreeInitial and plugFlowPipe1.vol_b.traceDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"E:/Daniel/sgi digital twin/Modelica/IDEAS-master/IDEAS/Fluid/Interfaces/LumpedVolumeDeclarations.mo",24,3,26,88,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2656));
        } else {
          FILE_INFO info = {"E:/Daniel/sgi digital twin/Modelica/IDEAS-master/IDEAS/Fluid/Interfaces/LumpedVolumeDeclarations.mo",24,3,26,88,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2656));
        }
      }
      tmp2657 = 1;
    }
  }
  threadData->lastEquationSolved = 2972;
}

/*
equation index: 2973
type: ALGORITHM

  assert(plugFlowPipe1.vol_b.substanceDynamics >= Modelica.Fluid.Types.Dynamics.DynamicFreeInitial and plugFlowPipe1.vol_b.substanceDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, "Variable violating min/max constraint: Modelica.Fluid.Types.Dynamics.DynamicFreeInitial <= plugFlowPipe1.vol_b.substanceDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, has value: " + String(plugFlowPipe1.vol_b.substanceDynamics, "d"));
*/
OMC_DISABLE_OPT
static void pump_v3_basicCold_t_eqFunction_2973(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2973};
  modelica_boolean tmp2658;
  modelica_boolean tmp2659;
  static const MMC_DEFSTRINGLIT(tmp2660,186,"Variable violating min/max constraint: Modelica.Fluid.Types.Dynamics.DynamicFreeInitial <= plugFlowPipe1.vol_b.substanceDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, has value: ");
  modelica_string tmp2661;
  modelica_metatype tmpMeta2662;
  static int tmp2663 = 0;
  if(!tmp2663)
  {
    tmp2658 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[43]] /* plugFlowPipe1.vol_b.substanceDynamics PARAM */),1);
    tmp2659 = LessEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[43]] /* plugFlowPipe1.vol_b.substanceDynamics PARAM */),4);
    if(!(tmp2658 && tmp2659))
    {
      tmp2661 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[43]] /* plugFlowPipe1.vol_b.substanceDynamics PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta2662 = stringAppend(MMC_REFSTRINGLIT(tmp2660),tmp2661);
      {
        const char* assert_cond = "(plugFlowPipe1.vol_b.substanceDynamics >= Modelica.Fluid.Types.Dynamics.DynamicFreeInitial and plugFlowPipe1.vol_b.substanceDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"E:/Daniel/sgi digital twin/Modelica/IDEAS-master/IDEAS/Fluid/Interfaces/LumpedVolumeDeclarations.mo",21,3,23,88,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2662));
        } else {
          FILE_INFO info = {"E:/Daniel/sgi digital twin/Modelica/IDEAS-master/IDEAS/Fluid/Interfaces/LumpedVolumeDeclarations.mo",21,3,23,88,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2662));
        }
      }
      tmp2663 = 1;
    }
  }
  threadData->lastEquationSolved = 2973;
}

/*
equation index: 2974
type: ALGORITHM

  assert(plugFlowPipe1.vol_b.massDynamics >= Modelica.Fluid.Types.Dynamics.DynamicFreeInitial and plugFlowPipe1.vol_b.massDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, "Variable violating min/max constraint: Modelica.Fluid.Types.Dynamics.DynamicFreeInitial <= plugFlowPipe1.vol_b.massDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, has value: " + String(plugFlowPipe1.vol_b.massDynamics, "d"));
*/
OMC_DISABLE_OPT
static void pump_v3_basicCold_t_eqFunction_2974(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2974};
  modelica_boolean tmp2664;
  modelica_boolean tmp2665;
  static const MMC_DEFSTRINGLIT(tmp2666,181,"Variable violating min/max constraint: Modelica.Fluid.Types.Dynamics.DynamicFreeInitial <= plugFlowPipe1.vol_b.massDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, has value: ");
  modelica_string tmp2667;
  modelica_metatype tmpMeta2668;
  static int tmp2669 = 0;
  if(!tmp2669)
  {
    tmp2664 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[41]] /* plugFlowPipe1.vol_b.massDynamics PARAM */),1);
    tmp2665 = LessEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[41]] /* plugFlowPipe1.vol_b.massDynamics PARAM */),4);
    if(!(tmp2664 && tmp2665))
    {
      tmp2667 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[41]] /* plugFlowPipe1.vol_b.massDynamics PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta2668 = stringAppend(MMC_REFSTRINGLIT(tmp2666),tmp2667);
      {
        const char* assert_cond = "(plugFlowPipe1.vol_b.massDynamics >= Modelica.Fluid.Types.Dynamics.DynamicFreeInitial and plugFlowPipe1.vol_b.massDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"E:/Daniel/sgi digital twin/Modelica/IDEAS-master/IDEAS/Fluid/Interfaces/LumpedVolumeDeclarations.mo",18,3,20,74,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2668));
        } else {
          FILE_INFO info = {"E:/Daniel/sgi digital twin/Modelica/IDEAS-master/IDEAS/Fluid/Interfaces/LumpedVolumeDeclarations.mo",18,3,20,74,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2668));
        }
      }
      tmp2669 = 1;
    }
  }
  threadData->lastEquationSolved = 2974;
}

/*
equation index: 2975
type: ALGORITHM

  assert(plugFlowPipe1.vol_b.energyDynamics >= Modelica.Fluid.Types.Dynamics.DynamicFreeInitial and plugFlowPipe1.vol_b.energyDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, "Variable violating min/max constraint: Modelica.Fluid.Types.Dynamics.DynamicFreeInitial <= plugFlowPipe1.vol_b.energyDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, has value: " + String(plugFlowPipe1.vol_b.energyDynamics, "d"));
*/
OMC_DISABLE_OPT
static void pump_v3_basicCold_t_eqFunction_2975(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2975};
  modelica_boolean tmp2670;
  modelica_boolean tmp2671;
  static const MMC_DEFSTRINGLIT(tmp2672,183,"Variable violating min/max constraint: Modelica.Fluid.Types.Dynamics.DynamicFreeInitial <= plugFlowPipe1.vol_b.energyDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, has value: ");
  modelica_string tmp2673;
  modelica_metatype tmpMeta2674;
  static int tmp2675 = 0;
  if(!tmp2675)
  {
    tmp2670 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[40]] /* plugFlowPipe1.vol_b.energyDynamics PARAM */),1);
    tmp2671 = LessEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[40]] /* plugFlowPipe1.vol_b.energyDynamics PARAM */),4);
    if(!(tmp2670 && tmp2671))
    {
      tmp2673 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[40]] /* plugFlowPipe1.vol_b.energyDynamics PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta2674 = stringAppend(MMC_REFSTRINGLIT(tmp2672),tmp2673);
      {
        const char* assert_cond = "(plugFlowPipe1.vol_b.energyDynamics >= Modelica.Fluid.Types.Dynamics.DynamicFreeInitial and plugFlowPipe1.vol_b.energyDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"E:/Daniel/sgi digital twin/Modelica/IDEAS-master/IDEAS/Fluid/Interfaces/LumpedVolumeDeclarations.mo",15,3,17,88,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2674));
        } else {
          FILE_INFO info = {"E:/Daniel/sgi digital twin/Modelica/IDEAS-master/IDEAS/Fluid/Interfaces/LumpedVolumeDeclarations.mo",15,3,17,88,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2674));
        }
      }
      tmp2675 = 1;
    }
  }
  threadData->lastEquationSolved = 2975;
}

/*
equation index: 2976
type: ALGORITHM

  assert(plugFlowPipe1.timDel.m_flow_nominal >= 0.0, "Variable violating min constraint: 0.0 <= plugFlowPipe1.timDel.m_flow_nominal, has value: " + String(plugFlowPipe1.timDel.m_flow_nominal, "g"));
*/
OMC_DISABLE_OPT
static void pump_v3_basicCold_t_eqFunction_2976(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2976};
  modelica_boolean tmp2676;
  static const MMC_DEFSTRINGLIT(tmp2677,90,"Variable violating min constraint: 0.0 <= plugFlowPipe1.timDel.m_flow_nominal, has value: ");
  modelica_string tmp2678;
  modelica_metatype tmpMeta2679;
  static int tmp2680 = 0;
  if(!tmp2680)
  {
    tmp2676 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[323]] /* plugFlowPipe1.timDel.m_flow_nominal PARAM */),0.0);
    if(!tmp2676)
    {
      tmp2678 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[323]] /* plugFlowPipe1.timDel.m_flow_nominal PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta2679 = stringAppend(MMC_REFSTRINGLIT(tmp2677),tmp2678);
      {
        const char* assert_cond = "(plugFlowPipe1.timDel.m_flow_nominal >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"E:/Daniel/sgi digital twin/Modelica/IDEAS-master/IDEAS/Fluid/FixedResistances/BaseClasses/PlugFlowTransportDelay.mo",15,3,16,76,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2679));
        } else {
          FILE_INFO info = {"E:/Daniel/sgi digital twin/Modelica/IDEAS-master/IDEAS/Fluid/FixedResistances/BaseClasses/PlugFlowTransportDelay.mo",15,3,16,76,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2679));
        }
      }
      tmp2680 = 1;
    }
  }
  threadData->lastEquationSolved = 2976;
}

/*
equation index: 2977
type: ALGORITHM

  assert(plugFlowPipe1.timDel.rho >= 0.0, "Variable violating min constraint: 0.0 <= plugFlowPipe1.timDel.rho, has value: " + String(plugFlowPipe1.timDel.rho, "g"));
*/
OMC_DISABLE_OPT
static void pump_v3_basicCold_t_eqFunction_2977(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2977};
  modelica_boolean tmp2681;
  static const MMC_DEFSTRINGLIT(tmp2682,79,"Variable violating min constraint: 0.0 <= plugFlowPipe1.timDel.rho, has value: ");
  modelica_string tmp2683;
  modelica_metatype tmpMeta2684;
  static int tmp2685 = 0;
  if(!tmp2685)
  {
    tmp2681 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[325]] /* plugFlowPipe1.timDel.rho PARAM */),0.0);
    if(!tmp2681)
    {
      tmp2683 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[325]] /* plugFlowPipe1.timDel.rho PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta2684 = stringAppend(MMC_REFSTRINGLIT(tmp2682),tmp2683);
      {
        const char* assert_cond = "(plugFlowPipe1.timDel.rho >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"E:/Daniel/sgi digital twin/Modelica/IDEAS-master/IDEAS/Fluid/FixedResistances/BaseClasses/PlugFlowTransportDelay.mo",7,3,7,70,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2684));
        } else {
          FILE_INFO info = {"E:/Daniel/sgi digital twin/Modelica/IDEAS-master/IDEAS/Fluid/FixedResistances/BaseClasses/PlugFlowTransportDelay.mo",7,3,7,70,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2684));
        }
      }
      tmp2685 = 1;
    }
  }
  threadData->lastEquationSolved = 2977;
}

/*
equation index: 2978
type: ALGORITHM

  assert(plugFlowPipe1.senMasFlo.m_flow_small >= 0.0, "Variable violating min constraint: 0.0 <= plugFlowPipe1.senMasFlo.m_flow_small, has value: " + String(plugFlowPipe1.senMasFlo.m_flow_small, "g"));
*/
OMC_DISABLE_OPT
static void pump_v3_basicCold_t_eqFunction_2978(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2978};
  modelica_boolean tmp2686;
  static const MMC_DEFSTRINGLIT(tmp2687,91,"Variable violating min constraint: 0.0 <= plugFlowPipe1.senMasFlo.m_flow_small, has value: ");
  modelica_string tmp2688;
  modelica_metatype tmpMeta2689;
  static int tmp2690 = 0;
  if(!tmp2690)
  {
    tmp2686 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[316]] /* plugFlowPipe1.senMasFlo.m_flow_small PARAM */),0.0);
    if(!tmp2686)
    {
      tmp2688 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[316]] /* plugFlowPipe1.senMasFlo.m_flow_small PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta2689 = stringAppend(MMC_REFSTRINGLIT(tmp2687),tmp2688);
      {
        const char* assert_cond = "(plugFlowPipe1.senMasFlo.m_flow_small >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"E:/Daniel/sgi digital twin/Modelica/IDEAS-master/IDEAS/Fluid/Sensors/BaseClasses/PartialFlowSensor.mo",8,3,11,40,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2689));
        } else {
          FILE_INFO info = {"E:/Daniel/sgi digital twin/Modelica/IDEAS-master/IDEAS/Fluid/Sensors/BaseClasses/PartialFlowSensor.mo",8,3,11,40,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2689));
        }
      }
      tmp2690 = 1;
    }
  }
  threadData->lastEquationSolved = 2978;
}

/*
equation index: 2979
type: ALGORITHM

  assert(plugFlowPipe1.senMasFlo.m_flow_nominal >= 0.0, "Variable violating min constraint: 0.0 <= plugFlowPipe1.senMasFlo.m_flow_nominal, has value: " + String(plugFlowPipe1.senMasFlo.m_flow_nominal, "g"));
*/
OMC_DISABLE_OPT
static void pump_v3_basicCold_t_eqFunction_2979(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2979};
  modelica_boolean tmp2691;
  static const MMC_DEFSTRINGLIT(tmp2692,93,"Variable violating min constraint: 0.0 <= plugFlowPipe1.senMasFlo.m_flow_nominal, has value: ");
  modelica_string tmp2693;
  modelica_metatype tmpMeta2694;
  static int tmp2695 = 0;
  if(!tmp2695)
  {
    tmp2691 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[315]] /* plugFlowPipe1.senMasFlo.m_flow_nominal PARAM */),0.0);
    if(!tmp2691)
    {
      tmp2693 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[315]] /* plugFlowPipe1.senMasFlo.m_flow_nominal PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta2694 = stringAppend(MMC_REFSTRINGLIT(tmp2692),tmp2693);
      {
        const char* assert_cond = "(plugFlowPipe1.senMasFlo.m_flow_nominal >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"E:/Daniel/sgi digital twin/Modelica/IDEAS-master/IDEAS/Fluid/Sensors/BaseClasses/PartialFlowSensor.mo",5,3,7,51,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2694));
        } else {
          FILE_INFO info = {"E:/Daniel/sgi digital twin/Modelica/IDEAS-master/IDEAS/Fluid/Sensors/BaseClasses/PartialFlowSensor.mo",5,3,7,51,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2694));
        }
      }
      tmp2695 = 1;
    }
  }
  threadData->lastEquationSolved = 2979;
}

/*
equation index: 2980
type: ALGORITHM

  assert(plugFlowPipe1.heaLos_b.sta_default.p >= 0.0 and plugFlowPipe1.heaLos_b.sta_default.p <= 1e8, "Variable violating min/max constraint: 0.0 <= plugFlowPipe1.heaLos_b.sta_default.p <= 1e8, has value: " + String(plugFlowPipe1.heaLos_b.sta_default.p, "g"));
*/
OMC_DISABLE_OPT
static void pump_v3_basicCold_t_eqFunction_2980(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2980};
  modelica_boolean tmp2696;
  modelica_boolean tmp2697;
  static const MMC_DEFSTRINGLIT(tmp2698,102,"Variable violating min/max constraint: 0.0 <= plugFlowPipe1.heaLos_b.sta_default.p <= 1e8, has value: ");
  modelica_string tmp2699;
  modelica_metatype tmpMeta2700;
  static int tmp2701 = 0;
  if(!tmp2701)
  {
    tmp2696 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[279]] /* plugFlowPipe1.heaLos_b.sta_default.p PARAM */),0.0);
    tmp2697 = LessEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[279]] /* plugFlowPipe1.heaLos_b.sta_default.p PARAM */),1e8);
    if(!(tmp2696 && tmp2697))
    {
      tmp2699 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[279]] /* plugFlowPipe1.heaLos_b.sta_default.p PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta2700 = stringAppend(MMC_REFSTRINGLIT(tmp2698),tmp2699);
      {
        const char* assert_cond = "(plugFlowPipe1.heaLos_b.sta_default.p >= 0.0 and plugFlowPipe1.heaLos_b.sta_default.p <= 1e8)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/Daniel/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Media/package.mo",5869,7,5869,55,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2700));
        } else {
          FILE_INFO info = {"C:/Users/Daniel/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Media/package.mo",5869,7,5869,55,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2700));
        }
      }
      tmp2701 = 1;
    }
  }
  threadData->lastEquationSolved = 2980;
}

/*
equation index: 2981
type: ALGORITHM

  assert(plugFlowPipe1.heaLos_b.sta_default.T >= 1.0 and plugFlowPipe1.heaLos_b.sta_default.T <= 1e4, "Variable violating min/max constraint: 1.0 <= plugFlowPipe1.heaLos_b.sta_default.T <= 1e4, has value: " + String(plugFlowPipe1.heaLos_b.sta_default.T, "g"));
*/
OMC_DISABLE_OPT
static void pump_v3_basicCold_t_eqFunction_2981(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2981};
  modelica_boolean tmp2702;
  modelica_boolean tmp2703;
  static const MMC_DEFSTRINGLIT(tmp2704,102,"Variable violating min/max constraint: 1.0 <= plugFlowPipe1.heaLos_b.sta_default.T <= 1e4, has value: ");
  modelica_string tmp2705;
  modelica_metatype tmpMeta2706;
  static int tmp2707 = 0;
  if(!tmp2707)
  {
    tmp2702 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[278]] /* plugFlowPipe1.heaLos_b.sta_default.T PARAM */),1.0);
    tmp2703 = LessEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[278]] /* plugFlowPipe1.heaLos_b.sta_default.T PARAM */),1e4);
    if(!(tmp2702 && tmp2703))
    {
      tmp2705 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[278]] /* plugFlowPipe1.heaLos_b.sta_default.T PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta2706 = stringAppend(MMC_REFSTRINGLIT(tmp2704),tmp2705);
      {
        const char* assert_cond = "(plugFlowPipe1.heaLos_b.sta_default.T >= 1.0 and plugFlowPipe1.heaLos_b.sta_default.T <= 1e4)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/Daniel/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Media/package.mo",5870,7,5870,44,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2706));
        } else {
          FILE_INFO info = {"C:/Users/Daniel/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Media/package.mo",5870,7,5870,44,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2706));
        }
      }
      tmp2707 = 1;
    }
  }
  threadData->lastEquationSolved = 2981;
}

/*
equation index: 2982
type: ALGORITHM

  assert(plugFlowPipe1.heaLos_b.T_start >= 0.0, "Variable violating min constraint: 0.0 <= plugFlowPipe1.heaLos_b.T_start, has value: " + String(plugFlowPipe1.heaLos_b.T_start, "g"));
*/
OMC_DISABLE_OPT
static void pump_v3_basicCold_t_eqFunction_2982(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2982};
  modelica_boolean tmp2708;
  static const MMC_DEFSTRINGLIT(tmp2709,85,"Variable violating min constraint: 0.0 <= plugFlowPipe1.heaLos_b.T_start, has value: ");
  modelica_string tmp2710;
  modelica_metatype tmpMeta2711;
  static int tmp2712 = 0;
  if(!tmp2712)
  {
    tmp2708 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[272]] /* plugFlowPipe1.heaLos_b.T_start PARAM */),0.0);
    if(!tmp2708)
    {
      tmp2710 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[272]] /* plugFlowPipe1.heaLos_b.T_start PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta2711 = stringAppend(MMC_REFSTRINGLIT(tmp2709),tmp2710);
      {
        const char* assert_cond = "(plugFlowPipe1.heaLos_b.T_start >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"E:/Daniel/sgi digital twin/Modelica/IDEAS-master/IDEAS/Fluid/FixedResistances/BaseClasses/PlugFlowHeatLoss.mo",16,3,16,79,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2711));
        } else {
          FILE_INFO info = {"E:/Daniel/sgi digital twin/Modelica/IDEAS-master/IDEAS/Fluid/FixedResistances/BaseClasses/PlugFlowHeatLoss.mo",16,3,16,79,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2711));
        }
      }
      tmp2712 = 1;
    }
  }
  threadData->lastEquationSolved = 2982;
}

/*
equation index: 2983
type: ALGORITHM

  assert(plugFlowPipe1.m_flow_small >= 0.0, "Variable violating min constraint: 0.0 <= plugFlowPipe1.m_flow_small, has value: " + String(plugFlowPipe1.m_flow_small, "g"));
*/
OMC_DISABLE_OPT
static void pump_v3_basicCold_t_eqFunction_2983(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2983};
  modelica_boolean tmp2713;
  static const MMC_DEFSTRINGLIT(tmp2714,81,"Variable violating min constraint: 0.0 <= plugFlowPipe1.m_flow_small, has value: ");
  modelica_string tmp2715;
  modelica_metatype tmpMeta2716;
  static int tmp2717 = 0;
  if(!tmp2717)
  {
    tmp2713 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[284]] /* plugFlowPipe1.m_flow_small PARAM */),0.0);
    if(!tmp2713)
    {
      tmp2715 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[284]] /* plugFlowPipe1.m_flow_small PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta2716 = stringAppend(MMC_REFSTRINGLIT(tmp2714),tmp2715);
      {
        const char* assert_cond = "(plugFlowPipe1.m_flow_small >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"E:/Daniel/sgi digital twin/Modelica/IDEAS-master/IDEAS/Fluid/Interfaces/PartialTwoPortInterface.mo",10,3,12,40,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2716));
        } else {
          FILE_INFO info = {"E:/Daniel/sgi digital twin/Modelica/IDEAS-master/IDEAS/Fluid/Interfaces/PartialTwoPortInterface.mo",10,3,12,40,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2716));
        }
      }
      tmp2717 = 1;
    }
  }
  threadData->lastEquationSolved = 2983;
}

/*
equation index: 2984
type: ALGORITHM

  assert(plugFlowPipe1.heaLos_b.m_flow_small >= -1e5 and plugFlowPipe1.heaLos_b.m_flow_small <= 1e5, "Variable violating min/max constraint: -1e5 <= plugFlowPipe1.heaLos_b.m_flow_small <= 1e5, has value: " + String(plugFlowPipe1.heaLos_b.m_flow_small, "g"));
*/
OMC_DISABLE_OPT
static void pump_v3_basicCold_t_eqFunction_2984(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2984};
  modelica_boolean tmp2718;
  modelica_boolean tmp2719;
  static const MMC_DEFSTRINGLIT(tmp2720,102,"Variable violating min/max constraint: -1e5 <= plugFlowPipe1.heaLos_b.m_flow_small <= 1e5, has value: ");
  modelica_string tmp2721;
  modelica_metatype tmpMeta2722;
  static int tmp2723 = 0;
  if(!tmp2723)
  {
    tmp2718 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[276]] /* plugFlowPipe1.heaLos_b.m_flow_small PARAM */),-1e5);
    tmp2719 = LessEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[276]] /* plugFlowPipe1.heaLos_b.m_flow_small PARAM */),1e5);
    if(!(tmp2718 && tmp2719))
    {
      tmp2721 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[276]] /* plugFlowPipe1.heaLos_b.m_flow_small PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta2722 = stringAppend(MMC_REFSTRINGLIT(tmp2720),tmp2721);
      {
        const char* assert_cond = "(plugFlowPipe1.heaLos_b.m_flow_small >= -1e5 and plugFlowPipe1.heaLos_b.m_flow_small <= 1e5)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"E:/Daniel/sgi digital twin/Modelica/IDEAS-master/IDEAS/Fluid/Interfaces/PartialTwoPortTransport.mo",17,3,19,41,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2722));
        } else {
          FILE_INFO info = {"E:/Daniel/sgi digital twin/Modelica/IDEAS-master/IDEAS/Fluid/Interfaces/PartialTwoPortTransport.mo",17,3,19,41,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2722));
        }
      }
      tmp2723 = 1;
    }
  }
  threadData->lastEquationSolved = 2984;
}

/*
equation index: 2985
type: ALGORITHM

  assert(plugFlowPipe1.heaLos_b.m_flow_start >= -1e5 and plugFlowPipe1.heaLos_b.m_flow_start <= 1e5, "Variable violating min/max constraint: -1e5 <= plugFlowPipe1.heaLos_b.m_flow_start <= 1e5, has value: " + String(plugFlowPipe1.heaLos_b.m_flow_start, "g"));
*/
OMC_DISABLE_OPT
static void pump_v3_basicCold_t_eqFunction_2985(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2985};
  modelica_boolean tmp2724;
  modelica_boolean tmp2725;
  static const MMC_DEFSTRINGLIT(tmp2726,102,"Variable violating min/max constraint: -1e5 <= plugFlowPipe1.heaLos_b.m_flow_start <= 1e5, has value: ");
  modelica_string tmp2727;
  modelica_metatype tmpMeta2728;
  static int tmp2729 = 0;
  if(!tmp2729)
  {
    tmp2724 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[277]] /* plugFlowPipe1.heaLos_b.m_flow_start PARAM */),-1e5);
    tmp2725 = LessEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[277]] /* plugFlowPipe1.heaLos_b.m_flow_start PARAM */),1e5);
    if(!(tmp2724 && tmp2725))
    {
      tmp2727 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[277]] /* plugFlowPipe1.heaLos_b.m_flow_start PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta2728 = stringAppend(MMC_REFSTRINGLIT(tmp2726),tmp2727);
      {
        const char* assert_cond = "(plugFlowPipe1.heaLos_b.m_flow_start >= -1e5 and plugFlowPipe1.heaLos_b.m_flow_start <= 1e5)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"E:/Daniel/sgi digital twin/Modelica/IDEAS-master/IDEAS/Fluid/Interfaces/PartialTwoPortTransport.mo",12,3,14,41,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2728));
        } else {
          FILE_INFO info = {"E:/Daniel/sgi digital twin/Modelica/IDEAS-master/IDEAS/Fluid/Interfaces/PartialTwoPortTransport.mo",12,3,14,41,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2728));
        }
      }
      tmp2729 = 1;
    }
  }
  threadData->lastEquationSolved = 2985;
}

/*
equation index: 2986
type: ALGORITHM

  assert(plugFlowPipe1.heaLos_a.sta_default.p >= 0.0 and plugFlowPipe1.heaLos_a.sta_default.p <= 1e8, "Variable violating min/max constraint: 0.0 <= plugFlowPipe1.heaLos_a.sta_default.p <= 1e8, has value: " + String(plugFlowPipe1.heaLos_a.sta_default.p, "g"));
*/
OMC_DISABLE_OPT
static void pump_v3_basicCold_t_eqFunction_2986(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2986};
  modelica_boolean tmp2730;
  modelica_boolean tmp2731;
  static const MMC_DEFSTRINGLIT(tmp2732,102,"Variable violating min/max constraint: 0.0 <= plugFlowPipe1.heaLos_a.sta_default.p <= 1e8, has value: ");
  modelica_string tmp2733;
  modelica_metatype tmpMeta2734;
  static int tmp2735 = 0;
  if(!tmp2735)
  {
    tmp2730 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[268]] /* plugFlowPipe1.heaLos_a.sta_default.p PARAM */),0.0);
    tmp2731 = LessEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[268]] /* plugFlowPipe1.heaLos_a.sta_default.p PARAM */),1e8);
    if(!(tmp2730 && tmp2731))
    {
      tmp2733 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[268]] /* plugFlowPipe1.heaLos_a.sta_default.p PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta2734 = stringAppend(MMC_REFSTRINGLIT(tmp2732),tmp2733);
      {
        const char* assert_cond = "(plugFlowPipe1.heaLos_a.sta_default.p >= 0.0 and plugFlowPipe1.heaLos_a.sta_default.p <= 1e8)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/Daniel/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Media/package.mo",5869,7,5869,55,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2734));
        } else {
          FILE_INFO info = {"C:/Users/Daniel/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Media/package.mo",5869,7,5869,55,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2734));
        }
      }
      tmp2735 = 1;
    }
  }
  threadData->lastEquationSolved = 2986;
}

/*
equation index: 2987
type: ALGORITHM

  assert(plugFlowPipe1.heaLos_a.sta_default.T >= 1.0 and plugFlowPipe1.heaLos_a.sta_default.T <= 1e4, "Variable violating min/max constraint: 1.0 <= plugFlowPipe1.heaLos_a.sta_default.T <= 1e4, has value: " + String(plugFlowPipe1.heaLos_a.sta_default.T, "g"));
*/
OMC_DISABLE_OPT
static void pump_v3_basicCold_t_eqFunction_2987(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2987};
  modelica_boolean tmp2736;
  modelica_boolean tmp2737;
  static const MMC_DEFSTRINGLIT(tmp2738,102,"Variable violating min/max constraint: 1.0 <= plugFlowPipe1.heaLos_a.sta_default.T <= 1e4, has value: ");
  modelica_string tmp2739;
  modelica_metatype tmpMeta2740;
  static int tmp2741 = 0;
  if(!tmp2741)
  {
    tmp2736 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[267]] /* plugFlowPipe1.heaLos_a.sta_default.T PARAM */),1.0);
    tmp2737 = LessEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[267]] /* plugFlowPipe1.heaLos_a.sta_default.T PARAM */),1e4);
    if(!(tmp2736 && tmp2737))
    {
      tmp2739 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[267]] /* plugFlowPipe1.heaLos_a.sta_default.T PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta2740 = stringAppend(MMC_REFSTRINGLIT(tmp2738),tmp2739);
      {
        const char* assert_cond = "(plugFlowPipe1.heaLos_a.sta_default.T >= 1.0 and plugFlowPipe1.heaLos_a.sta_default.T <= 1e4)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/Daniel/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Media/package.mo",5870,7,5870,44,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2740));
        } else {
          FILE_INFO info = {"C:/Users/Daniel/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Media/package.mo",5870,7,5870,44,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2740));
        }
      }
      tmp2741 = 1;
    }
  }
  threadData->lastEquationSolved = 2987;
}

/*
equation index: 2988
type: ALGORITHM

  assert(plugFlowPipe1.T_start_in >= 0.0, "Variable violating min constraint: 0.0 <= plugFlowPipe1.T_start_in, has value: " + String(plugFlowPipe1.T_start_in, "g"));
*/
OMC_DISABLE_OPT
static void pump_v3_basicCold_t_eqFunction_2988(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2988};
  modelica_boolean tmp2742;
  static const MMC_DEFSTRINGLIT(tmp2743,79,"Variable violating min constraint: 0.0 <= plugFlowPipe1.T_start_in, has value: ");
  modelica_string tmp2744;
  modelica_metatype tmpMeta2745;
  static int tmp2746 = 0;
  if(!tmp2746)
  {
    tmp2742 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[241]] /* plugFlowPipe1.T_start_in PARAM */),0.0);
    if(!tmp2742)
    {
      tmp2744 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[241]] /* plugFlowPipe1.T_start_in PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta2745 = stringAppend(MMC_REFSTRINGLIT(tmp2743),tmp2744);
      {
        const char* assert_cond = "(plugFlowPipe1.T_start_in >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"E:/Daniel/sgi digital twin/Modelica/IDEAS-master/IDEAS/Fluid/FixedResistances/BaseClasses/PlugFlowPipe.mo",61,3,63,46,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2745));
        } else {
          FILE_INFO info = {"E:/Daniel/sgi digital twin/Modelica/IDEAS-master/IDEAS/Fluid/FixedResistances/BaseClasses/PlugFlowPipe.mo",61,3,63,46,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2745));
        }
      }
      tmp2746 = 1;
    }
  }
  threadData->lastEquationSolved = 2988;
}

/*
equation index: 2989
type: ALGORITHM

  assert(plugFlowPipe1.heaLos_a.T_start >= 0.0, "Variable violating min constraint: 0.0 <= plugFlowPipe1.heaLos_a.T_start, has value: " + String(plugFlowPipe1.heaLos_a.T_start, "g"));
*/
OMC_DISABLE_OPT
static void pump_v3_basicCold_t_eqFunction_2989(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2989};
  modelica_boolean tmp2747;
  static const MMC_DEFSTRINGLIT(tmp2748,85,"Variable violating min constraint: 0.0 <= plugFlowPipe1.heaLos_a.T_start, has value: ");
  modelica_string tmp2749;
  modelica_metatype tmpMeta2750;
  static int tmp2751 = 0;
  if(!tmp2751)
  {
    tmp2747 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[261]] /* plugFlowPipe1.heaLos_a.T_start PARAM */),0.0);
    if(!tmp2747)
    {
      tmp2749 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[261]] /* plugFlowPipe1.heaLos_a.T_start PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta2750 = stringAppend(MMC_REFSTRINGLIT(tmp2748),tmp2749);
      {
        const char* assert_cond = "(plugFlowPipe1.heaLos_a.T_start >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"E:/Daniel/sgi digital twin/Modelica/IDEAS-master/IDEAS/Fluid/FixedResistances/BaseClasses/PlugFlowHeatLoss.mo",16,3,16,79,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2750));
        } else {
          FILE_INFO info = {"E:/Daniel/sgi digital twin/Modelica/IDEAS-master/IDEAS/Fluid/FixedResistances/BaseClasses/PlugFlowHeatLoss.mo",16,3,16,79,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2750));
        }
      }
      tmp2751 = 1;
    }
  }
  threadData->lastEquationSolved = 2989;
}

/*
equation index: 2990
type: ALGORITHM

  assert(plugFlowPipe1.heaLos_a.m_flow_small >= -1e5 and plugFlowPipe1.heaLos_a.m_flow_small <= 1e5, "Variable violating min/max constraint: -1e5 <= plugFlowPipe1.heaLos_a.m_flow_small <= 1e5, has value: " + String(plugFlowPipe1.heaLos_a.m_flow_small, "g"));
*/
OMC_DISABLE_OPT
static void pump_v3_basicCold_t_eqFunction_2990(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2990};
  modelica_boolean tmp2752;
  modelica_boolean tmp2753;
  static const MMC_DEFSTRINGLIT(tmp2754,102,"Variable violating min/max constraint: -1e5 <= plugFlowPipe1.heaLos_a.m_flow_small <= 1e5, has value: ");
  modelica_string tmp2755;
  modelica_metatype tmpMeta2756;
  static int tmp2757 = 0;
  if(!tmp2757)
  {
    tmp2752 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[265]] /* plugFlowPipe1.heaLos_a.m_flow_small PARAM */),-1e5);
    tmp2753 = LessEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[265]] /* plugFlowPipe1.heaLos_a.m_flow_small PARAM */),1e5);
    if(!(tmp2752 && tmp2753))
    {
      tmp2755 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[265]] /* plugFlowPipe1.heaLos_a.m_flow_small PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta2756 = stringAppend(MMC_REFSTRINGLIT(tmp2754),tmp2755);
      {
        const char* assert_cond = "(plugFlowPipe1.heaLos_a.m_flow_small >= -1e5 and plugFlowPipe1.heaLos_a.m_flow_small <= 1e5)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"E:/Daniel/sgi digital twin/Modelica/IDEAS-master/IDEAS/Fluid/Interfaces/PartialTwoPortTransport.mo",17,3,19,41,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2756));
        } else {
          FILE_INFO info = {"E:/Daniel/sgi digital twin/Modelica/IDEAS-master/IDEAS/Fluid/Interfaces/PartialTwoPortTransport.mo",17,3,19,41,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2756));
        }
      }
      tmp2757 = 1;
    }
  }
  threadData->lastEquationSolved = 2990;
}

/*
equation index: 2991
type: ALGORITHM

  assert(plugFlowPipe1.heaLos_a.m_flow_start >= -1e5 and plugFlowPipe1.heaLos_a.m_flow_start <= 1e5, "Variable violating min/max constraint: -1e5 <= plugFlowPipe1.heaLos_a.m_flow_start <= 1e5, has value: " + String(plugFlowPipe1.heaLos_a.m_flow_start, "g"));
*/
OMC_DISABLE_OPT
static void pump_v3_basicCold_t_eqFunction_2991(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2991};
  modelica_boolean tmp2758;
  modelica_boolean tmp2759;
  static const MMC_DEFSTRINGLIT(tmp2760,102,"Variable violating min/max constraint: -1e5 <= plugFlowPipe1.heaLos_a.m_flow_start <= 1e5, has value: ");
  modelica_string tmp2761;
  modelica_metatype tmpMeta2762;
  static int tmp2763 = 0;
  if(!tmp2763)
  {
    tmp2758 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[266]] /* plugFlowPipe1.heaLos_a.m_flow_start PARAM */),-1e5);
    tmp2759 = LessEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[266]] /* plugFlowPipe1.heaLos_a.m_flow_start PARAM */),1e5);
    if(!(tmp2758 && tmp2759))
    {
      tmp2761 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[266]] /* plugFlowPipe1.heaLos_a.m_flow_start PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta2762 = stringAppend(MMC_REFSTRINGLIT(tmp2760),tmp2761);
      {
        const char* assert_cond = "(plugFlowPipe1.heaLos_a.m_flow_start >= -1e5 and plugFlowPipe1.heaLos_a.m_flow_start <= 1e5)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"E:/Daniel/sgi digital twin/Modelica/IDEAS-master/IDEAS/Fluid/Interfaces/PartialTwoPortTransport.mo",12,3,14,41,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2762));
        } else {
          FILE_INFO info = {"E:/Daniel/sgi digital twin/Modelica/IDEAS-master/IDEAS/Fluid/Interfaces/PartialTwoPortTransport.mo",12,3,14,41,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2762));
        }
      }
      tmp2763 = 1;
    }
  }
  threadData->lastEquationSolved = 2991;
}

/*
equation index: 2992
type: ALGORITHM

  assert(plugFlowPipe1.del.T_start_out >= 0.0, "Variable violating min constraint: 0.0 <= plugFlowPipe1.del.T_start_out, has value: " + String(plugFlowPipe1.del.T_start_out, "g"));
*/
OMC_DISABLE_OPT
static void pump_v3_basicCold_t_eqFunction_2992(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2992};
  modelica_boolean tmp2764;
  static const MMC_DEFSTRINGLIT(tmp2765,84,"Variable violating min constraint: 0.0 <= plugFlowPipe1.del.T_start_out, has value: ");
  modelica_string tmp2766;
  modelica_metatype tmpMeta2767;
  static int tmp2768 = 0;
  if(!tmp2768)
  {
    tmp2764 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[251]] /* plugFlowPipe1.del.T_start_out PARAM */),0.0);
    if(!tmp2764)
    {
      tmp2766 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[251]] /* plugFlowPipe1.del.T_start_out PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta2767 = stringAppend(MMC_REFSTRINGLIT(tmp2765),tmp2766);
      {
        const char* assert_cond = "(plugFlowPipe1.del.T_start_out >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"E:/Daniel/sgi digital twin/Modelica/IDEAS-master/IDEAS/Fluid/FixedResistances/BaseClasses/PlugFlow.mo",18,3,20,48,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2767));
        } else {
          FILE_INFO info = {"E:/Daniel/sgi digital twin/Modelica/IDEAS-master/IDEAS/Fluid/FixedResistances/BaseClasses/PlugFlow.mo",18,3,20,48,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2767));
        }
      }
      tmp2768 = 1;
    }
  }
  threadData->lastEquationSolved = 2992;
}

/*
equation index: 2993
type: ALGORITHM

  assert(plugFlowPipe1.del.T_start_in >= 0.0, "Variable violating min constraint: 0.0 <= plugFlowPipe1.del.T_start_in, has value: " + String(plugFlowPipe1.del.T_start_in, "g"));
*/
OMC_DISABLE_OPT
static void pump_v3_basicCold_t_eqFunction_2993(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2993};
  modelica_boolean tmp2769;
  static const MMC_DEFSTRINGLIT(tmp2770,83,"Variable violating min constraint: 0.0 <= plugFlowPipe1.del.T_start_in, has value: ");
  modelica_string tmp2771;
  modelica_metatype tmpMeta2772;
  static int tmp2773 = 0;
  if(!tmp2773)
  {
    tmp2769 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[250]] /* plugFlowPipe1.del.T_start_in PARAM */),0.0);
    if(!tmp2769)
    {
      tmp2771 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[250]] /* plugFlowPipe1.del.T_start_in PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta2772 = stringAppend(MMC_REFSTRINGLIT(tmp2770),tmp2771);
      {
        const char* assert_cond = "(plugFlowPipe1.del.T_start_in >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"E:/Daniel/sgi digital twin/Modelica/IDEAS-master/IDEAS/Fluid/FixedResistances/BaseClasses/PlugFlow.mo",15,3,17,48,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2772));
        } else {
          FILE_INFO info = {"E:/Daniel/sgi digital twin/Modelica/IDEAS-master/IDEAS/Fluid/FixedResistances/BaseClasses/PlugFlow.mo",15,3,17,48,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2772));
        }
      }
      tmp2773 = 1;
    }
  }
  threadData->lastEquationSolved = 2993;
}

/*
equation index: 2994
type: ALGORITHM

  assert(plugFlowPipe1.del.m_flow_small >= -1e5 and plugFlowPipe1.del.m_flow_small <= 1e5, "Variable violating min/max constraint: -1e5 <= plugFlowPipe1.del.m_flow_small <= 1e5, has value: " + String(plugFlowPipe1.del.m_flow_small, "g"));
*/
OMC_DISABLE_OPT
static void pump_v3_basicCold_t_eqFunction_2994(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2994};
  modelica_boolean tmp2774;
  modelica_boolean tmp2775;
  static const MMC_DEFSTRINGLIT(tmp2776,97,"Variable violating min/max constraint: -1e5 <= plugFlowPipe1.del.m_flow_small <= 1e5, has value: ");
  modelica_string tmp2777;
  modelica_metatype tmpMeta2778;
  static int tmp2779 = 0;
  if(!tmp2779)
  {
    tmp2774 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[256]] /* plugFlowPipe1.del.m_flow_small PARAM */),-1e5);
    tmp2775 = LessEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[256]] /* plugFlowPipe1.del.m_flow_small PARAM */),1e5);
    if(!(tmp2774 && tmp2775))
    {
      tmp2777 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[256]] /* plugFlowPipe1.del.m_flow_small PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta2778 = stringAppend(MMC_REFSTRINGLIT(tmp2776),tmp2777);
      {
        const char* assert_cond = "(plugFlowPipe1.del.m_flow_small >= -1e5 and plugFlowPipe1.del.m_flow_small <= 1e5)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"E:/Daniel/sgi digital twin/Modelica/IDEAS-master/IDEAS/Fluid/FixedResistances/BaseClasses/PlugFlow.mo",12,3,14,41,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2778));
        } else {
          FILE_INFO info = {"E:/Daniel/sgi digital twin/Modelica/IDEAS-master/IDEAS/Fluid/FixedResistances/BaseClasses/PlugFlow.mo",12,3,14,41,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2778));
        }
      }
      tmp2779 = 1;
    }
  }
  threadData->lastEquationSolved = 2994;
}

/*
equation index: 2995
type: ALGORITHM

  assert(plugFlowPipe1.del.length >= 0.0, "Variable violating min constraint: 0.0 <= plugFlowPipe1.del.length, has value: " + String(plugFlowPipe1.del.length, "g"));
*/
OMC_DISABLE_OPT
static void pump_v3_basicCold_t_eqFunction_2995(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2995};
  modelica_boolean tmp2780;
  static const MMC_DEFSTRINGLIT(tmp2781,79,"Variable violating min constraint: 0.0 <= plugFlowPipe1.del.length, has value: ");
  modelica_string tmp2782;
  modelica_metatype tmpMeta2783;
  static int tmp2784 = 0;
  if(!tmp2784)
  {
    tmp2780 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[255]] /* plugFlowPipe1.del.length PARAM */),0.0);
    if(!tmp2780)
    {
      tmp2782 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[255]] /* plugFlowPipe1.del.length PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta2783 = stringAppend(MMC_REFSTRINGLIT(tmp2781),tmp2782);
      {
        const char* assert_cond = "(plugFlowPipe1.del.length >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"E:/Daniel/sgi digital twin/Modelica/IDEAS-master/IDEAS/Fluid/FixedResistances/BaseClasses/PlugFlow.mo",8,3,8,65,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2783));
        } else {
          FILE_INFO info = {"E:/Daniel/sgi digital twin/Modelica/IDEAS-master/IDEAS/Fluid/FixedResistances/BaseClasses/PlugFlow.mo",8,3,8,65,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2783));
        }
      }
      tmp2784 = 1;
    }
  }
  threadData->lastEquationSolved = 2995;
}

/*
equation index: 2996
type: ALGORITHM

  assert(plugFlowPipe1.rho_default >= 0.0, "Variable violating min constraint: 0.0 <= plugFlowPipe1.rho_default, has value: " + String(plugFlowPipe1.rho_default, "g"));
*/
OMC_DISABLE_OPT
static void pump_v3_basicCold_t_eqFunction_2996(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2996};
  modelica_boolean tmp2785;
  static const MMC_DEFSTRINGLIT(tmp2786,80,"Variable violating min constraint: 0.0 <= plugFlowPipe1.rho_default, has value: ");
  modelica_string tmp2787;
  modelica_metatype tmpMeta2788;
  static int tmp2789 = 0;
  if(!tmp2789)
  {
    tmp2785 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[313]] /* plugFlowPipe1.rho_default PARAM */),0.0);
    if(!tmp2785)
    {
      tmp2787 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[313]] /* plugFlowPipe1.rho_default PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta2788 = stringAppend(MMC_REFSTRINGLIT(tmp2786),tmp2787);
      {
        const char* assert_cond = "(plugFlowPipe1.rho_default >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"E:/Daniel/sgi digital twin/Modelica/IDEAS-master/IDEAS/Fluid/FixedResistances/BaseClasses/PlugFlowPipe.mo",140,3,145,42,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2788));
        } else {
          FILE_INFO info = {"E:/Daniel/sgi digital twin/Modelica/IDEAS-master/IDEAS/Fluid/FixedResistances/BaseClasses/PlugFlowPipe.mo",140,3,145,42,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2788));
        }
      }
      tmp2789 = 1;
    }
  }
  threadData->lastEquationSolved = 2996;
}

/*
equation index: 2997
type: ALGORITHM

  assert(plugFlowPipe1.res.mu_default >= 0.0, "Variable violating min constraint: 0.0 <= plugFlowPipe1.res.mu_default, has value: " + String(plugFlowPipe1.res.mu_default, "g"));
*/
OMC_DISABLE_OPT
static void pump_v3_basicCold_t_eqFunction_2997(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2997};
  modelica_boolean tmp2790;
  static const MMC_DEFSTRINGLIT(tmp2791,83,"Variable violating min constraint: 0.0 <= plugFlowPipe1.res.mu_default, has value: ");
  modelica_string tmp2792;
  modelica_metatype tmpMeta2793;
  static int tmp2794 = 0;
  if(!tmp2794)
  {
    tmp2790 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[304]] /* plugFlowPipe1.res.mu_default PARAM */),0.0);
    if(!tmp2790)
    {
      tmp2792 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[304]] /* plugFlowPipe1.res.mu_default PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta2793 = stringAppend(MMC_REFSTRINGLIT(tmp2791),tmp2792);
      {
        const char* assert_cond = "(plugFlowPipe1.res.mu_default >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"E:/Daniel/sgi digital twin/Modelica/IDEAS-master/IDEAS/Fluid/FixedResistances/HydraulicDiameter.mo",62,3,64,45,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2793));
        } else {
          FILE_INFO info = {"E:/Daniel/sgi digital twin/Modelica/IDEAS-master/IDEAS/Fluid/FixedResistances/HydraulicDiameter.mo",62,3,64,45,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2793));
        }
      }
      tmp2794 = 1;
    }
  }
  threadData->lastEquationSolved = 2997;
}

/*
equation index: 2998
type: ALGORITHM

  assert(plugFlowPipe1.res.rho_default >= 0.0, "Variable violating min constraint: 0.0 <= plugFlowPipe1.res.rho_default, has value: " + String(plugFlowPipe1.res.rho_default, "g"));
*/
OMC_DISABLE_OPT
static void pump_v3_basicCold_t_eqFunction_2998(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2998};
  modelica_boolean tmp2795;
  static const MMC_DEFSTRINGLIT(tmp2796,84,"Variable violating min constraint: 0.0 <= plugFlowPipe1.res.rho_default, has value: ");
  modelica_string tmp2797;
  modelica_metatype tmpMeta2798;
  static int tmp2799 = 0;
  if(!tmp2799)
  {
    tmp2795 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[305]] /* plugFlowPipe1.res.rho_default PARAM */),0.0);
    if(!tmp2795)
    {
      tmp2797 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[305]] /* plugFlowPipe1.res.rho_default PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta2798 = stringAppend(MMC_REFSTRINGLIT(tmp2796),tmp2797);
      {
        const char* assert_cond = "(plugFlowPipe1.res.rho_default >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"E:/Daniel/sgi digital twin/Modelica/IDEAS-master/IDEAS/Fluid/FixedResistances/HydraulicDiameter.mo",59,3,60,35,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2798));
        } else {
          FILE_INFO info = {"E:/Daniel/sgi digital twin/Modelica/IDEAS-master/IDEAS/Fluid/FixedResistances/HydraulicDiameter.mo",59,3,60,35,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2798));
        }
      }
      tmp2799 = 1;
    }
  }
  threadData->lastEquationSolved = 2998;
}

/*
equation index: 2999
type: ALGORITHM

  assert(plugFlowPipe1.res.state_default.T >= 1.0 and plugFlowPipe1.res.state_default.T <= 1e4, "Variable violating min/max constraint: 1.0 <= plugFlowPipe1.res.state_default.T <= 1e4, has value: " + String(plugFlowPipe1.res.state_default.T, "g"));
*/
OMC_DISABLE_OPT
static void pump_v3_basicCold_t_eqFunction_2999(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,2999};
  modelica_boolean tmp2800;
  modelica_boolean tmp2801;
  static const MMC_DEFSTRINGLIT(tmp2802,99,"Variable violating min/max constraint: 1.0 <= plugFlowPipe1.res.state_default.T <= 1e4, has value: ");
  modelica_string tmp2803;
  modelica_metatype tmpMeta2804;
  static int tmp2805 = 0;
  if(!tmp2805)
  {
    tmp2800 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[309]] /* plugFlowPipe1.res.state_default.T PARAM */),1.0);
    tmp2801 = LessEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[309]] /* plugFlowPipe1.res.state_default.T PARAM */),1e4);
    if(!(tmp2800 && tmp2801))
    {
      tmp2803 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[309]] /* plugFlowPipe1.res.state_default.T PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta2804 = stringAppend(MMC_REFSTRINGLIT(tmp2802),tmp2803);
      {
        const char* assert_cond = "(plugFlowPipe1.res.state_default.T >= 1.0 and plugFlowPipe1.res.state_default.T <= 1e4)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/Daniel/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Media/package.mo",5870,7,5870,44,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2804));
        } else {
          FILE_INFO info = {"C:/Users/Daniel/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Media/package.mo",5870,7,5870,44,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2804));
        }
      }
      tmp2805 = 1;
    }
  }
  threadData->lastEquationSolved = 2999;
}

/*
equation index: 3000
type: ALGORITHM

  assert(plugFlowPipe1.res.state_default.p >= 0.0 and plugFlowPipe1.res.state_default.p <= 1e8, "Variable violating min/max constraint: 0.0 <= plugFlowPipe1.res.state_default.p <= 1e8, has value: " + String(plugFlowPipe1.res.state_default.p, "g"));
*/
OMC_DISABLE_OPT
static void pump_v3_basicCold_t_eqFunction_3000(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3000};
  modelica_boolean tmp2806;
  modelica_boolean tmp2807;
  static const MMC_DEFSTRINGLIT(tmp2808,99,"Variable violating min/max constraint: 0.0 <= plugFlowPipe1.res.state_default.p <= 1e8, has value: ");
  modelica_string tmp2809;
  modelica_metatype tmpMeta2810;
  static int tmp2811 = 0;
  if(!tmp2811)
  {
    tmp2806 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[310]] /* plugFlowPipe1.res.state_default.p PARAM */),0.0);
    tmp2807 = LessEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[310]] /* plugFlowPipe1.res.state_default.p PARAM */),1e8);
    if(!(tmp2806 && tmp2807))
    {
      tmp2809 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[310]] /* plugFlowPipe1.res.state_default.p PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta2810 = stringAppend(MMC_REFSTRINGLIT(tmp2808),tmp2809);
      {
        const char* assert_cond = "(plugFlowPipe1.res.state_default.p >= 0.0 and plugFlowPipe1.res.state_default.p <= 1e8)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/Daniel/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Media/package.mo",5869,7,5869,55,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2810));
        } else {
          FILE_INFO info = {"C:/Users/Daniel/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Media/package.mo",5869,7,5869,55,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2810));
        }
      }
      tmp2811 = 1;
    }
  }
  threadData->lastEquationSolved = 3000;
}

/*
equation index: 3001
type: ALGORITHM

  assert(plugFlowPipe1.res.fac >= 1.0, "Variable violating min constraint: 1.0 <= plugFlowPipe1.res.fac, has value: " + String(plugFlowPipe1.res.fac, "g"));
*/
OMC_DISABLE_OPT
static void pump_v3_basicCold_t_eqFunction_3001(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3001};
  modelica_boolean tmp2812;
  static const MMC_DEFSTRINGLIT(tmp2813,76,"Variable violating min constraint: 1.0 <= plugFlowPipe1.res.fac, has value: ");
  modelica_string tmp2814;
  modelica_metatype tmpMeta2815;
  static int tmp2816 = 0;
  if(!tmp2816)
  {
    tmp2812 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[297]] /* plugFlowPipe1.res.fac PARAM */),1.0);
    if(!tmp2812)
    {
      tmp2814 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[297]] /* plugFlowPipe1.res.fac PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta2815 = stringAppend(MMC_REFSTRINGLIT(tmp2813),tmp2814);
      {
        const char* assert_cond = "(plugFlowPipe1.res.fac >= 1.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"E:/Daniel/sgi digital twin/Modelica/IDEAS-master/IDEAS/Fluid/FixedResistances/HydraulicDiameter.mo",25,3,26,98,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2815));
        } else {
          FILE_INFO info = {"E:/Daniel/sgi digital twin/Modelica/IDEAS-master/IDEAS/Fluid/FixedResistances/HydraulicDiameter.mo",25,3,26,98,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2815));
        }
      }
      tmp2816 = 1;
    }
  }
  threadData->lastEquationSolved = 3001;
}

/*
equation index: 3002
type: ALGORITHM

  assert(plugFlowPipe1.res.roughness >= 0.0, "Variable violating min constraint: 0.0 <= plugFlowPipe1.res.roughness, has value: " + String(plugFlowPipe1.res.roughness, "g"));
*/
OMC_DISABLE_OPT
static void pump_v3_basicCold_t_eqFunction_3002(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3002};
  modelica_boolean tmp2817;
  static const MMC_DEFSTRINGLIT(tmp2818,82,"Variable violating min constraint: 0.0 <= plugFlowPipe1.res.roughness, has value: ");
  modelica_string tmp2819;
  modelica_metatype tmpMeta2820;
  static int tmp2821 = 0;
  if(!tmp2821)
  {
    tmp2817 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[306]] /* plugFlowPipe1.res.roughness PARAM */),0.0);
    if(!tmp2817)
    {
      tmp2819 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[306]] /* plugFlowPipe1.res.roughness PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta2820 = stringAppend(MMC_REFSTRINGLIT(tmp2818),tmp2819);
      {
        const char* assert_cond = "(plugFlowPipe1.res.roughness >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"E:/Daniel/sgi digital twin/Modelica/IDEAS-master/IDEAS/Fluid/FixedResistances/HydraulicDiameter.mo",22,3,23,106,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2820));
        } else {
          FILE_INFO info = {"E:/Daniel/sgi digital twin/Modelica/IDEAS-master/IDEAS/Fluid/FixedResistances/HydraulicDiameter.mo",22,3,23,106,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2820));
        }
      }
      tmp2821 = 1;
    }
  }
  threadData->lastEquationSolved = 3002;
}

/*
equation index: 3003
type: ALGORITHM

  assert(plugFlowPipe1.res.ReC >= 0.0, "Variable violating min constraint: 0.0 <= plugFlowPipe1.res.ReC, has value: " + String(plugFlowPipe1.res.ReC, "g"));
*/
OMC_DISABLE_OPT
static void pump_v3_basicCold_t_eqFunction_3003(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3003};
  modelica_boolean tmp2822;
  static const MMC_DEFSTRINGLIT(tmp2823,76,"Variable violating min constraint: 0.0 <= plugFlowPipe1.res.ReC, has value: ");
  modelica_string tmp2824;
  modelica_metatype tmpMeta2825;
  static int tmp2826 = 0;
  if(!tmp2826)
  {
    tmp2822 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[287]] /* plugFlowPipe1.res.ReC PARAM */),0.0);
    if(!tmp2822)
    {
      tmp2824 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[287]] /* plugFlowPipe1.res.ReC PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta2825 = stringAppend(MMC_REFSTRINGLIT(tmp2823),tmp2824);
      {
        const char* assert_cond = "(plugFlowPipe1.res.ReC >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"E:/Daniel/sgi digital twin/Modelica/IDEAS-master/IDEAS/Fluid/FixedResistances/HydraulicDiameter.mo",14,3,15,60,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2825));
        } else {
          FILE_INFO info = {"E:/Daniel/sgi digital twin/Modelica/IDEAS-master/IDEAS/Fluid/FixedResistances/HydraulicDiameter.mo",14,3,15,60,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2825));
        }
      }
      tmp2826 = 1;
    }
  }
  threadData->lastEquationSolved = 3003;
}

/*
equation index: 3004
type: ALGORITHM

  assert(plugFlowPipe1.res.deltaM >= 1e-6, "Variable violating min constraint: 1e-6 <= plugFlowPipe1.res.deltaM, has value: " + String(plugFlowPipe1.res.deltaM, "g"));
*/
OMC_DISABLE_OPT
static void pump_v3_basicCold_t_eqFunction_3004(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3004};
  modelica_boolean tmp2827;
  static const MMC_DEFSTRINGLIT(tmp2828,80,"Variable violating min constraint: 1e-6 <= plugFlowPipe1.res.deltaM, has value: ");
  modelica_string tmp2829;
  modelica_metatype tmpMeta2830;
  static int tmp2831 = 0;
  if(!tmp2831)
  {
    tmp2827 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[291]] /* plugFlowPipe1.res.deltaM PARAM */),1e-6);
    if(!tmp2827)
    {
      tmp2829 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[291]] /* plugFlowPipe1.res.deltaM PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta2830 = stringAppend(MMC_REFSTRINGLIT(tmp2828),tmp2829);
      {
        const char* assert_cond = "(plugFlowPipe1.res.deltaM >= 1e-6)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"E:/Daniel/sgi digital twin/Modelica/IDEAS-master/IDEAS/Fluid/FixedResistances/PressureDrop.mo",7,3,11,51,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2830));
        } else {
          FILE_INFO info = {"E:/Daniel/sgi digital twin/Modelica/IDEAS-master/IDEAS/Fluid/FixedResistances/PressureDrop.mo",7,3,11,51,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2830));
        }
      }
      tmp2831 = 1;
    }
  }
  threadData->lastEquationSolved = 3004;
}

/*
equation index: 3005
type: ALGORITHM

  assert(plugFlowPipe1.res.eta_default >= 0.0, "Variable violating min constraint: 0.0 <= plugFlowPipe1.res.eta_default, has value: " + String(plugFlowPipe1.res.eta_default, "g"));
*/
OMC_DISABLE_OPT
static void pump_v3_basicCold_t_eqFunction_3005(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3005};
  modelica_boolean tmp2832;
  static const MMC_DEFSTRINGLIT(tmp2833,84,"Variable violating min constraint: 0.0 <= plugFlowPipe1.res.eta_default, has value: ");
  modelica_string tmp2834;
  modelica_metatype tmpMeta2835;
  static int tmp2836 = 0;
  if(!tmp2836)
  {
    tmp2832 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[296]] /* plugFlowPipe1.res.eta_default PARAM */),0.0);
    if(!tmp2832)
    {
      tmp2834 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[296]] /* plugFlowPipe1.res.eta_default PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta2835 = stringAppend(MMC_REFSTRINGLIT(tmp2833),tmp2834);
      {
        const char* assert_cond = "(plugFlowPipe1.res.eta_default >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"E:/Daniel/sgi digital twin/Modelica/IDEAS-master/IDEAS/Fluid/BaseClasses/PartialResistance.mo",33,3,35,77,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2835));
        } else {
          FILE_INFO info = {"E:/Daniel/sgi digital twin/Modelica/IDEAS-master/IDEAS/Fluid/BaseClasses/PartialResistance.mo",33,3,35,77,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2835));
        }
      }
      tmp2836 = 1;
    }
  }
  threadData->lastEquationSolved = 3005;
}

/*
equation index: 3006
type: ALGORITHM

  assert(plugFlowPipe1.res.sta_default.T >= 1.0 and plugFlowPipe1.res.sta_default.T <= 1e4, "Variable violating min/max constraint: 1.0 <= plugFlowPipe1.res.sta_default.T <= 1e4, has value: " + String(plugFlowPipe1.res.sta_default.T, "g"));
*/
OMC_DISABLE_OPT
static void pump_v3_basicCold_t_eqFunction_3006(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3006};
  modelica_boolean tmp2837;
  modelica_boolean tmp2838;
  static const MMC_DEFSTRINGLIT(tmp2839,97,"Variable violating min/max constraint: 1.0 <= plugFlowPipe1.res.sta_default.T <= 1e4, has value: ");
  modelica_string tmp2840;
  modelica_metatype tmpMeta2841;
  static int tmp2842 = 0;
  if(!tmp2842)
  {
    tmp2837 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[307]] /* plugFlowPipe1.res.sta_default.T PARAM */),1.0);
    tmp2838 = LessEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[307]] /* plugFlowPipe1.res.sta_default.T PARAM */),1e4);
    if(!(tmp2837 && tmp2838))
    {
      tmp2840 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[307]] /* plugFlowPipe1.res.sta_default.T PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta2841 = stringAppend(MMC_REFSTRINGLIT(tmp2839),tmp2840);
      {
        const char* assert_cond = "(plugFlowPipe1.res.sta_default.T >= 1.0 and plugFlowPipe1.res.sta_default.T <= 1e4)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/Daniel/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Media/package.mo",5870,7,5870,44,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2841));
        } else {
          FILE_INFO info = {"C:/Users/Daniel/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Media/package.mo",5870,7,5870,44,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2841));
        }
      }
      tmp2842 = 1;
    }
  }
  threadData->lastEquationSolved = 3006;
}

/*
equation index: 3007
type: ALGORITHM

  assert(plugFlowPipe1.res.sta_default.p >= 0.0 and plugFlowPipe1.res.sta_default.p <= 1e8, "Variable violating min/max constraint: 0.0 <= plugFlowPipe1.res.sta_default.p <= 1e8, has value: " + String(plugFlowPipe1.res.sta_default.p, "g"));
*/
OMC_DISABLE_OPT
static void pump_v3_basicCold_t_eqFunction_3007(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3007};
  modelica_boolean tmp2843;
  modelica_boolean tmp2844;
  static const MMC_DEFSTRINGLIT(tmp2845,97,"Variable violating min/max constraint: 0.0 <= plugFlowPipe1.res.sta_default.p <= 1e8, has value: ");
  modelica_string tmp2846;
  modelica_metatype tmpMeta2847;
  static int tmp2848 = 0;
  if(!tmp2848)
  {
    tmp2843 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[308]] /* plugFlowPipe1.res.sta_default.p PARAM */),0.0);
    tmp2844 = LessEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[308]] /* plugFlowPipe1.res.sta_default.p PARAM */),1e8);
    if(!(tmp2843 && tmp2844))
    {
      tmp2846 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[308]] /* plugFlowPipe1.res.sta_default.p PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta2847 = stringAppend(MMC_REFSTRINGLIT(tmp2845),tmp2846);
      {
        const char* assert_cond = "(plugFlowPipe1.res.sta_default.p >= 0.0 and plugFlowPipe1.res.sta_default.p <= 1e8)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/Daniel/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Media/package.mo",5869,7,5869,55,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2847));
        } else {
          FILE_INFO info = {"C:/Users/Daniel/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Media/package.mo",5869,7,5869,55,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2847));
        }
      }
      tmp2848 = 1;
    }
  }
  threadData->lastEquationSolved = 3007;
}

/*
equation index: 3008
type: ALGORITHM

  assert(plugFlowPipe1.res.m_flow_turbulent >= 0.0, "Variable violating min constraint: 0.0 <= plugFlowPipe1.res.m_flow_turbulent, has value: " + String(plugFlowPipe1.res.m_flow_turbulent, "g"));
*/
OMC_DISABLE_OPT
static void pump_v3_basicCold_t_eqFunction_3008(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3008};
  modelica_boolean tmp2849;
  static const MMC_DEFSTRINGLIT(tmp2850,89,"Variable violating min constraint: 0.0 <= plugFlowPipe1.res.m_flow_turbulent, has value: ");
  modelica_string tmp2851;
  modelica_metatype tmpMeta2852;
  static int tmp2853 = 0;
  if(!tmp2853)
  {
    tmp2849 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[303]] /* plugFlowPipe1.res.m_flow_turbulent PARAM */),0.0);
    if(!tmp2849)
    {
      tmp2851 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[303]] /* plugFlowPipe1.res.m_flow_turbulent PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta2852 = stringAppend(MMC_REFSTRINGLIT(tmp2850),tmp2851);
      {
        const char* assert_cond = "(plugFlowPipe1.res.m_flow_turbulent >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"E:/Daniel/sgi digital twin/Modelica/IDEAS-master/IDEAS/Fluid/BaseClasses/PartialResistance.mo",27,3,28,53,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2852));
        } else {
          FILE_INFO info = {"E:/Daniel/sgi digital twin/Modelica/IDEAS-master/IDEAS/Fluid/BaseClasses/PartialResistance.mo",27,3,28,53,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2852));
        }
      }
      tmp2853 = 1;
    }
  }
  threadData->lastEquationSolved = 3008;
}

/*
equation index: 3009
type: ALGORITHM

  assert(plugFlowPipe1.res.m_flow_small >= 0.0, "Variable violating min constraint: 0.0 <= plugFlowPipe1.res.m_flow_small, has value: " + String(plugFlowPipe1.res.m_flow_small, "g"));
*/
OMC_DISABLE_OPT
static void pump_v3_basicCold_t_eqFunction_3009(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3009};
  modelica_boolean tmp2854;
  static const MMC_DEFSTRINGLIT(tmp2855,85,"Variable violating min constraint: 0.0 <= plugFlowPipe1.res.m_flow_small, has value: ");
  modelica_string tmp2856;
  modelica_metatype tmpMeta2857;
  static int tmp2858 = 0;
  if(!tmp2858)
  {
    tmp2854 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[302]] /* plugFlowPipe1.res.m_flow_small PARAM */),0.0);
    if(!tmp2854)
    {
      tmp2856 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[302]] /* plugFlowPipe1.res.m_flow_small PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta2857 = stringAppend(MMC_REFSTRINGLIT(tmp2855),tmp2856);
      {
        const char* assert_cond = "(plugFlowPipe1.res.m_flow_small >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"E:/Daniel/sgi digital twin/Modelica/IDEAS-master/IDEAS/Fluid/Interfaces/PartialTwoPortInterface.mo",10,3,12,40,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2857));
        } else {
          FILE_INFO info = {"E:/Daniel/sgi digital twin/Modelica/IDEAS-master/IDEAS/Fluid/Interfaces/PartialTwoPortInterface.mo",10,3,12,40,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2857));
        }
      }
      tmp2858 = 1;
    }
  }
  threadData->lastEquationSolved = 3009;
}

/*
equation index: 3010
type: ALGORITHM

  assert(plugFlowPipe1.roughness >= 0.0, "Variable violating min constraint: 0.0 <= plugFlowPipe1.roughness, has value: " + String(plugFlowPipe1.roughness, "g"));
*/
OMC_DISABLE_OPT
static void pump_v3_basicCold_t_eqFunction_3010(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3010};
  modelica_boolean tmp2859;
  static const MMC_DEFSTRINGLIT(tmp2860,78,"Variable violating min constraint: 0.0 <= plugFlowPipe1.roughness, has value: ");
  modelica_string tmp2861;
  modelica_metatype tmpMeta2862;
  static int tmp2863 = 0;
  if(!tmp2863)
  {
    tmp2859 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[314]] /* plugFlowPipe1.roughness PARAM */),0.0);
    if(!tmp2859)
    {
      tmp2861 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[314]] /* plugFlowPipe1.roughness PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta2862 = stringAppend(MMC_REFSTRINGLIT(tmp2860),tmp2861);
      {
        const char* assert_cond = "(plugFlowPipe1.roughness >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"E:/Daniel/sgi digital twin/Modelica/IDEAS-master/IDEAS/Fluid/FixedResistances/BaseClasses/PlugFlowPipe.mo",35,3,37,42,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2862));
        } else {
          FILE_INFO info = {"E:/Daniel/sgi digital twin/Modelica/IDEAS-master/IDEAS/Fluid/FixedResistances/BaseClasses/PlugFlowPipe.mo",35,3,37,42,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2862));
        }
      }
      tmp2863 = 1;
    }
  }
  threadData->lastEquationSolved = 3010;
}

/*
equation index: 3011
type: ALGORITHM

  assert(bou1.X[1] >= 0.0 and bou1.X[1] <= 1.0, "Variable violating min/max constraint: 0.0 <= bou1.X[1] <= 1.0, has value: " + String(bou1.X[1], "g"));
*/
OMC_DISABLE_OPT
static void pump_v3_basicCold_t_eqFunction_3011(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3011};
  modelica_boolean tmp2864;
  modelica_boolean tmp2865;
  static const MMC_DEFSTRINGLIT(tmp2866,75,"Variable violating min/max constraint: 0.0 <= bou1.X[1] <= 1.0, has value: ");
  modelica_string tmp2867;
  modelica_metatype tmpMeta2868;
  static int tmp2869 = 0;
  if(!tmp2869)
  {
    tmp2864 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[49]] /* bou1.X[1] PARAM */),0.0);
    tmp2865 = LessEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[49]] /* bou1.X[1] PARAM */),1.0);
    if(!(tmp2864 && tmp2865))
    {
      tmp2867 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[49]] /* bou1.X[1] PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta2868 = stringAppend(MMC_REFSTRINGLIT(tmp2866),tmp2867);
      {
        const char* assert_cond = "(bou1.X[1] >= 0.0 and bou1.X[1] <= 1.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"E:/Daniel/sgi digital twin/Modelica/IDEAS-master/IDEAS/Fluid/Sources/BaseClasses/PartialSource_Xi_C.mo",15,3,18,90,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2868));
        } else {
          FILE_INFO info = {"E:/Daniel/sgi digital twin/Modelica/IDEAS-master/IDEAS/Fluid/Sources/BaseClasses/PartialSource_Xi_C.mo",15,3,18,90,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2868));
        }
      }
      tmp2869 = 1;
    }
  }
  threadData->lastEquationSolved = 3011;
}

/*
equation index: 3012
type: ALGORITHM

  assert(bou1.flowDirection >= Modelica.Fluid.Types.PortFlowDirection.Entering and bou1.flowDirection <= Modelica.Fluid.Types.PortFlowDirection.Bidirectional, "Variable violating min/max constraint: Modelica.Fluid.Types.PortFlowDirection.Entering <= bou1.flowDirection <= Modelica.Fluid.Types.PortFlowDirection.Bidirectional, has value: " + String(bou1.flowDirection, "d"));
*/
OMC_DISABLE_OPT
static void pump_v3_basicCold_t_eqFunction_3012(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3012};
  modelica_boolean tmp2870;
  modelica_boolean tmp2871;
  static const MMC_DEFSTRINGLIT(tmp2872,177,"Variable violating min/max constraint: Modelica.Fluid.Types.PortFlowDirection.Entering <= bou1.flowDirection <= Modelica.Fluid.Types.PortFlowDirection.Bidirectional, has value: ");
  modelica_string tmp2873;
  modelica_metatype tmpMeta2874;
  static int tmp2875 = 0;
  if(!tmp2875)
  {
    tmp2870 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[1]] /* bou1.flowDirection PARAM */),1);
    tmp2871 = LessEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[1]] /* bou1.flowDirection PARAM */),3);
    if(!(tmp2870 && tmp2871))
    {
      tmp2873 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[1]] /* bou1.flowDirection PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta2874 = stringAppend(MMC_REFSTRINGLIT(tmp2872),tmp2873);
      {
        const char* assert_cond = "(bou1.flowDirection >= Modelica.Fluid.Types.PortFlowDirection.Entering and bou1.flowDirection <= Modelica.Fluid.Types.PortFlowDirection.Bidirectional)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"E:/Daniel/sgi digital twin/Modelica/IDEAS-master/IDEAS/Fluid/Sources/BaseClasses/PartialSource.mo",33,3,34,80,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2874));
        } else {
          FILE_INFO info = {"E:/Daniel/sgi digital twin/Modelica/IDEAS-master/IDEAS/Fluid/Sources/BaseClasses/PartialSource.mo",33,3,34,80,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2874));
        }
      }
      tmp2875 = 1;
    }
  }
  threadData->lastEquationSolved = 3012;
}

/*
equation index: 3013
type: ALGORITHM

  assert(senMasFlo.m_flow_small >= 0.0, "Variable violating min constraint: 0.0 <= senMasFlo.m_flow_small, has value: " + String(senMasFlo.m_flow_small, "g"));
*/
OMC_DISABLE_OPT
static void pump_v3_basicCold_t_eqFunction_3013(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3013};
  modelica_boolean tmp2876;
  static const MMC_DEFSTRINGLIT(tmp2877,77,"Variable violating min constraint: 0.0 <= senMasFlo.m_flow_small, has value: ");
  modelica_string tmp2878;
  modelica_metatype tmpMeta2879;
  static int tmp2880 = 0;
  if(!tmp2880)
  {
    tmp2876 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[953]] /* senMasFlo.m_flow_small PARAM */),0.0);
    if(!tmp2876)
    {
      tmp2878 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[953]] /* senMasFlo.m_flow_small PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta2879 = stringAppend(MMC_REFSTRINGLIT(tmp2877),tmp2878);
      {
        const char* assert_cond = "(senMasFlo.m_flow_small >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"E:/Daniel/sgi digital twin/Modelica/IDEAS-master/IDEAS/Fluid/Sensors/BaseClasses/PartialFlowSensor.mo",8,3,11,40,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2879));
        } else {
          FILE_INFO info = {"E:/Daniel/sgi digital twin/Modelica/IDEAS-master/IDEAS/Fluid/Sensors/BaseClasses/PartialFlowSensor.mo",8,3,11,40,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2879));
        }
      }
      tmp2880 = 1;
    }
  }
  threadData->lastEquationSolved = 3013;
}

/*
equation index: 3014
type: ALGORITHM

  assert(senMasFlo.m_flow_nominal >= 0.0, "Variable violating min constraint: 0.0 <= senMasFlo.m_flow_nominal, has value: " + String(senMasFlo.m_flow_nominal, "g"));
*/
OMC_DISABLE_OPT
static void pump_v3_basicCold_t_eqFunction_3014(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3014};
  modelica_boolean tmp2881;
  static const MMC_DEFSTRINGLIT(tmp2882,79,"Variable violating min constraint: 0.0 <= senMasFlo.m_flow_nominal, has value: ");
  modelica_string tmp2883;
  modelica_metatype tmpMeta2884;
  static int tmp2885 = 0;
  if(!tmp2885)
  {
    tmp2881 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[952]] /* senMasFlo.m_flow_nominal PARAM */),0.0);
    if(!tmp2881)
    {
      tmp2883 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[952]] /* senMasFlo.m_flow_nominal PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta2884 = stringAppend(MMC_REFSTRINGLIT(tmp2882),tmp2883);
      {
        const char* assert_cond = "(senMasFlo.m_flow_nominal >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"E:/Daniel/sgi digital twin/Modelica/IDEAS-master/IDEAS/Fluid/Sensors/BaseClasses/PartialFlowSensor.mo",5,3,7,51,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2884));
        } else {
          FILE_INFO info = {"E:/Daniel/sgi digital twin/Modelica/IDEAS-master/IDEAS/Fluid/Sensors/BaseClasses/PartialFlowSensor.mo",5,3,7,51,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2884));
        }
      }
      tmp2885 = 1;
    }
  }
  threadData->lastEquationSolved = 3014;
}

/*
equation index: 3015
type: ALGORITHM

  assert(senTemOut_cold.tauHeaTra >= 1.0, "Variable violating min constraint: 1.0 <= senTemOut_cold.tauHeaTra, has value: " + String(senTemOut_cold.tauHeaTra, "g"));
*/
OMC_DISABLE_OPT
static void pump_v3_basicCold_t_eqFunction_3015(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3015};
  modelica_boolean tmp2886;
  static const MMC_DEFSTRINGLIT(tmp2887,79,"Variable violating min constraint: 1.0 <= senTemOut_cold.tauHeaTra, has value: ");
  modelica_string tmp2888;
  modelica_metatype tmpMeta2889;
  static int tmp2890 = 0;
  if(!tmp2890)
  {
    tmp2886 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[971]] /* senTemOut_cold.tauHeaTra PARAM */),1.0);
    if(!tmp2886)
    {
      tmp2888 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[971]] /* senTemOut_cold.tauHeaTra PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta2889 = stringAppend(MMC_REFSTRINGLIT(tmp2887),tmp2888);
      {
        const char* assert_cond = "(senTemOut_cold.tauHeaTra >= 1.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"E:/Daniel/sgi digital twin/Modelica/IDEAS-master/IDEAS/Fluid/Sensors/TemperatureTwoPort.mo",24,3,26,68,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2889));
        } else {
          FILE_INFO info = {"E:/Daniel/sgi digital twin/Modelica/IDEAS-master/IDEAS/Fluid/Sensors/TemperatureTwoPort.mo",24,3,26,68,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2889));
        }
      }
      tmp2890 = 1;
    }
  }
  threadData->lastEquationSolved = 3015;
}

/*
equation index: 3016
type: ALGORITHM

  assert(senTemOut_cold.TAmb >= 0.0, "Variable violating min constraint: 0.0 <= senTemOut_cold.TAmb, has value: " + String(senTemOut_cold.TAmb, "g"));
*/
OMC_DISABLE_OPT
static void pump_v3_basicCold_t_eqFunction_3016(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3016};
  modelica_boolean tmp2891;
  static const MMC_DEFSTRINGLIT(tmp2892,74,"Variable violating min constraint: 0.0 <= senTemOut_cold.TAmb, has value: ");
  modelica_string tmp2893;
  modelica_metatype tmpMeta2894;
  static int tmp2895 = 0;
  if(!tmp2895)
  {
    tmp2891 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[965]] /* senTemOut_cold.TAmb PARAM */),0.0);
    if(!tmp2891)
    {
      tmp2893 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[965]] /* senTemOut_cold.TAmb PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta2894 = stringAppend(MMC_REFSTRINGLIT(tmp2892),tmp2893);
      {
        const char* assert_cond = "(senTemOut_cold.TAmb >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"E:/Daniel/sgi digital twin/Modelica/IDEAS-master/IDEAS/Fluid/Sensors/TemperatureTwoPort.mo",21,3,23,68,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2894));
        } else {
          FILE_INFO info = {"E:/Daniel/sgi digital twin/Modelica/IDEAS-master/IDEAS/Fluid/Sensors/TemperatureTwoPort.mo",21,3,23,68,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2894));
        }
      }
      tmp2895 = 1;
    }
  }
  threadData->lastEquationSolved = 3016;
}

/*
equation index: 3017
type: ALGORITHM

  assert(senTemOut_cold.T_start >= 0.0, "Variable violating min constraint: 0.0 <= senTemOut_cold.T_start, has value: " + String(senTemOut_cold.T_start, "g"));
*/
OMC_DISABLE_OPT
static void pump_v3_basicCold_t_eqFunction_3017(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3017};
  modelica_boolean tmp2896;
  static const MMC_DEFSTRINGLIT(tmp2897,77,"Variable violating min constraint: 0.0 <= senTemOut_cold.T_start, has value: ");
  modelica_string tmp2898;
  modelica_metatype tmpMeta2899;
  static int tmp2900 = 0;
  if(!tmp2900)
  {
    tmp2896 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[966]] /* senTemOut_cold.T_start PARAM */),0.0);
    if(!tmp2896)
    {
      tmp2898 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[966]] /* senTemOut_cold.T_start PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta2899 = stringAppend(MMC_REFSTRINGLIT(tmp2897),tmp2898);
      {
        const char* assert_cond = "(senTemOut_cold.T_start >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"E:/Daniel/sgi digital twin/Modelica/IDEAS-master/IDEAS/Fluid/Sensors/TemperatureTwoPort.mo",14,3,16,48,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2899));
        } else {
          FILE_INFO info = {"E:/Daniel/sgi digital twin/Modelica/IDEAS-master/IDEAS/Fluid/Sensors/TemperatureTwoPort.mo",14,3,16,48,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2899));
        }
      }
      tmp2900 = 1;
    }
  }
  threadData->lastEquationSolved = 3017;
}

/*
equation index: 3018
type: ALGORITHM

  assert(senTemOut_cold.initType >= Modelica.Blocks.Types.Init.NoInit and senTemOut_cold.initType <= Modelica.Blocks.Types.Init.InitialOutput, "Variable violating min/max constraint: Modelica.Blocks.Types.Init.NoInit <= senTemOut_cold.initType <= Modelica.Blocks.Types.Init.InitialOutput, has value: " + String(senTemOut_cold.initType, "d"));
*/
OMC_DISABLE_OPT
static void pump_v3_basicCold_t_eqFunction_3018(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3018};
  modelica_boolean tmp2901;
  modelica_boolean tmp2902;
  static const MMC_DEFSTRINGLIT(tmp2903,156,"Variable violating min/max constraint: Modelica.Blocks.Types.Init.NoInit <= senTemOut_cold.initType <= Modelica.Blocks.Types.Init.InitialOutput, has value: ");
  modelica_string tmp2904;
  modelica_metatype tmpMeta2905;
  static int tmp2906 = 0;
  if(!tmp2906)
  {
    tmp2901 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[115]] /* senTemOut_cold.initType PARAM */),1);
    tmp2902 = LessEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[115]] /* senTemOut_cold.initType PARAM */),4);
    if(!(tmp2901 && tmp2902))
    {
      tmp2904 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[115]] /* senTemOut_cold.initType PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta2905 = stringAppend(MMC_REFSTRINGLIT(tmp2903),tmp2904);
      {
        const char* assert_cond = "(senTemOut_cold.initType >= Modelica.Blocks.Types.Init.NoInit and senTemOut_cold.initType <= Modelica.Blocks.Types.Init.InitialOutput)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"E:/Daniel/sgi digital twin/Modelica/IDEAS-master/IDEAS/Fluid/Sensors/BaseClasses/PartialDynamicFlowSensor.mo",8,3,10,60,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2905));
        } else {
          FILE_INFO info = {"E:/Daniel/sgi digital twin/Modelica/IDEAS-master/IDEAS/Fluid/Sensors/BaseClasses/PartialDynamicFlowSensor.mo",8,3,10,60,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2905));
        }
      }
      tmp2906 = 1;
    }
  }
  threadData->lastEquationSolved = 3018;
}

/*
equation index: 3019
type: ALGORITHM

  assert(senTemOut_cold.tau >= 0.0, "Variable violating min constraint: 0.0 <= senTemOut_cold.tau, has value: " + String(senTemOut_cold.tau, "g"));
*/
OMC_DISABLE_OPT
static void pump_v3_basicCold_t_eqFunction_3019(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3019};
  modelica_boolean tmp2907;
  static const MMC_DEFSTRINGLIT(tmp2908,73,"Variable violating min constraint: 0.0 <= senTemOut_cold.tau, has value: ");
  modelica_string tmp2909;
  modelica_metatype tmpMeta2910;
  static int tmp2911 = 0;
  if(!tmp2911)
  {
    tmp2907 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[970]] /* senTemOut_cold.tau PARAM */),0.0);
    if(!tmp2907)
    {
      tmp2909 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[970]] /* senTemOut_cold.tau PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta2910 = stringAppend(MMC_REFSTRINGLIT(tmp2908),tmp2909);
      {
        const char* assert_cond = "(senTemOut_cold.tau >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"E:/Daniel/sgi digital twin/Modelica/IDEAS-master/IDEAS/Fluid/Sensors/BaseClasses/PartialDynamicFlowSensor.mo",6,3,7,120,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2910));
        } else {
          FILE_INFO info = {"E:/Daniel/sgi digital twin/Modelica/IDEAS-master/IDEAS/Fluid/Sensors/BaseClasses/PartialDynamicFlowSensor.mo",6,3,7,120,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2910));
        }
      }
      tmp2911 = 1;
    }
  }
  threadData->lastEquationSolved = 3019;
}

/*
equation index: 3020
type: ALGORITHM

  assert(senTemOut_cold.m_flow_small >= 0.0, "Variable violating min constraint: 0.0 <= senTemOut_cold.m_flow_small, has value: " + String(senTemOut_cold.m_flow_small, "g"));
*/
OMC_DISABLE_OPT
static void pump_v3_basicCold_t_eqFunction_3020(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3020};
  modelica_boolean tmp2912;
  static const MMC_DEFSTRINGLIT(tmp2913,82,"Variable violating min constraint: 0.0 <= senTemOut_cold.m_flow_small, has value: ");
  modelica_string tmp2914;
  modelica_metatype tmpMeta2915;
  static int tmp2916 = 0;
  if(!tmp2916)
  {
    tmp2912 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[968]] /* senTemOut_cold.m_flow_small PARAM */),0.0);
    if(!tmp2912)
    {
      tmp2914 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[968]] /* senTemOut_cold.m_flow_small PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta2915 = stringAppend(MMC_REFSTRINGLIT(tmp2913),tmp2914);
      {
        const char* assert_cond = "(senTemOut_cold.m_flow_small >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"E:/Daniel/sgi digital twin/Modelica/IDEAS-master/IDEAS/Fluid/Sensors/BaseClasses/PartialFlowSensor.mo",8,3,11,40,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2915));
        } else {
          FILE_INFO info = {"E:/Daniel/sgi digital twin/Modelica/IDEAS-master/IDEAS/Fluid/Sensors/BaseClasses/PartialFlowSensor.mo",8,3,11,40,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2915));
        }
      }
      tmp2916 = 1;
    }
  }
  threadData->lastEquationSolved = 3020;
}

/*
equation index: 3021
type: ALGORITHM

  assert(senTemOut_cold.m_flow_nominal >= 0.0, "Variable violating min constraint: 0.0 <= senTemOut_cold.m_flow_nominal, has value: " + String(senTemOut_cold.m_flow_nominal, "g"));
*/
OMC_DISABLE_OPT
static void pump_v3_basicCold_t_eqFunction_3021(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3021};
  modelica_boolean tmp2917;
  static const MMC_DEFSTRINGLIT(tmp2918,84,"Variable violating min constraint: 0.0 <= senTemOut_cold.m_flow_nominal, has value: ");
  modelica_string tmp2919;
  modelica_metatype tmpMeta2920;
  static int tmp2921 = 0;
  if(!tmp2921)
  {
    tmp2917 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[967]] /* senTemOut_cold.m_flow_nominal PARAM */),0.0);
    if(!tmp2917)
    {
      tmp2919 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[967]] /* senTemOut_cold.m_flow_nominal PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta2920 = stringAppend(MMC_REFSTRINGLIT(tmp2918),tmp2919);
      {
        const char* assert_cond = "(senTemOut_cold.m_flow_nominal >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"E:/Daniel/sgi digital twin/Modelica/IDEAS-master/IDEAS/Fluid/Sensors/BaseClasses/PartialFlowSensor.mo",5,3,7,51,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2920));
        } else {
          FILE_INFO info = {"E:/Daniel/sgi digital twin/Modelica/IDEAS-master/IDEAS/Fluid/Sensors/BaseClasses/PartialFlowSensor.mo",5,3,7,51,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2920));
        }
      }
      tmp2921 = 1;
    }
  }
  threadData->lastEquationSolved = 3021;
}

/*
equation index: 3022
type: ALGORITHM

  assert(SenTempIn_cold.tauHeaTra >= 1.0, "Variable violating min constraint: 1.0 <= SenTempIn_cold.tauHeaTra, has value: " + String(SenTempIn_cold.tauHeaTra, "g"));
*/
OMC_DISABLE_OPT
static void pump_v3_basicCold_t_eqFunction_3022(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3022};
  modelica_boolean tmp2922;
  static const MMC_DEFSTRINGLIT(tmp2923,79,"Variable violating min constraint: 1.0 <= SenTempIn_cold.tauHeaTra, has value: ");
  modelica_string tmp2924;
  modelica_metatype tmpMeta2925;
  static int tmp2926 = 0;
  if(!tmp2926)
  {
    tmp2922 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[32]] /* SenTempIn_cold.tauHeaTra PARAM */),1.0);
    if(!tmp2922)
    {
      tmp2924 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[32]] /* SenTempIn_cold.tauHeaTra PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta2925 = stringAppend(MMC_REFSTRINGLIT(tmp2923),tmp2924);
      {
        const char* assert_cond = "(SenTempIn_cold.tauHeaTra >= 1.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"E:/Daniel/sgi digital twin/Modelica/IDEAS-master/IDEAS/Fluid/Sensors/TemperatureTwoPort.mo",24,3,26,68,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2925));
        } else {
          FILE_INFO info = {"E:/Daniel/sgi digital twin/Modelica/IDEAS-master/IDEAS/Fluid/Sensors/TemperatureTwoPort.mo",24,3,26,68,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2925));
        }
      }
      tmp2926 = 1;
    }
  }
  threadData->lastEquationSolved = 3022;
}

/*
equation index: 3023
type: ALGORITHM

  assert(SenTempIn_cold.TAmb >= 0.0, "Variable violating min constraint: 0.0 <= SenTempIn_cold.TAmb, has value: " + String(SenTempIn_cold.TAmb, "g"));
*/
OMC_DISABLE_OPT
static void pump_v3_basicCold_t_eqFunction_3023(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3023};
  modelica_boolean tmp2927;
  static const MMC_DEFSTRINGLIT(tmp2928,74,"Variable violating min constraint: 0.0 <= SenTempIn_cold.TAmb, has value: ");
  modelica_string tmp2929;
  modelica_metatype tmpMeta2930;
  static int tmp2931 = 0;
  if(!tmp2931)
  {
    tmp2927 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[24]] /* SenTempIn_cold.TAmb PARAM */),0.0);
    if(!tmp2927)
    {
      tmp2929 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[24]] /* SenTempIn_cold.TAmb PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta2930 = stringAppend(MMC_REFSTRINGLIT(tmp2928),tmp2929);
      {
        const char* assert_cond = "(SenTempIn_cold.TAmb >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"E:/Daniel/sgi digital twin/Modelica/IDEAS-master/IDEAS/Fluid/Sensors/TemperatureTwoPort.mo",21,3,23,68,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2930));
        } else {
          FILE_INFO info = {"E:/Daniel/sgi digital twin/Modelica/IDEAS-master/IDEAS/Fluid/Sensors/TemperatureTwoPort.mo",21,3,23,68,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2930));
        }
      }
      tmp2931 = 1;
    }
  }
  threadData->lastEquationSolved = 3023;
}

/*
equation index: 3024
type: ALGORITHM

  assert(SenTempIn_cold.T_start >= 0.0, "Variable violating min constraint: 0.0 <= SenTempIn_cold.T_start, has value: " + String(SenTempIn_cold.T_start, "g"));
*/
OMC_DISABLE_OPT
static void pump_v3_basicCold_t_eqFunction_3024(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3024};
  modelica_boolean tmp2932;
  static const MMC_DEFSTRINGLIT(tmp2933,77,"Variable violating min constraint: 0.0 <= SenTempIn_cold.T_start, has value: ");
  modelica_string tmp2934;
  modelica_metatype tmpMeta2935;
  static int tmp2936 = 0;
  if(!tmp2936)
  {
    tmp2932 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[25]] /* SenTempIn_cold.T_start PARAM */),0.0);
    if(!tmp2932)
    {
      tmp2934 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[25]] /* SenTempIn_cold.T_start PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta2935 = stringAppend(MMC_REFSTRINGLIT(tmp2933),tmp2934);
      {
        const char* assert_cond = "(SenTempIn_cold.T_start >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"E:/Daniel/sgi digital twin/Modelica/IDEAS-master/IDEAS/Fluid/Sensors/TemperatureTwoPort.mo",14,3,16,48,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2935));
        } else {
          FILE_INFO info = {"E:/Daniel/sgi digital twin/Modelica/IDEAS-master/IDEAS/Fluid/Sensors/TemperatureTwoPort.mo",14,3,16,48,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2935));
        }
      }
      tmp2936 = 1;
    }
  }
  threadData->lastEquationSolved = 3024;
}

/*
equation index: 3025
type: ALGORITHM

  assert(SenTempIn_cold.initType >= Modelica.Blocks.Types.Init.NoInit and SenTempIn_cold.initType <= Modelica.Blocks.Types.Init.InitialOutput, "Variable violating min/max constraint: Modelica.Blocks.Types.Init.NoInit <= SenTempIn_cold.initType <= Modelica.Blocks.Types.Init.InitialOutput, has value: " + String(SenTempIn_cold.initType, "d"));
*/
OMC_DISABLE_OPT
static void pump_v3_basicCold_t_eqFunction_3025(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3025};
  modelica_boolean tmp2937;
  modelica_boolean tmp2938;
  static const MMC_DEFSTRINGLIT(tmp2939,156,"Variable violating min/max constraint: Modelica.Blocks.Types.Init.NoInit <= SenTempIn_cold.initType <= Modelica.Blocks.Types.Init.InitialOutput, has value: ");
  modelica_string tmp2940;
  modelica_metatype tmpMeta2941;
  static int tmp2942 = 0;
  if(!tmp2942)
  {
    tmp2937 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[0]] /* SenTempIn_cold.initType PARAM */),1);
    tmp2938 = LessEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[0]] /* SenTempIn_cold.initType PARAM */),4);
    if(!(tmp2937 && tmp2938))
    {
      tmp2940 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[0]] /* SenTempIn_cold.initType PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta2941 = stringAppend(MMC_REFSTRINGLIT(tmp2939),tmp2940);
      {
        const char* assert_cond = "(SenTempIn_cold.initType >= Modelica.Blocks.Types.Init.NoInit and SenTempIn_cold.initType <= Modelica.Blocks.Types.Init.InitialOutput)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"E:/Daniel/sgi digital twin/Modelica/IDEAS-master/IDEAS/Fluid/Sensors/BaseClasses/PartialDynamicFlowSensor.mo",8,3,10,60,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2941));
        } else {
          FILE_INFO info = {"E:/Daniel/sgi digital twin/Modelica/IDEAS-master/IDEAS/Fluid/Sensors/BaseClasses/PartialDynamicFlowSensor.mo",8,3,10,60,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2941));
        }
      }
      tmp2942 = 1;
    }
  }
  threadData->lastEquationSolved = 3025;
}

/*
equation index: 3026
type: ALGORITHM

  assert(SenTempIn_cold.tau >= 0.0, "Variable violating min constraint: 0.0 <= SenTempIn_cold.tau, has value: " + String(SenTempIn_cold.tau, "g"));
*/
OMC_DISABLE_OPT
static void pump_v3_basicCold_t_eqFunction_3026(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3026};
  modelica_boolean tmp2943;
  static const MMC_DEFSTRINGLIT(tmp2944,73,"Variable violating min constraint: 0.0 <= SenTempIn_cold.tau, has value: ");
  modelica_string tmp2945;
  modelica_metatype tmpMeta2946;
  static int tmp2947 = 0;
  if(!tmp2947)
  {
    tmp2943 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[31]] /* SenTempIn_cold.tau PARAM */),0.0);
    if(!tmp2943)
    {
      tmp2945 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[31]] /* SenTempIn_cold.tau PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta2946 = stringAppend(MMC_REFSTRINGLIT(tmp2944),tmp2945);
      {
        const char* assert_cond = "(SenTempIn_cold.tau >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"E:/Daniel/sgi digital twin/Modelica/IDEAS-master/IDEAS/Fluid/Sensors/BaseClasses/PartialDynamicFlowSensor.mo",6,3,7,120,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2946));
        } else {
          FILE_INFO info = {"E:/Daniel/sgi digital twin/Modelica/IDEAS-master/IDEAS/Fluid/Sensors/BaseClasses/PartialDynamicFlowSensor.mo",6,3,7,120,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2946));
        }
      }
      tmp2947 = 1;
    }
  }
  threadData->lastEquationSolved = 3026;
}

/*
equation index: 3027
type: ALGORITHM

  assert(SenTempIn_cold.m_flow_small >= 0.0, "Variable violating min constraint: 0.0 <= SenTempIn_cold.m_flow_small, has value: " + String(SenTempIn_cold.m_flow_small, "g"));
*/
OMC_DISABLE_OPT
static void pump_v3_basicCold_t_eqFunction_3027(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3027};
  modelica_boolean tmp2948;
  static const MMC_DEFSTRINGLIT(tmp2949,82,"Variable violating min constraint: 0.0 <= SenTempIn_cold.m_flow_small, has value: ");
  modelica_string tmp2950;
  modelica_metatype tmpMeta2951;
  static int tmp2952 = 0;
  if(!tmp2952)
  {
    tmp2948 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[27]] /* SenTempIn_cold.m_flow_small PARAM */),0.0);
    if(!tmp2948)
    {
      tmp2950 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[27]] /* SenTempIn_cold.m_flow_small PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta2951 = stringAppend(MMC_REFSTRINGLIT(tmp2949),tmp2950);
      {
        const char* assert_cond = "(SenTempIn_cold.m_flow_small >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"E:/Daniel/sgi digital twin/Modelica/IDEAS-master/IDEAS/Fluid/Sensors/BaseClasses/PartialFlowSensor.mo",8,3,11,40,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2951));
        } else {
          FILE_INFO info = {"E:/Daniel/sgi digital twin/Modelica/IDEAS-master/IDEAS/Fluid/Sensors/BaseClasses/PartialFlowSensor.mo",8,3,11,40,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2951));
        }
      }
      tmp2952 = 1;
    }
  }
  threadData->lastEquationSolved = 3027;
}

/*
equation index: 3028
type: ALGORITHM

  assert(SenTempIn_cold.m_flow_nominal >= 0.0, "Variable violating min constraint: 0.0 <= SenTempIn_cold.m_flow_nominal, has value: " + String(SenTempIn_cold.m_flow_nominal, "g"));
*/
OMC_DISABLE_OPT
static void pump_v3_basicCold_t_eqFunction_3028(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3028};
  modelica_boolean tmp2953;
  static const MMC_DEFSTRINGLIT(tmp2954,84,"Variable violating min constraint: 0.0 <= SenTempIn_cold.m_flow_nominal, has value: ");
  modelica_string tmp2955;
  modelica_metatype tmpMeta2956;
  static int tmp2957 = 0;
  if(!tmp2957)
  {
    tmp2953 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[26]] /* SenTempIn_cold.m_flow_nominal PARAM */),0.0);
    if(!tmp2953)
    {
      tmp2955 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[26]] /* SenTempIn_cold.m_flow_nominal PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta2956 = stringAppend(MMC_REFSTRINGLIT(tmp2954),tmp2955);
      {
        const char* assert_cond = "(SenTempIn_cold.m_flow_nominal >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"E:/Daniel/sgi digital twin/Modelica/IDEAS-master/IDEAS/Fluid/Sensors/BaseClasses/PartialFlowSensor.mo",5,3,7,51,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2956));
        } else {
          FILE_INFO info = {"E:/Daniel/sgi digital twin/Modelica/IDEAS-master/IDEAS/Fluid/Sensors/BaseClasses/PartialFlowSensor.mo",5,3,7,51,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2956));
        }
      }
      tmp2957 = 1;
    }
  }
  threadData->lastEquationSolved = 3028;
}

/*
equation index: 3029
type: ALGORITHM

  assert(plugFlowPipe.T_start_out >= 0.0, "Variable violating min constraint: 0.0 <= plugFlowPipe.T_start_out, has value: " + String(plugFlowPipe.T_start_out, "g"));
*/
OMC_DISABLE_OPT
static void pump_v3_basicCold_t_eqFunction_3029(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3029};
  modelica_boolean tmp2958;
  static const MMC_DEFSTRINGLIT(tmp2959,79,"Variable violating min constraint: 0.0 <= plugFlowPipe.T_start_out, has value: ");
  modelica_string tmp2960;
  modelica_metatype tmpMeta2961;
  static int tmp2962 = 0;
  if(!tmp2962)
  {
    tmp2958 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[86]] /* plugFlowPipe.T_start_out PARAM */),0.0);
    if(!tmp2958)
    {
      tmp2960 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[86]] /* plugFlowPipe.T_start_out PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta2961 = stringAppend(MMC_REFSTRINGLIT(tmp2959),tmp2960);
      {
        const char* assert_cond = "(plugFlowPipe.T_start_out >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"E:/Daniel/sgi digital twin/Modelica/IDEAS-master/IDEAS/Fluid/FixedResistances/BaseClasses/PlugFlowPipe.mo",64,3,66,46,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2961));
        } else {
          FILE_INFO info = {"E:/Daniel/sgi digital twin/Modelica/IDEAS-master/IDEAS/Fluid/FixedResistances/BaseClasses/PlugFlowPipe.mo",64,3,66,46,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2961));
        }
      }
      tmp2962 = 1;
    }
  }
  threadData->lastEquationSolved = 3029;
}

/*
equation index: 3030
type: ALGORITHM

  assert(plugFlowPipe.vol_a.T_start >= 1.0 and plugFlowPipe.vol_a.T_start <= 1e4, "Variable violating min/max constraint: 1.0 <= plugFlowPipe.vol_a.T_start <= 1e4, has value: " + String(plugFlowPipe.vol_a.T_start, "g"));
*/
OMC_DISABLE_OPT
static void pump_v3_basicCold_t_eqFunction_3030(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3030};
  modelica_boolean tmp2963;
  modelica_boolean tmp2964;
  static const MMC_DEFSTRINGLIT(tmp2965,92,"Variable violating min/max constraint: 1.0 <= plugFlowPipe.vol_a.T_start <= 1e4, has value: ");
  modelica_string tmp2966;
  modelica_metatype tmpMeta2967;
  static int tmp2968 = 0;
  if(!tmp2968)
  {
    tmp2963 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[180]] /* plugFlowPipe.vol_a.T_start PARAM */),1.0);
    tmp2964 = LessEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[180]] /* plugFlowPipe.vol_a.T_start PARAM */),1e4);
    if(!(tmp2963 && tmp2964))
    {
      tmp2966 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[180]] /* plugFlowPipe.vol_a.T_start PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta2967 = stringAppend(MMC_REFSTRINGLIT(tmp2965),tmp2966);
      {
        const char* assert_cond = "(plugFlowPipe.vol_a.T_start >= 1.0 and plugFlowPipe.vol_a.T_start <= 1e4)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"E:/Daniel/sgi digital twin/Modelica/IDEAS-master/IDEAS/Fluid/Interfaces/LumpedVolumeDeclarations.mo",32,3,34,47,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2967));
        } else {
          FILE_INFO info = {"E:/Daniel/sgi digital twin/Modelica/IDEAS-master/IDEAS/Fluid/Interfaces/LumpedVolumeDeclarations.mo",32,3,34,47,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2967));
        }
      }
      tmp2968 = 1;
    }
  }
  threadData->lastEquationSolved = 3030;
}

/*
equation index: 3031
type: ALGORITHM

  assert(plugFlowPipe.vol_a.state_start.T >= 1.0 and plugFlowPipe.vol_a.state_start.T <= 1e4, "Variable violating min/max constraint: 1.0 <= plugFlowPipe.vol_a.state_start.T <= 1e4, has value: " + String(plugFlowPipe.vol_a.state_start.T, "g"));
*/
OMC_DISABLE_OPT
static void pump_v3_basicCold_t_eqFunction_3031(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3031};
  modelica_boolean tmp2969;
  modelica_boolean tmp2970;
  static const MMC_DEFSTRINGLIT(tmp2971,98,"Variable violating min/max constraint: 1.0 <= plugFlowPipe.vol_a.state_start.T <= 1e4, has value: ");
  modelica_string tmp2972;
  modelica_metatype tmpMeta2973;
  static int tmp2974 = 0;
  if(!tmp2974)
  {
    tmp2969 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[210]] /* plugFlowPipe.vol_a.state_start.T PARAM */),1.0);
    tmp2970 = LessEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[210]] /* plugFlowPipe.vol_a.state_start.T PARAM */),1e4);
    if(!(tmp2969 && tmp2970))
    {
      tmp2972 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[210]] /* plugFlowPipe.vol_a.state_start.T PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta2973 = stringAppend(MMC_REFSTRINGLIT(tmp2971),tmp2972);
      {
        const char* assert_cond = "(plugFlowPipe.vol_a.state_start.T >= 1.0 and plugFlowPipe.vol_a.state_start.T <= 1e4)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/Daniel/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Media/package.mo",5870,7,5870,44,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2973));
        } else {
          FILE_INFO info = {"C:/Users/Daniel/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Media/package.mo",5870,7,5870,44,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2973));
        }
      }
      tmp2974 = 1;
    }
  }
  threadData->lastEquationSolved = 3031;
}

/*
equation index: 3032
type: ALGORITHM

  assert(plugFlowPipe.vol_a.p_start >= 0.0 and plugFlowPipe.vol_a.p_start <= 1e8, "Variable violating min/max constraint: 0.0 <= plugFlowPipe.vol_a.p_start <= 1e8, has value: " + String(plugFlowPipe.vol_a.p_start, "g"));
*/
OMC_DISABLE_OPT
static void pump_v3_basicCold_t_eqFunction_3032(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3032};
  modelica_boolean tmp2975;
  modelica_boolean tmp2976;
  static const MMC_DEFSTRINGLIT(tmp2977,92,"Variable violating min/max constraint: 0.0 <= plugFlowPipe.vol_a.p_start <= 1e8, has value: ");
  modelica_string tmp2978;
  modelica_metatype tmpMeta2979;
  static int tmp2980 = 0;
  if(!tmp2980)
  {
    tmp2975 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[203]] /* plugFlowPipe.vol_a.p_start PARAM */),0.0);
    tmp2976 = LessEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[203]] /* plugFlowPipe.vol_a.p_start PARAM */),1e8);
    if(!(tmp2975 && tmp2976))
    {
      tmp2978 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[203]] /* plugFlowPipe.vol_a.p_start PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta2979 = stringAppend(MMC_REFSTRINGLIT(tmp2977),tmp2978);
      {
        const char* assert_cond = "(plugFlowPipe.vol_a.p_start >= 0.0 and plugFlowPipe.vol_a.p_start <= 1e8)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"E:/Daniel/sgi digital twin/Modelica/IDEAS-master/IDEAS/Fluid/Interfaces/LumpedVolumeDeclarations.mo",29,3,31,47,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2979));
        } else {
          FILE_INFO info = {"E:/Daniel/sgi digital twin/Modelica/IDEAS-master/IDEAS/Fluid/Interfaces/LumpedVolumeDeclarations.mo",29,3,31,47,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2979));
        }
      }
      tmp2980 = 1;
    }
  }
  threadData->lastEquationSolved = 3032;
}

/*
equation index: 3033
type: ALGORITHM

  assert(plugFlowPipe.vol_a.state_start.p >= 0.0 and plugFlowPipe.vol_a.state_start.p <= 1e8, "Variable violating min/max constraint: 0.0 <= plugFlowPipe.vol_a.state_start.p <= 1e8, has value: " + String(plugFlowPipe.vol_a.state_start.p, "g"));
*/
OMC_DISABLE_OPT
static void pump_v3_basicCold_t_eqFunction_3033(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3033};
  modelica_boolean tmp2981;
  modelica_boolean tmp2982;
  static const MMC_DEFSTRINGLIT(tmp2983,98,"Variable violating min/max constraint: 0.0 <= plugFlowPipe.vol_a.state_start.p <= 1e8, has value: ");
  modelica_string tmp2984;
  modelica_metatype tmpMeta2985;
  static int tmp2986 = 0;
  if(!tmp2986)
  {
    tmp2981 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[211]] /* plugFlowPipe.vol_a.state_start.p PARAM */),0.0);
    tmp2982 = LessEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[211]] /* plugFlowPipe.vol_a.state_start.p PARAM */),1e8);
    if(!(tmp2981 && tmp2982))
    {
      tmp2984 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[211]] /* plugFlowPipe.vol_a.state_start.p PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta2985 = stringAppend(MMC_REFSTRINGLIT(tmp2983),tmp2984);
      {
        const char* assert_cond = "(plugFlowPipe.vol_a.state_start.p >= 0.0 and plugFlowPipe.vol_a.state_start.p <= 1e8)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/Daniel/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Media/package.mo",5869,7,5869,55,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2985));
        } else {
          FILE_INFO info = {"C:/Users/Daniel/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Media/package.mo",5869,7,5869,55,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2985));
        }
      }
      tmp2986 = 1;
    }
  }
  threadData->lastEquationSolved = 3033;
}

/*
equation index: 3034
type: ALGORITHM

  assert(plugFlowPipe.vol_a.rho_default >= 0.0, "Variable violating min constraint: 0.0 <= plugFlowPipe.vol_a.rho_default, has value: " + String(plugFlowPipe.vol_a.rho_default, "g"));
*/
OMC_DISABLE_OPT
static void pump_v3_basicCold_t_eqFunction_3034(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3034};
  modelica_boolean tmp2987;
  static const MMC_DEFSTRINGLIT(tmp2988,85,"Variable violating min constraint: 0.0 <= plugFlowPipe.vol_a.rho_default, has value: ");
  modelica_string tmp2989;
  modelica_metatype tmpMeta2990;
  static int tmp2991 = 0;
  if(!tmp2991)
  {
    tmp2987 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[206]] /* plugFlowPipe.vol_a.rho_default PARAM */),0.0);
    if(!tmp2987)
    {
      tmp2989 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[206]] /* plugFlowPipe.vol_a.rho_default PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta2990 = stringAppend(MMC_REFSTRINGLIT(tmp2988),tmp2989);
      {
        const char* assert_cond = "(plugFlowPipe.vol_a.rho_default >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"E:/Daniel/sgi digital twin/Modelica/IDEAS-master/IDEAS/Fluid/MixingVolumes/BaseClasses/PartialMixingVolume.mo",99,3,100,63,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2990));
        } else {
          FILE_INFO info = {"E:/Daniel/sgi digital twin/Modelica/IDEAS-master/IDEAS/Fluid/MixingVolumes/BaseClasses/PartialMixingVolume.mo",99,3,100,63,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2990));
        }
      }
      tmp2991 = 1;
    }
  }
  threadData->lastEquationSolved = 3034;
}

/*
equation index: 3035
type: ALGORITHM

  assert(plugFlowPipe.vol_a.state_default.T >= 1.0 and plugFlowPipe.vol_a.state_default.T <= 1e4, "Variable violating min/max constraint: 1.0 <= plugFlowPipe.vol_a.state_default.T <= 1e4, has value: " + String(plugFlowPipe.vol_a.state_default.T, "g"));
*/
OMC_DISABLE_OPT
static void pump_v3_basicCold_t_eqFunction_3035(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3035};
  modelica_boolean tmp2992;
  modelica_boolean tmp2993;
  static const MMC_DEFSTRINGLIT(tmp2994,100,"Variable violating min/max constraint: 1.0 <= plugFlowPipe.vol_a.state_default.T <= 1e4, has value: ");
  modelica_string tmp2995;
  modelica_metatype tmpMeta2996;
  static int tmp2997 = 0;
  if(!tmp2997)
  {
    tmp2992 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[208]] /* plugFlowPipe.vol_a.state_default.T PARAM */),1.0);
    tmp2993 = LessEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[208]] /* plugFlowPipe.vol_a.state_default.T PARAM */),1e4);
    if(!(tmp2992 && tmp2993))
    {
      tmp2995 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[208]] /* plugFlowPipe.vol_a.state_default.T PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta2996 = stringAppend(MMC_REFSTRINGLIT(tmp2994),tmp2995);
      {
        const char* assert_cond = "(plugFlowPipe.vol_a.state_default.T >= 1.0 and plugFlowPipe.vol_a.state_default.T <= 1e4)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/Daniel/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Media/package.mo",5870,7,5870,44,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2996));
        } else {
          FILE_INFO info = {"C:/Users/Daniel/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Media/package.mo",5870,7,5870,44,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta2996));
        }
      }
      tmp2997 = 1;
    }
  }
  threadData->lastEquationSolved = 3035;
}

/*
equation index: 3036
type: ALGORITHM

  assert(plugFlowPipe.vol_a.state_default.p >= 0.0 and plugFlowPipe.vol_a.state_default.p <= 1e8, "Variable violating min/max constraint: 0.0 <= plugFlowPipe.vol_a.state_default.p <= 1e8, has value: " + String(plugFlowPipe.vol_a.state_default.p, "g"));
*/
OMC_DISABLE_OPT
static void pump_v3_basicCold_t_eqFunction_3036(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3036};
  modelica_boolean tmp2998;
  modelica_boolean tmp2999;
  static const MMC_DEFSTRINGLIT(tmp3000,100,"Variable violating min/max constraint: 0.0 <= plugFlowPipe.vol_a.state_default.p <= 1e8, has value: ");
  modelica_string tmp3001;
  modelica_metatype tmpMeta3002;
  static int tmp3003 = 0;
  if(!tmp3003)
  {
    tmp2998 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[209]] /* plugFlowPipe.vol_a.state_default.p PARAM */),0.0);
    tmp2999 = LessEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[209]] /* plugFlowPipe.vol_a.state_default.p PARAM */),1e8);
    if(!(tmp2998 && tmp2999))
    {
      tmp3001 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[209]] /* plugFlowPipe.vol_a.state_default.p PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta3002 = stringAppend(MMC_REFSTRINGLIT(tmp3000),tmp3001);
      {
        const char* assert_cond = "(plugFlowPipe.vol_a.state_default.p >= 0.0 and plugFlowPipe.vol_a.state_default.p <= 1e8)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/Daniel/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Media/package.mo",5869,7,5869,55,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta3002));
        } else {
          FILE_INFO info = {"C:/Users/Daniel/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Media/package.mo",5869,7,5869,55,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta3002));
        }
      }
      tmp3003 = 1;
    }
  }
  threadData->lastEquationSolved = 3036;
}

/*
equation index: 3037
type: ALGORITHM

  assert(plugFlowPipe.vol_a.rho_start >= 0.0, "Variable violating min constraint: 0.0 <= plugFlowPipe.vol_a.rho_start, has value: " + String(plugFlowPipe.vol_a.rho_start, "g"));
*/
OMC_DISABLE_OPT
static void pump_v3_basicCold_t_eqFunction_3037(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3037};
  modelica_boolean tmp3004;
  static const MMC_DEFSTRINGLIT(tmp3005,83,"Variable violating min constraint: 0.0 <= plugFlowPipe.vol_a.rho_start, has value: ");
  modelica_string tmp3006;
  modelica_metatype tmpMeta3007;
  static int tmp3008 = 0;
  if(!tmp3008)
  {
    tmp3004 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[207]] /* plugFlowPipe.vol_a.rho_start PARAM */),0.0);
    if(!tmp3004)
    {
      tmp3006 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[207]] /* plugFlowPipe.vol_a.rho_start PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta3007 = stringAppend(MMC_REFSTRINGLIT(tmp3005),tmp3006);
      {
        const char* assert_cond = "(plugFlowPipe.vol_a.rho_start >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"E:/Daniel/sgi digital twin/Modelica/IDEAS-master/IDEAS/Fluid/MixingVolumes/BaseClasses/PartialMixingVolume.mo",92,3,93,73,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta3007));
        } else {
          FILE_INFO info = {"E:/Daniel/sgi digital twin/Modelica/IDEAS-master/IDEAS/Fluid/MixingVolumes/BaseClasses/PartialMixingVolume.mo",92,3,93,73,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta3007));
        }
      }
      tmp3008 = 1;
    }
  }
  threadData->lastEquationSolved = 3037;
}

/*
equation index: 3038
type: ALGORITHM

  assert(plugFlowPipe.vol_a.dynBal.p_start >= 0.0 and plugFlowPipe.vol_a.dynBal.p_start <= 1e8, "Variable violating min/max constraint: 0.0 <= plugFlowPipe.vol_a.dynBal.p_start <= 1e8, has value: " + String(plugFlowPipe.vol_a.dynBal.p_start, "g"));
*/
OMC_DISABLE_OPT
static void pump_v3_basicCold_t_eqFunction_3038(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3038};
  modelica_boolean tmp3009;
  modelica_boolean tmp3010;
  static const MMC_DEFSTRINGLIT(tmp3011,99,"Variable violating min/max constraint: 0.0 <= plugFlowPipe.vol_a.dynBal.p_start <= 1e8, has value: ");
  modelica_string tmp3012;
  modelica_metatype tmpMeta3013;
  static int tmp3014 = 0;
  if(!tmp3014)
  {
    tmp3009 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[192]] /* plugFlowPipe.vol_a.dynBal.p_start PARAM */),0.0);
    tmp3010 = LessEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[192]] /* plugFlowPipe.vol_a.dynBal.p_start PARAM */),1e8);
    if(!(tmp3009 && tmp3010))
    {
      tmp3012 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[192]] /* plugFlowPipe.vol_a.dynBal.p_start PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta3013 = stringAppend(MMC_REFSTRINGLIT(tmp3011),tmp3012);
      {
        const char* assert_cond = "(plugFlowPipe.vol_a.dynBal.p_start >= 0.0 and plugFlowPipe.vol_a.dynBal.p_start <= 1e8)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"E:/Daniel/sgi digital twin/Modelica/IDEAS-master/IDEAS/Fluid/Interfaces/LumpedVolumeDeclarations.mo",29,3,31,47,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta3013));
        } else {
          FILE_INFO info = {"E:/Daniel/sgi digital twin/Modelica/IDEAS-master/IDEAS/Fluid/Interfaces/LumpedVolumeDeclarations.mo",29,3,31,47,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta3013));
        }
      }
      tmp3014 = 1;
    }
  }
  threadData->lastEquationSolved = 3038;
}

/*
equation index: 3039
type: ALGORITHM

  assert(plugFlowPipe.vol_a.dynBal.T_start >= 1.0 and plugFlowPipe.vol_a.dynBal.T_start <= 1e4, "Variable violating min/max constraint: 1.0 <= plugFlowPipe.vol_a.dynBal.T_start <= 1e4, has value: " + String(plugFlowPipe.vol_a.dynBal.T_start, "g"));
*/
OMC_DISABLE_OPT
static void pump_v3_basicCold_t_eqFunction_3039(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3039};
  modelica_boolean tmp3015;
  modelica_boolean tmp3016;
  static const MMC_DEFSTRINGLIT(tmp3017,99,"Variable violating min/max constraint: 1.0 <= plugFlowPipe.vol_a.dynBal.T_start <= 1e4, has value: ");
  modelica_string tmp3018;
  modelica_metatype tmpMeta3019;
  static int tmp3020 = 0;
  if(!tmp3020)
  {
    tmp3015 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[184]] /* plugFlowPipe.vol_a.dynBal.T_start PARAM */),1.0);
    tmp3016 = LessEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[184]] /* plugFlowPipe.vol_a.dynBal.T_start PARAM */),1e4);
    if(!(tmp3015 && tmp3016))
    {
      tmp3018 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[184]] /* plugFlowPipe.vol_a.dynBal.T_start PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta3019 = stringAppend(MMC_REFSTRINGLIT(tmp3017),tmp3018);
      {
        const char* assert_cond = "(plugFlowPipe.vol_a.dynBal.T_start >= 1.0 and plugFlowPipe.vol_a.dynBal.T_start <= 1e4)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"E:/Daniel/sgi digital twin/Modelica/IDEAS-master/IDEAS/Fluid/Interfaces/LumpedVolumeDeclarations.mo",32,3,34,47,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta3019));
        } else {
          FILE_INFO info = {"E:/Daniel/sgi digital twin/Modelica/IDEAS-master/IDEAS/Fluid/Interfaces/LumpedVolumeDeclarations.mo",32,3,34,47,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta3019));
        }
      }
      tmp3020 = 1;
    }
  }
  threadData->lastEquationSolved = 3039;
}

/*
equation index: 3040
type: ALGORITHM

  assert(plugFlowPipe.vol_a.X_start[1] >= 0.0 and plugFlowPipe.vol_a.X_start[1] <= 1.0, "Variable violating min/max constraint: 0.0 <= plugFlowPipe.vol_a.X_start[1] <= 1.0, has value: " + String(plugFlowPipe.vol_a.X_start[1], "g"));
*/
OMC_DISABLE_OPT
static void pump_v3_basicCold_t_eqFunction_3040(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3040};
  modelica_boolean tmp3021;
  modelica_boolean tmp3022;
  static const MMC_DEFSTRINGLIT(tmp3023,95,"Variable violating min/max constraint: 0.0 <= plugFlowPipe.vol_a.X_start[1] <= 1.0, has value: ");
  modelica_string tmp3024;
  modelica_metatype tmpMeta3025;
  static int tmp3026 = 0;
  if(!tmp3026)
  {
    tmp3021 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[182]] /* plugFlowPipe.vol_a.X_start[1] PARAM */),0.0);
    tmp3022 = LessEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[182]] /* plugFlowPipe.vol_a.X_start[1] PARAM */),1.0);
    if(!(tmp3021 && tmp3022))
    {
      tmp3024 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[182]] /* plugFlowPipe.vol_a.X_start[1] PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta3025 = stringAppend(MMC_REFSTRINGLIT(tmp3023),tmp3024);
      {
        const char* assert_cond = "(plugFlowPipe.vol_a.X_start[1] >= 0.0 and plugFlowPipe.vol_a.X_start[1] <= 1.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"E:/Daniel/sgi digital twin/Modelica/IDEAS-master/IDEAS/Fluid/Interfaces/LumpedVolumeDeclarations.mo",35,3,38,69,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta3025));
        } else {
          FILE_INFO info = {"E:/Daniel/sgi digital twin/Modelica/IDEAS-master/IDEAS/Fluid/Interfaces/LumpedVolumeDeclarations.mo",35,3,38,69,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta3025));
        }
      }
      tmp3026 = 1;
    }
  }
  threadData->lastEquationSolved = 3040;
}

/*
equation index: 3041
type: ALGORITHM

  assert(plugFlowPipe.vol_a.dynBal.X_start[1] >= 0.0 and plugFlowPipe.vol_a.dynBal.X_start[1] <= 1.0, "Variable violating min/max constraint: 0.0 <= plugFlowPipe.vol_a.dynBal.X_start[1] <= 1.0, has value: " + String(plugFlowPipe.vol_a.dynBal.X_start[1], "g"));
*/
OMC_DISABLE_OPT
static void pump_v3_basicCold_t_eqFunction_3041(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3041};
  modelica_boolean tmp3027;
  modelica_boolean tmp3028;
  static const MMC_DEFSTRINGLIT(tmp3029,102,"Variable violating min/max constraint: 0.0 <= plugFlowPipe.vol_a.dynBal.X_start[1] <= 1.0, has value: ");
  modelica_string tmp3030;
  modelica_metatype tmpMeta3031;
  static int tmp3032 = 0;
  if(!tmp3032)
  {
    tmp3027 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[185]] /* plugFlowPipe.vol_a.dynBal.X_start[1] PARAM */),0.0);
    tmp3028 = LessEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[185]] /* plugFlowPipe.vol_a.dynBal.X_start[1] PARAM */),1.0);
    if(!(tmp3027 && tmp3028))
    {
      tmp3030 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[185]] /* plugFlowPipe.vol_a.dynBal.X_start[1] PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta3031 = stringAppend(MMC_REFSTRINGLIT(tmp3029),tmp3030);
      {
        const char* assert_cond = "(plugFlowPipe.vol_a.dynBal.X_start[1] >= 0.0 and plugFlowPipe.vol_a.dynBal.X_start[1] <= 1.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"E:/Daniel/sgi digital twin/Modelica/IDEAS-master/IDEAS/Fluid/Interfaces/LumpedVolumeDeclarations.mo",35,3,38,69,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta3031));
        } else {
          FILE_INFO info = {"E:/Daniel/sgi digital twin/Modelica/IDEAS-master/IDEAS/Fluid/Interfaces/LumpedVolumeDeclarations.mo",35,3,38,69,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta3031));
        }
      }
      tmp3032 = 1;
    }
  }
  threadData->lastEquationSolved = 3041;
}

/*
equation index: 3042
type: ALGORITHM

  assert(plugFlowPipe.vol_a.dynBal.rho_default >= 0.0, "Variable violating min constraint: 0.0 <= plugFlowPipe.vol_a.dynBal.rho_default, has value: " + String(plugFlowPipe.vol_a.dynBal.rho_default, "g"));
*/
OMC_DISABLE_OPT
static void pump_v3_basicCold_t_eqFunction_3042(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3042};
  modelica_boolean tmp3033;
  static const MMC_DEFSTRINGLIT(tmp3034,92,"Variable violating min constraint: 0.0 <= plugFlowPipe.vol_a.dynBal.rho_default, has value: ");
  modelica_string tmp3035;
  modelica_metatype tmpMeta3036;
  static int tmp3037 = 0;
  if(!tmp3037)
  {
    tmp3033 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[195]] /* plugFlowPipe.vol_a.dynBal.rho_default PARAM */),0.0);
    if(!tmp3033)
    {
      tmp3035 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[195]] /* plugFlowPipe.vol_a.dynBal.rho_default PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta3036 = stringAppend(MMC_REFSTRINGLIT(tmp3034),tmp3035);
      {
        const char* assert_cond = "(plugFlowPipe.vol_a.dynBal.rho_default >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"E:/Daniel/sgi digital twin/Modelica/IDEAS-master/IDEAS/Fluid/Interfaces/ConservationEquation.mo",148,3,149,59,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta3036));
        } else {
          FILE_INFO info = {"E:/Daniel/sgi digital twin/Modelica/IDEAS-master/IDEAS/Fluid/Interfaces/ConservationEquation.mo",148,3,149,59,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta3036));
        }
      }
      tmp3037 = 1;
    }
  }
  threadData->lastEquationSolved = 3042;
}

/*
equation index: 3043
type: ALGORITHM

  assert(plugFlowPipe.vol_a.dynBal.state_default.T >= 1.0 and plugFlowPipe.vol_a.dynBal.state_default.T <= 1e4, "Variable violating min/max constraint: 1.0 <= plugFlowPipe.vol_a.dynBal.state_default.T <= 1e4, has value: " + String(plugFlowPipe.vol_a.dynBal.state_default.T, "g"));
*/
OMC_DISABLE_OPT
static void pump_v3_basicCold_t_eqFunction_3043(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3043};
  modelica_boolean tmp3038;
  modelica_boolean tmp3039;
  static const MMC_DEFSTRINGLIT(tmp3040,107,"Variable violating min/max constraint: 1.0 <= plugFlowPipe.vol_a.dynBal.state_default.T <= 1e4, has value: ");
  modelica_string tmp3041;
  modelica_metatype tmpMeta3042;
  static int tmp3043 = 0;
  if(!tmp3043)
  {
    tmp3038 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[197]] /* plugFlowPipe.vol_a.dynBal.state_default.T PARAM */),1.0);
    tmp3039 = LessEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[197]] /* plugFlowPipe.vol_a.dynBal.state_default.T PARAM */),1e4);
    if(!(tmp3038 && tmp3039))
    {
      tmp3041 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[197]] /* plugFlowPipe.vol_a.dynBal.state_default.T PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta3042 = stringAppend(MMC_REFSTRINGLIT(tmp3040),tmp3041);
      {
        const char* assert_cond = "(plugFlowPipe.vol_a.dynBal.state_default.T >= 1.0 and plugFlowPipe.vol_a.dynBal.state_default.T <= 1e4)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/Daniel/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Media/package.mo",5870,7,5870,44,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta3042));
        } else {
          FILE_INFO info = {"C:/Users/Daniel/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Media/package.mo",5870,7,5870,44,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta3042));
        }
      }
      tmp3043 = 1;
    }
  }
  threadData->lastEquationSolved = 3043;
}

/*
equation index: 3044
type: ALGORITHM

  assert(plugFlowPipe.vol_a.dynBal.state_default.p >= 0.0 and plugFlowPipe.vol_a.dynBal.state_default.p <= 1e8, "Variable violating min/max constraint: 0.0 <= plugFlowPipe.vol_a.dynBal.state_default.p <= 1e8, has value: " + String(plugFlowPipe.vol_a.dynBal.state_default.p, "g"));
*/
OMC_DISABLE_OPT
static void pump_v3_basicCold_t_eqFunction_3044(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3044};
  modelica_boolean tmp3044;
  modelica_boolean tmp3045;
  static const MMC_DEFSTRINGLIT(tmp3046,107,"Variable violating min/max constraint: 0.0 <= plugFlowPipe.vol_a.dynBal.state_default.p <= 1e8, has value: ");
  modelica_string tmp3047;
  modelica_metatype tmpMeta3048;
  static int tmp3049 = 0;
  if(!tmp3049)
  {
    tmp3044 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[198]] /* plugFlowPipe.vol_a.dynBal.state_default.p PARAM */),0.0);
    tmp3045 = LessEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[198]] /* plugFlowPipe.vol_a.dynBal.state_default.p PARAM */),1e8);
    if(!(tmp3044 && tmp3045))
    {
      tmp3047 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[198]] /* plugFlowPipe.vol_a.dynBal.state_default.p PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta3048 = stringAppend(MMC_REFSTRINGLIT(tmp3046),tmp3047);
      {
        const char* assert_cond = "(plugFlowPipe.vol_a.dynBal.state_default.p >= 0.0 and plugFlowPipe.vol_a.dynBal.state_default.p <= 1e8)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/Daniel/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Media/package.mo",5869,7,5869,55,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta3048));
        } else {
          FILE_INFO info = {"C:/Users/Daniel/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Media/package.mo",5869,7,5869,55,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta3048));
        }
      }
      tmp3049 = 1;
    }
  }
  threadData->lastEquationSolved = 3044;
}

/*
equation index: 3045
type: ALGORITHM

  assert(plugFlowPipe.vol_a.dynBal.rho_start >= 0.0, "Variable violating min constraint: 0.0 <= plugFlowPipe.vol_a.dynBal.rho_start, has value: " + String(plugFlowPipe.vol_a.dynBal.rho_start, "g"));
*/
OMC_DISABLE_OPT
static void pump_v3_basicCold_t_eqFunction_3045(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3045};
  modelica_boolean tmp3050;
  static const MMC_DEFSTRINGLIT(tmp3051,90,"Variable violating min constraint: 0.0 <= plugFlowPipe.vol_a.dynBal.rho_start, has value: ");
  modelica_string tmp3052;
  modelica_metatype tmpMeta3053;
  static int tmp3054 = 0;
  if(!tmp3054)
  {
    tmp3050 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[196]] /* plugFlowPipe.vol_a.dynBal.rho_start PARAM */),0.0);
    if(!tmp3050)
    {
      tmp3052 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[196]] /* plugFlowPipe.vol_a.dynBal.rho_start PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta3053 = stringAppend(MMC_REFSTRINGLIT(tmp3051),tmp3052);
      {
        const char* assert_cond = "(plugFlowPipe.vol_a.dynBal.rho_start >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"E:/Daniel/sgi digital twin/Modelica/IDEAS-master/IDEAS/Fluid/Interfaces/ConservationEquation.mo",134,3,138,70,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta3053));
        } else {
          FILE_INFO info = {"E:/Daniel/sgi digital twin/Modelica/IDEAS-master/IDEAS/Fluid/Interfaces/ConservationEquation.mo",134,3,138,70,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta3053));
        }
      }
      tmp3054 = 1;
    }
  }
  threadData->lastEquationSolved = 3045;
}

/*
equation index: 3046
type: ALGORITHM

  assert(plugFlowPipe.rhoPip >= 0.0, "Variable violating min constraint: 0.0 <= plugFlowPipe.rhoPip, has value: " + String(plugFlowPipe.rhoPip, "g"));
*/
OMC_DISABLE_OPT
static void pump_v3_basicCold_t_eqFunction_3046(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3046};
  modelica_boolean tmp3055;
  static const MMC_DEFSTRINGLIT(tmp3056,74,"Variable violating min constraint: 0.0 <= plugFlowPipe.rhoPip, has value: ");
  modelica_string tmp3057;
  modelica_metatype tmpMeta3058;
  static int tmp3059 = 0;
  if(!tmp3059)
  {
    tmp3055 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[160]] /* plugFlowPipe.rhoPip PARAM */),0.0);
    if(!tmp3055)
    {
      tmp3057 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[160]] /* plugFlowPipe.rhoPip PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta3058 = stringAppend(MMC_REFSTRINGLIT(tmp3056),tmp3057);
      {
        const char* assert_cond = "(plugFlowPipe.rhoPip >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"E:/Daniel/sgi digital twin/Modelica/IDEAS-master/IDEAS/Fluid/FixedResistances/BaseClasses/PlugFlowPipe.mo",54,3,56,62,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta3058));
        } else {
          FILE_INFO info = {"E:/Daniel/sgi digital twin/Modelica/IDEAS-master/IDEAS/Fluid/FixedResistances/BaseClasses/PlugFlowPipe.mo",54,3,56,62,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta3058));
        }
      }
      tmp3059 = 1;
    }
  }
  threadData->lastEquationSolved = 3046;
}

/*
equation index: 3047
type: ALGORITHM

  assert(plugFlowPipe.sta_default.p >= 0.0 and plugFlowPipe.sta_default.p <= 1e8, "Variable violating min/max constraint: 0.0 <= plugFlowPipe.sta_default.p <= 1e8, has value: " + String(plugFlowPipe.sta_default.p, "g"));
*/
OMC_DISABLE_OPT
static void pump_v3_basicCold_t_eqFunction_3047(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3047};
  modelica_boolean tmp3060;
  modelica_boolean tmp3061;
  static const MMC_DEFSTRINGLIT(tmp3062,92,"Variable violating min/max constraint: 0.0 <= plugFlowPipe.sta_default.p <= 1e8, has value: ");
  modelica_string tmp3063;
  modelica_metatype tmpMeta3064;
  static int tmp3065 = 0;
  if(!tmp3065)
  {
    tmp3060 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[168]] /* plugFlowPipe.sta_default.p PARAM */),0.0);
    tmp3061 = LessEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[168]] /* plugFlowPipe.sta_default.p PARAM */),1e8);
    if(!(tmp3060 && tmp3061))
    {
      tmp3063 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[168]] /* plugFlowPipe.sta_default.p PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta3064 = stringAppend(MMC_REFSTRINGLIT(tmp3062),tmp3063);
      {
        const char* assert_cond = "(plugFlowPipe.sta_default.p >= 0.0 and plugFlowPipe.sta_default.p <= 1e8)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/Daniel/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Media/package.mo",5869,7,5869,55,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta3064));
        } else {
          FILE_INFO info = {"C:/Users/Daniel/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Media/package.mo",5869,7,5869,55,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta3064));
        }
      }
      tmp3065 = 1;
    }
  }
  threadData->lastEquationSolved = 3047;
}

/*
equation index: 3048
type: ALGORITHM

  assert(plugFlowPipe.sta_default.T >= 1.0 and plugFlowPipe.sta_default.T <= 1e4, "Variable violating min/max constraint: 1.0 <= plugFlowPipe.sta_default.T <= 1e4, has value: " + String(plugFlowPipe.sta_default.T, "g"));
*/
OMC_DISABLE_OPT
static void pump_v3_basicCold_t_eqFunction_3048(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3048};
  modelica_boolean tmp3066;
  modelica_boolean tmp3067;
  static const MMC_DEFSTRINGLIT(tmp3068,92,"Variable violating min/max constraint: 1.0 <= plugFlowPipe.sta_default.T <= 1e4, has value: ");
  modelica_string tmp3069;
  modelica_metatype tmpMeta3070;
  static int tmp3071 = 0;
  if(!tmp3071)
  {
    tmp3066 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[167]] /* plugFlowPipe.sta_default.T PARAM */),1.0);
    tmp3067 = LessEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[167]] /* plugFlowPipe.sta_default.T PARAM */),1e4);
    if(!(tmp3066 && tmp3067))
    {
      tmp3069 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[167]] /* plugFlowPipe.sta_default.T PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta3070 = stringAppend(MMC_REFSTRINGLIT(tmp3068),tmp3069);
      {
        const char* assert_cond = "(plugFlowPipe.sta_default.T >= 1.0 and plugFlowPipe.sta_default.T <= 1e4)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/Daniel/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Media/package.mo",5870,7,5870,44,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta3070));
        } else {
          FILE_INFO info = {"C:/Users/Daniel/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Media/package.mo",5870,7,5870,44,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta3070));
        }
      }
      tmp3071 = 1;
    }
  }
  threadData->lastEquationSolved = 3048;
}

/*
equation index: 3049
type: ALGORITHM

  assert(plugFlowPipe.vol_a.dynBal.mSenFac >= 1.0, "Variable violating min constraint: 1.0 <= plugFlowPipe.vol_a.dynBal.mSenFac, has value: " + String(plugFlowPipe.vol_a.dynBal.mSenFac, "g"));
*/
OMC_DISABLE_OPT
static void pump_v3_basicCold_t_eqFunction_3049(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3049};
  modelica_boolean tmp3072;
  static const MMC_DEFSTRINGLIT(tmp3073,88,"Variable violating min constraint: 1.0 <= plugFlowPipe.vol_a.dynBal.mSenFac, has value: ");
  modelica_string tmp3074;
  modelica_metatype tmpMeta3075;
  static int tmp3076 = 0;
  if(!tmp3076)
  {
    tmp3072 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[189]] /* plugFlowPipe.vol_a.dynBal.mSenFac PARAM */),1.0);
    if(!tmp3072)
    {
      tmp3074 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[189]] /* plugFlowPipe.vol_a.dynBal.mSenFac PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta3075 = stringAppend(MMC_REFSTRINGLIT(tmp3073),tmp3074);
      {
        const char* assert_cond = "(plugFlowPipe.vol_a.dynBal.mSenFac >= 1.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"E:/Daniel/sgi digital twin/Modelica/IDEAS-master/IDEAS/Fluid/Interfaces/LumpedVolumeDeclarations.mo",47,3,49,39,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta3075));
        } else {
          FILE_INFO info = {"E:/Daniel/sgi digital twin/Modelica/IDEAS-master/IDEAS/Fluid/Interfaces/LumpedVolumeDeclarations.mo",47,3,49,39,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta3075));
        }
      }
      tmp3076 = 1;
    }
  }
  threadData->lastEquationSolved = 3049;
}

/*
equation index: 3050
type: ALGORITHM

  assert(plugFlowPipe.vol_a.dynBal.traceDynamics >= Modelica.Fluid.Types.Dynamics.DynamicFreeInitial and plugFlowPipe.vol_a.dynBal.traceDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, "Variable violating min/max constraint: Modelica.Fluid.Types.Dynamics.DynamicFreeInitial <= plugFlowPipe.vol_a.dynBal.traceDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, has value: " + String(plugFlowPipe.vol_a.dynBal.traceDynamics, "d"));
*/
OMC_DISABLE_OPT
static void pump_v3_basicCold_t_eqFunction_3050(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3050};
  modelica_boolean tmp3077;
  modelica_boolean tmp3078;
  static const MMC_DEFSTRINGLIT(tmp3079,188,"Variable violating min/max constraint: Modelica.Fluid.Types.Dynamics.DynamicFreeInitial <= plugFlowPipe.vol_a.dynBal.traceDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, has value: ");
  modelica_string tmp3080;
  modelica_metatype tmpMeta3081;
  static int tmp3082 = 0;
  if(!tmp3082)
  {
    tmp3077 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[9]] /* plugFlowPipe.vol_a.dynBal.traceDynamics PARAM */),1);
    tmp3078 = LessEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[9]] /* plugFlowPipe.vol_a.dynBal.traceDynamics PARAM */),4);
    if(!(tmp3077 && tmp3078))
    {
      tmp3080 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[9]] /* plugFlowPipe.vol_a.dynBal.traceDynamics PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta3081 = stringAppend(MMC_REFSTRINGLIT(tmp3079),tmp3080);
      {
        const char* assert_cond = "(plugFlowPipe.vol_a.dynBal.traceDynamics >= Modelica.Fluid.Types.Dynamics.DynamicFreeInitial and plugFlowPipe.vol_a.dynBal.traceDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"E:/Daniel/sgi digital twin/Modelica/IDEAS-master/IDEAS/Fluid/Interfaces/LumpedVolumeDeclarations.mo",24,3,26,88,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta3081));
        } else {
          FILE_INFO info = {"E:/Daniel/sgi digital twin/Modelica/IDEAS-master/IDEAS/Fluid/Interfaces/LumpedVolumeDeclarations.mo",24,3,26,88,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta3081));
        }
      }
      tmp3082 = 1;
    }
  }
  threadData->lastEquationSolved = 3050;
}

/*
equation index: 3051
type: ALGORITHM

  assert(plugFlowPipe.vol_a.dynBal.substanceDynamics >= Modelica.Fluid.Types.Dynamics.DynamicFreeInitial and plugFlowPipe.vol_a.dynBal.substanceDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, "Variable violating min/max constraint: Modelica.Fluid.Types.Dynamics.DynamicFreeInitial <= plugFlowPipe.vol_a.dynBal.substanceDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, has value: " + String(plugFlowPipe.vol_a.dynBal.substanceDynamics, "d"));
*/
OMC_DISABLE_OPT
static void pump_v3_basicCold_t_eqFunction_3051(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3051};
  modelica_boolean tmp3083;
  modelica_boolean tmp3084;
  static const MMC_DEFSTRINGLIT(tmp3085,192,"Variable violating min/max constraint: Modelica.Fluid.Types.Dynamics.DynamicFreeInitial <= plugFlowPipe.vol_a.dynBal.substanceDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, has value: ");
  modelica_string tmp3086;
  modelica_metatype tmpMeta3087;
  static int tmp3088 = 0;
  if(!tmp3088)
  {
    tmp3083 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[8]] /* plugFlowPipe.vol_a.dynBal.substanceDynamics PARAM */),1);
    tmp3084 = LessEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[8]] /* plugFlowPipe.vol_a.dynBal.substanceDynamics PARAM */),4);
    if(!(tmp3083 && tmp3084))
    {
      tmp3086 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[8]] /* plugFlowPipe.vol_a.dynBal.substanceDynamics PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta3087 = stringAppend(MMC_REFSTRINGLIT(tmp3085),tmp3086);
      {
        const char* assert_cond = "(plugFlowPipe.vol_a.dynBal.substanceDynamics >= Modelica.Fluid.Types.Dynamics.DynamicFreeInitial and plugFlowPipe.vol_a.dynBal.substanceDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"E:/Daniel/sgi digital twin/Modelica/IDEAS-master/IDEAS/Fluid/Interfaces/LumpedVolumeDeclarations.mo",21,3,23,88,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta3087));
        } else {
          FILE_INFO info = {"E:/Daniel/sgi digital twin/Modelica/IDEAS-master/IDEAS/Fluid/Interfaces/LumpedVolumeDeclarations.mo",21,3,23,88,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta3087));
        }
      }
      tmp3088 = 1;
    }
  }
  threadData->lastEquationSolved = 3051;
}

/*
equation index: 3052
type: ALGORITHM

  assert(plugFlowPipe.vol_a.dynBal.massDynamics >= Modelica.Fluid.Types.Dynamics.DynamicFreeInitial and plugFlowPipe.vol_a.dynBal.massDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, "Variable violating min/max constraint: Modelica.Fluid.Types.Dynamics.DynamicFreeInitial <= plugFlowPipe.vol_a.dynBal.massDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, has value: " + String(plugFlowPipe.vol_a.dynBal.massDynamics, "d"));
*/
OMC_DISABLE_OPT
static void pump_v3_basicCold_t_eqFunction_3052(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3052};
  modelica_boolean tmp3089;
  modelica_boolean tmp3090;
  static const MMC_DEFSTRINGLIT(tmp3091,187,"Variable violating min/max constraint: Modelica.Fluid.Types.Dynamics.DynamicFreeInitial <= plugFlowPipe.vol_a.dynBal.massDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, has value: ");
  modelica_string tmp3092;
  modelica_metatype tmpMeta3093;
  static int tmp3094 = 0;
  if(!tmp3094)
  {
    tmp3089 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[6]] /* plugFlowPipe.vol_a.dynBal.massDynamics PARAM */),1);
    tmp3090 = LessEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[6]] /* plugFlowPipe.vol_a.dynBal.massDynamics PARAM */),4);
    if(!(tmp3089 && tmp3090))
    {
      tmp3092 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[6]] /* plugFlowPipe.vol_a.dynBal.massDynamics PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta3093 = stringAppend(MMC_REFSTRINGLIT(tmp3091),tmp3092);
      {
        const char* assert_cond = "(plugFlowPipe.vol_a.dynBal.massDynamics >= Modelica.Fluid.Types.Dynamics.DynamicFreeInitial and plugFlowPipe.vol_a.dynBal.massDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"E:/Daniel/sgi digital twin/Modelica/IDEAS-master/IDEAS/Fluid/Interfaces/LumpedVolumeDeclarations.mo",18,3,20,74,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta3093));
        } else {
          FILE_INFO info = {"E:/Daniel/sgi digital twin/Modelica/IDEAS-master/IDEAS/Fluid/Interfaces/LumpedVolumeDeclarations.mo",18,3,20,74,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta3093));
        }
      }
      tmp3094 = 1;
    }
  }
  threadData->lastEquationSolved = 3052;
}

/*
equation index: 3053
type: ALGORITHM

  assert(plugFlowPipe.vol_a.dynBal.energyDynamics >= Modelica.Fluid.Types.Dynamics.DynamicFreeInitial and plugFlowPipe.vol_a.dynBal.energyDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, "Variable violating min/max constraint: Modelica.Fluid.Types.Dynamics.DynamicFreeInitial <= plugFlowPipe.vol_a.dynBal.energyDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, has value: " + String(plugFlowPipe.vol_a.dynBal.energyDynamics, "d"));
*/
OMC_DISABLE_OPT
static void pump_v3_basicCold_t_eqFunction_3053(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3053};
  modelica_boolean tmp3095;
  modelica_boolean tmp3096;
  static const MMC_DEFSTRINGLIT(tmp3097,189,"Variable violating min/max constraint: Modelica.Fluid.Types.Dynamics.DynamicFreeInitial <= plugFlowPipe.vol_a.dynBal.energyDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, has value: ");
  modelica_string tmp3098;
  modelica_metatype tmpMeta3099;
  static int tmp3100 = 0;
  if(!tmp3100)
  {
    tmp3095 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[5]] /* plugFlowPipe.vol_a.dynBal.energyDynamics PARAM */),1);
    tmp3096 = LessEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[5]] /* plugFlowPipe.vol_a.dynBal.energyDynamics PARAM */),4);
    if(!(tmp3095 && tmp3096))
    {
      tmp3098 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[5]] /* plugFlowPipe.vol_a.dynBal.energyDynamics PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta3099 = stringAppend(MMC_REFSTRINGLIT(tmp3097),tmp3098);
      {
        const char* assert_cond = "(plugFlowPipe.vol_a.dynBal.energyDynamics >= Modelica.Fluid.Types.Dynamics.DynamicFreeInitial and plugFlowPipe.vol_a.dynBal.energyDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"E:/Daniel/sgi digital twin/Modelica/IDEAS-master/IDEAS/Fluid/Interfaces/LumpedVolumeDeclarations.mo",15,3,17,88,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta3099));
        } else {
          FILE_INFO info = {"E:/Daniel/sgi digital twin/Modelica/IDEAS-master/IDEAS/Fluid/Interfaces/LumpedVolumeDeclarations.mo",15,3,17,88,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta3099));
        }
      }
      tmp3100 = 1;
    }
  }
  threadData->lastEquationSolved = 3053;
}

/*
equation index: 3054
type: ALGORITHM

  assert(plugFlowPipe.vol_a.m_flow_small >= 0.0, "Variable violating min constraint: 0.0 <= plugFlowPipe.vol_a.m_flow_small, has value: " + String(plugFlowPipe.vol_a.m_flow_small, "g"));
*/
OMC_DISABLE_OPT
static void pump_v3_basicCold_t_eqFunction_3054(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3054};
  modelica_boolean tmp3101;
  static const MMC_DEFSTRINGLIT(tmp3102,86,"Variable violating min constraint: 0.0 <= plugFlowPipe.vol_a.m_flow_small, has value: ");
  modelica_string tmp3103;
  modelica_metatype tmpMeta3104;
  static int tmp3105 = 0;
  if(!tmp3105)
  {
    tmp3101 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[201]] /* plugFlowPipe.vol_a.m_flow_small PARAM */),0.0);
    if(!tmp3101)
    {
      tmp3103 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[201]] /* plugFlowPipe.vol_a.m_flow_small PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta3104 = stringAppend(MMC_REFSTRINGLIT(tmp3102),tmp3103);
      {
        const char* assert_cond = "(plugFlowPipe.vol_a.m_flow_small >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"E:/Daniel/sgi digital twin/Modelica/IDEAS-master/IDEAS/Fluid/MixingVolumes/BaseClasses/PartialMixingVolume.mo",25,3,27,40,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta3104));
        } else {
          FILE_INFO info = {"E:/Daniel/sgi digital twin/Modelica/IDEAS-master/IDEAS/Fluid/MixingVolumes/BaseClasses/PartialMixingVolume.mo",25,3,27,40,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta3104));
        }
      }
      tmp3105 = 1;
    }
  }
  threadData->lastEquationSolved = 3054;
}

/*
equation index: 3055
type: ALGORITHM

  assert(plugFlowPipe.vol_a.m_flow_nominal >= 0.0, "Variable violating min constraint: 0.0 <= plugFlowPipe.vol_a.m_flow_nominal, has value: " + String(plugFlowPipe.vol_a.m_flow_nominal, "g"));
*/
OMC_DISABLE_OPT
static void pump_v3_basicCold_t_eqFunction_3055(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3055};
  modelica_boolean tmp3106;
  static const MMC_DEFSTRINGLIT(tmp3107,88,"Variable violating min constraint: 0.0 <= plugFlowPipe.vol_a.m_flow_nominal, has value: ");
  modelica_string tmp3108;
  modelica_metatype tmpMeta3109;
  static int tmp3110 = 0;
  if(!tmp3110)
  {
    tmp3106 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[200]] /* plugFlowPipe.vol_a.m_flow_nominal PARAM */),0.0);
    if(!tmp3106)
    {
      tmp3108 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[200]] /* plugFlowPipe.vol_a.m_flow_nominal PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta3109 = stringAppend(MMC_REFSTRINGLIT(tmp3107),tmp3108);
      {
        const char* assert_cond = "(plugFlowPipe.vol_a.m_flow_nominal >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"E:/Daniel/sgi digital twin/Modelica/IDEAS-master/IDEAS/Fluid/MixingVolumes/BaseClasses/PartialMixingVolume.mo",20,3,21,76,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta3109));
        } else {
          FILE_INFO info = {"E:/Daniel/sgi digital twin/Modelica/IDEAS-master/IDEAS/Fluid/MixingVolumes/BaseClasses/PartialMixingVolume.mo",20,3,21,76,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta3109));
        }
      }
      tmp3110 = 1;
    }
  }
  threadData->lastEquationSolved = 3055;
}

/*
equation index: 3056
type: ALGORITHM

  assert(plugFlowPipe.vol_a.mSenFac >= 1.0, "Variable violating min constraint: 1.0 <= plugFlowPipe.vol_a.mSenFac, has value: " + String(plugFlowPipe.vol_a.mSenFac, "g"));
*/
OMC_DISABLE_OPT
static void pump_v3_basicCold_t_eqFunction_3056(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3056};
  modelica_boolean tmp3111;
  static const MMC_DEFSTRINGLIT(tmp3112,81,"Variable violating min constraint: 1.0 <= plugFlowPipe.vol_a.mSenFac, has value: ");
  modelica_string tmp3113;
  modelica_metatype tmpMeta3114;
  static int tmp3115 = 0;
  if(!tmp3115)
  {
    tmp3111 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[199]] /* plugFlowPipe.vol_a.mSenFac PARAM */),1.0);
    if(!tmp3111)
    {
      tmp3113 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[199]] /* plugFlowPipe.vol_a.mSenFac PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta3114 = stringAppend(MMC_REFSTRINGLIT(tmp3112),tmp3113);
      {
        const char* assert_cond = "(plugFlowPipe.vol_a.mSenFac >= 1.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"E:/Daniel/sgi digital twin/Modelica/IDEAS-master/IDEAS/Fluid/Interfaces/LumpedVolumeDeclarations.mo",47,3,49,39,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta3114));
        } else {
          FILE_INFO info = {"E:/Daniel/sgi digital twin/Modelica/IDEAS-master/IDEAS/Fluid/Interfaces/LumpedVolumeDeclarations.mo",47,3,49,39,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta3114));
        }
      }
      tmp3115 = 1;
    }
  }
  threadData->lastEquationSolved = 3056;
}

/*
equation index: 3057
type: ALGORITHM

  assert(plugFlowPipe.vol_a.traceDynamics >= Modelica.Fluid.Types.Dynamics.DynamicFreeInitial and plugFlowPipe.vol_a.traceDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, "Variable violating min/max constraint: Modelica.Fluid.Types.Dynamics.DynamicFreeInitial <= plugFlowPipe.vol_a.traceDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, has value: " + String(plugFlowPipe.vol_a.traceDynamics, "d"));
*/
OMC_DISABLE_OPT
static void pump_v3_basicCold_t_eqFunction_3057(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3057};
  modelica_boolean tmp3116;
  modelica_boolean tmp3117;
  static const MMC_DEFSTRINGLIT(tmp3118,181,"Variable violating min/max constraint: Modelica.Fluid.Types.Dynamics.DynamicFreeInitial <= plugFlowPipe.vol_a.traceDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, has value: ");
  modelica_string tmp3119;
  modelica_metatype tmpMeta3120;
  static int tmp3121 = 0;
  if(!tmp3121)
  {
    tmp3116 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[14]] /* plugFlowPipe.vol_a.traceDynamics PARAM */),1);
    tmp3117 = LessEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[14]] /* plugFlowPipe.vol_a.traceDynamics PARAM */),4);
    if(!(tmp3116 && tmp3117))
    {
      tmp3119 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[14]] /* plugFlowPipe.vol_a.traceDynamics PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta3120 = stringAppend(MMC_REFSTRINGLIT(tmp3118),tmp3119);
      {
        const char* assert_cond = "(plugFlowPipe.vol_a.traceDynamics >= Modelica.Fluid.Types.Dynamics.DynamicFreeInitial and plugFlowPipe.vol_a.traceDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"E:/Daniel/sgi digital twin/Modelica/IDEAS-master/IDEAS/Fluid/Interfaces/LumpedVolumeDeclarations.mo",24,3,26,88,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta3120));
        } else {
          FILE_INFO info = {"E:/Daniel/sgi digital twin/Modelica/IDEAS-master/IDEAS/Fluid/Interfaces/LumpedVolumeDeclarations.mo",24,3,26,88,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta3120));
        }
      }
      tmp3121 = 1;
    }
  }
  threadData->lastEquationSolved = 3057;
}

/*
equation index: 3058
type: ALGORITHM

  assert(plugFlowPipe.vol_a.substanceDynamics >= Modelica.Fluid.Types.Dynamics.DynamicFreeInitial and plugFlowPipe.vol_a.substanceDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, "Variable violating min/max constraint: Modelica.Fluid.Types.Dynamics.DynamicFreeInitial <= plugFlowPipe.vol_a.substanceDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, has value: " + String(plugFlowPipe.vol_a.substanceDynamics, "d"));
*/
OMC_DISABLE_OPT
static void pump_v3_basicCold_t_eqFunction_3058(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3058};
  modelica_boolean tmp3122;
  modelica_boolean tmp3123;
  static const MMC_DEFSTRINGLIT(tmp3124,185,"Variable violating min/max constraint: Modelica.Fluid.Types.Dynamics.DynamicFreeInitial <= plugFlowPipe.vol_a.substanceDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, has value: ");
  modelica_string tmp3125;
  modelica_metatype tmpMeta3126;
  static int tmp3127 = 0;
  if(!tmp3127)
  {
    tmp3122 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[13]] /* plugFlowPipe.vol_a.substanceDynamics PARAM */),1);
    tmp3123 = LessEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[13]] /* plugFlowPipe.vol_a.substanceDynamics PARAM */),4);
    if(!(tmp3122 && tmp3123))
    {
      tmp3125 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[13]] /* plugFlowPipe.vol_a.substanceDynamics PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta3126 = stringAppend(MMC_REFSTRINGLIT(tmp3124),tmp3125);
      {
        const char* assert_cond = "(plugFlowPipe.vol_a.substanceDynamics >= Modelica.Fluid.Types.Dynamics.DynamicFreeInitial and plugFlowPipe.vol_a.substanceDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"E:/Daniel/sgi digital twin/Modelica/IDEAS-master/IDEAS/Fluid/Interfaces/LumpedVolumeDeclarations.mo",21,3,23,88,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta3126));
        } else {
          FILE_INFO info = {"E:/Daniel/sgi digital twin/Modelica/IDEAS-master/IDEAS/Fluid/Interfaces/LumpedVolumeDeclarations.mo",21,3,23,88,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta3126));
        }
      }
      tmp3127 = 1;
    }
  }
  threadData->lastEquationSolved = 3058;
}

/*
equation index: 3059
type: ALGORITHM

  assert(plugFlowPipe.vol_a.massDynamics >= Modelica.Fluid.Types.Dynamics.DynamicFreeInitial and plugFlowPipe.vol_a.massDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, "Variable violating min/max constraint: Modelica.Fluid.Types.Dynamics.DynamicFreeInitial <= plugFlowPipe.vol_a.massDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, has value: " + String(plugFlowPipe.vol_a.massDynamics, "d"));
*/
OMC_DISABLE_OPT
static void pump_v3_basicCold_t_eqFunction_3059(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3059};
  modelica_boolean tmp3128;
  modelica_boolean tmp3129;
  static const MMC_DEFSTRINGLIT(tmp3130,180,"Variable violating min/max constraint: Modelica.Fluid.Types.Dynamics.DynamicFreeInitial <= plugFlowPipe.vol_a.massDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, has value: ");
  modelica_string tmp3131;
  modelica_metatype tmpMeta3132;
  static int tmp3133 = 0;
  if(!tmp3133)
  {
    tmp3128 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[11]] /* plugFlowPipe.vol_a.massDynamics PARAM */),1);
    tmp3129 = LessEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[11]] /* plugFlowPipe.vol_a.massDynamics PARAM */),4);
    if(!(tmp3128 && tmp3129))
    {
      tmp3131 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[11]] /* plugFlowPipe.vol_a.massDynamics PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta3132 = stringAppend(MMC_REFSTRINGLIT(tmp3130),tmp3131);
      {
        const char* assert_cond = "(plugFlowPipe.vol_a.massDynamics >= Modelica.Fluid.Types.Dynamics.DynamicFreeInitial and plugFlowPipe.vol_a.massDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"E:/Daniel/sgi digital twin/Modelica/IDEAS-master/IDEAS/Fluid/Interfaces/LumpedVolumeDeclarations.mo",18,3,20,74,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta3132));
        } else {
          FILE_INFO info = {"E:/Daniel/sgi digital twin/Modelica/IDEAS-master/IDEAS/Fluid/Interfaces/LumpedVolumeDeclarations.mo",18,3,20,74,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta3132));
        }
      }
      tmp3133 = 1;
    }
  }
  threadData->lastEquationSolved = 3059;
}

/*
equation index: 3060
type: ALGORITHM

  assert(plugFlowPipe.vol_a.energyDynamics >= Modelica.Fluid.Types.Dynamics.DynamicFreeInitial and plugFlowPipe.vol_a.energyDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, "Variable violating min/max constraint: Modelica.Fluid.Types.Dynamics.DynamicFreeInitial <= plugFlowPipe.vol_a.energyDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, has value: " + String(plugFlowPipe.vol_a.energyDynamics, "d"));
*/
OMC_DISABLE_OPT
static void pump_v3_basicCold_t_eqFunction_3060(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3060};
  modelica_boolean tmp3134;
  modelica_boolean tmp3135;
  static const MMC_DEFSTRINGLIT(tmp3136,182,"Variable violating min/max constraint: Modelica.Fluid.Types.Dynamics.DynamicFreeInitial <= plugFlowPipe.vol_a.energyDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, has value: ");
  modelica_string tmp3137;
  modelica_metatype tmpMeta3138;
  static int tmp3139 = 0;
  if(!tmp3139)
  {
    tmp3134 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[10]] /* plugFlowPipe.vol_a.energyDynamics PARAM */),1);
    tmp3135 = LessEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[10]] /* plugFlowPipe.vol_a.energyDynamics PARAM */),4);
    if(!(tmp3134 && tmp3135))
    {
      tmp3137 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[10]] /* plugFlowPipe.vol_a.energyDynamics PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta3138 = stringAppend(MMC_REFSTRINGLIT(tmp3136),tmp3137);
      {
        const char* assert_cond = "(plugFlowPipe.vol_a.energyDynamics >= Modelica.Fluid.Types.Dynamics.DynamicFreeInitial and plugFlowPipe.vol_a.energyDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"E:/Daniel/sgi digital twin/Modelica/IDEAS-master/IDEAS/Fluid/Interfaces/LumpedVolumeDeclarations.mo",15,3,17,88,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta3138));
        } else {
          FILE_INFO info = {"E:/Daniel/sgi digital twin/Modelica/IDEAS-master/IDEAS/Fluid/Interfaces/LumpedVolumeDeclarations.mo",15,3,17,88,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta3138));
        }
      }
      tmp3139 = 1;
    }
  }
  threadData->lastEquationSolved = 3060;
}

/*
equation index: 3061
type: ALGORITHM

  assert(plugFlowPipe.vol_b.T_start >= 1.0 and plugFlowPipe.vol_b.T_start <= 1e4, "Variable violating min/max constraint: 1.0 <= plugFlowPipe.vol_b.T_start <= 1e4, has value: " + String(plugFlowPipe.vol_b.T_start, "g"));
*/
OMC_DISABLE_OPT
static void pump_v3_basicCold_t_eqFunction_3061(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3061};
  modelica_boolean tmp3140;
  modelica_boolean tmp3141;
  static const MMC_DEFSTRINGLIT(tmp3142,92,"Variable violating min/max constraint: 1.0 <= plugFlowPipe.vol_b.T_start <= 1e4, has value: ");
  modelica_string tmp3143;
  modelica_metatype tmpMeta3144;
  static int tmp3145 = 0;
  if(!tmp3145)
  {
    tmp3140 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[212]] /* plugFlowPipe.vol_b.T_start PARAM */),1.0);
    tmp3141 = LessEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[212]] /* plugFlowPipe.vol_b.T_start PARAM */),1e4);
    if(!(tmp3140 && tmp3141))
    {
      tmp3143 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[212]] /* plugFlowPipe.vol_b.T_start PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta3144 = stringAppend(MMC_REFSTRINGLIT(tmp3142),tmp3143);
      {
        const char* assert_cond = "(plugFlowPipe.vol_b.T_start >= 1.0 and plugFlowPipe.vol_b.T_start <= 1e4)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"E:/Daniel/sgi digital twin/Modelica/IDEAS-master/IDEAS/Fluid/Interfaces/LumpedVolumeDeclarations.mo",32,3,34,47,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta3144));
        } else {
          FILE_INFO info = {"E:/Daniel/sgi digital twin/Modelica/IDEAS-master/IDEAS/Fluid/Interfaces/LumpedVolumeDeclarations.mo",32,3,34,47,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta3144));
        }
      }
      tmp3145 = 1;
    }
  }
  threadData->lastEquationSolved = 3061;
}

/*
equation index: 3062
type: ALGORITHM

  assert(plugFlowPipe.vol_b.state_start.T >= 1.0 and plugFlowPipe.vol_b.state_start.T <= 1e4, "Variable violating min/max constraint: 1.0 <= plugFlowPipe.vol_b.state_start.T <= 1e4, has value: " + String(plugFlowPipe.vol_b.state_start.T, "g"));
*/
OMC_DISABLE_OPT
static void pump_v3_basicCold_t_eqFunction_3062(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3062};
  modelica_boolean tmp3146;
  modelica_boolean tmp3147;
  static const MMC_DEFSTRINGLIT(tmp3148,98,"Variable violating min/max constraint: 1.0 <= plugFlowPipe.vol_b.state_start.T <= 1e4, has value: ");
  modelica_string tmp3149;
  modelica_metatype tmpMeta3150;
  static int tmp3151 = 0;
  if(!tmp3151)
  {
    tmp3146 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[235]] /* plugFlowPipe.vol_b.state_start.T PARAM */),1.0);
    tmp3147 = LessEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[235]] /* plugFlowPipe.vol_b.state_start.T PARAM */),1e4);
    if(!(tmp3146 && tmp3147))
    {
      tmp3149 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[235]] /* plugFlowPipe.vol_b.state_start.T PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta3150 = stringAppend(MMC_REFSTRINGLIT(tmp3148),tmp3149);
      {
        const char* assert_cond = "(plugFlowPipe.vol_b.state_start.T >= 1.0 and plugFlowPipe.vol_b.state_start.T <= 1e4)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/Daniel/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Media/package.mo",5870,7,5870,44,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta3150));
        } else {
          FILE_INFO info = {"C:/Users/Daniel/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Media/package.mo",5870,7,5870,44,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta3150));
        }
      }
      tmp3151 = 1;
    }
  }
  threadData->lastEquationSolved = 3062;
}

/*
equation index: 3063
type: ALGORITHM

  assert(plugFlowPipe.vol_b.p_start >= 0.0 and plugFlowPipe.vol_b.p_start <= 1e8, "Variable violating min/max constraint: 0.0 <= plugFlowPipe.vol_b.p_start <= 1e8, has value: " + String(plugFlowPipe.vol_b.p_start, "g"));
*/
OMC_DISABLE_OPT
static void pump_v3_basicCold_t_eqFunction_3063(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3063};
  modelica_boolean tmp3152;
  modelica_boolean tmp3153;
  static const MMC_DEFSTRINGLIT(tmp3154,92,"Variable violating min/max constraint: 0.0 <= plugFlowPipe.vol_b.p_start <= 1e8, has value: ");
  modelica_string tmp3155;
  modelica_metatype tmpMeta3156;
  static int tmp3157 = 0;
  if(!tmp3157)
  {
    tmp3152 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[230]] /* plugFlowPipe.vol_b.p_start PARAM */),0.0);
    tmp3153 = LessEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[230]] /* plugFlowPipe.vol_b.p_start PARAM */),1e8);
    if(!(tmp3152 && tmp3153))
    {
      tmp3155 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[230]] /* plugFlowPipe.vol_b.p_start PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta3156 = stringAppend(MMC_REFSTRINGLIT(tmp3154),tmp3155);
      {
        const char* assert_cond = "(plugFlowPipe.vol_b.p_start >= 0.0 and plugFlowPipe.vol_b.p_start <= 1e8)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"E:/Daniel/sgi digital twin/Modelica/IDEAS-master/IDEAS/Fluid/Interfaces/LumpedVolumeDeclarations.mo",29,3,31,47,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta3156));
        } else {
          FILE_INFO info = {"E:/Daniel/sgi digital twin/Modelica/IDEAS-master/IDEAS/Fluid/Interfaces/LumpedVolumeDeclarations.mo",29,3,31,47,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta3156));
        }
      }
      tmp3157 = 1;
    }
  }
  threadData->lastEquationSolved = 3063;
}

/*
equation index: 3064
type: ALGORITHM

  assert(plugFlowPipe.vol_b.state_start.p >= 0.0 and plugFlowPipe.vol_b.state_start.p <= 1e8, "Variable violating min/max constraint: 0.0 <= plugFlowPipe.vol_b.state_start.p <= 1e8, has value: " + String(plugFlowPipe.vol_b.state_start.p, "g"));
*/
OMC_DISABLE_OPT
static void pump_v3_basicCold_t_eqFunction_3064(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3064};
  modelica_boolean tmp3158;
  modelica_boolean tmp3159;
  static const MMC_DEFSTRINGLIT(tmp3160,98,"Variable violating min/max constraint: 0.0 <= plugFlowPipe.vol_b.state_start.p <= 1e8, has value: ");
  modelica_string tmp3161;
  modelica_metatype tmpMeta3162;
  static int tmp3163 = 0;
  if(!tmp3163)
  {
    tmp3158 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[236]] /* plugFlowPipe.vol_b.state_start.p PARAM */),0.0);
    tmp3159 = LessEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[236]] /* plugFlowPipe.vol_b.state_start.p PARAM */),1e8);
    if(!(tmp3158 && tmp3159))
    {
      tmp3161 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[236]] /* plugFlowPipe.vol_b.state_start.p PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta3162 = stringAppend(MMC_REFSTRINGLIT(tmp3160),tmp3161);
      {
        const char* assert_cond = "(plugFlowPipe.vol_b.state_start.p >= 0.0 and plugFlowPipe.vol_b.state_start.p <= 1e8)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/Daniel/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Media/package.mo",5869,7,5869,55,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta3162));
        } else {
          FILE_INFO info = {"C:/Users/Daniel/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Media/package.mo",5869,7,5869,55,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta3162));
        }
      }
      tmp3163 = 1;
    }
  }
  threadData->lastEquationSolved = 3064;
}

/*
equation index: 3065
type: ALGORITHM

  assert(plugFlowPipe.vol_b.rho_default >= 0.0, "Variable violating min constraint: 0.0 <= plugFlowPipe.vol_b.rho_default, has value: " + String(plugFlowPipe.vol_b.rho_default, "g"));
*/
OMC_DISABLE_OPT
static void pump_v3_basicCold_t_eqFunction_3065(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3065};
  modelica_boolean tmp3164;
  static const MMC_DEFSTRINGLIT(tmp3165,85,"Variable violating min constraint: 0.0 <= plugFlowPipe.vol_b.rho_default, has value: ");
  modelica_string tmp3166;
  modelica_metatype tmpMeta3167;
  static int tmp3168 = 0;
  if(!tmp3168)
  {
    tmp3164 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[231]] /* plugFlowPipe.vol_b.rho_default PARAM */),0.0);
    if(!tmp3164)
    {
      tmp3166 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[231]] /* plugFlowPipe.vol_b.rho_default PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta3167 = stringAppend(MMC_REFSTRINGLIT(tmp3165),tmp3166);
      {
        const char* assert_cond = "(plugFlowPipe.vol_b.rho_default >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"E:/Daniel/sgi digital twin/Modelica/IDEAS-master/IDEAS/Fluid/MixingVolumes/BaseClasses/PartialMixingVolume.mo",99,3,100,63,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta3167));
        } else {
          FILE_INFO info = {"E:/Daniel/sgi digital twin/Modelica/IDEAS-master/IDEAS/Fluid/MixingVolumes/BaseClasses/PartialMixingVolume.mo",99,3,100,63,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta3167));
        }
      }
      tmp3168 = 1;
    }
  }
  threadData->lastEquationSolved = 3065;
}

/*
equation index: 3066
type: ALGORITHM

  assert(plugFlowPipe.vol_b.state_default.T >= 1.0 and plugFlowPipe.vol_b.state_default.T <= 1e4, "Variable violating min/max constraint: 1.0 <= plugFlowPipe.vol_b.state_default.T <= 1e4, has value: " + String(plugFlowPipe.vol_b.state_default.T, "g"));
*/
OMC_DISABLE_OPT
static void pump_v3_basicCold_t_eqFunction_3066(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3066};
  modelica_boolean tmp3169;
  modelica_boolean tmp3170;
  static const MMC_DEFSTRINGLIT(tmp3171,100,"Variable violating min/max constraint: 1.0 <= plugFlowPipe.vol_b.state_default.T <= 1e4, has value: ");
  modelica_string tmp3172;
  modelica_metatype tmpMeta3173;
  static int tmp3174 = 0;
  if(!tmp3174)
  {
    tmp3169 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[233]] /* plugFlowPipe.vol_b.state_default.T PARAM */),1.0);
    tmp3170 = LessEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[233]] /* plugFlowPipe.vol_b.state_default.T PARAM */),1e4);
    if(!(tmp3169 && tmp3170))
    {
      tmp3172 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[233]] /* plugFlowPipe.vol_b.state_default.T PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta3173 = stringAppend(MMC_REFSTRINGLIT(tmp3171),tmp3172);
      {
        const char* assert_cond = "(plugFlowPipe.vol_b.state_default.T >= 1.0 and plugFlowPipe.vol_b.state_default.T <= 1e4)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/Daniel/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Media/package.mo",5870,7,5870,44,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta3173));
        } else {
          FILE_INFO info = {"C:/Users/Daniel/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Media/package.mo",5870,7,5870,44,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta3173));
        }
      }
      tmp3174 = 1;
    }
  }
  threadData->lastEquationSolved = 3066;
}

/*
equation index: 3067
type: ALGORITHM

  assert(plugFlowPipe.vol_b.state_default.p >= 0.0 and plugFlowPipe.vol_b.state_default.p <= 1e8, "Variable violating min/max constraint: 0.0 <= plugFlowPipe.vol_b.state_default.p <= 1e8, has value: " + String(plugFlowPipe.vol_b.state_default.p, "g"));
*/
OMC_DISABLE_OPT
static void pump_v3_basicCold_t_eqFunction_3067(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3067};
  modelica_boolean tmp3175;
  modelica_boolean tmp3176;
  static const MMC_DEFSTRINGLIT(tmp3177,100,"Variable violating min/max constraint: 0.0 <= plugFlowPipe.vol_b.state_default.p <= 1e8, has value: ");
  modelica_string tmp3178;
  modelica_metatype tmpMeta3179;
  static int tmp3180 = 0;
  if(!tmp3180)
  {
    tmp3175 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[234]] /* plugFlowPipe.vol_b.state_default.p PARAM */),0.0);
    tmp3176 = LessEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[234]] /* plugFlowPipe.vol_b.state_default.p PARAM */),1e8);
    if(!(tmp3175 && tmp3176))
    {
      tmp3178 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[234]] /* plugFlowPipe.vol_b.state_default.p PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta3179 = stringAppend(MMC_REFSTRINGLIT(tmp3177),tmp3178);
      {
        const char* assert_cond = "(plugFlowPipe.vol_b.state_default.p >= 0.0 and plugFlowPipe.vol_b.state_default.p <= 1e8)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/Daniel/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Media/package.mo",5869,7,5869,55,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta3179));
        } else {
          FILE_INFO info = {"C:/Users/Daniel/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Media/package.mo",5869,7,5869,55,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta3179));
        }
      }
      tmp3180 = 1;
    }
  }
  threadData->lastEquationSolved = 3067;
}

/*
equation index: 3068
type: ALGORITHM

  assert(plugFlowPipe.vol_b.rho_start >= 0.0, "Variable violating min constraint: 0.0 <= plugFlowPipe.vol_b.rho_start, has value: " + String(plugFlowPipe.vol_b.rho_start, "g"));
*/
OMC_DISABLE_OPT
static void pump_v3_basicCold_t_eqFunction_3068(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3068};
  modelica_boolean tmp3181;
  static const MMC_DEFSTRINGLIT(tmp3182,83,"Variable violating min constraint: 0.0 <= plugFlowPipe.vol_b.rho_start, has value: ");
  modelica_string tmp3183;
  modelica_metatype tmpMeta3184;
  static int tmp3185 = 0;
  if(!tmp3185)
  {
    tmp3181 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[232]] /* plugFlowPipe.vol_b.rho_start PARAM */),0.0);
    if(!tmp3181)
    {
      tmp3183 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[232]] /* plugFlowPipe.vol_b.rho_start PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta3184 = stringAppend(MMC_REFSTRINGLIT(tmp3182),tmp3183);
      {
        const char* assert_cond = "(plugFlowPipe.vol_b.rho_start >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"E:/Daniel/sgi digital twin/Modelica/IDEAS-master/IDEAS/Fluid/MixingVolumes/BaseClasses/PartialMixingVolume.mo",92,3,93,73,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta3184));
        } else {
          FILE_INFO info = {"E:/Daniel/sgi digital twin/Modelica/IDEAS-master/IDEAS/Fluid/MixingVolumes/BaseClasses/PartialMixingVolume.mo",92,3,93,73,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta3184));
        }
      }
      tmp3185 = 1;
    }
  }
  threadData->lastEquationSolved = 3068;
}

/*
equation index: 3069
type: ALGORITHM

  assert(plugFlowPipe.vol_b.dynBal.p_start >= 0.0 and plugFlowPipe.vol_b.dynBal.p_start <= 1e8, "Variable violating min/max constraint: 0.0 <= plugFlowPipe.vol_b.dynBal.p_start <= 1e8, has value: " + String(plugFlowPipe.vol_b.dynBal.p_start, "g"));
*/
OMC_DISABLE_OPT
static void pump_v3_basicCold_t_eqFunction_3069(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3069};
  modelica_boolean tmp3186;
  modelica_boolean tmp3187;
  static const MMC_DEFSTRINGLIT(tmp3188,99,"Variable violating min/max constraint: 0.0 <= plugFlowPipe.vol_b.dynBal.p_start <= 1e8, has value: ");
  modelica_string tmp3189;
  modelica_metatype tmpMeta3190;
  static int tmp3191 = 0;
  if(!tmp3191)
  {
    tmp3186 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[222]] /* plugFlowPipe.vol_b.dynBal.p_start PARAM */),0.0);
    tmp3187 = LessEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[222]] /* plugFlowPipe.vol_b.dynBal.p_start PARAM */),1e8);
    if(!(tmp3186 && tmp3187))
    {
      tmp3189 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[222]] /* plugFlowPipe.vol_b.dynBal.p_start PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta3190 = stringAppend(MMC_REFSTRINGLIT(tmp3188),tmp3189);
      {
        const char* assert_cond = "(plugFlowPipe.vol_b.dynBal.p_start >= 0.0 and plugFlowPipe.vol_b.dynBal.p_start <= 1e8)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"E:/Daniel/sgi digital twin/Modelica/IDEAS-master/IDEAS/Fluid/Interfaces/LumpedVolumeDeclarations.mo",29,3,31,47,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta3190));
        } else {
          FILE_INFO info = {"E:/Daniel/sgi digital twin/Modelica/IDEAS-master/IDEAS/Fluid/Interfaces/LumpedVolumeDeclarations.mo",29,3,31,47,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta3190));
        }
      }
      tmp3191 = 1;
    }
  }
  threadData->lastEquationSolved = 3069;
}

/*
equation index: 3070
type: ALGORITHM

  assert(plugFlowPipe.vol_b.dynBal.T_start >= 1.0 and plugFlowPipe.vol_b.dynBal.T_start <= 1e4, "Variable violating min/max constraint: 1.0 <= plugFlowPipe.vol_b.dynBal.T_start <= 1e4, has value: " + String(plugFlowPipe.vol_b.dynBal.T_start, "g"));
*/
OMC_DISABLE_OPT
static void pump_v3_basicCold_t_eqFunction_3070(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3070};
  modelica_boolean tmp3192;
  modelica_boolean tmp3193;
  static const MMC_DEFSTRINGLIT(tmp3194,99,"Variable violating min/max constraint: 1.0 <= plugFlowPipe.vol_b.dynBal.T_start <= 1e4, has value: ");
  modelica_string tmp3195;
  modelica_metatype tmpMeta3196;
  static int tmp3197 = 0;
  if(!tmp3197)
  {
    tmp3192 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[216]] /* plugFlowPipe.vol_b.dynBal.T_start PARAM */),1.0);
    tmp3193 = LessEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[216]] /* plugFlowPipe.vol_b.dynBal.T_start PARAM */),1e4);
    if(!(tmp3192 && tmp3193))
    {
      tmp3195 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[216]] /* plugFlowPipe.vol_b.dynBal.T_start PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta3196 = stringAppend(MMC_REFSTRINGLIT(tmp3194),tmp3195);
      {
        const char* assert_cond = "(plugFlowPipe.vol_b.dynBal.T_start >= 1.0 and plugFlowPipe.vol_b.dynBal.T_start <= 1e4)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"E:/Daniel/sgi digital twin/Modelica/IDEAS-master/IDEAS/Fluid/Interfaces/LumpedVolumeDeclarations.mo",32,3,34,47,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta3196));
        } else {
          FILE_INFO info = {"E:/Daniel/sgi digital twin/Modelica/IDEAS-master/IDEAS/Fluid/Interfaces/LumpedVolumeDeclarations.mo",32,3,34,47,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta3196));
        }
      }
      tmp3197 = 1;
    }
  }
  threadData->lastEquationSolved = 3070;
}

/*
equation index: 3071
type: ALGORITHM

  assert(plugFlowPipe.vol_b.X_start[1] >= 0.0 and plugFlowPipe.vol_b.X_start[1] <= 1.0, "Variable violating min/max constraint: 0.0 <= plugFlowPipe.vol_b.X_start[1] <= 1.0, has value: " + String(plugFlowPipe.vol_b.X_start[1], "g"));
*/
OMC_DISABLE_OPT
static void pump_v3_basicCold_t_eqFunction_3071(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3071};
  modelica_boolean tmp3198;
  modelica_boolean tmp3199;
  static const MMC_DEFSTRINGLIT(tmp3200,95,"Variable violating min/max constraint: 0.0 <= plugFlowPipe.vol_b.X_start[1] <= 1.0, has value: ");
  modelica_string tmp3201;
  modelica_metatype tmpMeta3202;
  static int tmp3203 = 0;
  if(!tmp3203)
  {
    tmp3198 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[214]] /* plugFlowPipe.vol_b.X_start[1] PARAM */),0.0);
    tmp3199 = LessEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[214]] /* plugFlowPipe.vol_b.X_start[1] PARAM */),1.0);
    if(!(tmp3198 && tmp3199))
    {
      tmp3201 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[214]] /* plugFlowPipe.vol_b.X_start[1] PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta3202 = stringAppend(MMC_REFSTRINGLIT(tmp3200),tmp3201);
      {
        const char* assert_cond = "(plugFlowPipe.vol_b.X_start[1] >= 0.0 and plugFlowPipe.vol_b.X_start[1] <= 1.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"E:/Daniel/sgi digital twin/Modelica/IDEAS-master/IDEAS/Fluid/Interfaces/LumpedVolumeDeclarations.mo",35,3,38,69,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta3202));
        } else {
          FILE_INFO info = {"E:/Daniel/sgi digital twin/Modelica/IDEAS-master/IDEAS/Fluid/Interfaces/LumpedVolumeDeclarations.mo",35,3,38,69,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta3202));
        }
      }
      tmp3203 = 1;
    }
  }
  threadData->lastEquationSolved = 3071;
}

/*
equation index: 3072
type: ALGORITHM

  assert(plugFlowPipe.vol_b.dynBal.X_start[1] >= 0.0 and plugFlowPipe.vol_b.dynBal.X_start[1] <= 1.0, "Variable violating min/max constraint: 0.0 <= plugFlowPipe.vol_b.dynBal.X_start[1] <= 1.0, has value: " + String(plugFlowPipe.vol_b.dynBal.X_start[1], "g"));
*/
OMC_DISABLE_OPT
static void pump_v3_basicCold_t_eqFunction_3072(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3072};
  modelica_boolean tmp3204;
  modelica_boolean tmp3205;
  static const MMC_DEFSTRINGLIT(tmp3206,102,"Variable violating min/max constraint: 0.0 <= plugFlowPipe.vol_b.dynBal.X_start[1] <= 1.0, has value: ");
  modelica_string tmp3207;
  modelica_metatype tmpMeta3208;
  static int tmp3209 = 0;
  if(!tmp3209)
  {
    tmp3204 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[217]] /* plugFlowPipe.vol_b.dynBal.X_start[1] PARAM */),0.0);
    tmp3205 = LessEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[217]] /* plugFlowPipe.vol_b.dynBal.X_start[1] PARAM */),1.0);
    if(!(tmp3204 && tmp3205))
    {
      tmp3207 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[217]] /* plugFlowPipe.vol_b.dynBal.X_start[1] PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta3208 = stringAppend(MMC_REFSTRINGLIT(tmp3206),tmp3207);
      {
        const char* assert_cond = "(plugFlowPipe.vol_b.dynBal.X_start[1] >= 0.0 and plugFlowPipe.vol_b.dynBal.X_start[1] <= 1.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"E:/Daniel/sgi digital twin/Modelica/IDEAS-master/IDEAS/Fluid/Interfaces/LumpedVolumeDeclarations.mo",35,3,38,69,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta3208));
        } else {
          FILE_INFO info = {"E:/Daniel/sgi digital twin/Modelica/IDEAS-master/IDEAS/Fluid/Interfaces/LumpedVolumeDeclarations.mo",35,3,38,69,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta3208));
        }
      }
      tmp3209 = 1;
    }
  }
  threadData->lastEquationSolved = 3072;
}

/*
equation index: 3073
type: ALGORITHM

  assert(plugFlowPipe.vol_b.dynBal.rho_default >= 0.0, "Variable violating min constraint: 0.0 <= plugFlowPipe.vol_b.dynBal.rho_default, has value: " + String(plugFlowPipe.vol_b.dynBal.rho_default, "g"));
*/
OMC_DISABLE_OPT
static void pump_v3_basicCold_t_eqFunction_3073(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3073};
  modelica_boolean tmp3210;
  static const MMC_DEFSTRINGLIT(tmp3211,92,"Variable violating min constraint: 0.0 <= plugFlowPipe.vol_b.dynBal.rho_default, has value: ");
  modelica_string tmp3212;
  modelica_metatype tmpMeta3213;
  static int tmp3214 = 0;
  if(!tmp3214)
  {
    tmp3210 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[223]] /* plugFlowPipe.vol_b.dynBal.rho_default PARAM */),0.0);
    if(!tmp3210)
    {
      tmp3212 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[223]] /* plugFlowPipe.vol_b.dynBal.rho_default PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta3213 = stringAppend(MMC_REFSTRINGLIT(tmp3211),tmp3212);
      {
        const char* assert_cond = "(plugFlowPipe.vol_b.dynBal.rho_default >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"E:/Daniel/sgi digital twin/Modelica/IDEAS-master/IDEAS/Fluid/Interfaces/ConservationEquation.mo",148,3,149,59,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta3213));
        } else {
          FILE_INFO info = {"E:/Daniel/sgi digital twin/Modelica/IDEAS-master/IDEAS/Fluid/Interfaces/ConservationEquation.mo",148,3,149,59,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta3213));
        }
      }
      tmp3214 = 1;
    }
  }
  threadData->lastEquationSolved = 3073;
}

/*
equation index: 3074
type: ALGORITHM

  assert(plugFlowPipe.vol_b.dynBal.state_default.T >= 1.0 and plugFlowPipe.vol_b.dynBal.state_default.T <= 1e4, "Variable violating min/max constraint: 1.0 <= plugFlowPipe.vol_b.dynBal.state_default.T <= 1e4, has value: " + String(plugFlowPipe.vol_b.dynBal.state_default.T, "g"));
*/
OMC_DISABLE_OPT
static void pump_v3_basicCold_t_eqFunction_3074(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3074};
  modelica_boolean tmp3215;
  modelica_boolean tmp3216;
  static const MMC_DEFSTRINGLIT(tmp3217,107,"Variable violating min/max constraint: 1.0 <= plugFlowPipe.vol_b.dynBal.state_default.T <= 1e4, has value: ");
  modelica_string tmp3218;
  modelica_metatype tmpMeta3219;
  static int tmp3220 = 0;
  if(!tmp3220)
  {
    tmp3215 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[225]] /* plugFlowPipe.vol_b.dynBal.state_default.T PARAM */),1.0);
    tmp3216 = LessEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[225]] /* plugFlowPipe.vol_b.dynBal.state_default.T PARAM */),1e4);
    if(!(tmp3215 && tmp3216))
    {
      tmp3218 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[225]] /* plugFlowPipe.vol_b.dynBal.state_default.T PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta3219 = stringAppend(MMC_REFSTRINGLIT(tmp3217),tmp3218);
      {
        const char* assert_cond = "(plugFlowPipe.vol_b.dynBal.state_default.T >= 1.0 and plugFlowPipe.vol_b.dynBal.state_default.T <= 1e4)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/Daniel/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Media/package.mo",5870,7,5870,44,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta3219));
        } else {
          FILE_INFO info = {"C:/Users/Daniel/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Media/package.mo",5870,7,5870,44,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta3219));
        }
      }
      tmp3220 = 1;
    }
  }
  threadData->lastEquationSolved = 3074;
}

/*
equation index: 3075
type: ALGORITHM

  assert(plugFlowPipe.vol_b.dynBal.state_default.p >= 0.0 and plugFlowPipe.vol_b.dynBal.state_default.p <= 1e8, "Variable violating min/max constraint: 0.0 <= plugFlowPipe.vol_b.dynBal.state_default.p <= 1e8, has value: " + String(plugFlowPipe.vol_b.dynBal.state_default.p, "g"));
*/
OMC_DISABLE_OPT
static void pump_v3_basicCold_t_eqFunction_3075(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3075};
  modelica_boolean tmp3221;
  modelica_boolean tmp3222;
  static const MMC_DEFSTRINGLIT(tmp3223,107,"Variable violating min/max constraint: 0.0 <= plugFlowPipe.vol_b.dynBal.state_default.p <= 1e8, has value: ");
  modelica_string tmp3224;
  modelica_metatype tmpMeta3225;
  static int tmp3226 = 0;
  if(!tmp3226)
  {
    tmp3221 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[226]] /* plugFlowPipe.vol_b.dynBal.state_default.p PARAM */),0.0);
    tmp3222 = LessEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[226]] /* plugFlowPipe.vol_b.dynBal.state_default.p PARAM */),1e8);
    if(!(tmp3221 && tmp3222))
    {
      tmp3224 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[226]] /* plugFlowPipe.vol_b.dynBal.state_default.p PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta3225 = stringAppend(MMC_REFSTRINGLIT(tmp3223),tmp3224);
      {
        const char* assert_cond = "(plugFlowPipe.vol_b.dynBal.state_default.p >= 0.0 and plugFlowPipe.vol_b.dynBal.state_default.p <= 1e8)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/Daniel/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Media/package.mo",5869,7,5869,55,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta3225));
        } else {
          FILE_INFO info = {"C:/Users/Daniel/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Media/package.mo",5869,7,5869,55,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta3225));
        }
      }
      tmp3226 = 1;
    }
  }
  threadData->lastEquationSolved = 3075;
}

/*
equation index: 3076
type: ALGORITHM

  assert(plugFlowPipe.vol_b.dynBal.rho_start >= 0.0, "Variable violating min constraint: 0.0 <= plugFlowPipe.vol_b.dynBal.rho_start, has value: " + String(plugFlowPipe.vol_b.dynBal.rho_start, "g"));
*/
OMC_DISABLE_OPT
static void pump_v3_basicCold_t_eqFunction_3076(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3076};
  modelica_boolean tmp3227;
  static const MMC_DEFSTRINGLIT(tmp3228,90,"Variable violating min constraint: 0.0 <= plugFlowPipe.vol_b.dynBal.rho_start, has value: ");
  modelica_string tmp3229;
  modelica_metatype tmpMeta3230;
  static int tmp3231 = 0;
  if(!tmp3231)
  {
    tmp3227 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[224]] /* plugFlowPipe.vol_b.dynBal.rho_start PARAM */),0.0);
    if(!tmp3227)
    {
      tmp3229 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[224]] /* plugFlowPipe.vol_b.dynBal.rho_start PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta3230 = stringAppend(MMC_REFSTRINGLIT(tmp3228),tmp3229);
      {
        const char* assert_cond = "(plugFlowPipe.vol_b.dynBal.rho_start >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"E:/Daniel/sgi digital twin/Modelica/IDEAS-master/IDEAS/Fluid/Interfaces/ConservationEquation.mo",134,3,138,70,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta3230));
        } else {
          FILE_INFO info = {"E:/Daniel/sgi digital twin/Modelica/IDEAS-master/IDEAS/Fluid/Interfaces/ConservationEquation.mo",134,3,138,70,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta3230));
        }
      }
      tmp3231 = 1;
    }
  }
  threadData->lastEquationSolved = 3076;
}

/*
equation index: 3077
type: ALGORITHM

  assert(plugFlowPipe.vol_b.dynBal.mSenFac >= 1.0, "Variable violating min constraint: 1.0 <= plugFlowPipe.vol_b.dynBal.mSenFac, has value: " + String(plugFlowPipe.vol_b.dynBal.mSenFac, "g"));
*/
OMC_DISABLE_OPT
static void pump_v3_basicCold_t_eqFunction_3077(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3077};
  modelica_boolean tmp3232;
  static const MMC_DEFSTRINGLIT(tmp3233,88,"Variable violating min constraint: 1.0 <= plugFlowPipe.vol_b.dynBal.mSenFac, has value: ");
  modelica_string tmp3234;
  modelica_metatype tmpMeta3235;
  static int tmp3236 = 0;
  if(!tmp3236)
  {
    tmp3232 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[221]] /* plugFlowPipe.vol_b.dynBal.mSenFac PARAM */),1.0);
    if(!tmp3232)
    {
      tmp3234 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[221]] /* plugFlowPipe.vol_b.dynBal.mSenFac PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta3235 = stringAppend(MMC_REFSTRINGLIT(tmp3233),tmp3234);
      {
        const char* assert_cond = "(plugFlowPipe.vol_b.dynBal.mSenFac >= 1.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"E:/Daniel/sgi digital twin/Modelica/IDEAS-master/IDEAS/Fluid/Interfaces/LumpedVolumeDeclarations.mo",47,3,49,39,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta3235));
        } else {
          FILE_INFO info = {"E:/Daniel/sgi digital twin/Modelica/IDEAS-master/IDEAS/Fluid/Interfaces/LumpedVolumeDeclarations.mo",47,3,49,39,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta3235));
        }
      }
      tmp3236 = 1;
    }
  }
  threadData->lastEquationSolved = 3077;
}

/*
equation index: 3078
type: ALGORITHM

  assert(plugFlowPipe.vol_b.dynBal.traceDynamics >= Modelica.Fluid.Types.Dynamics.DynamicFreeInitial and plugFlowPipe.vol_b.dynBal.traceDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, "Variable violating min/max constraint: Modelica.Fluid.Types.Dynamics.DynamicFreeInitial <= plugFlowPipe.vol_b.dynBal.traceDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, has value: " + String(plugFlowPipe.vol_b.dynBal.traceDynamics, "d"));
*/
OMC_DISABLE_OPT
static void pump_v3_basicCold_t_eqFunction_3078(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3078};
  modelica_boolean tmp3237;
  modelica_boolean tmp3238;
  static const MMC_DEFSTRINGLIT(tmp3239,188,"Variable violating min/max constraint: Modelica.Fluid.Types.Dynamics.DynamicFreeInitial <= plugFlowPipe.vol_b.dynBal.traceDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, has value: ");
  modelica_string tmp3240;
  modelica_metatype tmpMeta3241;
  static int tmp3242 = 0;
  if(!tmp3242)
  {
    tmp3237 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[19]] /* plugFlowPipe.vol_b.dynBal.traceDynamics PARAM */),1);
    tmp3238 = LessEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[19]] /* plugFlowPipe.vol_b.dynBal.traceDynamics PARAM */),4);
    if(!(tmp3237 && tmp3238))
    {
      tmp3240 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[19]] /* plugFlowPipe.vol_b.dynBal.traceDynamics PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta3241 = stringAppend(MMC_REFSTRINGLIT(tmp3239),tmp3240);
      {
        const char* assert_cond = "(plugFlowPipe.vol_b.dynBal.traceDynamics >= Modelica.Fluid.Types.Dynamics.DynamicFreeInitial and plugFlowPipe.vol_b.dynBal.traceDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"E:/Daniel/sgi digital twin/Modelica/IDEAS-master/IDEAS/Fluid/Interfaces/LumpedVolumeDeclarations.mo",24,3,26,88,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta3241));
        } else {
          FILE_INFO info = {"E:/Daniel/sgi digital twin/Modelica/IDEAS-master/IDEAS/Fluid/Interfaces/LumpedVolumeDeclarations.mo",24,3,26,88,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta3241));
        }
      }
      tmp3242 = 1;
    }
  }
  threadData->lastEquationSolved = 3078;
}

/*
equation index: 3079
type: ALGORITHM

  assert(plugFlowPipe.vol_b.dynBal.substanceDynamics >= Modelica.Fluid.Types.Dynamics.DynamicFreeInitial and plugFlowPipe.vol_b.dynBal.substanceDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, "Variable violating min/max constraint: Modelica.Fluid.Types.Dynamics.DynamicFreeInitial <= plugFlowPipe.vol_b.dynBal.substanceDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, has value: " + String(plugFlowPipe.vol_b.dynBal.substanceDynamics, "d"));
*/
OMC_DISABLE_OPT
static void pump_v3_basicCold_t_eqFunction_3079(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3079};
  modelica_boolean tmp3243;
  modelica_boolean tmp3244;
  static const MMC_DEFSTRINGLIT(tmp3245,192,"Variable violating min/max constraint: Modelica.Fluid.Types.Dynamics.DynamicFreeInitial <= plugFlowPipe.vol_b.dynBal.substanceDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, has value: ");
  modelica_string tmp3246;
  modelica_metatype tmpMeta3247;
  static int tmp3248 = 0;
  if(!tmp3248)
  {
    tmp3243 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[18]] /* plugFlowPipe.vol_b.dynBal.substanceDynamics PARAM */),1);
    tmp3244 = LessEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[18]] /* plugFlowPipe.vol_b.dynBal.substanceDynamics PARAM */),4);
    if(!(tmp3243 && tmp3244))
    {
      tmp3246 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[18]] /* plugFlowPipe.vol_b.dynBal.substanceDynamics PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta3247 = stringAppend(MMC_REFSTRINGLIT(tmp3245),tmp3246);
      {
        const char* assert_cond = "(plugFlowPipe.vol_b.dynBal.substanceDynamics >= Modelica.Fluid.Types.Dynamics.DynamicFreeInitial and plugFlowPipe.vol_b.dynBal.substanceDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"E:/Daniel/sgi digital twin/Modelica/IDEAS-master/IDEAS/Fluid/Interfaces/LumpedVolumeDeclarations.mo",21,3,23,88,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta3247));
        } else {
          FILE_INFO info = {"E:/Daniel/sgi digital twin/Modelica/IDEAS-master/IDEAS/Fluid/Interfaces/LumpedVolumeDeclarations.mo",21,3,23,88,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta3247));
        }
      }
      tmp3248 = 1;
    }
  }
  threadData->lastEquationSolved = 3079;
}

/*
equation index: 3080
type: ALGORITHM

  assert(plugFlowPipe.vol_b.dynBal.massDynamics >= Modelica.Fluid.Types.Dynamics.DynamicFreeInitial and plugFlowPipe.vol_b.dynBal.massDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, "Variable violating min/max constraint: Modelica.Fluid.Types.Dynamics.DynamicFreeInitial <= plugFlowPipe.vol_b.dynBal.massDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, has value: " + String(plugFlowPipe.vol_b.dynBal.massDynamics, "d"));
*/
OMC_DISABLE_OPT
static void pump_v3_basicCold_t_eqFunction_3080(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3080};
  modelica_boolean tmp3249;
  modelica_boolean tmp3250;
  static const MMC_DEFSTRINGLIT(tmp3251,187,"Variable violating min/max constraint: Modelica.Fluid.Types.Dynamics.DynamicFreeInitial <= plugFlowPipe.vol_b.dynBal.massDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, has value: ");
  modelica_string tmp3252;
  modelica_metatype tmpMeta3253;
  static int tmp3254 = 0;
  if(!tmp3254)
  {
    tmp3249 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[16]] /* plugFlowPipe.vol_b.dynBal.massDynamics PARAM */),1);
    tmp3250 = LessEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[16]] /* plugFlowPipe.vol_b.dynBal.massDynamics PARAM */),4);
    if(!(tmp3249 && tmp3250))
    {
      tmp3252 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[16]] /* plugFlowPipe.vol_b.dynBal.massDynamics PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta3253 = stringAppend(MMC_REFSTRINGLIT(tmp3251),tmp3252);
      {
        const char* assert_cond = "(plugFlowPipe.vol_b.dynBal.massDynamics >= Modelica.Fluid.Types.Dynamics.DynamicFreeInitial and plugFlowPipe.vol_b.dynBal.massDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"E:/Daniel/sgi digital twin/Modelica/IDEAS-master/IDEAS/Fluid/Interfaces/LumpedVolumeDeclarations.mo",18,3,20,74,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta3253));
        } else {
          FILE_INFO info = {"E:/Daniel/sgi digital twin/Modelica/IDEAS-master/IDEAS/Fluid/Interfaces/LumpedVolumeDeclarations.mo",18,3,20,74,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta3253));
        }
      }
      tmp3254 = 1;
    }
  }
  threadData->lastEquationSolved = 3080;
}

/*
equation index: 3081
type: ALGORITHM

  assert(plugFlowPipe.vol_b.dynBal.energyDynamics >= Modelica.Fluid.Types.Dynamics.DynamicFreeInitial and plugFlowPipe.vol_b.dynBal.energyDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, "Variable violating min/max constraint: Modelica.Fluid.Types.Dynamics.DynamicFreeInitial <= plugFlowPipe.vol_b.dynBal.energyDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, has value: " + String(plugFlowPipe.vol_b.dynBal.energyDynamics, "d"));
*/
OMC_DISABLE_OPT
static void pump_v3_basicCold_t_eqFunction_3081(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3081};
  modelica_boolean tmp3255;
  modelica_boolean tmp3256;
  static const MMC_DEFSTRINGLIT(tmp3257,189,"Variable violating min/max constraint: Modelica.Fluid.Types.Dynamics.DynamicFreeInitial <= plugFlowPipe.vol_b.dynBal.energyDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, has value: ");
  modelica_string tmp3258;
  modelica_metatype tmpMeta3259;
  static int tmp3260 = 0;
  if(!tmp3260)
  {
    tmp3255 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[15]] /* plugFlowPipe.vol_b.dynBal.energyDynamics PARAM */),1);
    tmp3256 = LessEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[15]] /* plugFlowPipe.vol_b.dynBal.energyDynamics PARAM */),4);
    if(!(tmp3255 && tmp3256))
    {
      tmp3258 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[15]] /* plugFlowPipe.vol_b.dynBal.energyDynamics PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta3259 = stringAppend(MMC_REFSTRINGLIT(tmp3257),tmp3258);
      {
        const char* assert_cond = "(plugFlowPipe.vol_b.dynBal.energyDynamics >= Modelica.Fluid.Types.Dynamics.DynamicFreeInitial and plugFlowPipe.vol_b.dynBal.energyDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"E:/Daniel/sgi digital twin/Modelica/IDEAS-master/IDEAS/Fluid/Interfaces/LumpedVolumeDeclarations.mo",15,3,17,88,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta3259));
        } else {
          FILE_INFO info = {"E:/Daniel/sgi digital twin/Modelica/IDEAS-master/IDEAS/Fluid/Interfaces/LumpedVolumeDeclarations.mo",15,3,17,88,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta3259));
        }
      }
      tmp3260 = 1;
    }
  }
  threadData->lastEquationSolved = 3081;
}

/*
equation index: 3082
type: ALGORITHM

  assert(plugFlowPipe.vol_b.m_flow_small >= 0.0, "Variable violating min constraint: 0.0 <= plugFlowPipe.vol_b.m_flow_small, has value: " + String(plugFlowPipe.vol_b.m_flow_small, "g"));
*/
OMC_DISABLE_OPT
static void pump_v3_basicCold_t_eqFunction_3082(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3082};
  modelica_boolean tmp3261;
  static const MMC_DEFSTRINGLIT(tmp3262,86,"Variable violating min constraint: 0.0 <= plugFlowPipe.vol_b.m_flow_small, has value: ");
  modelica_string tmp3263;
  modelica_metatype tmpMeta3264;
  static int tmp3265 = 0;
  if(!tmp3265)
  {
    tmp3261 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[229]] /* plugFlowPipe.vol_b.m_flow_small PARAM */),0.0);
    if(!tmp3261)
    {
      tmp3263 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[229]] /* plugFlowPipe.vol_b.m_flow_small PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta3264 = stringAppend(MMC_REFSTRINGLIT(tmp3262),tmp3263);
      {
        const char* assert_cond = "(plugFlowPipe.vol_b.m_flow_small >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"E:/Daniel/sgi digital twin/Modelica/IDEAS-master/IDEAS/Fluid/MixingVolumes/BaseClasses/PartialMixingVolume.mo",25,3,27,40,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta3264));
        } else {
          FILE_INFO info = {"E:/Daniel/sgi digital twin/Modelica/IDEAS-master/IDEAS/Fluid/MixingVolumes/BaseClasses/PartialMixingVolume.mo",25,3,27,40,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta3264));
        }
      }
      tmp3265 = 1;
    }
  }
  threadData->lastEquationSolved = 3082;
}

/*
equation index: 3083
type: ALGORITHM

  assert(plugFlowPipe.vol_b.m_flow_nominal >= 0.0, "Variable violating min constraint: 0.0 <= plugFlowPipe.vol_b.m_flow_nominal, has value: " + String(plugFlowPipe.vol_b.m_flow_nominal, "g"));
*/
OMC_DISABLE_OPT
static void pump_v3_basicCold_t_eqFunction_3083(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3083};
  modelica_boolean tmp3266;
  static const MMC_DEFSTRINGLIT(tmp3267,88,"Variable violating min constraint: 0.0 <= plugFlowPipe.vol_b.m_flow_nominal, has value: ");
  modelica_string tmp3268;
  modelica_metatype tmpMeta3269;
  static int tmp3270 = 0;
  if(!tmp3270)
  {
    tmp3266 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[228]] /* plugFlowPipe.vol_b.m_flow_nominal PARAM */),0.0);
    if(!tmp3266)
    {
      tmp3268 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[228]] /* plugFlowPipe.vol_b.m_flow_nominal PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta3269 = stringAppend(MMC_REFSTRINGLIT(tmp3267),tmp3268);
      {
        const char* assert_cond = "(plugFlowPipe.vol_b.m_flow_nominal >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"E:/Daniel/sgi digital twin/Modelica/IDEAS-master/IDEAS/Fluid/MixingVolumes/BaseClasses/PartialMixingVolume.mo",20,3,21,76,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta3269));
        } else {
          FILE_INFO info = {"E:/Daniel/sgi digital twin/Modelica/IDEAS-master/IDEAS/Fluid/MixingVolumes/BaseClasses/PartialMixingVolume.mo",20,3,21,76,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta3269));
        }
      }
      tmp3270 = 1;
    }
  }
  threadData->lastEquationSolved = 3083;
}

/*
equation index: 3084
type: ALGORITHM

  assert(plugFlowPipe.vol_b.mSenFac >= 1.0, "Variable violating min constraint: 1.0 <= plugFlowPipe.vol_b.mSenFac, has value: " + String(plugFlowPipe.vol_b.mSenFac, "g"));
*/
OMC_DISABLE_OPT
static void pump_v3_basicCold_t_eqFunction_3084(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3084};
  modelica_boolean tmp3271;
  static const MMC_DEFSTRINGLIT(tmp3272,81,"Variable violating min constraint: 1.0 <= plugFlowPipe.vol_b.mSenFac, has value: ");
  modelica_string tmp3273;
  modelica_metatype tmpMeta3274;
  static int tmp3275 = 0;
  if(!tmp3275)
  {
    tmp3271 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[227]] /* plugFlowPipe.vol_b.mSenFac PARAM */),1.0);
    if(!tmp3271)
    {
      tmp3273 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[227]] /* plugFlowPipe.vol_b.mSenFac PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta3274 = stringAppend(MMC_REFSTRINGLIT(tmp3272),tmp3273);
      {
        const char* assert_cond = "(plugFlowPipe.vol_b.mSenFac >= 1.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"E:/Daniel/sgi digital twin/Modelica/IDEAS-master/IDEAS/Fluid/Interfaces/LumpedVolumeDeclarations.mo",47,3,49,39,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta3274));
        } else {
          FILE_INFO info = {"E:/Daniel/sgi digital twin/Modelica/IDEAS-master/IDEAS/Fluid/Interfaces/LumpedVolumeDeclarations.mo",47,3,49,39,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta3274));
        }
      }
      tmp3275 = 1;
    }
  }
  threadData->lastEquationSolved = 3084;
}

/*
equation index: 3085
type: ALGORITHM

  assert(plugFlowPipe.vol_b.traceDynamics >= Modelica.Fluid.Types.Dynamics.DynamicFreeInitial and plugFlowPipe.vol_b.traceDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, "Variable violating min/max constraint: Modelica.Fluid.Types.Dynamics.DynamicFreeInitial <= plugFlowPipe.vol_b.traceDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, has value: " + String(plugFlowPipe.vol_b.traceDynamics, "d"));
*/
OMC_DISABLE_OPT
static void pump_v3_basicCold_t_eqFunction_3085(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3085};
  modelica_boolean tmp3276;
  modelica_boolean tmp3277;
  static const MMC_DEFSTRINGLIT(tmp3278,181,"Variable violating min/max constraint: Modelica.Fluid.Types.Dynamics.DynamicFreeInitial <= plugFlowPipe.vol_b.traceDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, has value: ");
  modelica_string tmp3279;
  modelica_metatype tmpMeta3280;
  static int tmp3281 = 0;
  if(!tmp3281)
  {
    tmp3276 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[24]] /* plugFlowPipe.vol_b.traceDynamics PARAM */),1);
    tmp3277 = LessEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[24]] /* plugFlowPipe.vol_b.traceDynamics PARAM */),4);
    if(!(tmp3276 && tmp3277))
    {
      tmp3279 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[24]] /* plugFlowPipe.vol_b.traceDynamics PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta3280 = stringAppend(MMC_REFSTRINGLIT(tmp3278),tmp3279);
      {
        const char* assert_cond = "(plugFlowPipe.vol_b.traceDynamics >= Modelica.Fluid.Types.Dynamics.DynamicFreeInitial and plugFlowPipe.vol_b.traceDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"E:/Daniel/sgi digital twin/Modelica/IDEAS-master/IDEAS/Fluid/Interfaces/LumpedVolumeDeclarations.mo",24,3,26,88,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta3280));
        } else {
          FILE_INFO info = {"E:/Daniel/sgi digital twin/Modelica/IDEAS-master/IDEAS/Fluid/Interfaces/LumpedVolumeDeclarations.mo",24,3,26,88,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta3280));
        }
      }
      tmp3281 = 1;
    }
  }
  threadData->lastEquationSolved = 3085;
}

/*
equation index: 3086
type: ALGORITHM

  assert(plugFlowPipe.vol_b.substanceDynamics >= Modelica.Fluid.Types.Dynamics.DynamicFreeInitial and plugFlowPipe.vol_b.substanceDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, "Variable violating min/max constraint: Modelica.Fluid.Types.Dynamics.DynamicFreeInitial <= plugFlowPipe.vol_b.substanceDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, has value: " + String(plugFlowPipe.vol_b.substanceDynamics, "d"));
*/
OMC_DISABLE_OPT
static void pump_v3_basicCold_t_eqFunction_3086(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3086};
  modelica_boolean tmp3282;
  modelica_boolean tmp3283;
  static const MMC_DEFSTRINGLIT(tmp3284,185,"Variable violating min/max constraint: Modelica.Fluid.Types.Dynamics.DynamicFreeInitial <= plugFlowPipe.vol_b.substanceDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, has value: ");
  modelica_string tmp3285;
  modelica_metatype tmpMeta3286;
  static int tmp3287 = 0;
  if(!tmp3287)
  {
    tmp3282 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[23]] /* plugFlowPipe.vol_b.substanceDynamics PARAM */),1);
    tmp3283 = LessEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[23]] /* plugFlowPipe.vol_b.substanceDynamics PARAM */),4);
    if(!(tmp3282 && tmp3283))
    {
      tmp3285 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[23]] /* plugFlowPipe.vol_b.substanceDynamics PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta3286 = stringAppend(MMC_REFSTRINGLIT(tmp3284),tmp3285);
      {
        const char* assert_cond = "(plugFlowPipe.vol_b.substanceDynamics >= Modelica.Fluid.Types.Dynamics.DynamicFreeInitial and plugFlowPipe.vol_b.substanceDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"E:/Daniel/sgi digital twin/Modelica/IDEAS-master/IDEAS/Fluid/Interfaces/LumpedVolumeDeclarations.mo",21,3,23,88,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta3286));
        } else {
          FILE_INFO info = {"E:/Daniel/sgi digital twin/Modelica/IDEAS-master/IDEAS/Fluid/Interfaces/LumpedVolumeDeclarations.mo",21,3,23,88,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta3286));
        }
      }
      tmp3287 = 1;
    }
  }
  threadData->lastEquationSolved = 3086;
}

/*
equation index: 3087
type: ALGORITHM

  assert(plugFlowPipe.vol_b.massDynamics >= Modelica.Fluid.Types.Dynamics.DynamicFreeInitial and plugFlowPipe.vol_b.massDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, "Variable violating min/max constraint: Modelica.Fluid.Types.Dynamics.DynamicFreeInitial <= plugFlowPipe.vol_b.massDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, has value: " + String(plugFlowPipe.vol_b.massDynamics, "d"));
*/
OMC_DISABLE_OPT
static void pump_v3_basicCold_t_eqFunction_3087(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3087};
  modelica_boolean tmp3288;
  modelica_boolean tmp3289;
  static const MMC_DEFSTRINGLIT(tmp3290,180,"Variable violating min/max constraint: Modelica.Fluid.Types.Dynamics.DynamicFreeInitial <= plugFlowPipe.vol_b.massDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, has value: ");
  modelica_string tmp3291;
  modelica_metatype tmpMeta3292;
  static int tmp3293 = 0;
  if(!tmp3293)
  {
    tmp3288 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[21]] /* plugFlowPipe.vol_b.massDynamics PARAM */),1);
    tmp3289 = LessEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[21]] /* plugFlowPipe.vol_b.massDynamics PARAM */),4);
    if(!(tmp3288 && tmp3289))
    {
      tmp3291 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[21]] /* plugFlowPipe.vol_b.massDynamics PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta3292 = stringAppend(MMC_REFSTRINGLIT(tmp3290),tmp3291);
      {
        const char* assert_cond = "(plugFlowPipe.vol_b.massDynamics >= Modelica.Fluid.Types.Dynamics.DynamicFreeInitial and plugFlowPipe.vol_b.massDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"E:/Daniel/sgi digital twin/Modelica/IDEAS-master/IDEAS/Fluid/Interfaces/LumpedVolumeDeclarations.mo",18,3,20,74,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta3292));
        } else {
          FILE_INFO info = {"E:/Daniel/sgi digital twin/Modelica/IDEAS-master/IDEAS/Fluid/Interfaces/LumpedVolumeDeclarations.mo",18,3,20,74,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta3292));
        }
      }
      tmp3293 = 1;
    }
  }
  threadData->lastEquationSolved = 3087;
}

/*
equation index: 3088
type: ALGORITHM

  assert(plugFlowPipe.vol_b.energyDynamics >= Modelica.Fluid.Types.Dynamics.DynamicFreeInitial and plugFlowPipe.vol_b.energyDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, "Variable violating min/max constraint: Modelica.Fluid.Types.Dynamics.DynamicFreeInitial <= plugFlowPipe.vol_b.energyDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, has value: " + String(plugFlowPipe.vol_b.energyDynamics, "d"));
*/
OMC_DISABLE_OPT
static void pump_v3_basicCold_t_eqFunction_3088(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3088};
  modelica_boolean tmp3294;
  modelica_boolean tmp3295;
  static const MMC_DEFSTRINGLIT(tmp3296,182,"Variable violating min/max constraint: Modelica.Fluid.Types.Dynamics.DynamicFreeInitial <= plugFlowPipe.vol_b.energyDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, has value: ");
  modelica_string tmp3297;
  modelica_metatype tmpMeta3298;
  static int tmp3299 = 0;
  if(!tmp3299)
  {
    tmp3294 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[20]] /* plugFlowPipe.vol_b.energyDynamics PARAM */),1);
    tmp3295 = LessEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[20]] /* plugFlowPipe.vol_b.energyDynamics PARAM */),4);
    if(!(tmp3294 && tmp3295))
    {
      tmp3297 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[20]] /* plugFlowPipe.vol_b.energyDynamics PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta3298 = stringAppend(MMC_REFSTRINGLIT(tmp3296),tmp3297);
      {
        const char* assert_cond = "(plugFlowPipe.vol_b.energyDynamics >= Modelica.Fluid.Types.Dynamics.DynamicFreeInitial and plugFlowPipe.vol_b.energyDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"E:/Daniel/sgi digital twin/Modelica/IDEAS-master/IDEAS/Fluid/Interfaces/LumpedVolumeDeclarations.mo",15,3,17,88,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta3298));
        } else {
          FILE_INFO info = {"E:/Daniel/sgi digital twin/Modelica/IDEAS-master/IDEAS/Fluid/Interfaces/LumpedVolumeDeclarations.mo",15,3,17,88,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta3298));
        }
      }
      tmp3299 = 1;
    }
  }
  threadData->lastEquationSolved = 3088;
}

/*
equation index: 3089
type: ALGORITHM

  assert(plugFlowPipe.timDel.m_flow_nominal >= 0.0, "Variable violating min constraint: 0.0 <= plugFlowPipe.timDel.m_flow_nominal, has value: " + String(plugFlowPipe.timDel.m_flow_nominal, "g"));
*/
OMC_DISABLE_OPT
static void pump_v3_basicCold_t_eqFunction_3089(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3089};
  modelica_boolean tmp3300;
  static const MMC_DEFSTRINGLIT(tmp3301,89,"Variable violating min constraint: 0.0 <= plugFlowPipe.timDel.m_flow_nominal, has value: ");
  modelica_string tmp3302;
  modelica_metatype tmpMeta3303;
  static int tmp3304 = 0;
  if(!tmp3304)
  {
    tmp3300 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[173]] /* plugFlowPipe.timDel.m_flow_nominal PARAM */),0.0);
    if(!tmp3300)
    {
      tmp3302 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[173]] /* plugFlowPipe.timDel.m_flow_nominal PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta3303 = stringAppend(MMC_REFSTRINGLIT(tmp3301),tmp3302);
      {
        const char* assert_cond = "(plugFlowPipe.timDel.m_flow_nominal >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"E:/Daniel/sgi digital twin/Modelica/IDEAS-master/IDEAS/Fluid/FixedResistances/BaseClasses/PlugFlowTransportDelay.mo",15,3,16,76,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta3303));
        } else {
          FILE_INFO info = {"E:/Daniel/sgi digital twin/Modelica/IDEAS-master/IDEAS/Fluid/FixedResistances/BaseClasses/PlugFlowTransportDelay.mo",15,3,16,76,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta3303));
        }
      }
      tmp3304 = 1;
    }
  }
  threadData->lastEquationSolved = 3089;
}

/*
equation index: 3090
type: ALGORITHM

  assert(plugFlowPipe.timDel.rho >= 0.0, "Variable violating min constraint: 0.0 <= plugFlowPipe.timDel.rho, has value: " + String(plugFlowPipe.timDel.rho, "g"));
*/
OMC_DISABLE_OPT
static void pump_v3_basicCold_t_eqFunction_3090(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3090};
  modelica_boolean tmp3305;
  static const MMC_DEFSTRINGLIT(tmp3306,78,"Variable violating min constraint: 0.0 <= plugFlowPipe.timDel.rho, has value: ");
  modelica_string tmp3307;
  modelica_metatype tmpMeta3308;
  static int tmp3309 = 0;
  if(!tmp3309)
  {
    tmp3305 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[175]] /* plugFlowPipe.timDel.rho PARAM */),0.0);
    if(!tmp3305)
    {
      tmp3307 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[175]] /* plugFlowPipe.timDel.rho PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta3308 = stringAppend(MMC_REFSTRINGLIT(tmp3306),tmp3307);
      {
        const char* assert_cond = "(plugFlowPipe.timDel.rho >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"E:/Daniel/sgi digital twin/Modelica/IDEAS-master/IDEAS/Fluid/FixedResistances/BaseClasses/PlugFlowTransportDelay.mo",7,3,7,70,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta3308));
        } else {
          FILE_INFO info = {"E:/Daniel/sgi digital twin/Modelica/IDEAS-master/IDEAS/Fluid/FixedResistances/BaseClasses/PlugFlowTransportDelay.mo",7,3,7,70,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta3308));
        }
      }
      tmp3309 = 1;
    }
  }
  threadData->lastEquationSolved = 3090;
}

/*
equation index: 3091
type: ALGORITHM

  assert(plugFlowPipe.senMasFlo.m_flow_small >= 0.0, "Variable violating min constraint: 0.0 <= plugFlowPipe.senMasFlo.m_flow_small, has value: " + String(plugFlowPipe.senMasFlo.m_flow_small, "g"));
*/
OMC_DISABLE_OPT
static void pump_v3_basicCold_t_eqFunction_3091(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3091};
  modelica_boolean tmp3310;
  static const MMC_DEFSTRINGLIT(tmp3311,90,"Variable violating min constraint: 0.0 <= plugFlowPipe.senMasFlo.m_flow_small, has value: ");
  modelica_string tmp3312;
  modelica_metatype tmpMeta3313;
  static int tmp3314 = 0;
  if(!tmp3314)
  {
    tmp3310 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[164]] /* plugFlowPipe.senMasFlo.m_flow_small PARAM */),0.0);
    if(!tmp3310)
    {
      tmp3312 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[164]] /* plugFlowPipe.senMasFlo.m_flow_small PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta3313 = stringAppend(MMC_REFSTRINGLIT(tmp3311),tmp3312);
      {
        const char* assert_cond = "(plugFlowPipe.senMasFlo.m_flow_small >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"E:/Daniel/sgi digital twin/Modelica/IDEAS-master/IDEAS/Fluid/Sensors/BaseClasses/PartialFlowSensor.mo",8,3,11,40,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta3313));
        } else {
          FILE_INFO info = {"E:/Daniel/sgi digital twin/Modelica/IDEAS-master/IDEAS/Fluid/Sensors/BaseClasses/PartialFlowSensor.mo",8,3,11,40,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta3313));
        }
      }
      tmp3314 = 1;
    }
  }
  threadData->lastEquationSolved = 3091;
}

/*
equation index: 3092
type: ALGORITHM

  assert(plugFlowPipe.senMasFlo.m_flow_nominal >= 0.0, "Variable violating min constraint: 0.0 <= plugFlowPipe.senMasFlo.m_flow_nominal, has value: " + String(plugFlowPipe.senMasFlo.m_flow_nominal, "g"));
*/
OMC_DISABLE_OPT
static void pump_v3_basicCold_t_eqFunction_3092(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3092};
  modelica_boolean tmp3315;
  static const MMC_DEFSTRINGLIT(tmp3316,92,"Variable violating min constraint: 0.0 <= plugFlowPipe.senMasFlo.m_flow_nominal, has value: ");
  modelica_string tmp3317;
  modelica_metatype tmpMeta3318;
  static int tmp3319 = 0;
  if(!tmp3319)
  {
    tmp3315 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[163]] /* plugFlowPipe.senMasFlo.m_flow_nominal PARAM */),0.0);
    if(!tmp3315)
    {
      tmp3317 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[163]] /* plugFlowPipe.senMasFlo.m_flow_nominal PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta3318 = stringAppend(MMC_REFSTRINGLIT(tmp3316),tmp3317);
      {
        const char* assert_cond = "(plugFlowPipe.senMasFlo.m_flow_nominal >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"E:/Daniel/sgi digital twin/Modelica/IDEAS-master/IDEAS/Fluid/Sensors/BaseClasses/PartialFlowSensor.mo",5,3,7,51,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta3318));
        } else {
          FILE_INFO info = {"E:/Daniel/sgi digital twin/Modelica/IDEAS-master/IDEAS/Fluid/Sensors/BaseClasses/PartialFlowSensor.mo",5,3,7,51,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta3318));
        }
      }
      tmp3319 = 1;
    }
  }
  threadData->lastEquationSolved = 3092;
}

/*
equation index: 3093
type: ALGORITHM

  assert(plugFlowPipe.heaLos_b.sta_default.p >= 0.0 and plugFlowPipe.heaLos_b.sta_default.p <= 1e8, "Variable violating min/max constraint: 0.0 <= plugFlowPipe.heaLos_b.sta_default.p <= 1e8, has value: " + String(plugFlowPipe.heaLos_b.sta_default.p, "g"));
*/
OMC_DISABLE_OPT
static void pump_v3_basicCold_t_eqFunction_3093(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3093};
  modelica_boolean tmp3320;
  modelica_boolean tmp3321;
  static const MMC_DEFSTRINGLIT(tmp3322,101,"Variable violating min/max constraint: 0.0 <= plugFlowPipe.heaLos_b.sta_default.p <= 1e8, has value: ");
  modelica_string tmp3323;
  modelica_metatype tmpMeta3324;
  static int tmp3325 = 0;
  if(!tmp3325)
  {
    tmp3320 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[125]] /* plugFlowPipe.heaLos_b.sta_default.p PARAM */),0.0);
    tmp3321 = LessEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[125]] /* plugFlowPipe.heaLos_b.sta_default.p PARAM */),1e8);
    if(!(tmp3320 && tmp3321))
    {
      tmp3323 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[125]] /* plugFlowPipe.heaLos_b.sta_default.p PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta3324 = stringAppend(MMC_REFSTRINGLIT(tmp3322),tmp3323);
      {
        const char* assert_cond = "(plugFlowPipe.heaLos_b.sta_default.p >= 0.0 and plugFlowPipe.heaLos_b.sta_default.p <= 1e8)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/Daniel/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Media/package.mo",5869,7,5869,55,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta3324));
        } else {
          FILE_INFO info = {"C:/Users/Daniel/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Media/package.mo",5869,7,5869,55,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta3324));
        }
      }
      tmp3325 = 1;
    }
  }
  threadData->lastEquationSolved = 3093;
}

/*
equation index: 3094
type: ALGORITHM

  assert(plugFlowPipe.heaLos_b.sta_default.T >= 1.0 and plugFlowPipe.heaLos_b.sta_default.T <= 1e4, "Variable violating min/max constraint: 1.0 <= plugFlowPipe.heaLos_b.sta_default.T <= 1e4, has value: " + String(plugFlowPipe.heaLos_b.sta_default.T, "g"));
*/
OMC_DISABLE_OPT
static void pump_v3_basicCold_t_eqFunction_3094(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3094};
  modelica_boolean tmp3326;
  modelica_boolean tmp3327;
  static const MMC_DEFSTRINGLIT(tmp3328,101,"Variable violating min/max constraint: 1.0 <= plugFlowPipe.heaLos_b.sta_default.T <= 1e4, has value: ");
  modelica_string tmp3329;
  modelica_metatype tmpMeta3330;
  static int tmp3331 = 0;
  if(!tmp3331)
  {
    tmp3326 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[124]] /* plugFlowPipe.heaLos_b.sta_default.T PARAM */),1.0);
    tmp3327 = LessEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[124]] /* plugFlowPipe.heaLos_b.sta_default.T PARAM */),1e4);
    if(!(tmp3326 && tmp3327))
    {
      tmp3329 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[124]] /* plugFlowPipe.heaLos_b.sta_default.T PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta3330 = stringAppend(MMC_REFSTRINGLIT(tmp3328),tmp3329);
      {
        const char* assert_cond = "(plugFlowPipe.heaLos_b.sta_default.T >= 1.0 and plugFlowPipe.heaLos_b.sta_default.T <= 1e4)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/Daniel/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Media/package.mo",5870,7,5870,44,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta3330));
        } else {
          FILE_INFO info = {"C:/Users/Daniel/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Media/package.mo",5870,7,5870,44,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta3330));
        }
      }
      tmp3331 = 1;
    }
  }
  threadData->lastEquationSolved = 3094;
}

/*
equation index: 3095
type: ALGORITHM

  assert(plugFlowPipe.heaLos_b.T_start >= 0.0, "Variable violating min constraint: 0.0 <= plugFlowPipe.heaLos_b.T_start, has value: " + String(plugFlowPipe.heaLos_b.T_start, "g"));
*/
OMC_DISABLE_OPT
static void pump_v3_basicCold_t_eqFunction_3095(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3095};
  modelica_boolean tmp3332;
  static const MMC_DEFSTRINGLIT(tmp3333,84,"Variable violating min constraint: 0.0 <= plugFlowPipe.heaLos_b.T_start, has value: ");
  modelica_string tmp3334;
  modelica_metatype tmpMeta3335;
  static int tmp3336 = 0;
  if(!tmp3336)
  {
    tmp3332 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[118]] /* plugFlowPipe.heaLos_b.T_start PARAM */),0.0);
    if(!tmp3332)
    {
      tmp3334 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[118]] /* plugFlowPipe.heaLos_b.T_start PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta3335 = stringAppend(MMC_REFSTRINGLIT(tmp3333),tmp3334);
      {
        const char* assert_cond = "(plugFlowPipe.heaLos_b.T_start >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"E:/Daniel/sgi digital twin/Modelica/IDEAS-master/IDEAS/Fluid/FixedResistances/BaseClasses/PlugFlowHeatLoss.mo",16,3,16,79,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta3335));
        } else {
          FILE_INFO info = {"E:/Daniel/sgi digital twin/Modelica/IDEAS-master/IDEAS/Fluid/FixedResistances/BaseClasses/PlugFlowHeatLoss.mo",16,3,16,79,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta3335));
        }
      }
      tmp3336 = 1;
    }
  }
  threadData->lastEquationSolved = 3095;
}

/*
equation index: 3096
type: ALGORITHM

  assert(plugFlowPipe.m_flow_small >= 0.0, "Variable violating min constraint: 0.0 <= plugFlowPipe.m_flow_small, has value: " + String(plugFlowPipe.m_flow_small, "g"));
*/
OMC_DISABLE_OPT
static void pump_v3_basicCold_t_eqFunction_3096(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3096};
  modelica_boolean tmp3337;
  static const MMC_DEFSTRINGLIT(tmp3338,80,"Variable violating min constraint: 0.0 <= plugFlowPipe.m_flow_small, has value: ");
  modelica_string tmp3339;
  modelica_metatype tmpMeta3340;
  static int tmp3341 = 0;
  if(!tmp3341)
  {
    tmp3337 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[130]] /* plugFlowPipe.m_flow_small PARAM */),0.0);
    if(!tmp3337)
    {
      tmp3339 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[130]] /* plugFlowPipe.m_flow_small PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta3340 = stringAppend(MMC_REFSTRINGLIT(tmp3338),tmp3339);
      {
        const char* assert_cond = "(plugFlowPipe.m_flow_small >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"E:/Daniel/sgi digital twin/Modelica/IDEAS-master/IDEAS/Fluid/Interfaces/PartialTwoPortInterface.mo",10,3,12,40,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta3340));
        } else {
          FILE_INFO info = {"E:/Daniel/sgi digital twin/Modelica/IDEAS-master/IDEAS/Fluid/Interfaces/PartialTwoPortInterface.mo",10,3,12,40,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta3340));
        }
      }
      tmp3341 = 1;
    }
  }
  threadData->lastEquationSolved = 3096;
}

/*
equation index: 3097
type: ALGORITHM

  assert(plugFlowPipe.heaLos_b.m_flow_small >= -1e5 and plugFlowPipe.heaLos_b.m_flow_small <= 1e5, "Variable violating min/max constraint: -1e5 <= plugFlowPipe.heaLos_b.m_flow_small <= 1e5, has value: " + String(plugFlowPipe.heaLos_b.m_flow_small, "g"));
*/
OMC_DISABLE_OPT
static void pump_v3_basicCold_t_eqFunction_3097(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3097};
  modelica_boolean tmp3342;
  modelica_boolean tmp3343;
  static const MMC_DEFSTRINGLIT(tmp3344,101,"Variable violating min/max constraint: -1e5 <= plugFlowPipe.heaLos_b.m_flow_small <= 1e5, has value: ");
  modelica_string tmp3345;
  modelica_metatype tmpMeta3346;
  static int tmp3347 = 0;
  if(!tmp3347)
  {
    tmp3342 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[122]] /* plugFlowPipe.heaLos_b.m_flow_small PARAM */),-1e5);
    tmp3343 = LessEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[122]] /* plugFlowPipe.heaLos_b.m_flow_small PARAM */),1e5);
    if(!(tmp3342 && tmp3343))
    {
      tmp3345 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[122]] /* plugFlowPipe.heaLos_b.m_flow_small PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta3346 = stringAppend(MMC_REFSTRINGLIT(tmp3344),tmp3345);
      {
        const char* assert_cond = "(plugFlowPipe.heaLos_b.m_flow_small >= -1e5 and plugFlowPipe.heaLos_b.m_flow_small <= 1e5)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"E:/Daniel/sgi digital twin/Modelica/IDEAS-master/IDEAS/Fluid/Interfaces/PartialTwoPortTransport.mo",17,3,19,41,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta3346));
        } else {
          FILE_INFO info = {"E:/Daniel/sgi digital twin/Modelica/IDEAS-master/IDEAS/Fluid/Interfaces/PartialTwoPortTransport.mo",17,3,19,41,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta3346));
        }
      }
      tmp3347 = 1;
    }
  }
  threadData->lastEquationSolved = 3097;
}

/*
equation index: 3098
type: ALGORITHM

  assert(plugFlowPipe.heaLos_b.m_flow_start >= -1e5 and plugFlowPipe.heaLos_b.m_flow_start <= 1e5, "Variable violating min/max constraint: -1e5 <= plugFlowPipe.heaLos_b.m_flow_start <= 1e5, has value: " + String(plugFlowPipe.heaLos_b.m_flow_start, "g"));
*/
OMC_DISABLE_OPT
static void pump_v3_basicCold_t_eqFunction_3098(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3098};
  modelica_boolean tmp3348;
  modelica_boolean tmp3349;
  static const MMC_DEFSTRINGLIT(tmp3350,101,"Variable violating min/max constraint: -1e5 <= plugFlowPipe.heaLos_b.m_flow_start <= 1e5, has value: ");
  modelica_string tmp3351;
  modelica_metatype tmpMeta3352;
  static int tmp3353 = 0;
  if(!tmp3353)
  {
    tmp3348 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[123]] /* plugFlowPipe.heaLos_b.m_flow_start PARAM */),-1e5);
    tmp3349 = LessEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[123]] /* plugFlowPipe.heaLos_b.m_flow_start PARAM */),1e5);
    if(!(tmp3348 && tmp3349))
    {
      tmp3351 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[123]] /* plugFlowPipe.heaLos_b.m_flow_start PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta3352 = stringAppend(MMC_REFSTRINGLIT(tmp3350),tmp3351);
      {
        const char* assert_cond = "(plugFlowPipe.heaLos_b.m_flow_start >= -1e5 and plugFlowPipe.heaLos_b.m_flow_start <= 1e5)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"E:/Daniel/sgi digital twin/Modelica/IDEAS-master/IDEAS/Fluid/Interfaces/PartialTwoPortTransport.mo",12,3,14,41,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta3352));
        } else {
          FILE_INFO info = {"E:/Daniel/sgi digital twin/Modelica/IDEAS-master/IDEAS/Fluid/Interfaces/PartialTwoPortTransport.mo",12,3,14,41,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta3352));
        }
      }
      tmp3353 = 1;
    }
  }
  threadData->lastEquationSolved = 3098;
}

/*
equation index: 3099
type: ALGORITHM

  assert(plugFlowPipe.heaLos_a.sta_default.p >= 0.0 and plugFlowPipe.heaLos_a.sta_default.p <= 1e8, "Variable violating min/max constraint: 0.0 <= plugFlowPipe.heaLos_a.sta_default.p <= 1e8, has value: " + String(plugFlowPipe.heaLos_a.sta_default.p, "g"));
*/
OMC_DISABLE_OPT
static void pump_v3_basicCold_t_eqFunction_3099(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3099};
  modelica_boolean tmp3354;
  modelica_boolean tmp3355;
  static const MMC_DEFSTRINGLIT(tmp3356,101,"Variable violating min/max constraint: 0.0 <= plugFlowPipe.heaLos_a.sta_default.p <= 1e8, has value: ");
  modelica_string tmp3357;
  modelica_metatype tmpMeta3358;
  static int tmp3359 = 0;
  if(!tmp3359)
  {
    tmp3354 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[114]] /* plugFlowPipe.heaLos_a.sta_default.p PARAM */),0.0);
    tmp3355 = LessEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[114]] /* plugFlowPipe.heaLos_a.sta_default.p PARAM */),1e8);
    if(!(tmp3354 && tmp3355))
    {
      tmp3357 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[114]] /* plugFlowPipe.heaLos_a.sta_default.p PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta3358 = stringAppend(MMC_REFSTRINGLIT(tmp3356),tmp3357);
      {
        const char* assert_cond = "(plugFlowPipe.heaLos_a.sta_default.p >= 0.0 and plugFlowPipe.heaLos_a.sta_default.p <= 1e8)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/Daniel/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Media/package.mo",5869,7,5869,55,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta3358));
        } else {
          FILE_INFO info = {"C:/Users/Daniel/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Media/package.mo",5869,7,5869,55,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta3358));
        }
      }
      tmp3359 = 1;
    }
  }
  threadData->lastEquationSolved = 3099;
}

/*
equation index: 3100
type: ALGORITHM

  assert(plugFlowPipe.heaLos_a.sta_default.T >= 1.0 and plugFlowPipe.heaLos_a.sta_default.T <= 1e4, "Variable violating min/max constraint: 1.0 <= plugFlowPipe.heaLos_a.sta_default.T <= 1e4, has value: " + String(plugFlowPipe.heaLos_a.sta_default.T, "g"));
*/
OMC_DISABLE_OPT
static void pump_v3_basicCold_t_eqFunction_3100(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3100};
  modelica_boolean tmp3360;
  modelica_boolean tmp3361;
  static const MMC_DEFSTRINGLIT(tmp3362,101,"Variable violating min/max constraint: 1.0 <= plugFlowPipe.heaLos_a.sta_default.T <= 1e4, has value: ");
  modelica_string tmp3363;
  modelica_metatype tmpMeta3364;
  static int tmp3365 = 0;
  if(!tmp3365)
  {
    tmp3360 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[113]] /* plugFlowPipe.heaLos_a.sta_default.T PARAM */),1.0);
    tmp3361 = LessEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[113]] /* plugFlowPipe.heaLos_a.sta_default.T PARAM */),1e4);
    if(!(tmp3360 && tmp3361))
    {
      tmp3363 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[113]] /* plugFlowPipe.heaLos_a.sta_default.T PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta3364 = stringAppend(MMC_REFSTRINGLIT(tmp3362),tmp3363);
      {
        const char* assert_cond = "(plugFlowPipe.heaLos_a.sta_default.T >= 1.0 and plugFlowPipe.heaLos_a.sta_default.T <= 1e4)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/Daniel/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Media/package.mo",5870,7,5870,44,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta3364));
        } else {
          FILE_INFO info = {"C:/Users/Daniel/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Media/package.mo",5870,7,5870,44,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta3364));
        }
      }
      tmp3365 = 1;
    }
  }
  threadData->lastEquationSolved = 3100;
}

/*
equation index: 3101
type: ALGORITHM

  assert(plugFlowPipe.T_start_in >= 0.0, "Variable violating min constraint: 0.0 <= plugFlowPipe.T_start_in, has value: " + String(plugFlowPipe.T_start_in, "g"));
*/
OMC_DISABLE_OPT
static void pump_v3_basicCold_t_eqFunction_3101(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3101};
  modelica_boolean tmp3366;
  static const MMC_DEFSTRINGLIT(tmp3367,78,"Variable violating min constraint: 0.0 <= plugFlowPipe.T_start_in, has value: ");
  modelica_string tmp3368;
  modelica_metatype tmpMeta3369;
  static int tmp3370 = 0;
  if(!tmp3370)
  {
    tmp3366 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[85]] /* plugFlowPipe.T_start_in PARAM */),0.0);
    if(!tmp3366)
    {
      tmp3368 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[85]] /* plugFlowPipe.T_start_in PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta3369 = stringAppend(MMC_REFSTRINGLIT(tmp3367),tmp3368);
      {
        const char* assert_cond = "(plugFlowPipe.T_start_in >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"E:/Daniel/sgi digital twin/Modelica/IDEAS-master/IDEAS/Fluid/FixedResistances/BaseClasses/PlugFlowPipe.mo",61,3,63,46,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta3369));
        } else {
          FILE_INFO info = {"E:/Daniel/sgi digital twin/Modelica/IDEAS-master/IDEAS/Fluid/FixedResistances/BaseClasses/PlugFlowPipe.mo",61,3,63,46,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta3369));
        }
      }
      tmp3370 = 1;
    }
  }
  threadData->lastEquationSolved = 3101;
}

/*
equation index: 3102
type: ALGORITHM

  assert(plugFlowPipe.heaLos_a.T_start >= 0.0, "Variable violating min constraint: 0.0 <= plugFlowPipe.heaLos_a.T_start, has value: " + String(plugFlowPipe.heaLos_a.T_start, "g"));
*/
OMC_DISABLE_OPT
static void pump_v3_basicCold_t_eqFunction_3102(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3102};
  modelica_boolean tmp3371;
  static const MMC_DEFSTRINGLIT(tmp3372,84,"Variable violating min constraint: 0.0 <= plugFlowPipe.heaLos_a.T_start, has value: ");
  modelica_string tmp3373;
  modelica_metatype tmpMeta3374;
  static int tmp3375 = 0;
  if(!tmp3375)
  {
    tmp3371 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[105]] /* plugFlowPipe.heaLos_a.T_start PARAM */),0.0);
    if(!tmp3371)
    {
      tmp3373 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[105]] /* plugFlowPipe.heaLos_a.T_start PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta3374 = stringAppend(MMC_REFSTRINGLIT(tmp3372),tmp3373);
      {
        const char* assert_cond = "(plugFlowPipe.heaLos_a.T_start >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"E:/Daniel/sgi digital twin/Modelica/IDEAS-master/IDEAS/Fluid/FixedResistances/BaseClasses/PlugFlowHeatLoss.mo",16,3,16,79,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta3374));
        } else {
          FILE_INFO info = {"E:/Daniel/sgi digital twin/Modelica/IDEAS-master/IDEAS/Fluid/FixedResistances/BaseClasses/PlugFlowHeatLoss.mo",16,3,16,79,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta3374));
        }
      }
      tmp3375 = 1;
    }
  }
  threadData->lastEquationSolved = 3102;
}

/*
equation index: 3103
type: ALGORITHM

  assert(plugFlowPipe.heaLos_a.m_flow_small >= -1e5 and plugFlowPipe.heaLos_a.m_flow_small <= 1e5, "Variable violating min/max constraint: -1e5 <= plugFlowPipe.heaLos_a.m_flow_small <= 1e5, has value: " + String(plugFlowPipe.heaLos_a.m_flow_small, "g"));
*/
OMC_DISABLE_OPT
static void pump_v3_basicCold_t_eqFunction_3103(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3103};
  modelica_boolean tmp3376;
  modelica_boolean tmp3377;
  static const MMC_DEFSTRINGLIT(tmp3378,101,"Variable violating min/max constraint: -1e5 <= plugFlowPipe.heaLos_a.m_flow_small <= 1e5, has value: ");
  modelica_string tmp3379;
  modelica_metatype tmpMeta3380;
  static int tmp3381 = 0;
  if(!tmp3381)
  {
    tmp3376 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[109]] /* plugFlowPipe.heaLos_a.m_flow_small PARAM */),-1e5);
    tmp3377 = LessEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[109]] /* plugFlowPipe.heaLos_a.m_flow_small PARAM */),1e5);
    if(!(tmp3376 && tmp3377))
    {
      tmp3379 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[109]] /* plugFlowPipe.heaLos_a.m_flow_small PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta3380 = stringAppend(MMC_REFSTRINGLIT(tmp3378),tmp3379);
      {
        const char* assert_cond = "(plugFlowPipe.heaLos_a.m_flow_small >= -1e5 and plugFlowPipe.heaLos_a.m_flow_small <= 1e5)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"E:/Daniel/sgi digital twin/Modelica/IDEAS-master/IDEAS/Fluid/Interfaces/PartialTwoPortTransport.mo",17,3,19,41,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta3380));
        } else {
          FILE_INFO info = {"E:/Daniel/sgi digital twin/Modelica/IDEAS-master/IDEAS/Fluid/Interfaces/PartialTwoPortTransport.mo",17,3,19,41,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta3380));
        }
      }
      tmp3381 = 1;
    }
  }
  threadData->lastEquationSolved = 3103;
}

/*
equation index: 3104
type: ALGORITHM

  assert(plugFlowPipe.heaLos_a.m_flow_start >= -1e5 and plugFlowPipe.heaLos_a.m_flow_start <= 1e5, "Variable violating min/max constraint: -1e5 <= plugFlowPipe.heaLos_a.m_flow_start <= 1e5, has value: " + String(plugFlowPipe.heaLos_a.m_flow_start, "g"));
*/
OMC_DISABLE_OPT
static void pump_v3_basicCold_t_eqFunction_3104(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3104};
  modelica_boolean tmp3382;
  modelica_boolean tmp3383;
  static const MMC_DEFSTRINGLIT(tmp3384,101,"Variable violating min/max constraint: -1e5 <= plugFlowPipe.heaLos_a.m_flow_start <= 1e5, has value: ");
  modelica_string tmp3385;
  modelica_metatype tmpMeta3386;
  static int tmp3387 = 0;
  if(!tmp3387)
  {
    tmp3382 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[110]] /* plugFlowPipe.heaLos_a.m_flow_start PARAM */),-1e5);
    tmp3383 = LessEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[110]] /* plugFlowPipe.heaLos_a.m_flow_start PARAM */),1e5);
    if(!(tmp3382 && tmp3383))
    {
      tmp3385 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[110]] /* plugFlowPipe.heaLos_a.m_flow_start PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta3386 = stringAppend(MMC_REFSTRINGLIT(tmp3384),tmp3385);
      {
        const char* assert_cond = "(plugFlowPipe.heaLos_a.m_flow_start >= -1e5 and plugFlowPipe.heaLos_a.m_flow_start <= 1e5)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"E:/Daniel/sgi digital twin/Modelica/IDEAS-master/IDEAS/Fluid/Interfaces/PartialTwoPortTransport.mo",12,3,14,41,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta3386));
        } else {
          FILE_INFO info = {"E:/Daniel/sgi digital twin/Modelica/IDEAS-master/IDEAS/Fluid/Interfaces/PartialTwoPortTransport.mo",12,3,14,41,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta3386));
        }
      }
      tmp3387 = 1;
    }
  }
  threadData->lastEquationSolved = 3104;
}

/*
equation index: 3105
type: ALGORITHM

  assert(plugFlowPipe.del.T_start_out >= 0.0, "Variable violating min constraint: 0.0 <= plugFlowPipe.del.T_start_out, has value: " + String(plugFlowPipe.del.T_start_out, "g"));
*/
OMC_DISABLE_OPT
static void pump_v3_basicCold_t_eqFunction_3105(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3105};
  modelica_boolean tmp3388;
  static const MMC_DEFSTRINGLIT(tmp3389,83,"Variable violating min constraint: 0.0 <= plugFlowPipe.del.T_start_out, has value: ");
  modelica_string tmp3390;
  modelica_metatype tmpMeta3391;
  static int tmp3392 = 0;
  if(!tmp3392)
  {
    tmp3388 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[95]] /* plugFlowPipe.del.T_start_out PARAM */),0.0);
    if(!tmp3388)
    {
      tmp3390 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[95]] /* plugFlowPipe.del.T_start_out PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta3391 = stringAppend(MMC_REFSTRINGLIT(tmp3389),tmp3390);
      {
        const char* assert_cond = "(plugFlowPipe.del.T_start_out >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"E:/Daniel/sgi digital twin/Modelica/IDEAS-master/IDEAS/Fluid/FixedResistances/BaseClasses/PlugFlow.mo",18,3,20,48,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta3391));
        } else {
          FILE_INFO info = {"E:/Daniel/sgi digital twin/Modelica/IDEAS-master/IDEAS/Fluid/FixedResistances/BaseClasses/PlugFlow.mo",18,3,20,48,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta3391));
        }
      }
      tmp3392 = 1;
    }
  }
  threadData->lastEquationSolved = 3105;
}

/*
equation index: 3106
type: ALGORITHM

  assert(plugFlowPipe.del.T_start_in >= 0.0, "Variable violating min constraint: 0.0 <= plugFlowPipe.del.T_start_in, has value: " + String(plugFlowPipe.del.T_start_in, "g"));
*/
OMC_DISABLE_OPT
static void pump_v3_basicCold_t_eqFunction_3106(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3106};
  modelica_boolean tmp3393;
  static const MMC_DEFSTRINGLIT(tmp3394,82,"Variable violating min constraint: 0.0 <= plugFlowPipe.del.T_start_in, has value: ");
  modelica_string tmp3395;
  modelica_metatype tmpMeta3396;
  static int tmp3397 = 0;
  if(!tmp3397)
  {
    tmp3393 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[94]] /* plugFlowPipe.del.T_start_in PARAM */),0.0);
    if(!tmp3393)
    {
      tmp3395 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[94]] /* plugFlowPipe.del.T_start_in PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta3396 = stringAppend(MMC_REFSTRINGLIT(tmp3394),tmp3395);
      {
        const char* assert_cond = "(plugFlowPipe.del.T_start_in >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"E:/Daniel/sgi digital twin/Modelica/IDEAS-master/IDEAS/Fluid/FixedResistances/BaseClasses/PlugFlow.mo",15,3,17,48,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta3396));
        } else {
          FILE_INFO info = {"E:/Daniel/sgi digital twin/Modelica/IDEAS-master/IDEAS/Fluid/FixedResistances/BaseClasses/PlugFlow.mo",15,3,17,48,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta3396));
        }
      }
      tmp3397 = 1;
    }
  }
  threadData->lastEquationSolved = 3106;
}

/*
equation index: 3107
type: ALGORITHM

  assert(plugFlowPipe.del.m_flow_small >= -1e5 and plugFlowPipe.del.m_flow_small <= 1e5, "Variable violating min/max constraint: -1e5 <= plugFlowPipe.del.m_flow_small <= 1e5, has value: " + String(plugFlowPipe.del.m_flow_small, "g"));
*/
OMC_DISABLE_OPT
static void pump_v3_basicCold_t_eqFunction_3107(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3107};
  modelica_boolean tmp3398;
  modelica_boolean tmp3399;
  static const MMC_DEFSTRINGLIT(tmp3400,96,"Variable violating min/max constraint: -1e5 <= plugFlowPipe.del.m_flow_small <= 1e5, has value: ");
  modelica_string tmp3401;
  modelica_metatype tmpMeta3402;
  static int tmp3403 = 0;
  if(!tmp3403)
  {
    tmp3398 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[100]] /* plugFlowPipe.del.m_flow_small PARAM */),-1e5);
    tmp3399 = LessEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[100]] /* plugFlowPipe.del.m_flow_small PARAM */),1e5);
    if(!(tmp3398 && tmp3399))
    {
      tmp3401 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[100]] /* plugFlowPipe.del.m_flow_small PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta3402 = stringAppend(MMC_REFSTRINGLIT(tmp3400),tmp3401);
      {
        const char* assert_cond = "(plugFlowPipe.del.m_flow_small >= -1e5 and plugFlowPipe.del.m_flow_small <= 1e5)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"E:/Daniel/sgi digital twin/Modelica/IDEAS-master/IDEAS/Fluid/FixedResistances/BaseClasses/PlugFlow.mo",12,3,14,41,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta3402));
        } else {
          FILE_INFO info = {"E:/Daniel/sgi digital twin/Modelica/IDEAS-master/IDEAS/Fluid/FixedResistances/BaseClasses/PlugFlow.mo",12,3,14,41,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta3402));
        }
      }
      tmp3403 = 1;
    }
  }
  threadData->lastEquationSolved = 3107;
}

/*
equation index: 3108
type: ALGORITHM

  assert(plugFlowPipe.del.length >= 0.0, "Variable violating min constraint: 0.0 <= plugFlowPipe.del.length, has value: " + String(plugFlowPipe.del.length, "g"));
*/
OMC_DISABLE_OPT
static void pump_v3_basicCold_t_eqFunction_3108(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3108};
  modelica_boolean tmp3404;
  static const MMC_DEFSTRINGLIT(tmp3405,78,"Variable violating min constraint: 0.0 <= plugFlowPipe.del.length, has value: ");
  modelica_string tmp3406;
  modelica_metatype tmpMeta3407;
  static int tmp3408 = 0;
  if(!tmp3408)
  {
    tmp3404 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[99]] /* plugFlowPipe.del.length PARAM */),0.0);
    if(!tmp3404)
    {
      tmp3406 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[99]] /* plugFlowPipe.del.length PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta3407 = stringAppend(MMC_REFSTRINGLIT(tmp3405),tmp3406);
      {
        const char* assert_cond = "(plugFlowPipe.del.length >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"E:/Daniel/sgi digital twin/Modelica/IDEAS-master/IDEAS/Fluid/FixedResistances/BaseClasses/PlugFlow.mo",8,3,8,65,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta3407));
        } else {
          FILE_INFO info = {"E:/Daniel/sgi digital twin/Modelica/IDEAS-master/IDEAS/Fluid/FixedResistances/BaseClasses/PlugFlow.mo",8,3,8,65,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta3407));
        }
      }
      tmp3408 = 1;
    }
  }
  threadData->lastEquationSolved = 3108;
}

/*
equation index: 3109
type: ALGORITHM

  assert(plugFlowPipe.rho_default >= 0.0, "Variable violating min constraint: 0.0 <= plugFlowPipe.rho_default, has value: " + String(plugFlowPipe.rho_default, "g"));
*/
OMC_DISABLE_OPT
static void pump_v3_basicCold_t_eqFunction_3109(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3109};
  modelica_boolean tmp3409;
  static const MMC_DEFSTRINGLIT(tmp3410,79,"Variable violating min constraint: 0.0 <= plugFlowPipe.rho_default, has value: ");
  modelica_string tmp3411;
  modelica_metatype tmpMeta3412;
  static int tmp3413 = 0;
  if(!tmp3413)
  {
    tmp3409 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[161]] /* plugFlowPipe.rho_default PARAM */),0.0);
    if(!tmp3409)
    {
      tmp3411 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[161]] /* plugFlowPipe.rho_default PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta3412 = stringAppend(MMC_REFSTRINGLIT(tmp3410),tmp3411);
      {
        const char* assert_cond = "(plugFlowPipe.rho_default >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"E:/Daniel/sgi digital twin/Modelica/IDEAS-master/IDEAS/Fluid/FixedResistances/BaseClasses/PlugFlowPipe.mo",140,3,145,42,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta3412));
        } else {
          FILE_INFO info = {"E:/Daniel/sgi digital twin/Modelica/IDEAS-master/IDEAS/Fluid/FixedResistances/BaseClasses/PlugFlowPipe.mo",140,3,145,42,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta3412));
        }
      }
      tmp3413 = 1;
    }
  }
  threadData->lastEquationSolved = 3109;
}

/*
equation index: 3110
type: ALGORITHM

  assert(plugFlowPipe.res.mu_default >= 0.0, "Variable violating min constraint: 0.0 <= plugFlowPipe.res.mu_default, has value: " + String(plugFlowPipe.res.mu_default, "g"));
*/
OMC_DISABLE_OPT
static void pump_v3_basicCold_t_eqFunction_3110(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3110};
  modelica_boolean tmp3414;
  static const MMC_DEFSTRINGLIT(tmp3415,82,"Variable violating min constraint: 0.0 <= plugFlowPipe.res.mu_default, has value: ");
  modelica_string tmp3416;
  modelica_metatype tmpMeta3417;
  static int tmp3418 = 0;
  if(!tmp3418)
  {
    tmp3414 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[151]] /* plugFlowPipe.res.mu_default PARAM */),0.0);
    if(!tmp3414)
    {
      tmp3416 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[151]] /* plugFlowPipe.res.mu_default PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta3417 = stringAppend(MMC_REFSTRINGLIT(tmp3415),tmp3416);
      {
        const char* assert_cond = "(plugFlowPipe.res.mu_default >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"E:/Daniel/sgi digital twin/Modelica/IDEAS-master/IDEAS/Fluid/FixedResistances/HydraulicDiameter.mo",62,3,64,45,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta3417));
        } else {
          FILE_INFO info = {"E:/Daniel/sgi digital twin/Modelica/IDEAS-master/IDEAS/Fluid/FixedResistances/HydraulicDiameter.mo",62,3,64,45,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta3417));
        }
      }
      tmp3418 = 1;
    }
  }
  threadData->lastEquationSolved = 3110;
}

/*
equation index: 3111
type: ALGORITHM

  assert(plugFlowPipe.res.rho_default >= 0.0, "Variable violating min constraint: 0.0 <= plugFlowPipe.res.rho_default, has value: " + String(plugFlowPipe.res.rho_default, "g"));
*/
OMC_DISABLE_OPT
static void pump_v3_basicCold_t_eqFunction_3111(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3111};
  modelica_boolean tmp3419;
  static const MMC_DEFSTRINGLIT(tmp3420,83,"Variable violating min constraint: 0.0 <= plugFlowPipe.res.rho_default, has value: ");
  modelica_string tmp3421;
  modelica_metatype tmpMeta3422;
  static int tmp3423 = 0;
  if(!tmp3423)
  {
    tmp3419 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[153]] /* plugFlowPipe.res.rho_default PARAM */),0.0);
    if(!tmp3419)
    {
      tmp3421 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[153]] /* plugFlowPipe.res.rho_default PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta3422 = stringAppend(MMC_REFSTRINGLIT(tmp3420),tmp3421);
      {
        const char* assert_cond = "(plugFlowPipe.res.rho_default >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"E:/Daniel/sgi digital twin/Modelica/IDEAS-master/IDEAS/Fluid/FixedResistances/HydraulicDiameter.mo",59,3,60,35,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta3422));
        } else {
          FILE_INFO info = {"E:/Daniel/sgi digital twin/Modelica/IDEAS-master/IDEAS/Fluid/FixedResistances/HydraulicDiameter.mo",59,3,60,35,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta3422));
        }
      }
      tmp3423 = 1;
    }
  }
  threadData->lastEquationSolved = 3111;
}

/*
equation index: 3112
type: ALGORITHM

  assert(plugFlowPipe.res.state_default.T >= 1.0 and plugFlowPipe.res.state_default.T <= 1e4, "Variable violating min/max constraint: 1.0 <= plugFlowPipe.res.state_default.T <= 1e4, has value: " + String(plugFlowPipe.res.state_default.T, "g"));
*/
OMC_DISABLE_OPT
static void pump_v3_basicCold_t_eqFunction_3112(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3112};
  modelica_boolean tmp3424;
  modelica_boolean tmp3425;
  static const MMC_DEFSTRINGLIT(tmp3426,98,"Variable violating min/max constraint: 1.0 <= plugFlowPipe.res.state_default.T <= 1e4, has value: ");
  modelica_string tmp3427;
  modelica_metatype tmpMeta3428;
  static int tmp3429 = 0;
  if(!tmp3429)
  {
    tmp3424 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[157]] /* plugFlowPipe.res.state_default.T PARAM */),1.0);
    tmp3425 = LessEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[157]] /* plugFlowPipe.res.state_default.T PARAM */),1e4);
    if(!(tmp3424 && tmp3425))
    {
      tmp3427 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[157]] /* plugFlowPipe.res.state_default.T PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta3428 = stringAppend(MMC_REFSTRINGLIT(tmp3426),tmp3427);
      {
        const char* assert_cond = "(plugFlowPipe.res.state_default.T >= 1.0 and plugFlowPipe.res.state_default.T <= 1e4)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/Daniel/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Media/package.mo",5870,7,5870,44,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta3428));
        } else {
          FILE_INFO info = {"C:/Users/Daniel/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Media/package.mo",5870,7,5870,44,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta3428));
        }
      }
      tmp3429 = 1;
    }
  }
  threadData->lastEquationSolved = 3112;
}

/*
equation index: 3113
type: ALGORITHM

  assert(plugFlowPipe.res.state_default.p >= 0.0 and plugFlowPipe.res.state_default.p <= 1e8, "Variable violating min/max constraint: 0.0 <= plugFlowPipe.res.state_default.p <= 1e8, has value: " + String(plugFlowPipe.res.state_default.p, "g"));
*/
OMC_DISABLE_OPT
static void pump_v3_basicCold_t_eqFunction_3113(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3113};
  modelica_boolean tmp3430;
  modelica_boolean tmp3431;
  static const MMC_DEFSTRINGLIT(tmp3432,98,"Variable violating min/max constraint: 0.0 <= plugFlowPipe.res.state_default.p <= 1e8, has value: ");
  modelica_string tmp3433;
  modelica_metatype tmpMeta3434;
  static int tmp3435 = 0;
  if(!tmp3435)
  {
    tmp3430 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[158]] /* plugFlowPipe.res.state_default.p PARAM */),0.0);
    tmp3431 = LessEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[158]] /* plugFlowPipe.res.state_default.p PARAM */),1e8);
    if(!(tmp3430 && tmp3431))
    {
      tmp3433 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[158]] /* plugFlowPipe.res.state_default.p PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta3434 = stringAppend(MMC_REFSTRINGLIT(tmp3432),tmp3433);
      {
        const char* assert_cond = "(plugFlowPipe.res.state_default.p >= 0.0 and plugFlowPipe.res.state_default.p <= 1e8)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/Daniel/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Media/package.mo",5869,7,5869,55,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta3434));
        } else {
          FILE_INFO info = {"C:/Users/Daniel/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Media/package.mo",5869,7,5869,55,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta3434));
        }
      }
      tmp3435 = 1;
    }
  }
  threadData->lastEquationSolved = 3113;
}

/*
equation index: 3114
type: ALGORITHM

  assert(plugFlowPipe.res.fac >= 1.0, "Variable violating min constraint: 1.0 <= plugFlowPipe.res.fac, has value: " + String(plugFlowPipe.res.fac, "g"));
*/
OMC_DISABLE_OPT
static void pump_v3_basicCold_t_eqFunction_3114(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3114};
  modelica_boolean tmp3436;
  static const MMC_DEFSTRINGLIT(tmp3437,75,"Variable violating min constraint: 1.0 <= plugFlowPipe.res.fac, has value: ");
  modelica_string tmp3438;
  modelica_metatype tmpMeta3439;
  static int tmp3440 = 0;
  if(!tmp3440)
  {
    tmp3436 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[144]] /* plugFlowPipe.res.fac PARAM */),1.0);
    if(!tmp3436)
    {
      tmp3438 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[144]] /* plugFlowPipe.res.fac PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta3439 = stringAppend(MMC_REFSTRINGLIT(tmp3437),tmp3438);
      {
        const char* assert_cond = "(plugFlowPipe.res.fac >= 1.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"E:/Daniel/sgi digital twin/Modelica/IDEAS-master/IDEAS/Fluid/FixedResistances/HydraulicDiameter.mo",25,3,26,98,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta3439));
        } else {
          FILE_INFO info = {"E:/Daniel/sgi digital twin/Modelica/IDEAS-master/IDEAS/Fluid/FixedResistances/HydraulicDiameter.mo",25,3,26,98,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta3439));
        }
      }
      tmp3440 = 1;
    }
  }
  threadData->lastEquationSolved = 3114;
}

/*
equation index: 3115
type: ALGORITHM

  assert(plugFlowPipe.res.roughness >= 0.0, "Variable violating min constraint: 0.0 <= plugFlowPipe.res.roughness, has value: " + String(plugFlowPipe.res.roughness, "g"));
*/
OMC_DISABLE_OPT
static void pump_v3_basicCold_t_eqFunction_3115(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3115};
  modelica_boolean tmp3441;
  static const MMC_DEFSTRINGLIT(tmp3442,81,"Variable violating min constraint: 0.0 <= plugFlowPipe.res.roughness, has value: ");
  modelica_string tmp3443;
  modelica_metatype tmpMeta3444;
  static int tmp3445 = 0;
  if(!tmp3445)
  {
    tmp3441 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[154]] /* plugFlowPipe.res.roughness PARAM */),0.0);
    if(!tmp3441)
    {
      tmp3443 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[154]] /* plugFlowPipe.res.roughness PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta3444 = stringAppend(MMC_REFSTRINGLIT(tmp3442),tmp3443);
      {
        const char* assert_cond = "(plugFlowPipe.res.roughness >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"E:/Daniel/sgi digital twin/Modelica/IDEAS-master/IDEAS/Fluid/FixedResistances/HydraulicDiameter.mo",22,3,23,106,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta3444));
        } else {
          FILE_INFO info = {"E:/Daniel/sgi digital twin/Modelica/IDEAS-master/IDEAS/Fluid/FixedResistances/HydraulicDiameter.mo",22,3,23,106,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta3444));
        }
      }
      tmp3445 = 1;
    }
  }
  threadData->lastEquationSolved = 3115;
}

/*
equation index: 3116
type: ALGORITHM

  assert(plugFlowPipe.res.ReC >= 0.0, "Variable violating min constraint: 0.0 <= plugFlowPipe.res.ReC, has value: " + String(plugFlowPipe.res.ReC, "g"));
*/
OMC_DISABLE_OPT
static void pump_v3_basicCold_t_eqFunction_3116(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3116};
  modelica_boolean tmp3446;
  static const MMC_DEFSTRINGLIT(tmp3447,75,"Variable violating min constraint: 0.0 <= plugFlowPipe.res.ReC, has value: ");
  modelica_string tmp3448;
  modelica_metatype tmpMeta3449;
  static int tmp3450 = 0;
  if(!tmp3450)
  {
    tmp3446 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[134]] /* plugFlowPipe.res.ReC PARAM */),0.0);
    if(!tmp3446)
    {
      tmp3448 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[134]] /* plugFlowPipe.res.ReC PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta3449 = stringAppend(MMC_REFSTRINGLIT(tmp3447),tmp3448);
      {
        const char* assert_cond = "(plugFlowPipe.res.ReC >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"E:/Daniel/sgi digital twin/Modelica/IDEAS-master/IDEAS/Fluid/FixedResistances/HydraulicDiameter.mo",14,3,15,60,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta3449));
        } else {
          FILE_INFO info = {"E:/Daniel/sgi digital twin/Modelica/IDEAS-master/IDEAS/Fluid/FixedResistances/HydraulicDiameter.mo",14,3,15,60,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta3449));
        }
      }
      tmp3450 = 1;
    }
  }
  threadData->lastEquationSolved = 3116;
}

/*
equation index: 3117
type: ALGORITHM

  assert(plugFlowPipe.res.deltaM >= 1e-6, "Variable violating min constraint: 1e-6 <= plugFlowPipe.res.deltaM, has value: " + String(plugFlowPipe.res.deltaM, "g"));
*/
OMC_DISABLE_OPT
static void pump_v3_basicCold_t_eqFunction_3117(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3117};
  modelica_boolean tmp3451;
  static const MMC_DEFSTRINGLIT(tmp3452,79,"Variable violating min constraint: 1e-6 <= plugFlowPipe.res.deltaM, has value: ");
  modelica_string tmp3453;
  modelica_metatype tmpMeta3454;
  static int tmp3455 = 0;
  if(!tmp3455)
  {
    tmp3451 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[138]] /* plugFlowPipe.res.deltaM PARAM */),1e-6);
    if(!tmp3451)
    {
      tmp3453 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[138]] /* plugFlowPipe.res.deltaM PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta3454 = stringAppend(MMC_REFSTRINGLIT(tmp3452),tmp3453);
      {
        const char* assert_cond = "(plugFlowPipe.res.deltaM >= 1e-6)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"E:/Daniel/sgi digital twin/Modelica/IDEAS-master/IDEAS/Fluid/FixedResistances/PressureDrop.mo",7,3,11,51,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta3454));
        } else {
          FILE_INFO info = {"E:/Daniel/sgi digital twin/Modelica/IDEAS-master/IDEAS/Fluid/FixedResistances/PressureDrop.mo",7,3,11,51,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta3454));
        }
      }
      tmp3455 = 1;
    }
  }
  threadData->lastEquationSolved = 3117;
}

/*
equation index: 3118
type: ALGORITHM

  assert(plugFlowPipe.res.eta_default >= 0.0, "Variable violating min constraint: 0.0 <= plugFlowPipe.res.eta_default, has value: " + String(plugFlowPipe.res.eta_default, "g"));
*/
OMC_DISABLE_OPT
static void pump_v3_basicCold_t_eqFunction_3118(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3118};
  modelica_boolean tmp3456;
  static const MMC_DEFSTRINGLIT(tmp3457,83,"Variable violating min constraint: 0.0 <= plugFlowPipe.res.eta_default, has value: ");
  modelica_string tmp3458;
  modelica_metatype tmpMeta3459;
  static int tmp3460 = 0;
  if(!tmp3460)
  {
    tmp3456 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[143]] /* plugFlowPipe.res.eta_default PARAM */),0.0);
    if(!tmp3456)
    {
      tmp3458 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[143]] /* plugFlowPipe.res.eta_default PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta3459 = stringAppend(MMC_REFSTRINGLIT(tmp3457),tmp3458);
      {
        const char* assert_cond = "(plugFlowPipe.res.eta_default >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"E:/Daniel/sgi digital twin/Modelica/IDEAS-master/IDEAS/Fluid/BaseClasses/PartialResistance.mo",33,3,35,77,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta3459));
        } else {
          FILE_INFO info = {"E:/Daniel/sgi digital twin/Modelica/IDEAS-master/IDEAS/Fluid/BaseClasses/PartialResistance.mo",33,3,35,77,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta3459));
        }
      }
      tmp3460 = 1;
    }
  }
  threadData->lastEquationSolved = 3118;
}

/*
equation index: 3119
type: ALGORITHM

  assert(plugFlowPipe.res.sta_default.T >= 1.0 and plugFlowPipe.res.sta_default.T <= 1e4, "Variable violating min/max constraint: 1.0 <= plugFlowPipe.res.sta_default.T <= 1e4, has value: " + String(plugFlowPipe.res.sta_default.T, "g"));
*/
OMC_DISABLE_OPT
static void pump_v3_basicCold_t_eqFunction_3119(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3119};
  modelica_boolean tmp3461;
  modelica_boolean tmp3462;
  static const MMC_DEFSTRINGLIT(tmp3463,96,"Variable violating min/max constraint: 1.0 <= plugFlowPipe.res.sta_default.T <= 1e4, has value: ");
  modelica_string tmp3464;
  modelica_metatype tmpMeta3465;
  static int tmp3466 = 0;
  if(!tmp3466)
  {
    tmp3461 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[155]] /* plugFlowPipe.res.sta_default.T PARAM */),1.0);
    tmp3462 = LessEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[155]] /* plugFlowPipe.res.sta_default.T PARAM */),1e4);
    if(!(tmp3461 && tmp3462))
    {
      tmp3464 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[155]] /* plugFlowPipe.res.sta_default.T PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta3465 = stringAppend(MMC_REFSTRINGLIT(tmp3463),tmp3464);
      {
        const char* assert_cond = "(plugFlowPipe.res.sta_default.T >= 1.0 and plugFlowPipe.res.sta_default.T <= 1e4)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/Daniel/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Media/package.mo",5870,7,5870,44,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta3465));
        } else {
          FILE_INFO info = {"C:/Users/Daniel/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Media/package.mo",5870,7,5870,44,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta3465));
        }
      }
      tmp3466 = 1;
    }
  }
  threadData->lastEquationSolved = 3119;
}

/*
equation index: 3120
type: ALGORITHM

  assert(plugFlowPipe.res.sta_default.p >= 0.0 and plugFlowPipe.res.sta_default.p <= 1e8, "Variable violating min/max constraint: 0.0 <= plugFlowPipe.res.sta_default.p <= 1e8, has value: " + String(plugFlowPipe.res.sta_default.p, "g"));
*/
OMC_DISABLE_OPT
static void pump_v3_basicCold_t_eqFunction_3120(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3120};
  modelica_boolean tmp3467;
  modelica_boolean tmp3468;
  static const MMC_DEFSTRINGLIT(tmp3469,96,"Variable violating min/max constraint: 0.0 <= plugFlowPipe.res.sta_default.p <= 1e8, has value: ");
  modelica_string tmp3470;
  modelica_metatype tmpMeta3471;
  static int tmp3472 = 0;
  if(!tmp3472)
  {
    tmp3467 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[156]] /* plugFlowPipe.res.sta_default.p PARAM */),0.0);
    tmp3468 = LessEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[156]] /* plugFlowPipe.res.sta_default.p PARAM */),1e8);
    if(!(tmp3467 && tmp3468))
    {
      tmp3470 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[156]] /* plugFlowPipe.res.sta_default.p PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta3471 = stringAppend(MMC_REFSTRINGLIT(tmp3469),tmp3470);
      {
        const char* assert_cond = "(plugFlowPipe.res.sta_default.p >= 0.0 and plugFlowPipe.res.sta_default.p <= 1e8)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/Daniel/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Media/package.mo",5869,7,5869,55,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta3471));
        } else {
          FILE_INFO info = {"C:/Users/Daniel/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Media/package.mo",5869,7,5869,55,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta3471));
        }
      }
      tmp3472 = 1;
    }
  }
  threadData->lastEquationSolved = 3120;
}

/*
equation index: 3121
type: ALGORITHM

  assert(plugFlowPipe.res.m_flow_turbulent >= 0.0, "Variable violating min constraint: 0.0 <= plugFlowPipe.res.m_flow_turbulent, has value: " + String(plugFlowPipe.res.m_flow_turbulent, "g"));
*/
OMC_DISABLE_OPT
static void pump_v3_basicCold_t_eqFunction_3121(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3121};
  modelica_boolean tmp3473;
  static const MMC_DEFSTRINGLIT(tmp3474,88,"Variable violating min constraint: 0.0 <= plugFlowPipe.res.m_flow_turbulent, has value: ");
  modelica_string tmp3475;
  modelica_metatype tmpMeta3476;
  static int tmp3477 = 0;
  if(!tmp3477)
  {
    tmp3473 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[150]] /* plugFlowPipe.res.m_flow_turbulent PARAM */),0.0);
    if(!tmp3473)
    {
      tmp3475 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[150]] /* plugFlowPipe.res.m_flow_turbulent PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta3476 = stringAppend(MMC_REFSTRINGLIT(tmp3474),tmp3475);
      {
        const char* assert_cond = "(plugFlowPipe.res.m_flow_turbulent >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"E:/Daniel/sgi digital twin/Modelica/IDEAS-master/IDEAS/Fluid/BaseClasses/PartialResistance.mo",27,3,28,53,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta3476));
        } else {
          FILE_INFO info = {"E:/Daniel/sgi digital twin/Modelica/IDEAS-master/IDEAS/Fluid/BaseClasses/PartialResistance.mo",27,3,28,53,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta3476));
        }
      }
      tmp3477 = 1;
    }
  }
  threadData->lastEquationSolved = 3121;
}

/*
equation index: 3122
type: ALGORITHM

  assert(plugFlowPipe.res.m_flow_small >= 0.0, "Variable violating min constraint: 0.0 <= plugFlowPipe.res.m_flow_small, has value: " + String(plugFlowPipe.res.m_flow_small, "g"));
*/
OMC_DISABLE_OPT
static void pump_v3_basicCold_t_eqFunction_3122(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3122};
  modelica_boolean tmp3478;
  static const MMC_DEFSTRINGLIT(tmp3479,84,"Variable violating min constraint: 0.0 <= plugFlowPipe.res.m_flow_small, has value: ");
  modelica_string tmp3480;
  modelica_metatype tmpMeta3481;
  static int tmp3482 = 0;
  if(!tmp3482)
  {
    tmp3478 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[149]] /* plugFlowPipe.res.m_flow_small PARAM */),0.0);
    if(!tmp3478)
    {
      tmp3480 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[149]] /* plugFlowPipe.res.m_flow_small PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta3481 = stringAppend(MMC_REFSTRINGLIT(tmp3479),tmp3480);
      {
        const char* assert_cond = "(plugFlowPipe.res.m_flow_small >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"E:/Daniel/sgi digital twin/Modelica/IDEAS-master/IDEAS/Fluid/Interfaces/PartialTwoPortInterface.mo",10,3,12,40,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta3481));
        } else {
          FILE_INFO info = {"E:/Daniel/sgi digital twin/Modelica/IDEAS-master/IDEAS/Fluid/Interfaces/PartialTwoPortInterface.mo",10,3,12,40,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta3481));
        }
      }
      tmp3482 = 1;
    }
  }
  threadData->lastEquationSolved = 3122;
}

/*
equation index: 3123
type: ALGORITHM

  assert(plugFlowPipe.roughness >= 0.0, "Variable violating min constraint: 0.0 <= plugFlowPipe.roughness, has value: " + String(plugFlowPipe.roughness, "g"));
*/
OMC_DISABLE_OPT
static void pump_v3_basicCold_t_eqFunction_3123(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3123};
  modelica_boolean tmp3483;
  static const MMC_DEFSTRINGLIT(tmp3484,77,"Variable violating min constraint: 0.0 <= plugFlowPipe.roughness, has value: ");
  modelica_string tmp3485;
  modelica_metatype tmpMeta3486;
  static int tmp3487 = 0;
  if(!tmp3487)
  {
    tmp3483 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[162]] /* plugFlowPipe.roughness PARAM */),0.0);
    if(!tmp3483)
    {
      tmp3485 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[162]] /* plugFlowPipe.roughness PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta3486 = stringAppend(MMC_REFSTRINGLIT(tmp3484),tmp3485);
      {
        const char* assert_cond = "(plugFlowPipe.roughness >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"E:/Daniel/sgi digital twin/Modelica/IDEAS-master/IDEAS/Fluid/FixedResistances/BaseClasses/PlugFlowPipe.mo",35,3,37,42,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta3486));
        } else {
          FILE_INFO info = {"E:/Daniel/sgi digital twin/Modelica/IDEAS-master/IDEAS/Fluid/FixedResistances/BaseClasses/PlugFlowPipe.mo",35,3,37,42,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta3486));
        }
      }
      tmp3487 = 1;
    }
  }
  threadData->lastEquationSolved = 3123;
}

/*
equation index: 3124
type: ALGORITHM

  assert(system.m_flow_small >= 0.0, "Variable violating min constraint: 0.0 <= system.m_flow_small, has value: " + String(system.m_flow_small, "g"));
*/
OMC_DISABLE_OPT
static void pump_v3_basicCold_t_eqFunction_3124(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3124};
  modelica_boolean tmp3488;
  static const MMC_DEFSTRINGLIT(tmp3489,74,"Variable violating min constraint: 0.0 <= system.m_flow_small, has value: ");
  modelica_string tmp3490;
  modelica_metatype tmpMeta3491;
  static int tmp3492 = 0;
  if(!tmp3492)
  {
    tmp3488 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[989]] /* system.m_flow_small PARAM */),0.0);
    if(!tmp3488)
    {
      tmp3490 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[989]] /* system.m_flow_small PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta3491 = stringAppend(MMC_REFSTRINGLIT(tmp3489),tmp3490);
      {
        const char* assert_cond = "(system.m_flow_small >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/Daniel/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Fluid/System.mo",63,3,65,83,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta3491));
        } else {
          FILE_INFO info = {"C:/Users/Daniel/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Fluid/System.mo",63,3,65,83,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta3491));
        }
      }
      tmp3492 = 1;
    }
  }
  threadData->lastEquationSolved = 3124;
}

/*
equation index: 3125
type: ALGORITHM

  assert(system.dp_small >= 0.0, "Variable violating min constraint: 0.0 <= system.dp_small, has value: " + String(system.dp_small, "g"));
*/
OMC_DISABLE_OPT
static void pump_v3_basicCold_t_eqFunction_3125(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3125};
  modelica_boolean tmp3493;
  static const MMC_DEFSTRINGLIT(tmp3494,70,"Variable violating min constraint: 0.0 <= system.dp_small, has value: ");
  modelica_string tmp3495;
  modelica_metatype tmpMeta3496;
  static int tmp3497 = 0;
  if(!tmp3497)
  {
    tmp3493 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[985]] /* system.dp_small PARAM */),0.0);
    if(!tmp3493)
    {
      tmp3495 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[985]] /* system.dp_small PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta3496 = stringAppend(MMC_REFSTRINGLIT(tmp3494),tmp3495);
      {
        const char* assert_cond = "(system.dp_small >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/Daniel/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Fluid/System.mo",60,3,62,81,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta3496));
        } else {
          FILE_INFO info = {"C:/Users/Daniel/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Fluid/System.mo",60,3,62,81,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta3496));
        }
      }
      tmp3497 = 1;
    }
  }
  threadData->lastEquationSolved = 3125;
}

/*
equation index: 3126
type: ALGORITHM

  assert(system.eps_m_flow >= 0.0, "Variable violating min constraint: 0.0 <= system.eps_m_flow, has value: " + String(system.eps_m_flow, "g"));
*/
OMC_DISABLE_OPT
static void pump_v3_basicCold_t_eqFunction_3126(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3126};
  modelica_boolean tmp3498;
  static const MMC_DEFSTRINGLIT(tmp3499,72,"Variable violating min constraint: 0.0 <= system.eps_m_flow, has value: ");
  modelica_string tmp3500;
  modelica_metatype tmpMeta3501;
  static int tmp3502 = 0;
  if(!tmp3502)
  {
    tmp3498 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[986]] /* system.eps_m_flow PARAM */),0.0);
    if(!tmp3498)
    {
      tmp3500 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[986]] /* system.eps_m_flow PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta3501 = stringAppend(MMC_REFSTRINGLIT(tmp3499),tmp3500);
      {
        const char* assert_cond = "(system.eps_m_flow >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/Daniel/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Fluid/System.mo",57,3,59,62,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta3501));
        } else {
          FILE_INFO info = {"C:/Users/Daniel/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Fluid/System.mo",57,3,59,62,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta3501));
        }
      }
      tmp3502 = 1;
    }
  }
  threadData->lastEquationSolved = 3126;
}

/*
equation index: 3127
type: ALGORITHM

  assert(system.T_start >= 0.0, "Variable violating min constraint: 0.0 <= system.T_start, has value: " + String(system.T_start, "g"));
*/
OMC_DISABLE_OPT
static void pump_v3_basicCold_t_eqFunction_3127(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3127};
  modelica_boolean tmp3503;
  static const MMC_DEFSTRINGLIT(tmp3504,69,"Variable violating min constraint: 0.0 <= system.T_start, has value: ");
  modelica_string tmp3505;
  modelica_metatype tmpMeta3506;
  static int tmp3507 = 0;
  if(!tmp3507)
  {
    tmp3503 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[984]] /* system.T_start PARAM */),0.0);
    if(!tmp3503)
    {
      tmp3505 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[984]] /* system.T_start PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta3506 = stringAppend(MMC_REFSTRINGLIT(tmp3504),tmp3505);
      {
        const char* assert_cond = "(system.T_start >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/Daniel/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Fluid/System.mo",47,3,49,47,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta3506));
        } else {
          FILE_INFO info = {"C:/Users/Daniel/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Fluid/System.mo",47,3,49,47,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta3506));
        }
      }
      tmp3507 = 1;
    }
  }
  threadData->lastEquationSolved = 3127;
}

/*
equation index: 3128
type: ALGORITHM

  assert(system.p_ambient >= 0.0, "Variable violating min constraint: 0.0 <= system.p_ambient, has value: " + String(system.p_ambient, "g"));
*/
OMC_DISABLE_OPT
static void pump_v3_basicCold_t_eqFunction_3128(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3128};
  modelica_boolean tmp3508;
  static const MMC_DEFSTRINGLIT(tmp3509,71,"Variable violating min constraint: 0.0 <= system.p_ambient, has value: ");
  modelica_string tmp3510;
  modelica_metatype tmpMeta3511;
  static int tmp3512 = 0;
  if(!tmp3512)
  {
    tmp3508 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[991]] /* system.p_ambient PARAM */),0.0);
    if(!tmp3508)
    {
      tmp3510 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[991]] /* system.p_ambient PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta3511 = stringAppend(MMC_REFSTRINGLIT(tmp3509),tmp3510);
      {
        const char* assert_cond = "(system.p_ambient >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/Daniel/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Fluid/System.mo",8,3,10,44,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta3511));
        } else {
          FILE_INFO info = {"C:/Users/Daniel/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Fluid/System.mo",8,3,10,44,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta3511));
        }
      }
      tmp3512 = 1;
    }
  }
  threadData->lastEquationSolved = 3128;
}

/*
equation index: 3129
type: ALGORITHM

  assert(system.p_start >= 0.0, "Variable violating min constraint: 0.0 <= system.p_start, has value: " + String(system.p_start, "g"));
*/
OMC_DISABLE_OPT
static void pump_v3_basicCold_t_eqFunction_3129(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3129};
  modelica_boolean tmp3513;
  static const MMC_DEFSTRINGLIT(tmp3514,69,"Variable violating min constraint: 0.0 <= system.p_start, has value: ");
  modelica_string tmp3515;
  modelica_metatype tmpMeta3516;
  static int tmp3517 = 0;
  if(!tmp3517)
  {
    tmp3513 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[992]] /* system.p_start PARAM */),0.0);
    if(!tmp3513)
    {
      tmp3515 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[992]] /* system.p_start PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta3516 = stringAppend(MMC_REFSTRINGLIT(tmp3514),tmp3515);
      {
        const char* assert_cond = "(system.p_start >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/Daniel/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Fluid/System.mo",44,3,46,47,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta3516));
        } else {
          FILE_INFO info = {"C:/Users/Daniel/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Fluid/System.mo",44,3,46,47,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta3516));
        }
      }
      tmp3517 = 1;
    }
  }
  threadData->lastEquationSolved = 3129;
}

/*
equation index: 3130
type: ALGORITHM

  assert(system.momentumDynamics >= Modelica.Fluid.Types.Dynamics.DynamicFreeInitial and system.momentumDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, "Variable violating min/max constraint: Modelica.Fluid.Types.Dynamics.DynamicFreeInitial <= system.momentumDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, has value: " + String(system.momentumDynamics, "d"));
*/
OMC_DISABLE_OPT
static void pump_v3_basicCold_t_eqFunction_3130(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3130};
  modelica_boolean tmp3518;
  modelica_boolean tmp3519;
  static const MMC_DEFSTRINGLIT(tmp3520,172,"Variable violating min/max constraint: Modelica.Fluid.Types.Dynamics.DynamicFreeInitial <= system.momentumDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, has value: ");
  modelica_string tmp3521;
  modelica_metatype tmpMeta3522;
  static int tmp3523 = 0;
  if(!tmp3523)
  {
    tmp3518 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[119]] /* system.momentumDynamics PARAM */),1);
    tmp3519 = LessEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[119]] /* system.momentumDynamics PARAM */),4);
    if(!(tmp3518 && tmp3519))
    {
      tmp3521 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[119]] /* system.momentumDynamics PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta3522 = stringAppend(MMC_REFSTRINGLIT(tmp3520),tmp3521);
      {
        const char* assert_cond = "(system.momentumDynamics >= Modelica.Fluid.Types.Dynamics.DynamicFreeInitial and system.momentumDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/Daniel/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Fluid/System.mo",35,3,38,77,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta3522));
        } else {
          FILE_INFO info = {"C:/Users/Daniel/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Fluid/System.mo",35,3,38,77,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta3522));
        }
      }
      tmp3523 = 1;
    }
  }
  threadData->lastEquationSolved = 3130;
}

/*
equation index: 3131
type: ALGORITHM

  assert(system.traceDynamics >= Modelica.Fluid.Types.Dynamics.DynamicFreeInitial and system.traceDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, "Variable violating min/max constraint: Modelica.Fluid.Types.Dynamics.DynamicFreeInitial <= system.traceDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, has value: " + String(system.traceDynamics, "d"));
*/
OMC_DISABLE_OPT
static void pump_v3_basicCold_t_eqFunction_3131(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3131};
  modelica_boolean tmp3524;
  modelica_boolean tmp3525;
  static const MMC_DEFSTRINGLIT(tmp3526,169,"Variable violating min/max constraint: Modelica.Fluid.Types.Dynamics.DynamicFreeInitial <= system.traceDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, has value: ");
  modelica_string tmp3527;
  modelica_metatype tmpMeta3528;
  static int tmp3529 = 0;
  if(!tmp3529)
  {
    tmp3524 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[121]] /* system.traceDynamics PARAM */),1);
    tmp3525 = LessEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[121]] /* system.traceDynamics PARAM */),4);
    if(!(tmp3524 && tmp3525))
    {
      tmp3527 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[121]] /* system.traceDynamics PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta3528 = stringAppend(MMC_REFSTRINGLIT(tmp3526),tmp3527);
      {
        const char* assert_cond = "(system.traceDynamics >= Modelica.Fluid.Types.Dynamics.DynamicFreeInitial and system.traceDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/Daniel/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Fluid/System.mo",32,3,34,77,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta3528));
        } else {
          FILE_INFO info = {"C:/Users/Daniel/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Fluid/System.mo",32,3,34,77,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta3528));
        }
      }
      tmp3529 = 1;
    }
  }
  threadData->lastEquationSolved = 3131;
}

/*
equation index: 3132
type: ALGORITHM

  assert(system.substanceDynamics >= Modelica.Fluid.Types.Dynamics.DynamicFreeInitial and system.substanceDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, "Variable violating min/max constraint: Modelica.Fluid.Types.Dynamics.DynamicFreeInitial <= system.substanceDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, has value: " + String(system.substanceDynamics, "d"));
*/
OMC_DISABLE_OPT
static void pump_v3_basicCold_t_eqFunction_3132(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3132};
  modelica_boolean tmp3530;
  modelica_boolean tmp3531;
  static const MMC_DEFSTRINGLIT(tmp3532,173,"Variable violating min/max constraint: Modelica.Fluid.Types.Dynamics.DynamicFreeInitial <= system.substanceDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, has value: ");
  modelica_string tmp3533;
  modelica_metatype tmpMeta3534;
  static int tmp3535 = 0;
  if(!tmp3535)
  {
    tmp3530 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[120]] /* system.substanceDynamics PARAM */),1);
    tmp3531 = LessEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[120]] /* system.substanceDynamics PARAM */),4);
    if(!(tmp3530 && tmp3531))
    {
      tmp3533 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[120]] /* system.substanceDynamics PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta3534 = stringAppend(MMC_REFSTRINGLIT(tmp3532),tmp3533);
      {
        const char* assert_cond = "(system.substanceDynamics >= Modelica.Fluid.Types.Dynamics.DynamicFreeInitial and system.substanceDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/Daniel/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Fluid/System.mo",29,3,31,77,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta3534));
        } else {
          FILE_INFO info = {"C:/Users/Daniel/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Fluid/System.mo",29,3,31,77,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta3534));
        }
      }
      tmp3535 = 1;
    }
  }
  threadData->lastEquationSolved = 3132;
}

/*
equation index: 3133
type: ALGORITHM

  assert(system.massDynamics >= Modelica.Fluid.Types.Dynamics.DynamicFreeInitial and system.massDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, "Variable violating min/max constraint: Modelica.Fluid.Types.Dynamics.DynamicFreeInitial <= system.massDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, has value: " + String(system.massDynamics, "d"));
*/
OMC_DISABLE_OPT
static void pump_v3_basicCold_t_eqFunction_3133(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3133};
  modelica_boolean tmp3536;
  modelica_boolean tmp3537;
  static const MMC_DEFSTRINGLIT(tmp3538,168,"Variable violating min/max constraint: Modelica.Fluid.Types.Dynamics.DynamicFreeInitial <= system.massDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, has value: ");
  modelica_string tmp3539;
  modelica_metatype tmpMeta3540;
  static int tmp3541 = 0;
  if(!tmp3541)
  {
    tmp3536 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[118]] /* system.massDynamics PARAM */),1);
    tmp3537 = LessEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[118]] /* system.massDynamics PARAM */),4);
    if(!(tmp3536 && tmp3537))
    {
      tmp3539 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[118]] /* system.massDynamics PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta3540 = stringAppend(MMC_REFSTRINGLIT(tmp3538),tmp3539);
      {
        const char* assert_cond = "(system.massDynamics >= Modelica.Fluid.Types.Dynamics.DynamicFreeInitial and system.massDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/Daniel/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Fluid/System.mo",26,3,28,77,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta3540));
        } else {
          FILE_INFO info = {"C:/Users/Daniel/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Fluid/System.mo",26,3,28,77,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta3540));
        }
      }
      tmp3541 = 1;
    }
  }
  threadData->lastEquationSolved = 3133;
}

/*
equation index: 3134
type: ALGORITHM

  assert(system.energyDynamics >= Modelica.Fluid.Types.Dynamics.DynamicFreeInitial and system.energyDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, "Variable violating min/max constraint: Modelica.Fluid.Types.Dynamics.DynamicFreeInitial <= system.energyDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, has value: " + String(system.energyDynamics, "d"));
*/
OMC_DISABLE_OPT
static void pump_v3_basicCold_t_eqFunction_3134(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3134};
  modelica_boolean tmp3542;
  modelica_boolean tmp3543;
  static const MMC_DEFSTRINGLIT(tmp3544,170,"Variable violating min/max constraint: Modelica.Fluid.Types.Dynamics.DynamicFreeInitial <= system.energyDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, has value: ");
  modelica_string tmp3545;
  modelica_metatype tmpMeta3546;
  static int tmp3547 = 0;
  if(!tmp3547)
  {
    tmp3542 = GreaterEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[117]] /* system.energyDynamics PARAM */),1);
    tmp3543 = LessEq((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[117]] /* system.energyDynamics PARAM */),4);
    if(!(tmp3542 && tmp3543))
    {
      tmp3545 = modelica_integer_to_modelica_string_format((data->simulationInfo->integerParameter[data->simulationInfo->integerParamsIndex[117]] /* system.energyDynamics PARAM */), (modelica_string) mmc_strings_len1[100]);
      tmpMeta3546 = stringAppend(MMC_REFSTRINGLIT(tmp3544),tmp3545);
      {
        const char* assert_cond = "(system.energyDynamics >= Modelica.Fluid.Types.Dynamics.DynamicFreeInitial and system.energyDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/Daniel/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Fluid/System.mo",22,3,25,77,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta3546));
        } else {
          FILE_INFO info = {"C:/Users/Daniel/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Fluid/System.mo",22,3,25,77,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta3546));
        }
      }
      tmp3547 = 1;
    }
  }
  threadData->lastEquationSolved = 3134;
}

/*
equation index: 3135
type: ALGORITHM

  assert(system.T_ambient >= 0.0, "Variable violating min constraint: 0.0 <= system.T_ambient, has value: " + String(system.T_ambient, "g"));
*/
OMC_DISABLE_OPT
static void pump_v3_basicCold_t_eqFunction_3135(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3135};
  modelica_boolean tmp3548;
  static const MMC_DEFSTRINGLIT(tmp3549,71,"Variable violating min constraint: 0.0 <= system.T_ambient, has value: ");
  modelica_string tmp3550;
  modelica_metatype tmpMeta3551;
  static int tmp3552 = 0;
  if(!tmp3552)
  {
    tmp3548 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[983]] /* system.T_ambient PARAM */),0.0);
    if(!tmp3548)
    {
      tmp3550 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[983]] /* system.T_ambient PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta3551 = stringAppend(MMC_REFSTRINGLIT(tmp3549),tmp3550);
      {
        const char* assert_cond = "(system.T_ambient >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"C:/Users/Daniel/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Fluid/System.mo",11,3,13,44,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta3551));
        } else {
          FILE_INFO info = {"C:/Users/Daniel/AppData/Roaming/.openmodelica/libraries/Modelica 4.0.0+maint.om/Fluid/System.mo",11,3,13,44,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta3551));
        }
      }
      tmp3552 = 1;
    }
  }
  threadData->lastEquationSolved = 3135;
}

/*
equation index: 3136
type: ALGORITHM

  assert(T_water >= 0.0, "Variable violating min constraint: 0.0 <= T_water, has value: " + String(T_water, "g"));
*/
OMC_DISABLE_OPT
static void pump_v3_basicCold_t_eqFunction_3136(DATA *data, threadData_t *threadData)
{
  const int equationIndexes[2] = {1,3136};
  modelica_boolean tmp3553;
  static const MMC_DEFSTRINGLIT(tmp3554,62,"Variable violating min constraint: 0.0 <= T_water, has value: ");
  modelica_string tmp3555;
  modelica_metatype tmpMeta3556;
  static int tmp3557 = 0;
  if(!tmp3557)
  {
    tmp3553 = GreaterEq((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[40]] /* T_water PARAM */),0.0);
    if(!tmp3553)
    {
      tmp3555 = modelica_real_to_modelica_string_format((data->simulationInfo->realParameter[data->simulationInfo->realParamsIndex[40]] /* T_water PARAM */), (modelica_string) mmc_strings_len1[103]);
      tmpMeta3556 = stringAppend(MMC_REFSTRINGLIT(tmp3554),tmp3555);
      {
        const char* assert_cond = "(T_water >= 0.0)";
        if (data->simulationInfo->noThrowAsserts) {
          FILE_INFO info = {"E:/Daniel/sgi digital twin/Modelica/pump_v3_basicCold_TinitParam.mo",52,3,52,69,0};
          infoStreamPrintWithEquationIndexes(OMC_LOG_ASSERT, info, 0, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta3556));
        } else {
          FILE_INFO info = {"E:/Daniel/sgi digital twin/Modelica/pump_v3_basicCold_TinitParam.mo",52,3,52,69,0};
          omc_assert_warning_withEquationIndexes(info, equationIndexes, "The following assertion has been violated %sat time %f\n(%s) --> \"%s\"", initial() ? "during initialization " : "", data->localData[0]->timeValue, assert_cond, MMC_STRINGDATA(tmpMeta3556));
        }
      }
      tmp3557 = 1;
    }
  }
  threadData->lastEquationSolved = 3136;
}
OMC_DISABLE_OPT
void pump_v3_basicCold_t_updateBoundParameters_2(DATA *data, threadData_t *threadData)
{
  static void (*const eqFunctions[364])(DATA*, threadData_t*) = {
    pump_v3_basicCold_t_eqFunction_2773,
    pump_v3_basicCold_t_eqFunction_2774,
    pump_v3_basicCold_t_eqFunction_2775,
    pump_v3_basicCold_t_eqFunction_2776,
    pump_v3_basicCold_t_eqFunction_2777,
    pump_v3_basicCold_t_eqFunction_2778,
    pump_v3_basicCold_t_eqFunction_2779,
    pump_v3_basicCold_t_eqFunction_2780,
    pump_v3_basicCold_t_eqFunction_2781,
    pump_v3_basicCold_t_eqFunction_2782,
    pump_v3_basicCold_t_eqFunction_2783,
    pump_v3_basicCold_t_eqFunction_2784,
    pump_v3_basicCold_t_eqFunction_2785,
    pump_v3_basicCold_t_eqFunction_2786,
    pump_v3_basicCold_t_eqFunction_2787,
    pump_v3_basicCold_t_eqFunction_2788,
    pump_v3_basicCold_t_eqFunction_2789,
    pump_v3_basicCold_t_eqFunction_2790,
    pump_v3_basicCold_t_eqFunction_2791,
    pump_v3_basicCold_t_eqFunction_2792,
    pump_v3_basicCold_t_eqFunction_2793,
    pump_v3_basicCold_t_eqFunction_2794,
    pump_v3_basicCold_t_eqFunction_2795,
    pump_v3_basicCold_t_eqFunction_2796,
    pump_v3_basicCold_t_eqFunction_2797,
    pump_v3_basicCold_t_eqFunction_2798,
    pump_v3_basicCold_t_eqFunction_2799,
    pump_v3_basicCold_t_eqFunction_2800,
    pump_v3_basicCold_t_eqFunction_2801,
    pump_v3_basicCold_t_eqFunction_2802,
    pump_v3_basicCold_t_eqFunction_2803,
    pump_v3_basicCold_t_eqFunction_2804,
    pump_v3_basicCold_t_eqFunction_2805,
    pump_v3_basicCold_t_eqFunction_2806,
    pump_v3_basicCold_t_eqFunction_2807,
    pump_v3_basicCold_t_eqFunction_2808,
    pump_v3_basicCold_t_eqFunction_2809,
    pump_v3_basicCold_t_eqFunction_2810,
    pump_v3_basicCold_t_eqFunction_2811,
    pump_v3_basicCold_t_eqFunction_2812,
    pump_v3_basicCold_t_eqFunction_2813,
    pump_v3_basicCold_t_eqFunction_2814,
    pump_v3_basicCold_t_eqFunction_2815,
    pump_v3_basicCold_t_eqFunction_2816,
    pump_v3_basicCold_t_eqFunction_2817,
    pump_v3_basicCold_t_eqFunction_2818,
    pump_v3_basicCold_t_eqFunction_2819,
    pump_v3_basicCold_t_eqFunction_2820,
    pump_v3_basicCold_t_eqFunction_2821,
    pump_v3_basicCold_t_eqFunction_2822,
    pump_v3_basicCold_t_eqFunction_2823,
    pump_v3_basicCold_t_eqFunction_2824,
    pump_v3_basicCold_t_eqFunction_2825,
    pump_v3_basicCold_t_eqFunction_2826,
    pump_v3_basicCold_t_eqFunction_2827,
    pump_v3_basicCold_t_eqFunction_2828,
    pump_v3_basicCold_t_eqFunction_2829,
    pump_v3_basicCold_t_eqFunction_2830,
    pump_v3_basicCold_t_eqFunction_2831,
    pump_v3_basicCold_t_eqFunction_2832,
    pump_v3_basicCold_t_eqFunction_2833,
    pump_v3_basicCold_t_eqFunction_2834,
    pump_v3_basicCold_t_eqFunction_2835,
    pump_v3_basicCold_t_eqFunction_2836,
    pump_v3_basicCold_t_eqFunction_2837,
    pump_v3_basicCold_t_eqFunction_2838,
    pump_v3_basicCold_t_eqFunction_2839,
    pump_v3_basicCold_t_eqFunction_2840,
    pump_v3_basicCold_t_eqFunction_2841,
    pump_v3_basicCold_t_eqFunction_2842,
    pump_v3_basicCold_t_eqFunction_2843,
    pump_v3_basicCold_t_eqFunction_2844,
    pump_v3_basicCold_t_eqFunction_2845,
    pump_v3_basicCold_t_eqFunction_2846,
    pump_v3_basicCold_t_eqFunction_2847,
    pump_v3_basicCold_t_eqFunction_2848,
    pump_v3_basicCold_t_eqFunction_2849,
    pump_v3_basicCold_t_eqFunction_2850,
    pump_v3_basicCold_t_eqFunction_2851,
    pump_v3_basicCold_t_eqFunction_2852,
    pump_v3_basicCold_t_eqFunction_2853,
    pump_v3_basicCold_t_eqFunction_2854,
    pump_v3_basicCold_t_eqFunction_2855,
    pump_v3_basicCold_t_eqFunction_2856,
    pump_v3_basicCold_t_eqFunction_2857,
    pump_v3_basicCold_t_eqFunction_2858,
    pump_v3_basicCold_t_eqFunction_2859,
    pump_v3_basicCold_t_eqFunction_2860,
    pump_v3_basicCold_t_eqFunction_2861,
    pump_v3_basicCold_t_eqFunction_2862,
    pump_v3_basicCold_t_eqFunction_2863,
    pump_v3_basicCold_t_eqFunction_2864,
    pump_v3_basicCold_t_eqFunction_2865,
    pump_v3_basicCold_t_eqFunction_2866,
    pump_v3_basicCold_t_eqFunction_2867,
    pump_v3_basicCold_t_eqFunction_2868,
    pump_v3_basicCold_t_eqFunction_2869,
    pump_v3_basicCold_t_eqFunction_2870,
    pump_v3_basicCold_t_eqFunction_2871,
    pump_v3_basicCold_t_eqFunction_2872,
    pump_v3_basicCold_t_eqFunction_2873,
    pump_v3_basicCold_t_eqFunction_2874,
    pump_v3_basicCold_t_eqFunction_2875,
    pump_v3_basicCold_t_eqFunction_2876,
    pump_v3_basicCold_t_eqFunction_2877,
    pump_v3_basicCold_t_eqFunction_2878,
    pump_v3_basicCold_t_eqFunction_2879,
    pump_v3_basicCold_t_eqFunction_2880,
    pump_v3_basicCold_t_eqFunction_2881,
    pump_v3_basicCold_t_eqFunction_2882,
    pump_v3_basicCold_t_eqFunction_2883,
    pump_v3_basicCold_t_eqFunction_2884,
    pump_v3_basicCold_t_eqFunction_2885,
    pump_v3_basicCold_t_eqFunction_2886,
    pump_v3_basicCold_t_eqFunction_2887,
    pump_v3_basicCold_t_eqFunction_2888,
    pump_v3_basicCold_t_eqFunction_2889,
    pump_v3_basicCold_t_eqFunction_2890,
    pump_v3_basicCold_t_eqFunction_2891,
    pump_v3_basicCold_t_eqFunction_2892,
    pump_v3_basicCold_t_eqFunction_2893,
    pump_v3_basicCold_t_eqFunction_2894,
    pump_v3_basicCold_t_eqFunction_2895,
    pump_v3_basicCold_t_eqFunction_2896,
    pump_v3_basicCold_t_eqFunction_2897,
    pump_v3_basicCold_t_eqFunction_2898,
    pump_v3_basicCold_t_eqFunction_2899,
    pump_v3_basicCold_t_eqFunction_2900,
    pump_v3_basicCold_t_eqFunction_2901,
    pump_v3_basicCold_t_eqFunction_2902,
    pump_v3_basicCold_t_eqFunction_2903,
    pump_v3_basicCold_t_eqFunction_2904,
    pump_v3_basicCold_t_eqFunction_2905,
    pump_v3_basicCold_t_eqFunction_2906,
    pump_v3_basicCold_t_eqFunction_2907,
    pump_v3_basicCold_t_eqFunction_2908,
    pump_v3_basicCold_t_eqFunction_2909,
    pump_v3_basicCold_t_eqFunction_2910,
    pump_v3_basicCold_t_eqFunction_2911,
    pump_v3_basicCold_t_eqFunction_2912,
    pump_v3_basicCold_t_eqFunction_2913,
    pump_v3_basicCold_t_eqFunction_2914,
    pump_v3_basicCold_t_eqFunction_2915,
    pump_v3_basicCold_t_eqFunction_2916,
    pump_v3_basicCold_t_eqFunction_2917,
    pump_v3_basicCold_t_eqFunction_2918,
    pump_v3_basicCold_t_eqFunction_2919,
    pump_v3_basicCold_t_eqFunction_2920,
    pump_v3_basicCold_t_eqFunction_2921,
    pump_v3_basicCold_t_eqFunction_2922,
    pump_v3_basicCold_t_eqFunction_2923,
    pump_v3_basicCold_t_eqFunction_2924,
    pump_v3_basicCold_t_eqFunction_2925,
    pump_v3_basicCold_t_eqFunction_2926,
    pump_v3_basicCold_t_eqFunction_2927,
    pump_v3_basicCold_t_eqFunction_2928,
    pump_v3_basicCold_t_eqFunction_2929,
    pump_v3_basicCold_t_eqFunction_2930,
    pump_v3_basicCold_t_eqFunction_2931,
    pump_v3_basicCold_t_eqFunction_2932,
    pump_v3_basicCold_t_eqFunction_2933,
    pump_v3_basicCold_t_eqFunction_2934,
    pump_v3_basicCold_t_eqFunction_2935,
    pump_v3_basicCold_t_eqFunction_2936,
    pump_v3_basicCold_t_eqFunction_2937,
    pump_v3_basicCold_t_eqFunction_2938,
    pump_v3_basicCold_t_eqFunction_2939,
    pump_v3_basicCold_t_eqFunction_2940,
    pump_v3_basicCold_t_eqFunction_2941,
    pump_v3_basicCold_t_eqFunction_2942,
    pump_v3_basicCold_t_eqFunction_2943,
    pump_v3_basicCold_t_eqFunction_2944,
    pump_v3_basicCold_t_eqFunction_2945,
    pump_v3_basicCold_t_eqFunction_2946,
    pump_v3_basicCold_t_eqFunction_2947,
    pump_v3_basicCold_t_eqFunction_2948,
    pump_v3_basicCold_t_eqFunction_2949,
    pump_v3_basicCold_t_eqFunction_2950,
    pump_v3_basicCold_t_eqFunction_2951,
    pump_v3_basicCold_t_eqFunction_2952,
    pump_v3_basicCold_t_eqFunction_2953,
    pump_v3_basicCold_t_eqFunction_2954,
    pump_v3_basicCold_t_eqFunction_2955,
    pump_v3_basicCold_t_eqFunction_2956,
    pump_v3_basicCold_t_eqFunction_2957,
    pump_v3_basicCold_t_eqFunction_2958,
    pump_v3_basicCold_t_eqFunction_2959,
    pump_v3_basicCold_t_eqFunction_2960,
    pump_v3_basicCold_t_eqFunction_2961,
    pump_v3_basicCold_t_eqFunction_2962,
    pump_v3_basicCold_t_eqFunction_2963,
    pump_v3_basicCold_t_eqFunction_2964,
    pump_v3_basicCold_t_eqFunction_2965,
    pump_v3_basicCold_t_eqFunction_2966,
    pump_v3_basicCold_t_eqFunction_2967,
    pump_v3_basicCold_t_eqFunction_2968,
    pump_v3_basicCold_t_eqFunction_2969,
    pump_v3_basicCold_t_eqFunction_2970,
    pump_v3_basicCold_t_eqFunction_2971,
    pump_v3_basicCold_t_eqFunction_2972,
    pump_v3_basicCold_t_eqFunction_2973,
    pump_v3_basicCold_t_eqFunction_2974,
    pump_v3_basicCold_t_eqFunction_2975,
    pump_v3_basicCold_t_eqFunction_2976,
    pump_v3_basicCold_t_eqFunction_2977,
    pump_v3_basicCold_t_eqFunction_2978,
    pump_v3_basicCold_t_eqFunction_2979,
    pump_v3_basicCold_t_eqFunction_2980,
    pump_v3_basicCold_t_eqFunction_2981,
    pump_v3_basicCold_t_eqFunction_2982,
    pump_v3_basicCold_t_eqFunction_2983,
    pump_v3_basicCold_t_eqFunction_2984,
    pump_v3_basicCold_t_eqFunction_2985,
    pump_v3_basicCold_t_eqFunction_2986,
    pump_v3_basicCold_t_eqFunction_2987,
    pump_v3_basicCold_t_eqFunction_2988,
    pump_v3_basicCold_t_eqFunction_2989,
    pump_v3_basicCold_t_eqFunction_2990,
    pump_v3_basicCold_t_eqFunction_2991,
    pump_v3_basicCold_t_eqFunction_2992,
    pump_v3_basicCold_t_eqFunction_2993,
    pump_v3_basicCold_t_eqFunction_2994,
    pump_v3_basicCold_t_eqFunction_2995,
    pump_v3_basicCold_t_eqFunction_2996,
    pump_v3_basicCold_t_eqFunction_2997,
    pump_v3_basicCold_t_eqFunction_2998,
    pump_v3_basicCold_t_eqFunction_2999,
    pump_v3_basicCold_t_eqFunction_3000,
    pump_v3_basicCold_t_eqFunction_3001,
    pump_v3_basicCold_t_eqFunction_3002,
    pump_v3_basicCold_t_eqFunction_3003,
    pump_v3_basicCold_t_eqFunction_3004,
    pump_v3_basicCold_t_eqFunction_3005,
    pump_v3_basicCold_t_eqFunction_3006,
    pump_v3_basicCold_t_eqFunction_3007,
    pump_v3_basicCold_t_eqFunction_3008,
    pump_v3_basicCold_t_eqFunction_3009,
    pump_v3_basicCold_t_eqFunction_3010,
    pump_v3_basicCold_t_eqFunction_3011,
    pump_v3_basicCold_t_eqFunction_3012,
    pump_v3_basicCold_t_eqFunction_3013,
    pump_v3_basicCold_t_eqFunction_3014,
    pump_v3_basicCold_t_eqFunction_3015,
    pump_v3_basicCold_t_eqFunction_3016,
    pump_v3_basicCold_t_eqFunction_3017,
    pump_v3_basicCold_t_eqFunction_3018,
    pump_v3_basicCold_t_eqFunction_3019,
    pump_v3_basicCold_t_eqFunction_3020,
    pump_v3_basicCold_t_eqFunction_3021,
    pump_v3_basicCold_t_eqFunction_3022,
    pump_v3_basicCold_t_eqFunction_3023,
    pump_v3_basicCold_t_eqFunction_3024,
    pump_v3_basicCold_t_eqFunction_3025,
    pump_v3_basicCold_t_eqFunction_3026,
    pump_v3_basicCold_t_eqFunction_3027,
    pump_v3_basicCold_t_eqFunction_3028,
    pump_v3_basicCold_t_eqFunction_3029,
    pump_v3_basicCold_t_eqFunction_3030,
    pump_v3_basicCold_t_eqFunction_3031,
    pump_v3_basicCold_t_eqFunction_3032,
    pump_v3_basicCold_t_eqFunction_3033,
    pump_v3_basicCold_t_eqFunction_3034,
    pump_v3_basicCold_t_eqFunction_3035,
    pump_v3_basicCold_t_eqFunction_3036,
    pump_v3_basicCold_t_eqFunction_3037,
    pump_v3_basicCold_t_eqFunction_3038,
    pump_v3_basicCold_t_eqFunction_3039,
    pump_v3_basicCold_t_eqFunction_3040,
    pump_v3_basicCold_t_eqFunction_3041,
    pump_v3_basicCold_t_eqFunction_3042,
    pump_v3_basicCold_t_eqFunction_3043,
    pump_v3_basicCold_t_eqFunction_3044,
    pump_v3_basicCold_t_eqFunction_3045,
    pump_v3_basicCold_t_eqFunction_3046,
    pump_v3_basicCold_t_eqFunction_3047,
    pump_v3_basicCold_t_eqFunction_3048,
    pump_v3_basicCold_t_eqFunction_3049,
    pump_v3_basicCold_t_eqFunction_3050,
    pump_v3_basicCold_t_eqFunction_3051,
    pump_v3_basicCold_t_eqFunction_3052,
    pump_v3_basicCold_t_eqFunction_3053,
    pump_v3_basicCold_t_eqFunction_3054,
    pump_v3_basicCold_t_eqFunction_3055,
    pump_v3_basicCold_t_eqFunction_3056,
    pump_v3_basicCold_t_eqFunction_3057,
    pump_v3_basicCold_t_eqFunction_3058,
    pump_v3_basicCold_t_eqFunction_3059,
    pump_v3_basicCold_t_eqFunction_3060,
    pump_v3_basicCold_t_eqFunction_3061,
    pump_v3_basicCold_t_eqFunction_3062,
    pump_v3_basicCold_t_eqFunction_3063,
    pump_v3_basicCold_t_eqFunction_3064,
    pump_v3_basicCold_t_eqFunction_3065,
    pump_v3_basicCold_t_eqFunction_3066,
    pump_v3_basicCold_t_eqFunction_3067,
    pump_v3_basicCold_t_eqFunction_3068,
    pump_v3_basicCold_t_eqFunction_3069,
    pump_v3_basicCold_t_eqFunction_3070,
    pump_v3_basicCold_t_eqFunction_3071,
    pump_v3_basicCold_t_eqFunction_3072,
    pump_v3_basicCold_t_eqFunction_3073,
    pump_v3_basicCold_t_eqFunction_3074,
    pump_v3_basicCold_t_eqFunction_3075,
    pump_v3_basicCold_t_eqFunction_3076,
    pump_v3_basicCold_t_eqFunction_3077,
    pump_v3_basicCold_t_eqFunction_3078,
    pump_v3_basicCold_t_eqFunction_3079,
    pump_v3_basicCold_t_eqFunction_3080,
    pump_v3_basicCold_t_eqFunction_3081,
    pump_v3_basicCold_t_eqFunction_3082,
    pump_v3_basicCold_t_eqFunction_3083,
    pump_v3_basicCold_t_eqFunction_3084,
    pump_v3_basicCold_t_eqFunction_3085,
    pump_v3_basicCold_t_eqFunction_3086,
    pump_v3_basicCold_t_eqFunction_3087,
    pump_v3_basicCold_t_eqFunction_3088,
    pump_v3_basicCold_t_eqFunction_3089,
    pump_v3_basicCold_t_eqFunction_3090,
    pump_v3_basicCold_t_eqFunction_3091,
    pump_v3_basicCold_t_eqFunction_3092,
    pump_v3_basicCold_t_eqFunction_3093,
    pump_v3_basicCold_t_eqFunction_3094,
    pump_v3_basicCold_t_eqFunction_3095,
    pump_v3_basicCold_t_eqFunction_3096,
    pump_v3_basicCold_t_eqFunction_3097,
    pump_v3_basicCold_t_eqFunction_3098,
    pump_v3_basicCold_t_eqFunction_3099,
    pump_v3_basicCold_t_eqFunction_3100,
    pump_v3_basicCold_t_eqFunction_3101,
    pump_v3_basicCold_t_eqFunction_3102,
    pump_v3_basicCold_t_eqFunction_3103,
    pump_v3_basicCold_t_eqFunction_3104,
    pump_v3_basicCold_t_eqFunction_3105,
    pump_v3_basicCold_t_eqFunction_3106,
    pump_v3_basicCold_t_eqFunction_3107,
    pump_v3_basicCold_t_eqFunction_3108,
    pump_v3_basicCold_t_eqFunction_3109,
    pump_v3_basicCold_t_eqFunction_3110,
    pump_v3_basicCold_t_eqFunction_3111,
    pump_v3_basicCold_t_eqFunction_3112,
    pump_v3_basicCold_t_eqFunction_3113,
    pump_v3_basicCold_t_eqFunction_3114,
    pump_v3_basicCold_t_eqFunction_3115,
    pump_v3_basicCold_t_eqFunction_3116,
    pump_v3_basicCold_t_eqFunction_3117,
    pump_v3_basicCold_t_eqFunction_3118,
    pump_v3_basicCold_t_eqFunction_3119,
    pump_v3_basicCold_t_eqFunction_3120,
    pump_v3_basicCold_t_eqFunction_3121,
    pump_v3_basicCold_t_eqFunction_3122,
    pump_v3_basicCold_t_eqFunction_3123,
    pump_v3_basicCold_t_eqFunction_3124,
    pump_v3_basicCold_t_eqFunction_3125,
    pump_v3_basicCold_t_eqFunction_3126,
    pump_v3_basicCold_t_eqFunction_3127,
    pump_v3_basicCold_t_eqFunction_3128,
    pump_v3_basicCold_t_eqFunction_3129,
    pump_v3_basicCold_t_eqFunction_3130,
    pump_v3_basicCold_t_eqFunction_3131,
    pump_v3_basicCold_t_eqFunction_3132,
    pump_v3_basicCold_t_eqFunction_3133,
    pump_v3_basicCold_t_eqFunction_3134,
    pump_v3_basicCold_t_eqFunction_3135,
    pump_v3_basicCold_t_eqFunction_3136
  };
  
  for (int id = 0; id < 364; id++) {
    eqFunctions[id](data, threadData);
  }
}
#if defined(__cplusplus)
}
#endif