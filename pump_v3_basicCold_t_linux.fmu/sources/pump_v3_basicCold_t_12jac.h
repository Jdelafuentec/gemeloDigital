/* Jacobians */
static const REAL_ATTRIBUTE dummyREAL_ATTRIBUTE = omc_dummyRealAttribute;

#if defined(__cplusplus)
extern "C" {
#endif

/* Jacobian Variables */
#define pump_v3_basicCold_t_INDEX_JAC_H 0
int pump_v3_basicCold_t_functionJacH_column(DATA* data, threadData_t *threadData, JACOBIAN *thisJacobian, JACOBIAN *parentJacobian);
int pump_v3_basicCold_t_initialAnalyticJacobianH(DATA* data, threadData_t *threadData, JACOBIAN *jacobian);


#define pump_v3_basicCold_t_INDEX_JAC_F 1
int pump_v3_basicCold_t_functionJacF_column(DATA* data, threadData_t *threadData, JACOBIAN *thisJacobian, JACOBIAN *parentJacobian);
int pump_v3_basicCold_t_initialAnalyticJacobianF(DATA* data, threadData_t *threadData, JACOBIAN *jacobian);


#define pump_v3_basicCold_t_INDEX_JAC_D 2
int pump_v3_basicCold_t_functionJacD_column(DATA* data, threadData_t *threadData, JACOBIAN *thisJacobian, JACOBIAN *parentJacobian);
int pump_v3_basicCold_t_initialAnalyticJacobianD(DATA* data, threadData_t *threadData, JACOBIAN *jacobian);


#define pump_v3_basicCold_t_INDEX_JAC_C 3
int pump_v3_basicCold_t_functionJacC_column(DATA* data, threadData_t *threadData, JACOBIAN *thisJacobian, JACOBIAN *parentJacobian);
int pump_v3_basicCold_t_initialAnalyticJacobianC(DATA* data, threadData_t *threadData, JACOBIAN *jacobian);


#define pump_v3_basicCold_t_INDEX_JAC_B 4
int pump_v3_basicCold_t_functionJacB_column(DATA* data, threadData_t *threadData, JACOBIAN *thisJacobian, JACOBIAN *parentJacobian);
int pump_v3_basicCold_t_initialAnalyticJacobianB(DATA* data, threadData_t *threadData, JACOBIAN *jacobian);


#define pump_v3_basicCold_t_INDEX_JAC_A 5
int pump_v3_basicCold_t_functionJacA_column(DATA* data, threadData_t *threadData, JACOBIAN *thisJacobian, JACOBIAN *parentJacobian);
int pump_v3_basicCold_t_initialAnalyticJacobianA(DATA* data, threadData_t *threadData, JACOBIAN *jacobian);

#if defined(__cplusplus)
}
#endif
