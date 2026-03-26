#ifndef pump_v3_basicCold_t__H
#define pump_v3_basicCold_t__H
#include "meta/meta_modelica.h"
#include "util/modelica.h"
#include <stdio.h>
#include <stdlib.h>
#include <errno.h>

#include "simulation/simulation_runtime.h"
#ifdef __cplusplus
extern "C" {
#endif

typedef struct {
  modelica_integer _n;
  real_array _V_flow;
  real_array _dp;
} IDEAS_Fluid_Movers_BaseClasses_Characteristics_flowParametersInternal;
extern struct record_description IDEAS_Fluid_Movers_BaseClasses_Characteristics_flowParametersInternal__desc;

void IDEAS_Fluid_Movers_BaseClasses_Characteristics_flowParametersInternal_construct_p(threadData_t *threadData, void* v_ths );
#define IDEAS_Fluid_Movers_BaseClasses_Characteristics_flowParametersInternal_construct(td, ths ) IDEAS_Fluid_Movers_BaseClasses_Characteristics_flowParametersInternal_construct_p(td, &ths )
void IDEAS_Fluid_Movers_BaseClasses_Characteristics_flowParametersInternal_copy_p(void* v_src, void* v_dst);
#define IDEAS_Fluid_Movers_BaseClasses_Characteristics_flowParametersInternal_copy(src,dst) IDEAS_Fluid_Movers_BaseClasses_Characteristics_flowParametersInternal_copy_p(&src, &dst)


void IDEAS_Fluid_Movers_BaseClasses_Characteristics_flowParametersInternal_wrap_vars_p(threadData_t *threadData , void* v_dst , modelica_integer in_n, real_array in_V_flow, real_array in_dp);
#define IDEAS_Fluid_Movers_BaseClasses_Characteristics_flowParametersInternal_wrap_vars(td, dst , in_n, in_V_flow, in_dp) IDEAS_Fluid_Movers_BaseClasses_Characteristics_flowParametersInternal_wrap_vars_p(td, &dst , in_n, in_V_flow, in_dp)

// This function is not needed anymore. If you want to know how a record
// is 'assigned to' in simulation context see assignRhsExpToRecordCrefSimContext and
// splitRecordAssignmentToMemberAssignments (simCode). Basically the record is
// split up assignments generated for each member individually.
// void IDEAS_Fluid_Movers_BaseClasses_Characteristics_flowParametersInternal_copy_to_vars_p(void* v_src , modelica_integer* in_n, real_array* in_V_flow, real_array* in_dp);
// #define IDEAS_Fluid_Movers_BaseClasses_Characteristics_flowParametersInternal_copy_to_vars(src,...) IDEAS_Fluid_Movers_BaseClasses_Characteristics_flowParametersInternal_copy_to_vars_p(&src, __VA_ARGS__)

typedef base_array_t IDEAS_Fluid_Movers_BaseClasses_Characteristics_flowParametersInternal_array;
#define alloc_IDEAS_Fluid_Movers_BaseClasses_Characteristics_flowParametersInternal_array(dst,ndims,...) generic_array_create(NULL, dst, IDEAS_Fluid_Movers_BaseClasses_Characteristics_flowParametersInternal_construct_p, ndims, sizeof(IDEAS_Fluid_Movers_BaseClasses_Characteristics_flowParametersInternal), __VA_ARGS__)
#define IDEAS_Fluid_Movers_BaseClasses_Characteristics_flowParametersInternal_array_copy_data(src,dst)   generic_array_copy_data(src, &dst, IDEAS_Fluid_Movers_BaseClasses_Characteristics_flowParametersInternal_copy_p, sizeof(IDEAS_Fluid_Movers_BaseClasses_Characteristics_flowParametersInternal))
#define IDEAS_Fluid_Movers_BaseClasses_Characteristics_flowParametersInternal_array_alloc_copy(src,dst)  generic_array_alloc_copy(src, &dst, IDEAS_Fluid_Movers_BaseClasses_Characteristics_flowParametersInternal_copy_p, sizeof(IDEAS_Fluid_Movers_BaseClasses_Characteristics_flowParametersInternal))
#define IDEAS_Fluid_Movers_BaseClasses_Characteristics_flowParametersInternal_array_get(src,ndims,...)   (*(IDEAS_Fluid_Movers_BaseClasses_Characteristics_flowParametersInternal*)(generic_array_get(&src, sizeof(IDEAS_Fluid_Movers_BaseClasses_Characteristics_flowParametersInternal), __VA_ARGS__)))
#define IDEAS_Fluid_Movers_BaseClasses_Characteristics_flowParametersInternal_set(dst,val,...)           generic_array_set(&dst, &val, IDEAS_Fluid_Movers_BaseClasses_Characteristics_flowParametersInternal_copy_p, sizeof(IDEAS_Fluid_Movers_BaseClasses_Characteristics_flowParametersInternal), __VA_ARGS__)

typedef struct {
  modelica_real _V_flow;
  modelica_real _dp;
  modelica_real _eta;
} IDEAS_Fluid_Movers_BaseClasses_Euler_peak;
extern struct record_description IDEAS_Fluid_Movers_BaseClasses_Euler_peak__desc;

void IDEAS_Fluid_Movers_BaseClasses_Euler_peak_construct_p(threadData_t *threadData, void* v_ths );
#define IDEAS_Fluid_Movers_BaseClasses_Euler_peak_construct(td, ths ) IDEAS_Fluid_Movers_BaseClasses_Euler_peak_construct_p(td, &ths )
void IDEAS_Fluid_Movers_BaseClasses_Euler_peak_copy_p(void* v_src, void* v_dst);
#define IDEAS_Fluid_Movers_BaseClasses_Euler_peak_copy(src,dst) IDEAS_Fluid_Movers_BaseClasses_Euler_peak_copy_p(&src, &dst)


void IDEAS_Fluid_Movers_BaseClasses_Euler_peak_wrap_vars_p(threadData_t *threadData , void* v_dst , modelica_real in_V_flow, modelica_real in_dp, modelica_real in_eta);
#define IDEAS_Fluid_Movers_BaseClasses_Euler_peak_wrap_vars(td, dst , in_V_flow, in_dp, in_eta) IDEAS_Fluid_Movers_BaseClasses_Euler_peak_wrap_vars_p(td, &dst , in_V_flow, in_dp, in_eta)

// This function is not needed anymore. If you want to know how a record
// is 'assigned to' in simulation context see assignRhsExpToRecordCrefSimContext and
// splitRecordAssignmentToMemberAssignments (simCode). Basically the record is
// split up assignments generated for each member individually.
// void IDEAS_Fluid_Movers_BaseClasses_Euler_peak_copy_to_vars_p(void* v_src , modelica_real* in_V_flow, modelica_real* in_dp, modelica_real* in_eta);
// #define IDEAS_Fluid_Movers_BaseClasses_Euler_peak_copy_to_vars(src,...) IDEAS_Fluid_Movers_BaseClasses_Euler_peak_copy_to_vars_p(&src, __VA_ARGS__)

typedef base_array_t IDEAS_Fluid_Movers_BaseClasses_Euler_peak_array;
#define alloc_IDEAS_Fluid_Movers_BaseClasses_Euler_peak_array(dst,ndims,...) generic_array_create(NULL, dst, IDEAS_Fluid_Movers_BaseClasses_Euler_peak_construct_p, ndims, sizeof(IDEAS_Fluid_Movers_BaseClasses_Euler_peak), __VA_ARGS__)
#define IDEAS_Fluid_Movers_BaseClasses_Euler_peak_array_copy_data(src,dst)   generic_array_copy_data(src, &dst, IDEAS_Fluid_Movers_BaseClasses_Euler_peak_copy_p, sizeof(IDEAS_Fluid_Movers_BaseClasses_Euler_peak))
#define IDEAS_Fluid_Movers_BaseClasses_Euler_peak_array_alloc_copy(src,dst)  generic_array_alloc_copy(src, &dst, IDEAS_Fluid_Movers_BaseClasses_Euler_peak_copy_p, sizeof(IDEAS_Fluid_Movers_BaseClasses_Euler_peak))
#define IDEAS_Fluid_Movers_BaseClasses_Euler_peak_array_get(src,ndims,...)   (*(IDEAS_Fluid_Movers_BaseClasses_Euler_peak*)(generic_array_get(&src, sizeof(IDEAS_Fluid_Movers_BaseClasses_Euler_peak), __VA_ARGS__)))
#define IDEAS_Fluid_Movers_BaseClasses_Euler_peak_set(dst,val,...)           generic_array_set(&dst, &val, IDEAS_Fluid_Movers_BaseClasses_Euler_peak_copy_p, sizeof(IDEAS_Fluid_Movers_BaseClasses_Euler_peak), __VA_ARGS__)

typedef struct {
  real_array _V_flow;
  real_array _P;
  real_array _d;
} IDEAS_Fluid_Movers_BaseClasses_Euler_powerWithDerivative;
extern struct record_description IDEAS_Fluid_Movers_BaseClasses_Euler_powerWithDerivative__desc;

void IDEAS_Fluid_Movers_BaseClasses_Euler_powerWithDerivative_construct_p(threadData_t *threadData, void* v_ths );
#define IDEAS_Fluid_Movers_BaseClasses_Euler_powerWithDerivative_construct(td, ths ) IDEAS_Fluid_Movers_BaseClasses_Euler_powerWithDerivative_construct_p(td, &ths )
void IDEAS_Fluid_Movers_BaseClasses_Euler_powerWithDerivative_copy_p(void* v_src, void* v_dst);
#define IDEAS_Fluid_Movers_BaseClasses_Euler_powerWithDerivative_copy(src,dst) IDEAS_Fluid_Movers_BaseClasses_Euler_powerWithDerivative_copy_p(&src, &dst)


void IDEAS_Fluid_Movers_BaseClasses_Euler_powerWithDerivative_wrap_vars_p(threadData_t *threadData , void* v_dst , real_array in_V_flow, real_array in_P, real_array in_d);
#define IDEAS_Fluid_Movers_BaseClasses_Euler_powerWithDerivative_wrap_vars(td, dst , in_V_flow, in_P, in_d) IDEAS_Fluid_Movers_BaseClasses_Euler_powerWithDerivative_wrap_vars_p(td, &dst , in_V_flow, in_P, in_d)

// This function is not needed anymore. If you want to know how a record
// is 'assigned to' in simulation context see assignRhsExpToRecordCrefSimContext and
// splitRecordAssignmentToMemberAssignments (simCode). Basically the record is
// split up assignments generated for each member individually.
// void IDEAS_Fluid_Movers_BaseClasses_Euler_powerWithDerivative_copy_to_vars_p(void* v_src , real_array* in_V_flow, real_array* in_P, real_array* in_d);
// #define IDEAS_Fluid_Movers_BaseClasses_Euler_powerWithDerivative_copy_to_vars(src,...) IDEAS_Fluid_Movers_BaseClasses_Euler_powerWithDerivative_copy_to_vars_p(&src, __VA_ARGS__)

typedef base_array_t IDEAS_Fluid_Movers_BaseClasses_Euler_powerWithDerivative_array;
#define alloc_IDEAS_Fluid_Movers_BaseClasses_Euler_powerWithDerivative_array(dst,ndims,...) generic_array_create(NULL, dst, IDEAS_Fluid_Movers_BaseClasses_Euler_powerWithDerivative_construct_p, ndims, sizeof(IDEAS_Fluid_Movers_BaseClasses_Euler_powerWithDerivative), __VA_ARGS__)
#define IDEAS_Fluid_Movers_BaseClasses_Euler_powerWithDerivative_array_copy_data(src,dst)   generic_array_copy_data(src, &dst, IDEAS_Fluid_Movers_BaseClasses_Euler_powerWithDerivative_copy_p, sizeof(IDEAS_Fluid_Movers_BaseClasses_Euler_powerWithDerivative))
#define IDEAS_Fluid_Movers_BaseClasses_Euler_powerWithDerivative_array_alloc_copy(src,dst)  generic_array_alloc_copy(src, &dst, IDEAS_Fluid_Movers_BaseClasses_Euler_powerWithDerivative_copy_p, sizeof(IDEAS_Fluid_Movers_BaseClasses_Euler_powerWithDerivative))
#define IDEAS_Fluid_Movers_BaseClasses_Euler_powerWithDerivative_array_get(src,ndims,...)   (*(IDEAS_Fluid_Movers_BaseClasses_Euler_powerWithDerivative*)(generic_array_get(&src, sizeof(IDEAS_Fluid_Movers_BaseClasses_Euler_powerWithDerivative), __VA_ARGS__)))
#define IDEAS_Fluid_Movers_BaseClasses_Euler_powerWithDerivative_set(dst,val,...)           generic_array_set(&dst, &val, IDEAS_Fluid_Movers_BaseClasses_Euler_powerWithDerivative_copy_p, sizeof(IDEAS_Fluid_Movers_BaseClasses_Euler_powerWithDerivative), __VA_ARGS__)

typedef struct {
  modelica_real _p;
  modelica_real _T;
} pump__v3__basicCold__t_SenTempIn__cold_Medium_ThermodynamicState;
extern struct record_description pump__v3__basicCold__t_SenTempIn__cold_Medium_ThermodynamicState__desc;

void pump__v3__basicCold__t_SenTempIn__cold_Medium_ThermodynamicState_construct_p(threadData_t *threadData, void* v_ths );
#define pump__v3__basicCold__t_SenTempIn__cold_Medium_ThermodynamicState_construct(td, ths ) pump__v3__basicCold__t_SenTempIn__cold_Medium_ThermodynamicState_construct_p(td, &ths )
void pump__v3__basicCold__t_SenTempIn__cold_Medium_ThermodynamicState_copy_p(void* v_src, void* v_dst);
#define pump__v3__basicCold__t_SenTempIn__cold_Medium_ThermodynamicState_copy(src,dst) pump__v3__basicCold__t_SenTempIn__cold_Medium_ThermodynamicState_copy_p(&src, &dst)


void pump__v3__basicCold__t_SenTempIn__cold_Medium_ThermodynamicState_wrap_vars_p(threadData_t *threadData , void* v_dst , modelica_real in_p, modelica_real in_T);
#define pump__v3__basicCold__t_SenTempIn__cold_Medium_ThermodynamicState_wrap_vars(td, dst , in_p, in_T) pump__v3__basicCold__t_SenTempIn__cold_Medium_ThermodynamicState_wrap_vars_p(td, &dst , in_p, in_T)

// This function is not needed anymore. If you want to know how a record
// is 'assigned to' in simulation context see assignRhsExpToRecordCrefSimContext and
// splitRecordAssignmentToMemberAssignments (simCode). Basically the record is
// split up assignments generated for each member individually.
// void pump__v3__basicCold__t_SenTempIn__cold_Medium_ThermodynamicState_copy_to_vars_p(void* v_src , modelica_real* in_p, modelica_real* in_T);
// #define pump__v3__basicCold__t_SenTempIn__cold_Medium_ThermodynamicState_copy_to_vars(src,...) pump__v3__basicCold__t_SenTempIn__cold_Medium_ThermodynamicState_copy_to_vars_p(&src, __VA_ARGS__)

typedef base_array_t pump__v3__basicCold__t_SenTempIn__cold_Medium_ThermodynamicState_array;
#define alloc_pump__v3__basicCold__t_SenTempIn__cold_Medium_ThermodynamicState_array(dst,ndims,...) generic_array_create(NULL, dst, pump__v3__basicCold__t_SenTempIn__cold_Medium_ThermodynamicState_construct_p, ndims, sizeof(pump__v3__basicCold__t_SenTempIn__cold_Medium_ThermodynamicState), __VA_ARGS__)
#define pump__v3__basicCold__t_SenTempIn__cold_Medium_ThermodynamicState_array_copy_data(src,dst)   generic_array_copy_data(src, &dst, pump__v3__basicCold__t_SenTempIn__cold_Medium_ThermodynamicState_copy_p, sizeof(pump__v3__basicCold__t_SenTempIn__cold_Medium_ThermodynamicState))
#define pump__v3__basicCold__t_SenTempIn__cold_Medium_ThermodynamicState_array_alloc_copy(src,dst)  generic_array_alloc_copy(src, &dst, pump__v3__basicCold__t_SenTempIn__cold_Medium_ThermodynamicState_copy_p, sizeof(pump__v3__basicCold__t_SenTempIn__cold_Medium_ThermodynamicState))
#define pump__v3__basicCold__t_SenTempIn__cold_Medium_ThermodynamicState_array_get(src,ndims,...)   (*(pump__v3__basicCold__t_SenTempIn__cold_Medium_ThermodynamicState*)(generic_array_get(&src, sizeof(pump__v3__basicCold__t_SenTempIn__cold_Medium_ThermodynamicState), __VA_ARGS__)))
#define pump__v3__basicCold__t_SenTempIn__cold_Medium_ThermodynamicState_set(dst,val,...)           generic_array_set(&dst, &val, pump__v3__basicCold__t_SenTempIn__cold_Medium_ThermodynamicState_copy_p, sizeof(pump__v3__basicCold__t_SenTempIn__cold_Medium_ThermodynamicState), __VA_ARGS__)

void IDEAS_Fluid_Movers_BaseClasses_Euler_powerWithDerivative_1_2_3_construct_p(threadData_t *threadData, void* v_ths , real_array in_V_flow, real_array in_P, real_array in_d);
#define IDEAS_Fluid_Movers_BaseClasses_Euler_powerWithDerivative_1_2_3_construct(td, ths , in_V_flow, in_P, in_d) IDEAS_Fluid_Movers_BaseClasses_Euler_powerWithDerivative_1_2_3_construct_p(td, &ths , in_V_flow, in_P, in_d)

#define alloc_IDEAS_Fluid_Movers_BaseClasses_Euler_powerWithDerivative_1_2_3_array(dst,ndims,...) generic_array_create(NULL, dst, IDEAS_Fluid_Movers_BaseClasses_Euler_powerWithDerivative_1_2_3_construct_p, ndims, sizeof(IDEAS_Fluid_Movers_BaseClasses_Euler_powerWithDerivative), __VA_ARGS__)

typedef pump__v3__basicCold__t_SenTempIn__cold_Medium_ThermodynamicState pump__v3__basicCold__t_bou1_Medium_ThermodynamicState;
extern struct record_description pump__v3__basicCold__t_bou1_Medium_ThermodynamicState__desc;

void pump__v3__basicCold__t_bou1_Medium_ThermodynamicState_construct_p(threadData_t *threadData, void* v_ths );
#define pump__v3__basicCold__t_bou1_Medium_ThermodynamicState_construct(td, ths ) pump__v3__basicCold__t_bou1_Medium_ThermodynamicState_construct_p(td, &ths )
void pump__v3__basicCold__t_bou1_Medium_ThermodynamicState_copy_p(void* v_src, void* v_dst);
#define pump__v3__basicCold__t_bou1_Medium_ThermodynamicState_copy(src,dst) pump__v3__basicCold__t_bou1_Medium_ThermodynamicState_copy_p(&src, &dst)


void pump__v3__basicCold__t_bou1_Medium_ThermodynamicState_wrap_vars_p(threadData_t *threadData , void* v_dst , modelica_real in_p, modelica_real in_T);
#define pump__v3__basicCold__t_bou1_Medium_ThermodynamicState_wrap_vars(td, dst , in_p, in_T) pump__v3__basicCold__t_bou1_Medium_ThermodynamicState_wrap_vars_p(td, &dst , in_p, in_T)

// This function is not needed anymore. If you want to know how a record
// is 'assigned to' in simulation context see assignRhsExpToRecordCrefSimContext and
// splitRecordAssignmentToMemberAssignments (simCode). Basically the record is
// split up assignments generated for each member individually.
// void pump__v3__basicCold__t_bou1_Medium_ThermodynamicState_copy_to_vars_p(void* v_src , modelica_real* in_p, modelica_real* in_T);
// #define pump__v3__basicCold__t_bou1_Medium_ThermodynamicState_copy_to_vars(src,...) pump__v3__basicCold__t_bou1_Medium_ThermodynamicState_copy_to_vars_p(&src, __VA_ARGS__)

typedef base_array_t pump__v3__basicCold__t_bou1_Medium_ThermodynamicState_array;
#define alloc_pump__v3__basicCold__t_bou1_Medium_ThermodynamicState_array(dst,ndims,...) generic_array_create(NULL, dst, pump__v3__basicCold__t_bou1_Medium_ThermodynamicState_construct_p, ndims, sizeof(pump__v3__basicCold__t_bou1_Medium_ThermodynamicState), __VA_ARGS__)
#define pump__v3__basicCold__t_bou1_Medium_ThermodynamicState_array_copy_data(src,dst)   generic_array_copy_data(src, &dst, pump__v3__basicCold__t_bou1_Medium_ThermodynamicState_copy_p, sizeof(pump__v3__basicCold__t_bou1_Medium_ThermodynamicState))
#define pump__v3__basicCold__t_bou1_Medium_ThermodynamicState_array_alloc_copy(src,dst)  generic_array_alloc_copy(src, &dst, pump__v3__basicCold__t_bou1_Medium_ThermodynamicState_copy_p, sizeof(pump__v3__basicCold__t_bou1_Medium_ThermodynamicState))
#define pump__v3__basicCold__t_bou1_Medium_ThermodynamicState_array_get(src,ndims,...)   (*(pump__v3__basicCold__t_bou1_Medium_ThermodynamicState*)(generic_array_get(&src, sizeof(pump__v3__basicCold__t_bou1_Medium_ThermodynamicState), __VA_ARGS__)))
#define pump__v3__basicCold__t_bou1_Medium_ThermodynamicState_set(dst,val,...)           generic_array_set(&dst, &val, pump__v3__basicCold__t_bou1_Medium_ThermodynamicState_copy_p, sizeof(pump__v3__basicCold__t_bou1_Medium_ThermodynamicState), __VA_ARGS__)

typedef pump__v3__basicCold__t_SenTempIn__cold_Medium_ThermodynamicState pump__v3__basicCold__t_plugFlowPipe_Medium_ThermodynamicState;
extern struct record_description pump__v3__basicCold__t_plugFlowPipe_Medium_ThermodynamicState__desc;

void pump__v3__basicCold__t_plugFlowPipe_Medium_ThermodynamicState_construct_p(threadData_t *threadData, void* v_ths );
#define pump__v3__basicCold__t_plugFlowPipe_Medium_ThermodynamicState_construct(td, ths ) pump__v3__basicCold__t_plugFlowPipe_Medium_ThermodynamicState_construct_p(td, &ths )
void pump__v3__basicCold__t_plugFlowPipe_Medium_ThermodynamicState_copy_p(void* v_src, void* v_dst);
#define pump__v3__basicCold__t_plugFlowPipe_Medium_ThermodynamicState_copy(src,dst) pump__v3__basicCold__t_plugFlowPipe_Medium_ThermodynamicState_copy_p(&src, &dst)


void pump__v3__basicCold__t_plugFlowPipe_Medium_ThermodynamicState_wrap_vars_p(threadData_t *threadData , void* v_dst , modelica_real in_p, modelica_real in_T);
#define pump__v3__basicCold__t_plugFlowPipe_Medium_ThermodynamicState_wrap_vars(td, dst , in_p, in_T) pump__v3__basicCold__t_plugFlowPipe_Medium_ThermodynamicState_wrap_vars_p(td, &dst , in_p, in_T)

// This function is not needed anymore. If you want to know how a record
// is 'assigned to' in simulation context see assignRhsExpToRecordCrefSimContext and
// splitRecordAssignmentToMemberAssignments (simCode). Basically the record is
// split up assignments generated for each member individually.
// void pump__v3__basicCold__t_plugFlowPipe_Medium_ThermodynamicState_copy_to_vars_p(void* v_src , modelica_real* in_p, modelica_real* in_T);
// #define pump__v3__basicCold__t_plugFlowPipe_Medium_ThermodynamicState_copy_to_vars(src,...) pump__v3__basicCold__t_plugFlowPipe_Medium_ThermodynamicState_copy_to_vars_p(&src, __VA_ARGS__)

typedef base_array_t pump__v3__basicCold__t_plugFlowPipe_Medium_ThermodynamicState_array;
#define alloc_pump__v3__basicCold__t_plugFlowPipe_Medium_ThermodynamicState_array(dst,ndims,...) generic_array_create(NULL, dst, pump__v3__basicCold__t_plugFlowPipe_Medium_ThermodynamicState_construct_p, ndims, sizeof(pump__v3__basicCold__t_plugFlowPipe_Medium_ThermodynamicState), __VA_ARGS__)
#define pump__v3__basicCold__t_plugFlowPipe_Medium_ThermodynamicState_array_copy_data(src,dst)   generic_array_copy_data(src, &dst, pump__v3__basicCold__t_plugFlowPipe_Medium_ThermodynamicState_copy_p, sizeof(pump__v3__basicCold__t_plugFlowPipe_Medium_ThermodynamicState))
#define pump__v3__basicCold__t_plugFlowPipe_Medium_ThermodynamicState_array_alloc_copy(src,dst)  generic_array_alloc_copy(src, &dst, pump__v3__basicCold__t_plugFlowPipe_Medium_ThermodynamicState_copy_p, sizeof(pump__v3__basicCold__t_plugFlowPipe_Medium_ThermodynamicState))
#define pump__v3__basicCold__t_plugFlowPipe_Medium_ThermodynamicState_array_get(src,ndims,...)   (*(pump__v3__basicCold__t_plugFlowPipe_Medium_ThermodynamicState*)(generic_array_get(&src, sizeof(pump__v3__basicCold__t_plugFlowPipe_Medium_ThermodynamicState), __VA_ARGS__)))
#define pump__v3__basicCold__t_plugFlowPipe_Medium_ThermodynamicState_set(dst,val,...)           generic_array_set(&dst, &val, pump__v3__basicCold__t_plugFlowPipe_Medium_ThermodynamicState_copy_p, sizeof(pump__v3__basicCold__t_plugFlowPipe_Medium_ThermodynamicState), __VA_ARGS__)

typedef pump__v3__basicCold__t_SenTempIn__cold_Medium_ThermodynamicState pump__v3__basicCold__t_plugFlowPipe_del_Medium_ThermodynamicState;
extern struct record_description pump__v3__basicCold__t_plugFlowPipe_del_Medium_ThermodynamicState__desc;

void pump__v3__basicCold__t_plugFlowPipe_del_Medium_ThermodynamicState_construct_p(threadData_t *threadData, void* v_ths );
#define pump__v3__basicCold__t_plugFlowPipe_del_Medium_ThermodynamicState_construct(td, ths ) pump__v3__basicCold__t_plugFlowPipe_del_Medium_ThermodynamicState_construct_p(td, &ths )
void pump__v3__basicCold__t_plugFlowPipe_del_Medium_ThermodynamicState_copy_p(void* v_src, void* v_dst);
#define pump__v3__basicCold__t_plugFlowPipe_del_Medium_ThermodynamicState_copy(src,dst) pump__v3__basicCold__t_plugFlowPipe_del_Medium_ThermodynamicState_copy_p(&src, &dst)


void pump__v3__basicCold__t_plugFlowPipe_del_Medium_ThermodynamicState_wrap_vars_p(threadData_t *threadData , void* v_dst , modelica_real in_p, modelica_real in_T);
#define pump__v3__basicCold__t_plugFlowPipe_del_Medium_ThermodynamicState_wrap_vars(td, dst , in_p, in_T) pump__v3__basicCold__t_plugFlowPipe_del_Medium_ThermodynamicState_wrap_vars_p(td, &dst , in_p, in_T)

// This function is not needed anymore. If you want to know how a record
// is 'assigned to' in simulation context see assignRhsExpToRecordCrefSimContext and
// splitRecordAssignmentToMemberAssignments (simCode). Basically the record is
// split up assignments generated for each member individually.
// void pump__v3__basicCold__t_plugFlowPipe_del_Medium_ThermodynamicState_copy_to_vars_p(void* v_src , modelica_real* in_p, modelica_real* in_T);
// #define pump__v3__basicCold__t_plugFlowPipe_del_Medium_ThermodynamicState_copy_to_vars(src,...) pump__v3__basicCold__t_plugFlowPipe_del_Medium_ThermodynamicState_copy_to_vars_p(&src, __VA_ARGS__)

typedef base_array_t pump__v3__basicCold__t_plugFlowPipe_del_Medium_ThermodynamicState_array;
#define alloc_pump__v3__basicCold__t_plugFlowPipe_del_Medium_ThermodynamicState_array(dst,ndims,...) generic_array_create(NULL, dst, pump__v3__basicCold__t_plugFlowPipe_del_Medium_ThermodynamicState_construct_p, ndims, sizeof(pump__v3__basicCold__t_plugFlowPipe_del_Medium_ThermodynamicState), __VA_ARGS__)
#define pump__v3__basicCold__t_plugFlowPipe_del_Medium_ThermodynamicState_array_copy_data(src,dst)   generic_array_copy_data(src, &dst, pump__v3__basicCold__t_plugFlowPipe_del_Medium_ThermodynamicState_copy_p, sizeof(pump__v3__basicCold__t_plugFlowPipe_del_Medium_ThermodynamicState))
#define pump__v3__basicCold__t_plugFlowPipe_del_Medium_ThermodynamicState_array_alloc_copy(src,dst)  generic_array_alloc_copy(src, &dst, pump__v3__basicCold__t_plugFlowPipe_del_Medium_ThermodynamicState_copy_p, sizeof(pump__v3__basicCold__t_plugFlowPipe_del_Medium_ThermodynamicState))
#define pump__v3__basicCold__t_plugFlowPipe_del_Medium_ThermodynamicState_array_get(src,ndims,...)   (*(pump__v3__basicCold__t_plugFlowPipe_del_Medium_ThermodynamicState*)(generic_array_get(&src, sizeof(pump__v3__basicCold__t_plugFlowPipe_del_Medium_ThermodynamicState), __VA_ARGS__)))
#define pump__v3__basicCold__t_plugFlowPipe_del_Medium_ThermodynamicState_set(dst,val,...)           generic_array_set(&dst, &val, pump__v3__basicCold__t_plugFlowPipe_del_Medium_ThermodynamicState_copy_p, sizeof(pump__v3__basicCold__t_plugFlowPipe_del_Medium_ThermodynamicState), __VA_ARGS__)

typedef pump__v3__basicCold__t_SenTempIn__cold_Medium_ThermodynamicState pump__v3__basicCold__t_plugFlowPipe_heaLos__a_Medium_ThermodynamicState;
extern struct record_description pump__v3__basicCold__t_plugFlowPipe_heaLos__a_Medium_ThermodynamicState__desc;

void pump__v3__basicCold__t_plugFlowPipe_heaLos__a_Medium_ThermodynamicState_construct_p(threadData_t *threadData, void* v_ths );
#define pump__v3__basicCold__t_plugFlowPipe_heaLos__a_Medium_ThermodynamicState_construct(td, ths ) pump__v3__basicCold__t_plugFlowPipe_heaLos__a_Medium_ThermodynamicState_construct_p(td, &ths )
void pump__v3__basicCold__t_plugFlowPipe_heaLos__a_Medium_ThermodynamicState_copy_p(void* v_src, void* v_dst);
#define pump__v3__basicCold__t_plugFlowPipe_heaLos__a_Medium_ThermodynamicState_copy(src,dst) pump__v3__basicCold__t_plugFlowPipe_heaLos__a_Medium_ThermodynamicState_copy_p(&src, &dst)


void pump__v3__basicCold__t_plugFlowPipe_heaLos__a_Medium_ThermodynamicState_wrap_vars_p(threadData_t *threadData , void* v_dst , modelica_real in_p, modelica_real in_T);
#define pump__v3__basicCold__t_plugFlowPipe_heaLos__a_Medium_ThermodynamicState_wrap_vars(td, dst , in_p, in_T) pump__v3__basicCold__t_plugFlowPipe_heaLos__a_Medium_ThermodynamicState_wrap_vars_p(td, &dst , in_p, in_T)

// This function is not needed anymore. If you want to know how a record
// is 'assigned to' in simulation context see assignRhsExpToRecordCrefSimContext and
// splitRecordAssignmentToMemberAssignments (simCode). Basically the record is
// split up assignments generated for each member individually.
// void pump__v3__basicCold__t_plugFlowPipe_heaLos__a_Medium_ThermodynamicState_copy_to_vars_p(void* v_src , modelica_real* in_p, modelica_real* in_T);
// #define pump__v3__basicCold__t_plugFlowPipe_heaLos__a_Medium_ThermodynamicState_copy_to_vars(src,...) pump__v3__basicCold__t_plugFlowPipe_heaLos__a_Medium_ThermodynamicState_copy_to_vars_p(&src, __VA_ARGS__)

typedef base_array_t pump__v3__basicCold__t_plugFlowPipe_heaLos__a_Medium_ThermodynamicState_array;
#define alloc_pump__v3__basicCold__t_plugFlowPipe_heaLos__a_Medium_ThermodynamicState_array(dst,ndims,...) generic_array_create(NULL, dst, pump__v3__basicCold__t_plugFlowPipe_heaLos__a_Medium_ThermodynamicState_construct_p, ndims, sizeof(pump__v3__basicCold__t_plugFlowPipe_heaLos__a_Medium_ThermodynamicState), __VA_ARGS__)
#define pump__v3__basicCold__t_plugFlowPipe_heaLos__a_Medium_ThermodynamicState_array_copy_data(src,dst)   generic_array_copy_data(src, &dst, pump__v3__basicCold__t_plugFlowPipe_heaLos__a_Medium_ThermodynamicState_copy_p, sizeof(pump__v3__basicCold__t_plugFlowPipe_heaLos__a_Medium_ThermodynamicState))
#define pump__v3__basicCold__t_plugFlowPipe_heaLos__a_Medium_ThermodynamicState_array_alloc_copy(src,dst)  generic_array_alloc_copy(src, &dst, pump__v3__basicCold__t_plugFlowPipe_heaLos__a_Medium_ThermodynamicState_copy_p, sizeof(pump__v3__basicCold__t_plugFlowPipe_heaLos__a_Medium_ThermodynamicState))
#define pump__v3__basicCold__t_plugFlowPipe_heaLos__a_Medium_ThermodynamicState_array_get(src,ndims,...)   (*(pump__v3__basicCold__t_plugFlowPipe_heaLos__a_Medium_ThermodynamicState*)(generic_array_get(&src, sizeof(pump__v3__basicCold__t_plugFlowPipe_heaLos__a_Medium_ThermodynamicState), __VA_ARGS__)))
#define pump__v3__basicCold__t_plugFlowPipe_heaLos__a_Medium_ThermodynamicState_set(dst,val,...)           generic_array_set(&dst, &val, pump__v3__basicCold__t_plugFlowPipe_heaLos__a_Medium_ThermodynamicState_copy_p, sizeof(pump__v3__basicCold__t_plugFlowPipe_heaLos__a_Medium_ThermodynamicState), __VA_ARGS__)

typedef pump__v3__basicCold__t_SenTempIn__cold_Medium_ThermodynamicState pump__v3__basicCold__t_plugFlowPipe_heaLos__b_Medium_ThermodynamicState;
extern struct record_description pump__v3__basicCold__t_plugFlowPipe_heaLos__b_Medium_ThermodynamicState__desc;

void pump__v3__basicCold__t_plugFlowPipe_heaLos__b_Medium_ThermodynamicState_construct_p(threadData_t *threadData, void* v_ths );
#define pump__v3__basicCold__t_plugFlowPipe_heaLos__b_Medium_ThermodynamicState_construct(td, ths ) pump__v3__basicCold__t_plugFlowPipe_heaLos__b_Medium_ThermodynamicState_construct_p(td, &ths )
void pump__v3__basicCold__t_plugFlowPipe_heaLos__b_Medium_ThermodynamicState_copy_p(void* v_src, void* v_dst);
#define pump__v3__basicCold__t_plugFlowPipe_heaLos__b_Medium_ThermodynamicState_copy(src,dst) pump__v3__basicCold__t_plugFlowPipe_heaLos__b_Medium_ThermodynamicState_copy_p(&src, &dst)


void pump__v3__basicCold__t_plugFlowPipe_heaLos__b_Medium_ThermodynamicState_wrap_vars_p(threadData_t *threadData , void* v_dst , modelica_real in_p, modelica_real in_T);
#define pump__v3__basicCold__t_plugFlowPipe_heaLos__b_Medium_ThermodynamicState_wrap_vars(td, dst , in_p, in_T) pump__v3__basicCold__t_plugFlowPipe_heaLos__b_Medium_ThermodynamicState_wrap_vars_p(td, &dst , in_p, in_T)

// This function is not needed anymore. If you want to know how a record
// is 'assigned to' in simulation context see assignRhsExpToRecordCrefSimContext and
// splitRecordAssignmentToMemberAssignments (simCode). Basically the record is
// split up assignments generated for each member individually.
// void pump__v3__basicCold__t_plugFlowPipe_heaLos__b_Medium_ThermodynamicState_copy_to_vars_p(void* v_src , modelica_real* in_p, modelica_real* in_T);
// #define pump__v3__basicCold__t_plugFlowPipe_heaLos__b_Medium_ThermodynamicState_copy_to_vars(src,...) pump__v3__basicCold__t_plugFlowPipe_heaLos__b_Medium_ThermodynamicState_copy_to_vars_p(&src, __VA_ARGS__)

typedef base_array_t pump__v3__basicCold__t_plugFlowPipe_heaLos__b_Medium_ThermodynamicState_array;
#define alloc_pump__v3__basicCold__t_plugFlowPipe_heaLos__b_Medium_ThermodynamicState_array(dst,ndims,...) generic_array_create(NULL, dst, pump__v3__basicCold__t_plugFlowPipe_heaLos__b_Medium_ThermodynamicState_construct_p, ndims, sizeof(pump__v3__basicCold__t_plugFlowPipe_heaLos__b_Medium_ThermodynamicState), __VA_ARGS__)
#define pump__v3__basicCold__t_plugFlowPipe_heaLos__b_Medium_ThermodynamicState_array_copy_data(src,dst)   generic_array_copy_data(src, &dst, pump__v3__basicCold__t_plugFlowPipe_heaLos__b_Medium_ThermodynamicState_copy_p, sizeof(pump__v3__basicCold__t_plugFlowPipe_heaLos__b_Medium_ThermodynamicState))
#define pump__v3__basicCold__t_plugFlowPipe_heaLos__b_Medium_ThermodynamicState_array_alloc_copy(src,dst)  generic_array_alloc_copy(src, &dst, pump__v3__basicCold__t_plugFlowPipe_heaLos__b_Medium_ThermodynamicState_copy_p, sizeof(pump__v3__basicCold__t_plugFlowPipe_heaLos__b_Medium_ThermodynamicState))
#define pump__v3__basicCold__t_plugFlowPipe_heaLos__b_Medium_ThermodynamicState_array_get(src,ndims,...)   (*(pump__v3__basicCold__t_plugFlowPipe_heaLos__b_Medium_ThermodynamicState*)(generic_array_get(&src, sizeof(pump__v3__basicCold__t_plugFlowPipe_heaLos__b_Medium_ThermodynamicState), __VA_ARGS__)))
#define pump__v3__basicCold__t_plugFlowPipe_heaLos__b_Medium_ThermodynamicState_set(dst,val,...)           generic_array_set(&dst, &val, pump__v3__basicCold__t_plugFlowPipe_heaLos__b_Medium_ThermodynamicState_copy_p, sizeof(pump__v3__basicCold__t_plugFlowPipe_heaLos__b_Medium_ThermodynamicState), __VA_ARGS__)

typedef pump__v3__basicCold__t_SenTempIn__cold_Medium_ThermodynamicState pump__v3__basicCold__t_plugFlowPipe_res_Medium_ThermodynamicState;
extern struct record_description pump__v3__basicCold__t_plugFlowPipe_res_Medium_ThermodynamicState__desc;

void pump__v3__basicCold__t_plugFlowPipe_res_Medium_ThermodynamicState_construct_p(threadData_t *threadData, void* v_ths );
#define pump__v3__basicCold__t_plugFlowPipe_res_Medium_ThermodynamicState_construct(td, ths ) pump__v3__basicCold__t_plugFlowPipe_res_Medium_ThermodynamicState_construct_p(td, &ths )
void pump__v3__basicCold__t_plugFlowPipe_res_Medium_ThermodynamicState_copy_p(void* v_src, void* v_dst);
#define pump__v3__basicCold__t_plugFlowPipe_res_Medium_ThermodynamicState_copy(src,dst) pump__v3__basicCold__t_plugFlowPipe_res_Medium_ThermodynamicState_copy_p(&src, &dst)


void pump__v3__basicCold__t_plugFlowPipe_res_Medium_ThermodynamicState_wrap_vars_p(threadData_t *threadData , void* v_dst , modelica_real in_p, modelica_real in_T);
#define pump__v3__basicCold__t_plugFlowPipe_res_Medium_ThermodynamicState_wrap_vars(td, dst , in_p, in_T) pump__v3__basicCold__t_plugFlowPipe_res_Medium_ThermodynamicState_wrap_vars_p(td, &dst , in_p, in_T)

// This function is not needed anymore. If you want to know how a record
// is 'assigned to' in simulation context see assignRhsExpToRecordCrefSimContext and
// splitRecordAssignmentToMemberAssignments (simCode). Basically the record is
// split up assignments generated for each member individually.
// void pump__v3__basicCold__t_plugFlowPipe_res_Medium_ThermodynamicState_copy_to_vars_p(void* v_src , modelica_real* in_p, modelica_real* in_T);
// #define pump__v3__basicCold__t_plugFlowPipe_res_Medium_ThermodynamicState_copy_to_vars(src,...) pump__v3__basicCold__t_plugFlowPipe_res_Medium_ThermodynamicState_copy_to_vars_p(&src, __VA_ARGS__)

typedef base_array_t pump__v3__basicCold__t_plugFlowPipe_res_Medium_ThermodynamicState_array;
#define alloc_pump__v3__basicCold__t_plugFlowPipe_res_Medium_ThermodynamicState_array(dst,ndims,...) generic_array_create(NULL, dst, pump__v3__basicCold__t_plugFlowPipe_res_Medium_ThermodynamicState_construct_p, ndims, sizeof(pump__v3__basicCold__t_plugFlowPipe_res_Medium_ThermodynamicState), __VA_ARGS__)
#define pump__v3__basicCold__t_plugFlowPipe_res_Medium_ThermodynamicState_array_copy_data(src,dst)   generic_array_copy_data(src, &dst, pump__v3__basicCold__t_plugFlowPipe_res_Medium_ThermodynamicState_copy_p, sizeof(pump__v3__basicCold__t_plugFlowPipe_res_Medium_ThermodynamicState))
#define pump__v3__basicCold__t_plugFlowPipe_res_Medium_ThermodynamicState_array_alloc_copy(src,dst)  generic_array_alloc_copy(src, &dst, pump__v3__basicCold__t_plugFlowPipe_res_Medium_ThermodynamicState_copy_p, sizeof(pump__v3__basicCold__t_plugFlowPipe_res_Medium_ThermodynamicState))
#define pump__v3__basicCold__t_plugFlowPipe_res_Medium_ThermodynamicState_array_get(src,ndims,...)   (*(pump__v3__basicCold__t_plugFlowPipe_res_Medium_ThermodynamicState*)(generic_array_get(&src, sizeof(pump__v3__basicCold__t_plugFlowPipe_res_Medium_ThermodynamicState), __VA_ARGS__)))
#define pump__v3__basicCold__t_plugFlowPipe_res_Medium_ThermodynamicState_set(dst,val,...)           generic_array_set(&dst, &val, pump__v3__basicCold__t_plugFlowPipe_res_Medium_ThermodynamicState_copy_p, sizeof(pump__v3__basicCold__t_plugFlowPipe_res_Medium_ThermodynamicState), __VA_ARGS__)

typedef pump__v3__basicCold__t_SenTempIn__cold_Medium_ThermodynamicState pump__v3__basicCold__t_plugFlowPipe_vol__a_Medium_ThermodynamicState;
extern struct record_description pump__v3__basicCold__t_plugFlowPipe_vol__a_Medium_ThermodynamicState__desc;

void pump__v3__basicCold__t_plugFlowPipe_vol__a_Medium_ThermodynamicState_construct_p(threadData_t *threadData, void* v_ths );
#define pump__v3__basicCold__t_plugFlowPipe_vol__a_Medium_ThermodynamicState_construct(td, ths ) pump__v3__basicCold__t_plugFlowPipe_vol__a_Medium_ThermodynamicState_construct_p(td, &ths )
void pump__v3__basicCold__t_plugFlowPipe_vol__a_Medium_ThermodynamicState_copy_p(void* v_src, void* v_dst);
#define pump__v3__basicCold__t_plugFlowPipe_vol__a_Medium_ThermodynamicState_copy(src,dst) pump__v3__basicCold__t_plugFlowPipe_vol__a_Medium_ThermodynamicState_copy_p(&src, &dst)


void pump__v3__basicCold__t_plugFlowPipe_vol__a_Medium_ThermodynamicState_wrap_vars_p(threadData_t *threadData , void* v_dst , modelica_real in_p, modelica_real in_T);
#define pump__v3__basicCold__t_plugFlowPipe_vol__a_Medium_ThermodynamicState_wrap_vars(td, dst , in_p, in_T) pump__v3__basicCold__t_plugFlowPipe_vol__a_Medium_ThermodynamicState_wrap_vars_p(td, &dst , in_p, in_T)

// This function is not needed anymore. If you want to know how a record
// is 'assigned to' in simulation context see assignRhsExpToRecordCrefSimContext and
// splitRecordAssignmentToMemberAssignments (simCode). Basically the record is
// split up assignments generated for each member individually.
// void pump__v3__basicCold__t_plugFlowPipe_vol__a_Medium_ThermodynamicState_copy_to_vars_p(void* v_src , modelica_real* in_p, modelica_real* in_T);
// #define pump__v3__basicCold__t_plugFlowPipe_vol__a_Medium_ThermodynamicState_copy_to_vars(src,...) pump__v3__basicCold__t_plugFlowPipe_vol__a_Medium_ThermodynamicState_copy_to_vars_p(&src, __VA_ARGS__)

typedef base_array_t pump__v3__basicCold__t_plugFlowPipe_vol__a_Medium_ThermodynamicState_array;
#define alloc_pump__v3__basicCold__t_plugFlowPipe_vol__a_Medium_ThermodynamicState_array(dst,ndims,...) generic_array_create(NULL, dst, pump__v3__basicCold__t_plugFlowPipe_vol__a_Medium_ThermodynamicState_construct_p, ndims, sizeof(pump__v3__basicCold__t_plugFlowPipe_vol__a_Medium_ThermodynamicState), __VA_ARGS__)
#define pump__v3__basicCold__t_plugFlowPipe_vol__a_Medium_ThermodynamicState_array_copy_data(src,dst)   generic_array_copy_data(src, &dst, pump__v3__basicCold__t_plugFlowPipe_vol__a_Medium_ThermodynamicState_copy_p, sizeof(pump__v3__basicCold__t_plugFlowPipe_vol__a_Medium_ThermodynamicState))
#define pump__v3__basicCold__t_plugFlowPipe_vol__a_Medium_ThermodynamicState_array_alloc_copy(src,dst)  generic_array_alloc_copy(src, &dst, pump__v3__basicCold__t_plugFlowPipe_vol__a_Medium_ThermodynamicState_copy_p, sizeof(pump__v3__basicCold__t_plugFlowPipe_vol__a_Medium_ThermodynamicState))
#define pump__v3__basicCold__t_plugFlowPipe_vol__a_Medium_ThermodynamicState_array_get(src,ndims,...)   (*(pump__v3__basicCold__t_plugFlowPipe_vol__a_Medium_ThermodynamicState*)(generic_array_get(&src, sizeof(pump__v3__basicCold__t_plugFlowPipe_vol__a_Medium_ThermodynamicState), __VA_ARGS__)))
#define pump__v3__basicCold__t_plugFlowPipe_vol__a_Medium_ThermodynamicState_set(dst,val,...)           generic_array_set(&dst, &val, pump__v3__basicCold__t_plugFlowPipe_vol__a_Medium_ThermodynamicState_copy_p, sizeof(pump__v3__basicCold__t_plugFlowPipe_vol__a_Medium_ThermodynamicState), __VA_ARGS__)

typedef pump__v3__basicCold__t_SenTempIn__cold_Medium_ThermodynamicState pump__v3__basicCold__t_plugFlowPipe_vol__a_dynBal_Medium_ThermodynamicState;
extern struct record_description pump__v3__basicCold__t_plugFlowPipe_vol__a_dynBal_Medium_ThermodynamicState__desc;

void pump__v3__basicCold__t_plugFlowPipe_vol__a_dynBal_Medium_ThermodynamicState_construct_p(threadData_t *threadData, void* v_ths );
#define pump__v3__basicCold__t_plugFlowPipe_vol__a_dynBal_Medium_ThermodynamicState_construct(td, ths ) pump__v3__basicCold__t_plugFlowPipe_vol__a_dynBal_Medium_ThermodynamicState_construct_p(td, &ths )
void pump__v3__basicCold__t_plugFlowPipe_vol__a_dynBal_Medium_ThermodynamicState_copy_p(void* v_src, void* v_dst);
#define pump__v3__basicCold__t_plugFlowPipe_vol__a_dynBal_Medium_ThermodynamicState_copy(src,dst) pump__v3__basicCold__t_plugFlowPipe_vol__a_dynBal_Medium_ThermodynamicState_copy_p(&src, &dst)


void pump__v3__basicCold__t_plugFlowPipe_vol__a_dynBal_Medium_ThermodynamicState_wrap_vars_p(threadData_t *threadData , void* v_dst , modelica_real in_p, modelica_real in_T);
#define pump__v3__basicCold__t_plugFlowPipe_vol__a_dynBal_Medium_ThermodynamicState_wrap_vars(td, dst , in_p, in_T) pump__v3__basicCold__t_plugFlowPipe_vol__a_dynBal_Medium_ThermodynamicState_wrap_vars_p(td, &dst , in_p, in_T)

// This function is not needed anymore. If you want to know how a record
// is 'assigned to' in simulation context see assignRhsExpToRecordCrefSimContext and
// splitRecordAssignmentToMemberAssignments (simCode). Basically the record is
// split up assignments generated for each member individually.
// void pump__v3__basicCold__t_plugFlowPipe_vol__a_dynBal_Medium_ThermodynamicState_copy_to_vars_p(void* v_src , modelica_real* in_p, modelica_real* in_T);
// #define pump__v3__basicCold__t_plugFlowPipe_vol__a_dynBal_Medium_ThermodynamicState_copy_to_vars(src,...) pump__v3__basicCold__t_plugFlowPipe_vol__a_dynBal_Medium_ThermodynamicState_copy_to_vars_p(&src, __VA_ARGS__)

typedef base_array_t pump__v3__basicCold__t_plugFlowPipe_vol__a_dynBal_Medium_ThermodynamicState_array;
#define alloc_pump__v3__basicCold__t_plugFlowPipe_vol__a_dynBal_Medium_ThermodynamicState_array(dst,ndims,...) generic_array_create(NULL, dst, pump__v3__basicCold__t_plugFlowPipe_vol__a_dynBal_Medium_ThermodynamicState_construct_p, ndims, sizeof(pump__v3__basicCold__t_plugFlowPipe_vol__a_dynBal_Medium_ThermodynamicState), __VA_ARGS__)
#define pump__v3__basicCold__t_plugFlowPipe_vol__a_dynBal_Medium_ThermodynamicState_array_copy_data(src,dst)   generic_array_copy_data(src, &dst, pump__v3__basicCold__t_plugFlowPipe_vol__a_dynBal_Medium_ThermodynamicState_copy_p, sizeof(pump__v3__basicCold__t_plugFlowPipe_vol__a_dynBal_Medium_ThermodynamicState))
#define pump__v3__basicCold__t_plugFlowPipe_vol__a_dynBal_Medium_ThermodynamicState_array_alloc_copy(src,dst)  generic_array_alloc_copy(src, &dst, pump__v3__basicCold__t_plugFlowPipe_vol__a_dynBal_Medium_ThermodynamicState_copy_p, sizeof(pump__v3__basicCold__t_plugFlowPipe_vol__a_dynBal_Medium_ThermodynamicState))
#define pump__v3__basicCold__t_plugFlowPipe_vol__a_dynBal_Medium_ThermodynamicState_array_get(src,ndims,...)   (*(pump__v3__basicCold__t_plugFlowPipe_vol__a_dynBal_Medium_ThermodynamicState*)(generic_array_get(&src, sizeof(pump__v3__basicCold__t_plugFlowPipe_vol__a_dynBal_Medium_ThermodynamicState), __VA_ARGS__)))
#define pump__v3__basicCold__t_plugFlowPipe_vol__a_dynBal_Medium_ThermodynamicState_set(dst,val,...)           generic_array_set(&dst, &val, pump__v3__basicCold__t_plugFlowPipe_vol__a_dynBal_Medium_ThermodynamicState_copy_p, sizeof(pump__v3__basicCold__t_plugFlowPipe_vol__a_dynBal_Medium_ThermodynamicState), __VA_ARGS__)

typedef pump__v3__basicCold__t_SenTempIn__cold_Medium_ThermodynamicState pump__v3__basicCold__t_plugFlowPipe_vol__b_Medium_ThermodynamicState;
extern struct record_description pump__v3__basicCold__t_plugFlowPipe_vol__b_Medium_ThermodynamicState__desc;

void pump__v3__basicCold__t_plugFlowPipe_vol__b_Medium_ThermodynamicState_construct_p(threadData_t *threadData, void* v_ths );
#define pump__v3__basicCold__t_plugFlowPipe_vol__b_Medium_ThermodynamicState_construct(td, ths ) pump__v3__basicCold__t_plugFlowPipe_vol__b_Medium_ThermodynamicState_construct_p(td, &ths )
void pump__v3__basicCold__t_plugFlowPipe_vol__b_Medium_ThermodynamicState_copy_p(void* v_src, void* v_dst);
#define pump__v3__basicCold__t_plugFlowPipe_vol__b_Medium_ThermodynamicState_copy(src,dst) pump__v3__basicCold__t_plugFlowPipe_vol__b_Medium_ThermodynamicState_copy_p(&src, &dst)


void pump__v3__basicCold__t_plugFlowPipe_vol__b_Medium_ThermodynamicState_wrap_vars_p(threadData_t *threadData , void* v_dst , modelica_real in_p, modelica_real in_T);
#define pump__v3__basicCold__t_plugFlowPipe_vol__b_Medium_ThermodynamicState_wrap_vars(td, dst , in_p, in_T) pump__v3__basicCold__t_plugFlowPipe_vol__b_Medium_ThermodynamicState_wrap_vars_p(td, &dst , in_p, in_T)

// This function is not needed anymore. If you want to know how a record
// is 'assigned to' in simulation context see assignRhsExpToRecordCrefSimContext and
// splitRecordAssignmentToMemberAssignments (simCode). Basically the record is
// split up assignments generated for each member individually.
// void pump__v3__basicCold__t_plugFlowPipe_vol__b_Medium_ThermodynamicState_copy_to_vars_p(void* v_src , modelica_real* in_p, modelica_real* in_T);
// #define pump__v3__basicCold__t_plugFlowPipe_vol__b_Medium_ThermodynamicState_copy_to_vars(src,...) pump__v3__basicCold__t_plugFlowPipe_vol__b_Medium_ThermodynamicState_copy_to_vars_p(&src, __VA_ARGS__)

typedef base_array_t pump__v3__basicCold__t_plugFlowPipe_vol__b_Medium_ThermodynamicState_array;
#define alloc_pump__v3__basicCold__t_plugFlowPipe_vol__b_Medium_ThermodynamicState_array(dst,ndims,...) generic_array_create(NULL, dst, pump__v3__basicCold__t_plugFlowPipe_vol__b_Medium_ThermodynamicState_construct_p, ndims, sizeof(pump__v3__basicCold__t_plugFlowPipe_vol__b_Medium_ThermodynamicState), __VA_ARGS__)
#define pump__v3__basicCold__t_plugFlowPipe_vol__b_Medium_ThermodynamicState_array_copy_data(src,dst)   generic_array_copy_data(src, &dst, pump__v3__basicCold__t_plugFlowPipe_vol__b_Medium_ThermodynamicState_copy_p, sizeof(pump__v3__basicCold__t_plugFlowPipe_vol__b_Medium_ThermodynamicState))
#define pump__v3__basicCold__t_plugFlowPipe_vol__b_Medium_ThermodynamicState_array_alloc_copy(src,dst)  generic_array_alloc_copy(src, &dst, pump__v3__basicCold__t_plugFlowPipe_vol__b_Medium_ThermodynamicState_copy_p, sizeof(pump__v3__basicCold__t_plugFlowPipe_vol__b_Medium_ThermodynamicState))
#define pump__v3__basicCold__t_plugFlowPipe_vol__b_Medium_ThermodynamicState_array_get(src,ndims,...)   (*(pump__v3__basicCold__t_plugFlowPipe_vol__b_Medium_ThermodynamicState*)(generic_array_get(&src, sizeof(pump__v3__basicCold__t_plugFlowPipe_vol__b_Medium_ThermodynamicState), __VA_ARGS__)))
#define pump__v3__basicCold__t_plugFlowPipe_vol__b_Medium_ThermodynamicState_set(dst,val,...)           generic_array_set(&dst, &val, pump__v3__basicCold__t_plugFlowPipe_vol__b_Medium_ThermodynamicState_copy_p, sizeof(pump__v3__basicCold__t_plugFlowPipe_vol__b_Medium_ThermodynamicState), __VA_ARGS__)

typedef pump__v3__basicCold__t_SenTempIn__cold_Medium_ThermodynamicState pump__v3__basicCold__t_plugFlowPipe_vol__b_dynBal_Medium_ThermodynamicState;
extern struct record_description pump__v3__basicCold__t_plugFlowPipe_vol__b_dynBal_Medium_ThermodynamicState__desc;

void pump__v3__basicCold__t_plugFlowPipe_vol__b_dynBal_Medium_ThermodynamicState_construct_p(threadData_t *threadData, void* v_ths );
#define pump__v3__basicCold__t_plugFlowPipe_vol__b_dynBal_Medium_ThermodynamicState_construct(td, ths ) pump__v3__basicCold__t_plugFlowPipe_vol__b_dynBal_Medium_ThermodynamicState_construct_p(td, &ths )
void pump__v3__basicCold__t_plugFlowPipe_vol__b_dynBal_Medium_ThermodynamicState_copy_p(void* v_src, void* v_dst);
#define pump__v3__basicCold__t_plugFlowPipe_vol__b_dynBal_Medium_ThermodynamicState_copy(src,dst) pump__v3__basicCold__t_plugFlowPipe_vol__b_dynBal_Medium_ThermodynamicState_copy_p(&src, &dst)


void pump__v3__basicCold__t_plugFlowPipe_vol__b_dynBal_Medium_ThermodynamicState_wrap_vars_p(threadData_t *threadData , void* v_dst , modelica_real in_p, modelica_real in_T);
#define pump__v3__basicCold__t_plugFlowPipe_vol__b_dynBal_Medium_ThermodynamicState_wrap_vars(td, dst , in_p, in_T) pump__v3__basicCold__t_plugFlowPipe_vol__b_dynBal_Medium_ThermodynamicState_wrap_vars_p(td, &dst , in_p, in_T)

// This function is not needed anymore. If you want to know how a record
// is 'assigned to' in simulation context see assignRhsExpToRecordCrefSimContext and
// splitRecordAssignmentToMemberAssignments (simCode). Basically the record is
// split up assignments generated for each member individually.
// void pump__v3__basicCold__t_plugFlowPipe_vol__b_dynBal_Medium_ThermodynamicState_copy_to_vars_p(void* v_src , modelica_real* in_p, modelica_real* in_T);
// #define pump__v3__basicCold__t_plugFlowPipe_vol__b_dynBal_Medium_ThermodynamicState_copy_to_vars(src,...) pump__v3__basicCold__t_plugFlowPipe_vol__b_dynBal_Medium_ThermodynamicState_copy_to_vars_p(&src, __VA_ARGS__)

typedef base_array_t pump__v3__basicCold__t_plugFlowPipe_vol__b_dynBal_Medium_ThermodynamicState_array;
#define alloc_pump__v3__basicCold__t_plugFlowPipe_vol__b_dynBal_Medium_ThermodynamicState_array(dst,ndims,...) generic_array_create(NULL, dst, pump__v3__basicCold__t_plugFlowPipe_vol__b_dynBal_Medium_ThermodynamicState_construct_p, ndims, sizeof(pump__v3__basicCold__t_plugFlowPipe_vol__b_dynBal_Medium_ThermodynamicState), __VA_ARGS__)
#define pump__v3__basicCold__t_plugFlowPipe_vol__b_dynBal_Medium_ThermodynamicState_array_copy_data(src,dst)   generic_array_copy_data(src, &dst, pump__v3__basicCold__t_plugFlowPipe_vol__b_dynBal_Medium_ThermodynamicState_copy_p, sizeof(pump__v3__basicCold__t_plugFlowPipe_vol__b_dynBal_Medium_ThermodynamicState))
#define pump__v3__basicCold__t_plugFlowPipe_vol__b_dynBal_Medium_ThermodynamicState_array_alloc_copy(src,dst)  generic_array_alloc_copy(src, &dst, pump__v3__basicCold__t_plugFlowPipe_vol__b_dynBal_Medium_ThermodynamicState_copy_p, sizeof(pump__v3__basicCold__t_plugFlowPipe_vol__b_dynBal_Medium_ThermodynamicState))
#define pump__v3__basicCold__t_plugFlowPipe_vol__b_dynBal_Medium_ThermodynamicState_array_get(src,ndims,...)   (*(pump__v3__basicCold__t_plugFlowPipe_vol__b_dynBal_Medium_ThermodynamicState*)(generic_array_get(&src, sizeof(pump__v3__basicCold__t_plugFlowPipe_vol__b_dynBal_Medium_ThermodynamicState), __VA_ARGS__)))
#define pump__v3__basicCold__t_plugFlowPipe_vol__b_dynBal_Medium_ThermodynamicState_set(dst,val,...)           generic_array_set(&dst, &val, pump__v3__basicCold__t_plugFlowPipe_vol__b_dynBal_Medium_ThermodynamicState_copy_p, sizeof(pump__v3__basicCold__t_plugFlowPipe_vol__b_dynBal_Medium_ThermodynamicState), __VA_ARGS__)

typedef pump__v3__basicCold__t_SenTempIn__cold_Medium_ThermodynamicState pump__v3__basicCold__t_plugFlowPipe1_Medium_ThermodynamicState;
extern struct record_description pump__v3__basicCold__t_plugFlowPipe1_Medium_ThermodynamicState__desc;

void pump__v3__basicCold__t_plugFlowPipe1_Medium_ThermodynamicState_construct_p(threadData_t *threadData, void* v_ths );
#define pump__v3__basicCold__t_plugFlowPipe1_Medium_ThermodynamicState_construct(td, ths ) pump__v3__basicCold__t_plugFlowPipe1_Medium_ThermodynamicState_construct_p(td, &ths )
void pump__v3__basicCold__t_plugFlowPipe1_Medium_ThermodynamicState_copy_p(void* v_src, void* v_dst);
#define pump__v3__basicCold__t_plugFlowPipe1_Medium_ThermodynamicState_copy(src,dst) pump__v3__basicCold__t_plugFlowPipe1_Medium_ThermodynamicState_copy_p(&src, &dst)


void pump__v3__basicCold__t_plugFlowPipe1_Medium_ThermodynamicState_wrap_vars_p(threadData_t *threadData , void* v_dst , modelica_real in_p, modelica_real in_T);
#define pump__v3__basicCold__t_plugFlowPipe1_Medium_ThermodynamicState_wrap_vars(td, dst , in_p, in_T) pump__v3__basicCold__t_plugFlowPipe1_Medium_ThermodynamicState_wrap_vars_p(td, &dst , in_p, in_T)

// This function is not needed anymore. If you want to know how a record
// is 'assigned to' in simulation context see assignRhsExpToRecordCrefSimContext and
// splitRecordAssignmentToMemberAssignments (simCode). Basically the record is
// split up assignments generated for each member individually.
// void pump__v3__basicCold__t_plugFlowPipe1_Medium_ThermodynamicState_copy_to_vars_p(void* v_src , modelica_real* in_p, modelica_real* in_T);
// #define pump__v3__basicCold__t_plugFlowPipe1_Medium_ThermodynamicState_copy_to_vars(src,...) pump__v3__basicCold__t_plugFlowPipe1_Medium_ThermodynamicState_copy_to_vars_p(&src, __VA_ARGS__)

typedef base_array_t pump__v3__basicCold__t_plugFlowPipe1_Medium_ThermodynamicState_array;
#define alloc_pump__v3__basicCold__t_plugFlowPipe1_Medium_ThermodynamicState_array(dst,ndims,...) generic_array_create(NULL, dst, pump__v3__basicCold__t_plugFlowPipe1_Medium_ThermodynamicState_construct_p, ndims, sizeof(pump__v3__basicCold__t_plugFlowPipe1_Medium_ThermodynamicState), __VA_ARGS__)
#define pump__v3__basicCold__t_plugFlowPipe1_Medium_ThermodynamicState_array_copy_data(src,dst)   generic_array_copy_data(src, &dst, pump__v3__basicCold__t_plugFlowPipe1_Medium_ThermodynamicState_copy_p, sizeof(pump__v3__basicCold__t_plugFlowPipe1_Medium_ThermodynamicState))
#define pump__v3__basicCold__t_plugFlowPipe1_Medium_ThermodynamicState_array_alloc_copy(src,dst)  generic_array_alloc_copy(src, &dst, pump__v3__basicCold__t_plugFlowPipe1_Medium_ThermodynamicState_copy_p, sizeof(pump__v3__basicCold__t_plugFlowPipe1_Medium_ThermodynamicState))
#define pump__v3__basicCold__t_plugFlowPipe1_Medium_ThermodynamicState_array_get(src,ndims,...)   (*(pump__v3__basicCold__t_plugFlowPipe1_Medium_ThermodynamicState*)(generic_array_get(&src, sizeof(pump__v3__basicCold__t_plugFlowPipe1_Medium_ThermodynamicState), __VA_ARGS__)))
#define pump__v3__basicCold__t_plugFlowPipe1_Medium_ThermodynamicState_set(dst,val,...)           generic_array_set(&dst, &val, pump__v3__basicCold__t_plugFlowPipe1_Medium_ThermodynamicState_copy_p, sizeof(pump__v3__basicCold__t_plugFlowPipe1_Medium_ThermodynamicState), __VA_ARGS__)

typedef pump__v3__basicCold__t_SenTempIn__cold_Medium_ThermodynamicState pump__v3__basicCold__t_plugFlowPipe1_del_Medium_ThermodynamicState;
extern struct record_description pump__v3__basicCold__t_plugFlowPipe1_del_Medium_ThermodynamicState__desc;

void pump__v3__basicCold__t_plugFlowPipe1_del_Medium_ThermodynamicState_construct_p(threadData_t *threadData, void* v_ths );
#define pump__v3__basicCold__t_plugFlowPipe1_del_Medium_ThermodynamicState_construct(td, ths ) pump__v3__basicCold__t_plugFlowPipe1_del_Medium_ThermodynamicState_construct_p(td, &ths )
void pump__v3__basicCold__t_plugFlowPipe1_del_Medium_ThermodynamicState_copy_p(void* v_src, void* v_dst);
#define pump__v3__basicCold__t_plugFlowPipe1_del_Medium_ThermodynamicState_copy(src,dst) pump__v3__basicCold__t_plugFlowPipe1_del_Medium_ThermodynamicState_copy_p(&src, &dst)


void pump__v3__basicCold__t_plugFlowPipe1_del_Medium_ThermodynamicState_wrap_vars_p(threadData_t *threadData , void* v_dst , modelica_real in_p, modelica_real in_T);
#define pump__v3__basicCold__t_plugFlowPipe1_del_Medium_ThermodynamicState_wrap_vars(td, dst , in_p, in_T) pump__v3__basicCold__t_plugFlowPipe1_del_Medium_ThermodynamicState_wrap_vars_p(td, &dst , in_p, in_T)

// This function is not needed anymore. If you want to know how a record
// is 'assigned to' in simulation context see assignRhsExpToRecordCrefSimContext and
// splitRecordAssignmentToMemberAssignments (simCode). Basically the record is
// split up assignments generated for each member individually.
// void pump__v3__basicCold__t_plugFlowPipe1_del_Medium_ThermodynamicState_copy_to_vars_p(void* v_src , modelica_real* in_p, modelica_real* in_T);
// #define pump__v3__basicCold__t_plugFlowPipe1_del_Medium_ThermodynamicState_copy_to_vars(src,...) pump__v3__basicCold__t_plugFlowPipe1_del_Medium_ThermodynamicState_copy_to_vars_p(&src, __VA_ARGS__)

typedef base_array_t pump__v3__basicCold__t_plugFlowPipe1_del_Medium_ThermodynamicState_array;
#define alloc_pump__v3__basicCold__t_plugFlowPipe1_del_Medium_ThermodynamicState_array(dst,ndims,...) generic_array_create(NULL, dst, pump__v3__basicCold__t_plugFlowPipe1_del_Medium_ThermodynamicState_construct_p, ndims, sizeof(pump__v3__basicCold__t_plugFlowPipe1_del_Medium_ThermodynamicState), __VA_ARGS__)
#define pump__v3__basicCold__t_plugFlowPipe1_del_Medium_ThermodynamicState_array_copy_data(src,dst)   generic_array_copy_data(src, &dst, pump__v3__basicCold__t_plugFlowPipe1_del_Medium_ThermodynamicState_copy_p, sizeof(pump__v3__basicCold__t_plugFlowPipe1_del_Medium_ThermodynamicState))
#define pump__v3__basicCold__t_plugFlowPipe1_del_Medium_ThermodynamicState_array_alloc_copy(src,dst)  generic_array_alloc_copy(src, &dst, pump__v3__basicCold__t_plugFlowPipe1_del_Medium_ThermodynamicState_copy_p, sizeof(pump__v3__basicCold__t_plugFlowPipe1_del_Medium_ThermodynamicState))
#define pump__v3__basicCold__t_plugFlowPipe1_del_Medium_ThermodynamicState_array_get(src,ndims,...)   (*(pump__v3__basicCold__t_plugFlowPipe1_del_Medium_ThermodynamicState*)(generic_array_get(&src, sizeof(pump__v3__basicCold__t_plugFlowPipe1_del_Medium_ThermodynamicState), __VA_ARGS__)))
#define pump__v3__basicCold__t_plugFlowPipe1_del_Medium_ThermodynamicState_set(dst,val,...)           generic_array_set(&dst, &val, pump__v3__basicCold__t_plugFlowPipe1_del_Medium_ThermodynamicState_copy_p, sizeof(pump__v3__basicCold__t_plugFlowPipe1_del_Medium_ThermodynamicState), __VA_ARGS__)

typedef pump__v3__basicCold__t_SenTempIn__cold_Medium_ThermodynamicState pump__v3__basicCold__t_plugFlowPipe1_heaLos__a_Medium_ThermodynamicState;
extern struct record_description pump__v3__basicCold__t_plugFlowPipe1_heaLos__a_Medium_ThermodynamicState__desc;

void pump__v3__basicCold__t_plugFlowPipe1_heaLos__a_Medium_ThermodynamicState_construct_p(threadData_t *threadData, void* v_ths );
#define pump__v3__basicCold__t_plugFlowPipe1_heaLos__a_Medium_ThermodynamicState_construct(td, ths ) pump__v3__basicCold__t_plugFlowPipe1_heaLos__a_Medium_ThermodynamicState_construct_p(td, &ths )
void pump__v3__basicCold__t_plugFlowPipe1_heaLos__a_Medium_ThermodynamicState_copy_p(void* v_src, void* v_dst);
#define pump__v3__basicCold__t_plugFlowPipe1_heaLos__a_Medium_ThermodynamicState_copy(src,dst) pump__v3__basicCold__t_plugFlowPipe1_heaLos__a_Medium_ThermodynamicState_copy_p(&src, &dst)


void pump__v3__basicCold__t_plugFlowPipe1_heaLos__a_Medium_ThermodynamicState_wrap_vars_p(threadData_t *threadData , void* v_dst , modelica_real in_p, modelica_real in_T);
#define pump__v3__basicCold__t_plugFlowPipe1_heaLos__a_Medium_ThermodynamicState_wrap_vars(td, dst , in_p, in_T) pump__v3__basicCold__t_plugFlowPipe1_heaLos__a_Medium_ThermodynamicState_wrap_vars_p(td, &dst , in_p, in_T)

// This function is not needed anymore. If you want to know how a record
// is 'assigned to' in simulation context see assignRhsExpToRecordCrefSimContext and
// splitRecordAssignmentToMemberAssignments (simCode). Basically the record is
// split up assignments generated for each member individually.
// void pump__v3__basicCold__t_plugFlowPipe1_heaLos__a_Medium_ThermodynamicState_copy_to_vars_p(void* v_src , modelica_real* in_p, modelica_real* in_T);
// #define pump__v3__basicCold__t_plugFlowPipe1_heaLos__a_Medium_ThermodynamicState_copy_to_vars(src,...) pump__v3__basicCold__t_plugFlowPipe1_heaLos__a_Medium_ThermodynamicState_copy_to_vars_p(&src, __VA_ARGS__)

typedef base_array_t pump__v3__basicCold__t_plugFlowPipe1_heaLos__a_Medium_ThermodynamicState_array;
#define alloc_pump__v3__basicCold__t_plugFlowPipe1_heaLos__a_Medium_ThermodynamicState_array(dst,ndims,...) generic_array_create(NULL, dst, pump__v3__basicCold__t_plugFlowPipe1_heaLos__a_Medium_ThermodynamicState_construct_p, ndims, sizeof(pump__v3__basicCold__t_plugFlowPipe1_heaLos__a_Medium_ThermodynamicState), __VA_ARGS__)
#define pump__v3__basicCold__t_plugFlowPipe1_heaLos__a_Medium_ThermodynamicState_array_copy_data(src,dst)   generic_array_copy_data(src, &dst, pump__v3__basicCold__t_plugFlowPipe1_heaLos__a_Medium_ThermodynamicState_copy_p, sizeof(pump__v3__basicCold__t_plugFlowPipe1_heaLos__a_Medium_ThermodynamicState))
#define pump__v3__basicCold__t_plugFlowPipe1_heaLos__a_Medium_ThermodynamicState_array_alloc_copy(src,dst)  generic_array_alloc_copy(src, &dst, pump__v3__basicCold__t_plugFlowPipe1_heaLos__a_Medium_ThermodynamicState_copy_p, sizeof(pump__v3__basicCold__t_plugFlowPipe1_heaLos__a_Medium_ThermodynamicState))
#define pump__v3__basicCold__t_plugFlowPipe1_heaLos__a_Medium_ThermodynamicState_array_get(src,ndims,...)   (*(pump__v3__basicCold__t_plugFlowPipe1_heaLos__a_Medium_ThermodynamicState*)(generic_array_get(&src, sizeof(pump__v3__basicCold__t_plugFlowPipe1_heaLos__a_Medium_ThermodynamicState), __VA_ARGS__)))
#define pump__v3__basicCold__t_plugFlowPipe1_heaLos__a_Medium_ThermodynamicState_set(dst,val,...)           generic_array_set(&dst, &val, pump__v3__basicCold__t_plugFlowPipe1_heaLos__a_Medium_ThermodynamicState_copy_p, sizeof(pump__v3__basicCold__t_plugFlowPipe1_heaLos__a_Medium_ThermodynamicState), __VA_ARGS__)

typedef pump__v3__basicCold__t_SenTempIn__cold_Medium_ThermodynamicState pump__v3__basicCold__t_plugFlowPipe1_heaLos__b_Medium_ThermodynamicState;
extern struct record_description pump__v3__basicCold__t_plugFlowPipe1_heaLos__b_Medium_ThermodynamicState__desc;

void pump__v3__basicCold__t_plugFlowPipe1_heaLos__b_Medium_ThermodynamicState_construct_p(threadData_t *threadData, void* v_ths );
#define pump__v3__basicCold__t_plugFlowPipe1_heaLos__b_Medium_ThermodynamicState_construct(td, ths ) pump__v3__basicCold__t_plugFlowPipe1_heaLos__b_Medium_ThermodynamicState_construct_p(td, &ths )
void pump__v3__basicCold__t_plugFlowPipe1_heaLos__b_Medium_ThermodynamicState_copy_p(void* v_src, void* v_dst);
#define pump__v3__basicCold__t_plugFlowPipe1_heaLos__b_Medium_ThermodynamicState_copy(src,dst) pump__v3__basicCold__t_plugFlowPipe1_heaLos__b_Medium_ThermodynamicState_copy_p(&src, &dst)


void pump__v3__basicCold__t_plugFlowPipe1_heaLos__b_Medium_ThermodynamicState_wrap_vars_p(threadData_t *threadData , void* v_dst , modelica_real in_p, modelica_real in_T);
#define pump__v3__basicCold__t_plugFlowPipe1_heaLos__b_Medium_ThermodynamicState_wrap_vars(td, dst , in_p, in_T) pump__v3__basicCold__t_plugFlowPipe1_heaLos__b_Medium_ThermodynamicState_wrap_vars_p(td, &dst , in_p, in_T)

// This function is not needed anymore. If you want to know how a record
// is 'assigned to' in simulation context see assignRhsExpToRecordCrefSimContext and
// splitRecordAssignmentToMemberAssignments (simCode). Basically the record is
// split up assignments generated for each member individually.
// void pump__v3__basicCold__t_plugFlowPipe1_heaLos__b_Medium_ThermodynamicState_copy_to_vars_p(void* v_src , modelica_real* in_p, modelica_real* in_T);
// #define pump__v3__basicCold__t_plugFlowPipe1_heaLos__b_Medium_ThermodynamicState_copy_to_vars(src,...) pump__v3__basicCold__t_plugFlowPipe1_heaLos__b_Medium_ThermodynamicState_copy_to_vars_p(&src, __VA_ARGS__)

typedef base_array_t pump__v3__basicCold__t_plugFlowPipe1_heaLos__b_Medium_ThermodynamicState_array;
#define alloc_pump__v3__basicCold__t_plugFlowPipe1_heaLos__b_Medium_ThermodynamicState_array(dst,ndims,...) generic_array_create(NULL, dst, pump__v3__basicCold__t_plugFlowPipe1_heaLos__b_Medium_ThermodynamicState_construct_p, ndims, sizeof(pump__v3__basicCold__t_plugFlowPipe1_heaLos__b_Medium_ThermodynamicState), __VA_ARGS__)
#define pump__v3__basicCold__t_plugFlowPipe1_heaLos__b_Medium_ThermodynamicState_array_copy_data(src,dst)   generic_array_copy_data(src, &dst, pump__v3__basicCold__t_plugFlowPipe1_heaLos__b_Medium_ThermodynamicState_copy_p, sizeof(pump__v3__basicCold__t_plugFlowPipe1_heaLos__b_Medium_ThermodynamicState))
#define pump__v3__basicCold__t_plugFlowPipe1_heaLos__b_Medium_ThermodynamicState_array_alloc_copy(src,dst)  generic_array_alloc_copy(src, &dst, pump__v3__basicCold__t_plugFlowPipe1_heaLos__b_Medium_ThermodynamicState_copy_p, sizeof(pump__v3__basicCold__t_plugFlowPipe1_heaLos__b_Medium_ThermodynamicState))
#define pump__v3__basicCold__t_plugFlowPipe1_heaLos__b_Medium_ThermodynamicState_array_get(src,ndims,...)   (*(pump__v3__basicCold__t_plugFlowPipe1_heaLos__b_Medium_ThermodynamicState*)(generic_array_get(&src, sizeof(pump__v3__basicCold__t_plugFlowPipe1_heaLos__b_Medium_ThermodynamicState), __VA_ARGS__)))
#define pump__v3__basicCold__t_plugFlowPipe1_heaLos__b_Medium_ThermodynamicState_set(dst,val,...)           generic_array_set(&dst, &val, pump__v3__basicCold__t_plugFlowPipe1_heaLos__b_Medium_ThermodynamicState_copy_p, sizeof(pump__v3__basicCold__t_plugFlowPipe1_heaLos__b_Medium_ThermodynamicState), __VA_ARGS__)

typedef pump__v3__basicCold__t_SenTempIn__cold_Medium_ThermodynamicState pump__v3__basicCold__t_plugFlowPipe1_res_Medium_ThermodynamicState;
extern struct record_description pump__v3__basicCold__t_plugFlowPipe1_res_Medium_ThermodynamicState__desc;

void pump__v3__basicCold__t_plugFlowPipe1_res_Medium_ThermodynamicState_construct_p(threadData_t *threadData, void* v_ths );
#define pump__v3__basicCold__t_plugFlowPipe1_res_Medium_ThermodynamicState_construct(td, ths ) pump__v3__basicCold__t_plugFlowPipe1_res_Medium_ThermodynamicState_construct_p(td, &ths )
void pump__v3__basicCold__t_plugFlowPipe1_res_Medium_ThermodynamicState_copy_p(void* v_src, void* v_dst);
#define pump__v3__basicCold__t_plugFlowPipe1_res_Medium_ThermodynamicState_copy(src,dst) pump__v3__basicCold__t_plugFlowPipe1_res_Medium_ThermodynamicState_copy_p(&src, &dst)


void pump__v3__basicCold__t_plugFlowPipe1_res_Medium_ThermodynamicState_wrap_vars_p(threadData_t *threadData , void* v_dst , modelica_real in_p, modelica_real in_T);
#define pump__v3__basicCold__t_plugFlowPipe1_res_Medium_ThermodynamicState_wrap_vars(td, dst , in_p, in_T) pump__v3__basicCold__t_plugFlowPipe1_res_Medium_ThermodynamicState_wrap_vars_p(td, &dst , in_p, in_T)

// This function is not needed anymore. If you want to know how a record
// is 'assigned to' in simulation context see assignRhsExpToRecordCrefSimContext and
// splitRecordAssignmentToMemberAssignments (simCode). Basically the record is
// split up assignments generated for each member individually.
// void pump__v3__basicCold__t_plugFlowPipe1_res_Medium_ThermodynamicState_copy_to_vars_p(void* v_src , modelica_real* in_p, modelica_real* in_T);
// #define pump__v3__basicCold__t_plugFlowPipe1_res_Medium_ThermodynamicState_copy_to_vars(src,...) pump__v3__basicCold__t_plugFlowPipe1_res_Medium_ThermodynamicState_copy_to_vars_p(&src, __VA_ARGS__)

typedef base_array_t pump__v3__basicCold__t_plugFlowPipe1_res_Medium_ThermodynamicState_array;
#define alloc_pump__v3__basicCold__t_plugFlowPipe1_res_Medium_ThermodynamicState_array(dst,ndims,...) generic_array_create(NULL, dst, pump__v3__basicCold__t_plugFlowPipe1_res_Medium_ThermodynamicState_construct_p, ndims, sizeof(pump__v3__basicCold__t_plugFlowPipe1_res_Medium_ThermodynamicState), __VA_ARGS__)
#define pump__v3__basicCold__t_plugFlowPipe1_res_Medium_ThermodynamicState_array_copy_data(src,dst)   generic_array_copy_data(src, &dst, pump__v3__basicCold__t_plugFlowPipe1_res_Medium_ThermodynamicState_copy_p, sizeof(pump__v3__basicCold__t_plugFlowPipe1_res_Medium_ThermodynamicState))
#define pump__v3__basicCold__t_plugFlowPipe1_res_Medium_ThermodynamicState_array_alloc_copy(src,dst)  generic_array_alloc_copy(src, &dst, pump__v3__basicCold__t_plugFlowPipe1_res_Medium_ThermodynamicState_copy_p, sizeof(pump__v3__basicCold__t_plugFlowPipe1_res_Medium_ThermodynamicState))
#define pump__v3__basicCold__t_plugFlowPipe1_res_Medium_ThermodynamicState_array_get(src,ndims,...)   (*(pump__v3__basicCold__t_plugFlowPipe1_res_Medium_ThermodynamicState*)(generic_array_get(&src, sizeof(pump__v3__basicCold__t_plugFlowPipe1_res_Medium_ThermodynamicState), __VA_ARGS__)))
#define pump__v3__basicCold__t_plugFlowPipe1_res_Medium_ThermodynamicState_set(dst,val,...)           generic_array_set(&dst, &val, pump__v3__basicCold__t_plugFlowPipe1_res_Medium_ThermodynamicState_copy_p, sizeof(pump__v3__basicCold__t_plugFlowPipe1_res_Medium_ThermodynamicState), __VA_ARGS__)

typedef pump__v3__basicCold__t_SenTempIn__cold_Medium_ThermodynamicState pump__v3__basicCold__t_plugFlowPipe1_vol__a_Medium_ThermodynamicState;
extern struct record_description pump__v3__basicCold__t_plugFlowPipe1_vol__a_Medium_ThermodynamicState__desc;

void pump__v3__basicCold__t_plugFlowPipe1_vol__a_Medium_ThermodynamicState_construct_p(threadData_t *threadData, void* v_ths );
#define pump__v3__basicCold__t_plugFlowPipe1_vol__a_Medium_ThermodynamicState_construct(td, ths ) pump__v3__basicCold__t_plugFlowPipe1_vol__a_Medium_ThermodynamicState_construct_p(td, &ths )
void pump__v3__basicCold__t_plugFlowPipe1_vol__a_Medium_ThermodynamicState_copy_p(void* v_src, void* v_dst);
#define pump__v3__basicCold__t_plugFlowPipe1_vol__a_Medium_ThermodynamicState_copy(src,dst) pump__v3__basicCold__t_plugFlowPipe1_vol__a_Medium_ThermodynamicState_copy_p(&src, &dst)


void pump__v3__basicCold__t_plugFlowPipe1_vol__a_Medium_ThermodynamicState_wrap_vars_p(threadData_t *threadData , void* v_dst , modelica_real in_p, modelica_real in_T);
#define pump__v3__basicCold__t_plugFlowPipe1_vol__a_Medium_ThermodynamicState_wrap_vars(td, dst , in_p, in_T) pump__v3__basicCold__t_plugFlowPipe1_vol__a_Medium_ThermodynamicState_wrap_vars_p(td, &dst , in_p, in_T)

// This function is not needed anymore. If you want to know how a record
// is 'assigned to' in simulation context see assignRhsExpToRecordCrefSimContext and
// splitRecordAssignmentToMemberAssignments (simCode). Basically the record is
// split up assignments generated for each member individually.
// void pump__v3__basicCold__t_plugFlowPipe1_vol__a_Medium_ThermodynamicState_copy_to_vars_p(void* v_src , modelica_real* in_p, modelica_real* in_T);
// #define pump__v3__basicCold__t_plugFlowPipe1_vol__a_Medium_ThermodynamicState_copy_to_vars(src,...) pump__v3__basicCold__t_plugFlowPipe1_vol__a_Medium_ThermodynamicState_copy_to_vars_p(&src, __VA_ARGS__)

typedef base_array_t pump__v3__basicCold__t_plugFlowPipe1_vol__a_Medium_ThermodynamicState_array;
#define alloc_pump__v3__basicCold__t_plugFlowPipe1_vol__a_Medium_ThermodynamicState_array(dst,ndims,...) generic_array_create(NULL, dst, pump__v3__basicCold__t_plugFlowPipe1_vol__a_Medium_ThermodynamicState_construct_p, ndims, sizeof(pump__v3__basicCold__t_plugFlowPipe1_vol__a_Medium_ThermodynamicState), __VA_ARGS__)
#define pump__v3__basicCold__t_plugFlowPipe1_vol__a_Medium_ThermodynamicState_array_copy_data(src,dst)   generic_array_copy_data(src, &dst, pump__v3__basicCold__t_plugFlowPipe1_vol__a_Medium_ThermodynamicState_copy_p, sizeof(pump__v3__basicCold__t_plugFlowPipe1_vol__a_Medium_ThermodynamicState))
#define pump__v3__basicCold__t_plugFlowPipe1_vol__a_Medium_ThermodynamicState_array_alloc_copy(src,dst)  generic_array_alloc_copy(src, &dst, pump__v3__basicCold__t_plugFlowPipe1_vol__a_Medium_ThermodynamicState_copy_p, sizeof(pump__v3__basicCold__t_plugFlowPipe1_vol__a_Medium_ThermodynamicState))
#define pump__v3__basicCold__t_plugFlowPipe1_vol__a_Medium_ThermodynamicState_array_get(src,ndims,...)   (*(pump__v3__basicCold__t_plugFlowPipe1_vol__a_Medium_ThermodynamicState*)(generic_array_get(&src, sizeof(pump__v3__basicCold__t_plugFlowPipe1_vol__a_Medium_ThermodynamicState), __VA_ARGS__)))
#define pump__v3__basicCold__t_plugFlowPipe1_vol__a_Medium_ThermodynamicState_set(dst,val,...)           generic_array_set(&dst, &val, pump__v3__basicCold__t_plugFlowPipe1_vol__a_Medium_ThermodynamicState_copy_p, sizeof(pump__v3__basicCold__t_plugFlowPipe1_vol__a_Medium_ThermodynamicState), __VA_ARGS__)

typedef pump__v3__basicCold__t_SenTempIn__cold_Medium_ThermodynamicState pump__v3__basicCold__t_plugFlowPipe1_vol__a_dynBal_Medium_ThermodynamicState;
extern struct record_description pump__v3__basicCold__t_plugFlowPipe1_vol__a_dynBal_Medium_ThermodynamicState__desc;

void pump__v3__basicCold__t_plugFlowPipe1_vol__a_dynBal_Medium_ThermodynamicState_construct_p(threadData_t *threadData, void* v_ths );
#define pump__v3__basicCold__t_plugFlowPipe1_vol__a_dynBal_Medium_ThermodynamicState_construct(td, ths ) pump__v3__basicCold__t_plugFlowPipe1_vol__a_dynBal_Medium_ThermodynamicState_construct_p(td, &ths )
void pump__v3__basicCold__t_plugFlowPipe1_vol__a_dynBal_Medium_ThermodynamicState_copy_p(void* v_src, void* v_dst);
#define pump__v3__basicCold__t_plugFlowPipe1_vol__a_dynBal_Medium_ThermodynamicState_copy(src,dst) pump__v3__basicCold__t_plugFlowPipe1_vol__a_dynBal_Medium_ThermodynamicState_copy_p(&src, &dst)


void pump__v3__basicCold__t_plugFlowPipe1_vol__a_dynBal_Medium_ThermodynamicState_wrap_vars_p(threadData_t *threadData , void* v_dst , modelica_real in_p, modelica_real in_T);
#define pump__v3__basicCold__t_plugFlowPipe1_vol__a_dynBal_Medium_ThermodynamicState_wrap_vars(td, dst , in_p, in_T) pump__v3__basicCold__t_plugFlowPipe1_vol__a_dynBal_Medium_ThermodynamicState_wrap_vars_p(td, &dst , in_p, in_T)

// This function is not needed anymore. If you want to know how a record
// is 'assigned to' in simulation context see assignRhsExpToRecordCrefSimContext and
// splitRecordAssignmentToMemberAssignments (simCode). Basically the record is
// split up assignments generated for each member individually.
// void pump__v3__basicCold__t_plugFlowPipe1_vol__a_dynBal_Medium_ThermodynamicState_copy_to_vars_p(void* v_src , modelica_real* in_p, modelica_real* in_T);
// #define pump__v3__basicCold__t_plugFlowPipe1_vol__a_dynBal_Medium_ThermodynamicState_copy_to_vars(src,...) pump__v3__basicCold__t_plugFlowPipe1_vol__a_dynBal_Medium_ThermodynamicState_copy_to_vars_p(&src, __VA_ARGS__)

typedef base_array_t pump__v3__basicCold__t_plugFlowPipe1_vol__a_dynBal_Medium_ThermodynamicState_array;
#define alloc_pump__v3__basicCold__t_plugFlowPipe1_vol__a_dynBal_Medium_ThermodynamicState_array(dst,ndims,...) generic_array_create(NULL, dst, pump__v3__basicCold__t_plugFlowPipe1_vol__a_dynBal_Medium_ThermodynamicState_construct_p, ndims, sizeof(pump__v3__basicCold__t_plugFlowPipe1_vol__a_dynBal_Medium_ThermodynamicState), __VA_ARGS__)
#define pump__v3__basicCold__t_plugFlowPipe1_vol__a_dynBal_Medium_ThermodynamicState_array_copy_data(src,dst)   generic_array_copy_data(src, &dst, pump__v3__basicCold__t_plugFlowPipe1_vol__a_dynBal_Medium_ThermodynamicState_copy_p, sizeof(pump__v3__basicCold__t_plugFlowPipe1_vol__a_dynBal_Medium_ThermodynamicState))
#define pump__v3__basicCold__t_plugFlowPipe1_vol__a_dynBal_Medium_ThermodynamicState_array_alloc_copy(src,dst)  generic_array_alloc_copy(src, &dst, pump__v3__basicCold__t_plugFlowPipe1_vol__a_dynBal_Medium_ThermodynamicState_copy_p, sizeof(pump__v3__basicCold__t_plugFlowPipe1_vol__a_dynBal_Medium_ThermodynamicState))
#define pump__v3__basicCold__t_plugFlowPipe1_vol__a_dynBal_Medium_ThermodynamicState_array_get(src,ndims,...)   (*(pump__v3__basicCold__t_plugFlowPipe1_vol__a_dynBal_Medium_ThermodynamicState*)(generic_array_get(&src, sizeof(pump__v3__basicCold__t_plugFlowPipe1_vol__a_dynBal_Medium_ThermodynamicState), __VA_ARGS__)))
#define pump__v3__basicCold__t_plugFlowPipe1_vol__a_dynBal_Medium_ThermodynamicState_set(dst,val,...)           generic_array_set(&dst, &val, pump__v3__basicCold__t_plugFlowPipe1_vol__a_dynBal_Medium_ThermodynamicState_copy_p, sizeof(pump__v3__basicCold__t_plugFlowPipe1_vol__a_dynBal_Medium_ThermodynamicState), __VA_ARGS__)

typedef pump__v3__basicCold__t_SenTempIn__cold_Medium_ThermodynamicState pump__v3__basicCold__t_plugFlowPipe1_vol__b_Medium_ThermodynamicState;
extern struct record_description pump__v3__basicCold__t_plugFlowPipe1_vol__b_Medium_ThermodynamicState__desc;

void pump__v3__basicCold__t_plugFlowPipe1_vol__b_Medium_ThermodynamicState_construct_p(threadData_t *threadData, void* v_ths );
#define pump__v3__basicCold__t_plugFlowPipe1_vol__b_Medium_ThermodynamicState_construct(td, ths ) pump__v3__basicCold__t_plugFlowPipe1_vol__b_Medium_ThermodynamicState_construct_p(td, &ths )
void pump__v3__basicCold__t_plugFlowPipe1_vol__b_Medium_ThermodynamicState_copy_p(void* v_src, void* v_dst);
#define pump__v3__basicCold__t_plugFlowPipe1_vol__b_Medium_ThermodynamicState_copy(src,dst) pump__v3__basicCold__t_plugFlowPipe1_vol__b_Medium_ThermodynamicState_copy_p(&src, &dst)


void pump__v3__basicCold__t_plugFlowPipe1_vol__b_Medium_ThermodynamicState_wrap_vars_p(threadData_t *threadData , void* v_dst , modelica_real in_p, modelica_real in_T);
#define pump__v3__basicCold__t_plugFlowPipe1_vol__b_Medium_ThermodynamicState_wrap_vars(td, dst , in_p, in_T) pump__v3__basicCold__t_plugFlowPipe1_vol__b_Medium_ThermodynamicState_wrap_vars_p(td, &dst , in_p, in_T)

// This function is not needed anymore. If you want to know how a record
// is 'assigned to' in simulation context see assignRhsExpToRecordCrefSimContext and
// splitRecordAssignmentToMemberAssignments (simCode). Basically the record is
// split up assignments generated for each member individually.
// void pump__v3__basicCold__t_plugFlowPipe1_vol__b_Medium_ThermodynamicState_copy_to_vars_p(void* v_src , modelica_real* in_p, modelica_real* in_T);
// #define pump__v3__basicCold__t_plugFlowPipe1_vol__b_Medium_ThermodynamicState_copy_to_vars(src,...) pump__v3__basicCold__t_plugFlowPipe1_vol__b_Medium_ThermodynamicState_copy_to_vars_p(&src, __VA_ARGS__)

typedef base_array_t pump__v3__basicCold__t_plugFlowPipe1_vol__b_Medium_ThermodynamicState_array;
#define alloc_pump__v3__basicCold__t_plugFlowPipe1_vol__b_Medium_ThermodynamicState_array(dst,ndims,...) generic_array_create(NULL, dst, pump__v3__basicCold__t_plugFlowPipe1_vol__b_Medium_ThermodynamicState_construct_p, ndims, sizeof(pump__v3__basicCold__t_plugFlowPipe1_vol__b_Medium_ThermodynamicState), __VA_ARGS__)
#define pump__v3__basicCold__t_plugFlowPipe1_vol__b_Medium_ThermodynamicState_array_copy_data(src,dst)   generic_array_copy_data(src, &dst, pump__v3__basicCold__t_plugFlowPipe1_vol__b_Medium_ThermodynamicState_copy_p, sizeof(pump__v3__basicCold__t_plugFlowPipe1_vol__b_Medium_ThermodynamicState))
#define pump__v3__basicCold__t_plugFlowPipe1_vol__b_Medium_ThermodynamicState_array_alloc_copy(src,dst)  generic_array_alloc_copy(src, &dst, pump__v3__basicCold__t_plugFlowPipe1_vol__b_Medium_ThermodynamicState_copy_p, sizeof(pump__v3__basicCold__t_plugFlowPipe1_vol__b_Medium_ThermodynamicState))
#define pump__v3__basicCold__t_plugFlowPipe1_vol__b_Medium_ThermodynamicState_array_get(src,ndims,...)   (*(pump__v3__basicCold__t_plugFlowPipe1_vol__b_Medium_ThermodynamicState*)(generic_array_get(&src, sizeof(pump__v3__basicCold__t_plugFlowPipe1_vol__b_Medium_ThermodynamicState), __VA_ARGS__)))
#define pump__v3__basicCold__t_plugFlowPipe1_vol__b_Medium_ThermodynamicState_set(dst,val,...)           generic_array_set(&dst, &val, pump__v3__basicCold__t_plugFlowPipe1_vol__b_Medium_ThermodynamicState_copy_p, sizeof(pump__v3__basicCold__t_plugFlowPipe1_vol__b_Medium_ThermodynamicState), __VA_ARGS__)

typedef pump__v3__basicCold__t_SenTempIn__cold_Medium_ThermodynamicState pump__v3__basicCold__t_plugFlowPipe1_vol__b_dynBal_Medium_ThermodynamicState;
extern struct record_description pump__v3__basicCold__t_plugFlowPipe1_vol__b_dynBal_Medium_ThermodynamicState__desc;

void pump__v3__basicCold__t_plugFlowPipe1_vol__b_dynBal_Medium_ThermodynamicState_construct_p(threadData_t *threadData, void* v_ths );
#define pump__v3__basicCold__t_plugFlowPipe1_vol__b_dynBal_Medium_ThermodynamicState_construct(td, ths ) pump__v3__basicCold__t_plugFlowPipe1_vol__b_dynBal_Medium_ThermodynamicState_construct_p(td, &ths )
void pump__v3__basicCold__t_plugFlowPipe1_vol__b_dynBal_Medium_ThermodynamicState_copy_p(void* v_src, void* v_dst);
#define pump__v3__basicCold__t_plugFlowPipe1_vol__b_dynBal_Medium_ThermodynamicState_copy(src,dst) pump__v3__basicCold__t_plugFlowPipe1_vol__b_dynBal_Medium_ThermodynamicState_copy_p(&src, &dst)


void pump__v3__basicCold__t_plugFlowPipe1_vol__b_dynBal_Medium_ThermodynamicState_wrap_vars_p(threadData_t *threadData , void* v_dst , modelica_real in_p, modelica_real in_T);
#define pump__v3__basicCold__t_plugFlowPipe1_vol__b_dynBal_Medium_ThermodynamicState_wrap_vars(td, dst , in_p, in_T) pump__v3__basicCold__t_plugFlowPipe1_vol__b_dynBal_Medium_ThermodynamicState_wrap_vars_p(td, &dst , in_p, in_T)

// This function is not needed anymore. If you want to know how a record
// is 'assigned to' in simulation context see assignRhsExpToRecordCrefSimContext and
// splitRecordAssignmentToMemberAssignments (simCode). Basically the record is
// split up assignments generated for each member individually.
// void pump__v3__basicCold__t_plugFlowPipe1_vol__b_dynBal_Medium_ThermodynamicState_copy_to_vars_p(void* v_src , modelica_real* in_p, modelica_real* in_T);
// #define pump__v3__basicCold__t_plugFlowPipe1_vol__b_dynBal_Medium_ThermodynamicState_copy_to_vars(src,...) pump__v3__basicCold__t_plugFlowPipe1_vol__b_dynBal_Medium_ThermodynamicState_copy_to_vars_p(&src, __VA_ARGS__)

typedef base_array_t pump__v3__basicCold__t_plugFlowPipe1_vol__b_dynBal_Medium_ThermodynamicState_array;
#define alloc_pump__v3__basicCold__t_plugFlowPipe1_vol__b_dynBal_Medium_ThermodynamicState_array(dst,ndims,...) generic_array_create(NULL, dst, pump__v3__basicCold__t_plugFlowPipe1_vol__b_dynBal_Medium_ThermodynamicState_construct_p, ndims, sizeof(pump__v3__basicCold__t_plugFlowPipe1_vol__b_dynBal_Medium_ThermodynamicState), __VA_ARGS__)
#define pump__v3__basicCold__t_plugFlowPipe1_vol__b_dynBal_Medium_ThermodynamicState_array_copy_data(src,dst)   generic_array_copy_data(src, &dst, pump__v3__basicCold__t_plugFlowPipe1_vol__b_dynBal_Medium_ThermodynamicState_copy_p, sizeof(pump__v3__basicCold__t_plugFlowPipe1_vol__b_dynBal_Medium_ThermodynamicState))
#define pump__v3__basicCold__t_plugFlowPipe1_vol__b_dynBal_Medium_ThermodynamicState_array_alloc_copy(src,dst)  generic_array_alloc_copy(src, &dst, pump__v3__basicCold__t_plugFlowPipe1_vol__b_dynBal_Medium_ThermodynamicState_copy_p, sizeof(pump__v3__basicCold__t_plugFlowPipe1_vol__b_dynBal_Medium_ThermodynamicState))
#define pump__v3__basicCold__t_plugFlowPipe1_vol__b_dynBal_Medium_ThermodynamicState_array_get(src,ndims,...)   (*(pump__v3__basicCold__t_plugFlowPipe1_vol__b_dynBal_Medium_ThermodynamicState*)(generic_array_get(&src, sizeof(pump__v3__basicCold__t_plugFlowPipe1_vol__b_dynBal_Medium_ThermodynamicState), __VA_ARGS__)))
#define pump__v3__basicCold__t_plugFlowPipe1_vol__b_dynBal_Medium_ThermodynamicState_set(dst,val,...)           generic_array_set(&dst, &val, pump__v3__basicCold__t_plugFlowPipe1_vol__b_dynBal_Medium_ThermodynamicState_copy_p, sizeof(pump__v3__basicCold__t_plugFlowPipe1_vol__b_dynBal_Medium_ThermodynamicState), __VA_ARGS__)

typedef pump__v3__basicCold__t_SenTempIn__cold_Medium_ThermodynamicState pump__v3__basicCold__t_plugFlowPipe2_Medium_ThermodynamicState;
extern struct record_description pump__v3__basicCold__t_plugFlowPipe2_Medium_ThermodynamicState__desc;

void pump__v3__basicCold__t_plugFlowPipe2_Medium_ThermodynamicState_construct_p(threadData_t *threadData, void* v_ths );
#define pump__v3__basicCold__t_plugFlowPipe2_Medium_ThermodynamicState_construct(td, ths ) pump__v3__basicCold__t_plugFlowPipe2_Medium_ThermodynamicState_construct_p(td, &ths )
void pump__v3__basicCold__t_plugFlowPipe2_Medium_ThermodynamicState_copy_p(void* v_src, void* v_dst);
#define pump__v3__basicCold__t_plugFlowPipe2_Medium_ThermodynamicState_copy(src,dst) pump__v3__basicCold__t_plugFlowPipe2_Medium_ThermodynamicState_copy_p(&src, &dst)


void pump__v3__basicCold__t_plugFlowPipe2_Medium_ThermodynamicState_wrap_vars_p(threadData_t *threadData , void* v_dst , modelica_real in_p, modelica_real in_T);
#define pump__v3__basicCold__t_plugFlowPipe2_Medium_ThermodynamicState_wrap_vars(td, dst , in_p, in_T) pump__v3__basicCold__t_plugFlowPipe2_Medium_ThermodynamicState_wrap_vars_p(td, &dst , in_p, in_T)

// This function is not needed anymore. If you want to know how a record
// is 'assigned to' in simulation context see assignRhsExpToRecordCrefSimContext and
// splitRecordAssignmentToMemberAssignments (simCode). Basically the record is
// split up assignments generated for each member individually.
// void pump__v3__basicCold__t_plugFlowPipe2_Medium_ThermodynamicState_copy_to_vars_p(void* v_src , modelica_real* in_p, modelica_real* in_T);
// #define pump__v3__basicCold__t_plugFlowPipe2_Medium_ThermodynamicState_copy_to_vars(src,...) pump__v3__basicCold__t_plugFlowPipe2_Medium_ThermodynamicState_copy_to_vars_p(&src, __VA_ARGS__)

typedef base_array_t pump__v3__basicCold__t_plugFlowPipe2_Medium_ThermodynamicState_array;
#define alloc_pump__v3__basicCold__t_plugFlowPipe2_Medium_ThermodynamicState_array(dst,ndims,...) generic_array_create(NULL, dst, pump__v3__basicCold__t_plugFlowPipe2_Medium_ThermodynamicState_construct_p, ndims, sizeof(pump__v3__basicCold__t_plugFlowPipe2_Medium_ThermodynamicState), __VA_ARGS__)
#define pump__v3__basicCold__t_plugFlowPipe2_Medium_ThermodynamicState_array_copy_data(src,dst)   generic_array_copy_data(src, &dst, pump__v3__basicCold__t_plugFlowPipe2_Medium_ThermodynamicState_copy_p, sizeof(pump__v3__basicCold__t_plugFlowPipe2_Medium_ThermodynamicState))
#define pump__v3__basicCold__t_plugFlowPipe2_Medium_ThermodynamicState_array_alloc_copy(src,dst)  generic_array_alloc_copy(src, &dst, pump__v3__basicCold__t_plugFlowPipe2_Medium_ThermodynamicState_copy_p, sizeof(pump__v3__basicCold__t_plugFlowPipe2_Medium_ThermodynamicState))
#define pump__v3__basicCold__t_plugFlowPipe2_Medium_ThermodynamicState_array_get(src,ndims,...)   (*(pump__v3__basicCold__t_plugFlowPipe2_Medium_ThermodynamicState*)(generic_array_get(&src, sizeof(pump__v3__basicCold__t_plugFlowPipe2_Medium_ThermodynamicState), __VA_ARGS__)))
#define pump__v3__basicCold__t_plugFlowPipe2_Medium_ThermodynamicState_set(dst,val,...)           generic_array_set(&dst, &val, pump__v3__basicCold__t_plugFlowPipe2_Medium_ThermodynamicState_copy_p, sizeof(pump__v3__basicCold__t_plugFlowPipe2_Medium_ThermodynamicState), __VA_ARGS__)

typedef pump__v3__basicCold__t_SenTempIn__cold_Medium_ThermodynamicState pump__v3__basicCold__t_plugFlowPipe2_del_Medium_ThermodynamicState;
extern struct record_description pump__v3__basicCold__t_plugFlowPipe2_del_Medium_ThermodynamicState__desc;

void pump__v3__basicCold__t_plugFlowPipe2_del_Medium_ThermodynamicState_construct_p(threadData_t *threadData, void* v_ths );
#define pump__v3__basicCold__t_plugFlowPipe2_del_Medium_ThermodynamicState_construct(td, ths ) pump__v3__basicCold__t_plugFlowPipe2_del_Medium_ThermodynamicState_construct_p(td, &ths )
void pump__v3__basicCold__t_plugFlowPipe2_del_Medium_ThermodynamicState_copy_p(void* v_src, void* v_dst);
#define pump__v3__basicCold__t_plugFlowPipe2_del_Medium_ThermodynamicState_copy(src,dst) pump__v3__basicCold__t_plugFlowPipe2_del_Medium_ThermodynamicState_copy_p(&src, &dst)


void pump__v3__basicCold__t_plugFlowPipe2_del_Medium_ThermodynamicState_wrap_vars_p(threadData_t *threadData , void* v_dst , modelica_real in_p, modelica_real in_T);
#define pump__v3__basicCold__t_plugFlowPipe2_del_Medium_ThermodynamicState_wrap_vars(td, dst , in_p, in_T) pump__v3__basicCold__t_plugFlowPipe2_del_Medium_ThermodynamicState_wrap_vars_p(td, &dst , in_p, in_T)

// This function is not needed anymore. If you want to know how a record
// is 'assigned to' in simulation context see assignRhsExpToRecordCrefSimContext and
// splitRecordAssignmentToMemberAssignments (simCode). Basically the record is
// split up assignments generated for each member individually.
// void pump__v3__basicCold__t_plugFlowPipe2_del_Medium_ThermodynamicState_copy_to_vars_p(void* v_src , modelica_real* in_p, modelica_real* in_T);
// #define pump__v3__basicCold__t_plugFlowPipe2_del_Medium_ThermodynamicState_copy_to_vars(src,...) pump__v3__basicCold__t_plugFlowPipe2_del_Medium_ThermodynamicState_copy_to_vars_p(&src, __VA_ARGS__)

typedef base_array_t pump__v3__basicCold__t_plugFlowPipe2_del_Medium_ThermodynamicState_array;
#define alloc_pump__v3__basicCold__t_plugFlowPipe2_del_Medium_ThermodynamicState_array(dst,ndims,...) generic_array_create(NULL, dst, pump__v3__basicCold__t_plugFlowPipe2_del_Medium_ThermodynamicState_construct_p, ndims, sizeof(pump__v3__basicCold__t_plugFlowPipe2_del_Medium_ThermodynamicState), __VA_ARGS__)
#define pump__v3__basicCold__t_plugFlowPipe2_del_Medium_ThermodynamicState_array_copy_data(src,dst)   generic_array_copy_data(src, &dst, pump__v3__basicCold__t_plugFlowPipe2_del_Medium_ThermodynamicState_copy_p, sizeof(pump__v3__basicCold__t_plugFlowPipe2_del_Medium_ThermodynamicState))
#define pump__v3__basicCold__t_plugFlowPipe2_del_Medium_ThermodynamicState_array_alloc_copy(src,dst)  generic_array_alloc_copy(src, &dst, pump__v3__basicCold__t_plugFlowPipe2_del_Medium_ThermodynamicState_copy_p, sizeof(pump__v3__basicCold__t_plugFlowPipe2_del_Medium_ThermodynamicState))
#define pump__v3__basicCold__t_plugFlowPipe2_del_Medium_ThermodynamicState_array_get(src,ndims,...)   (*(pump__v3__basicCold__t_plugFlowPipe2_del_Medium_ThermodynamicState*)(generic_array_get(&src, sizeof(pump__v3__basicCold__t_plugFlowPipe2_del_Medium_ThermodynamicState), __VA_ARGS__)))
#define pump__v3__basicCold__t_plugFlowPipe2_del_Medium_ThermodynamicState_set(dst,val,...)           generic_array_set(&dst, &val, pump__v3__basicCold__t_plugFlowPipe2_del_Medium_ThermodynamicState_copy_p, sizeof(pump__v3__basicCold__t_plugFlowPipe2_del_Medium_ThermodynamicState), __VA_ARGS__)

typedef pump__v3__basicCold__t_SenTempIn__cold_Medium_ThermodynamicState pump__v3__basicCold__t_plugFlowPipe2_heaLos__a_Medium_ThermodynamicState;
extern struct record_description pump__v3__basicCold__t_plugFlowPipe2_heaLos__a_Medium_ThermodynamicState__desc;

void pump__v3__basicCold__t_plugFlowPipe2_heaLos__a_Medium_ThermodynamicState_construct_p(threadData_t *threadData, void* v_ths );
#define pump__v3__basicCold__t_plugFlowPipe2_heaLos__a_Medium_ThermodynamicState_construct(td, ths ) pump__v3__basicCold__t_plugFlowPipe2_heaLos__a_Medium_ThermodynamicState_construct_p(td, &ths )
void pump__v3__basicCold__t_plugFlowPipe2_heaLos__a_Medium_ThermodynamicState_copy_p(void* v_src, void* v_dst);
#define pump__v3__basicCold__t_plugFlowPipe2_heaLos__a_Medium_ThermodynamicState_copy(src,dst) pump__v3__basicCold__t_plugFlowPipe2_heaLos__a_Medium_ThermodynamicState_copy_p(&src, &dst)


void pump__v3__basicCold__t_plugFlowPipe2_heaLos__a_Medium_ThermodynamicState_wrap_vars_p(threadData_t *threadData , void* v_dst , modelica_real in_p, modelica_real in_T);
#define pump__v3__basicCold__t_plugFlowPipe2_heaLos__a_Medium_ThermodynamicState_wrap_vars(td, dst , in_p, in_T) pump__v3__basicCold__t_plugFlowPipe2_heaLos__a_Medium_ThermodynamicState_wrap_vars_p(td, &dst , in_p, in_T)

// This function is not needed anymore. If you want to know how a record
// is 'assigned to' in simulation context see assignRhsExpToRecordCrefSimContext and
// splitRecordAssignmentToMemberAssignments (simCode). Basically the record is
// split up assignments generated for each member individually.
// void pump__v3__basicCold__t_plugFlowPipe2_heaLos__a_Medium_ThermodynamicState_copy_to_vars_p(void* v_src , modelica_real* in_p, modelica_real* in_T);
// #define pump__v3__basicCold__t_plugFlowPipe2_heaLos__a_Medium_ThermodynamicState_copy_to_vars(src,...) pump__v3__basicCold__t_plugFlowPipe2_heaLos__a_Medium_ThermodynamicState_copy_to_vars_p(&src, __VA_ARGS__)

typedef base_array_t pump__v3__basicCold__t_plugFlowPipe2_heaLos__a_Medium_ThermodynamicState_array;
#define alloc_pump__v3__basicCold__t_plugFlowPipe2_heaLos__a_Medium_ThermodynamicState_array(dst,ndims,...) generic_array_create(NULL, dst, pump__v3__basicCold__t_plugFlowPipe2_heaLos__a_Medium_ThermodynamicState_construct_p, ndims, sizeof(pump__v3__basicCold__t_plugFlowPipe2_heaLos__a_Medium_ThermodynamicState), __VA_ARGS__)
#define pump__v3__basicCold__t_plugFlowPipe2_heaLos__a_Medium_ThermodynamicState_array_copy_data(src,dst)   generic_array_copy_data(src, &dst, pump__v3__basicCold__t_plugFlowPipe2_heaLos__a_Medium_ThermodynamicState_copy_p, sizeof(pump__v3__basicCold__t_plugFlowPipe2_heaLos__a_Medium_ThermodynamicState))
#define pump__v3__basicCold__t_plugFlowPipe2_heaLos__a_Medium_ThermodynamicState_array_alloc_copy(src,dst)  generic_array_alloc_copy(src, &dst, pump__v3__basicCold__t_plugFlowPipe2_heaLos__a_Medium_ThermodynamicState_copy_p, sizeof(pump__v3__basicCold__t_plugFlowPipe2_heaLos__a_Medium_ThermodynamicState))
#define pump__v3__basicCold__t_plugFlowPipe2_heaLos__a_Medium_ThermodynamicState_array_get(src,ndims,...)   (*(pump__v3__basicCold__t_plugFlowPipe2_heaLos__a_Medium_ThermodynamicState*)(generic_array_get(&src, sizeof(pump__v3__basicCold__t_plugFlowPipe2_heaLos__a_Medium_ThermodynamicState), __VA_ARGS__)))
#define pump__v3__basicCold__t_plugFlowPipe2_heaLos__a_Medium_ThermodynamicState_set(dst,val,...)           generic_array_set(&dst, &val, pump__v3__basicCold__t_plugFlowPipe2_heaLos__a_Medium_ThermodynamicState_copy_p, sizeof(pump__v3__basicCold__t_plugFlowPipe2_heaLos__a_Medium_ThermodynamicState), __VA_ARGS__)

typedef pump__v3__basicCold__t_SenTempIn__cold_Medium_ThermodynamicState pump__v3__basicCold__t_plugFlowPipe2_heaLos__b_Medium_ThermodynamicState;
extern struct record_description pump__v3__basicCold__t_plugFlowPipe2_heaLos__b_Medium_ThermodynamicState__desc;

void pump__v3__basicCold__t_plugFlowPipe2_heaLos__b_Medium_ThermodynamicState_construct_p(threadData_t *threadData, void* v_ths );
#define pump__v3__basicCold__t_plugFlowPipe2_heaLos__b_Medium_ThermodynamicState_construct(td, ths ) pump__v3__basicCold__t_plugFlowPipe2_heaLos__b_Medium_ThermodynamicState_construct_p(td, &ths )
void pump__v3__basicCold__t_plugFlowPipe2_heaLos__b_Medium_ThermodynamicState_copy_p(void* v_src, void* v_dst);
#define pump__v3__basicCold__t_plugFlowPipe2_heaLos__b_Medium_ThermodynamicState_copy(src,dst) pump__v3__basicCold__t_plugFlowPipe2_heaLos__b_Medium_ThermodynamicState_copy_p(&src, &dst)


void pump__v3__basicCold__t_plugFlowPipe2_heaLos__b_Medium_ThermodynamicState_wrap_vars_p(threadData_t *threadData , void* v_dst , modelica_real in_p, modelica_real in_T);
#define pump__v3__basicCold__t_plugFlowPipe2_heaLos__b_Medium_ThermodynamicState_wrap_vars(td, dst , in_p, in_T) pump__v3__basicCold__t_plugFlowPipe2_heaLos__b_Medium_ThermodynamicState_wrap_vars_p(td, &dst , in_p, in_T)

// This function is not needed anymore. If you want to know how a record
// is 'assigned to' in simulation context see assignRhsExpToRecordCrefSimContext and
// splitRecordAssignmentToMemberAssignments (simCode). Basically the record is
// split up assignments generated for each member individually.
// void pump__v3__basicCold__t_plugFlowPipe2_heaLos__b_Medium_ThermodynamicState_copy_to_vars_p(void* v_src , modelica_real* in_p, modelica_real* in_T);
// #define pump__v3__basicCold__t_plugFlowPipe2_heaLos__b_Medium_ThermodynamicState_copy_to_vars(src,...) pump__v3__basicCold__t_plugFlowPipe2_heaLos__b_Medium_ThermodynamicState_copy_to_vars_p(&src, __VA_ARGS__)

typedef base_array_t pump__v3__basicCold__t_plugFlowPipe2_heaLos__b_Medium_ThermodynamicState_array;
#define alloc_pump__v3__basicCold__t_plugFlowPipe2_heaLos__b_Medium_ThermodynamicState_array(dst,ndims,...) generic_array_create(NULL, dst, pump__v3__basicCold__t_plugFlowPipe2_heaLos__b_Medium_ThermodynamicState_construct_p, ndims, sizeof(pump__v3__basicCold__t_plugFlowPipe2_heaLos__b_Medium_ThermodynamicState), __VA_ARGS__)
#define pump__v3__basicCold__t_plugFlowPipe2_heaLos__b_Medium_ThermodynamicState_array_copy_data(src,dst)   generic_array_copy_data(src, &dst, pump__v3__basicCold__t_plugFlowPipe2_heaLos__b_Medium_ThermodynamicState_copy_p, sizeof(pump__v3__basicCold__t_plugFlowPipe2_heaLos__b_Medium_ThermodynamicState))
#define pump__v3__basicCold__t_plugFlowPipe2_heaLos__b_Medium_ThermodynamicState_array_alloc_copy(src,dst)  generic_array_alloc_copy(src, &dst, pump__v3__basicCold__t_plugFlowPipe2_heaLos__b_Medium_ThermodynamicState_copy_p, sizeof(pump__v3__basicCold__t_plugFlowPipe2_heaLos__b_Medium_ThermodynamicState))
#define pump__v3__basicCold__t_plugFlowPipe2_heaLos__b_Medium_ThermodynamicState_array_get(src,ndims,...)   (*(pump__v3__basicCold__t_plugFlowPipe2_heaLos__b_Medium_ThermodynamicState*)(generic_array_get(&src, sizeof(pump__v3__basicCold__t_plugFlowPipe2_heaLos__b_Medium_ThermodynamicState), __VA_ARGS__)))
#define pump__v3__basicCold__t_plugFlowPipe2_heaLos__b_Medium_ThermodynamicState_set(dst,val,...)           generic_array_set(&dst, &val, pump__v3__basicCold__t_plugFlowPipe2_heaLos__b_Medium_ThermodynamicState_copy_p, sizeof(pump__v3__basicCold__t_plugFlowPipe2_heaLos__b_Medium_ThermodynamicState), __VA_ARGS__)

typedef pump__v3__basicCold__t_SenTempIn__cold_Medium_ThermodynamicState pump__v3__basicCold__t_plugFlowPipe2_res_Medium_ThermodynamicState;
extern struct record_description pump__v3__basicCold__t_plugFlowPipe2_res_Medium_ThermodynamicState__desc;

void pump__v3__basicCold__t_plugFlowPipe2_res_Medium_ThermodynamicState_construct_p(threadData_t *threadData, void* v_ths );
#define pump__v3__basicCold__t_plugFlowPipe2_res_Medium_ThermodynamicState_construct(td, ths ) pump__v3__basicCold__t_plugFlowPipe2_res_Medium_ThermodynamicState_construct_p(td, &ths )
void pump__v3__basicCold__t_plugFlowPipe2_res_Medium_ThermodynamicState_copy_p(void* v_src, void* v_dst);
#define pump__v3__basicCold__t_plugFlowPipe2_res_Medium_ThermodynamicState_copy(src,dst) pump__v3__basicCold__t_plugFlowPipe2_res_Medium_ThermodynamicState_copy_p(&src, &dst)


void pump__v3__basicCold__t_plugFlowPipe2_res_Medium_ThermodynamicState_wrap_vars_p(threadData_t *threadData , void* v_dst , modelica_real in_p, modelica_real in_T);
#define pump__v3__basicCold__t_plugFlowPipe2_res_Medium_ThermodynamicState_wrap_vars(td, dst , in_p, in_T) pump__v3__basicCold__t_plugFlowPipe2_res_Medium_ThermodynamicState_wrap_vars_p(td, &dst , in_p, in_T)

// This function is not needed anymore. If you want to know how a record
// is 'assigned to' in simulation context see assignRhsExpToRecordCrefSimContext and
// splitRecordAssignmentToMemberAssignments (simCode). Basically the record is
// split up assignments generated for each member individually.
// void pump__v3__basicCold__t_plugFlowPipe2_res_Medium_ThermodynamicState_copy_to_vars_p(void* v_src , modelica_real* in_p, modelica_real* in_T);
// #define pump__v3__basicCold__t_plugFlowPipe2_res_Medium_ThermodynamicState_copy_to_vars(src,...) pump__v3__basicCold__t_plugFlowPipe2_res_Medium_ThermodynamicState_copy_to_vars_p(&src, __VA_ARGS__)

typedef base_array_t pump__v3__basicCold__t_plugFlowPipe2_res_Medium_ThermodynamicState_array;
#define alloc_pump__v3__basicCold__t_plugFlowPipe2_res_Medium_ThermodynamicState_array(dst,ndims,...) generic_array_create(NULL, dst, pump__v3__basicCold__t_plugFlowPipe2_res_Medium_ThermodynamicState_construct_p, ndims, sizeof(pump__v3__basicCold__t_plugFlowPipe2_res_Medium_ThermodynamicState), __VA_ARGS__)
#define pump__v3__basicCold__t_plugFlowPipe2_res_Medium_ThermodynamicState_array_copy_data(src,dst)   generic_array_copy_data(src, &dst, pump__v3__basicCold__t_plugFlowPipe2_res_Medium_ThermodynamicState_copy_p, sizeof(pump__v3__basicCold__t_plugFlowPipe2_res_Medium_ThermodynamicState))
#define pump__v3__basicCold__t_plugFlowPipe2_res_Medium_ThermodynamicState_array_alloc_copy(src,dst)  generic_array_alloc_copy(src, &dst, pump__v3__basicCold__t_plugFlowPipe2_res_Medium_ThermodynamicState_copy_p, sizeof(pump__v3__basicCold__t_plugFlowPipe2_res_Medium_ThermodynamicState))
#define pump__v3__basicCold__t_plugFlowPipe2_res_Medium_ThermodynamicState_array_get(src,ndims,...)   (*(pump__v3__basicCold__t_plugFlowPipe2_res_Medium_ThermodynamicState*)(generic_array_get(&src, sizeof(pump__v3__basicCold__t_plugFlowPipe2_res_Medium_ThermodynamicState), __VA_ARGS__)))
#define pump__v3__basicCold__t_plugFlowPipe2_res_Medium_ThermodynamicState_set(dst,val,...)           generic_array_set(&dst, &val, pump__v3__basicCold__t_plugFlowPipe2_res_Medium_ThermodynamicState_copy_p, sizeof(pump__v3__basicCold__t_plugFlowPipe2_res_Medium_ThermodynamicState), __VA_ARGS__)

typedef pump__v3__basicCold__t_SenTempIn__cold_Medium_ThermodynamicState pump__v3__basicCold__t_plugFlowPipe2_vol__a_Medium_ThermodynamicState;
extern struct record_description pump__v3__basicCold__t_plugFlowPipe2_vol__a_Medium_ThermodynamicState__desc;

void pump__v3__basicCold__t_plugFlowPipe2_vol__a_Medium_ThermodynamicState_construct_p(threadData_t *threadData, void* v_ths );
#define pump__v3__basicCold__t_plugFlowPipe2_vol__a_Medium_ThermodynamicState_construct(td, ths ) pump__v3__basicCold__t_plugFlowPipe2_vol__a_Medium_ThermodynamicState_construct_p(td, &ths )
void pump__v3__basicCold__t_plugFlowPipe2_vol__a_Medium_ThermodynamicState_copy_p(void* v_src, void* v_dst);
#define pump__v3__basicCold__t_plugFlowPipe2_vol__a_Medium_ThermodynamicState_copy(src,dst) pump__v3__basicCold__t_plugFlowPipe2_vol__a_Medium_ThermodynamicState_copy_p(&src, &dst)


void pump__v3__basicCold__t_plugFlowPipe2_vol__a_Medium_ThermodynamicState_wrap_vars_p(threadData_t *threadData , void* v_dst , modelica_real in_p, modelica_real in_T);
#define pump__v3__basicCold__t_plugFlowPipe2_vol__a_Medium_ThermodynamicState_wrap_vars(td, dst , in_p, in_T) pump__v3__basicCold__t_plugFlowPipe2_vol__a_Medium_ThermodynamicState_wrap_vars_p(td, &dst , in_p, in_T)

// This function is not needed anymore. If you want to know how a record
// is 'assigned to' in simulation context see assignRhsExpToRecordCrefSimContext and
// splitRecordAssignmentToMemberAssignments (simCode). Basically the record is
// split up assignments generated for each member individually.
// void pump__v3__basicCold__t_plugFlowPipe2_vol__a_Medium_ThermodynamicState_copy_to_vars_p(void* v_src , modelica_real* in_p, modelica_real* in_T);
// #define pump__v3__basicCold__t_plugFlowPipe2_vol__a_Medium_ThermodynamicState_copy_to_vars(src,...) pump__v3__basicCold__t_plugFlowPipe2_vol__a_Medium_ThermodynamicState_copy_to_vars_p(&src, __VA_ARGS__)

typedef base_array_t pump__v3__basicCold__t_plugFlowPipe2_vol__a_Medium_ThermodynamicState_array;
#define alloc_pump__v3__basicCold__t_plugFlowPipe2_vol__a_Medium_ThermodynamicState_array(dst,ndims,...) generic_array_create(NULL, dst, pump__v3__basicCold__t_plugFlowPipe2_vol__a_Medium_ThermodynamicState_construct_p, ndims, sizeof(pump__v3__basicCold__t_plugFlowPipe2_vol__a_Medium_ThermodynamicState), __VA_ARGS__)
#define pump__v3__basicCold__t_plugFlowPipe2_vol__a_Medium_ThermodynamicState_array_copy_data(src,dst)   generic_array_copy_data(src, &dst, pump__v3__basicCold__t_plugFlowPipe2_vol__a_Medium_ThermodynamicState_copy_p, sizeof(pump__v3__basicCold__t_plugFlowPipe2_vol__a_Medium_ThermodynamicState))
#define pump__v3__basicCold__t_plugFlowPipe2_vol__a_Medium_ThermodynamicState_array_alloc_copy(src,dst)  generic_array_alloc_copy(src, &dst, pump__v3__basicCold__t_plugFlowPipe2_vol__a_Medium_ThermodynamicState_copy_p, sizeof(pump__v3__basicCold__t_plugFlowPipe2_vol__a_Medium_ThermodynamicState))
#define pump__v3__basicCold__t_plugFlowPipe2_vol__a_Medium_ThermodynamicState_array_get(src,ndims,...)   (*(pump__v3__basicCold__t_plugFlowPipe2_vol__a_Medium_ThermodynamicState*)(generic_array_get(&src, sizeof(pump__v3__basicCold__t_plugFlowPipe2_vol__a_Medium_ThermodynamicState), __VA_ARGS__)))
#define pump__v3__basicCold__t_plugFlowPipe2_vol__a_Medium_ThermodynamicState_set(dst,val,...)           generic_array_set(&dst, &val, pump__v3__basicCold__t_plugFlowPipe2_vol__a_Medium_ThermodynamicState_copy_p, sizeof(pump__v3__basicCold__t_plugFlowPipe2_vol__a_Medium_ThermodynamicState), __VA_ARGS__)

typedef pump__v3__basicCold__t_SenTempIn__cold_Medium_ThermodynamicState pump__v3__basicCold__t_plugFlowPipe2_vol__a_dynBal_Medium_ThermodynamicState;
extern struct record_description pump__v3__basicCold__t_plugFlowPipe2_vol__a_dynBal_Medium_ThermodynamicState__desc;

void pump__v3__basicCold__t_plugFlowPipe2_vol__a_dynBal_Medium_ThermodynamicState_construct_p(threadData_t *threadData, void* v_ths );
#define pump__v3__basicCold__t_plugFlowPipe2_vol__a_dynBal_Medium_ThermodynamicState_construct(td, ths ) pump__v3__basicCold__t_plugFlowPipe2_vol__a_dynBal_Medium_ThermodynamicState_construct_p(td, &ths )
void pump__v3__basicCold__t_plugFlowPipe2_vol__a_dynBal_Medium_ThermodynamicState_copy_p(void* v_src, void* v_dst);
#define pump__v3__basicCold__t_plugFlowPipe2_vol__a_dynBal_Medium_ThermodynamicState_copy(src,dst) pump__v3__basicCold__t_plugFlowPipe2_vol__a_dynBal_Medium_ThermodynamicState_copy_p(&src, &dst)


void pump__v3__basicCold__t_plugFlowPipe2_vol__a_dynBal_Medium_ThermodynamicState_wrap_vars_p(threadData_t *threadData , void* v_dst , modelica_real in_p, modelica_real in_T);
#define pump__v3__basicCold__t_plugFlowPipe2_vol__a_dynBal_Medium_ThermodynamicState_wrap_vars(td, dst , in_p, in_T) pump__v3__basicCold__t_plugFlowPipe2_vol__a_dynBal_Medium_ThermodynamicState_wrap_vars_p(td, &dst , in_p, in_T)

// This function is not needed anymore. If you want to know how a record
// is 'assigned to' in simulation context see assignRhsExpToRecordCrefSimContext and
// splitRecordAssignmentToMemberAssignments (simCode). Basically the record is
// split up assignments generated for each member individually.
// void pump__v3__basicCold__t_plugFlowPipe2_vol__a_dynBal_Medium_ThermodynamicState_copy_to_vars_p(void* v_src , modelica_real* in_p, modelica_real* in_T);
// #define pump__v3__basicCold__t_plugFlowPipe2_vol__a_dynBal_Medium_ThermodynamicState_copy_to_vars(src,...) pump__v3__basicCold__t_plugFlowPipe2_vol__a_dynBal_Medium_ThermodynamicState_copy_to_vars_p(&src, __VA_ARGS__)

typedef base_array_t pump__v3__basicCold__t_plugFlowPipe2_vol__a_dynBal_Medium_ThermodynamicState_array;
#define alloc_pump__v3__basicCold__t_plugFlowPipe2_vol__a_dynBal_Medium_ThermodynamicState_array(dst,ndims,...) generic_array_create(NULL, dst, pump__v3__basicCold__t_plugFlowPipe2_vol__a_dynBal_Medium_ThermodynamicState_construct_p, ndims, sizeof(pump__v3__basicCold__t_plugFlowPipe2_vol__a_dynBal_Medium_ThermodynamicState), __VA_ARGS__)
#define pump__v3__basicCold__t_plugFlowPipe2_vol__a_dynBal_Medium_ThermodynamicState_array_copy_data(src,dst)   generic_array_copy_data(src, &dst, pump__v3__basicCold__t_plugFlowPipe2_vol__a_dynBal_Medium_ThermodynamicState_copy_p, sizeof(pump__v3__basicCold__t_plugFlowPipe2_vol__a_dynBal_Medium_ThermodynamicState))
#define pump__v3__basicCold__t_plugFlowPipe2_vol__a_dynBal_Medium_ThermodynamicState_array_alloc_copy(src,dst)  generic_array_alloc_copy(src, &dst, pump__v3__basicCold__t_plugFlowPipe2_vol__a_dynBal_Medium_ThermodynamicState_copy_p, sizeof(pump__v3__basicCold__t_plugFlowPipe2_vol__a_dynBal_Medium_ThermodynamicState))
#define pump__v3__basicCold__t_plugFlowPipe2_vol__a_dynBal_Medium_ThermodynamicState_array_get(src,ndims,...)   (*(pump__v3__basicCold__t_plugFlowPipe2_vol__a_dynBal_Medium_ThermodynamicState*)(generic_array_get(&src, sizeof(pump__v3__basicCold__t_plugFlowPipe2_vol__a_dynBal_Medium_ThermodynamicState), __VA_ARGS__)))
#define pump__v3__basicCold__t_plugFlowPipe2_vol__a_dynBal_Medium_ThermodynamicState_set(dst,val,...)           generic_array_set(&dst, &val, pump__v3__basicCold__t_plugFlowPipe2_vol__a_dynBal_Medium_ThermodynamicState_copy_p, sizeof(pump__v3__basicCold__t_plugFlowPipe2_vol__a_dynBal_Medium_ThermodynamicState), __VA_ARGS__)

typedef pump__v3__basicCold__t_SenTempIn__cold_Medium_ThermodynamicState pump__v3__basicCold__t_plugFlowPipe2_vol__b_Medium_ThermodynamicState;
extern struct record_description pump__v3__basicCold__t_plugFlowPipe2_vol__b_Medium_ThermodynamicState__desc;

void pump__v3__basicCold__t_plugFlowPipe2_vol__b_Medium_ThermodynamicState_construct_p(threadData_t *threadData, void* v_ths );
#define pump__v3__basicCold__t_plugFlowPipe2_vol__b_Medium_ThermodynamicState_construct(td, ths ) pump__v3__basicCold__t_plugFlowPipe2_vol__b_Medium_ThermodynamicState_construct_p(td, &ths )
void pump__v3__basicCold__t_plugFlowPipe2_vol__b_Medium_ThermodynamicState_copy_p(void* v_src, void* v_dst);
#define pump__v3__basicCold__t_plugFlowPipe2_vol__b_Medium_ThermodynamicState_copy(src,dst) pump__v3__basicCold__t_plugFlowPipe2_vol__b_Medium_ThermodynamicState_copy_p(&src, &dst)


void pump__v3__basicCold__t_plugFlowPipe2_vol__b_Medium_ThermodynamicState_wrap_vars_p(threadData_t *threadData , void* v_dst , modelica_real in_p, modelica_real in_T);
#define pump__v3__basicCold__t_plugFlowPipe2_vol__b_Medium_ThermodynamicState_wrap_vars(td, dst , in_p, in_T) pump__v3__basicCold__t_plugFlowPipe2_vol__b_Medium_ThermodynamicState_wrap_vars_p(td, &dst , in_p, in_T)

// This function is not needed anymore. If you want to know how a record
// is 'assigned to' in simulation context see assignRhsExpToRecordCrefSimContext and
// splitRecordAssignmentToMemberAssignments (simCode). Basically the record is
// split up assignments generated for each member individually.
// void pump__v3__basicCold__t_plugFlowPipe2_vol__b_Medium_ThermodynamicState_copy_to_vars_p(void* v_src , modelica_real* in_p, modelica_real* in_T);
// #define pump__v3__basicCold__t_plugFlowPipe2_vol__b_Medium_ThermodynamicState_copy_to_vars(src,...) pump__v3__basicCold__t_plugFlowPipe2_vol__b_Medium_ThermodynamicState_copy_to_vars_p(&src, __VA_ARGS__)

typedef base_array_t pump__v3__basicCold__t_plugFlowPipe2_vol__b_Medium_ThermodynamicState_array;
#define alloc_pump__v3__basicCold__t_plugFlowPipe2_vol__b_Medium_ThermodynamicState_array(dst,ndims,...) generic_array_create(NULL, dst, pump__v3__basicCold__t_plugFlowPipe2_vol__b_Medium_ThermodynamicState_construct_p, ndims, sizeof(pump__v3__basicCold__t_plugFlowPipe2_vol__b_Medium_ThermodynamicState), __VA_ARGS__)
#define pump__v3__basicCold__t_plugFlowPipe2_vol__b_Medium_ThermodynamicState_array_copy_data(src,dst)   generic_array_copy_data(src, &dst, pump__v3__basicCold__t_plugFlowPipe2_vol__b_Medium_ThermodynamicState_copy_p, sizeof(pump__v3__basicCold__t_plugFlowPipe2_vol__b_Medium_ThermodynamicState))
#define pump__v3__basicCold__t_plugFlowPipe2_vol__b_Medium_ThermodynamicState_array_alloc_copy(src,dst)  generic_array_alloc_copy(src, &dst, pump__v3__basicCold__t_plugFlowPipe2_vol__b_Medium_ThermodynamicState_copy_p, sizeof(pump__v3__basicCold__t_plugFlowPipe2_vol__b_Medium_ThermodynamicState))
#define pump__v3__basicCold__t_plugFlowPipe2_vol__b_Medium_ThermodynamicState_array_get(src,ndims,...)   (*(pump__v3__basicCold__t_plugFlowPipe2_vol__b_Medium_ThermodynamicState*)(generic_array_get(&src, sizeof(pump__v3__basicCold__t_plugFlowPipe2_vol__b_Medium_ThermodynamicState), __VA_ARGS__)))
#define pump__v3__basicCold__t_plugFlowPipe2_vol__b_Medium_ThermodynamicState_set(dst,val,...)           generic_array_set(&dst, &val, pump__v3__basicCold__t_plugFlowPipe2_vol__b_Medium_ThermodynamicState_copy_p, sizeof(pump__v3__basicCold__t_plugFlowPipe2_vol__b_Medium_ThermodynamicState), __VA_ARGS__)

typedef pump__v3__basicCold__t_SenTempIn__cold_Medium_ThermodynamicState pump__v3__basicCold__t_plugFlowPipe2_vol__b_dynBal_Medium_ThermodynamicState;
extern struct record_description pump__v3__basicCold__t_plugFlowPipe2_vol__b_dynBal_Medium_ThermodynamicState__desc;

void pump__v3__basicCold__t_plugFlowPipe2_vol__b_dynBal_Medium_ThermodynamicState_construct_p(threadData_t *threadData, void* v_ths );
#define pump__v3__basicCold__t_plugFlowPipe2_vol__b_dynBal_Medium_ThermodynamicState_construct(td, ths ) pump__v3__basicCold__t_plugFlowPipe2_vol__b_dynBal_Medium_ThermodynamicState_construct_p(td, &ths )
void pump__v3__basicCold__t_plugFlowPipe2_vol__b_dynBal_Medium_ThermodynamicState_copy_p(void* v_src, void* v_dst);
#define pump__v3__basicCold__t_plugFlowPipe2_vol__b_dynBal_Medium_ThermodynamicState_copy(src,dst) pump__v3__basicCold__t_plugFlowPipe2_vol__b_dynBal_Medium_ThermodynamicState_copy_p(&src, &dst)


void pump__v3__basicCold__t_plugFlowPipe2_vol__b_dynBal_Medium_ThermodynamicState_wrap_vars_p(threadData_t *threadData , void* v_dst , modelica_real in_p, modelica_real in_T);
#define pump__v3__basicCold__t_plugFlowPipe2_vol__b_dynBal_Medium_ThermodynamicState_wrap_vars(td, dst , in_p, in_T) pump__v3__basicCold__t_plugFlowPipe2_vol__b_dynBal_Medium_ThermodynamicState_wrap_vars_p(td, &dst , in_p, in_T)

// This function is not needed anymore. If you want to know how a record
// is 'assigned to' in simulation context see assignRhsExpToRecordCrefSimContext and
// splitRecordAssignmentToMemberAssignments (simCode). Basically the record is
// split up assignments generated for each member individually.
// void pump__v3__basicCold__t_plugFlowPipe2_vol__b_dynBal_Medium_ThermodynamicState_copy_to_vars_p(void* v_src , modelica_real* in_p, modelica_real* in_T);
// #define pump__v3__basicCold__t_plugFlowPipe2_vol__b_dynBal_Medium_ThermodynamicState_copy_to_vars(src,...) pump__v3__basicCold__t_plugFlowPipe2_vol__b_dynBal_Medium_ThermodynamicState_copy_to_vars_p(&src, __VA_ARGS__)

typedef base_array_t pump__v3__basicCold__t_plugFlowPipe2_vol__b_dynBal_Medium_ThermodynamicState_array;
#define alloc_pump__v3__basicCold__t_plugFlowPipe2_vol__b_dynBal_Medium_ThermodynamicState_array(dst,ndims,...) generic_array_create(NULL, dst, pump__v3__basicCold__t_plugFlowPipe2_vol__b_dynBal_Medium_ThermodynamicState_construct_p, ndims, sizeof(pump__v3__basicCold__t_plugFlowPipe2_vol__b_dynBal_Medium_ThermodynamicState), __VA_ARGS__)
#define pump__v3__basicCold__t_plugFlowPipe2_vol__b_dynBal_Medium_ThermodynamicState_array_copy_data(src,dst)   generic_array_copy_data(src, &dst, pump__v3__basicCold__t_plugFlowPipe2_vol__b_dynBal_Medium_ThermodynamicState_copy_p, sizeof(pump__v3__basicCold__t_plugFlowPipe2_vol__b_dynBal_Medium_ThermodynamicState))
#define pump__v3__basicCold__t_plugFlowPipe2_vol__b_dynBal_Medium_ThermodynamicState_array_alloc_copy(src,dst)  generic_array_alloc_copy(src, &dst, pump__v3__basicCold__t_plugFlowPipe2_vol__b_dynBal_Medium_ThermodynamicState_copy_p, sizeof(pump__v3__basicCold__t_plugFlowPipe2_vol__b_dynBal_Medium_ThermodynamicState))
#define pump__v3__basicCold__t_plugFlowPipe2_vol__b_dynBal_Medium_ThermodynamicState_array_get(src,ndims,...)   (*(pump__v3__basicCold__t_plugFlowPipe2_vol__b_dynBal_Medium_ThermodynamicState*)(generic_array_get(&src, sizeof(pump__v3__basicCold__t_plugFlowPipe2_vol__b_dynBal_Medium_ThermodynamicState), __VA_ARGS__)))
#define pump__v3__basicCold__t_plugFlowPipe2_vol__b_dynBal_Medium_ThermodynamicState_set(dst,val,...)           generic_array_set(&dst, &val, pump__v3__basicCold__t_plugFlowPipe2_vol__b_dynBal_Medium_ThermodynamicState_copy_p, sizeof(pump__v3__basicCold__t_plugFlowPipe2_vol__b_dynBal_Medium_ThermodynamicState), __VA_ARGS__)

typedef pump__v3__basicCold__t_SenTempIn__cold_Medium_ThermodynamicState pump__v3__basicCold__t_plugFlowPipe__heat_Medium_ThermodynamicState;
extern struct record_description pump__v3__basicCold__t_plugFlowPipe__heat_Medium_ThermodynamicState__desc;

void pump__v3__basicCold__t_plugFlowPipe__heat_Medium_ThermodynamicState_construct_p(threadData_t *threadData, void* v_ths );
#define pump__v3__basicCold__t_plugFlowPipe__heat_Medium_ThermodynamicState_construct(td, ths ) pump__v3__basicCold__t_plugFlowPipe__heat_Medium_ThermodynamicState_construct_p(td, &ths )
void pump__v3__basicCold__t_plugFlowPipe__heat_Medium_ThermodynamicState_copy_p(void* v_src, void* v_dst);
#define pump__v3__basicCold__t_plugFlowPipe__heat_Medium_ThermodynamicState_copy(src,dst) pump__v3__basicCold__t_plugFlowPipe__heat_Medium_ThermodynamicState_copy_p(&src, &dst)


void pump__v3__basicCold__t_plugFlowPipe__heat_Medium_ThermodynamicState_wrap_vars_p(threadData_t *threadData , void* v_dst , modelica_real in_p, modelica_real in_T);
#define pump__v3__basicCold__t_plugFlowPipe__heat_Medium_ThermodynamicState_wrap_vars(td, dst , in_p, in_T) pump__v3__basicCold__t_plugFlowPipe__heat_Medium_ThermodynamicState_wrap_vars_p(td, &dst , in_p, in_T)

// This function is not needed anymore. If you want to know how a record
// is 'assigned to' in simulation context see assignRhsExpToRecordCrefSimContext and
// splitRecordAssignmentToMemberAssignments (simCode). Basically the record is
// split up assignments generated for each member individually.
// void pump__v3__basicCold__t_plugFlowPipe__heat_Medium_ThermodynamicState_copy_to_vars_p(void* v_src , modelica_real* in_p, modelica_real* in_T);
// #define pump__v3__basicCold__t_plugFlowPipe__heat_Medium_ThermodynamicState_copy_to_vars(src,...) pump__v3__basicCold__t_plugFlowPipe__heat_Medium_ThermodynamicState_copy_to_vars_p(&src, __VA_ARGS__)

typedef base_array_t pump__v3__basicCold__t_plugFlowPipe__heat_Medium_ThermodynamicState_array;
#define alloc_pump__v3__basicCold__t_plugFlowPipe__heat_Medium_ThermodynamicState_array(dst,ndims,...) generic_array_create(NULL, dst, pump__v3__basicCold__t_plugFlowPipe__heat_Medium_ThermodynamicState_construct_p, ndims, sizeof(pump__v3__basicCold__t_plugFlowPipe__heat_Medium_ThermodynamicState), __VA_ARGS__)
#define pump__v3__basicCold__t_plugFlowPipe__heat_Medium_ThermodynamicState_array_copy_data(src,dst)   generic_array_copy_data(src, &dst, pump__v3__basicCold__t_plugFlowPipe__heat_Medium_ThermodynamicState_copy_p, sizeof(pump__v3__basicCold__t_plugFlowPipe__heat_Medium_ThermodynamicState))
#define pump__v3__basicCold__t_plugFlowPipe__heat_Medium_ThermodynamicState_array_alloc_copy(src,dst)  generic_array_alloc_copy(src, &dst, pump__v3__basicCold__t_plugFlowPipe__heat_Medium_ThermodynamicState_copy_p, sizeof(pump__v3__basicCold__t_plugFlowPipe__heat_Medium_ThermodynamicState))
#define pump__v3__basicCold__t_plugFlowPipe__heat_Medium_ThermodynamicState_array_get(src,ndims,...)   (*(pump__v3__basicCold__t_plugFlowPipe__heat_Medium_ThermodynamicState*)(generic_array_get(&src, sizeof(pump__v3__basicCold__t_plugFlowPipe__heat_Medium_ThermodynamicState), __VA_ARGS__)))
#define pump__v3__basicCold__t_plugFlowPipe__heat_Medium_ThermodynamicState_set(dst,val,...)           generic_array_set(&dst, &val, pump__v3__basicCold__t_plugFlowPipe__heat_Medium_ThermodynamicState_copy_p, sizeof(pump__v3__basicCold__t_plugFlowPipe__heat_Medium_ThermodynamicState), __VA_ARGS__)

typedef pump__v3__basicCold__t_SenTempIn__cold_Medium_ThermodynamicState pump__v3__basicCold__t_plugFlowPipe__heat_del_Medium_ThermodynamicState;
extern struct record_description pump__v3__basicCold__t_plugFlowPipe__heat_del_Medium_ThermodynamicState__desc;

void pump__v3__basicCold__t_plugFlowPipe__heat_del_Medium_ThermodynamicState_construct_p(threadData_t *threadData, void* v_ths );
#define pump__v3__basicCold__t_plugFlowPipe__heat_del_Medium_ThermodynamicState_construct(td, ths ) pump__v3__basicCold__t_plugFlowPipe__heat_del_Medium_ThermodynamicState_construct_p(td, &ths )
void pump__v3__basicCold__t_plugFlowPipe__heat_del_Medium_ThermodynamicState_copy_p(void* v_src, void* v_dst);
#define pump__v3__basicCold__t_plugFlowPipe__heat_del_Medium_ThermodynamicState_copy(src,dst) pump__v3__basicCold__t_plugFlowPipe__heat_del_Medium_ThermodynamicState_copy_p(&src, &dst)


void pump__v3__basicCold__t_plugFlowPipe__heat_del_Medium_ThermodynamicState_wrap_vars_p(threadData_t *threadData , void* v_dst , modelica_real in_p, modelica_real in_T);
#define pump__v3__basicCold__t_plugFlowPipe__heat_del_Medium_ThermodynamicState_wrap_vars(td, dst , in_p, in_T) pump__v3__basicCold__t_plugFlowPipe__heat_del_Medium_ThermodynamicState_wrap_vars_p(td, &dst , in_p, in_T)

// This function is not needed anymore. If you want to know how a record
// is 'assigned to' in simulation context see assignRhsExpToRecordCrefSimContext and
// splitRecordAssignmentToMemberAssignments (simCode). Basically the record is
// split up assignments generated for each member individually.
// void pump__v3__basicCold__t_plugFlowPipe__heat_del_Medium_ThermodynamicState_copy_to_vars_p(void* v_src , modelica_real* in_p, modelica_real* in_T);
// #define pump__v3__basicCold__t_plugFlowPipe__heat_del_Medium_ThermodynamicState_copy_to_vars(src,...) pump__v3__basicCold__t_plugFlowPipe__heat_del_Medium_ThermodynamicState_copy_to_vars_p(&src, __VA_ARGS__)

typedef base_array_t pump__v3__basicCold__t_plugFlowPipe__heat_del_Medium_ThermodynamicState_array;
#define alloc_pump__v3__basicCold__t_plugFlowPipe__heat_del_Medium_ThermodynamicState_array(dst,ndims,...) generic_array_create(NULL, dst, pump__v3__basicCold__t_plugFlowPipe__heat_del_Medium_ThermodynamicState_construct_p, ndims, sizeof(pump__v3__basicCold__t_plugFlowPipe__heat_del_Medium_ThermodynamicState), __VA_ARGS__)
#define pump__v3__basicCold__t_plugFlowPipe__heat_del_Medium_ThermodynamicState_array_copy_data(src,dst)   generic_array_copy_data(src, &dst, pump__v3__basicCold__t_plugFlowPipe__heat_del_Medium_ThermodynamicState_copy_p, sizeof(pump__v3__basicCold__t_plugFlowPipe__heat_del_Medium_ThermodynamicState))
#define pump__v3__basicCold__t_plugFlowPipe__heat_del_Medium_ThermodynamicState_array_alloc_copy(src,dst)  generic_array_alloc_copy(src, &dst, pump__v3__basicCold__t_plugFlowPipe__heat_del_Medium_ThermodynamicState_copy_p, sizeof(pump__v3__basicCold__t_plugFlowPipe__heat_del_Medium_ThermodynamicState))
#define pump__v3__basicCold__t_plugFlowPipe__heat_del_Medium_ThermodynamicState_array_get(src,ndims,...)   (*(pump__v3__basicCold__t_plugFlowPipe__heat_del_Medium_ThermodynamicState*)(generic_array_get(&src, sizeof(pump__v3__basicCold__t_plugFlowPipe__heat_del_Medium_ThermodynamicState), __VA_ARGS__)))
#define pump__v3__basicCold__t_plugFlowPipe__heat_del_Medium_ThermodynamicState_set(dst,val,...)           generic_array_set(&dst, &val, pump__v3__basicCold__t_plugFlowPipe__heat_del_Medium_ThermodynamicState_copy_p, sizeof(pump__v3__basicCold__t_plugFlowPipe__heat_del_Medium_ThermodynamicState), __VA_ARGS__)

typedef pump__v3__basicCold__t_SenTempIn__cold_Medium_ThermodynamicState pump__v3__basicCold__t_plugFlowPipe__heat_heaLos__a_Medium_ThermodynamicState;
extern struct record_description pump__v3__basicCold__t_plugFlowPipe__heat_heaLos__a_Medium_ThermodynamicState__desc;

void pump__v3__basicCold__t_plugFlowPipe__heat_heaLos__a_Medium_ThermodynamicState_construct_p(threadData_t *threadData, void* v_ths );
#define pump__v3__basicCold__t_plugFlowPipe__heat_heaLos__a_Medium_ThermodynamicState_construct(td, ths ) pump__v3__basicCold__t_plugFlowPipe__heat_heaLos__a_Medium_ThermodynamicState_construct_p(td, &ths )
void pump__v3__basicCold__t_plugFlowPipe__heat_heaLos__a_Medium_ThermodynamicState_copy_p(void* v_src, void* v_dst);
#define pump__v3__basicCold__t_plugFlowPipe__heat_heaLos__a_Medium_ThermodynamicState_copy(src,dst) pump__v3__basicCold__t_plugFlowPipe__heat_heaLos__a_Medium_ThermodynamicState_copy_p(&src, &dst)


void pump__v3__basicCold__t_plugFlowPipe__heat_heaLos__a_Medium_ThermodynamicState_wrap_vars_p(threadData_t *threadData , void* v_dst , modelica_real in_p, modelica_real in_T);
#define pump__v3__basicCold__t_plugFlowPipe__heat_heaLos__a_Medium_ThermodynamicState_wrap_vars(td, dst , in_p, in_T) pump__v3__basicCold__t_plugFlowPipe__heat_heaLos__a_Medium_ThermodynamicState_wrap_vars_p(td, &dst , in_p, in_T)

// This function is not needed anymore. If you want to know how a record
// is 'assigned to' in simulation context see assignRhsExpToRecordCrefSimContext and
// splitRecordAssignmentToMemberAssignments (simCode). Basically the record is
// split up assignments generated for each member individually.
// void pump__v3__basicCold__t_plugFlowPipe__heat_heaLos__a_Medium_ThermodynamicState_copy_to_vars_p(void* v_src , modelica_real* in_p, modelica_real* in_T);
// #define pump__v3__basicCold__t_plugFlowPipe__heat_heaLos__a_Medium_ThermodynamicState_copy_to_vars(src,...) pump__v3__basicCold__t_plugFlowPipe__heat_heaLos__a_Medium_ThermodynamicState_copy_to_vars_p(&src, __VA_ARGS__)

typedef base_array_t pump__v3__basicCold__t_plugFlowPipe__heat_heaLos__a_Medium_ThermodynamicState_array;
#define alloc_pump__v3__basicCold__t_plugFlowPipe__heat_heaLos__a_Medium_ThermodynamicState_array(dst,ndims,...) generic_array_create(NULL, dst, pump__v3__basicCold__t_plugFlowPipe__heat_heaLos__a_Medium_ThermodynamicState_construct_p, ndims, sizeof(pump__v3__basicCold__t_plugFlowPipe__heat_heaLos__a_Medium_ThermodynamicState), __VA_ARGS__)
#define pump__v3__basicCold__t_plugFlowPipe__heat_heaLos__a_Medium_ThermodynamicState_array_copy_data(src,dst)   generic_array_copy_data(src, &dst, pump__v3__basicCold__t_plugFlowPipe__heat_heaLos__a_Medium_ThermodynamicState_copy_p, sizeof(pump__v3__basicCold__t_plugFlowPipe__heat_heaLos__a_Medium_ThermodynamicState))
#define pump__v3__basicCold__t_plugFlowPipe__heat_heaLos__a_Medium_ThermodynamicState_array_alloc_copy(src,dst)  generic_array_alloc_copy(src, &dst, pump__v3__basicCold__t_plugFlowPipe__heat_heaLos__a_Medium_ThermodynamicState_copy_p, sizeof(pump__v3__basicCold__t_plugFlowPipe__heat_heaLos__a_Medium_ThermodynamicState))
#define pump__v3__basicCold__t_plugFlowPipe__heat_heaLos__a_Medium_ThermodynamicState_array_get(src,ndims,...)   (*(pump__v3__basicCold__t_plugFlowPipe__heat_heaLos__a_Medium_ThermodynamicState*)(generic_array_get(&src, sizeof(pump__v3__basicCold__t_plugFlowPipe__heat_heaLos__a_Medium_ThermodynamicState), __VA_ARGS__)))
#define pump__v3__basicCold__t_plugFlowPipe__heat_heaLos__a_Medium_ThermodynamicState_set(dst,val,...)           generic_array_set(&dst, &val, pump__v3__basicCold__t_plugFlowPipe__heat_heaLos__a_Medium_ThermodynamicState_copy_p, sizeof(pump__v3__basicCold__t_plugFlowPipe__heat_heaLos__a_Medium_ThermodynamicState), __VA_ARGS__)

typedef pump__v3__basicCold__t_SenTempIn__cold_Medium_ThermodynamicState pump__v3__basicCold__t_plugFlowPipe__heat_heaLos__b_Medium_ThermodynamicState;
extern struct record_description pump__v3__basicCold__t_plugFlowPipe__heat_heaLos__b_Medium_ThermodynamicState__desc;

void pump__v3__basicCold__t_plugFlowPipe__heat_heaLos__b_Medium_ThermodynamicState_construct_p(threadData_t *threadData, void* v_ths );
#define pump__v3__basicCold__t_plugFlowPipe__heat_heaLos__b_Medium_ThermodynamicState_construct(td, ths ) pump__v3__basicCold__t_plugFlowPipe__heat_heaLos__b_Medium_ThermodynamicState_construct_p(td, &ths )
void pump__v3__basicCold__t_plugFlowPipe__heat_heaLos__b_Medium_ThermodynamicState_copy_p(void* v_src, void* v_dst);
#define pump__v3__basicCold__t_plugFlowPipe__heat_heaLos__b_Medium_ThermodynamicState_copy(src,dst) pump__v3__basicCold__t_plugFlowPipe__heat_heaLos__b_Medium_ThermodynamicState_copy_p(&src, &dst)


void pump__v3__basicCold__t_plugFlowPipe__heat_heaLos__b_Medium_ThermodynamicState_wrap_vars_p(threadData_t *threadData , void* v_dst , modelica_real in_p, modelica_real in_T);
#define pump__v3__basicCold__t_plugFlowPipe__heat_heaLos__b_Medium_ThermodynamicState_wrap_vars(td, dst , in_p, in_T) pump__v3__basicCold__t_plugFlowPipe__heat_heaLos__b_Medium_ThermodynamicState_wrap_vars_p(td, &dst , in_p, in_T)

// This function is not needed anymore. If you want to know how a record
// is 'assigned to' in simulation context see assignRhsExpToRecordCrefSimContext and
// splitRecordAssignmentToMemberAssignments (simCode). Basically the record is
// split up assignments generated for each member individually.
// void pump__v3__basicCold__t_plugFlowPipe__heat_heaLos__b_Medium_ThermodynamicState_copy_to_vars_p(void* v_src , modelica_real* in_p, modelica_real* in_T);
// #define pump__v3__basicCold__t_plugFlowPipe__heat_heaLos__b_Medium_ThermodynamicState_copy_to_vars(src,...) pump__v3__basicCold__t_plugFlowPipe__heat_heaLos__b_Medium_ThermodynamicState_copy_to_vars_p(&src, __VA_ARGS__)

typedef base_array_t pump__v3__basicCold__t_plugFlowPipe__heat_heaLos__b_Medium_ThermodynamicState_array;
#define alloc_pump__v3__basicCold__t_plugFlowPipe__heat_heaLos__b_Medium_ThermodynamicState_array(dst,ndims,...) generic_array_create(NULL, dst, pump__v3__basicCold__t_plugFlowPipe__heat_heaLos__b_Medium_ThermodynamicState_construct_p, ndims, sizeof(pump__v3__basicCold__t_plugFlowPipe__heat_heaLos__b_Medium_ThermodynamicState), __VA_ARGS__)
#define pump__v3__basicCold__t_plugFlowPipe__heat_heaLos__b_Medium_ThermodynamicState_array_copy_data(src,dst)   generic_array_copy_data(src, &dst, pump__v3__basicCold__t_plugFlowPipe__heat_heaLos__b_Medium_ThermodynamicState_copy_p, sizeof(pump__v3__basicCold__t_plugFlowPipe__heat_heaLos__b_Medium_ThermodynamicState))
#define pump__v3__basicCold__t_plugFlowPipe__heat_heaLos__b_Medium_ThermodynamicState_array_alloc_copy(src,dst)  generic_array_alloc_copy(src, &dst, pump__v3__basicCold__t_plugFlowPipe__heat_heaLos__b_Medium_ThermodynamicState_copy_p, sizeof(pump__v3__basicCold__t_plugFlowPipe__heat_heaLos__b_Medium_ThermodynamicState))
#define pump__v3__basicCold__t_plugFlowPipe__heat_heaLos__b_Medium_ThermodynamicState_array_get(src,ndims,...)   (*(pump__v3__basicCold__t_plugFlowPipe__heat_heaLos__b_Medium_ThermodynamicState*)(generic_array_get(&src, sizeof(pump__v3__basicCold__t_plugFlowPipe__heat_heaLos__b_Medium_ThermodynamicState), __VA_ARGS__)))
#define pump__v3__basicCold__t_plugFlowPipe__heat_heaLos__b_Medium_ThermodynamicState_set(dst,val,...)           generic_array_set(&dst, &val, pump__v3__basicCold__t_plugFlowPipe__heat_heaLos__b_Medium_ThermodynamicState_copy_p, sizeof(pump__v3__basicCold__t_plugFlowPipe__heat_heaLos__b_Medium_ThermodynamicState), __VA_ARGS__)

typedef pump__v3__basicCold__t_SenTempIn__cold_Medium_ThermodynamicState pump__v3__basicCold__t_plugFlowPipe__heat_res_Medium_ThermodynamicState;
extern struct record_description pump__v3__basicCold__t_plugFlowPipe__heat_res_Medium_ThermodynamicState__desc;

void pump__v3__basicCold__t_plugFlowPipe__heat_res_Medium_ThermodynamicState_construct_p(threadData_t *threadData, void* v_ths );
#define pump__v3__basicCold__t_plugFlowPipe__heat_res_Medium_ThermodynamicState_construct(td, ths ) pump__v3__basicCold__t_plugFlowPipe__heat_res_Medium_ThermodynamicState_construct_p(td, &ths )
void pump__v3__basicCold__t_plugFlowPipe__heat_res_Medium_ThermodynamicState_copy_p(void* v_src, void* v_dst);
#define pump__v3__basicCold__t_plugFlowPipe__heat_res_Medium_ThermodynamicState_copy(src,dst) pump__v3__basicCold__t_plugFlowPipe__heat_res_Medium_ThermodynamicState_copy_p(&src, &dst)


void pump__v3__basicCold__t_plugFlowPipe__heat_res_Medium_ThermodynamicState_wrap_vars_p(threadData_t *threadData , void* v_dst , modelica_real in_p, modelica_real in_T);
#define pump__v3__basicCold__t_plugFlowPipe__heat_res_Medium_ThermodynamicState_wrap_vars(td, dst , in_p, in_T) pump__v3__basicCold__t_plugFlowPipe__heat_res_Medium_ThermodynamicState_wrap_vars_p(td, &dst , in_p, in_T)

// This function is not needed anymore. If you want to know how a record
// is 'assigned to' in simulation context see assignRhsExpToRecordCrefSimContext and
// splitRecordAssignmentToMemberAssignments (simCode). Basically the record is
// split up assignments generated for each member individually.
// void pump__v3__basicCold__t_plugFlowPipe__heat_res_Medium_ThermodynamicState_copy_to_vars_p(void* v_src , modelica_real* in_p, modelica_real* in_T);
// #define pump__v3__basicCold__t_plugFlowPipe__heat_res_Medium_ThermodynamicState_copy_to_vars(src,...) pump__v3__basicCold__t_plugFlowPipe__heat_res_Medium_ThermodynamicState_copy_to_vars_p(&src, __VA_ARGS__)

typedef base_array_t pump__v3__basicCold__t_plugFlowPipe__heat_res_Medium_ThermodynamicState_array;
#define alloc_pump__v3__basicCold__t_plugFlowPipe__heat_res_Medium_ThermodynamicState_array(dst,ndims,...) generic_array_create(NULL, dst, pump__v3__basicCold__t_plugFlowPipe__heat_res_Medium_ThermodynamicState_construct_p, ndims, sizeof(pump__v3__basicCold__t_plugFlowPipe__heat_res_Medium_ThermodynamicState), __VA_ARGS__)
#define pump__v3__basicCold__t_plugFlowPipe__heat_res_Medium_ThermodynamicState_array_copy_data(src,dst)   generic_array_copy_data(src, &dst, pump__v3__basicCold__t_plugFlowPipe__heat_res_Medium_ThermodynamicState_copy_p, sizeof(pump__v3__basicCold__t_plugFlowPipe__heat_res_Medium_ThermodynamicState))
#define pump__v3__basicCold__t_plugFlowPipe__heat_res_Medium_ThermodynamicState_array_alloc_copy(src,dst)  generic_array_alloc_copy(src, &dst, pump__v3__basicCold__t_plugFlowPipe__heat_res_Medium_ThermodynamicState_copy_p, sizeof(pump__v3__basicCold__t_plugFlowPipe__heat_res_Medium_ThermodynamicState))
#define pump__v3__basicCold__t_plugFlowPipe__heat_res_Medium_ThermodynamicState_array_get(src,ndims,...)   (*(pump__v3__basicCold__t_plugFlowPipe__heat_res_Medium_ThermodynamicState*)(generic_array_get(&src, sizeof(pump__v3__basicCold__t_plugFlowPipe__heat_res_Medium_ThermodynamicState), __VA_ARGS__)))
#define pump__v3__basicCold__t_plugFlowPipe__heat_res_Medium_ThermodynamicState_set(dst,val,...)           generic_array_set(&dst, &val, pump__v3__basicCold__t_plugFlowPipe__heat_res_Medium_ThermodynamicState_copy_p, sizeof(pump__v3__basicCold__t_plugFlowPipe__heat_res_Medium_ThermodynamicState), __VA_ARGS__)

typedef pump__v3__basicCold__t_SenTempIn__cold_Medium_ThermodynamicState pump__v3__basicCold__t_plugFlowPipe__heat_vol__a_Medium_ThermodynamicState;
extern struct record_description pump__v3__basicCold__t_plugFlowPipe__heat_vol__a_Medium_ThermodynamicState__desc;

void pump__v3__basicCold__t_plugFlowPipe__heat_vol__a_Medium_ThermodynamicState_construct_p(threadData_t *threadData, void* v_ths );
#define pump__v3__basicCold__t_plugFlowPipe__heat_vol__a_Medium_ThermodynamicState_construct(td, ths ) pump__v3__basicCold__t_plugFlowPipe__heat_vol__a_Medium_ThermodynamicState_construct_p(td, &ths )
void pump__v3__basicCold__t_plugFlowPipe__heat_vol__a_Medium_ThermodynamicState_copy_p(void* v_src, void* v_dst);
#define pump__v3__basicCold__t_plugFlowPipe__heat_vol__a_Medium_ThermodynamicState_copy(src,dst) pump__v3__basicCold__t_plugFlowPipe__heat_vol__a_Medium_ThermodynamicState_copy_p(&src, &dst)


void pump__v3__basicCold__t_plugFlowPipe__heat_vol__a_Medium_ThermodynamicState_wrap_vars_p(threadData_t *threadData , void* v_dst , modelica_real in_p, modelica_real in_T);
#define pump__v3__basicCold__t_plugFlowPipe__heat_vol__a_Medium_ThermodynamicState_wrap_vars(td, dst , in_p, in_T) pump__v3__basicCold__t_plugFlowPipe__heat_vol__a_Medium_ThermodynamicState_wrap_vars_p(td, &dst , in_p, in_T)

// This function is not needed anymore. If you want to know how a record
// is 'assigned to' in simulation context see assignRhsExpToRecordCrefSimContext and
// splitRecordAssignmentToMemberAssignments (simCode). Basically the record is
// split up assignments generated for each member individually.
// void pump__v3__basicCold__t_plugFlowPipe__heat_vol__a_Medium_ThermodynamicState_copy_to_vars_p(void* v_src , modelica_real* in_p, modelica_real* in_T);
// #define pump__v3__basicCold__t_plugFlowPipe__heat_vol__a_Medium_ThermodynamicState_copy_to_vars(src,...) pump__v3__basicCold__t_plugFlowPipe__heat_vol__a_Medium_ThermodynamicState_copy_to_vars_p(&src, __VA_ARGS__)

typedef base_array_t pump__v3__basicCold__t_plugFlowPipe__heat_vol__a_Medium_ThermodynamicState_array;
#define alloc_pump__v3__basicCold__t_plugFlowPipe__heat_vol__a_Medium_ThermodynamicState_array(dst,ndims,...) generic_array_create(NULL, dst, pump__v3__basicCold__t_plugFlowPipe__heat_vol__a_Medium_ThermodynamicState_construct_p, ndims, sizeof(pump__v3__basicCold__t_plugFlowPipe__heat_vol__a_Medium_ThermodynamicState), __VA_ARGS__)
#define pump__v3__basicCold__t_plugFlowPipe__heat_vol__a_Medium_ThermodynamicState_array_copy_data(src,dst)   generic_array_copy_data(src, &dst, pump__v3__basicCold__t_plugFlowPipe__heat_vol__a_Medium_ThermodynamicState_copy_p, sizeof(pump__v3__basicCold__t_plugFlowPipe__heat_vol__a_Medium_ThermodynamicState))
#define pump__v3__basicCold__t_plugFlowPipe__heat_vol__a_Medium_ThermodynamicState_array_alloc_copy(src,dst)  generic_array_alloc_copy(src, &dst, pump__v3__basicCold__t_plugFlowPipe__heat_vol__a_Medium_ThermodynamicState_copy_p, sizeof(pump__v3__basicCold__t_plugFlowPipe__heat_vol__a_Medium_ThermodynamicState))
#define pump__v3__basicCold__t_plugFlowPipe__heat_vol__a_Medium_ThermodynamicState_array_get(src,ndims,...)   (*(pump__v3__basicCold__t_plugFlowPipe__heat_vol__a_Medium_ThermodynamicState*)(generic_array_get(&src, sizeof(pump__v3__basicCold__t_plugFlowPipe__heat_vol__a_Medium_ThermodynamicState), __VA_ARGS__)))
#define pump__v3__basicCold__t_plugFlowPipe__heat_vol__a_Medium_ThermodynamicState_set(dst,val,...)           generic_array_set(&dst, &val, pump__v3__basicCold__t_plugFlowPipe__heat_vol__a_Medium_ThermodynamicState_copy_p, sizeof(pump__v3__basicCold__t_plugFlowPipe__heat_vol__a_Medium_ThermodynamicState), __VA_ARGS__)

typedef pump__v3__basicCold__t_SenTempIn__cold_Medium_ThermodynamicState pump__v3__basicCold__t_plugFlowPipe__heat_vol__a_dynBal_Medium_ThermodynamicState;
extern struct record_description pump__v3__basicCold__t_plugFlowPipe__heat_vol__a_dynBal_Medium_ThermodynamicState__desc;

void pump__v3__basicCold__t_plugFlowPipe__heat_vol__a_dynBal_Medium_ThermodynamicState_construct_p(threadData_t *threadData, void* v_ths );
#define pump__v3__basicCold__t_plugFlowPipe__heat_vol__a_dynBal_Medium_ThermodynamicState_construct(td, ths ) pump__v3__basicCold__t_plugFlowPipe__heat_vol__a_dynBal_Medium_ThermodynamicState_construct_p(td, &ths )
void pump__v3__basicCold__t_plugFlowPipe__heat_vol__a_dynBal_Medium_ThermodynamicState_copy_p(void* v_src, void* v_dst);
#define pump__v3__basicCold__t_plugFlowPipe__heat_vol__a_dynBal_Medium_ThermodynamicState_copy(src,dst) pump__v3__basicCold__t_plugFlowPipe__heat_vol__a_dynBal_Medium_ThermodynamicState_copy_p(&src, &dst)


void pump__v3__basicCold__t_plugFlowPipe__heat_vol__a_dynBal_Medium_ThermodynamicState_wrap_vars_p(threadData_t *threadData , void* v_dst , modelica_real in_p, modelica_real in_T);
#define pump__v3__basicCold__t_plugFlowPipe__heat_vol__a_dynBal_Medium_ThermodynamicState_wrap_vars(td, dst , in_p, in_T) pump__v3__basicCold__t_plugFlowPipe__heat_vol__a_dynBal_Medium_ThermodynamicState_wrap_vars_p(td, &dst , in_p, in_T)

// This function is not needed anymore. If you want to know how a record
// is 'assigned to' in simulation context see assignRhsExpToRecordCrefSimContext and
// splitRecordAssignmentToMemberAssignments (simCode). Basically the record is
// split up assignments generated for each member individually.
// void pump__v3__basicCold__t_plugFlowPipe__heat_vol__a_dynBal_Medium_ThermodynamicState_copy_to_vars_p(void* v_src , modelica_real* in_p, modelica_real* in_T);
// #define pump__v3__basicCold__t_plugFlowPipe__heat_vol__a_dynBal_Medium_ThermodynamicState_copy_to_vars(src,...) pump__v3__basicCold__t_plugFlowPipe__heat_vol__a_dynBal_Medium_ThermodynamicState_copy_to_vars_p(&src, __VA_ARGS__)

typedef base_array_t pump__v3__basicCold__t_plugFlowPipe__heat_vol__a_dynBal_Medium_ThermodynamicState_array;
#define alloc_pump__v3__basicCold__t_plugFlowPipe__heat_vol__a_dynBal_Medium_ThermodynamicState_array(dst,ndims,...) generic_array_create(NULL, dst, pump__v3__basicCold__t_plugFlowPipe__heat_vol__a_dynBal_Medium_ThermodynamicState_construct_p, ndims, sizeof(pump__v3__basicCold__t_plugFlowPipe__heat_vol__a_dynBal_Medium_ThermodynamicState), __VA_ARGS__)
#define pump__v3__basicCold__t_plugFlowPipe__heat_vol__a_dynBal_Medium_ThermodynamicState_array_copy_data(src,dst)   generic_array_copy_data(src, &dst, pump__v3__basicCold__t_plugFlowPipe__heat_vol__a_dynBal_Medium_ThermodynamicState_copy_p, sizeof(pump__v3__basicCold__t_plugFlowPipe__heat_vol__a_dynBal_Medium_ThermodynamicState))
#define pump__v3__basicCold__t_plugFlowPipe__heat_vol__a_dynBal_Medium_ThermodynamicState_array_alloc_copy(src,dst)  generic_array_alloc_copy(src, &dst, pump__v3__basicCold__t_plugFlowPipe__heat_vol__a_dynBal_Medium_ThermodynamicState_copy_p, sizeof(pump__v3__basicCold__t_plugFlowPipe__heat_vol__a_dynBal_Medium_ThermodynamicState))
#define pump__v3__basicCold__t_plugFlowPipe__heat_vol__a_dynBal_Medium_ThermodynamicState_array_get(src,ndims,...)   (*(pump__v3__basicCold__t_plugFlowPipe__heat_vol__a_dynBal_Medium_ThermodynamicState*)(generic_array_get(&src, sizeof(pump__v3__basicCold__t_plugFlowPipe__heat_vol__a_dynBal_Medium_ThermodynamicState), __VA_ARGS__)))
#define pump__v3__basicCold__t_plugFlowPipe__heat_vol__a_dynBal_Medium_ThermodynamicState_set(dst,val,...)           generic_array_set(&dst, &val, pump__v3__basicCold__t_plugFlowPipe__heat_vol__a_dynBal_Medium_ThermodynamicState_copy_p, sizeof(pump__v3__basicCold__t_plugFlowPipe__heat_vol__a_dynBal_Medium_ThermodynamicState), __VA_ARGS__)

typedef pump__v3__basicCold__t_SenTempIn__cold_Medium_ThermodynamicState pump__v3__basicCold__t_plugFlowPipe__heat_vol__b_Medium_ThermodynamicState;
extern struct record_description pump__v3__basicCold__t_plugFlowPipe__heat_vol__b_Medium_ThermodynamicState__desc;

void pump__v3__basicCold__t_plugFlowPipe__heat_vol__b_Medium_ThermodynamicState_construct_p(threadData_t *threadData, void* v_ths );
#define pump__v3__basicCold__t_plugFlowPipe__heat_vol__b_Medium_ThermodynamicState_construct(td, ths ) pump__v3__basicCold__t_plugFlowPipe__heat_vol__b_Medium_ThermodynamicState_construct_p(td, &ths )
void pump__v3__basicCold__t_plugFlowPipe__heat_vol__b_Medium_ThermodynamicState_copy_p(void* v_src, void* v_dst);
#define pump__v3__basicCold__t_plugFlowPipe__heat_vol__b_Medium_ThermodynamicState_copy(src,dst) pump__v3__basicCold__t_plugFlowPipe__heat_vol__b_Medium_ThermodynamicState_copy_p(&src, &dst)


void pump__v3__basicCold__t_plugFlowPipe__heat_vol__b_Medium_ThermodynamicState_wrap_vars_p(threadData_t *threadData , void* v_dst , modelica_real in_p, modelica_real in_T);
#define pump__v3__basicCold__t_plugFlowPipe__heat_vol__b_Medium_ThermodynamicState_wrap_vars(td, dst , in_p, in_T) pump__v3__basicCold__t_plugFlowPipe__heat_vol__b_Medium_ThermodynamicState_wrap_vars_p(td, &dst , in_p, in_T)

// This function is not needed anymore. If you want to know how a record
// is 'assigned to' in simulation context see assignRhsExpToRecordCrefSimContext and
// splitRecordAssignmentToMemberAssignments (simCode). Basically the record is
// split up assignments generated for each member individually.
// void pump__v3__basicCold__t_plugFlowPipe__heat_vol__b_Medium_ThermodynamicState_copy_to_vars_p(void* v_src , modelica_real* in_p, modelica_real* in_T);
// #define pump__v3__basicCold__t_plugFlowPipe__heat_vol__b_Medium_ThermodynamicState_copy_to_vars(src,...) pump__v3__basicCold__t_plugFlowPipe__heat_vol__b_Medium_ThermodynamicState_copy_to_vars_p(&src, __VA_ARGS__)

typedef base_array_t pump__v3__basicCold__t_plugFlowPipe__heat_vol__b_Medium_ThermodynamicState_array;
#define alloc_pump__v3__basicCold__t_plugFlowPipe__heat_vol__b_Medium_ThermodynamicState_array(dst,ndims,...) generic_array_create(NULL, dst, pump__v3__basicCold__t_plugFlowPipe__heat_vol__b_Medium_ThermodynamicState_construct_p, ndims, sizeof(pump__v3__basicCold__t_plugFlowPipe__heat_vol__b_Medium_ThermodynamicState), __VA_ARGS__)
#define pump__v3__basicCold__t_plugFlowPipe__heat_vol__b_Medium_ThermodynamicState_array_copy_data(src,dst)   generic_array_copy_data(src, &dst, pump__v3__basicCold__t_plugFlowPipe__heat_vol__b_Medium_ThermodynamicState_copy_p, sizeof(pump__v3__basicCold__t_plugFlowPipe__heat_vol__b_Medium_ThermodynamicState))
#define pump__v3__basicCold__t_plugFlowPipe__heat_vol__b_Medium_ThermodynamicState_array_alloc_copy(src,dst)  generic_array_alloc_copy(src, &dst, pump__v3__basicCold__t_plugFlowPipe__heat_vol__b_Medium_ThermodynamicState_copy_p, sizeof(pump__v3__basicCold__t_plugFlowPipe__heat_vol__b_Medium_ThermodynamicState))
#define pump__v3__basicCold__t_plugFlowPipe__heat_vol__b_Medium_ThermodynamicState_array_get(src,ndims,...)   (*(pump__v3__basicCold__t_plugFlowPipe__heat_vol__b_Medium_ThermodynamicState*)(generic_array_get(&src, sizeof(pump__v3__basicCold__t_plugFlowPipe__heat_vol__b_Medium_ThermodynamicState), __VA_ARGS__)))
#define pump__v3__basicCold__t_plugFlowPipe__heat_vol__b_Medium_ThermodynamicState_set(dst,val,...)           generic_array_set(&dst, &val, pump__v3__basicCold__t_plugFlowPipe__heat_vol__b_Medium_ThermodynamicState_copy_p, sizeof(pump__v3__basicCold__t_plugFlowPipe__heat_vol__b_Medium_ThermodynamicState), __VA_ARGS__)

typedef pump__v3__basicCold__t_SenTempIn__cold_Medium_ThermodynamicState pump__v3__basicCold__t_plugFlowPipe__heat_vol__b_dynBal_Medium_ThermodynamicState;
extern struct record_description pump__v3__basicCold__t_plugFlowPipe__heat_vol__b_dynBal_Medium_ThermodynamicState__desc;

void pump__v3__basicCold__t_plugFlowPipe__heat_vol__b_dynBal_Medium_ThermodynamicState_construct_p(threadData_t *threadData, void* v_ths );
#define pump__v3__basicCold__t_plugFlowPipe__heat_vol__b_dynBal_Medium_ThermodynamicState_construct(td, ths ) pump__v3__basicCold__t_plugFlowPipe__heat_vol__b_dynBal_Medium_ThermodynamicState_construct_p(td, &ths )
void pump__v3__basicCold__t_plugFlowPipe__heat_vol__b_dynBal_Medium_ThermodynamicState_copy_p(void* v_src, void* v_dst);
#define pump__v3__basicCold__t_plugFlowPipe__heat_vol__b_dynBal_Medium_ThermodynamicState_copy(src,dst) pump__v3__basicCold__t_plugFlowPipe__heat_vol__b_dynBal_Medium_ThermodynamicState_copy_p(&src, &dst)


void pump__v3__basicCold__t_plugFlowPipe__heat_vol__b_dynBal_Medium_ThermodynamicState_wrap_vars_p(threadData_t *threadData , void* v_dst , modelica_real in_p, modelica_real in_T);
#define pump__v3__basicCold__t_plugFlowPipe__heat_vol__b_dynBal_Medium_ThermodynamicState_wrap_vars(td, dst , in_p, in_T) pump__v3__basicCold__t_plugFlowPipe__heat_vol__b_dynBal_Medium_ThermodynamicState_wrap_vars_p(td, &dst , in_p, in_T)

// This function is not needed anymore. If you want to know how a record
// is 'assigned to' in simulation context see assignRhsExpToRecordCrefSimContext and
// splitRecordAssignmentToMemberAssignments (simCode). Basically the record is
// split up assignments generated for each member individually.
// void pump__v3__basicCold__t_plugFlowPipe__heat_vol__b_dynBal_Medium_ThermodynamicState_copy_to_vars_p(void* v_src , modelica_real* in_p, modelica_real* in_T);
// #define pump__v3__basicCold__t_plugFlowPipe__heat_vol__b_dynBal_Medium_ThermodynamicState_copy_to_vars(src,...) pump__v3__basicCold__t_plugFlowPipe__heat_vol__b_dynBal_Medium_ThermodynamicState_copy_to_vars_p(&src, __VA_ARGS__)

typedef base_array_t pump__v3__basicCold__t_plugFlowPipe__heat_vol__b_dynBal_Medium_ThermodynamicState_array;
#define alloc_pump__v3__basicCold__t_plugFlowPipe__heat_vol__b_dynBal_Medium_ThermodynamicState_array(dst,ndims,...) generic_array_create(NULL, dst, pump__v3__basicCold__t_plugFlowPipe__heat_vol__b_dynBal_Medium_ThermodynamicState_construct_p, ndims, sizeof(pump__v3__basicCold__t_plugFlowPipe__heat_vol__b_dynBal_Medium_ThermodynamicState), __VA_ARGS__)
#define pump__v3__basicCold__t_plugFlowPipe__heat_vol__b_dynBal_Medium_ThermodynamicState_array_copy_data(src,dst)   generic_array_copy_data(src, &dst, pump__v3__basicCold__t_plugFlowPipe__heat_vol__b_dynBal_Medium_ThermodynamicState_copy_p, sizeof(pump__v3__basicCold__t_plugFlowPipe__heat_vol__b_dynBal_Medium_ThermodynamicState))
#define pump__v3__basicCold__t_plugFlowPipe__heat_vol__b_dynBal_Medium_ThermodynamicState_array_alloc_copy(src,dst)  generic_array_alloc_copy(src, &dst, pump__v3__basicCold__t_plugFlowPipe__heat_vol__b_dynBal_Medium_ThermodynamicState_copy_p, sizeof(pump__v3__basicCold__t_plugFlowPipe__heat_vol__b_dynBal_Medium_ThermodynamicState))
#define pump__v3__basicCold__t_plugFlowPipe__heat_vol__b_dynBal_Medium_ThermodynamicState_array_get(src,ndims,...)   (*(pump__v3__basicCold__t_plugFlowPipe__heat_vol__b_dynBal_Medium_ThermodynamicState*)(generic_array_get(&src, sizeof(pump__v3__basicCold__t_plugFlowPipe__heat_vol__b_dynBal_Medium_ThermodynamicState), __VA_ARGS__)))
#define pump__v3__basicCold__t_plugFlowPipe__heat_vol__b_dynBal_Medium_ThermodynamicState_set(dst,val,...)           generic_array_set(&dst, &val, pump__v3__basicCold__t_plugFlowPipe__heat_vol__b_dynBal_Medium_ThermodynamicState_copy_p, sizeof(pump__v3__basicCold__t_plugFlowPipe__heat_vol__b_dynBal_Medium_ThermodynamicState), __VA_ARGS__)

typedef pump__v3__basicCold__t_SenTempIn__cold_Medium_ThermodynamicState pump__v3__basicCold__t_pump_Medium_ThermodynamicState;
extern struct record_description pump__v3__basicCold__t_pump_Medium_ThermodynamicState__desc;

void pump__v3__basicCold__t_pump_Medium_ThermodynamicState_construct_p(threadData_t *threadData, void* v_ths );
#define pump__v3__basicCold__t_pump_Medium_ThermodynamicState_construct(td, ths ) pump__v3__basicCold__t_pump_Medium_ThermodynamicState_construct_p(td, &ths )
void pump__v3__basicCold__t_pump_Medium_ThermodynamicState_copy_p(void* v_src, void* v_dst);
#define pump__v3__basicCold__t_pump_Medium_ThermodynamicState_copy(src,dst) pump__v3__basicCold__t_pump_Medium_ThermodynamicState_copy_p(&src, &dst)


void pump__v3__basicCold__t_pump_Medium_ThermodynamicState_wrap_vars_p(threadData_t *threadData , void* v_dst , modelica_real in_p, modelica_real in_T);
#define pump__v3__basicCold__t_pump_Medium_ThermodynamicState_wrap_vars(td, dst , in_p, in_T) pump__v3__basicCold__t_pump_Medium_ThermodynamicState_wrap_vars_p(td, &dst , in_p, in_T)

// This function is not needed anymore. If you want to know how a record
// is 'assigned to' in simulation context see assignRhsExpToRecordCrefSimContext and
// splitRecordAssignmentToMemberAssignments (simCode). Basically the record is
// split up assignments generated for each member individually.
// void pump__v3__basicCold__t_pump_Medium_ThermodynamicState_copy_to_vars_p(void* v_src , modelica_real* in_p, modelica_real* in_T);
// #define pump__v3__basicCold__t_pump_Medium_ThermodynamicState_copy_to_vars(src,...) pump__v3__basicCold__t_pump_Medium_ThermodynamicState_copy_to_vars_p(&src, __VA_ARGS__)

typedef base_array_t pump__v3__basicCold__t_pump_Medium_ThermodynamicState_array;
#define alloc_pump__v3__basicCold__t_pump_Medium_ThermodynamicState_array(dst,ndims,...) generic_array_create(NULL, dst, pump__v3__basicCold__t_pump_Medium_ThermodynamicState_construct_p, ndims, sizeof(pump__v3__basicCold__t_pump_Medium_ThermodynamicState), __VA_ARGS__)
#define pump__v3__basicCold__t_pump_Medium_ThermodynamicState_array_copy_data(src,dst)   generic_array_copy_data(src, &dst, pump__v3__basicCold__t_pump_Medium_ThermodynamicState_copy_p, sizeof(pump__v3__basicCold__t_pump_Medium_ThermodynamicState))
#define pump__v3__basicCold__t_pump_Medium_ThermodynamicState_array_alloc_copy(src,dst)  generic_array_alloc_copy(src, &dst, pump__v3__basicCold__t_pump_Medium_ThermodynamicState_copy_p, sizeof(pump__v3__basicCold__t_pump_Medium_ThermodynamicState))
#define pump__v3__basicCold__t_pump_Medium_ThermodynamicState_array_get(src,ndims,...)   (*(pump__v3__basicCold__t_pump_Medium_ThermodynamicState*)(generic_array_get(&src, sizeof(pump__v3__basicCold__t_pump_Medium_ThermodynamicState), __VA_ARGS__)))
#define pump__v3__basicCold__t_pump_Medium_ThermodynamicState_set(dst,val,...)           generic_array_set(&dst, &val, pump__v3__basicCold__t_pump_Medium_ThermodynamicState_copy_p, sizeof(pump__v3__basicCold__t_pump_Medium_ThermodynamicState), __VA_ARGS__)

typedef pump__v3__basicCold__t_SenTempIn__cold_Medium_ThermodynamicState pump__v3__basicCold__t_pump_preSou_Medium_ThermodynamicState;
extern struct record_description pump__v3__basicCold__t_pump_preSou_Medium_ThermodynamicState__desc;

void pump__v3__basicCold__t_pump_preSou_Medium_ThermodynamicState_construct_p(threadData_t *threadData, void* v_ths );
#define pump__v3__basicCold__t_pump_preSou_Medium_ThermodynamicState_construct(td, ths ) pump__v3__basicCold__t_pump_preSou_Medium_ThermodynamicState_construct_p(td, &ths )
void pump__v3__basicCold__t_pump_preSou_Medium_ThermodynamicState_copy_p(void* v_src, void* v_dst);
#define pump__v3__basicCold__t_pump_preSou_Medium_ThermodynamicState_copy(src,dst) pump__v3__basicCold__t_pump_preSou_Medium_ThermodynamicState_copy_p(&src, &dst)


void pump__v3__basicCold__t_pump_preSou_Medium_ThermodynamicState_wrap_vars_p(threadData_t *threadData , void* v_dst , modelica_real in_p, modelica_real in_T);
#define pump__v3__basicCold__t_pump_preSou_Medium_ThermodynamicState_wrap_vars(td, dst , in_p, in_T) pump__v3__basicCold__t_pump_preSou_Medium_ThermodynamicState_wrap_vars_p(td, &dst , in_p, in_T)

// This function is not needed anymore. If you want to know how a record
// is 'assigned to' in simulation context see assignRhsExpToRecordCrefSimContext and
// splitRecordAssignmentToMemberAssignments (simCode). Basically the record is
// split up assignments generated for each member individually.
// void pump__v3__basicCold__t_pump_preSou_Medium_ThermodynamicState_copy_to_vars_p(void* v_src , modelica_real* in_p, modelica_real* in_T);
// #define pump__v3__basicCold__t_pump_preSou_Medium_ThermodynamicState_copy_to_vars(src,...) pump__v3__basicCold__t_pump_preSou_Medium_ThermodynamicState_copy_to_vars_p(&src, __VA_ARGS__)

typedef base_array_t pump__v3__basicCold__t_pump_preSou_Medium_ThermodynamicState_array;
#define alloc_pump__v3__basicCold__t_pump_preSou_Medium_ThermodynamicState_array(dst,ndims,...) generic_array_create(NULL, dst, pump__v3__basicCold__t_pump_preSou_Medium_ThermodynamicState_construct_p, ndims, sizeof(pump__v3__basicCold__t_pump_preSou_Medium_ThermodynamicState), __VA_ARGS__)
#define pump__v3__basicCold__t_pump_preSou_Medium_ThermodynamicState_array_copy_data(src,dst)   generic_array_copy_data(src, &dst, pump__v3__basicCold__t_pump_preSou_Medium_ThermodynamicState_copy_p, sizeof(pump__v3__basicCold__t_pump_preSou_Medium_ThermodynamicState))
#define pump__v3__basicCold__t_pump_preSou_Medium_ThermodynamicState_array_alloc_copy(src,dst)  generic_array_alloc_copy(src, &dst, pump__v3__basicCold__t_pump_preSou_Medium_ThermodynamicState_copy_p, sizeof(pump__v3__basicCold__t_pump_preSou_Medium_ThermodynamicState))
#define pump__v3__basicCold__t_pump_preSou_Medium_ThermodynamicState_array_get(src,ndims,...)   (*(pump__v3__basicCold__t_pump_preSou_Medium_ThermodynamicState*)(generic_array_get(&src, sizeof(pump__v3__basicCold__t_pump_preSou_Medium_ThermodynamicState), __VA_ARGS__)))
#define pump__v3__basicCold__t_pump_preSou_Medium_ThermodynamicState_set(dst,val,...)           generic_array_set(&dst, &val, pump__v3__basicCold__t_pump_preSou_Medium_ThermodynamicState_copy_p, sizeof(pump__v3__basicCold__t_pump_preSou_Medium_ThermodynamicState), __VA_ARGS__)

typedef pump__v3__basicCold__t_SenTempIn__cold_Medium_ThermodynamicState pump__v3__basicCold__t_pump_vol_Medium_ThermodynamicState;
extern struct record_description pump__v3__basicCold__t_pump_vol_Medium_ThermodynamicState__desc;

void pump__v3__basicCold__t_pump_vol_Medium_ThermodynamicState_construct_p(threadData_t *threadData, void* v_ths );
#define pump__v3__basicCold__t_pump_vol_Medium_ThermodynamicState_construct(td, ths ) pump__v3__basicCold__t_pump_vol_Medium_ThermodynamicState_construct_p(td, &ths )
void pump__v3__basicCold__t_pump_vol_Medium_ThermodynamicState_copy_p(void* v_src, void* v_dst);
#define pump__v3__basicCold__t_pump_vol_Medium_ThermodynamicState_copy(src,dst) pump__v3__basicCold__t_pump_vol_Medium_ThermodynamicState_copy_p(&src, &dst)


void pump__v3__basicCold__t_pump_vol_Medium_ThermodynamicState_wrap_vars_p(threadData_t *threadData , void* v_dst , modelica_real in_p, modelica_real in_T);
#define pump__v3__basicCold__t_pump_vol_Medium_ThermodynamicState_wrap_vars(td, dst , in_p, in_T) pump__v3__basicCold__t_pump_vol_Medium_ThermodynamicState_wrap_vars_p(td, &dst , in_p, in_T)

// This function is not needed anymore. If you want to know how a record
// is 'assigned to' in simulation context see assignRhsExpToRecordCrefSimContext and
// splitRecordAssignmentToMemberAssignments (simCode). Basically the record is
// split up assignments generated for each member individually.
// void pump__v3__basicCold__t_pump_vol_Medium_ThermodynamicState_copy_to_vars_p(void* v_src , modelica_real* in_p, modelica_real* in_T);
// #define pump__v3__basicCold__t_pump_vol_Medium_ThermodynamicState_copy_to_vars(src,...) pump__v3__basicCold__t_pump_vol_Medium_ThermodynamicState_copy_to_vars_p(&src, __VA_ARGS__)

typedef base_array_t pump__v3__basicCold__t_pump_vol_Medium_ThermodynamicState_array;
#define alloc_pump__v3__basicCold__t_pump_vol_Medium_ThermodynamicState_array(dst,ndims,...) generic_array_create(NULL, dst, pump__v3__basicCold__t_pump_vol_Medium_ThermodynamicState_construct_p, ndims, sizeof(pump__v3__basicCold__t_pump_vol_Medium_ThermodynamicState), __VA_ARGS__)
#define pump__v3__basicCold__t_pump_vol_Medium_ThermodynamicState_array_copy_data(src,dst)   generic_array_copy_data(src, &dst, pump__v3__basicCold__t_pump_vol_Medium_ThermodynamicState_copy_p, sizeof(pump__v3__basicCold__t_pump_vol_Medium_ThermodynamicState))
#define pump__v3__basicCold__t_pump_vol_Medium_ThermodynamicState_array_alloc_copy(src,dst)  generic_array_alloc_copy(src, &dst, pump__v3__basicCold__t_pump_vol_Medium_ThermodynamicState_copy_p, sizeof(pump__v3__basicCold__t_pump_vol_Medium_ThermodynamicState))
#define pump__v3__basicCold__t_pump_vol_Medium_ThermodynamicState_array_get(src,ndims,...)   (*(pump__v3__basicCold__t_pump_vol_Medium_ThermodynamicState*)(generic_array_get(&src, sizeof(pump__v3__basicCold__t_pump_vol_Medium_ThermodynamicState), __VA_ARGS__)))
#define pump__v3__basicCold__t_pump_vol_Medium_ThermodynamicState_set(dst,val,...)           generic_array_set(&dst, &val, pump__v3__basicCold__t_pump_vol_Medium_ThermodynamicState_copy_p, sizeof(pump__v3__basicCold__t_pump_vol_Medium_ThermodynamicState), __VA_ARGS__)

typedef pump__v3__basicCold__t_SenTempIn__cold_Medium_ThermodynamicState pump__v3__basicCold__t_pump_vol_dynBal_Medium_ThermodynamicState;
extern struct record_description pump__v3__basicCold__t_pump_vol_dynBal_Medium_ThermodynamicState__desc;

void pump__v3__basicCold__t_pump_vol_dynBal_Medium_ThermodynamicState_construct_p(threadData_t *threadData, void* v_ths );
#define pump__v3__basicCold__t_pump_vol_dynBal_Medium_ThermodynamicState_construct(td, ths ) pump__v3__basicCold__t_pump_vol_dynBal_Medium_ThermodynamicState_construct_p(td, &ths )
void pump__v3__basicCold__t_pump_vol_dynBal_Medium_ThermodynamicState_copy_p(void* v_src, void* v_dst);
#define pump__v3__basicCold__t_pump_vol_dynBal_Medium_ThermodynamicState_copy(src,dst) pump__v3__basicCold__t_pump_vol_dynBal_Medium_ThermodynamicState_copy_p(&src, &dst)


void pump__v3__basicCold__t_pump_vol_dynBal_Medium_ThermodynamicState_wrap_vars_p(threadData_t *threadData , void* v_dst , modelica_real in_p, modelica_real in_T);
#define pump__v3__basicCold__t_pump_vol_dynBal_Medium_ThermodynamicState_wrap_vars(td, dst , in_p, in_T) pump__v3__basicCold__t_pump_vol_dynBal_Medium_ThermodynamicState_wrap_vars_p(td, &dst , in_p, in_T)

// This function is not needed anymore. If you want to know how a record
// is 'assigned to' in simulation context see assignRhsExpToRecordCrefSimContext and
// splitRecordAssignmentToMemberAssignments (simCode). Basically the record is
// split up assignments generated for each member individually.
// void pump__v3__basicCold__t_pump_vol_dynBal_Medium_ThermodynamicState_copy_to_vars_p(void* v_src , modelica_real* in_p, modelica_real* in_T);
// #define pump__v3__basicCold__t_pump_vol_dynBal_Medium_ThermodynamicState_copy_to_vars(src,...) pump__v3__basicCold__t_pump_vol_dynBal_Medium_ThermodynamicState_copy_to_vars_p(&src, __VA_ARGS__)

typedef base_array_t pump__v3__basicCold__t_pump_vol_dynBal_Medium_ThermodynamicState_array;
#define alloc_pump__v3__basicCold__t_pump_vol_dynBal_Medium_ThermodynamicState_array(dst,ndims,...) generic_array_create(NULL, dst, pump__v3__basicCold__t_pump_vol_dynBal_Medium_ThermodynamicState_construct_p, ndims, sizeof(pump__v3__basicCold__t_pump_vol_dynBal_Medium_ThermodynamicState), __VA_ARGS__)
#define pump__v3__basicCold__t_pump_vol_dynBal_Medium_ThermodynamicState_array_copy_data(src,dst)   generic_array_copy_data(src, &dst, pump__v3__basicCold__t_pump_vol_dynBal_Medium_ThermodynamicState_copy_p, sizeof(pump__v3__basicCold__t_pump_vol_dynBal_Medium_ThermodynamicState))
#define pump__v3__basicCold__t_pump_vol_dynBal_Medium_ThermodynamicState_array_alloc_copy(src,dst)  generic_array_alloc_copy(src, &dst, pump__v3__basicCold__t_pump_vol_dynBal_Medium_ThermodynamicState_copy_p, sizeof(pump__v3__basicCold__t_pump_vol_dynBal_Medium_ThermodynamicState))
#define pump__v3__basicCold__t_pump_vol_dynBal_Medium_ThermodynamicState_array_get(src,ndims,...)   (*(pump__v3__basicCold__t_pump_vol_dynBal_Medium_ThermodynamicState*)(generic_array_get(&src, sizeof(pump__v3__basicCold__t_pump_vol_dynBal_Medium_ThermodynamicState), __VA_ARGS__)))
#define pump__v3__basicCold__t_pump_vol_dynBal_Medium_ThermodynamicState_set(dst,val,...)           generic_array_set(&dst, &val, pump__v3__basicCold__t_pump_vol_dynBal_Medium_ThermodynamicState_copy_p, sizeof(pump__v3__basicCold__t_pump_vol_dynBal_Medium_ThermodynamicState), __VA_ARGS__)

typedef pump__v3__basicCold__t_SenTempIn__cold_Medium_ThermodynamicState pump__v3__basicCold__t_senTemIn__heat_Medium_ThermodynamicState;
extern struct record_description pump__v3__basicCold__t_senTemIn__heat_Medium_ThermodynamicState__desc;

void pump__v3__basicCold__t_senTemIn__heat_Medium_ThermodynamicState_construct_p(threadData_t *threadData, void* v_ths );
#define pump__v3__basicCold__t_senTemIn__heat_Medium_ThermodynamicState_construct(td, ths ) pump__v3__basicCold__t_senTemIn__heat_Medium_ThermodynamicState_construct_p(td, &ths )
void pump__v3__basicCold__t_senTemIn__heat_Medium_ThermodynamicState_copy_p(void* v_src, void* v_dst);
#define pump__v3__basicCold__t_senTemIn__heat_Medium_ThermodynamicState_copy(src,dst) pump__v3__basicCold__t_senTemIn__heat_Medium_ThermodynamicState_copy_p(&src, &dst)


void pump__v3__basicCold__t_senTemIn__heat_Medium_ThermodynamicState_wrap_vars_p(threadData_t *threadData , void* v_dst , modelica_real in_p, modelica_real in_T);
#define pump__v3__basicCold__t_senTemIn__heat_Medium_ThermodynamicState_wrap_vars(td, dst , in_p, in_T) pump__v3__basicCold__t_senTemIn__heat_Medium_ThermodynamicState_wrap_vars_p(td, &dst , in_p, in_T)

// This function is not needed anymore. If you want to know how a record
// is 'assigned to' in simulation context see assignRhsExpToRecordCrefSimContext and
// splitRecordAssignmentToMemberAssignments (simCode). Basically the record is
// split up assignments generated for each member individually.
// void pump__v3__basicCold__t_senTemIn__heat_Medium_ThermodynamicState_copy_to_vars_p(void* v_src , modelica_real* in_p, modelica_real* in_T);
// #define pump__v3__basicCold__t_senTemIn__heat_Medium_ThermodynamicState_copy_to_vars(src,...) pump__v3__basicCold__t_senTemIn__heat_Medium_ThermodynamicState_copy_to_vars_p(&src, __VA_ARGS__)

typedef base_array_t pump__v3__basicCold__t_senTemIn__heat_Medium_ThermodynamicState_array;
#define alloc_pump__v3__basicCold__t_senTemIn__heat_Medium_ThermodynamicState_array(dst,ndims,...) generic_array_create(NULL, dst, pump__v3__basicCold__t_senTemIn__heat_Medium_ThermodynamicState_construct_p, ndims, sizeof(pump__v3__basicCold__t_senTemIn__heat_Medium_ThermodynamicState), __VA_ARGS__)
#define pump__v3__basicCold__t_senTemIn__heat_Medium_ThermodynamicState_array_copy_data(src,dst)   generic_array_copy_data(src, &dst, pump__v3__basicCold__t_senTemIn__heat_Medium_ThermodynamicState_copy_p, sizeof(pump__v3__basicCold__t_senTemIn__heat_Medium_ThermodynamicState))
#define pump__v3__basicCold__t_senTemIn__heat_Medium_ThermodynamicState_array_alloc_copy(src,dst)  generic_array_alloc_copy(src, &dst, pump__v3__basicCold__t_senTemIn__heat_Medium_ThermodynamicState_copy_p, sizeof(pump__v3__basicCold__t_senTemIn__heat_Medium_ThermodynamicState))
#define pump__v3__basicCold__t_senTemIn__heat_Medium_ThermodynamicState_array_get(src,ndims,...)   (*(pump__v3__basicCold__t_senTemIn__heat_Medium_ThermodynamicState*)(generic_array_get(&src, sizeof(pump__v3__basicCold__t_senTemIn__heat_Medium_ThermodynamicState), __VA_ARGS__)))
#define pump__v3__basicCold__t_senTemIn__heat_Medium_ThermodynamicState_set(dst,val,...)           generic_array_set(&dst, &val, pump__v3__basicCold__t_senTemIn__heat_Medium_ThermodynamicState_copy_p, sizeof(pump__v3__basicCold__t_senTemIn__heat_Medium_ThermodynamicState), __VA_ARGS__)

typedef pump__v3__basicCold__t_SenTempIn__cold_Medium_ThermodynamicState pump__v3__basicCold__t_senTemOut__cold_Medium_ThermodynamicState;
extern struct record_description pump__v3__basicCold__t_senTemOut__cold_Medium_ThermodynamicState__desc;

void pump__v3__basicCold__t_senTemOut__cold_Medium_ThermodynamicState_construct_p(threadData_t *threadData, void* v_ths );
#define pump__v3__basicCold__t_senTemOut__cold_Medium_ThermodynamicState_construct(td, ths ) pump__v3__basicCold__t_senTemOut__cold_Medium_ThermodynamicState_construct_p(td, &ths )
void pump__v3__basicCold__t_senTemOut__cold_Medium_ThermodynamicState_copy_p(void* v_src, void* v_dst);
#define pump__v3__basicCold__t_senTemOut__cold_Medium_ThermodynamicState_copy(src,dst) pump__v3__basicCold__t_senTemOut__cold_Medium_ThermodynamicState_copy_p(&src, &dst)


void pump__v3__basicCold__t_senTemOut__cold_Medium_ThermodynamicState_wrap_vars_p(threadData_t *threadData , void* v_dst , modelica_real in_p, modelica_real in_T);
#define pump__v3__basicCold__t_senTemOut__cold_Medium_ThermodynamicState_wrap_vars(td, dst , in_p, in_T) pump__v3__basicCold__t_senTemOut__cold_Medium_ThermodynamicState_wrap_vars_p(td, &dst , in_p, in_T)

// This function is not needed anymore. If you want to know how a record
// is 'assigned to' in simulation context see assignRhsExpToRecordCrefSimContext and
// splitRecordAssignmentToMemberAssignments (simCode). Basically the record is
// split up assignments generated for each member individually.
// void pump__v3__basicCold__t_senTemOut__cold_Medium_ThermodynamicState_copy_to_vars_p(void* v_src , modelica_real* in_p, modelica_real* in_T);
// #define pump__v3__basicCold__t_senTemOut__cold_Medium_ThermodynamicState_copy_to_vars(src,...) pump__v3__basicCold__t_senTemOut__cold_Medium_ThermodynamicState_copy_to_vars_p(&src, __VA_ARGS__)

typedef base_array_t pump__v3__basicCold__t_senTemOut__cold_Medium_ThermodynamicState_array;
#define alloc_pump__v3__basicCold__t_senTemOut__cold_Medium_ThermodynamicState_array(dst,ndims,...) generic_array_create(NULL, dst, pump__v3__basicCold__t_senTemOut__cold_Medium_ThermodynamicState_construct_p, ndims, sizeof(pump__v3__basicCold__t_senTemOut__cold_Medium_ThermodynamicState), __VA_ARGS__)
#define pump__v3__basicCold__t_senTemOut__cold_Medium_ThermodynamicState_array_copy_data(src,dst)   generic_array_copy_data(src, &dst, pump__v3__basicCold__t_senTemOut__cold_Medium_ThermodynamicState_copy_p, sizeof(pump__v3__basicCold__t_senTemOut__cold_Medium_ThermodynamicState))
#define pump__v3__basicCold__t_senTemOut__cold_Medium_ThermodynamicState_array_alloc_copy(src,dst)  generic_array_alloc_copy(src, &dst, pump__v3__basicCold__t_senTemOut__cold_Medium_ThermodynamicState_copy_p, sizeof(pump__v3__basicCold__t_senTemOut__cold_Medium_ThermodynamicState))
#define pump__v3__basicCold__t_senTemOut__cold_Medium_ThermodynamicState_array_get(src,ndims,...)   (*(pump__v3__basicCold__t_senTemOut__cold_Medium_ThermodynamicState*)(generic_array_get(&src, sizeof(pump__v3__basicCold__t_senTemOut__cold_Medium_ThermodynamicState), __VA_ARGS__)))
#define pump__v3__basicCold__t_senTemOut__cold_Medium_ThermodynamicState_set(dst,val,...)           generic_array_set(&dst, &val, pump__v3__basicCold__t_senTemOut__cold_Medium_ThermodynamicState_copy_p, sizeof(pump__v3__basicCold__t_senTemOut__cold_Medium_ThermodynamicState), __VA_ARGS__)

typedef pump__v3__basicCold__t_SenTempIn__cold_Medium_ThermodynamicState pump__v3__basicCold__t_senTemOut__heat_Medium_ThermodynamicState;
extern struct record_description pump__v3__basicCold__t_senTemOut__heat_Medium_ThermodynamicState__desc;

void pump__v3__basicCold__t_senTemOut__heat_Medium_ThermodynamicState_construct_p(threadData_t *threadData, void* v_ths );
#define pump__v3__basicCold__t_senTemOut__heat_Medium_ThermodynamicState_construct(td, ths ) pump__v3__basicCold__t_senTemOut__heat_Medium_ThermodynamicState_construct_p(td, &ths )
void pump__v3__basicCold__t_senTemOut__heat_Medium_ThermodynamicState_copy_p(void* v_src, void* v_dst);
#define pump__v3__basicCold__t_senTemOut__heat_Medium_ThermodynamicState_copy(src,dst) pump__v3__basicCold__t_senTemOut__heat_Medium_ThermodynamicState_copy_p(&src, &dst)


void pump__v3__basicCold__t_senTemOut__heat_Medium_ThermodynamicState_wrap_vars_p(threadData_t *threadData , void* v_dst , modelica_real in_p, modelica_real in_T);
#define pump__v3__basicCold__t_senTemOut__heat_Medium_ThermodynamicState_wrap_vars(td, dst , in_p, in_T) pump__v3__basicCold__t_senTemOut__heat_Medium_ThermodynamicState_wrap_vars_p(td, &dst , in_p, in_T)

// This function is not needed anymore. If you want to know how a record
// is 'assigned to' in simulation context see assignRhsExpToRecordCrefSimContext and
// splitRecordAssignmentToMemberAssignments (simCode). Basically the record is
// split up assignments generated for each member individually.
// void pump__v3__basicCold__t_senTemOut__heat_Medium_ThermodynamicState_copy_to_vars_p(void* v_src , modelica_real* in_p, modelica_real* in_T);
// #define pump__v3__basicCold__t_senTemOut__heat_Medium_ThermodynamicState_copy_to_vars(src,...) pump__v3__basicCold__t_senTemOut__heat_Medium_ThermodynamicState_copy_to_vars_p(&src, __VA_ARGS__)

typedef base_array_t pump__v3__basicCold__t_senTemOut__heat_Medium_ThermodynamicState_array;
#define alloc_pump__v3__basicCold__t_senTemOut__heat_Medium_ThermodynamicState_array(dst,ndims,...) generic_array_create(NULL, dst, pump__v3__basicCold__t_senTemOut__heat_Medium_ThermodynamicState_construct_p, ndims, sizeof(pump__v3__basicCold__t_senTemOut__heat_Medium_ThermodynamicState), __VA_ARGS__)
#define pump__v3__basicCold__t_senTemOut__heat_Medium_ThermodynamicState_array_copy_data(src,dst)   generic_array_copy_data(src, &dst, pump__v3__basicCold__t_senTemOut__heat_Medium_ThermodynamicState_copy_p, sizeof(pump__v3__basicCold__t_senTemOut__heat_Medium_ThermodynamicState))
#define pump__v3__basicCold__t_senTemOut__heat_Medium_ThermodynamicState_array_alloc_copy(src,dst)  generic_array_alloc_copy(src, &dst, pump__v3__basicCold__t_senTemOut__heat_Medium_ThermodynamicState_copy_p, sizeof(pump__v3__basicCold__t_senTemOut__heat_Medium_ThermodynamicState))
#define pump__v3__basicCold__t_senTemOut__heat_Medium_ThermodynamicState_array_get(src,ndims,...)   (*(pump__v3__basicCold__t_senTemOut__heat_Medium_ThermodynamicState*)(generic_array_get(&src, sizeof(pump__v3__basicCold__t_senTemOut__heat_Medium_ThermodynamicState), __VA_ARGS__)))
#define pump__v3__basicCold__t_senTemOut__heat_Medium_ThermodynamicState_set(dst,val,...)           generic_array_set(&dst, &val, pump__v3__basicCold__t_senTemOut__heat_Medium_ThermodynamicState_copy_p, sizeof(pump__v3__basicCold__t_senTemOut__heat_Medium_ThermodynamicState), __VA_ARGS__)

DLLDirection
modelica_real omc_IDEAS_Fluid_BaseClasses_FlowModels_basicFlowFunction__m__flow(threadData_t *threadData, modelica_real _m_flow, modelica_real _k, modelica_real _m_flow_turbulent);
DLLDirection
modelica_metatype boxptr_IDEAS_Fluid_BaseClasses_FlowModels_basicFlowFunction__m__flow(threadData_t *threadData, modelica_metatype _m_flow, modelica_metatype _k, modelica_metatype _m_flow_turbulent);
static const MMC_DEFSTRUCTLIT(boxvar_lit_IDEAS_Fluid_BaseClasses_FlowModels_basicFlowFunction__m__flow,2,0) {(void*) boxptr_IDEAS_Fluid_BaseClasses_FlowModels_basicFlowFunction__m__flow,0}};
#define boxvar_IDEAS_Fluid_BaseClasses_FlowModels_basicFlowFunction__m__flow MMC_REFSTRUCTLIT(boxvar_lit_IDEAS_Fluid_BaseClasses_FlowModels_basicFlowFunction__m__flow)


DLLDirection
IDEAS_Fluid_Movers_BaseClasses_Characteristics_flowParametersInternal omc_IDEAS_Fluid_Movers_BaseClasses_Characteristics_flowParametersInternal (threadData_t *threadData, modelica_integer omc_n, real_array omc_V_flow, real_array omc_dp);

DLLDirection
modelica_metatype boxptr_IDEAS_Fluid_Movers_BaseClasses_Characteristics_flowParametersInternal(threadData_t *threadData, modelica_metatype _n, modelica_metatype _V_flow, modelica_metatype _dp);
static const MMC_DEFSTRUCTLIT(boxvar_lit_IDEAS_Fluid_Movers_BaseClasses_Characteristics_flowParametersInternal,2,0) {(void*) boxptr_IDEAS_Fluid_Movers_BaseClasses_Characteristics_flowParametersInternal,0}};
#define boxvar_IDEAS_Fluid_Movers_BaseClasses_Characteristics_flowParametersInternal MMC_REFSTRUCTLIT(boxvar_lit_IDEAS_Fluid_Movers_BaseClasses_Characteristics_flowParametersInternal)


DLLDirection
modelica_real omc_IDEAS_Fluid_Movers_BaseClasses_Euler_correlation(threadData_t *threadData, modelica_real _x);
DLLDirection
modelica_metatype boxptr_IDEAS_Fluid_Movers_BaseClasses_Euler_correlation(threadData_t *threadData, modelica_metatype _x);
static const MMC_DEFSTRUCTLIT(boxvar_lit_IDEAS_Fluid_Movers_BaseClasses_Euler_correlation,2,0) {(void*) boxptr_IDEAS_Fluid_Movers_BaseClasses_Euler_correlation,0}};
#define boxvar_IDEAS_Fluid_Movers_BaseClasses_Euler_correlation MMC_REFSTRUCTLIT(boxvar_lit_IDEAS_Fluid_Movers_BaseClasses_Euler_correlation)


DLLDirection
modelica_real omc_IDEAS_Fluid_Movers_BaseClasses_Euler_efficiency(threadData_t *threadData, IDEAS_Fluid_Movers_BaseClasses_Euler_peak _peak, modelica_real _dp, modelica_real _V_flow, modelica_real _V_flow_dp_small);
DLLDirection
modelica_metatype boxptr_IDEAS_Fluid_Movers_BaseClasses_Euler_efficiency(threadData_t *threadData, modelica_metatype _peak, modelica_metatype _dp, modelica_metatype _V_flow, modelica_metatype _V_flow_dp_small);
static const MMC_DEFSTRUCTLIT(boxvar_lit_IDEAS_Fluid_Movers_BaseClasses_Euler_efficiency,2,0) {(void*) boxptr_IDEAS_Fluid_Movers_BaseClasses_Euler_efficiency,0}};
#define boxvar_IDEAS_Fluid_Movers_BaseClasses_Euler_efficiency MMC_REFSTRUCTLIT(boxvar_lit_IDEAS_Fluid_Movers_BaseClasses_Euler_efficiency)


DLLDirection
IDEAS_Fluid_Movers_BaseClasses_Euler_peak omc_IDEAS_Fluid_Movers_BaseClasses_Euler_peak (threadData_t *threadData, modelica_real omc_V_flow, modelica_real omc_dp, modelica_real omc_eta);

DLLDirection
modelica_metatype boxptr_IDEAS_Fluid_Movers_BaseClasses_Euler_peak(threadData_t *threadData, modelica_metatype _V_flow, modelica_metatype _dp, modelica_metatype _eta);
static const MMC_DEFSTRUCTLIT(boxvar_lit_IDEAS_Fluid_Movers_BaseClasses_Euler_peak,2,0) {(void*) boxptr_IDEAS_Fluid_Movers_BaseClasses_Euler_peak,0}};
#define boxvar_IDEAS_Fluid_Movers_BaseClasses_Euler_peak MMC_REFSTRUCTLIT(boxvar_lit_IDEAS_Fluid_Movers_BaseClasses_Euler_peak)


DLLDirection
IDEAS_Fluid_Movers_BaseClasses_Euler_powerWithDerivative omc_IDEAS_Fluid_Movers_BaseClasses_Euler_power(threadData_t *threadData, IDEAS_Fluid_Movers_BaseClasses_Euler_peak _peak, IDEAS_Fluid_Movers_BaseClasses_Characteristics_flowParametersInternal _pressure);
DLLDirection
modelica_metatype boxptr_IDEAS_Fluid_Movers_BaseClasses_Euler_power(threadData_t *threadData, modelica_metatype _peak, modelica_metatype _pressure);
static const MMC_DEFSTRUCTLIT(boxvar_lit_IDEAS_Fluid_Movers_BaseClasses_Euler_power,2,0) {(void*) boxptr_IDEAS_Fluid_Movers_BaseClasses_Euler_power,0}};
#define boxvar_IDEAS_Fluid_Movers_BaseClasses_Euler_power MMC_REFSTRUCTLIT(boxvar_lit_IDEAS_Fluid_Movers_BaseClasses_Euler_power)


DLLDirection
IDEAS_Fluid_Movers_BaseClasses_Euler_powerWithDerivative omc_IDEAS_Fluid_Movers_BaseClasses_Euler_powerWithDerivative (threadData_t *threadData, real_array omc_V_flow, real_array omc_P, real_array omc_d);

DLLDirection
modelica_metatype boxptr_IDEAS_Fluid_Movers_BaseClasses_Euler_powerWithDerivative(threadData_t *threadData, modelica_metatype _V_flow, modelica_metatype _P, modelica_metatype _d);
static const MMC_DEFSTRUCTLIT(boxvar_lit_IDEAS_Fluid_Movers_BaseClasses_Euler_powerWithDerivative,2,0) {(void*) boxptr_IDEAS_Fluid_Movers_BaseClasses_Euler_powerWithDerivative,0}};
#define boxvar_IDEAS_Fluid_Movers_BaseClasses_Euler_powerWithDerivative MMC_REFSTRUCTLIT(boxvar_lit_IDEAS_Fluid_Movers_BaseClasses_Euler_powerWithDerivative)


DLLDirection
modelica_real omc_IDEAS_Utilities_Math_Functions_cubicHermiteLinearExtrapolation(threadData_t *threadData, modelica_real _x, modelica_real _x1, modelica_real _x2, modelica_real _y1, modelica_real _y2, modelica_real _y1d, modelica_real _y2d);
DLLDirection
modelica_metatype boxptr_IDEAS_Utilities_Math_Functions_cubicHermiteLinearExtrapolation(threadData_t *threadData, modelica_metatype _x, modelica_metatype _x1, modelica_metatype _x2, modelica_metatype _y1, modelica_metatype _y2, modelica_metatype _y1d, modelica_metatype _y2d);
static const MMC_DEFSTRUCTLIT(boxvar_lit_IDEAS_Utilities_Math_Functions_cubicHermiteLinearExtrapolation,2,0) {(void*) boxptr_IDEAS_Utilities_Math_Functions_cubicHermiteLinearExtrapolation,0}};
#define boxvar_IDEAS_Utilities_Math_Functions_cubicHermiteLinearExtrapolation MMC_REFSTRUCTLIT(boxvar_lit_IDEAS_Utilities_Math_Functions_cubicHermiteLinearExtrapolation)


DLLDirection
modelica_boolean omc_IDEAS_Utilities_Math_Functions_isMonotonic(threadData_t *threadData, real_array _x, modelica_boolean _strict);
DLLDirection
modelica_metatype boxptr_IDEAS_Utilities_Math_Functions_isMonotonic(threadData_t *threadData, modelica_metatype _x, modelica_metatype _strict);
static const MMC_DEFSTRUCTLIT(boxvar_lit_IDEAS_Utilities_Math_Functions_isMonotonic,2,0) {(void*) boxptr_IDEAS_Utilities_Math_Functions_isMonotonic,0}};
#define boxvar_IDEAS_Utilities_Math_Functions_isMonotonic MMC_REFSTRUCTLIT(boxvar_lit_IDEAS_Utilities_Math_Functions_isMonotonic)


DLLDirection
modelica_real omc_IDEAS_Utilities_Math_Functions_regStep(threadData_t *threadData, modelica_real _x, modelica_real _y1, modelica_real _y2, modelica_real _x_small);
DLLDirection
modelica_metatype boxptr_IDEAS_Utilities_Math_Functions_regStep(threadData_t *threadData, modelica_metatype _x, modelica_metatype _y1, modelica_metatype _y2, modelica_metatype _x_small);
static const MMC_DEFSTRUCTLIT(boxvar_lit_IDEAS_Utilities_Math_Functions_regStep,2,0) {(void*) boxptr_IDEAS_Utilities_Math_Functions_regStep,0}};
#define boxvar_IDEAS_Utilities_Math_Functions_regStep MMC_REFSTRUCTLIT(boxvar_lit_IDEAS_Utilities_Math_Functions_regStep)


DLLDirection
modelica_real omc_IDEAS_Utilities_Math_Functions_smoothInterpolation(threadData_t *threadData, modelica_real _x, real_array _xSup, real_array _ySup, modelica_boolean _ensureMonotonicity);
DLLDirection
modelica_metatype boxptr_IDEAS_Utilities_Math_Functions_smoothInterpolation(threadData_t *threadData, modelica_metatype _x, modelica_metatype _xSup, modelica_metatype _ySup, modelica_metatype _ensureMonotonicity);
static const MMC_DEFSTRUCTLIT(boxvar_lit_IDEAS_Utilities_Math_Functions_smoothInterpolation,2,0) {(void*) boxptr_IDEAS_Utilities_Math_Functions_smoothInterpolation,0}};
#define boxvar_IDEAS_Utilities_Math_Functions_smoothInterpolation MMC_REFSTRUCTLIT(boxvar_lit_IDEAS_Utilities_Math_Functions_smoothInterpolation)


DLLDirection
modelica_real omc_IDEAS_Utilities_Math_Functions_smoothMax(threadData_t *threadData, modelica_real _x1, modelica_real _x2, modelica_real _deltaX);
DLLDirection
modelica_metatype boxptr_IDEAS_Utilities_Math_Functions_smoothMax(threadData_t *threadData, modelica_metatype _x1, modelica_metatype _x2, modelica_metatype _deltaX);
static const MMC_DEFSTRUCTLIT(boxvar_lit_IDEAS_Utilities_Math_Functions_smoothMax,2,0) {(void*) boxptr_IDEAS_Utilities_Math_Functions_smoothMax,0}};
#define boxvar_IDEAS_Utilities_Math_Functions_smoothMax MMC_REFSTRUCTLIT(boxvar_lit_IDEAS_Utilities_Math_Functions_smoothMax)


DLLDirection
modelica_real omc_IDEAS_Utilities_Math_Functions_spliceFunction(threadData_t *threadData, modelica_real _pos, modelica_real _neg, modelica_real _x, modelica_real _deltax);
DLLDirection
modelica_metatype boxptr_IDEAS_Utilities_Math_Functions_spliceFunction(threadData_t *threadData, modelica_metatype _pos, modelica_metatype _neg, modelica_metatype _x, modelica_metatype _deltax);
static const MMC_DEFSTRUCTLIT(boxvar_lit_IDEAS_Utilities_Math_Functions_spliceFunction,2,0) {(void*) boxptr_IDEAS_Utilities_Math_Functions_spliceFunction,0}};
#define boxvar_IDEAS_Utilities_Math_Functions_spliceFunction MMC_REFSTRUCTLIT(boxvar_lit_IDEAS_Utilities_Math_Functions_spliceFunction)


DLLDirection
real_array omc_IDEAS_Utilities_Math_Functions_splineDerivatives(threadData_t *threadData, real_array _x, real_array _y, modelica_boolean _ensureMonotonicity);
DLLDirection
modelica_metatype boxptr_IDEAS_Utilities_Math_Functions_splineDerivatives(threadData_t *threadData, modelica_metatype _x, modelica_metatype _y, modelica_metatype _ensureMonotonicity);
static const MMC_DEFSTRUCTLIT(boxvar_lit_IDEAS_Utilities_Math_Functions_splineDerivatives,2,0) {(void*) boxptr_IDEAS_Utilities_Math_Functions_splineDerivatives,0}};
#define boxvar_IDEAS_Utilities_Math_Functions_splineDerivatives MMC_REFSTRUCTLIT(boxvar_lit_IDEAS_Utilities_Math_Functions_splineDerivatives)


DLLDirection
void omc_Modelica_Fluid_Utilities_checkBoundary(threadData_t *threadData, modelica_string _mediumName, string_array _substanceNames, modelica_boolean _singleState, modelica_boolean _define_p, real_array _X_boundary, modelica_string _modelName);
DLLDirection
void boxptr_Modelica_Fluid_Utilities_checkBoundary(threadData_t *threadData, modelica_metatype _mediumName, modelica_metatype _substanceNames, modelica_metatype _singleState, modelica_metatype _define_p, modelica_metatype _X_boundary, modelica_metatype _modelName);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Modelica_Fluid_Utilities_checkBoundary,2,0) {(void*) boxptr_Modelica_Fluid_Utilities_checkBoundary,0}};
#define boxvar_Modelica_Fluid_Utilities_checkBoundary MMC_REFSTRUCTLIT(boxvar_lit_Modelica_Fluid_Utilities_checkBoundary)


DLLDirection
modelica_real omc_Modelica_Fluid_Utilities_cubicHermite(threadData_t *threadData, modelica_real _x, modelica_real _x1, modelica_real _x2, modelica_real _y1, modelica_real _y2, modelica_real _y1d, modelica_real _y2d);
DLLDirection
modelica_metatype boxptr_Modelica_Fluid_Utilities_cubicHermite(threadData_t *threadData, modelica_metatype _x, modelica_metatype _x1, modelica_metatype _x2, modelica_metatype _y1, modelica_metatype _y2, modelica_metatype _y1d, modelica_metatype _y2d);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Modelica_Fluid_Utilities_cubicHermite,2,0) {(void*) boxptr_Modelica_Fluid_Utilities_cubicHermite,0}};
#define boxvar_Modelica_Fluid_Utilities_cubicHermite MMC_REFSTRUCTLIT(boxvar_lit_Modelica_Fluid_Utilities_cubicHermite)


DLLDirection
modelica_real omc_Modelica_Fluid_Utilities_regStep(threadData_t *threadData, modelica_real _x, modelica_real _y1, modelica_real _y2, modelica_real _x_small);
DLLDirection
modelica_metatype boxptr_Modelica_Fluid_Utilities_regStep(threadData_t *threadData, modelica_metatype _x, modelica_metatype _y1, modelica_metatype _y2, modelica_metatype _x_small);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Modelica_Fluid_Utilities_regStep,2,0) {(void*) boxptr_Modelica_Fluid_Utilities_regStep,0}};
#define boxvar_Modelica_Fluid_Utilities_regStep MMC_REFSTRUCTLIT(boxvar_lit_Modelica_Fluid_Utilities_regStep)


DLLDirection
void omc_Modelica_Utilities_Streams_error(threadData_t *threadData, modelica_string _string);
#define boxptr_Modelica_Utilities_Streams_error omc_Modelica_Utilities_Streams_error
static const MMC_DEFSTRUCTLIT(boxvar_lit_Modelica_Utilities_Streams_error,2,0) {(void*) boxptr_Modelica_Utilities_Streams_error,0}};
#define boxvar_Modelica_Utilities_Streams_error MMC_REFSTRUCTLIT(boxvar_lit_Modelica_Utilities_Streams_error)

/*
 * The function has annotation(Include=...>) or is builtin
 * the external function definition should be present
 * in one of these files and have this prototype:
 * extern void ModelicaError(const char* (*_string*));
 */

DLLDirection
modelica_real omc_pump__v3__basicCold__t_mat__cp(threadData_t *threadData, modelica_integer _mat);
DLLDirection
modelica_metatype boxptr_pump__v3__basicCold__t_mat__cp(threadData_t *threadData, modelica_metatype _mat);
static const MMC_DEFSTRUCTLIT(boxvar_lit_pump__v3__basicCold__t_mat__cp,2,0) {(void*) boxptr_pump__v3__basicCold__t_mat__cp,0}};
#define boxvar_pump__v3__basicCold__t_mat__cp MMC_REFSTRUCTLIT(boxvar_lit_pump__v3__basicCold__t_mat__cp)


DLLDirection
modelica_real omc_pump__v3__basicCold__t_mat__k(threadData_t *threadData, modelica_integer _mat);
DLLDirection
modelica_metatype boxptr_pump__v3__basicCold__t_mat__k(threadData_t *threadData, modelica_metatype _mat);
static const MMC_DEFSTRUCTLIT(boxvar_lit_pump__v3__basicCold__t_mat__k,2,0) {(void*) boxptr_pump__v3__basicCold__t_mat__k,0}};
#define boxvar_pump__v3__basicCold__t_mat__k MMC_REFSTRUCTLIT(boxvar_lit_pump__v3__basicCold__t_mat__k)


DLLDirection
modelica_real omc_pump__v3__basicCold__t_mat__rho(threadData_t *threadData, modelica_integer _mat);
DLLDirection
modelica_metatype boxptr_pump__v3__basicCold__t_mat__rho(threadData_t *threadData, modelica_metatype _mat);
static const MMC_DEFSTRUCTLIT(boxvar_lit_pump__v3__basicCold__t_mat__rho,2,0) {(void*) boxptr_pump__v3__basicCold__t_mat__rho,0}};
#define boxvar_pump__v3__basicCold__t_mat__rho MMC_REFSTRUCTLIT(boxvar_lit_pump__v3__basicCold__t_mat__rho)


DLLDirection
pump__v3__basicCold__t_SenTempIn__cold_Medium_ThermodynamicState omc_pump__v3__basicCold__t_SenTempIn__cold_Medium_ThermodynamicState (threadData_t *threadData, modelica_real omc_p, modelica_real omc_T);

DLLDirection
modelica_metatype boxptr_pump__v3__basicCold__t_SenTempIn__cold_Medium_ThermodynamicState(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T);
static const MMC_DEFSTRUCTLIT(boxvar_lit_pump__v3__basicCold__t_SenTempIn__cold_Medium_ThermodynamicState,2,0) {(void*) boxptr_pump__v3__basicCold__t_SenTempIn__cold_Medium_ThermodynamicState,0}};
#define boxvar_pump__v3__basicCold__t_SenTempIn__cold_Medium_ThermodynamicState MMC_REFSTRUCTLIT(boxvar_lit_pump__v3__basicCold__t_SenTempIn__cold_Medium_ThermodynamicState)


DLLDirection
pump__v3__basicCold__t_SenTempIn__cold_Medium_ThermodynamicState omc_pump__v3__basicCold__t_SenTempIn__cold_Medium_setState__phX(threadData_t *threadData, modelica_real _p, modelica_real _h, real_array _X);
DLLDirection
modelica_metatype boxptr_pump__v3__basicCold__t_SenTempIn__cold_Medium_setState__phX(threadData_t *threadData, modelica_metatype _p, modelica_metatype _h, modelica_metatype _X);
static const MMC_DEFSTRUCTLIT(boxvar_lit_pump__v3__basicCold__t_SenTempIn__cold_Medium_setState__phX,2,0) {(void*) boxptr_pump__v3__basicCold__t_SenTempIn__cold_Medium_setState__phX,0}};
#define boxvar_pump__v3__basicCold__t_SenTempIn__cold_Medium_setState__phX MMC_REFSTRUCTLIT(boxvar_lit_pump__v3__basicCold__t_SenTempIn__cold_Medium_setState__phX)


DLLDirection
modelica_real omc_pump__v3__basicCold__t_SenTempIn__cold_Medium_temperature(threadData_t *threadData, pump__v3__basicCold__t_SenTempIn__cold_Medium_ThermodynamicState _state);
DLLDirection
modelica_metatype boxptr_pump__v3__basicCold__t_SenTempIn__cold_Medium_temperature(threadData_t *threadData, modelica_metatype _state);
static const MMC_DEFSTRUCTLIT(boxvar_lit_pump__v3__basicCold__t_SenTempIn__cold_Medium_temperature,2,0) {(void*) boxptr_pump__v3__basicCold__t_SenTempIn__cold_Medium_temperature,0}};
#define boxvar_pump__v3__basicCold__t_SenTempIn__cold_Medium_temperature MMC_REFSTRUCTLIT(boxvar_lit_pump__v3__basicCold__t_SenTempIn__cold_Medium_temperature)


DLLDirection
pump__v3__basicCold__t_bou1_Medium_ThermodynamicState omc_pump__v3__basicCold__t_bou1_Medium_ThermodynamicState (threadData_t *threadData, modelica_real omc_p, modelica_real omc_T);

DLLDirection
modelica_metatype boxptr_pump__v3__basicCold__t_bou1_Medium_ThermodynamicState(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T);
static const MMC_DEFSTRUCTLIT(boxvar_lit_pump__v3__basicCold__t_bou1_Medium_ThermodynamicState,2,0) {(void*) boxptr_pump__v3__basicCold__t_bou1_Medium_ThermodynamicState,0}};
#define boxvar_pump__v3__basicCold__t_bou1_Medium_ThermodynamicState MMC_REFSTRUCTLIT(boxvar_lit_pump__v3__basicCold__t_bou1_Medium_ThermodynamicState)


DLLDirection
pump__v3__basicCold__t_bou1_Medium_ThermodynamicState omc_pump__v3__basicCold__t_bou1_Medium_setState__pTX(threadData_t *threadData, modelica_real _p, modelica_real _T, real_array _X);
DLLDirection
modelica_metatype boxptr_pump__v3__basicCold__t_bou1_Medium_setState__pTX(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T, modelica_metatype _X);
static const MMC_DEFSTRUCTLIT(boxvar_lit_pump__v3__basicCold__t_bou1_Medium_setState__pTX,2,0) {(void*) boxptr_pump__v3__basicCold__t_bou1_Medium_setState__pTX,0}};
#define boxvar_pump__v3__basicCold__t_bou1_Medium_setState__pTX MMC_REFSTRUCTLIT(boxvar_lit_pump__v3__basicCold__t_bou1_Medium_setState__pTX)


DLLDirection
modelica_real omc_pump__v3__basicCold__t_bou1_Medium_specificEnthalpy(threadData_t *threadData, pump__v3__basicCold__t_bou1_Medium_ThermodynamicState _state);
DLLDirection
modelica_metatype boxptr_pump__v3__basicCold__t_bou1_Medium_specificEnthalpy(threadData_t *threadData, modelica_metatype _state);
static const MMC_DEFSTRUCTLIT(boxvar_lit_pump__v3__basicCold__t_bou1_Medium_specificEnthalpy,2,0) {(void*) boxptr_pump__v3__basicCold__t_bou1_Medium_specificEnthalpy,0}};
#define boxvar_pump__v3__basicCold__t_bou1_Medium_specificEnthalpy MMC_REFSTRUCTLIT(boxvar_lit_pump__v3__basicCold__t_bou1_Medium_specificEnthalpy)


DLLDirection
pump__v3__basicCold__t_plugFlowPipe_Medium_ThermodynamicState omc_pump__v3__basicCold__t_plugFlowPipe_Medium_ThermodynamicState (threadData_t *threadData, modelica_real omc_p, modelica_real omc_T);

DLLDirection
modelica_metatype boxptr_pump__v3__basicCold__t_plugFlowPipe_Medium_ThermodynamicState(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T);
static const MMC_DEFSTRUCTLIT(boxvar_lit_pump__v3__basicCold__t_plugFlowPipe_Medium_ThermodynamicState,2,0) {(void*) boxptr_pump__v3__basicCold__t_plugFlowPipe_Medium_ThermodynamicState,0}};
#define boxvar_pump__v3__basicCold__t_plugFlowPipe_Medium_ThermodynamicState MMC_REFSTRUCTLIT(boxvar_lit_pump__v3__basicCold__t_plugFlowPipe_Medium_ThermodynamicState)


DLLDirection
modelica_real omc_pump__v3__basicCold__t_plugFlowPipe_Medium_specificHeatCapacityCp(threadData_t *threadData, pump__v3__basicCold__t_plugFlowPipe_Medium_ThermodynamicState _state);
DLLDirection
modelica_metatype boxptr_pump__v3__basicCold__t_plugFlowPipe_Medium_specificHeatCapacityCp(threadData_t *threadData, modelica_metatype _state);
static const MMC_DEFSTRUCTLIT(boxvar_lit_pump__v3__basicCold__t_plugFlowPipe_Medium_specificHeatCapacityCp,2,0) {(void*) boxptr_pump__v3__basicCold__t_plugFlowPipe_Medium_specificHeatCapacityCp,0}};
#define boxvar_pump__v3__basicCold__t_plugFlowPipe_Medium_specificHeatCapacityCp MMC_REFSTRUCTLIT(boxvar_lit_pump__v3__basicCold__t_plugFlowPipe_Medium_specificHeatCapacityCp)


DLLDirection
pump__v3__basicCold__t_plugFlowPipe_del_Medium_ThermodynamicState omc_pump__v3__basicCold__t_plugFlowPipe_del_Medium_ThermodynamicState (threadData_t *threadData, modelica_real omc_p, modelica_real omc_T);

DLLDirection
modelica_metatype boxptr_pump__v3__basicCold__t_plugFlowPipe_del_Medium_ThermodynamicState(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T);
static const MMC_DEFSTRUCTLIT(boxvar_lit_pump__v3__basicCold__t_plugFlowPipe_del_Medium_ThermodynamicState,2,0) {(void*) boxptr_pump__v3__basicCold__t_plugFlowPipe_del_Medium_ThermodynamicState,0}};
#define boxvar_pump__v3__basicCold__t_plugFlowPipe_del_Medium_ThermodynamicState MMC_REFSTRUCTLIT(boxvar_lit_pump__v3__basicCold__t_plugFlowPipe_del_Medium_ThermodynamicState)


DLLDirection
modelica_real omc_pump__v3__basicCold__t_plugFlowPipe_del_Medium_density(threadData_t *threadData, pump__v3__basicCold__t_plugFlowPipe_del_Medium_ThermodynamicState _state);
DLLDirection
modelica_metatype boxptr_pump__v3__basicCold__t_plugFlowPipe_del_Medium_density(threadData_t *threadData, modelica_metatype _state);
static const MMC_DEFSTRUCTLIT(boxvar_lit_pump__v3__basicCold__t_plugFlowPipe_del_Medium_density,2,0) {(void*) boxptr_pump__v3__basicCold__t_plugFlowPipe_del_Medium_density,0}};
#define boxvar_pump__v3__basicCold__t_plugFlowPipe_del_Medium_density MMC_REFSTRUCTLIT(boxvar_lit_pump__v3__basicCold__t_plugFlowPipe_del_Medium_density)


DLLDirection
pump__v3__basicCold__t_plugFlowPipe_del_Medium_ThermodynamicState omc_pump__v3__basicCold__t_plugFlowPipe_del_Medium_setState__pTX(threadData_t *threadData, modelica_real _p, modelica_real _T, real_array _X);
DLLDirection
modelica_metatype boxptr_pump__v3__basicCold__t_plugFlowPipe_del_Medium_setState__pTX(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T, modelica_metatype _X);
static const MMC_DEFSTRUCTLIT(boxvar_lit_pump__v3__basicCold__t_plugFlowPipe_del_Medium_setState__pTX,2,0) {(void*) boxptr_pump__v3__basicCold__t_plugFlowPipe_del_Medium_setState__pTX,0}};
#define boxvar_pump__v3__basicCold__t_plugFlowPipe_del_Medium_setState__pTX MMC_REFSTRUCTLIT(boxvar_lit_pump__v3__basicCold__t_plugFlowPipe_del_Medium_setState__pTX)


DLLDirection
pump__v3__basicCold__t_plugFlowPipe_del_Medium_ThermodynamicState omc_pump__v3__basicCold__t_plugFlowPipe_del_Medium_setState__phX(threadData_t *threadData, modelica_real _p, modelica_real _h, real_array _X);
DLLDirection
modelica_metatype boxptr_pump__v3__basicCold__t_plugFlowPipe_del_Medium_setState__phX(threadData_t *threadData, modelica_metatype _p, modelica_metatype _h, modelica_metatype _X);
static const MMC_DEFSTRUCTLIT(boxvar_lit_pump__v3__basicCold__t_plugFlowPipe_del_Medium_setState__phX,2,0) {(void*) boxptr_pump__v3__basicCold__t_plugFlowPipe_del_Medium_setState__phX,0}};
#define boxvar_pump__v3__basicCold__t_plugFlowPipe_del_Medium_setState__phX MMC_REFSTRUCTLIT(boxvar_lit_pump__v3__basicCold__t_plugFlowPipe_del_Medium_setState__phX)


DLLDirection
modelica_real omc_pump__v3__basicCold__t_plugFlowPipe_del_Medium_specificEnthalpy(threadData_t *threadData, pump__v3__basicCold__t_plugFlowPipe_del_Medium_ThermodynamicState _state);
DLLDirection
modelica_metatype boxptr_pump__v3__basicCold__t_plugFlowPipe_del_Medium_specificEnthalpy(threadData_t *threadData, modelica_metatype _state);
static const MMC_DEFSTRUCTLIT(boxvar_lit_pump__v3__basicCold__t_plugFlowPipe_del_Medium_specificEnthalpy,2,0) {(void*) boxptr_pump__v3__basicCold__t_plugFlowPipe_del_Medium_specificEnthalpy,0}};
#define boxvar_pump__v3__basicCold__t_plugFlowPipe_del_Medium_specificEnthalpy MMC_REFSTRUCTLIT(boxvar_lit_pump__v3__basicCold__t_plugFlowPipe_del_Medium_specificEnthalpy)


DLLDirection
pump__v3__basicCold__t_plugFlowPipe_heaLos__a_Medium_ThermodynamicState omc_pump__v3__basicCold__t_plugFlowPipe_heaLos__a_Medium_ThermodynamicState (threadData_t *threadData, modelica_real omc_p, modelica_real omc_T);

DLLDirection
modelica_metatype boxptr_pump__v3__basicCold__t_plugFlowPipe_heaLos__a_Medium_ThermodynamicState(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T);
static const MMC_DEFSTRUCTLIT(boxvar_lit_pump__v3__basicCold__t_plugFlowPipe_heaLos__a_Medium_ThermodynamicState,2,0) {(void*) boxptr_pump__v3__basicCold__t_plugFlowPipe_heaLos__a_Medium_ThermodynamicState,0}};
#define boxvar_pump__v3__basicCold__t_plugFlowPipe_heaLos__a_Medium_ThermodynamicState MMC_REFSTRUCTLIT(boxvar_lit_pump__v3__basicCold__t_plugFlowPipe_heaLos__a_Medium_ThermodynamicState)


DLLDirection
pump__v3__basicCold__t_plugFlowPipe_heaLos__a_Medium_ThermodynamicState omc_pump__v3__basicCold__t_plugFlowPipe_heaLos__a_Medium_setState__pTX(threadData_t *threadData, modelica_real _p, modelica_real _T, real_array _X);
DLLDirection
modelica_metatype boxptr_pump__v3__basicCold__t_plugFlowPipe_heaLos__a_Medium_setState__pTX(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T, modelica_metatype _X);
static const MMC_DEFSTRUCTLIT(boxvar_lit_pump__v3__basicCold__t_plugFlowPipe_heaLos__a_Medium_setState__pTX,2,0) {(void*) boxptr_pump__v3__basicCold__t_plugFlowPipe_heaLos__a_Medium_setState__pTX,0}};
#define boxvar_pump__v3__basicCold__t_plugFlowPipe_heaLos__a_Medium_setState__pTX MMC_REFSTRUCTLIT(boxvar_lit_pump__v3__basicCold__t_plugFlowPipe_heaLos__a_Medium_setState__pTX)


DLLDirection
pump__v3__basicCold__t_plugFlowPipe_heaLos__a_Medium_ThermodynamicState omc_pump__v3__basicCold__t_plugFlowPipe_heaLos__a_Medium_setState__phX(threadData_t *threadData, modelica_real _p, modelica_real _h, real_array _X);
DLLDirection
modelica_metatype boxptr_pump__v3__basicCold__t_plugFlowPipe_heaLos__a_Medium_setState__phX(threadData_t *threadData, modelica_metatype _p, modelica_metatype _h, modelica_metatype _X);
static const MMC_DEFSTRUCTLIT(boxvar_lit_pump__v3__basicCold__t_plugFlowPipe_heaLos__a_Medium_setState__phX,2,0) {(void*) boxptr_pump__v3__basicCold__t_plugFlowPipe_heaLos__a_Medium_setState__phX,0}};
#define boxvar_pump__v3__basicCold__t_plugFlowPipe_heaLos__a_Medium_setState__phX MMC_REFSTRUCTLIT(boxvar_lit_pump__v3__basicCold__t_plugFlowPipe_heaLos__a_Medium_setState__phX)


DLLDirection
modelica_real omc_pump__v3__basicCold__t_plugFlowPipe_heaLos__a_Medium_specificEnthalpy(threadData_t *threadData, pump__v3__basicCold__t_plugFlowPipe_heaLos__a_Medium_ThermodynamicState _state);
DLLDirection
modelica_metatype boxptr_pump__v3__basicCold__t_plugFlowPipe_heaLos__a_Medium_specificEnthalpy(threadData_t *threadData, modelica_metatype _state);
static const MMC_DEFSTRUCTLIT(boxvar_lit_pump__v3__basicCold__t_plugFlowPipe_heaLos__a_Medium_specificEnthalpy,2,0) {(void*) boxptr_pump__v3__basicCold__t_plugFlowPipe_heaLos__a_Medium_specificEnthalpy,0}};
#define boxvar_pump__v3__basicCold__t_plugFlowPipe_heaLos__a_Medium_specificEnthalpy MMC_REFSTRUCTLIT(boxvar_lit_pump__v3__basicCold__t_plugFlowPipe_heaLos__a_Medium_specificEnthalpy)


DLLDirection
modelica_real omc_pump__v3__basicCold__t_plugFlowPipe_heaLos__a_Medium_specificHeatCapacityCp(threadData_t *threadData, pump__v3__basicCold__t_plugFlowPipe_heaLos__a_Medium_ThermodynamicState _state);
DLLDirection
modelica_metatype boxptr_pump__v3__basicCold__t_plugFlowPipe_heaLos__a_Medium_specificHeatCapacityCp(threadData_t *threadData, modelica_metatype _state);
static const MMC_DEFSTRUCTLIT(boxvar_lit_pump__v3__basicCold__t_plugFlowPipe_heaLos__a_Medium_specificHeatCapacityCp,2,0) {(void*) boxptr_pump__v3__basicCold__t_plugFlowPipe_heaLos__a_Medium_specificHeatCapacityCp,0}};
#define boxvar_pump__v3__basicCold__t_plugFlowPipe_heaLos__a_Medium_specificHeatCapacityCp MMC_REFSTRUCTLIT(boxvar_lit_pump__v3__basicCold__t_plugFlowPipe_heaLos__a_Medium_specificHeatCapacityCp)


DLLDirection
modelica_real omc_pump__v3__basicCold__t_plugFlowPipe_heaLos__a_Medium_temperature(threadData_t *threadData, pump__v3__basicCold__t_plugFlowPipe_heaLos__a_Medium_ThermodynamicState _state);
DLLDirection
modelica_metatype boxptr_pump__v3__basicCold__t_plugFlowPipe_heaLos__a_Medium_temperature(threadData_t *threadData, modelica_metatype _state);
static const MMC_DEFSTRUCTLIT(boxvar_lit_pump__v3__basicCold__t_plugFlowPipe_heaLos__a_Medium_temperature,2,0) {(void*) boxptr_pump__v3__basicCold__t_plugFlowPipe_heaLos__a_Medium_temperature,0}};
#define boxvar_pump__v3__basicCold__t_plugFlowPipe_heaLos__a_Medium_temperature MMC_REFSTRUCTLIT(boxvar_lit_pump__v3__basicCold__t_plugFlowPipe_heaLos__a_Medium_temperature)


DLLDirection
pump__v3__basicCold__t_plugFlowPipe_heaLos__b_Medium_ThermodynamicState omc_pump__v3__basicCold__t_plugFlowPipe_heaLos__b_Medium_ThermodynamicState (threadData_t *threadData, modelica_real omc_p, modelica_real omc_T);

DLLDirection
modelica_metatype boxptr_pump__v3__basicCold__t_plugFlowPipe_heaLos__b_Medium_ThermodynamicState(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T);
static const MMC_DEFSTRUCTLIT(boxvar_lit_pump__v3__basicCold__t_plugFlowPipe_heaLos__b_Medium_ThermodynamicState,2,0) {(void*) boxptr_pump__v3__basicCold__t_plugFlowPipe_heaLos__b_Medium_ThermodynamicState,0}};
#define boxvar_pump__v3__basicCold__t_plugFlowPipe_heaLos__b_Medium_ThermodynamicState MMC_REFSTRUCTLIT(boxvar_lit_pump__v3__basicCold__t_plugFlowPipe_heaLos__b_Medium_ThermodynamicState)


DLLDirection
pump__v3__basicCold__t_plugFlowPipe_heaLos__b_Medium_ThermodynamicState omc_pump__v3__basicCold__t_plugFlowPipe_heaLos__b_Medium_setState__pTX(threadData_t *threadData, modelica_real _p, modelica_real _T, real_array _X);
DLLDirection
modelica_metatype boxptr_pump__v3__basicCold__t_plugFlowPipe_heaLos__b_Medium_setState__pTX(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T, modelica_metatype _X);
static const MMC_DEFSTRUCTLIT(boxvar_lit_pump__v3__basicCold__t_plugFlowPipe_heaLos__b_Medium_setState__pTX,2,0) {(void*) boxptr_pump__v3__basicCold__t_plugFlowPipe_heaLos__b_Medium_setState__pTX,0}};
#define boxvar_pump__v3__basicCold__t_plugFlowPipe_heaLos__b_Medium_setState__pTX MMC_REFSTRUCTLIT(boxvar_lit_pump__v3__basicCold__t_plugFlowPipe_heaLos__b_Medium_setState__pTX)


DLLDirection
pump__v3__basicCold__t_plugFlowPipe_heaLos__b_Medium_ThermodynamicState omc_pump__v3__basicCold__t_plugFlowPipe_heaLos__b_Medium_setState__phX(threadData_t *threadData, modelica_real _p, modelica_real _h, real_array _X);
DLLDirection
modelica_metatype boxptr_pump__v3__basicCold__t_plugFlowPipe_heaLos__b_Medium_setState__phX(threadData_t *threadData, modelica_metatype _p, modelica_metatype _h, modelica_metatype _X);
static const MMC_DEFSTRUCTLIT(boxvar_lit_pump__v3__basicCold__t_plugFlowPipe_heaLos__b_Medium_setState__phX,2,0) {(void*) boxptr_pump__v3__basicCold__t_plugFlowPipe_heaLos__b_Medium_setState__phX,0}};
#define boxvar_pump__v3__basicCold__t_plugFlowPipe_heaLos__b_Medium_setState__phX MMC_REFSTRUCTLIT(boxvar_lit_pump__v3__basicCold__t_plugFlowPipe_heaLos__b_Medium_setState__phX)


DLLDirection
modelica_real omc_pump__v3__basicCold__t_plugFlowPipe_heaLos__b_Medium_specificEnthalpy(threadData_t *threadData, pump__v3__basicCold__t_plugFlowPipe_heaLos__b_Medium_ThermodynamicState _state);
DLLDirection
modelica_metatype boxptr_pump__v3__basicCold__t_plugFlowPipe_heaLos__b_Medium_specificEnthalpy(threadData_t *threadData, modelica_metatype _state);
static const MMC_DEFSTRUCTLIT(boxvar_lit_pump__v3__basicCold__t_plugFlowPipe_heaLos__b_Medium_specificEnthalpy,2,0) {(void*) boxptr_pump__v3__basicCold__t_plugFlowPipe_heaLos__b_Medium_specificEnthalpy,0}};
#define boxvar_pump__v3__basicCold__t_plugFlowPipe_heaLos__b_Medium_specificEnthalpy MMC_REFSTRUCTLIT(boxvar_lit_pump__v3__basicCold__t_plugFlowPipe_heaLos__b_Medium_specificEnthalpy)


DLLDirection
modelica_real omc_pump__v3__basicCold__t_plugFlowPipe_heaLos__b_Medium_specificHeatCapacityCp(threadData_t *threadData, pump__v3__basicCold__t_plugFlowPipe_heaLos__b_Medium_ThermodynamicState _state);
DLLDirection
modelica_metatype boxptr_pump__v3__basicCold__t_plugFlowPipe_heaLos__b_Medium_specificHeatCapacityCp(threadData_t *threadData, modelica_metatype _state);
static const MMC_DEFSTRUCTLIT(boxvar_lit_pump__v3__basicCold__t_plugFlowPipe_heaLos__b_Medium_specificHeatCapacityCp,2,0) {(void*) boxptr_pump__v3__basicCold__t_plugFlowPipe_heaLos__b_Medium_specificHeatCapacityCp,0}};
#define boxvar_pump__v3__basicCold__t_plugFlowPipe_heaLos__b_Medium_specificHeatCapacityCp MMC_REFSTRUCTLIT(boxvar_lit_pump__v3__basicCold__t_plugFlowPipe_heaLos__b_Medium_specificHeatCapacityCp)


DLLDirection
modelica_real omc_pump__v3__basicCold__t_plugFlowPipe_heaLos__b_Medium_temperature(threadData_t *threadData, pump__v3__basicCold__t_plugFlowPipe_heaLos__b_Medium_ThermodynamicState _state);
DLLDirection
modelica_metatype boxptr_pump__v3__basicCold__t_plugFlowPipe_heaLos__b_Medium_temperature(threadData_t *threadData, modelica_metatype _state);
static const MMC_DEFSTRUCTLIT(boxvar_lit_pump__v3__basicCold__t_plugFlowPipe_heaLos__b_Medium_temperature,2,0) {(void*) boxptr_pump__v3__basicCold__t_plugFlowPipe_heaLos__b_Medium_temperature,0}};
#define boxvar_pump__v3__basicCold__t_plugFlowPipe_heaLos__b_Medium_temperature MMC_REFSTRUCTLIT(boxvar_lit_pump__v3__basicCold__t_plugFlowPipe_heaLos__b_Medium_temperature)


DLLDirection
pump__v3__basicCold__t_plugFlowPipe_res_Medium_ThermodynamicState omc_pump__v3__basicCold__t_plugFlowPipe_res_Medium_ThermodynamicState (threadData_t *threadData, modelica_real omc_p, modelica_real omc_T);

DLLDirection
modelica_metatype boxptr_pump__v3__basicCold__t_plugFlowPipe_res_Medium_ThermodynamicState(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T);
static const MMC_DEFSTRUCTLIT(boxvar_lit_pump__v3__basicCold__t_plugFlowPipe_res_Medium_ThermodynamicState,2,0) {(void*) boxptr_pump__v3__basicCold__t_plugFlowPipe_res_Medium_ThermodynamicState,0}};
#define boxvar_pump__v3__basicCold__t_plugFlowPipe_res_Medium_ThermodynamicState MMC_REFSTRUCTLIT(boxvar_lit_pump__v3__basicCold__t_plugFlowPipe_res_Medium_ThermodynamicState)


DLLDirection
pump__v3__basicCold__t_plugFlowPipe_vol__a_Medium_ThermodynamicState omc_pump__v3__basicCold__t_plugFlowPipe_vol__a_Medium_ThermodynamicState (threadData_t *threadData, modelica_real omc_p, modelica_real omc_T);

DLLDirection
modelica_metatype boxptr_pump__v3__basicCold__t_plugFlowPipe_vol__a_Medium_ThermodynamicState(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T);
static const MMC_DEFSTRUCTLIT(boxvar_lit_pump__v3__basicCold__t_plugFlowPipe_vol__a_Medium_ThermodynamicState,2,0) {(void*) boxptr_pump__v3__basicCold__t_plugFlowPipe_vol__a_Medium_ThermodynamicState,0}};
#define boxvar_pump__v3__basicCold__t_plugFlowPipe_vol__a_Medium_ThermodynamicState MMC_REFSTRUCTLIT(boxvar_lit_pump__v3__basicCold__t_plugFlowPipe_vol__a_Medium_ThermodynamicState)


DLLDirection
modelica_real omc_pump__v3__basicCold__t_plugFlowPipe_vol__a_Medium_density(threadData_t *threadData, pump__v3__basicCold__t_plugFlowPipe_vol__a_Medium_ThermodynamicState _state);
DLLDirection
modelica_metatype boxptr_pump__v3__basicCold__t_plugFlowPipe_vol__a_Medium_density(threadData_t *threadData, modelica_metatype _state);
static const MMC_DEFSTRUCTLIT(boxvar_lit_pump__v3__basicCold__t_plugFlowPipe_vol__a_Medium_density,2,0) {(void*) boxptr_pump__v3__basicCold__t_plugFlowPipe_vol__a_Medium_density,0}};
#define boxvar_pump__v3__basicCold__t_plugFlowPipe_vol__a_Medium_density MMC_REFSTRUCTLIT(boxvar_lit_pump__v3__basicCold__t_plugFlowPipe_vol__a_Medium_density)


DLLDirection
modelica_real omc_pump__v3__basicCold__t_plugFlowPipe_vol__a_Medium_temperature__phX(threadData_t *threadData, modelica_real _p, modelica_real _h, real_array _X);
DLLDirection
modelica_metatype boxptr_pump__v3__basicCold__t_plugFlowPipe_vol__a_Medium_temperature__phX(threadData_t *threadData, modelica_metatype _p, modelica_metatype _h, modelica_metatype _X);
static const MMC_DEFSTRUCTLIT(boxvar_lit_pump__v3__basicCold__t_plugFlowPipe_vol__a_Medium_temperature__phX,2,0) {(void*) boxptr_pump__v3__basicCold__t_plugFlowPipe_vol__a_Medium_temperature__phX,0}};
#define boxvar_pump__v3__basicCold__t_plugFlowPipe_vol__a_Medium_temperature__phX MMC_REFSTRUCTLIT(boxvar_lit_pump__v3__basicCold__t_plugFlowPipe_vol__a_Medium_temperature__phX)


DLLDirection
pump__v3__basicCold__t_plugFlowPipe_vol__a_dynBal_Medium_ThermodynamicState omc_pump__v3__basicCold__t_plugFlowPipe_vol__a_dynBal_Medium_ThermodynamicState (threadData_t *threadData, modelica_real omc_p, modelica_real omc_T);

DLLDirection
modelica_metatype boxptr_pump__v3__basicCold__t_plugFlowPipe_vol__a_dynBal_Medium_ThermodynamicState(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T);
static const MMC_DEFSTRUCTLIT(boxvar_lit_pump__v3__basicCold__t_plugFlowPipe_vol__a_dynBal_Medium_ThermodynamicState,2,0) {(void*) boxptr_pump__v3__basicCold__t_plugFlowPipe_vol__a_dynBal_Medium_ThermodynamicState,0}};
#define boxvar_pump__v3__basicCold__t_plugFlowPipe_vol__a_dynBal_Medium_ThermodynamicState MMC_REFSTRUCTLIT(boxvar_lit_pump__v3__basicCold__t_plugFlowPipe_vol__a_dynBal_Medium_ThermodynamicState)


DLLDirection
modelica_real omc_pump__v3__basicCold__t_plugFlowPipe_vol__a_dynBal_Medium_density(threadData_t *threadData, pump__v3__basicCold__t_plugFlowPipe_vol__a_dynBal_Medium_ThermodynamicState _state);
DLLDirection
modelica_metatype boxptr_pump__v3__basicCold__t_plugFlowPipe_vol__a_dynBal_Medium_density(threadData_t *threadData, modelica_metatype _state);
static const MMC_DEFSTRUCTLIT(boxvar_lit_pump__v3__basicCold__t_plugFlowPipe_vol__a_dynBal_Medium_density,2,0) {(void*) boxptr_pump__v3__basicCold__t_plugFlowPipe_vol__a_dynBal_Medium_density,0}};
#define boxvar_pump__v3__basicCold__t_plugFlowPipe_vol__a_dynBal_Medium_density MMC_REFSTRUCTLIT(boxvar_lit_pump__v3__basicCold__t_plugFlowPipe_vol__a_dynBal_Medium_density)


DLLDirection
pump__v3__basicCold__t_plugFlowPipe_vol__a_dynBal_Medium_ThermodynamicState omc_pump__v3__basicCold__t_plugFlowPipe_vol__a_dynBal_Medium_setState__pTX(threadData_t *threadData, modelica_real _p, modelica_real _T, real_array _X);
DLLDirection
modelica_metatype boxptr_pump__v3__basicCold__t_plugFlowPipe_vol__a_dynBal_Medium_setState__pTX(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T, modelica_metatype _X);
static const MMC_DEFSTRUCTLIT(boxvar_lit_pump__v3__basicCold__t_plugFlowPipe_vol__a_dynBal_Medium_setState__pTX,2,0) {(void*) boxptr_pump__v3__basicCold__t_plugFlowPipe_vol__a_dynBal_Medium_setState__pTX,0}};
#define boxvar_pump__v3__basicCold__t_plugFlowPipe_vol__a_dynBal_Medium_setState__pTX MMC_REFSTRUCTLIT(boxvar_lit_pump__v3__basicCold__t_plugFlowPipe_vol__a_dynBal_Medium_setState__pTX)


DLLDirection
modelica_real omc_pump__v3__basicCold__t_plugFlowPipe_vol__a_dynBal_Medium_specificEnthalpy__pTX(threadData_t *threadData, modelica_real _p, modelica_real _T, real_array _X);
DLLDirection
modelica_metatype boxptr_pump__v3__basicCold__t_plugFlowPipe_vol__a_dynBal_Medium_specificEnthalpy__pTX(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T, modelica_metatype _X);
static const MMC_DEFSTRUCTLIT(boxvar_lit_pump__v3__basicCold__t_plugFlowPipe_vol__a_dynBal_Medium_specificEnthalpy__pTX,2,0) {(void*) boxptr_pump__v3__basicCold__t_plugFlowPipe_vol__a_dynBal_Medium_specificEnthalpy__pTX,0}};
#define boxvar_pump__v3__basicCold__t_plugFlowPipe_vol__a_dynBal_Medium_specificEnthalpy__pTX MMC_REFSTRUCTLIT(boxvar_lit_pump__v3__basicCold__t_plugFlowPipe_vol__a_dynBal_Medium_specificEnthalpy__pTX)


DLLDirection
modelica_real omc_pump__v3__basicCold__t_plugFlowPipe_vol__a_dynBal_Medium_specificInternalEnergy(threadData_t *threadData, pump__v3__basicCold__t_plugFlowPipe_vol__a_dynBal_Medium_ThermodynamicState _state);
DLLDirection
modelica_metatype boxptr_pump__v3__basicCold__t_plugFlowPipe_vol__a_dynBal_Medium_specificInternalEnergy(threadData_t *threadData, modelica_metatype _state);
static const MMC_DEFSTRUCTLIT(boxvar_lit_pump__v3__basicCold__t_plugFlowPipe_vol__a_dynBal_Medium_specificInternalEnergy,2,0) {(void*) boxptr_pump__v3__basicCold__t_plugFlowPipe_vol__a_dynBal_Medium_specificInternalEnergy,0}};
#define boxvar_pump__v3__basicCold__t_plugFlowPipe_vol__a_dynBal_Medium_specificInternalEnergy MMC_REFSTRUCTLIT(boxvar_lit_pump__v3__basicCold__t_plugFlowPipe_vol__a_dynBal_Medium_specificInternalEnergy)


DLLDirection
pump__v3__basicCold__t_plugFlowPipe_vol__b_Medium_ThermodynamicState omc_pump__v3__basicCold__t_plugFlowPipe_vol__b_Medium_ThermodynamicState (threadData_t *threadData, modelica_real omc_p, modelica_real omc_T);

DLLDirection
modelica_metatype boxptr_pump__v3__basicCold__t_plugFlowPipe_vol__b_Medium_ThermodynamicState(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T);
static const MMC_DEFSTRUCTLIT(boxvar_lit_pump__v3__basicCold__t_plugFlowPipe_vol__b_Medium_ThermodynamicState,2,0) {(void*) boxptr_pump__v3__basicCold__t_plugFlowPipe_vol__b_Medium_ThermodynamicState,0}};
#define boxvar_pump__v3__basicCold__t_plugFlowPipe_vol__b_Medium_ThermodynamicState MMC_REFSTRUCTLIT(boxvar_lit_pump__v3__basicCold__t_plugFlowPipe_vol__b_Medium_ThermodynamicState)


DLLDirection
modelica_real omc_pump__v3__basicCold__t_plugFlowPipe_vol__b_Medium_density(threadData_t *threadData, pump__v3__basicCold__t_plugFlowPipe_vol__b_Medium_ThermodynamicState _state);
DLLDirection
modelica_metatype boxptr_pump__v3__basicCold__t_plugFlowPipe_vol__b_Medium_density(threadData_t *threadData, modelica_metatype _state);
static const MMC_DEFSTRUCTLIT(boxvar_lit_pump__v3__basicCold__t_plugFlowPipe_vol__b_Medium_density,2,0) {(void*) boxptr_pump__v3__basicCold__t_plugFlowPipe_vol__b_Medium_density,0}};
#define boxvar_pump__v3__basicCold__t_plugFlowPipe_vol__b_Medium_density MMC_REFSTRUCTLIT(boxvar_lit_pump__v3__basicCold__t_plugFlowPipe_vol__b_Medium_density)


DLLDirection
modelica_real omc_pump__v3__basicCold__t_plugFlowPipe_vol__b_Medium_temperature__phX(threadData_t *threadData, modelica_real _p, modelica_real _h, real_array _X);
DLLDirection
modelica_metatype boxptr_pump__v3__basicCold__t_plugFlowPipe_vol__b_Medium_temperature__phX(threadData_t *threadData, modelica_metatype _p, modelica_metatype _h, modelica_metatype _X);
static const MMC_DEFSTRUCTLIT(boxvar_lit_pump__v3__basicCold__t_plugFlowPipe_vol__b_Medium_temperature__phX,2,0) {(void*) boxptr_pump__v3__basicCold__t_plugFlowPipe_vol__b_Medium_temperature__phX,0}};
#define boxvar_pump__v3__basicCold__t_plugFlowPipe_vol__b_Medium_temperature__phX MMC_REFSTRUCTLIT(boxvar_lit_pump__v3__basicCold__t_plugFlowPipe_vol__b_Medium_temperature__phX)


DLLDirection
pump__v3__basicCold__t_plugFlowPipe_vol__b_dynBal_Medium_ThermodynamicState omc_pump__v3__basicCold__t_plugFlowPipe_vol__b_dynBal_Medium_ThermodynamicState (threadData_t *threadData, modelica_real omc_p, modelica_real omc_T);

DLLDirection
modelica_metatype boxptr_pump__v3__basicCold__t_plugFlowPipe_vol__b_dynBal_Medium_ThermodynamicState(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T);
static const MMC_DEFSTRUCTLIT(boxvar_lit_pump__v3__basicCold__t_plugFlowPipe_vol__b_dynBal_Medium_ThermodynamicState,2,0) {(void*) boxptr_pump__v3__basicCold__t_plugFlowPipe_vol__b_dynBal_Medium_ThermodynamicState,0}};
#define boxvar_pump__v3__basicCold__t_plugFlowPipe_vol__b_dynBal_Medium_ThermodynamicState MMC_REFSTRUCTLIT(boxvar_lit_pump__v3__basicCold__t_plugFlowPipe_vol__b_dynBal_Medium_ThermodynamicState)


DLLDirection
modelica_real omc_pump__v3__basicCold__t_plugFlowPipe_vol__b_dynBal_Medium_density(threadData_t *threadData, pump__v3__basicCold__t_plugFlowPipe_vol__b_dynBal_Medium_ThermodynamicState _state);
DLLDirection
modelica_metatype boxptr_pump__v3__basicCold__t_plugFlowPipe_vol__b_dynBal_Medium_density(threadData_t *threadData, modelica_metatype _state);
static const MMC_DEFSTRUCTLIT(boxvar_lit_pump__v3__basicCold__t_plugFlowPipe_vol__b_dynBal_Medium_density,2,0) {(void*) boxptr_pump__v3__basicCold__t_plugFlowPipe_vol__b_dynBal_Medium_density,0}};
#define boxvar_pump__v3__basicCold__t_plugFlowPipe_vol__b_dynBal_Medium_density MMC_REFSTRUCTLIT(boxvar_lit_pump__v3__basicCold__t_plugFlowPipe_vol__b_dynBal_Medium_density)


DLLDirection
pump__v3__basicCold__t_plugFlowPipe_vol__b_dynBal_Medium_ThermodynamicState omc_pump__v3__basicCold__t_plugFlowPipe_vol__b_dynBal_Medium_setState__pTX(threadData_t *threadData, modelica_real _p, modelica_real _T, real_array _X);
DLLDirection
modelica_metatype boxptr_pump__v3__basicCold__t_plugFlowPipe_vol__b_dynBal_Medium_setState__pTX(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T, modelica_metatype _X);
static const MMC_DEFSTRUCTLIT(boxvar_lit_pump__v3__basicCold__t_plugFlowPipe_vol__b_dynBal_Medium_setState__pTX,2,0) {(void*) boxptr_pump__v3__basicCold__t_plugFlowPipe_vol__b_dynBal_Medium_setState__pTX,0}};
#define boxvar_pump__v3__basicCold__t_plugFlowPipe_vol__b_dynBal_Medium_setState__pTX MMC_REFSTRUCTLIT(boxvar_lit_pump__v3__basicCold__t_plugFlowPipe_vol__b_dynBal_Medium_setState__pTX)


DLLDirection
modelica_real omc_pump__v3__basicCold__t_plugFlowPipe_vol__b_dynBal_Medium_specificEnthalpy__pTX(threadData_t *threadData, modelica_real _p, modelica_real _T, real_array _X);
DLLDirection
modelica_metatype boxptr_pump__v3__basicCold__t_plugFlowPipe_vol__b_dynBal_Medium_specificEnthalpy__pTX(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T, modelica_metatype _X);
static const MMC_DEFSTRUCTLIT(boxvar_lit_pump__v3__basicCold__t_plugFlowPipe_vol__b_dynBal_Medium_specificEnthalpy__pTX,2,0) {(void*) boxptr_pump__v3__basicCold__t_plugFlowPipe_vol__b_dynBal_Medium_specificEnthalpy__pTX,0}};
#define boxvar_pump__v3__basicCold__t_plugFlowPipe_vol__b_dynBal_Medium_specificEnthalpy__pTX MMC_REFSTRUCTLIT(boxvar_lit_pump__v3__basicCold__t_plugFlowPipe_vol__b_dynBal_Medium_specificEnthalpy__pTX)


DLLDirection
modelica_real omc_pump__v3__basicCold__t_plugFlowPipe_vol__b_dynBal_Medium_specificInternalEnergy(threadData_t *threadData, pump__v3__basicCold__t_plugFlowPipe_vol__b_dynBal_Medium_ThermodynamicState _state);
DLLDirection
modelica_metatype boxptr_pump__v3__basicCold__t_plugFlowPipe_vol__b_dynBal_Medium_specificInternalEnergy(threadData_t *threadData, modelica_metatype _state);
static const MMC_DEFSTRUCTLIT(boxvar_lit_pump__v3__basicCold__t_plugFlowPipe_vol__b_dynBal_Medium_specificInternalEnergy,2,0) {(void*) boxptr_pump__v3__basicCold__t_plugFlowPipe_vol__b_dynBal_Medium_specificInternalEnergy,0}};
#define boxvar_pump__v3__basicCold__t_plugFlowPipe_vol__b_dynBal_Medium_specificInternalEnergy MMC_REFSTRUCTLIT(boxvar_lit_pump__v3__basicCold__t_plugFlowPipe_vol__b_dynBal_Medium_specificInternalEnergy)


DLLDirection
pump__v3__basicCold__t_plugFlowPipe1_Medium_ThermodynamicState omc_pump__v3__basicCold__t_plugFlowPipe1_Medium_ThermodynamicState (threadData_t *threadData, modelica_real omc_p, modelica_real omc_T);

DLLDirection
modelica_metatype boxptr_pump__v3__basicCold__t_plugFlowPipe1_Medium_ThermodynamicState(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T);
static const MMC_DEFSTRUCTLIT(boxvar_lit_pump__v3__basicCold__t_plugFlowPipe1_Medium_ThermodynamicState,2,0) {(void*) boxptr_pump__v3__basicCold__t_plugFlowPipe1_Medium_ThermodynamicState,0}};
#define boxvar_pump__v3__basicCold__t_plugFlowPipe1_Medium_ThermodynamicState MMC_REFSTRUCTLIT(boxvar_lit_pump__v3__basicCold__t_plugFlowPipe1_Medium_ThermodynamicState)


DLLDirection
modelica_real omc_pump__v3__basicCold__t_plugFlowPipe1_Medium_specificHeatCapacityCp(threadData_t *threadData, pump__v3__basicCold__t_plugFlowPipe1_Medium_ThermodynamicState _state);
DLLDirection
modelica_metatype boxptr_pump__v3__basicCold__t_plugFlowPipe1_Medium_specificHeatCapacityCp(threadData_t *threadData, modelica_metatype _state);
static const MMC_DEFSTRUCTLIT(boxvar_lit_pump__v3__basicCold__t_plugFlowPipe1_Medium_specificHeatCapacityCp,2,0) {(void*) boxptr_pump__v3__basicCold__t_plugFlowPipe1_Medium_specificHeatCapacityCp,0}};
#define boxvar_pump__v3__basicCold__t_plugFlowPipe1_Medium_specificHeatCapacityCp MMC_REFSTRUCTLIT(boxvar_lit_pump__v3__basicCold__t_plugFlowPipe1_Medium_specificHeatCapacityCp)


DLLDirection
pump__v3__basicCold__t_plugFlowPipe1_del_Medium_ThermodynamicState omc_pump__v3__basicCold__t_plugFlowPipe1_del_Medium_ThermodynamicState (threadData_t *threadData, modelica_real omc_p, modelica_real omc_T);

DLLDirection
modelica_metatype boxptr_pump__v3__basicCold__t_plugFlowPipe1_del_Medium_ThermodynamicState(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T);
static const MMC_DEFSTRUCTLIT(boxvar_lit_pump__v3__basicCold__t_plugFlowPipe1_del_Medium_ThermodynamicState,2,0) {(void*) boxptr_pump__v3__basicCold__t_plugFlowPipe1_del_Medium_ThermodynamicState,0}};
#define boxvar_pump__v3__basicCold__t_plugFlowPipe1_del_Medium_ThermodynamicState MMC_REFSTRUCTLIT(boxvar_lit_pump__v3__basicCold__t_plugFlowPipe1_del_Medium_ThermodynamicState)


DLLDirection
modelica_real omc_pump__v3__basicCold__t_plugFlowPipe1_del_Medium_density(threadData_t *threadData, pump__v3__basicCold__t_plugFlowPipe1_del_Medium_ThermodynamicState _state);
DLLDirection
modelica_metatype boxptr_pump__v3__basicCold__t_plugFlowPipe1_del_Medium_density(threadData_t *threadData, modelica_metatype _state);
static const MMC_DEFSTRUCTLIT(boxvar_lit_pump__v3__basicCold__t_plugFlowPipe1_del_Medium_density,2,0) {(void*) boxptr_pump__v3__basicCold__t_plugFlowPipe1_del_Medium_density,0}};
#define boxvar_pump__v3__basicCold__t_plugFlowPipe1_del_Medium_density MMC_REFSTRUCTLIT(boxvar_lit_pump__v3__basicCold__t_plugFlowPipe1_del_Medium_density)


DLLDirection
pump__v3__basicCold__t_plugFlowPipe1_del_Medium_ThermodynamicState omc_pump__v3__basicCold__t_plugFlowPipe1_del_Medium_setState__pTX(threadData_t *threadData, modelica_real _p, modelica_real _T, real_array _X);
DLLDirection
modelica_metatype boxptr_pump__v3__basicCold__t_plugFlowPipe1_del_Medium_setState__pTX(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T, modelica_metatype _X);
static const MMC_DEFSTRUCTLIT(boxvar_lit_pump__v3__basicCold__t_plugFlowPipe1_del_Medium_setState__pTX,2,0) {(void*) boxptr_pump__v3__basicCold__t_plugFlowPipe1_del_Medium_setState__pTX,0}};
#define boxvar_pump__v3__basicCold__t_plugFlowPipe1_del_Medium_setState__pTX MMC_REFSTRUCTLIT(boxvar_lit_pump__v3__basicCold__t_plugFlowPipe1_del_Medium_setState__pTX)


DLLDirection
pump__v3__basicCold__t_plugFlowPipe1_del_Medium_ThermodynamicState omc_pump__v3__basicCold__t_plugFlowPipe1_del_Medium_setState__phX(threadData_t *threadData, modelica_real _p, modelica_real _h, real_array _X);
DLLDirection
modelica_metatype boxptr_pump__v3__basicCold__t_plugFlowPipe1_del_Medium_setState__phX(threadData_t *threadData, modelica_metatype _p, modelica_metatype _h, modelica_metatype _X);
static const MMC_DEFSTRUCTLIT(boxvar_lit_pump__v3__basicCold__t_plugFlowPipe1_del_Medium_setState__phX,2,0) {(void*) boxptr_pump__v3__basicCold__t_plugFlowPipe1_del_Medium_setState__phX,0}};
#define boxvar_pump__v3__basicCold__t_plugFlowPipe1_del_Medium_setState__phX MMC_REFSTRUCTLIT(boxvar_lit_pump__v3__basicCold__t_plugFlowPipe1_del_Medium_setState__phX)


DLLDirection
modelica_real omc_pump__v3__basicCold__t_plugFlowPipe1_del_Medium_specificEnthalpy(threadData_t *threadData, pump__v3__basicCold__t_plugFlowPipe1_del_Medium_ThermodynamicState _state);
DLLDirection
modelica_metatype boxptr_pump__v3__basicCold__t_plugFlowPipe1_del_Medium_specificEnthalpy(threadData_t *threadData, modelica_metatype _state);
static const MMC_DEFSTRUCTLIT(boxvar_lit_pump__v3__basicCold__t_plugFlowPipe1_del_Medium_specificEnthalpy,2,0) {(void*) boxptr_pump__v3__basicCold__t_plugFlowPipe1_del_Medium_specificEnthalpy,0}};
#define boxvar_pump__v3__basicCold__t_plugFlowPipe1_del_Medium_specificEnthalpy MMC_REFSTRUCTLIT(boxvar_lit_pump__v3__basicCold__t_plugFlowPipe1_del_Medium_specificEnthalpy)


DLLDirection
pump__v3__basicCold__t_plugFlowPipe1_heaLos__a_Medium_ThermodynamicState omc_pump__v3__basicCold__t_plugFlowPipe1_heaLos__a_Medium_ThermodynamicState (threadData_t *threadData, modelica_real omc_p, modelica_real omc_T);

DLLDirection
modelica_metatype boxptr_pump__v3__basicCold__t_plugFlowPipe1_heaLos__a_Medium_ThermodynamicState(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T);
static const MMC_DEFSTRUCTLIT(boxvar_lit_pump__v3__basicCold__t_plugFlowPipe1_heaLos__a_Medium_ThermodynamicState,2,0) {(void*) boxptr_pump__v3__basicCold__t_plugFlowPipe1_heaLos__a_Medium_ThermodynamicState,0}};
#define boxvar_pump__v3__basicCold__t_plugFlowPipe1_heaLos__a_Medium_ThermodynamicState MMC_REFSTRUCTLIT(boxvar_lit_pump__v3__basicCold__t_plugFlowPipe1_heaLos__a_Medium_ThermodynamicState)


DLLDirection
pump__v3__basicCold__t_plugFlowPipe1_heaLos__a_Medium_ThermodynamicState omc_pump__v3__basicCold__t_plugFlowPipe1_heaLos__a_Medium_setState__pTX(threadData_t *threadData, modelica_real _p, modelica_real _T, real_array _X);
DLLDirection
modelica_metatype boxptr_pump__v3__basicCold__t_plugFlowPipe1_heaLos__a_Medium_setState__pTX(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T, modelica_metatype _X);
static const MMC_DEFSTRUCTLIT(boxvar_lit_pump__v3__basicCold__t_plugFlowPipe1_heaLos__a_Medium_setState__pTX,2,0) {(void*) boxptr_pump__v3__basicCold__t_plugFlowPipe1_heaLos__a_Medium_setState__pTX,0}};
#define boxvar_pump__v3__basicCold__t_plugFlowPipe1_heaLos__a_Medium_setState__pTX MMC_REFSTRUCTLIT(boxvar_lit_pump__v3__basicCold__t_plugFlowPipe1_heaLos__a_Medium_setState__pTX)


DLLDirection
pump__v3__basicCold__t_plugFlowPipe1_heaLos__a_Medium_ThermodynamicState omc_pump__v3__basicCold__t_plugFlowPipe1_heaLos__a_Medium_setState__phX(threadData_t *threadData, modelica_real _p, modelica_real _h, real_array _X);
DLLDirection
modelica_metatype boxptr_pump__v3__basicCold__t_plugFlowPipe1_heaLos__a_Medium_setState__phX(threadData_t *threadData, modelica_metatype _p, modelica_metatype _h, modelica_metatype _X);
static const MMC_DEFSTRUCTLIT(boxvar_lit_pump__v3__basicCold__t_plugFlowPipe1_heaLos__a_Medium_setState__phX,2,0) {(void*) boxptr_pump__v3__basicCold__t_plugFlowPipe1_heaLos__a_Medium_setState__phX,0}};
#define boxvar_pump__v3__basicCold__t_plugFlowPipe1_heaLos__a_Medium_setState__phX MMC_REFSTRUCTLIT(boxvar_lit_pump__v3__basicCold__t_plugFlowPipe1_heaLos__a_Medium_setState__phX)


DLLDirection
modelica_real omc_pump__v3__basicCold__t_plugFlowPipe1_heaLos__a_Medium_specificEnthalpy(threadData_t *threadData, pump__v3__basicCold__t_plugFlowPipe1_heaLos__a_Medium_ThermodynamicState _state);
DLLDirection
modelica_metatype boxptr_pump__v3__basicCold__t_plugFlowPipe1_heaLos__a_Medium_specificEnthalpy(threadData_t *threadData, modelica_metatype _state);
static const MMC_DEFSTRUCTLIT(boxvar_lit_pump__v3__basicCold__t_plugFlowPipe1_heaLos__a_Medium_specificEnthalpy,2,0) {(void*) boxptr_pump__v3__basicCold__t_plugFlowPipe1_heaLos__a_Medium_specificEnthalpy,0}};
#define boxvar_pump__v3__basicCold__t_plugFlowPipe1_heaLos__a_Medium_specificEnthalpy MMC_REFSTRUCTLIT(boxvar_lit_pump__v3__basicCold__t_plugFlowPipe1_heaLos__a_Medium_specificEnthalpy)


DLLDirection
modelica_real omc_pump__v3__basicCold__t_plugFlowPipe1_heaLos__a_Medium_specificHeatCapacityCp(threadData_t *threadData, pump__v3__basicCold__t_plugFlowPipe1_heaLos__a_Medium_ThermodynamicState _state);
DLLDirection
modelica_metatype boxptr_pump__v3__basicCold__t_plugFlowPipe1_heaLos__a_Medium_specificHeatCapacityCp(threadData_t *threadData, modelica_metatype _state);
static const MMC_DEFSTRUCTLIT(boxvar_lit_pump__v3__basicCold__t_plugFlowPipe1_heaLos__a_Medium_specificHeatCapacityCp,2,0) {(void*) boxptr_pump__v3__basicCold__t_plugFlowPipe1_heaLos__a_Medium_specificHeatCapacityCp,0}};
#define boxvar_pump__v3__basicCold__t_plugFlowPipe1_heaLos__a_Medium_specificHeatCapacityCp MMC_REFSTRUCTLIT(boxvar_lit_pump__v3__basicCold__t_plugFlowPipe1_heaLos__a_Medium_specificHeatCapacityCp)


DLLDirection
modelica_real omc_pump__v3__basicCold__t_plugFlowPipe1_heaLos__a_Medium_temperature(threadData_t *threadData, pump__v3__basicCold__t_plugFlowPipe1_heaLos__a_Medium_ThermodynamicState _state);
DLLDirection
modelica_metatype boxptr_pump__v3__basicCold__t_plugFlowPipe1_heaLos__a_Medium_temperature(threadData_t *threadData, modelica_metatype _state);
static const MMC_DEFSTRUCTLIT(boxvar_lit_pump__v3__basicCold__t_plugFlowPipe1_heaLos__a_Medium_temperature,2,0) {(void*) boxptr_pump__v3__basicCold__t_plugFlowPipe1_heaLos__a_Medium_temperature,0}};
#define boxvar_pump__v3__basicCold__t_plugFlowPipe1_heaLos__a_Medium_temperature MMC_REFSTRUCTLIT(boxvar_lit_pump__v3__basicCold__t_plugFlowPipe1_heaLos__a_Medium_temperature)


DLLDirection
pump__v3__basicCold__t_plugFlowPipe1_heaLos__b_Medium_ThermodynamicState omc_pump__v3__basicCold__t_plugFlowPipe1_heaLos__b_Medium_ThermodynamicState (threadData_t *threadData, modelica_real omc_p, modelica_real omc_T);

DLLDirection
modelica_metatype boxptr_pump__v3__basicCold__t_plugFlowPipe1_heaLos__b_Medium_ThermodynamicState(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T);
static const MMC_DEFSTRUCTLIT(boxvar_lit_pump__v3__basicCold__t_plugFlowPipe1_heaLos__b_Medium_ThermodynamicState,2,0) {(void*) boxptr_pump__v3__basicCold__t_plugFlowPipe1_heaLos__b_Medium_ThermodynamicState,0}};
#define boxvar_pump__v3__basicCold__t_plugFlowPipe1_heaLos__b_Medium_ThermodynamicState MMC_REFSTRUCTLIT(boxvar_lit_pump__v3__basicCold__t_plugFlowPipe1_heaLos__b_Medium_ThermodynamicState)


DLLDirection
pump__v3__basicCold__t_plugFlowPipe1_heaLos__b_Medium_ThermodynamicState omc_pump__v3__basicCold__t_plugFlowPipe1_heaLos__b_Medium_setState__pTX(threadData_t *threadData, modelica_real _p, modelica_real _T, real_array _X);
DLLDirection
modelica_metatype boxptr_pump__v3__basicCold__t_plugFlowPipe1_heaLos__b_Medium_setState__pTX(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T, modelica_metatype _X);
static const MMC_DEFSTRUCTLIT(boxvar_lit_pump__v3__basicCold__t_plugFlowPipe1_heaLos__b_Medium_setState__pTX,2,0) {(void*) boxptr_pump__v3__basicCold__t_plugFlowPipe1_heaLos__b_Medium_setState__pTX,0}};
#define boxvar_pump__v3__basicCold__t_plugFlowPipe1_heaLos__b_Medium_setState__pTX MMC_REFSTRUCTLIT(boxvar_lit_pump__v3__basicCold__t_plugFlowPipe1_heaLos__b_Medium_setState__pTX)


DLLDirection
pump__v3__basicCold__t_plugFlowPipe1_heaLos__b_Medium_ThermodynamicState omc_pump__v3__basicCold__t_plugFlowPipe1_heaLos__b_Medium_setState__phX(threadData_t *threadData, modelica_real _p, modelica_real _h, real_array _X);
DLLDirection
modelica_metatype boxptr_pump__v3__basicCold__t_plugFlowPipe1_heaLos__b_Medium_setState__phX(threadData_t *threadData, modelica_metatype _p, modelica_metatype _h, modelica_metatype _X);
static const MMC_DEFSTRUCTLIT(boxvar_lit_pump__v3__basicCold__t_plugFlowPipe1_heaLos__b_Medium_setState__phX,2,0) {(void*) boxptr_pump__v3__basicCold__t_plugFlowPipe1_heaLos__b_Medium_setState__phX,0}};
#define boxvar_pump__v3__basicCold__t_plugFlowPipe1_heaLos__b_Medium_setState__phX MMC_REFSTRUCTLIT(boxvar_lit_pump__v3__basicCold__t_plugFlowPipe1_heaLos__b_Medium_setState__phX)


DLLDirection
modelica_real omc_pump__v3__basicCold__t_plugFlowPipe1_heaLos__b_Medium_specificEnthalpy(threadData_t *threadData, pump__v3__basicCold__t_plugFlowPipe1_heaLos__b_Medium_ThermodynamicState _state);
DLLDirection
modelica_metatype boxptr_pump__v3__basicCold__t_plugFlowPipe1_heaLos__b_Medium_specificEnthalpy(threadData_t *threadData, modelica_metatype _state);
static const MMC_DEFSTRUCTLIT(boxvar_lit_pump__v3__basicCold__t_plugFlowPipe1_heaLos__b_Medium_specificEnthalpy,2,0) {(void*) boxptr_pump__v3__basicCold__t_plugFlowPipe1_heaLos__b_Medium_specificEnthalpy,0}};
#define boxvar_pump__v3__basicCold__t_plugFlowPipe1_heaLos__b_Medium_specificEnthalpy MMC_REFSTRUCTLIT(boxvar_lit_pump__v3__basicCold__t_plugFlowPipe1_heaLos__b_Medium_specificEnthalpy)


DLLDirection
modelica_real omc_pump__v3__basicCold__t_plugFlowPipe1_heaLos__b_Medium_specificHeatCapacityCp(threadData_t *threadData, pump__v3__basicCold__t_plugFlowPipe1_heaLos__b_Medium_ThermodynamicState _state);
DLLDirection
modelica_metatype boxptr_pump__v3__basicCold__t_plugFlowPipe1_heaLos__b_Medium_specificHeatCapacityCp(threadData_t *threadData, modelica_metatype _state);
static const MMC_DEFSTRUCTLIT(boxvar_lit_pump__v3__basicCold__t_plugFlowPipe1_heaLos__b_Medium_specificHeatCapacityCp,2,0) {(void*) boxptr_pump__v3__basicCold__t_plugFlowPipe1_heaLos__b_Medium_specificHeatCapacityCp,0}};
#define boxvar_pump__v3__basicCold__t_plugFlowPipe1_heaLos__b_Medium_specificHeatCapacityCp MMC_REFSTRUCTLIT(boxvar_lit_pump__v3__basicCold__t_plugFlowPipe1_heaLos__b_Medium_specificHeatCapacityCp)


DLLDirection
modelica_real omc_pump__v3__basicCold__t_plugFlowPipe1_heaLos__b_Medium_temperature(threadData_t *threadData, pump__v3__basicCold__t_plugFlowPipe1_heaLos__b_Medium_ThermodynamicState _state);
DLLDirection
modelica_metatype boxptr_pump__v3__basicCold__t_plugFlowPipe1_heaLos__b_Medium_temperature(threadData_t *threadData, modelica_metatype _state);
static const MMC_DEFSTRUCTLIT(boxvar_lit_pump__v3__basicCold__t_plugFlowPipe1_heaLos__b_Medium_temperature,2,0) {(void*) boxptr_pump__v3__basicCold__t_plugFlowPipe1_heaLos__b_Medium_temperature,0}};
#define boxvar_pump__v3__basicCold__t_plugFlowPipe1_heaLos__b_Medium_temperature MMC_REFSTRUCTLIT(boxvar_lit_pump__v3__basicCold__t_plugFlowPipe1_heaLos__b_Medium_temperature)


DLLDirection
pump__v3__basicCold__t_plugFlowPipe1_res_Medium_ThermodynamicState omc_pump__v3__basicCold__t_plugFlowPipe1_res_Medium_ThermodynamicState (threadData_t *threadData, modelica_real omc_p, modelica_real omc_T);

DLLDirection
modelica_metatype boxptr_pump__v3__basicCold__t_plugFlowPipe1_res_Medium_ThermodynamicState(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T);
static const MMC_DEFSTRUCTLIT(boxvar_lit_pump__v3__basicCold__t_plugFlowPipe1_res_Medium_ThermodynamicState,2,0) {(void*) boxptr_pump__v3__basicCold__t_plugFlowPipe1_res_Medium_ThermodynamicState,0}};
#define boxvar_pump__v3__basicCold__t_plugFlowPipe1_res_Medium_ThermodynamicState MMC_REFSTRUCTLIT(boxvar_lit_pump__v3__basicCold__t_plugFlowPipe1_res_Medium_ThermodynamicState)


DLLDirection
pump__v3__basicCold__t_plugFlowPipe1_vol__a_Medium_ThermodynamicState omc_pump__v3__basicCold__t_plugFlowPipe1_vol__a_Medium_ThermodynamicState (threadData_t *threadData, modelica_real omc_p, modelica_real omc_T);

DLLDirection
modelica_metatype boxptr_pump__v3__basicCold__t_plugFlowPipe1_vol__a_Medium_ThermodynamicState(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T);
static const MMC_DEFSTRUCTLIT(boxvar_lit_pump__v3__basicCold__t_plugFlowPipe1_vol__a_Medium_ThermodynamicState,2,0) {(void*) boxptr_pump__v3__basicCold__t_plugFlowPipe1_vol__a_Medium_ThermodynamicState,0}};
#define boxvar_pump__v3__basicCold__t_plugFlowPipe1_vol__a_Medium_ThermodynamicState MMC_REFSTRUCTLIT(boxvar_lit_pump__v3__basicCold__t_plugFlowPipe1_vol__a_Medium_ThermodynamicState)


DLLDirection
modelica_real omc_pump__v3__basicCold__t_plugFlowPipe1_vol__a_Medium_density(threadData_t *threadData, pump__v3__basicCold__t_plugFlowPipe1_vol__a_Medium_ThermodynamicState _state);
DLLDirection
modelica_metatype boxptr_pump__v3__basicCold__t_plugFlowPipe1_vol__a_Medium_density(threadData_t *threadData, modelica_metatype _state);
static const MMC_DEFSTRUCTLIT(boxvar_lit_pump__v3__basicCold__t_plugFlowPipe1_vol__a_Medium_density,2,0) {(void*) boxptr_pump__v3__basicCold__t_plugFlowPipe1_vol__a_Medium_density,0}};
#define boxvar_pump__v3__basicCold__t_plugFlowPipe1_vol__a_Medium_density MMC_REFSTRUCTLIT(boxvar_lit_pump__v3__basicCold__t_plugFlowPipe1_vol__a_Medium_density)


DLLDirection
modelica_real omc_pump__v3__basicCold__t_plugFlowPipe1_vol__a_Medium_temperature__phX(threadData_t *threadData, modelica_real _p, modelica_real _h, real_array _X);
DLLDirection
modelica_metatype boxptr_pump__v3__basicCold__t_plugFlowPipe1_vol__a_Medium_temperature__phX(threadData_t *threadData, modelica_metatype _p, modelica_metatype _h, modelica_metatype _X);
static const MMC_DEFSTRUCTLIT(boxvar_lit_pump__v3__basicCold__t_plugFlowPipe1_vol__a_Medium_temperature__phX,2,0) {(void*) boxptr_pump__v3__basicCold__t_plugFlowPipe1_vol__a_Medium_temperature__phX,0}};
#define boxvar_pump__v3__basicCold__t_plugFlowPipe1_vol__a_Medium_temperature__phX MMC_REFSTRUCTLIT(boxvar_lit_pump__v3__basicCold__t_plugFlowPipe1_vol__a_Medium_temperature__phX)


DLLDirection
pump__v3__basicCold__t_plugFlowPipe1_vol__a_dynBal_Medium_ThermodynamicState omc_pump__v3__basicCold__t_plugFlowPipe1_vol__a_dynBal_Medium_ThermodynamicState (threadData_t *threadData, modelica_real omc_p, modelica_real omc_T);

DLLDirection
modelica_metatype boxptr_pump__v3__basicCold__t_plugFlowPipe1_vol__a_dynBal_Medium_ThermodynamicState(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T);
static const MMC_DEFSTRUCTLIT(boxvar_lit_pump__v3__basicCold__t_plugFlowPipe1_vol__a_dynBal_Medium_ThermodynamicState,2,0) {(void*) boxptr_pump__v3__basicCold__t_plugFlowPipe1_vol__a_dynBal_Medium_ThermodynamicState,0}};
#define boxvar_pump__v3__basicCold__t_plugFlowPipe1_vol__a_dynBal_Medium_ThermodynamicState MMC_REFSTRUCTLIT(boxvar_lit_pump__v3__basicCold__t_plugFlowPipe1_vol__a_dynBal_Medium_ThermodynamicState)


DLLDirection
modelica_real omc_pump__v3__basicCold__t_plugFlowPipe1_vol__a_dynBal_Medium_density(threadData_t *threadData, pump__v3__basicCold__t_plugFlowPipe1_vol__a_dynBal_Medium_ThermodynamicState _state);
DLLDirection
modelica_metatype boxptr_pump__v3__basicCold__t_plugFlowPipe1_vol__a_dynBal_Medium_density(threadData_t *threadData, modelica_metatype _state);
static const MMC_DEFSTRUCTLIT(boxvar_lit_pump__v3__basicCold__t_plugFlowPipe1_vol__a_dynBal_Medium_density,2,0) {(void*) boxptr_pump__v3__basicCold__t_plugFlowPipe1_vol__a_dynBal_Medium_density,0}};
#define boxvar_pump__v3__basicCold__t_plugFlowPipe1_vol__a_dynBal_Medium_density MMC_REFSTRUCTLIT(boxvar_lit_pump__v3__basicCold__t_plugFlowPipe1_vol__a_dynBal_Medium_density)


DLLDirection
pump__v3__basicCold__t_plugFlowPipe1_vol__a_dynBal_Medium_ThermodynamicState omc_pump__v3__basicCold__t_plugFlowPipe1_vol__a_dynBal_Medium_setState__pTX(threadData_t *threadData, modelica_real _p, modelica_real _T, real_array _X);
DLLDirection
modelica_metatype boxptr_pump__v3__basicCold__t_plugFlowPipe1_vol__a_dynBal_Medium_setState__pTX(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T, modelica_metatype _X);
static const MMC_DEFSTRUCTLIT(boxvar_lit_pump__v3__basicCold__t_plugFlowPipe1_vol__a_dynBal_Medium_setState__pTX,2,0) {(void*) boxptr_pump__v3__basicCold__t_plugFlowPipe1_vol__a_dynBal_Medium_setState__pTX,0}};
#define boxvar_pump__v3__basicCold__t_plugFlowPipe1_vol__a_dynBal_Medium_setState__pTX MMC_REFSTRUCTLIT(boxvar_lit_pump__v3__basicCold__t_plugFlowPipe1_vol__a_dynBal_Medium_setState__pTX)


DLLDirection
modelica_real omc_pump__v3__basicCold__t_plugFlowPipe1_vol__a_dynBal_Medium_specificEnthalpy__pTX(threadData_t *threadData, modelica_real _p, modelica_real _T, real_array _X);
DLLDirection
modelica_metatype boxptr_pump__v3__basicCold__t_plugFlowPipe1_vol__a_dynBal_Medium_specificEnthalpy__pTX(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T, modelica_metatype _X);
static const MMC_DEFSTRUCTLIT(boxvar_lit_pump__v3__basicCold__t_plugFlowPipe1_vol__a_dynBal_Medium_specificEnthalpy__pTX,2,0) {(void*) boxptr_pump__v3__basicCold__t_plugFlowPipe1_vol__a_dynBal_Medium_specificEnthalpy__pTX,0}};
#define boxvar_pump__v3__basicCold__t_plugFlowPipe1_vol__a_dynBal_Medium_specificEnthalpy__pTX MMC_REFSTRUCTLIT(boxvar_lit_pump__v3__basicCold__t_plugFlowPipe1_vol__a_dynBal_Medium_specificEnthalpy__pTX)


DLLDirection
modelica_real omc_pump__v3__basicCold__t_plugFlowPipe1_vol__a_dynBal_Medium_specificInternalEnergy(threadData_t *threadData, pump__v3__basicCold__t_plugFlowPipe1_vol__a_dynBal_Medium_ThermodynamicState _state);
DLLDirection
modelica_metatype boxptr_pump__v3__basicCold__t_plugFlowPipe1_vol__a_dynBal_Medium_specificInternalEnergy(threadData_t *threadData, modelica_metatype _state);
static const MMC_DEFSTRUCTLIT(boxvar_lit_pump__v3__basicCold__t_plugFlowPipe1_vol__a_dynBal_Medium_specificInternalEnergy,2,0) {(void*) boxptr_pump__v3__basicCold__t_plugFlowPipe1_vol__a_dynBal_Medium_specificInternalEnergy,0}};
#define boxvar_pump__v3__basicCold__t_plugFlowPipe1_vol__a_dynBal_Medium_specificInternalEnergy MMC_REFSTRUCTLIT(boxvar_lit_pump__v3__basicCold__t_plugFlowPipe1_vol__a_dynBal_Medium_specificInternalEnergy)


DLLDirection
pump__v3__basicCold__t_plugFlowPipe1_vol__b_Medium_ThermodynamicState omc_pump__v3__basicCold__t_plugFlowPipe1_vol__b_Medium_ThermodynamicState (threadData_t *threadData, modelica_real omc_p, modelica_real omc_T);

DLLDirection
modelica_metatype boxptr_pump__v3__basicCold__t_plugFlowPipe1_vol__b_Medium_ThermodynamicState(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T);
static const MMC_DEFSTRUCTLIT(boxvar_lit_pump__v3__basicCold__t_plugFlowPipe1_vol__b_Medium_ThermodynamicState,2,0) {(void*) boxptr_pump__v3__basicCold__t_plugFlowPipe1_vol__b_Medium_ThermodynamicState,0}};
#define boxvar_pump__v3__basicCold__t_plugFlowPipe1_vol__b_Medium_ThermodynamicState MMC_REFSTRUCTLIT(boxvar_lit_pump__v3__basicCold__t_plugFlowPipe1_vol__b_Medium_ThermodynamicState)


DLLDirection
modelica_real omc_pump__v3__basicCold__t_plugFlowPipe1_vol__b_Medium_density(threadData_t *threadData, pump__v3__basicCold__t_plugFlowPipe1_vol__b_Medium_ThermodynamicState _state);
DLLDirection
modelica_metatype boxptr_pump__v3__basicCold__t_plugFlowPipe1_vol__b_Medium_density(threadData_t *threadData, modelica_metatype _state);
static const MMC_DEFSTRUCTLIT(boxvar_lit_pump__v3__basicCold__t_plugFlowPipe1_vol__b_Medium_density,2,0) {(void*) boxptr_pump__v3__basicCold__t_plugFlowPipe1_vol__b_Medium_density,0}};
#define boxvar_pump__v3__basicCold__t_plugFlowPipe1_vol__b_Medium_density MMC_REFSTRUCTLIT(boxvar_lit_pump__v3__basicCold__t_plugFlowPipe1_vol__b_Medium_density)


DLLDirection
modelica_real omc_pump__v3__basicCold__t_plugFlowPipe1_vol__b_Medium_temperature__phX(threadData_t *threadData, modelica_real _p, modelica_real _h, real_array _X);
DLLDirection
modelica_metatype boxptr_pump__v3__basicCold__t_plugFlowPipe1_vol__b_Medium_temperature__phX(threadData_t *threadData, modelica_metatype _p, modelica_metatype _h, modelica_metatype _X);
static const MMC_DEFSTRUCTLIT(boxvar_lit_pump__v3__basicCold__t_plugFlowPipe1_vol__b_Medium_temperature__phX,2,0) {(void*) boxptr_pump__v3__basicCold__t_plugFlowPipe1_vol__b_Medium_temperature__phX,0}};
#define boxvar_pump__v3__basicCold__t_plugFlowPipe1_vol__b_Medium_temperature__phX MMC_REFSTRUCTLIT(boxvar_lit_pump__v3__basicCold__t_plugFlowPipe1_vol__b_Medium_temperature__phX)


DLLDirection
pump__v3__basicCold__t_plugFlowPipe1_vol__b_dynBal_Medium_ThermodynamicState omc_pump__v3__basicCold__t_plugFlowPipe1_vol__b_dynBal_Medium_ThermodynamicState (threadData_t *threadData, modelica_real omc_p, modelica_real omc_T);

DLLDirection
modelica_metatype boxptr_pump__v3__basicCold__t_plugFlowPipe1_vol__b_dynBal_Medium_ThermodynamicState(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T);
static const MMC_DEFSTRUCTLIT(boxvar_lit_pump__v3__basicCold__t_plugFlowPipe1_vol__b_dynBal_Medium_ThermodynamicState,2,0) {(void*) boxptr_pump__v3__basicCold__t_plugFlowPipe1_vol__b_dynBal_Medium_ThermodynamicState,0}};
#define boxvar_pump__v3__basicCold__t_plugFlowPipe1_vol__b_dynBal_Medium_ThermodynamicState MMC_REFSTRUCTLIT(boxvar_lit_pump__v3__basicCold__t_plugFlowPipe1_vol__b_dynBal_Medium_ThermodynamicState)


DLLDirection
modelica_real omc_pump__v3__basicCold__t_plugFlowPipe1_vol__b_dynBal_Medium_density(threadData_t *threadData, pump__v3__basicCold__t_plugFlowPipe1_vol__b_dynBal_Medium_ThermodynamicState _state);
DLLDirection
modelica_metatype boxptr_pump__v3__basicCold__t_plugFlowPipe1_vol__b_dynBal_Medium_density(threadData_t *threadData, modelica_metatype _state);
static const MMC_DEFSTRUCTLIT(boxvar_lit_pump__v3__basicCold__t_plugFlowPipe1_vol__b_dynBal_Medium_density,2,0) {(void*) boxptr_pump__v3__basicCold__t_plugFlowPipe1_vol__b_dynBal_Medium_density,0}};
#define boxvar_pump__v3__basicCold__t_plugFlowPipe1_vol__b_dynBal_Medium_density MMC_REFSTRUCTLIT(boxvar_lit_pump__v3__basicCold__t_plugFlowPipe1_vol__b_dynBal_Medium_density)


DLLDirection
pump__v3__basicCold__t_plugFlowPipe1_vol__b_dynBal_Medium_ThermodynamicState omc_pump__v3__basicCold__t_plugFlowPipe1_vol__b_dynBal_Medium_setState__pTX(threadData_t *threadData, modelica_real _p, modelica_real _T, real_array _X);
DLLDirection
modelica_metatype boxptr_pump__v3__basicCold__t_plugFlowPipe1_vol__b_dynBal_Medium_setState__pTX(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T, modelica_metatype _X);
static const MMC_DEFSTRUCTLIT(boxvar_lit_pump__v3__basicCold__t_plugFlowPipe1_vol__b_dynBal_Medium_setState__pTX,2,0) {(void*) boxptr_pump__v3__basicCold__t_plugFlowPipe1_vol__b_dynBal_Medium_setState__pTX,0}};
#define boxvar_pump__v3__basicCold__t_plugFlowPipe1_vol__b_dynBal_Medium_setState__pTX MMC_REFSTRUCTLIT(boxvar_lit_pump__v3__basicCold__t_plugFlowPipe1_vol__b_dynBal_Medium_setState__pTX)


DLLDirection
modelica_real omc_pump__v3__basicCold__t_plugFlowPipe1_vol__b_dynBal_Medium_specificEnthalpy__pTX(threadData_t *threadData, modelica_real _p, modelica_real _T, real_array _X);
DLLDirection
modelica_metatype boxptr_pump__v3__basicCold__t_plugFlowPipe1_vol__b_dynBal_Medium_specificEnthalpy__pTX(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T, modelica_metatype _X);
static const MMC_DEFSTRUCTLIT(boxvar_lit_pump__v3__basicCold__t_plugFlowPipe1_vol__b_dynBal_Medium_specificEnthalpy__pTX,2,0) {(void*) boxptr_pump__v3__basicCold__t_plugFlowPipe1_vol__b_dynBal_Medium_specificEnthalpy__pTX,0}};
#define boxvar_pump__v3__basicCold__t_plugFlowPipe1_vol__b_dynBal_Medium_specificEnthalpy__pTX MMC_REFSTRUCTLIT(boxvar_lit_pump__v3__basicCold__t_plugFlowPipe1_vol__b_dynBal_Medium_specificEnthalpy__pTX)


DLLDirection
modelica_real omc_pump__v3__basicCold__t_plugFlowPipe1_vol__b_dynBal_Medium_specificInternalEnergy(threadData_t *threadData, pump__v3__basicCold__t_plugFlowPipe1_vol__b_dynBal_Medium_ThermodynamicState _state);
DLLDirection
modelica_metatype boxptr_pump__v3__basicCold__t_plugFlowPipe1_vol__b_dynBal_Medium_specificInternalEnergy(threadData_t *threadData, modelica_metatype _state);
static const MMC_DEFSTRUCTLIT(boxvar_lit_pump__v3__basicCold__t_plugFlowPipe1_vol__b_dynBal_Medium_specificInternalEnergy,2,0) {(void*) boxptr_pump__v3__basicCold__t_plugFlowPipe1_vol__b_dynBal_Medium_specificInternalEnergy,0}};
#define boxvar_pump__v3__basicCold__t_plugFlowPipe1_vol__b_dynBal_Medium_specificInternalEnergy MMC_REFSTRUCTLIT(boxvar_lit_pump__v3__basicCold__t_plugFlowPipe1_vol__b_dynBal_Medium_specificInternalEnergy)


DLLDirection
pump__v3__basicCold__t_plugFlowPipe2_Medium_ThermodynamicState omc_pump__v3__basicCold__t_plugFlowPipe2_Medium_ThermodynamicState (threadData_t *threadData, modelica_real omc_p, modelica_real omc_T);

DLLDirection
modelica_metatype boxptr_pump__v3__basicCold__t_plugFlowPipe2_Medium_ThermodynamicState(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T);
static const MMC_DEFSTRUCTLIT(boxvar_lit_pump__v3__basicCold__t_plugFlowPipe2_Medium_ThermodynamicState,2,0) {(void*) boxptr_pump__v3__basicCold__t_plugFlowPipe2_Medium_ThermodynamicState,0}};
#define boxvar_pump__v3__basicCold__t_plugFlowPipe2_Medium_ThermodynamicState MMC_REFSTRUCTLIT(boxvar_lit_pump__v3__basicCold__t_plugFlowPipe2_Medium_ThermodynamicState)


DLLDirection
modelica_real omc_pump__v3__basicCold__t_plugFlowPipe2_Medium_specificHeatCapacityCp(threadData_t *threadData, pump__v3__basicCold__t_plugFlowPipe2_Medium_ThermodynamicState _state);
DLLDirection
modelica_metatype boxptr_pump__v3__basicCold__t_plugFlowPipe2_Medium_specificHeatCapacityCp(threadData_t *threadData, modelica_metatype _state);
static const MMC_DEFSTRUCTLIT(boxvar_lit_pump__v3__basicCold__t_plugFlowPipe2_Medium_specificHeatCapacityCp,2,0) {(void*) boxptr_pump__v3__basicCold__t_plugFlowPipe2_Medium_specificHeatCapacityCp,0}};
#define boxvar_pump__v3__basicCold__t_plugFlowPipe2_Medium_specificHeatCapacityCp MMC_REFSTRUCTLIT(boxvar_lit_pump__v3__basicCold__t_plugFlowPipe2_Medium_specificHeatCapacityCp)


DLLDirection
pump__v3__basicCold__t_plugFlowPipe2_del_Medium_ThermodynamicState omc_pump__v3__basicCold__t_plugFlowPipe2_del_Medium_ThermodynamicState (threadData_t *threadData, modelica_real omc_p, modelica_real omc_T);

DLLDirection
modelica_metatype boxptr_pump__v3__basicCold__t_plugFlowPipe2_del_Medium_ThermodynamicState(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T);
static const MMC_DEFSTRUCTLIT(boxvar_lit_pump__v3__basicCold__t_plugFlowPipe2_del_Medium_ThermodynamicState,2,0) {(void*) boxptr_pump__v3__basicCold__t_plugFlowPipe2_del_Medium_ThermodynamicState,0}};
#define boxvar_pump__v3__basicCold__t_plugFlowPipe2_del_Medium_ThermodynamicState MMC_REFSTRUCTLIT(boxvar_lit_pump__v3__basicCold__t_plugFlowPipe2_del_Medium_ThermodynamicState)


DLLDirection
modelica_real omc_pump__v3__basicCold__t_plugFlowPipe2_del_Medium_density(threadData_t *threadData, pump__v3__basicCold__t_plugFlowPipe2_del_Medium_ThermodynamicState _state);
DLLDirection
modelica_metatype boxptr_pump__v3__basicCold__t_plugFlowPipe2_del_Medium_density(threadData_t *threadData, modelica_metatype _state);
static const MMC_DEFSTRUCTLIT(boxvar_lit_pump__v3__basicCold__t_plugFlowPipe2_del_Medium_density,2,0) {(void*) boxptr_pump__v3__basicCold__t_plugFlowPipe2_del_Medium_density,0}};
#define boxvar_pump__v3__basicCold__t_plugFlowPipe2_del_Medium_density MMC_REFSTRUCTLIT(boxvar_lit_pump__v3__basicCold__t_plugFlowPipe2_del_Medium_density)


DLLDirection
pump__v3__basicCold__t_plugFlowPipe2_del_Medium_ThermodynamicState omc_pump__v3__basicCold__t_plugFlowPipe2_del_Medium_setState__pTX(threadData_t *threadData, modelica_real _p, modelica_real _T, real_array _X);
DLLDirection
modelica_metatype boxptr_pump__v3__basicCold__t_plugFlowPipe2_del_Medium_setState__pTX(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T, modelica_metatype _X);
static const MMC_DEFSTRUCTLIT(boxvar_lit_pump__v3__basicCold__t_plugFlowPipe2_del_Medium_setState__pTX,2,0) {(void*) boxptr_pump__v3__basicCold__t_plugFlowPipe2_del_Medium_setState__pTX,0}};
#define boxvar_pump__v3__basicCold__t_plugFlowPipe2_del_Medium_setState__pTX MMC_REFSTRUCTLIT(boxvar_lit_pump__v3__basicCold__t_plugFlowPipe2_del_Medium_setState__pTX)


DLLDirection
pump__v3__basicCold__t_plugFlowPipe2_del_Medium_ThermodynamicState omc_pump__v3__basicCold__t_plugFlowPipe2_del_Medium_setState__phX(threadData_t *threadData, modelica_real _p, modelica_real _h, real_array _X);
DLLDirection
modelica_metatype boxptr_pump__v3__basicCold__t_plugFlowPipe2_del_Medium_setState__phX(threadData_t *threadData, modelica_metatype _p, modelica_metatype _h, modelica_metatype _X);
static const MMC_DEFSTRUCTLIT(boxvar_lit_pump__v3__basicCold__t_plugFlowPipe2_del_Medium_setState__phX,2,0) {(void*) boxptr_pump__v3__basicCold__t_plugFlowPipe2_del_Medium_setState__phX,0}};
#define boxvar_pump__v3__basicCold__t_plugFlowPipe2_del_Medium_setState__phX MMC_REFSTRUCTLIT(boxvar_lit_pump__v3__basicCold__t_plugFlowPipe2_del_Medium_setState__phX)


DLLDirection
modelica_real omc_pump__v3__basicCold__t_plugFlowPipe2_del_Medium_specificEnthalpy(threadData_t *threadData, pump__v3__basicCold__t_plugFlowPipe2_del_Medium_ThermodynamicState _state);
DLLDirection
modelica_metatype boxptr_pump__v3__basicCold__t_plugFlowPipe2_del_Medium_specificEnthalpy(threadData_t *threadData, modelica_metatype _state);
static const MMC_DEFSTRUCTLIT(boxvar_lit_pump__v3__basicCold__t_plugFlowPipe2_del_Medium_specificEnthalpy,2,0) {(void*) boxptr_pump__v3__basicCold__t_plugFlowPipe2_del_Medium_specificEnthalpy,0}};
#define boxvar_pump__v3__basicCold__t_plugFlowPipe2_del_Medium_specificEnthalpy MMC_REFSTRUCTLIT(boxvar_lit_pump__v3__basicCold__t_plugFlowPipe2_del_Medium_specificEnthalpy)


DLLDirection
pump__v3__basicCold__t_plugFlowPipe2_heaLos__a_Medium_ThermodynamicState omc_pump__v3__basicCold__t_plugFlowPipe2_heaLos__a_Medium_ThermodynamicState (threadData_t *threadData, modelica_real omc_p, modelica_real omc_T);

DLLDirection
modelica_metatype boxptr_pump__v3__basicCold__t_plugFlowPipe2_heaLos__a_Medium_ThermodynamicState(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T);
static const MMC_DEFSTRUCTLIT(boxvar_lit_pump__v3__basicCold__t_plugFlowPipe2_heaLos__a_Medium_ThermodynamicState,2,0) {(void*) boxptr_pump__v3__basicCold__t_plugFlowPipe2_heaLos__a_Medium_ThermodynamicState,0}};
#define boxvar_pump__v3__basicCold__t_plugFlowPipe2_heaLos__a_Medium_ThermodynamicState MMC_REFSTRUCTLIT(boxvar_lit_pump__v3__basicCold__t_plugFlowPipe2_heaLos__a_Medium_ThermodynamicState)


DLLDirection
pump__v3__basicCold__t_plugFlowPipe2_heaLos__a_Medium_ThermodynamicState omc_pump__v3__basicCold__t_plugFlowPipe2_heaLos__a_Medium_setState__pTX(threadData_t *threadData, modelica_real _p, modelica_real _T, real_array _X);
DLLDirection
modelica_metatype boxptr_pump__v3__basicCold__t_plugFlowPipe2_heaLos__a_Medium_setState__pTX(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T, modelica_metatype _X);
static const MMC_DEFSTRUCTLIT(boxvar_lit_pump__v3__basicCold__t_plugFlowPipe2_heaLos__a_Medium_setState__pTX,2,0) {(void*) boxptr_pump__v3__basicCold__t_plugFlowPipe2_heaLos__a_Medium_setState__pTX,0}};
#define boxvar_pump__v3__basicCold__t_plugFlowPipe2_heaLos__a_Medium_setState__pTX MMC_REFSTRUCTLIT(boxvar_lit_pump__v3__basicCold__t_plugFlowPipe2_heaLos__a_Medium_setState__pTX)


DLLDirection
pump__v3__basicCold__t_plugFlowPipe2_heaLos__a_Medium_ThermodynamicState omc_pump__v3__basicCold__t_plugFlowPipe2_heaLos__a_Medium_setState__phX(threadData_t *threadData, modelica_real _p, modelica_real _h, real_array _X);
DLLDirection
modelica_metatype boxptr_pump__v3__basicCold__t_plugFlowPipe2_heaLos__a_Medium_setState__phX(threadData_t *threadData, modelica_metatype _p, modelica_metatype _h, modelica_metatype _X);
static const MMC_DEFSTRUCTLIT(boxvar_lit_pump__v3__basicCold__t_plugFlowPipe2_heaLos__a_Medium_setState__phX,2,0) {(void*) boxptr_pump__v3__basicCold__t_plugFlowPipe2_heaLos__a_Medium_setState__phX,0}};
#define boxvar_pump__v3__basicCold__t_plugFlowPipe2_heaLos__a_Medium_setState__phX MMC_REFSTRUCTLIT(boxvar_lit_pump__v3__basicCold__t_plugFlowPipe2_heaLos__a_Medium_setState__phX)


DLLDirection
modelica_real omc_pump__v3__basicCold__t_plugFlowPipe2_heaLos__a_Medium_specificEnthalpy(threadData_t *threadData, pump__v3__basicCold__t_plugFlowPipe2_heaLos__a_Medium_ThermodynamicState _state);
DLLDirection
modelica_metatype boxptr_pump__v3__basicCold__t_plugFlowPipe2_heaLos__a_Medium_specificEnthalpy(threadData_t *threadData, modelica_metatype _state);
static const MMC_DEFSTRUCTLIT(boxvar_lit_pump__v3__basicCold__t_plugFlowPipe2_heaLos__a_Medium_specificEnthalpy,2,0) {(void*) boxptr_pump__v3__basicCold__t_plugFlowPipe2_heaLos__a_Medium_specificEnthalpy,0}};
#define boxvar_pump__v3__basicCold__t_plugFlowPipe2_heaLos__a_Medium_specificEnthalpy MMC_REFSTRUCTLIT(boxvar_lit_pump__v3__basicCold__t_plugFlowPipe2_heaLos__a_Medium_specificEnthalpy)


DLLDirection
modelica_real omc_pump__v3__basicCold__t_plugFlowPipe2_heaLos__a_Medium_specificHeatCapacityCp(threadData_t *threadData, pump__v3__basicCold__t_plugFlowPipe2_heaLos__a_Medium_ThermodynamicState _state);
DLLDirection
modelica_metatype boxptr_pump__v3__basicCold__t_plugFlowPipe2_heaLos__a_Medium_specificHeatCapacityCp(threadData_t *threadData, modelica_metatype _state);
static const MMC_DEFSTRUCTLIT(boxvar_lit_pump__v3__basicCold__t_plugFlowPipe2_heaLos__a_Medium_specificHeatCapacityCp,2,0) {(void*) boxptr_pump__v3__basicCold__t_plugFlowPipe2_heaLos__a_Medium_specificHeatCapacityCp,0}};
#define boxvar_pump__v3__basicCold__t_plugFlowPipe2_heaLos__a_Medium_specificHeatCapacityCp MMC_REFSTRUCTLIT(boxvar_lit_pump__v3__basicCold__t_plugFlowPipe2_heaLos__a_Medium_specificHeatCapacityCp)


DLLDirection
modelica_real omc_pump__v3__basicCold__t_plugFlowPipe2_heaLos__a_Medium_temperature(threadData_t *threadData, pump__v3__basicCold__t_plugFlowPipe2_heaLos__a_Medium_ThermodynamicState _state);
DLLDirection
modelica_metatype boxptr_pump__v3__basicCold__t_plugFlowPipe2_heaLos__a_Medium_temperature(threadData_t *threadData, modelica_metatype _state);
static const MMC_DEFSTRUCTLIT(boxvar_lit_pump__v3__basicCold__t_plugFlowPipe2_heaLos__a_Medium_temperature,2,0) {(void*) boxptr_pump__v3__basicCold__t_plugFlowPipe2_heaLos__a_Medium_temperature,0}};
#define boxvar_pump__v3__basicCold__t_plugFlowPipe2_heaLos__a_Medium_temperature MMC_REFSTRUCTLIT(boxvar_lit_pump__v3__basicCold__t_plugFlowPipe2_heaLos__a_Medium_temperature)


DLLDirection
pump__v3__basicCold__t_plugFlowPipe2_heaLos__b_Medium_ThermodynamicState omc_pump__v3__basicCold__t_plugFlowPipe2_heaLos__b_Medium_ThermodynamicState (threadData_t *threadData, modelica_real omc_p, modelica_real omc_T);

DLLDirection
modelica_metatype boxptr_pump__v3__basicCold__t_plugFlowPipe2_heaLos__b_Medium_ThermodynamicState(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T);
static const MMC_DEFSTRUCTLIT(boxvar_lit_pump__v3__basicCold__t_plugFlowPipe2_heaLos__b_Medium_ThermodynamicState,2,0) {(void*) boxptr_pump__v3__basicCold__t_plugFlowPipe2_heaLos__b_Medium_ThermodynamicState,0}};
#define boxvar_pump__v3__basicCold__t_plugFlowPipe2_heaLos__b_Medium_ThermodynamicState MMC_REFSTRUCTLIT(boxvar_lit_pump__v3__basicCold__t_plugFlowPipe2_heaLos__b_Medium_ThermodynamicState)


DLLDirection
pump__v3__basicCold__t_plugFlowPipe2_heaLos__b_Medium_ThermodynamicState omc_pump__v3__basicCold__t_plugFlowPipe2_heaLos__b_Medium_setState__pTX(threadData_t *threadData, modelica_real _p, modelica_real _T, real_array _X);
DLLDirection
modelica_metatype boxptr_pump__v3__basicCold__t_plugFlowPipe2_heaLos__b_Medium_setState__pTX(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T, modelica_metatype _X);
static const MMC_DEFSTRUCTLIT(boxvar_lit_pump__v3__basicCold__t_plugFlowPipe2_heaLos__b_Medium_setState__pTX,2,0) {(void*) boxptr_pump__v3__basicCold__t_plugFlowPipe2_heaLos__b_Medium_setState__pTX,0}};
#define boxvar_pump__v3__basicCold__t_plugFlowPipe2_heaLos__b_Medium_setState__pTX MMC_REFSTRUCTLIT(boxvar_lit_pump__v3__basicCold__t_plugFlowPipe2_heaLos__b_Medium_setState__pTX)


DLLDirection
pump__v3__basicCold__t_plugFlowPipe2_heaLos__b_Medium_ThermodynamicState omc_pump__v3__basicCold__t_plugFlowPipe2_heaLos__b_Medium_setState__phX(threadData_t *threadData, modelica_real _p, modelica_real _h, real_array _X);
DLLDirection
modelica_metatype boxptr_pump__v3__basicCold__t_plugFlowPipe2_heaLos__b_Medium_setState__phX(threadData_t *threadData, modelica_metatype _p, modelica_metatype _h, modelica_metatype _X);
static const MMC_DEFSTRUCTLIT(boxvar_lit_pump__v3__basicCold__t_plugFlowPipe2_heaLos__b_Medium_setState__phX,2,0) {(void*) boxptr_pump__v3__basicCold__t_plugFlowPipe2_heaLos__b_Medium_setState__phX,0}};
#define boxvar_pump__v3__basicCold__t_plugFlowPipe2_heaLos__b_Medium_setState__phX MMC_REFSTRUCTLIT(boxvar_lit_pump__v3__basicCold__t_plugFlowPipe2_heaLos__b_Medium_setState__phX)


DLLDirection
modelica_real omc_pump__v3__basicCold__t_plugFlowPipe2_heaLos__b_Medium_specificEnthalpy(threadData_t *threadData, pump__v3__basicCold__t_plugFlowPipe2_heaLos__b_Medium_ThermodynamicState _state);
DLLDirection
modelica_metatype boxptr_pump__v3__basicCold__t_plugFlowPipe2_heaLos__b_Medium_specificEnthalpy(threadData_t *threadData, modelica_metatype _state);
static const MMC_DEFSTRUCTLIT(boxvar_lit_pump__v3__basicCold__t_plugFlowPipe2_heaLos__b_Medium_specificEnthalpy,2,0) {(void*) boxptr_pump__v3__basicCold__t_plugFlowPipe2_heaLos__b_Medium_specificEnthalpy,0}};
#define boxvar_pump__v3__basicCold__t_plugFlowPipe2_heaLos__b_Medium_specificEnthalpy MMC_REFSTRUCTLIT(boxvar_lit_pump__v3__basicCold__t_plugFlowPipe2_heaLos__b_Medium_specificEnthalpy)


DLLDirection
modelica_real omc_pump__v3__basicCold__t_plugFlowPipe2_heaLos__b_Medium_specificHeatCapacityCp(threadData_t *threadData, pump__v3__basicCold__t_plugFlowPipe2_heaLos__b_Medium_ThermodynamicState _state);
DLLDirection
modelica_metatype boxptr_pump__v3__basicCold__t_plugFlowPipe2_heaLos__b_Medium_specificHeatCapacityCp(threadData_t *threadData, modelica_metatype _state);
static const MMC_DEFSTRUCTLIT(boxvar_lit_pump__v3__basicCold__t_plugFlowPipe2_heaLos__b_Medium_specificHeatCapacityCp,2,0) {(void*) boxptr_pump__v3__basicCold__t_plugFlowPipe2_heaLos__b_Medium_specificHeatCapacityCp,0}};
#define boxvar_pump__v3__basicCold__t_plugFlowPipe2_heaLos__b_Medium_specificHeatCapacityCp MMC_REFSTRUCTLIT(boxvar_lit_pump__v3__basicCold__t_plugFlowPipe2_heaLos__b_Medium_specificHeatCapacityCp)


DLLDirection
modelica_real omc_pump__v3__basicCold__t_plugFlowPipe2_heaLos__b_Medium_temperature(threadData_t *threadData, pump__v3__basicCold__t_plugFlowPipe2_heaLos__b_Medium_ThermodynamicState _state);
DLLDirection
modelica_metatype boxptr_pump__v3__basicCold__t_plugFlowPipe2_heaLos__b_Medium_temperature(threadData_t *threadData, modelica_metatype _state);
static const MMC_DEFSTRUCTLIT(boxvar_lit_pump__v3__basicCold__t_plugFlowPipe2_heaLos__b_Medium_temperature,2,0) {(void*) boxptr_pump__v3__basicCold__t_plugFlowPipe2_heaLos__b_Medium_temperature,0}};
#define boxvar_pump__v3__basicCold__t_plugFlowPipe2_heaLos__b_Medium_temperature MMC_REFSTRUCTLIT(boxvar_lit_pump__v3__basicCold__t_plugFlowPipe2_heaLos__b_Medium_temperature)


DLLDirection
pump__v3__basicCold__t_plugFlowPipe2_res_Medium_ThermodynamicState omc_pump__v3__basicCold__t_plugFlowPipe2_res_Medium_ThermodynamicState (threadData_t *threadData, modelica_real omc_p, modelica_real omc_T);

DLLDirection
modelica_metatype boxptr_pump__v3__basicCold__t_plugFlowPipe2_res_Medium_ThermodynamicState(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T);
static const MMC_DEFSTRUCTLIT(boxvar_lit_pump__v3__basicCold__t_plugFlowPipe2_res_Medium_ThermodynamicState,2,0) {(void*) boxptr_pump__v3__basicCold__t_plugFlowPipe2_res_Medium_ThermodynamicState,0}};
#define boxvar_pump__v3__basicCold__t_plugFlowPipe2_res_Medium_ThermodynamicState MMC_REFSTRUCTLIT(boxvar_lit_pump__v3__basicCold__t_plugFlowPipe2_res_Medium_ThermodynamicState)


DLLDirection
pump__v3__basicCold__t_plugFlowPipe2_vol__a_Medium_ThermodynamicState omc_pump__v3__basicCold__t_plugFlowPipe2_vol__a_Medium_ThermodynamicState (threadData_t *threadData, modelica_real omc_p, modelica_real omc_T);

DLLDirection
modelica_metatype boxptr_pump__v3__basicCold__t_plugFlowPipe2_vol__a_Medium_ThermodynamicState(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T);
static const MMC_DEFSTRUCTLIT(boxvar_lit_pump__v3__basicCold__t_plugFlowPipe2_vol__a_Medium_ThermodynamicState,2,0) {(void*) boxptr_pump__v3__basicCold__t_plugFlowPipe2_vol__a_Medium_ThermodynamicState,0}};
#define boxvar_pump__v3__basicCold__t_plugFlowPipe2_vol__a_Medium_ThermodynamicState MMC_REFSTRUCTLIT(boxvar_lit_pump__v3__basicCold__t_plugFlowPipe2_vol__a_Medium_ThermodynamicState)


DLLDirection
modelica_real omc_pump__v3__basicCold__t_plugFlowPipe2_vol__a_Medium_density(threadData_t *threadData, pump__v3__basicCold__t_plugFlowPipe2_vol__a_Medium_ThermodynamicState _state);
DLLDirection
modelica_metatype boxptr_pump__v3__basicCold__t_plugFlowPipe2_vol__a_Medium_density(threadData_t *threadData, modelica_metatype _state);
static const MMC_DEFSTRUCTLIT(boxvar_lit_pump__v3__basicCold__t_plugFlowPipe2_vol__a_Medium_density,2,0) {(void*) boxptr_pump__v3__basicCold__t_plugFlowPipe2_vol__a_Medium_density,0}};
#define boxvar_pump__v3__basicCold__t_plugFlowPipe2_vol__a_Medium_density MMC_REFSTRUCTLIT(boxvar_lit_pump__v3__basicCold__t_plugFlowPipe2_vol__a_Medium_density)


DLLDirection
modelica_real omc_pump__v3__basicCold__t_plugFlowPipe2_vol__a_Medium_temperature__phX(threadData_t *threadData, modelica_real _p, modelica_real _h, real_array _X);
DLLDirection
modelica_metatype boxptr_pump__v3__basicCold__t_plugFlowPipe2_vol__a_Medium_temperature__phX(threadData_t *threadData, modelica_metatype _p, modelica_metatype _h, modelica_metatype _X);
static const MMC_DEFSTRUCTLIT(boxvar_lit_pump__v3__basicCold__t_plugFlowPipe2_vol__a_Medium_temperature__phX,2,0) {(void*) boxptr_pump__v3__basicCold__t_plugFlowPipe2_vol__a_Medium_temperature__phX,0}};
#define boxvar_pump__v3__basicCold__t_plugFlowPipe2_vol__a_Medium_temperature__phX MMC_REFSTRUCTLIT(boxvar_lit_pump__v3__basicCold__t_plugFlowPipe2_vol__a_Medium_temperature__phX)


DLLDirection
pump__v3__basicCold__t_plugFlowPipe2_vol__a_dynBal_Medium_ThermodynamicState omc_pump__v3__basicCold__t_plugFlowPipe2_vol__a_dynBal_Medium_ThermodynamicState (threadData_t *threadData, modelica_real omc_p, modelica_real omc_T);

DLLDirection
modelica_metatype boxptr_pump__v3__basicCold__t_plugFlowPipe2_vol__a_dynBal_Medium_ThermodynamicState(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T);
static const MMC_DEFSTRUCTLIT(boxvar_lit_pump__v3__basicCold__t_plugFlowPipe2_vol__a_dynBal_Medium_ThermodynamicState,2,0) {(void*) boxptr_pump__v3__basicCold__t_plugFlowPipe2_vol__a_dynBal_Medium_ThermodynamicState,0}};
#define boxvar_pump__v3__basicCold__t_plugFlowPipe2_vol__a_dynBal_Medium_ThermodynamicState MMC_REFSTRUCTLIT(boxvar_lit_pump__v3__basicCold__t_plugFlowPipe2_vol__a_dynBal_Medium_ThermodynamicState)


DLLDirection
modelica_real omc_pump__v3__basicCold__t_plugFlowPipe2_vol__a_dynBal_Medium_density(threadData_t *threadData, pump__v3__basicCold__t_plugFlowPipe2_vol__a_dynBal_Medium_ThermodynamicState _state);
DLLDirection
modelica_metatype boxptr_pump__v3__basicCold__t_plugFlowPipe2_vol__a_dynBal_Medium_density(threadData_t *threadData, modelica_metatype _state);
static const MMC_DEFSTRUCTLIT(boxvar_lit_pump__v3__basicCold__t_plugFlowPipe2_vol__a_dynBal_Medium_density,2,0) {(void*) boxptr_pump__v3__basicCold__t_plugFlowPipe2_vol__a_dynBal_Medium_density,0}};
#define boxvar_pump__v3__basicCold__t_plugFlowPipe2_vol__a_dynBal_Medium_density MMC_REFSTRUCTLIT(boxvar_lit_pump__v3__basicCold__t_plugFlowPipe2_vol__a_dynBal_Medium_density)


DLLDirection
pump__v3__basicCold__t_plugFlowPipe2_vol__a_dynBal_Medium_ThermodynamicState omc_pump__v3__basicCold__t_plugFlowPipe2_vol__a_dynBal_Medium_setState__pTX(threadData_t *threadData, modelica_real _p, modelica_real _T, real_array _X);
DLLDirection
modelica_metatype boxptr_pump__v3__basicCold__t_plugFlowPipe2_vol__a_dynBal_Medium_setState__pTX(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T, modelica_metatype _X);
static const MMC_DEFSTRUCTLIT(boxvar_lit_pump__v3__basicCold__t_plugFlowPipe2_vol__a_dynBal_Medium_setState__pTX,2,0) {(void*) boxptr_pump__v3__basicCold__t_plugFlowPipe2_vol__a_dynBal_Medium_setState__pTX,0}};
#define boxvar_pump__v3__basicCold__t_plugFlowPipe2_vol__a_dynBal_Medium_setState__pTX MMC_REFSTRUCTLIT(boxvar_lit_pump__v3__basicCold__t_plugFlowPipe2_vol__a_dynBal_Medium_setState__pTX)


DLLDirection
modelica_real omc_pump__v3__basicCold__t_plugFlowPipe2_vol__a_dynBal_Medium_specificEnthalpy__pTX(threadData_t *threadData, modelica_real _p, modelica_real _T, real_array _X);
DLLDirection
modelica_metatype boxptr_pump__v3__basicCold__t_plugFlowPipe2_vol__a_dynBal_Medium_specificEnthalpy__pTX(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T, modelica_metatype _X);
static const MMC_DEFSTRUCTLIT(boxvar_lit_pump__v3__basicCold__t_plugFlowPipe2_vol__a_dynBal_Medium_specificEnthalpy__pTX,2,0) {(void*) boxptr_pump__v3__basicCold__t_plugFlowPipe2_vol__a_dynBal_Medium_specificEnthalpy__pTX,0}};
#define boxvar_pump__v3__basicCold__t_plugFlowPipe2_vol__a_dynBal_Medium_specificEnthalpy__pTX MMC_REFSTRUCTLIT(boxvar_lit_pump__v3__basicCold__t_plugFlowPipe2_vol__a_dynBal_Medium_specificEnthalpy__pTX)


DLLDirection
modelica_real omc_pump__v3__basicCold__t_plugFlowPipe2_vol__a_dynBal_Medium_specificInternalEnergy(threadData_t *threadData, pump__v3__basicCold__t_plugFlowPipe2_vol__a_dynBal_Medium_ThermodynamicState _state);
DLLDirection
modelica_metatype boxptr_pump__v3__basicCold__t_plugFlowPipe2_vol__a_dynBal_Medium_specificInternalEnergy(threadData_t *threadData, modelica_metatype _state);
static const MMC_DEFSTRUCTLIT(boxvar_lit_pump__v3__basicCold__t_plugFlowPipe2_vol__a_dynBal_Medium_specificInternalEnergy,2,0) {(void*) boxptr_pump__v3__basicCold__t_plugFlowPipe2_vol__a_dynBal_Medium_specificInternalEnergy,0}};
#define boxvar_pump__v3__basicCold__t_plugFlowPipe2_vol__a_dynBal_Medium_specificInternalEnergy MMC_REFSTRUCTLIT(boxvar_lit_pump__v3__basicCold__t_plugFlowPipe2_vol__a_dynBal_Medium_specificInternalEnergy)


DLLDirection
pump__v3__basicCold__t_plugFlowPipe2_vol__b_Medium_ThermodynamicState omc_pump__v3__basicCold__t_plugFlowPipe2_vol__b_Medium_ThermodynamicState (threadData_t *threadData, modelica_real omc_p, modelica_real omc_T);

DLLDirection
modelica_metatype boxptr_pump__v3__basicCold__t_plugFlowPipe2_vol__b_Medium_ThermodynamicState(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T);
static const MMC_DEFSTRUCTLIT(boxvar_lit_pump__v3__basicCold__t_plugFlowPipe2_vol__b_Medium_ThermodynamicState,2,0) {(void*) boxptr_pump__v3__basicCold__t_plugFlowPipe2_vol__b_Medium_ThermodynamicState,0}};
#define boxvar_pump__v3__basicCold__t_plugFlowPipe2_vol__b_Medium_ThermodynamicState MMC_REFSTRUCTLIT(boxvar_lit_pump__v3__basicCold__t_plugFlowPipe2_vol__b_Medium_ThermodynamicState)


DLLDirection
modelica_real omc_pump__v3__basicCold__t_plugFlowPipe2_vol__b_Medium_density(threadData_t *threadData, pump__v3__basicCold__t_plugFlowPipe2_vol__b_Medium_ThermodynamicState _state);
DLLDirection
modelica_metatype boxptr_pump__v3__basicCold__t_plugFlowPipe2_vol__b_Medium_density(threadData_t *threadData, modelica_metatype _state);
static const MMC_DEFSTRUCTLIT(boxvar_lit_pump__v3__basicCold__t_plugFlowPipe2_vol__b_Medium_density,2,0) {(void*) boxptr_pump__v3__basicCold__t_plugFlowPipe2_vol__b_Medium_density,0}};
#define boxvar_pump__v3__basicCold__t_plugFlowPipe2_vol__b_Medium_density MMC_REFSTRUCTLIT(boxvar_lit_pump__v3__basicCold__t_plugFlowPipe2_vol__b_Medium_density)


DLLDirection
modelica_real omc_pump__v3__basicCold__t_plugFlowPipe2_vol__b_Medium_temperature__phX(threadData_t *threadData, modelica_real _p, modelica_real _h, real_array _X);
DLLDirection
modelica_metatype boxptr_pump__v3__basicCold__t_plugFlowPipe2_vol__b_Medium_temperature__phX(threadData_t *threadData, modelica_metatype _p, modelica_metatype _h, modelica_metatype _X);
static const MMC_DEFSTRUCTLIT(boxvar_lit_pump__v3__basicCold__t_plugFlowPipe2_vol__b_Medium_temperature__phX,2,0) {(void*) boxptr_pump__v3__basicCold__t_plugFlowPipe2_vol__b_Medium_temperature__phX,0}};
#define boxvar_pump__v3__basicCold__t_plugFlowPipe2_vol__b_Medium_temperature__phX MMC_REFSTRUCTLIT(boxvar_lit_pump__v3__basicCold__t_plugFlowPipe2_vol__b_Medium_temperature__phX)


DLLDirection
pump__v3__basicCold__t_plugFlowPipe2_vol__b_dynBal_Medium_ThermodynamicState omc_pump__v3__basicCold__t_plugFlowPipe2_vol__b_dynBal_Medium_ThermodynamicState (threadData_t *threadData, modelica_real omc_p, modelica_real omc_T);

DLLDirection
modelica_metatype boxptr_pump__v3__basicCold__t_plugFlowPipe2_vol__b_dynBal_Medium_ThermodynamicState(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T);
static const MMC_DEFSTRUCTLIT(boxvar_lit_pump__v3__basicCold__t_plugFlowPipe2_vol__b_dynBal_Medium_ThermodynamicState,2,0) {(void*) boxptr_pump__v3__basicCold__t_plugFlowPipe2_vol__b_dynBal_Medium_ThermodynamicState,0}};
#define boxvar_pump__v3__basicCold__t_plugFlowPipe2_vol__b_dynBal_Medium_ThermodynamicState MMC_REFSTRUCTLIT(boxvar_lit_pump__v3__basicCold__t_plugFlowPipe2_vol__b_dynBal_Medium_ThermodynamicState)


DLLDirection
modelica_real omc_pump__v3__basicCold__t_plugFlowPipe2_vol__b_dynBal_Medium_density(threadData_t *threadData, pump__v3__basicCold__t_plugFlowPipe2_vol__b_dynBal_Medium_ThermodynamicState _state);
DLLDirection
modelica_metatype boxptr_pump__v3__basicCold__t_plugFlowPipe2_vol__b_dynBal_Medium_density(threadData_t *threadData, modelica_metatype _state);
static const MMC_DEFSTRUCTLIT(boxvar_lit_pump__v3__basicCold__t_plugFlowPipe2_vol__b_dynBal_Medium_density,2,0) {(void*) boxptr_pump__v3__basicCold__t_plugFlowPipe2_vol__b_dynBal_Medium_density,0}};
#define boxvar_pump__v3__basicCold__t_plugFlowPipe2_vol__b_dynBal_Medium_density MMC_REFSTRUCTLIT(boxvar_lit_pump__v3__basicCold__t_plugFlowPipe2_vol__b_dynBal_Medium_density)


DLLDirection
pump__v3__basicCold__t_plugFlowPipe2_vol__b_dynBal_Medium_ThermodynamicState omc_pump__v3__basicCold__t_plugFlowPipe2_vol__b_dynBal_Medium_setState__pTX(threadData_t *threadData, modelica_real _p, modelica_real _T, real_array _X);
DLLDirection
modelica_metatype boxptr_pump__v3__basicCold__t_plugFlowPipe2_vol__b_dynBal_Medium_setState__pTX(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T, modelica_metatype _X);
static const MMC_DEFSTRUCTLIT(boxvar_lit_pump__v3__basicCold__t_plugFlowPipe2_vol__b_dynBal_Medium_setState__pTX,2,0) {(void*) boxptr_pump__v3__basicCold__t_plugFlowPipe2_vol__b_dynBal_Medium_setState__pTX,0}};
#define boxvar_pump__v3__basicCold__t_plugFlowPipe2_vol__b_dynBal_Medium_setState__pTX MMC_REFSTRUCTLIT(boxvar_lit_pump__v3__basicCold__t_plugFlowPipe2_vol__b_dynBal_Medium_setState__pTX)


DLLDirection
modelica_real omc_pump__v3__basicCold__t_plugFlowPipe2_vol__b_dynBal_Medium_specificEnthalpy__pTX(threadData_t *threadData, modelica_real _p, modelica_real _T, real_array _X);
DLLDirection
modelica_metatype boxptr_pump__v3__basicCold__t_plugFlowPipe2_vol__b_dynBal_Medium_specificEnthalpy__pTX(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T, modelica_metatype _X);
static const MMC_DEFSTRUCTLIT(boxvar_lit_pump__v3__basicCold__t_plugFlowPipe2_vol__b_dynBal_Medium_specificEnthalpy__pTX,2,0) {(void*) boxptr_pump__v3__basicCold__t_plugFlowPipe2_vol__b_dynBal_Medium_specificEnthalpy__pTX,0}};
#define boxvar_pump__v3__basicCold__t_plugFlowPipe2_vol__b_dynBal_Medium_specificEnthalpy__pTX MMC_REFSTRUCTLIT(boxvar_lit_pump__v3__basicCold__t_plugFlowPipe2_vol__b_dynBal_Medium_specificEnthalpy__pTX)


DLLDirection
modelica_real omc_pump__v3__basicCold__t_plugFlowPipe2_vol__b_dynBal_Medium_specificInternalEnergy(threadData_t *threadData, pump__v3__basicCold__t_plugFlowPipe2_vol__b_dynBal_Medium_ThermodynamicState _state);
DLLDirection
modelica_metatype boxptr_pump__v3__basicCold__t_plugFlowPipe2_vol__b_dynBal_Medium_specificInternalEnergy(threadData_t *threadData, modelica_metatype _state);
static const MMC_DEFSTRUCTLIT(boxvar_lit_pump__v3__basicCold__t_plugFlowPipe2_vol__b_dynBal_Medium_specificInternalEnergy,2,0) {(void*) boxptr_pump__v3__basicCold__t_plugFlowPipe2_vol__b_dynBal_Medium_specificInternalEnergy,0}};
#define boxvar_pump__v3__basicCold__t_plugFlowPipe2_vol__b_dynBal_Medium_specificInternalEnergy MMC_REFSTRUCTLIT(boxvar_lit_pump__v3__basicCold__t_plugFlowPipe2_vol__b_dynBal_Medium_specificInternalEnergy)


DLLDirection
pump__v3__basicCold__t_plugFlowPipe__heat_Medium_ThermodynamicState omc_pump__v3__basicCold__t_plugFlowPipe__heat_Medium_ThermodynamicState (threadData_t *threadData, modelica_real omc_p, modelica_real omc_T);

DLLDirection
modelica_metatype boxptr_pump__v3__basicCold__t_plugFlowPipe__heat_Medium_ThermodynamicState(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T);
static const MMC_DEFSTRUCTLIT(boxvar_lit_pump__v3__basicCold__t_plugFlowPipe__heat_Medium_ThermodynamicState,2,0) {(void*) boxptr_pump__v3__basicCold__t_plugFlowPipe__heat_Medium_ThermodynamicState,0}};
#define boxvar_pump__v3__basicCold__t_plugFlowPipe__heat_Medium_ThermodynamicState MMC_REFSTRUCTLIT(boxvar_lit_pump__v3__basicCold__t_plugFlowPipe__heat_Medium_ThermodynamicState)


DLLDirection
modelica_real omc_pump__v3__basicCold__t_plugFlowPipe__heat_Medium_specificHeatCapacityCp(threadData_t *threadData, pump__v3__basicCold__t_plugFlowPipe__heat_Medium_ThermodynamicState _state);
DLLDirection
modelica_metatype boxptr_pump__v3__basicCold__t_plugFlowPipe__heat_Medium_specificHeatCapacityCp(threadData_t *threadData, modelica_metatype _state);
static const MMC_DEFSTRUCTLIT(boxvar_lit_pump__v3__basicCold__t_plugFlowPipe__heat_Medium_specificHeatCapacityCp,2,0) {(void*) boxptr_pump__v3__basicCold__t_plugFlowPipe__heat_Medium_specificHeatCapacityCp,0}};
#define boxvar_pump__v3__basicCold__t_plugFlowPipe__heat_Medium_specificHeatCapacityCp MMC_REFSTRUCTLIT(boxvar_lit_pump__v3__basicCold__t_plugFlowPipe__heat_Medium_specificHeatCapacityCp)


DLLDirection
pump__v3__basicCold__t_plugFlowPipe__heat_del_Medium_ThermodynamicState omc_pump__v3__basicCold__t_plugFlowPipe__heat_del_Medium_ThermodynamicState (threadData_t *threadData, modelica_real omc_p, modelica_real omc_T);

DLLDirection
modelica_metatype boxptr_pump__v3__basicCold__t_plugFlowPipe__heat_del_Medium_ThermodynamicState(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T);
static const MMC_DEFSTRUCTLIT(boxvar_lit_pump__v3__basicCold__t_plugFlowPipe__heat_del_Medium_ThermodynamicState,2,0) {(void*) boxptr_pump__v3__basicCold__t_plugFlowPipe__heat_del_Medium_ThermodynamicState,0}};
#define boxvar_pump__v3__basicCold__t_plugFlowPipe__heat_del_Medium_ThermodynamicState MMC_REFSTRUCTLIT(boxvar_lit_pump__v3__basicCold__t_plugFlowPipe__heat_del_Medium_ThermodynamicState)


DLLDirection
modelica_real omc_pump__v3__basicCold__t_plugFlowPipe__heat_del_Medium_density(threadData_t *threadData, pump__v3__basicCold__t_plugFlowPipe__heat_del_Medium_ThermodynamicState _state);
DLLDirection
modelica_metatype boxptr_pump__v3__basicCold__t_plugFlowPipe__heat_del_Medium_density(threadData_t *threadData, modelica_metatype _state);
static const MMC_DEFSTRUCTLIT(boxvar_lit_pump__v3__basicCold__t_plugFlowPipe__heat_del_Medium_density,2,0) {(void*) boxptr_pump__v3__basicCold__t_plugFlowPipe__heat_del_Medium_density,0}};
#define boxvar_pump__v3__basicCold__t_plugFlowPipe__heat_del_Medium_density MMC_REFSTRUCTLIT(boxvar_lit_pump__v3__basicCold__t_plugFlowPipe__heat_del_Medium_density)


DLLDirection
pump__v3__basicCold__t_plugFlowPipe__heat_del_Medium_ThermodynamicState omc_pump__v3__basicCold__t_plugFlowPipe__heat_del_Medium_setState__pTX(threadData_t *threadData, modelica_real _p, modelica_real _T, real_array _X);
DLLDirection
modelica_metatype boxptr_pump__v3__basicCold__t_plugFlowPipe__heat_del_Medium_setState__pTX(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T, modelica_metatype _X);
static const MMC_DEFSTRUCTLIT(boxvar_lit_pump__v3__basicCold__t_plugFlowPipe__heat_del_Medium_setState__pTX,2,0) {(void*) boxptr_pump__v3__basicCold__t_plugFlowPipe__heat_del_Medium_setState__pTX,0}};
#define boxvar_pump__v3__basicCold__t_plugFlowPipe__heat_del_Medium_setState__pTX MMC_REFSTRUCTLIT(boxvar_lit_pump__v3__basicCold__t_plugFlowPipe__heat_del_Medium_setState__pTX)


DLLDirection
pump__v3__basicCold__t_plugFlowPipe__heat_del_Medium_ThermodynamicState omc_pump__v3__basicCold__t_plugFlowPipe__heat_del_Medium_setState__phX(threadData_t *threadData, modelica_real _p, modelica_real _h, real_array _X);
DLLDirection
modelica_metatype boxptr_pump__v3__basicCold__t_plugFlowPipe__heat_del_Medium_setState__phX(threadData_t *threadData, modelica_metatype _p, modelica_metatype _h, modelica_metatype _X);
static const MMC_DEFSTRUCTLIT(boxvar_lit_pump__v3__basicCold__t_plugFlowPipe__heat_del_Medium_setState__phX,2,0) {(void*) boxptr_pump__v3__basicCold__t_plugFlowPipe__heat_del_Medium_setState__phX,0}};
#define boxvar_pump__v3__basicCold__t_plugFlowPipe__heat_del_Medium_setState__phX MMC_REFSTRUCTLIT(boxvar_lit_pump__v3__basicCold__t_plugFlowPipe__heat_del_Medium_setState__phX)


DLLDirection
modelica_real omc_pump__v3__basicCold__t_plugFlowPipe__heat_del_Medium_specificEnthalpy(threadData_t *threadData, pump__v3__basicCold__t_plugFlowPipe__heat_del_Medium_ThermodynamicState _state);
DLLDirection
modelica_metatype boxptr_pump__v3__basicCold__t_plugFlowPipe__heat_del_Medium_specificEnthalpy(threadData_t *threadData, modelica_metatype _state);
static const MMC_DEFSTRUCTLIT(boxvar_lit_pump__v3__basicCold__t_plugFlowPipe__heat_del_Medium_specificEnthalpy,2,0) {(void*) boxptr_pump__v3__basicCold__t_plugFlowPipe__heat_del_Medium_specificEnthalpy,0}};
#define boxvar_pump__v3__basicCold__t_plugFlowPipe__heat_del_Medium_specificEnthalpy MMC_REFSTRUCTLIT(boxvar_lit_pump__v3__basicCold__t_plugFlowPipe__heat_del_Medium_specificEnthalpy)


DLLDirection
pump__v3__basicCold__t_plugFlowPipe__heat_heaLos__a_Medium_ThermodynamicState omc_pump__v3__basicCold__t_plugFlowPipe__heat_heaLos__a_Medium_ThermodynamicState (threadData_t *threadData, modelica_real omc_p, modelica_real omc_T);

DLLDirection
modelica_metatype boxptr_pump__v3__basicCold__t_plugFlowPipe__heat_heaLos__a_Medium_ThermodynamicState(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T);
static const MMC_DEFSTRUCTLIT(boxvar_lit_pump__v3__basicCold__t_plugFlowPipe__heat_heaLos__a_Medium_ThermodynamicState,2,0) {(void*) boxptr_pump__v3__basicCold__t_plugFlowPipe__heat_heaLos__a_Medium_ThermodynamicState,0}};
#define boxvar_pump__v3__basicCold__t_plugFlowPipe__heat_heaLos__a_Medium_ThermodynamicState MMC_REFSTRUCTLIT(boxvar_lit_pump__v3__basicCold__t_plugFlowPipe__heat_heaLos__a_Medium_ThermodynamicState)


DLLDirection
pump__v3__basicCold__t_plugFlowPipe__heat_heaLos__a_Medium_ThermodynamicState omc_pump__v3__basicCold__t_plugFlowPipe__heat_heaLos__a_Medium_setState__pTX(threadData_t *threadData, modelica_real _p, modelica_real _T, real_array _X);
DLLDirection
modelica_metatype boxptr_pump__v3__basicCold__t_plugFlowPipe__heat_heaLos__a_Medium_setState__pTX(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T, modelica_metatype _X);
static const MMC_DEFSTRUCTLIT(boxvar_lit_pump__v3__basicCold__t_plugFlowPipe__heat_heaLos__a_Medium_setState__pTX,2,0) {(void*) boxptr_pump__v3__basicCold__t_plugFlowPipe__heat_heaLos__a_Medium_setState__pTX,0}};
#define boxvar_pump__v3__basicCold__t_plugFlowPipe__heat_heaLos__a_Medium_setState__pTX MMC_REFSTRUCTLIT(boxvar_lit_pump__v3__basicCold__t_plugFlowPipe__heat_heaLos__a_Medium_setState__pTX)


DLLDirection
pump__v3__basicCold__t_plugFlowPipe__heat_heaLos__a_Medium_ThermodynamicState omc_pump__v3__basicCold__t_plugFlowPipe__heat_heaLos__a_Medium_setState__phX(threadData_t *threadData, modelica_real _p, modelica_real _h, real_array _X);
DLLDirection
modelica_metatype boxptr_pump__v3__basicCold__t_plugFlowPipe__heat_heaLos__a_Medium_setState__phX(threadData_t *threadData, modelica_metatype _p, modelica_metatype _h, modelica_metatype _X);
static const MMC_DEFSTRUCTLIT(boxvar_lit_pump__v3__basicCold__t_plugFlowPipe__heat_heaLos__a_Medium_setState__phX,2,0) {(void*) boxptr_pump__v3__basicCold__t_plugFlowPipe__heat_heaLos__a_Medium_setState__phX,0}};
#define boxvar_pump__v3__basicCold__t_plugFlowPipe__heat_heaLos__a_Medium_setState__phX MMC_REFSTRUCTLIT(boxvar_lit_pump__v3__basicCold__t_plugFlowPipe__heat_heaLos__a_Medium_setState__phX)


DLLDirection
modelica_real omc_pump__v3__basicCold__t_plugFlowPipe__heat_heaLos__a_Medium_specificEnthalpy(threadData_t *threadData, pump__v3__basicCold__t_plugFlowPipe__heat_heaLos__a_Medium_ThermodynamicState _state);
DLLDirection
modelica_metatype boxptr_pump__v3__basicCold__t_plugFlowPipe__heat_heaLos__a_Medium_specificEnthalpy(threadData_t *threadData, modelica_metatype _state);
static const MMC_DEFSTRUCTLIT(boxvar_lit_pump__v3__basicCold__t_plugFlowPipe__heat_heaLos__a_Medium_specificEnthalpy,2,0) {(void*) boxptr_pump__v3__basicCold__t_plugFlowPipe__heat_heaLos__a_Medium_specificEnthalpy,0}};
#define boxvar_pump__v3__basicCold__t_plugFlowPipe__heat_heaLos__a_Medium_specificEnthalpy MMC_REFSTRUCTLIT(boxvar_lit_pump__v3__basicCold__t_plugFlowPipe__heat_heaLos__a_Medium_specificEnthalpy)


DLLDirection
modelica_real omc_pump__v3__basicCold__t_plugFlowPipe__heat_heaLos__a_Medium_specificHeatCapacityCp(threadData_t *threadData, pump__v3__basicCold__t_plugFlowPipe__heat_heaLos__a_Medium_ThermodynamicState _state);
DLLDirection
modelica_metatype boxptr_pump__v3__basicCold__t_plugFlowPipe__heat_heaLos__a_Medium_specificHeatCapacityCp(threadData_t *threadData, modelica_metatype _state);
static const MMC_DEFSTRUCTLIT(boxvar_lit_pump__v3__basicCold__t_plugFlowPipe__heat_heaLos__a_Medium_specificHeatCapacityCp,2,0) {(void*) boxptr_pump__v3__basicCold__t_plugFlowPipe__heat_heaLos__a_Medium_specificHeatCapacityCp,0}};
#define boxvar_pump__v3__basicCold__t_plugFlowPipe__heat_heaLos__a_Medium_specificHeatCapacityCp MMC_REFSTRUCTLIT(boxvar_lit_pump__v3__basicCold__t_plugFlowPipe__heat_heaLos__a_Medium_specificHeatCapacityCp)


DLLDirection
modelica_real omc_pump__v3__basicCold__t_plugFlowPipe__heat_heaLos__a_Medium_temperature(threadData_t *threadData, pump__v3__basicCold__t_plugFlowPipe__heat_heaLos__a_Medium_ThermodynamicState _state);
DLLDirection
modelica_metatype boxptr_pump__v3__basicCold__t_plugFlowPipe__heat_heaLos__a_Medium_temperature(threadData_t *threadData, modelica_metatype _state);
static const MMC_DEFSTRUCTLIT(boxvar_lit_pump__v3__basicCold__t_plugFlowPipe__heat_heaLos__a_Medium_temperature,2,0) {(void*) boxptr_pump__v3__basicCold__t_plugFlowPipe__heat_heaLos__a_Medium_temperature,0}};
#define boxvar_pump__v3__basicCold__t_plugFlowPipe__heat_heaLos__a_Medium_temperature MMC_REFSTRUCTLIT(boxvar_lit_pump__v3__basicCold__t_plugFlowPipe__heat_heaLos__a_Medium_temperature)


DLLDirection
pump__v3__basicCold__t_plugFlowPipe__heat_heaLos__b_Medium_ThermodynamicState omc_pump__v3__basicCold__t_plugFlowPipe__heat_heaLos__b_Medium_ThermodynamicState (threadData_t *threadData, modelica_real omc_p, modelica_real omc_T);

DLLDirection
modelica_metatype boxptr_pump__v3__basicCold__t_plugFlowPipe__heat_heaLos__b_Medium_ThermodynamicState(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T);
static const MMC_DEFSTRUCTLIT(boxvar_lit_pump__v3__basicCold__t_plugFlowPipe__heat_heaLos__b_Medium_ThermodynamicState,2,0) {(void*) boxptr_pump__v3__basicCold__t_plugFlowPipe__heat_heaLos__b_Medium_ThermodynamicState,0}};
#define boxvar_pump__v3__basicCold__t_plugFlowPipe__heat_heaLos__b_Medium_ThermodynamicState MMC_REFSTRUCTLIT(boxvar_lit_pump__v3__basicCold__t_plugFlowPipe__heat_heaLos__b_Medium_ThermodynamicState)


DLLDirection
pump__v3__basicCold__t_plugFlowPipe__heat_heaLos__b_Medium_ThermodynamicState omc_pump__v3__basicCold__t_plugFlowPipe__heat_heaLos__b_Medium_setState__pTX(threadData_t *threadData, modelica_real _p, modelica_real _T, real_array _X);
DLLDirection
modelica_metatype boxptr_pump__v3__basicCold__t_plugFlowPipe__heat_heaLos__b_Medium_setState__pTX(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T, modelica_metatype _X);
static const MMC_DEFSTRUCTLIT(boxvar_lit_pump__v3__basicCold__t_plugFlowPipe__heat_heaLos__b_Medium_setState__pTX,2,0) {(void*) boxptr_pump__v3__basicCold__t_plugFlowPipe__heat_heaLos__b_Medium_setState__pTX,0}};
#define boxvar_pump__v3__basicCold__t_plugFlowPipe__heat_heaLos__b_Medium_setState__pTX MMC_REFSTRUCTLIT(boxvar_lit_pump__v3__basicCold__t_plugFlowPipe__heat_heaLos__b_Medium_setState__pTX)


DLLDirection
pump__v3__basicCold__t_plugFlowPipe__heat_heaLos__b_Medium_ThermodynamicState omc_pump__v3__basicCold__t_plugFlowPipe__heat_heaLos__b_Medium_setState__phX(threadData_t *threadData, modelica_real _p, modelica_real _h, real_array _X);
DLLDirection
modelica_metatype boxptr_pump__v3__basicCold__t_plugFlowPipe__heat_heaLos__b_Medium_setState__phX(threadData_t *threadData, modelica_metatype _p, modelica_metatype _h, modelica_metatype _X);
static const MMC_DEFSTRUCTLIT(boxvar_lit_pump__v3__basicCold__t_plugFlowPipe__heat_heaLos__b_Medium_setState__phX,2,0) {(void*) boxptr_pump__v3__basicCold__t_plugFlowPipe__heat_heaLos__b_Medium_setState__phX,0}};
#define boxvar_pump__v3__basicCold__t_plugFlowPipe__heat_heaLos__b_Medium_setState__phX MMC_REFSTRUCTLIT(boxvar_lit_pump__v3__basicCold__t_plugFlowPipe__heat_heaLos__b_Medium_setState__phX)


DLLDirection
modelica_real omc_pump__v3__basicCold__t_plugFlowPipe__heat_heaLos__b_Medium_specificEnthalpy(threadData_t *threadData, pump__v3__basicCold__t_plugFlowPipe__heat_heaLos__b_Medium_ThermodynamicState _state);
DLLDirection
modelica_metatype boxptr_pump__v3__basicCold__t_plugFlowPipe__heat_heaLos__b_Medium_specificEnthalpy(threadData_t *threadData, modelica_metatype _state);
static const MMC_DEFSTRUCTLIT(boxvar_lit_pump__v3__basicCold__t_plugFlowPipe__heat_heaLos__b_Medium_specificEnthalpy,2,0) {(void*) boxptr_pump__v3__basicCold__t_plugFlowPipe__heat_heaLos__b_Medium_specificEnthalpy,0}};
#define boxvar_pump__v3__basicCold__t_plugFlowPipe__heat_heaLos__b_Medium_specificEnthalpy MMC_REFSTRUCTLIT(boxvar_lit_pump__v3__basicCold__t_plugFlowPipe__heat_heaLos__b_Medium_specificEnthalpy)


DLLDirection
modelica_real omc_pump__v3__basicCold__t_plugFlowPipe__heat_heaLos__b_Medium_specificHeatCapacityCp(threadData_t *threadData, pump__v3__basicCold__t_plugFlowPipe__heat_heaLos__b_Medium_ThermodynamicState _state);
DLLDirection
modelica_metatype boxptr_pump__v3__basicCold__t_plugFlowPipe__heat_heaLos__b_Medium_specificHeatCapacityCp(threadData_t *threadData, modelica_metatype _state);
static const MMC_DEFSTRUCTLIT(boxvar_lit_pump__v3__basicCold__t_plugFlowPipe__heat_heaLos__b_Medium_specificHeatCapacityCp,2,0) {(void*) boxptr_pump__v3__basicCold__t_plugFlowPipe__heat_heaLos__b_Medium_specificHeatCapacityCp,0}};
#define boxvar_pump__v3__basicCold__t_plugFlowPipe__heat_heaLos__b_Medium_specificHeatCapacityCp MMC_REFSTRUCTLIT(boxvar_lit_pump__v3__basicCold__t_plugFlowPipe__heat_heaLos__b_Medium_specificHeatCapacityCp)


DLLDirection
modelica_real omc_pump__v3__basicCold__t_plugFlowPipe__heat_heaLos__b_Medium_temperature(threadData_t *threadData, pump__v3__basicCold__t_plugFlowPipe__heat_heaLos__b_Medium_ThermodynamicState _state);
DLLDirection
modelica_metatype boxptr_pump__v3__basicCold__t_plugFlowPipe__heat_heaLos__b_Medium_temperature(threadData_t *threadData, modelica_metatype _state);
static const MMC_DEFSTRUCTLIT(boxvar_lit_pump__v3__basicCold__t_plugFlowPipe__heat_heaLos__b_Medium_temperature,2,0) {(void*) boxptr_pump__v3__basicCold__t_plugFlowPipe__heat_heaLos__b_Medium_temperature,0}};
#define boxvar_pump__v3__basicCold__t_plugFlowPipe__heat_heaLos__b_Medium_temperature MMC_REFSTRUCTLIT(boxvar_lit_pump__v3__basicCold__t_plugFlowPipe__heat_heaLos__b_Medium_temperature)


DLLDirection
pump__v3__basicCold__t_plugFlowPipe__heat_res_Medium_ThermodynamicState omc_pump__v3__basicCold__t_plugFlowPipe__heat_res_Medium_ThermodynamicState (threadData_t *threadData, modelica_real omc_p, modelica_real omc_T);

DLLDirection
modelica_metatype boxptr_pump__v3__basicCold__t_plugFlowPipe__heat_res_Medium_ThermodynamicState(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T);
static const MMC_DEFSTRUCTLIT(boxvar_lit_pump__v3__basicCold__t_plugFlowPipe__heat_res_Medium_ThermodynamicState,2,0) {(void*) boxptr_pump__v3__basicCold__t_plugFlowPipe__heat_res_Medium_ThermodynamicState,0}};
#define boxvar_pump__v3__basicCold__t_plugFlowPipe__heat_res_Medium_ThermodynamicState MMC_REFSTRUCTLIT(boxvar_lit_pump__v3__basicCold__t_plugFlowPipe__heat_res_Medium_ThermodynamicState)


DLLDirection
pump__v3__basicCold__t_plugFlowPipe__heat_vol__a_Medium_ThermodynamicState omc_pump__v3__basicCold__t_plugFlowPipe__heat_vol__a_Medium_ThermodynamicState (threadData_t *threadData, modelica_real omc_p, modelica_real omc_T);

DLLDirection
modelica_metatype boxptr_pump__v3__basicCold__t_plugFlowPipe__heat_vol__a_Medium_ThermodynamicState(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T);
static const MMC_DEFSTRUCTLIT(boxvar_lit_pump__v3__basicCold__t_plugFlowPipe__heat_vol__a_Medium_ThermodynamicState,2,0) {(void*) boxptr_pump__v3__basicCold__t_plugFlowPipe__heat_vol__a_Medium_ThermodynamicState,0}};
#define boxvar_pump__v3__basicCold__t_plugFlowPipe__heat_vol__a_Medium_ThermodynamicState MMC_REFSTRUCTLIT(boxvar_lit_pump__v3__basicCold__t_plugFlowPipe__heat_vol__a_Medium_ThermodynamicState)


DLLDirection
modelica_real omc_pump__v3__basicCold__t_plugFlowPipe__heat_vol__a_Medium_density(threadData_t *threadData, pump__v3__basicCold__t_plugFlowPipe__heat_vol__a_Medium_ThermodynamicState _state);
DLLDirection
modelica_metatype boxptr_pump__v3__basicCold__t_plugFlowPipe__heat_vol__a_Medium_density(threadData_t *threadData, modelica_metatype _state);
static const MMC_DEFSTRUCTLIT(boxvar_lit_pump__v3__basicCold__t_plugFlowPipe__heat_vol__a_Medium_density,2,0) {(void*) boxptr_pump__v3__basicCold__t_plugFlowPipe__heat_vol__a_Medium_density,0}};
#define boxvar_pump__v3__basicCold__t_plugFlowPipe__heat_vol__a_Medium_density MMC_REFSTRUCTLIT(boxvar_lit_pump__v3__basicCold__t_plugFlowPipe__heat_vol__a_Medium_density)


DLLDirection
modelica_real omc_pump__v3__basicCold__t_plugFlowPipe__heat_vol__a_Medium_temperature__phX(threadData_t *threadData, modelica_real _p, modelica_real _h, real_array _X);
DLLDirection
modelica_metatype boxptr_pump__v3__basicCold__t_plugFlowPipe__heat_vol__a_Medium_temperature__phX(threadData_t *threadData, modelica_metatype _p, modelica_metatype _h, modelica_metatype _X);
static const MMC_DEFSTRUCTLIT(boxvar_lit_pump__v3__basicCold__t_plugFlowPipe__heat_vol__a_Medium_temperature__phX,2,0) {(void*) boxptr_pump__v3__basicCold__t_plugFlowPipe__heat_vol__a_Medium_temperature__phX,0}};
#define boxvar_pump__v3__basicCold__t_plugFlowPipe__heat_vol__a_Medium_temperature__phX MMC_REFSTRUCTLIT(boxvar_lit_pump__v3__basicCold__t_plugFlowPipe__heat_vol__a_Medium_temperature__phX)


DLLDirection
pump__v3__basicCold__t_plugFlowPipe__heat_vol__a_dynBal_Medium_ThermodynamicState omc_pump__v3__basicCold__t_plugFlowPipe__heat_vol__a_dynBal_Medium_ThermodynamicState (threadData_t *threadData, modelica_real omc_p, modelica_real omc_T);

DLLDirection
modelica_metatype boxptr_pump__v3__basicCold__t_plugFlowPipe__heat_vol__a_dynBal_Medium_ThermodynamicState(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T);
static const MMC_DEFSTRUCTLIT(boxvar_lit_pump__v3__basicCold__t_plugFlowPipe__heat_vol__a_dynBal_Medium_ThermodynamicState,2,0) {(void*) boxptr_pump__v3__basicCold__t_plugFlowPipe__heat_vol__a_dynBal_Medium_ThermodynamicState,0}};
#define boxvar_pump__v3__basicCold__t_plugFlowPipe__heat_vol__a_dynBal_Medium_ThermodynamicState MMC_REFSTRUCTLIT(boxvar_lit_pump__v3__basicCold__t_plugFlowPipe__heat_vol__a_dynBal_Medium_ThermodynamicState)


DLLDirection
modelica_real omc_pump__v3__basicCold__t_plugFlowPipe__heat_vol__a_dynBal_Medium_density(threadData_t *threadData, pump__v3__basicCold__t_plugFlowPipe__heat_vol__a_dynBal_Medium_ThermodynamicState _state);
DLLDirection
modelica_metatype boxptr_pump__v3__basicCold__t_plugFlowPipe__heat_vol__a_dynBal_Medium_density(threadData_t *threadData, modelica_metatype _state);
static const MMC_DEFSTRUCTLIT(boxvar_lit_pump__v3__basicCold__t_plugFlowPipe__heat_vol__a_dynBal_Medium_density,2,0) {(void*) boxptr_pump__v3__basicCold__t_plugFlowPipe__heat_vol__a_dynBal_Medium_density,0}};
#define boxvar_pump__v3__basicCold__t_plugFlowPipe__heat_vol__a_dynBal_Medium_density MMC_REFSTRUCTLIT(boxvar_lit_pump__v3__basicCold__t_plugFlowPipe__heat_vol__a_dynBal_Medium_density)


DLLDirection
pump__v3__basicCold__t_plugFlowPipe__heat_vol__a_dynBal_Medium_ThermodynamicState omc_pump__v3__basicCold__t_plugFlowPipe__heat_vol__a_dynBal_Medium_setState__pTX(threadData_t *threadData, modelica_real _p, modelica_real _T, real_array _X);
DLLDirection
modelica_metatype boxptr_pump__v3__basicCold__t_plugFlowPipe__heat_vol__a_dynBal_Medium_setState__pTX(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T, modelica_metatype _X);
static const MMC_DEFSTRUCTLIT(boxvar_lit_pump__v3__basicCold__t_plugFlowPipe__heat_vol__a_dynBal_Medium_setState__pTX,2,0) {(void*) boxptr_pump__v3__basicCold__t_plugFlowPipe__heat_vol__a_dynBal_Medium_setState__pTX,0}};
#define boxvar_pump__v3__basicCold__t_plugFlowPipe__heat_vol__a_dynBal_Medium_setState__pTX MMC_REFSTRUCTLIT(boxvar_lit_pump__v3__basicCold__t_plugFlowPipe__heat_vol__a_dynBal_Medium_setState__pTX)


DLLDirection
modelica_real omc_pump__v3__basicCold__t_plugFlowPipe__heat_vol__a_dynBal_Medium_specificEnthalpy__pTX(threadData_t *threadData, modelica_real _p, modelica_real _T, real_array _X);
DLLDirection
modelica_metatype boxptr_pump__v3__basicCold__t_plugFlowPipe__heat_vol__a_dynBal_Medium_specificEnthalpy__pTX(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T, modelica_metatype _X);
static const MMC_DEFSTRUCTLIT(boxvar_lit_pump__v3__basicCold__t_plugFlowPipe__heat_vol__a_dynBal_Medium_specificEnthalpy__pTX,2,0) {(void*) boxptr_pump__v3__basicCold__t_plugFlowPipe__heat_vol__a_dynBal_Medium_specificEnthalpy__pTX,0}};
#define boxvar_pump__v3__basicCold__t_plugFlowPipe__heat_vol__a_dynBal_Medium_specificEnthalpy__pTX MMC_REFSTRUCTLIT(boxvar_lit_pump__v3__basicCold__t_plugFlowPipe__heat_vol__a_dynBal_Medium_specificEnthalpy__pTX)


DLLDirection
modelica_real omc_pump__v3__basicCold__t_plugFlowPipe__heat_vol__a_dynBal_Medium_specificInternalEnergy(threadData_t *threadData, pump__v3__basicCold__t_plugFlowPipe__heat_vol__a_dynBal_Medium_ThermodynamicState _state);
DLLDirection
modelica_metatype boxptr_pump__v3__basicCold__t_plugFlowPipe__heat_vol__a_dynBal_Medium_specificInternalEnergy(threadData_t *threadData, modelica_metatype _state);
static const MMC_DEFSTRUCTLIT(boxvar_lit_pump__v3__basicCold__t_plugFlowPipe__heat_vol__a_dynBal_Medium_specificInternalEnergy,2,0) {(void*) boxptr_pump__v3__basicCold__t_plugFlowPipe__heat_vol__a_dynBal_Medium_specificInternalEnergy,0}};
#define boxvar_pump__v3__basicCold__t_plugFlowPipe__heat_vol__a_dynBal_Medium_specificInternalEnergy MMC_REFSTRUCTLIT(boxvar_lit_pump__v3__basicCold__t_plugFlowPipe__heat_vol__a_dynBal_Medium_specificInternalEnergy)


DLLDirection
pump__v3__basicCold__t_plugFlowPipe__heat_vol__b_Medium_ThermodynamicState omc_pump__v3__basicCold__t_plugFlowPipe__heat_vol__b_Medium_ThermodynamicState (threadData_t *threadData, modelica_real omc_p, modelica_real omc_T);

DLLDirection
modelica_metatype boxptr_pump__v3__basicCold__t_plugFlowPipe__heat_vol__b_Medium_ThermodynamicState(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T);
static const MMC_DEFSTRUCTLIT(boxvar_lit_pump__v3__basicCold__t_plugFlowPipe__heat_vol__b_Medium_ThermodynamicState,2,0) {(void*) boxptr_pump__v3__basicCold__t_plugFlowPipe__heat_vol__b_Medium_ThermodynamicState,0}};
#define boxvar_pump__v3__basicCold__t_plugFlowPipe__heat_vol__b_Medium_ThermodynamicState MMC_REFSTRUCTLIT(boxvar_lit_pump__v3__basicCold__t_plugFlowPipe__heat_vol__b_Medium_ThermodynamicState)


DLLDirection
modelica_real omc_pump__v3__basicCold__t_plugFlowPipe__heat_vol__b_Medium_density(threadData_t *threadData, pump__v3__basicCold__t_plugFlowPipe__heat_vol__b_Medium_ThermodynamicState _state);
DLLDirection
modelica_metatype boxptr_pump__v3__basicCold__t_plugFlowPipe__heat_vol__b_Medium_density(threadData_t *threadData, modelica_metatype _state);
static const MMC_DEFSTRUCTLIT(boxvar_lit_pump__v3__basicCold__t_plugFlowPipe__heat_vol__b_Medium_density,2,0) {(void*) boxptr_pump__v3__basicCold__t_plugFlowPipe__heat_vol__b_Medium_density,0}};
#define boxvar_pump__v3__basicCold__t_plugFlowPipe__heat_vol__b_Medium_density MMC_REFSTRUCTLIT(boxvar_lit_pump__v3__basicCold__t_plugFlowPipe__heat_vol__b_Medium_density)


DLLDirection
modelica_real omc_pump__v3__basicCold__t_plugFlowPipe__heat_vol__b_Medium_temperature__phX(threadData_t *threadData, modelica_real _p, modelica_real _h, real_array _X);
DLLDirection
modelica_metatype boxptr_pump__v3__basicCold__t_plugFlowPipe__heat_vol__b_Medium_temperature__phX(threadData_t *threadData, modelica_metatype _p, modelica_metatype _h, modelica_metatype _X);
static const MMC_DEFSTRUCTLIT(boxvar_lit_pump__v3__basicCold__t_plugFlowPipe__heat_vol__b_Medium_temperature__phX,2,0) {(void*) boxptr_pump__v3__basicCold__t_plugFlowPipe__heat_vol__b_Medium_temperature__phX,0}};
#define boxvar_pump__v3__basicCold__t_plugFlowPipe__heat_vol__b_Medium_temperature__phX MMC_REFSTRUCTLIT(boxvar_lit_pump__v3__basicCold__t_plugFlowPipe__heat_vol__b_Medium_temperature__phX)


DLLDirection
pump__v3__basicCold__t_plugFlowPipe__heat_vol__b_dynBal_Medium_ThermodynamicState omc_pump__v3__basicCold__t_plugFlowPipe__heat_vol__b_dynBal_Medium_ThermodynamicState (threadData_t *threadData, modelica_real omc_p, modelica_real omc_T);

DLLDirection
modelica_metatype boxptr_pump__v3__basicCold__t_plugFlowPipe__heat_vol__b_dynBal_Medium_ThermodynamicState(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T);
static const MMC_DEFSTRUCTLIT(boxvar_lit_pump__v3__basicCold__t_plugFlowPipe__heat_vol__b_dynBal_Medium_ThermodynamicState,2,0) {(void*) boxptr_pump__v3__basicCold__t_plugFlowPipe__heat_vol__b_dynBal_Medium_ThermodynamicState,0}};
#define boxvar_pump__v3__basicCold__t_plugFlowPipe__heat_vol__b_dynBal_Medium_ThermodynamicState MMC_REFSTRUCTLIT(boxvar_lit_pump__v3__basicCold__t_plugFlowPipe__heat_vol__b_dynBal_Medium_ThermodynamicState)


DLLDirection
modelica_real omc_pump__v3__basicCold__t_plugFlowPipe__heat_vol__b_dynBal_Medium_density(threadData_t *threadData, pump__v3__basicCold__t_plugFlowPipe__heat_vol__b_dynBal_Medium_ThermodynamicState _state);
DLLDirection
modelica_metatype boxptr_pump__v3__basicCold__t_plugFlowPipe__heat_vol__b_dynBal_Medium_density(threadData_t *threadData, modelica_metatype _state);
static const MMC_DEFSTRUCTLIT(boxvar_lit_pump__v3__basicCold__t_plugFlowPipe__heat_vol__b_dynBal_Medium_density,2,0) {(void*) boxptr_pump__v3__basicCold__t_plugFlowPipe__heat_vol__b_dynBal_Medium_density,0}};
#define boxvar_pump__v3__basicCold__t_plugFlowPipe__heat_vol__b_dynBal_Medium_density MMC_REFSTRUCTLIT(boxvar_lit_pump__v3__basicCold__t_plugFlowPipe__heat_vol__b_dynBal_Medium_density)


DLLDirection
pump__v3__basicCold__t_plugFlowPipe__heat_vol__b_dynBal_Medium_ThermodynamicState omc_pump__v3__basicCold__t_plugFlowPipe__heat_vol__b_dynBal_Medium_setState__pTX(threadData_t *threadData, modelica_real _p, modelica_real _T, real_array _X);
DLLDirection
modelica_metatype boxptr_pump__v3__basicCold__t_plugFlowPipe__heat_vol__b_dynBal_Medium_setState__pTX(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T, modelica_metatype _X);
static const MMC_DEFSTRUCTLIT(boxvar_lit_pump__v3__basicCold__t_plugFlowPipe__heat_vol__b_dynBal_Medium_setState__pTX,2,0) {(void*) boxptr_pump__v3__basicCold__t_plugFlowPipe__heat_vol__b_dynBal_Medium_setState__pTX,0}};
#define boxvar_pump__v3__basicCold__t_plugFlowPipe__heat_vol__b_dynBal_Medium_setState__pTX MMC_REFSTRUCTLIT(boxvar_lit_pump__v3__basicCold__t_plugFlowPipe__heat_vol__b_dynBal_Medium_setState__pTX)


DLLDirection
modelica_real omc_pump__v3__basicCold__t_plugFlowPipe__heat_vol__b_dynBal_Medium_specificEnthalpy__pTX(threadData_t *threadData, modelica_real _p, modelica_real _T, real_array _X);
DLLDirection
modelica_metatype boxptr_pump__v3__basicCold__t_plugFlowPipe__heat_vol__b_dynBal_Medium_specificEnthalpy__pTX(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T, modelica_metatype _X);
static const MMC_DEFSTRUCTLIT(boxvar_lit_pump__v3__basicCold__t_plugFlowPipe__heat_vol__b_dynBal_Medium_specificEnthalpy__pTX,2,0) {(void*) boxptr_pump__v3__basicCold__t_plugFlowPipe__heat_vol__b_dynBal_Medium_specificEnthalpy__pTX,0}};
#define boxvar_pump__v3__basicCold__t_plugFlowPipe__heat_vol__b_dynBal_Medium_specificEnthalpy__pTX MMC_REFSTRUCTLIT(boxvar_lit_pump__v3__basicCold__t_plugFlowPipe__heat_vol__b_dynBal_Medium_specificEnthalpy__pTX)


DLLDirection
modelica_real omc_pump__v3__basicCold__t_plugFlowPipe__heat_vol__b_dynBal_Medium_specificInternalEnergy(threadData_t *threadData, pump__v3__basicCold__t_plugFlowPipe__heat_vol__b_dynBal_Medium_ThermodynamicState _state);
DLLDirection
modelica_metatype boxptr_pump__v3__basicCold__t_plugFlowPipe__heat_vol__b_dynBal_Medium_specificInternalEnergy(threadData_t *threadData, modelica_metatype _state);
static const MMC_DEFSTRUCTLIT(boxvar_lit_pump__v3__basicCold__t_plugFlowPipe__heat_vol__b_dynBal_Medium_specificInternalEnergy,2,0) {(void*) boxptr_pump__v3__basicCold__t_plugFlowPipe__heat_vol__b_dynBal_Medium_specificInternalEnergy,0}};
#define boxvar_pump__v3__basicCold__t_plugFlowPipe__heat_vol__b_dynBal_Medium_specificInternalEnergy MMC_REFSTRUCTLIT(boxvar_lit_pump__v3__basicCold__t_plugFlowPipe__heat_vol__b_dynBal_Medium_specificInternalEnergy)


DLLDirection
pump__v3__basicCold__t_pump_Medium_ThermodynamicState omc_pump__v3__basicCold__t_pump_Medium_ThermodynamicState (threadData_t *threadData, modelica_real omc_p, modelica_real omc_T);

DLLDirection
modelica_metatype boxptr_pump__v3__basicCold__t_pump_Medium_ThermodynamicState(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T);
static const MMC_DEFSTRUCTLIT(boxvar_lit_pump__v3__basicCold__t_pump_Medium_ThermodynamicState,2,0) {(void*) boxptr_pump__v3__basicCold__t_pump_Medium_ThermodynamicState,0}};
#define boxvar_pump__v3__basicCold__t_pump_Medium_ThermodynamicState MMC_REFSTRUCTLIT(boxvar_lit_pump__v3__basicCold__t_pump_Medium_ThermodynamicState)


DLLDirection
modelica_real omc_pump__v3__basicCold__t_pump_Medium_specificEnthalpy(threadData_t *threadData, pump__v3__basicCold__t_pump_Medium_ThermodynamicState _state);
DLLDirection
modelica_metatype boxptr_pump__v3__basicCold__t_pump_Medium_specificEnthalpy(threadData_t *threadData, modelica_metatype _state);
static const MMC_DEFSTRUCTLIT(boxvar_lit_pump__v3__basicCold__t_pump_Medium_specificEnthalpy,2,0) {(void*) boxptr_pump__v3__basicCold__t_pump_Medium_specificEnthalpy,0}};
#define boxvar_pump__v3__basicCold__t_pump_Medium_specificEnthalpy MMC_REFSTRUCTLIT(boxvar_lit_pump__v3__basicCold__t_pump_Medium_specificEnthalpy)


DLLDirection
pump__v3__basicCold__t_pump_preSou_Medium_ThermodynamicState omc_pump__v3__basicCold__t_pump_preSou_Medium_ThermodynamicState (threadData_t *threadData, modelica_real omc_p, modelica_real omc_T);

DLLDirection
modelica_metatype boxptr_pump__v3__basicCold__t_pump_preSou_Medium_ThermodynamicState(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T);
static const MMC_DEFSTRUCTLIT(boxvar_lit_pump__v3__basicCold__t_pump_preSou_Medium_ThermodynamicState,2,0) {(void*) boxptr_pump__v3__basicCold__t_pump_preSou_Medium_ThermodynamicState,0}};
#define boxvar_pump__v3__basicCold__t_pump_preSou_Medium_ThermodynamicState MMC_REFSTRUCTLIT(boxvar_lit_pump__v3__basicCold__t_pump_preSou_Medium_ThermodynamicState)


DLLDirection
modelica_real omc_pump__v3__basicCold__t_pump_preSou_Medium_density(threadData_t *threadData, pump__v3__basicCold__t_pump_preSou_Medium_ThermodynamicState _state);
DLLDirection
modelica_metatype boxptr_pump__v3__basicCold__t_pump_preSou_Medium_density(threadData_t *threadData, modelica_metatype _state);
static const MMC_DEFSTRUCTLIT(boxvar_lit_pump__v3__basicCold__t_pump_preSou_Medium_density,2,0) {(void*) boxptr_pump__v3__basicCold__t_pump_preSou_Medium_density,0}};
#define boxvar_pump__v3__basicCold__t_pump_preSou_Medium_density MMC_REFSTRUCTLIT(boxvar_lit_pump__v3__basicCold__t_pump_preSou_Medium_density)


DLLDirection
pump__v3__basicCold__t_pump_preSou_Medium_ThermodynamicState omc_pump__v3__basicCold__t_pump_preSou_Medium_setState__phX(threadData_t *threadData, modelica_real _p, modelica_real _h, real_array _X);
DLLDirection
modelica_metatype boxptr_pump__v3__basicCold__t_pump_preSou_Medium_setState__phX(threadData_t *threadData, modelica_metatype _p, modelica_metatype _h, modelica_metatype _X);
static const MMC_DEFSTRUCTLIT(boxvar_lit_pump__v3__basicCold__t_pump_preSou_Medium_setState__phX,2,0) {(void*) boxptr_pump__v3__basicCold__t_pump_preSou_Medium_setState__phX,0}};
#define boxvar_pump__v3__basicCold__t_pump_preSou_Medium_setState__phX MMC_REFSTRUCTLIT(boxvar_lit_pump__v3__basicCold__t_pump_preSou_Medium_setState__phX)


DLLDirection
pump__v3__basicCold__t_pump_vol_Medium_ThermodynamicState omc_pump__v3__basicCold__t_pump_vol_Medium_ThermodynamicState (threadData_t *threadData, modelica_real omc_p, modelica_real omc_T);

DLLDirection
modelica_metatype boxptr_pump__v3__basicCold__t_pump_vol_Medium_ThermodynamicState(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T);
static const MMC_DEFSTRUCTLIT(boxvar_lit_pump__v3__basicCold__t_pump_vol_Medium_ThermodynamicState,2,0) {(void*) boxptr_pump__v3__basicCold__t_pump_vol_Medium_ThermodynamicState,0}};
#define boxvar_pump__v3__basicCold__t_pump_vol_Medium_ThermodynamicState MMC_REFSTRUCTLIT(boxvar_lit_pump__v3__basicCold__t_pump_vol_Medium_ThermodynamicState)


DLLDirection
modelica_real omc_pump__v3__basicCold__t_pump_vol_Medium_density(threadData_t *threadData, pump__v3__basicCold__t_pump_vol_Medium_ThermodynamicState _state);
DLLDirection
modelica_metatype boxptr_pump__v3__basicCold__t_pump_vol_Medium_density(threadData_t *threadData, modelica_metatype _state);
static const MMC_DEFSTRUCTLIT(boxvar_lit_pump__v3__basicCold__t_pump_vol_Medium_density,2,0) {(void*) boxptr_pump__v3__basicCold__t_pump_vol_Medium_density,0}};
#define boxvar_pump__v3__basicCold__t_pump_vol_Medium_density MMC_REFSTRUCTLIT(boxvar_lit_pump__v3__basicCold__t_pump_vol_Medium_density)


DLLDirection
modelica_real omc_pump__v3__basicCold__t_pump_vol_Medium_temperature__phX(threadData_t *threadData, modelica_real _p, modelica_real _h, real_array _X);
DLLDirection
modelica_metatype boxptr_pump__v3__basicCold__t_pump_vol_Medium_temperature__phX(threadData_t *threadData, modelica_metatype _p, modelica_metatype _h, modelica_metatype _X);
static const MMC_DEFSTRUCTLIT(boxvar_lit_pump__v3__basicCold__t_pump_vol_Medium_temperature__phX,2,0) {(void*) boxptr_pump__v3__basicCold__t_pump_vol_Medium_temperature__phX,0}};
#define boxvar_pump__v3__basicCold__t_pump_vol_Medium_temperature__phX MMC_REFSTRUCTLIT(boxvar_lit_pump__v3__basicCold__t_pump_vol_Medium_temperature__phX)


DLLDirection
pump__v3__basicCold__t_pump_vol_dynBal_Medium_ThermodynamicState omc_pump__v3__basicCold__t_pump_vol_dynBal_Medium_ThermodynamicState (threadData_t *threadData, modelica_real omc_p, modelica_real omc_T);

DLLDirection
modelica_metatype boxptr_pump__v3__basicCold__t_pump_vol_dynBal_Medium_ThermodynamicState(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T);
static const MMC_DEFSTRUCTLIT(boxvar_lit_pump__v3__basicCold__t_pump_vol_dynBal_Medium_ThermodynamicState,2,0) {(void*) boxptr_pump__v3__basicCold__t_pump_vol_dynBal_Medium_ThermodynamicState,0}};
#define boxvar_pump__v3__basicCold__t_pump_vol_dynBal_Medium_ThermodynamicState MMC_REFSTRUCTLIT(boxvar_lit_pump__v3__basicCold__t_pump_vol_dynBal_Medium_ThermodynamicState)


DLLDirection
modelica_real omc_pump__v3__basicCold__t_pump_vol_dynBal_Medium_density(threadData_t *threadData, pump__v3__basicCold__t_pump_vol_dynBal_Medium_ThermodynamicState _state);
DLLDirection
modelica_metatype boxptr_pump__v3__basicCold__t_pump_vol_dynBal_Medium_density(threadData_t *threadData, modelica_metatype _state);
static const MMC_DEFSTRUCTLIT(boxvar_lit_pump__v3__basicCold__t_pump_vol_dynBal_Medium_density,2,0) {(void*) boxptr_pump__v3__basicCold__t_pump_vol_dynBal_Medium_density,0}};
#define boxvar_pump__v3__basicCold__t_pump_vol_dynBal_Medium_density MMC_REFSTRUCTLIT(boxvar_lit_pump__v3__basicCold__t_pump_vol_dynBal_Medium_density)


DLLDirection
pump__v3__basicCold__t_pump_vol_dynBal_Medium_ThermodynamicState omc_pump__v3__basicCold__t_pump_vol_dynBal_Medium_setState__pTX(threadData_t *threadData, modelica_real _p, modelica_real _T, real_array _X);
DLLDirection
modelica_metatype boxptr_pump__v3__basicCold__t_pump_vol_dynBal_Medium_setState__pTX(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T, modelica_metatype _X);
static const MMC_DEFSTRUCTLIT(boxvar_lit_pump__v3__basicCold__t_pump_vol_dynBal_Medium_setState__pTX,2,0) {(void*) boxptr_pump__v3__basicCold__t_pump_vol_dynBal_Medium_setState__pTX,0}};
#define boxvar_pump__v3__basicCold__t_pump_vol_dynBal_Medium_setState__pTX MMC_REFSTRUCTLIT(boxvar_lit_pump__v3__basicCold__t_pump_vol_dynBal_Medium_setState__pTX)


DLLDirection
modelica_real omc_pump__v3__basicCold__t_pump_vol_dynBal_Medium_specificEnthalpy__pTX(threadData_t *threadData, modelica_real _p, modelica_real _T, real_array _X);
DLLDirection
modelica_metatype boxptr_pump__v3__basicCold__t_pump_vol_dynBal_Medium_specificEnthalpy__pTX(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T, modelica_metatype _X);
static const MMC_DEFSTRUCTLIT(boxvar_lit_pump__v3__basicCold__t_pump_vol_dynBal_Medium_specificEnthalpy__pTX,2,0) {(void*) boxptr_pump__v3__basicCold__t_pump_vol_dynBal_Medium_specificEnthalpy__pTX,0}};
#define boxvar_pump__v3__basicCold__t_pump_vol_dynBal_Medium_specificEnthalpy__pTX MMC_REFSTRUCTLIT(boxvar_lit_pump__v3__basicCold__t_pump_vol_dynBal_Medium_specificEnthalpy__pTX)


DLLDirection
modelica_real omc_pump__v3__basicCold__t_pump_vol_dynBal_Medium_specificInternalEnergy(threadData_t *threadData, pump__v3__basicCold__t_pump_vol_dynBal_Medium_ThermodynamicState _state);
DLLDirection
modelica_metatype boxptr_pump__v3__basicCold__t_pump_vol_dynBal_Medium_specificInternalEnergy(threadData_t *threadData, modelica_metatype _state);
static const MMC_DEFSTRUCTLIT(boxvar_lit_pump__v3__basicCold__t_pump_vol_dynBal_Medium_specificInternalEnergy,2,0) {(void*) boxptr_pump__v3__basicCold__t_pump_vol_dynBal_Medium_specificInternalEnergy,0}};
#define boxvar_pump__v3__basicCold__t_pump_vol_dynBal_Medium_specificInternalEnergy MMC_REFSTRUCTLIT(boxvar_lit_pump__v3__basicCold__t_pump_vol_dynBal_Medium_specificInternalEnergy)


DLLDirection
pump__v3__basicCold__t_senTemIn__heat_Medium_ThermodynamicState omc_pump__v3__basicCold__t_senTemIn__heat_Medium_ThermodynamicState (threadData_t *threadData, modelica_real omc_p, modelica_real omc_T);

DLLDirection
modelica_metatype boxptr_pump__v3__basicCold__t_senTemIn__heat_Medium_ThermodynamicState(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T);
static const MMC_DEFSTRUCTLIT(boxvar_lit_pump__v3__basicCold__t_senTemIn__heat_Medium_ThermodynamicState,2,0) {(void*) boxptr_pump__v3__basicCold__t_senTemIn__heat_Medium_ThermodynamicState,0}};
#define boxvar_pump__v3__basicCold__t_senTemIn__heat_Medium_ThermodynamicState MMC_REFSTRUCTLIT(boxvar_lit_pump__v3__basicCold__t_senTemIn__heat_Medium_ThermodynamicState)


DLLDirection
pump__v3__basicCold__t_senTemIn__heat_Medium_ThermodynamicState omc_pump__v3__basicCold__t_senTemIn__heat_Medium_setState__phX(threadData_t *threadData, modelica_real _p, modelica_real _h, real_array _X);
DLLDirection
modelica_metatype boxptr_pump__v3__basicCold__t_senTemIn__heat_Medium_setState__phX(threadData_t *threadData, modelica_metatype _p, modelica_metatype _h, modelica_metatype _X);
static const MMC_DEFSTRUCTLIT(boxvar_lit_pump__v3__basicCold__t_senTemIn__heat_Medium_setState__phX,2,0) {(void*) boxptr_pump__v3__basicCold__t_senTemIn__heat_Medium_setState__phX,0}};
#define boxvar_pump__v3__basicCold__t_senTemIn__heat_Medium_setState__phX MMC_REFSTRUCTLIT(boxvar_lit_pump__v3__basicCold__t_senTemIn__heat_Medium_setState__phX)


DLLDirection
modelica_real omc_pump__v3__basicCold__t_senTemIn__heat_Medium_temperature(threadData_t *threadData, pump__v3__basicCold__t_senTemIn__heat_Medium_ThermodynamicState _state);
DLLDirection
modelica_metatype boxptr_pump__v3__basicCold__t_senTemIn__heat_Medium_temperature(threadData_t *threadData, modelica_metatype _state);
static const MMC_DEFSTRUCTLIT(boxvar_lit_pump__v3__basicCold__t_senTemIn__heat_Medium_temperature,2,0) {(void*) boxptr_pump__v3__basicCold__t_senTemIn__heat_Medium_temperature,0}};
#define boxvar_pump__v3__basicCold__t_senTemIn__heat_Medium_temperature MMC_REFSTRUCTLIT(boxvar_lit_pump__v3__basicCold__t_senTemIn__heat_Medium_temperature)


DLLDirection
pump__v3__basicCold__t_senTemOut__cold_Medium_ThermodynamicState omc_pump__v3__basicCold__t_senTemOut__cold_Medium_ThermodynamicState (threadData_t *threadData, modelica_real omc_p, modelica_real omc_T);

DLLDirection
modelica_metatype boxptr_pump__v3__basicCold__t_senTemOut__cold_Medium_ThermodynamicState(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T);
static const MMC_DEFSTRUCTLIT(boxvar_lit_pump__v3__basicCold__t_senTemOut__cold_Medium_ThermodynamicState,2,0) {(void*) boxptr_pump__v3__basicCold__t_senTemOut__cold_Medium_ThermodynamicState,0}};
#define boxvar_pump__v3__basicCold__t_senTemOut__cold_Medium_ThermodynamicState MMC_REFSTRUCTLIT(boxvar_lit_pump__v3__basicCold__t_senTemOut__cold_Medium_ThermodynamicState)


DLLDirection
pump__v3__basicCold__t_senTemOut__cold_Medium_ThermodynamicState omc_pump__v3__basicCold__t_senTemOut__cold_Medium_setState__phX(threadData_t *threadData, modelica_real _p, modelica_real _h, real_array _X);
DLLDirection
modelica_metatype boxptr_pump__v3__basicCold__t_senTemOut__cold_Medium_setState__phX(threadData_t *threadData, modelica_metatype _p, modelica_metatype _h, modelica_metatype _X);
static const MMC_DEFSTRUCTLIT(boxvar_lit_pump__v3__basicCold__t_senTemOut__cold_Medium_setState__phX,2,0) {(void*) boxptr_pump__v3__basicCold__t_senTemOut__cold_Medium_setState__phX,0}};
#define boxvar_pump__v3__basicCold__t_senTemOut__cold_Medium_setState__phX MMC_REFSTRUCTLIT(boxvar_lit_pump__v3__basicCold__t_senTemOut__cold_Medium_setState__phX)


DLLDirection
modelica_real omc_pump__v3__basicCold__t_senTemOut__cold_Medium_temperature(threadData_t *threadData, pump__v3__basicCold__t_senTemOut__cold_Medium_ThermodynamicState _state);
DLLDirection
modelica_metatype boxptr_pump__v3__basicCold__t_senTemOut__cold_Medium_temperature(threadData_t *threadData, modelica_metatype _state);
static const MMC_DEFSTRUCTLIT(boxvar_lit_pump__v3__basicCold__t_senTemOut__cold_Medium_temperature,2,0) {(void*) boxptr_pump__v3__basicCold__t_senTemOut__cold_Medium_temperature,0}};
#define boxvar_pump__v3__basicCold__t_senTemOut__cold_Medium_temperature MMC_REFSTRUCTLIT(boxvar_lit_pump__v3__basicCold__t_senTemOut__cold_Medium_temperature)


DLLDirection
pump__v3__basicCold__t_senTemOut__heat_Medium_ThermodynamicState omc_pump__v3__basicCold__t_senTemOut__heat_Medium_ThermodynamicState (threadData_t *threadData, modelica_real omc_p, modelica_real omc_T);

DLLDirection
modelica_metatype boxptr_pump__v3__basicCold__t_senTemOut__heat_Medium_ThermodynamicState(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T);
static const MMC_DEFSTRUCTLIT(boxvar_lit_pump__v3__basicCold__t_senTemOut__heat_Medium_ThermodynamicState,2,0) {(void*) boxptr_pump__v3__basicCold__t_senTemOut__heat_Medium_ThermodynamicState,0}};
#define boxvar_pump__v3__basicCold__t_senTemOut__heat_Medium_ThermodynamicState MMC_REFSTRUCTLIT(boxvar_lit_pump__v3__basicCold__t_senTemOut__heat_Medium_ThermodynamicState)


DLLDirection
pump__v3__basicCold__t_senTemOut__heat_Medium_ThermodynamicState omc_pump__v3__basicCold__t_senTemOut__heat_Medium_setState__phX(threadData_t *threadData, modelica_real _p, modelica_real _h, real_array _X);
DLLDirection
modelica_metatype boxptr_pump__v3__basicCold__t_senTemOut__heat_Medium_setState__phX(threadData_t *threadData, modelica_metatype _p, modelica_metatype _h, modelica_metatype _X);
static const MMC_DEFSTRUCTLIT(boxvar_lit_pump__v3__basicCold__t_senTemOut__heat_Medium_setState__phX,2,0) {(void*) boxptr_pump__v3__basicCold__t_senTemOut__heat_Medium_setState__phX,0}};
#define boxvar_pump__v3__basicCold__t_senTemOut__heat_Medium_setState__phX MMC_REFSTRUCTLIT(boxvar_lit_pump__v3__basicCold__t_senTemOut__heat_Medium_setState__phX)


DLLDirection
modelica_real omc_pump__v3__basicCold__t_senTemOut__heat_Medium_temperature(threadData_t *threadData, pump__v3__basicCold__t_senTemOut__heat_Medium_ThermodynamicState _state);
DLLDirection
modelica_metatype boxptr_pump__v3__basicCold__t_senTemOut__heat_Medium_temperature(threadData_t *threadData, modelica_metatype _state);
static const MMC_DEFSTRUCTLIT(boxvar_lit_pump__v3__basicCold__t_senTemOut__heat_Medium_temperature,2,0) {(void*) boxptr_pump__v3__basicCold__t_senTemOut__heat_Medium_temperature,0}};
#define boxvar_pump__v3__basicCold__t_senTemOut__heat_Medium_temperature MMC_REFSTRUCTLIT(boxvar_lit_pump__v3__basicCold__t_senTemOut__heat_Medium_temperature)
#include "pump_v3_basicCold_t_model.h"


#ifdef __cplusplus
}
#endif
#endif
