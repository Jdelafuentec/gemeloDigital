/* Events: Sample, Zero Crossings, Relations, Discrete Changes */
#include "pump_v3_basicCold_t_model.h"
#if defined(__cplusplus)
extern "C" {
#endif

/* Initializes the raw time events of the simulation using the now
   calcualted parameters. */
void pump_v3_basicCold_t_function_initSample(DATA *data, threadData_t *threadData)
{
  long i=0;
}

const char *pump_v3_basicCold_t_zeroCrossingDescription(int i, int **out_EquationIndexes)
{
  static const char *res[] = {"spatialDistributionZeroCrossing(7, 1, plugFlowPipe2.timDel.x, plugFlowPipe2.timDel.u >= 0.0) > 0.0",
  "plugFlowPipe2.timDel.u >= 0.0",
  "spatialDistributionZeroCrossing(6, 3, plugFlowPipe2.del.x, plugFlowPipe2.v >= 0.0) > 0.0",
  "plugFlowPipe2.v >= 0.0",
  "spatialDistributionZeroCrossing(5, 5, plugFlowPipe_heat.timDel.x, plugFlowPipe_heat.timDel.u >= 0.0) > 0.0",
  "plugFlowPipe_heat.timDel.u >= 0.0",
  "spatialDistributionZeroCrossing(4, 7, plugFlowPipe_heat.del.x / 1.5, plugFlowPipe_heat.v >= 0.0) > 0.0",
  "plugFlowPipe_heat.v >= 0.0",
  "spatialDistributionZeroCrossing(3, 9, plugFlowPipe1.timDel.x, plugFlowPipe1.timDel.u >= 0.0) > 0.0",
  "plugFlowPipe1.timDel.u >= 0.0",
  "spatialDistributionZeroCrossing(2, 11, plugFlowPipe1.del.x, plugFlowPipe1.v >= 0.0) > 0.0",
  "plugFlowPipe1.v >= 0.0",
  "spatialDistributionZeroCrossing(1, 13, plugFlowPipe.timDel.x, plugFlowPipe.timDel.u >= 0.0) > 0.0",
  "plugFlowPipe.timDel.u >= 0.0",
  "spatialDistributionZeroCrossing(0, 15, plugFlowPipe.del.x, plugFlowPipe.v >= 0.0) > 0.0",
  "plugFlowPipe.v >= 0.0"};
  static const int occurEqs0[] = {1,868};
  static const int occurEqs1[] = {1,868};
  static const int occurEqs2[] = {1,863};
  static const int occurEqs3[] = {1,863};
  static const int occurEqs4[] = {1,846};
  static const int occurEqs5[] = {1,846};
  static const int occurEqs6[] = {1,843};
  static const int occurEqs7[] = {1,843};
  static const int occurEqs8[] = {1,828};
  static const int occurEqs9[] = {1,828};
  static const int occurEqs10[] = {1,825};
  static const int occurEqs11[] = {1,825};
  static const int occurEqs12[] = {1,810};
  static const int occurEqs13[] = {1,810};
  static const int occurEqs14[] = {1,807};
  static const int occurEqs15[] = {1,807};
  static const int *occurEqs[] = {occurEqs0,occurEqs1,occurEqs2,occurEqs3,occurEqs4,occurEqs5,occurEqs6,occurEqs7,occurEqs8,occurEqs9,occurEqs10,occurEqs11,occurEqs12,occurEqs13,occurEqs14,occurEqs15};
  *out_EquationIndexes = (int*) occurEqs[i];
  return res[i];
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

int pump_v3_basicCold_t_function_ZeroCrossingsEquations(DATA *data, threadData_t *threadData)
{
  data->simulationInfo->callStatistics.functionZeroCrossingsEquations++;

  static void (*const eqFunctions[173])(DATA*, threadData_t*) = {
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
  
  for (int id = 0; id < 173; id++) {
    eqFunctions[id](data, threadData);
  }
  
  return 0;
}

int pump_v3_basicCold_t_function_ZeroCrossings(DATA *data, threadData_t *threadData, double *gout)
{
  const int *equationIndexes = NULL;

  modelica_boolean tmp0;
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_boolean tmp3;
  modelica_boolean tmp4;
  modelica_real tmp5;
  modelica_real tmp6;
  modelica_boolean tmp7;
  modelica_real tmp8;
  modelica_real tmp9;
  modelica_boolean tmp10;
  modelica_boolean tmp11;
  modelica_real tmp12;
  modelica_real tmp13;
  modelica_boolean tmp14;
  modelica_real tmp15;
  modelica_real tmp16;
  modelica_boolean tmp17;
  modelica_boolean tmp18;
  modelica_real tmp19;
  modelica_real tmp20;
  modelica_boolean tmp21;
  modelica_real tmp22;
  modelica_real tmp23;
  modelica_boolean tmp24;
  modelica_boolean tmp25;
  modelica_real tmp26;
  modelica_real tmp27;
  modelica_boolean tmp28;
  modelica_real tmp29;
  modelica_real tmp30;
  modelica_boolean tmp31;
  modelica_boolean tmp32;
  modelica_real tmp33;
  modelica_real tmp34;
  modelica_boolean tmp35;
  modelica_real tmp36;
  modelica_real tmp37;
  modelica_boolean tmp38;
  modelica_boolean tmp39;
  modelica_real tmp40;
  modelica_real tmp41;
  modelica_boolean tmp42;
  modelica_real tmp43;
  modelica_real tmp44;
  modelica_boolean tmp45;
  modelica_boolean tmp46;
  modelica_real tmp47;
  modelica_real tmp48;
  modelica_boolean tmp49;
  modelica_real tmp50;
  modelica_real tmp51;
  modelica_boolean tmp52;
  modelica_boolean tmp53;
  modelica_real tmp54;
  modelica_real tmp55;
  modelica_integer current_index = 0;
  modelica_integer start_index;
  
#if !defined(OMC_MINIMAL_RUNTIME)
  if (measure_time_flag) rt_tick(SIM_TIMER_ZC);
#endif
  data->simulationInfo->callStatistics.functionZeroCrossings++;

  start_index = current_index;
  tmp1 = 1.0;
  tmp2 = 0.0;
  tmp0 = GreaterEqZC((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[296]] /* plugFlowPipe2.timDel.u variable */), 0.0, tmp1, tmp2, data->simulationInfo->storedRelations[0]);
  tmp3 = Greater(spatialDistributionZeroCrossing(data, threadData, 7, 1, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[10]] /* plugFlowPipe2.timDel.x STATE(1,plugFlowPipe2.timDel.u) */), tmp0),0.0);
  gout[start_index] = (tmp3) ? 1 : -1;
  current_index++;

  start_index = current_index;
  tmp5 = 1.0;
  tmp6 = 0.0;
  tmp4 = GreaterEqZC((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[296]] /* plugFlowPipe2.timDel.u variable */), 0.0, tmp5, tmp6, data->simulationInfo->storedRelations[0]);
  gout[start_index] = (tmp4) ? 1 : -1;
  current_index++;

  start_index = current_index;
  tmp8 = 1.0;
  tmp9 = 0.0;
  tmp7 = GreaterEqZC((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[297]] /* plugFlowPipe2.v variable */), 0.0, tmp8, tmp9, data->simulationInfo->storedRelations[2]);
  tmp10 = Greater(spatialDistributionZeroCrossing(data, threadData, 6, 3, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[9]] /* plugFlowPipe2.del.x STATE(1,plugFlowPipe2.v) */), tmp7),0.0);
  gout[start_index] = (tmp10) ? 1 : -1;
  current_index++;

  start_index = current_index;
  tmp12 = 1.0;
  tmp13 = 0.0;
  tmp11 = GreaterEqZC((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[297]] /* plugFlowPipe2.v variable */), 0.0, tmp12, tmp13, data->simulationInfo->storedRelations[2]);
  gout[start_index] = (tmp11) ? 1 : -1;
  current_index++;

  start_index = current_index;
  tmp15 = 1.0;
  tmp16 = 0.0;
  tmp14 = GreaterEqZC((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[354]] /* plugFlowPipe_heat.timDel.u variable */), 0.0, tmp15, tmp16, data->simulationInfo->storedRelations[4]);
  tmp17 = Greater(spatialDistributionZeroCrossing(data, threadData, 5, 5, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[14]] /* plugFlowPipe_heat.timDel.x STATE(1,plugFlowPipe_heat.timDel.u) */), tmp14),0.0);
  gout[start_index] = (tmp17) ? 1 : -1;
  current_index++;

  start_index = current_index;
  tmp19 = 1.0;
  tmp20 = 0.0;
  tmp18 = GreaterEqZC((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[354]] /* plugFlowPipe_heat.timDel.u variable */), 0.0, tmp19, tmp20, data->simulationInfo->storedRelations[4]);
  gout[start_index] = (tmp18) ? 1 : -1;
  current_index++;

  start_index = current_index;
  tmp22 = 1.0;
  tmp23 = 0.0;
  tmp21 = GreaterEqZC((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[355]] /* plugFlowPipe_heat.v variable */), 0.0, tmp22, tmp23, data->simulationInfo->storedRelations[6]);
  tmp24 = Greater(spatialDistributionZeroCrossing(data, threadData, 4, 7, DIVISION((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[13]] /* plugFlowPipe_heat.del.x STATE(1,plugFlowPipe_heat.v) */),1.5,"1.5"), tmp21),0.0);
  gout[start_index] = (tmp24) ? 1 : -1;
  current_index++;

  start_index = current_index;
  tmp26 = 1.0;
  tmp27 = 0.0;
  tmp25 = GreaterEqZC((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[355]] /* plugFlowPipe_heat.v variable */), 0.0, tmp26, tmp27, data->simulationInfo->storedRelations[6]);
  gout[start_index] = (tmp25) ? 1 : -1;
  current_index++;

  start_index = current_index;
  tmp29 = 1.0;
  tmp30 = 0.0;
  tmp28 = GreaterEqZC((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[237]] /* plugFlowPipe1.timDel.u variable */), 0.0, tmp29, tmp30, data->simulationInfo->storedRelations[8]);
  tmp31 = Greater(spatialDistributionZeroCrossing(data, threadData, 3, 9, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[6]] /* plugFlowPipe1.timDel.x STATE(1,plugFlowPipe1.timDel.u) */), tmp28),0.0);
  gout[start_index] = (tmp31) ? 1 : -1;
  current_index++;

  start_index = current_index;
  tmp33 = 1.0;
  tmp34 = 0.0;
  tmp32 = GreaterEqZC((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[237]] /* plugFlowPipe1.timDel.u variable */), 0.0, tmp33, tmp34, data->simulationInfo->storedRelations[8]);
  gout[start_index] = (tmp32) ? 1 : -1;
  current_index++;

  start_index = current_index;
  tmp36 = 1.0;
  tmp37 = 0.0;
  tmp35 = GreaterEqZC((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[238]] /* plugFlowPipe1.v variable */), 0.0, tmp36, tmp37, data->simulationInfo->storedRelations[10]);
  tmp38 = Greater(spatialDistributionZeroCrossing(data, threadData, 2, 11, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[5]] /* plugFlowPipe1.del.x STATE(1,plugFlowPipe1.v) */), tmp35),0.0);
  gout[start_index] = (tmp38) ? 1 : -1;
  current_index++;

  start_index = current_index;
  tmp40 = 1.0;
  tmp41 = 0.0;
  tmp39 = GreaterEqZC((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[238]] /* plugFlowPipe1.v variable */), 0.0, tmp40, tmp41, data->simulationInfo->storedRelations[10]);
  gout[start_index] = (tmp39) ? 1 : -1;
  current_index++;

  start_index = current_index;
  tmp43 = 1.0;
  tmp44 = 0.0;
  tmp42 = GreaterEqZC((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[179]] /* plugFlowPipe.timDel.u variable */), 0.0, tmp43, tmp44, data->simulationInfo->storedRelations[12]);
  tmp45 = Greater(spatialDistributionZeroCrossing(data, threadData, 1, 13, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[2]] /* plugFlowPipe.timDel.x STATE(1,plugFlowPipe.timDel.u) */), tmp42),0.0);
  gout[start_index] = (tmp45) ? 1 : -1;
  current_index++;

  start_index = current_index;
  tmp47 = 1.0;
  tmp48 = 0.0;
  tmp46 = GreaterEqZC((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[179]] /* plugFlowPipe.timDel.u variable */), 0.0, tmp47, tmp48, data->simulationInfo->storedRelations[12]);
  gout[start_index] = (tmp46) ? 1 : -1;
  current_index++;

  start_index = current_index;
  tmp50 = 1.0;
  tmp51 = 0.0;
  tmp49 = GreaterEqZC((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[180]] /* plugFlowPipe.v variable */), 0.0, tmp50, tmp51, data->simulationInfo->storedRelations[14]);
  tmp52 = Greater(spatialDistributionZeroCrossing(data, threadData, 0, 15, (data->localData[0]->realVars[data->simulationInfo->realVarsIndex[1]] /* plugFlowPipe.del.x STATE(1,plugFlowPipe.v) */), tmp49),0.0);
  gout[start_index] = (tmp52) ? 1 : -1;
  current_index++;

  start_index = current_index;
  tmp54 = 1.0;
  tmp55 = 0.0;
  tmp53 = GreaterEqZC((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[180]] /* plugFlowPipe.v variable */), 0.0, tmp54, tmp55, data->simulationInfo->storedRelations[14]);
  gout[start_index] = (tmp53) ? 1 : -1;
  current_index++;

