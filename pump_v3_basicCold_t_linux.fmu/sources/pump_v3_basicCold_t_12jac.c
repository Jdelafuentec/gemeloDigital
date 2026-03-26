/* Jacobians 6 */
#include "pump_v3_basicCold_t_model.h"
#include "pump_v3_basicCold_t_12jac.h"
#include "simulation/jacobian_util.h"
#include "util/omc_file.h"
int pump_v3_basicCold_t_functionJacH_column(DATA* data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  return 0;
}
int pump_v3_basicCold_t_functionJacF_column(DATA* data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  return 0;
}
int pump_v3_basicCold_t_functionJacD_column(DATA* data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  return 0;
}
int pump_v3_basicCold_t_functionJacC_column(DATA* data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  return 0;
}
int pump_v3_basicCold_t_functionJacB_column(DATA* data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  return 0;
}
/* constant equations */
/* dynamic equations */

OMC_DISABLE_OPT
int pump_v3_basicCold_t_functionJacA_constantEqns(DATA* data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  int index = pump_v3_basicCold_t_INDEX_JAC_A;
  
  
  return 0;
}

int pump_v3_basicCold_t_functionJacA_column(DATA* data, threadData_t *threadData, JACOBIAN *jacobian, JACOBIAN *parentJacobian)
{
  int index = pump_v3_basicCold_t_INDEX_JAC_A;
  
  
  return 0;
}

int pump_v3_basicCold_t_initialAnalyticJacobianH(DATA* data, threadData_t *threadData, JACOBIAN *jacobian)
{
  jacobian->availability = JACOBIAN_NOT_AVAILABLE;
  return 1;
}
int pump_v3_basicCold_t_initialAnalyticJacobianF(DATA* data, threadData_t *threadData, JACOBIAN *jacobian)
{
  jacobian->availability = JACOBIAN_NOT_AVAILABLE;
  return 1;
}
int pump_v3_basicCold_t_initialAnalyticJacobianD(DATA* data, threadData_t *threadData, JACOBIAN *jacobian)
{
  jacobian->availability = JACOBIAN_NOT_AVAILABLE;
  return 1;
}
int pump_v3_basicCold_t_initialAnalyticJacobianC(DATA* data, threadData_t *threadData, JACOBIAN *jacobian)
{
  jacobian->availability = JACOBIAN_NOT_AVAILABLE;
  return 1;
}
int pump_v3_basicCold_t_initialAnalyticJacobianB(DATA* data, threadData_t *threadData, JACOBIAN *jacobian)
{
  jacobian->availability = JACOBIAN_NOT_AVAILABLE;
  return 1;
}
OMC_DISABLE_OPT
int pump_v3_basicCold_t_initialAnalyticJacobianA(DATA* data, threadData_t *threadData, JACOBIAN *jacobian)
{
  size_t count;

  FILE* pFile = openSparsePatternFile(data, threadData, "pump_v3_basicCold_t_JacA.bin");
  
  initJacobian(jacobian, 21, 21, 0, pump_v3_basicCold_t_functionJacA_column, NULL, NULL);
  jacobian->sparsePattern = allocSparsePattern(21, 73, 6);
  jacobian->availability = JACOBIAN_ONLY_SPARSITY;
  
  /* read lead index of compressed sparse column */
  count = omc_fread(jacobian->sparsePattern->leadindex, sizeof(unsigned int), 21+1, pFile, FALSE);
  if (count != 21+1) {
    throwStreamPrint(threadData, "Error while reading lead index list of sparsity pattern. Expected %d, got %zu", 21+1, count);
  }
  
  /* read sparse index */
  count = omc_fread(jacobian->sparsePattern->index, sizeof(unsigned int), 73, pFile, FALSE);
  if (count != 73) {
    throwStreamPrint(threadData, "Error while reading row index list of sparsity pattern. Expected %d, got %zu", 73, count);
  }
  
  /* write color array */
  /* color 1 with 1 columns */
  readSparsePatternColor(threadData, pFile, jacobian->sparsePattern->colorCols, 1, 1, 21);
  /* color 2 with 2 columns */
  readSparsePatternColor(threadData, pFile, jacobian->sparsePattern->colorCols, 2, 2, 21);
  /* color 3 with 4 columns */
  readSparsePatternColor(threadData, pFile, jacobian->sparsePattern->colorCols, 3, 4, 21);
  /* color 4 with 4 columns */
  readSparsePatternColor(threadData, pFile, jacobian->sparsePattern->colorCols, 4, 4, 21);
  /* color 5 with 4 columns */
  readSparsePatternColor(threadData, pFile, jacobian->sparsePattern->colorCols, 5, 4, 21);
  /* color 6 with 6 columns */
  readSparsePatternColor(threadData, pFile, jacobian->sparsePattern->colorCols, 6, 6, 21);
  
  omc_fclose(pFile);
  
  return 0;
}


