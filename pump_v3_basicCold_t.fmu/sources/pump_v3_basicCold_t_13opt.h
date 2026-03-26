#if defined(__cplusplus)
  extern "C" {
#endif
  int pump_v3_basicCold_t_mayer(DATA* data, modelica_real** res, short*);
  int pump_v3_basicCold_t_lagrange(DATA* data, modelica_real** res, short *, short *);
  int pump_v3_basicCold_t_getInputVarIndicesInOptimization(DATA* data, int* input_var_indices);
  int pump_v3_basicCold_t_pickUpBoundsForInputsInOptimization(DATA* data, modelica_real* min, modelica_real* max, modelica_real*nominal, modelica_boolean *useNominal, char ** name, modelica_real * start, modelica_real * startTimeOpt);
  int pump_v3_basicCold_t_setInputData(DATA *data, const modelica_boolean file);
  int pump_v3_basicCold_t_getTimeGrid(DATA *data, modelica_integer * nsi, modelica_real**t);
#if defined(__cplusplus)
}
#endif