#if !defined(OMC_MINIMAL_RUNTIME)
  if (measure_time_flag) rt_accumulate(SIM_TIMER_ZC);
#endif

  return 0;
}

const char *pump_v3_basicCold_t_relationDescription(int i)
{
  const char *res[] = {"plugFlowPipe2.timDel.u >= 0.0",
  "spatialDistributionZeroCrossing(7, 1, plugFlowPipe2.timDel.x, plugFlowPipe2.timDel.u >= 0.0)",
  "plugFlowPipe2.v >= 0.0",
  "spatialDistributionZeroCrossing(6, 3, plugFlowPipe2.del.x, plugFlowPipe2.v >= 0.0)",
  "plugFlowPipe_heat.timDel.u >= 0.0",
  "spatialDistributionZeroCrossing(5, 5, plugFlowPipe_heat.timDel.x, plugFlowPipe_heat.timDel.u >= 0.0)",
  "plugFlowPipe_heat.v >= 0.0",
  "spatialDistributionZeroCrossing(4, 7, plugFlowPipe_heat.del.x / 1.5, plugFlowPipe_heat.v >= 0.0)",
  "plugFlowPipe1.timDel.u >= 0.0",
  "spatialDistributionZeroCrossing(3, 9, plugFlowPipe1.timDel.x, plugFlowPipe1.timDel.u >= 0.0)",
  "plugFlowPipe1.v >= 0.0",
  "spatialDistributionZeroCrossing(2, 11, plugFlowPipe1.del.x, plugFlowPipe1.v >= 0.0)",
  "plugFlowPipe.timDel.u >= 0.0",
  "spatialDistributionZeroCrossing(1, 13, plugFlowPipe.timDel.x, plugFlowPipe.timDel.u >= 0.0)",
  "plugFlowPipe.v >= 0.0",
  "spatialDistributionZeroCrossing(0, 15, plugFlowPipe.del.x, plugFlowPipe.v >= 0.0)"};
  return res[i];
}

int pump_v3_basicCold_t_function_updateRelations(DATA *data, threadData_t *threadData, int evalforZeroCross)
{
  const int *equationIndexes = NULL;

  modelica_boolean tmp56;
  modelica_real tmp57;
  modelica_real tmp58;
  modelica_boolean tmp59;
  modelica_real tmp60;
  modelica_real tmp61;
  modelica_boolean tmp62;
  modelica_real tmp63;
  modelica_real tmp64;
  modelica_boolean tmp65;
  modelica_real tmp66;
  modelica_real tmp67;
  modelica_boolean tmp68;
  modelica_real tmp69;
  modelica_real tmp70;
  modelica_boolean tmp71;
  modelica_real tmp72;
  modelica_real tmp73;
  modelica_boolean tmp74;
  modelica_real tmp75;
  modelica_real tmp76;
  modelica_boolean tmp77;
  modelica_real tmp78;
  modelica_real tmp79;
  modelica_integer current_index = 0;
  modelica_integer start_index;
  
  if(evalforZeroCross) {
    start_index = current_index;
    tmp57 = 1.0;
    tmp58 = 0.0;
    tmp56 = GreaterEqZC((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[296]] /* plugFlowPipe2.timDel.u variable */), 0.0, tmp57, tmp58, data->simulationInfo->storedRelations[0]);
    data->simulationInfo->relations[start_index] = tmp56;
    current_index++;

    /* UNKNOWN Relation for 1 */
    current_index++;

    start_index = current_index;
    tmp60 = 1.0;
    tmp61 = 0.0;
    tmp59 = GreaterEqZC((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[297]] /* plugFlowPipe2.v variable */), 0.0, tmp60, tmp61, data->simulationInfo->storedRelations[2]);
    data->simulationInfo->relations[start_index] = tmp59;
    current_index++;

    /* UNKNOWN Relation for 3 */
    current_index++;

    start_index = current_index;
    tmp63 = 1.0;
    tmp64 = 0.0;
    tmp62 = GreaterEqZC((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[354]] /* plugFlowPipe_heat.timDel.u variable */), 0.0, tmp63, tmp64, data->simulationInfo->storedRelations[4]);
    data->simulationInfo->relations[start_index] = tmp62;
    current_index++;

    /* UNKNOWN Relation for 5 */
    current_index++;

    start_index = current_index;
    tmp66 = 1.0;
    tmp67 = 0.0;
    tmp65 = GreaterEqZC((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[355]] /* plugFlowPipe_heat.v variable */), 0.0, tmp66, tmp67, data->simulationInfo->storedRelations[6]);
    data->simulationInfo->relations[start_index] = tmp65;
    current_index++;

    /* UNKNOWN Relation for 7 */
    current_index++;

    start_index = current_index;
    tmp69 = 1.0;
    tmp70 = 0.0;
    tmp68 = GreaterEqZC((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[237]] /* plugFlowPipe1.timDel.u variable */), 0.0, tmp69, tmp70, data->simulationInfo->storedRelations[8]);
    data->simulationInfo->relations[start_index] = tmp68;
    current_index++;

    /* UNKNOWN Relation for 9 */
    current_index++;

    start_index = current_index;
    tmp72 = 1.0;
    tmp73 = 0.0;
    tmp71 = GreaterEqZC((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[238]] /* plugFlowPipe1.v variable */), 0.0, tmp72, tmp73, data->simulationInfo->storedRelations[10]);
    data->simulationInfo->relations[start_index] = tmp71;
    current_index++;

    /* UNKNOWN Relation for 11 */
    current_index++;

    start_index = current_index;
    tmp75 = 1.0;
    tmp76 = 0.0;
    tmp74 = GreaterEqZC((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[179]] /* plugFlowPipe.timDel.u variable */), 0.0, tmp75, tmp76, data->simulationInfo->storedRelations[12]);
    data->simulationInfo->relations[start_index] = tmp74;
    current_index++;

    /* UNKNOWN Relation for 13 */
    current_index++;

    start_index = current_index;
    tmp78 = 1.0;
    tmp79 = 0.0;
    tmp77 = GreaterEqZC((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[180]] /* plugFlowPipe.v variable */), 0.0, tmp78, tmp79, data->simulationInfo->storedRelations[14]);
    data->simulationInfo->relations[start_index] = tmp77;
    current_index++;

    /* UNKNOWN Relation for 15 */
    current_index++;
  } else {
    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[296]] /* plugFlowPipe2.timDel.u variable */) >= 0.0);
    current_index++;

    /* UNKNOWN Relation for 1 */
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[297]] /* plugFlowPipe2.v variable */) >= 0.0);
    current_index++;

    /* UNKNOWN Relation for 3 */
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[354]] /* plugFlowPipe_heat.timDel.u variable */) >= 0.0);
    current_index++;

    /* UNKNOWN Relation for 5 */
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[355]] /* plugFlowPipe_heat.v variable */) >= 0.0);
    current_index++;

    /* UNKNOWN Relation for 7 */
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[237]] /* plugFlowPipe1.timDel.u variable */) >= 0.0);
    current_index++;

    /* UNKNOWN Relation for 9 */
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[238]] /* plugFlowPipe1.v variable */) >= 0.0);
    current_index++;

    /* UNKNOWN Relation for 11 */
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[179]] /* plugFlowPipe.timDel.u variable */) >= 0.0);
    current_index++;

    /* UNKNOWN Relation for 13 */
    current_index++;

    start_index = current_index;
    data->simulationInfo->relations[start_index] = ((data->localData[0]->realVars[data->simulationInfo->realVarsIndex[180]] /* plugFlowPipe.v variable */) >= 0.0);
    current_index++;

    /* UNKNOWN Relation for 15 */
    current_index++;
  }
  
  return 0;
}

#if defined(__cplusplus)
}
#endif
