#include "omc_simulation_settings.h"
#include "pump_v3_basicCold_t_functions.h"
#ifdef __cplusplus
extern "C" {
#endif

#include "pump_v3_basicCold_t_includes.h"


DLLDirection
modelica_real omc_IDEAS_Fluid_BaseClasses_FlowModels_basicFlowFunction__m__flow(threadData_t *threadData, modelica_real _m_flow, modelica_real _k, modelica_real _m_flow_turbulent)
{
  modelica_real _dp;
  modelica_real _dp_turbulent;
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_real _m_flowNorm;
  modelica_real tmp3;
  modelica_real _m_flowNormSq;
  modelica_real tmp4;
  modelica_real tmp5;
  modelica_real tmp6;
  modelica_boolean tmp7;
  modelica_real tmp8;
  _tailrecursive: OMC_LABEL_UNUSED
  // _dp has no default value.
  tmp1 = _k;
  if (tmp1 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "m_flow_turbulent / k");}
  tmp2 = (_m_flow_turbulent) / tmp1;
  _dp_turbulent = (tmp2 * tmp2);
  tmp3 = _m_flow_turbulent;
  if (tmp3 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "m_flow / m_flow_turbulent");}
  _m_flowNorm = (_m_flow) / tmp3;
  tmp4 = _m_flowNorm;
  _m_flowNormSq = (tmp4 * tmp4);
  tmp7 = (modelica_boolean)(fabs(_m_flow) > _m_flow_turbulent);
  if(tmp7)
  {
    tmp5 = _k;
    if (tmp5 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "m_flow / k");}
    tmp6 = (_m_flow) / tmp5;
    tmp8 = (((modelica_real)sign(_m_flow))) * ((tmp6 * tmp6));
  }
  else
  {
    tmp8 = ((0.375 + (0.75 - ((0.125) * (_m_flowNormSq))) * (_m_flowNormSq)) * (_dp_turbulent)) * (_m_flowNorm);
  }
  _dp = tmp8;
  _return: OMC_LABEL_UNUSED
  return _dp;
}
modelica_metatype boxptr_IDEAS_Fluid_BaseClasses_FlowModels_basicFlowFunction__m__flow(threadData_t *threadData, modelica_metatype _m_flow, modelica_metatype _k, modelica_metatype _m_flow_turbulent)
{
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_real tmp3;
  modelica_real _dp;
  modelica_metatype out_dp;
  tmp1 = mmc_unbox_real(_m_flow);
  tmp2 = mmc_unbox_real(_k);
  tmp3 = mmc_unbox_real(_m_flow_turbulent);
  _dp = omc_IDEAS_Fluid_BaseClasses_FlowModels_basicFlowFunction__m__flow(threadData, tmp1, tmp2, tmp3);
  out_dp = mmc_mk_rcon(_dp);
  return out_dp;
}

IDEAS_Fluid_Movers_BaseClasses_Characteristics_flowParametersInternal omc_IDEAS_Fluid_Movers_BaseClasses_Characteristics_flowParametersInternal(threadData_t *threadData, modelica_integer omc_n, real_array omc_V_flow, real_array omc_dp)
{
  IDEAS_Fluid_Movers_BaseClasses_Characteristics_flowParametersInternal tmp1;
  tmp1._n = omc_n;
  tmp1._V_flow = omc_V_flow;
  tmp1._dp = omc_dp;
  return tmp1;
}

modelica_metatype boxptr_IDEAS_Fluid_Movers_BaseClasses_Characteristics_flowParametersInternal(threadData_t *threadData, modelica_metatype _n, modelica_metatype _V_flow, modelica_metatype _dp)
{
  return mmc_mk_box4(3, &IDEAS_Fluid_Movers_BaseClasses_Characteristics_flowParametersInternal__desc, _n, _V_flow, _dp);
}

DLLDirection
modelica_real omc_IDEAS_Fluid_Movers_BaseClasses_Euler_correlation(threadData_t *threadData, modelica_real _x)
{
  modelica_real _y;
  modelica_real _a;
  modelica_real _b;
  modelica_real _c;
  modelica_real _d;
  modelica_real _y1;
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_real tmp3;
  _tailrecursive: OMC_LABEL_UNUSED
  // _y has no default value.
  // _a has no default value.
  // _b has no default value.
  // _c has no default value.
  // _d has no default value.
  // _y1 has no default value.
  if((_x < -0.5))
  {
    _a = 0.05687322707407;

    _b = 0.493231336746;

    _c = 1.433531254001;

    _d = 1.407887300933;
  }
  else
  {
    if((_x > 0.5))
    {
      _a = -0.0085494313567465;

      _b = 0.129570015023683;

      _c = -0.659973150292782;

      _d = 1.13993003013131;
    }
    else
    {
      _a = 0.37824577860088;

      _b = -0.75988502317361;

      _c = -0.060614519563716;

      _d = 1.01426507307139;
    }
  }

  tmp1 = _x;
  tmp2 = _x;
  tmp3 = 1.01545;
  if (tmp3 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "(a * x ^ 3.0 + b * x ^ 2.0 + c * x + d) / 1.01545");}
  _y1 = ((_a) * ((tmp1 * tmp1 * tmp1)) + (_b) * ((tmp2 * tmp2)) + (_c) * (_x) + _d) / tmp3;

  _y = ((_y1 > 0.002)?_y1:omc_IDEAS_Utilities_Math_Functions_smoothMax(threadData, _y1, 0.001, 5e-4));
  _return: OMC_LABEL_UNUSED
  return _y;
}
modelica_metatype boxptr_IDEAS_Fluid_Movers_BaseClasses_Euler_correlation(threadData_t *threadData, modelica_metatype _x)
{
  modelica_real tmp1;
  modelica_real _y;
  modelica_metatype out_y;
  tmp1 = mmc_unbox_real(_x);
  _y = omc_IDEAS_Fluid_Movers_BaseClasses_Euler_correlation(threadData, tmp1);
  out_y = mmc_mk_rcon(_y);
  return out_y;
}

DLLDirection
modelica_real omc_IDEAS_Fluid_Movers_BaseClasses_Euler_efficiency(threadData_t *threadData, IDEAS_Fluid_Movers_BaseClasses_Euler_peak _peak, modelica_real _dp, modelica_real _V_flow, modelica_real _V_flow_dp_small)
{
  modelica_real _eta;
  modelica_real _log_r_Eu;
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_real tmp3;
  modelica_real tmp4;
  modelica_real tmp5;
  modelica_real tmp6;
  _tailrecursive: OMC_LABEL_UNUSED
  // _eta has no default value.
  // _log_r_Eu has no default value.
  tmp1 = _peak._V_flow;
  tmp2 = 2.0;
  if (tmp2 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "V_flow_dp_small / 2.0");}
  tmp3 = _V_flow;
  tmp4 = 2.0;
  if (tmp4 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "V_flow_dp_small / 2.0");}
  tmp5 = omc_IDEAS_Utilities_Math_Functions_smoothMax(threadData, (_peak._dp) * ((tmp3 * tmp3)), _V_flow_dp_small, (_V_flow_dp_small) / tmp4);
  if (tmp5 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "IDEAS.Utilities.Math.Functions.smoothMax(dp * peak.V_flow ^ 2.0, V_flow_dp_small, V_flow_dp_small / 2.0) / IDEAS.Utilities.Math.Functions.smoothMax(peak.dp * V_flow ^ 2.0, V_flow_dp_small, V_flow_dp_small / 2.0)");}
  tmp6 = (omc_IDEAS_Utilities_Math_Functions_smoothMax(threadData, (_dp) * ((tmp1 * tmp1)), _V_flow_dp_small, (_V_flow_dp_small) / tmp2)) / tmp5;
  if(!(tmp6 > 0.0))
  {
    FILE_INFO info = {"",0,0,0,0,0};
    omc_assert(threadData, info, "Model error: Argument of log10(IDEAS.Utilities.Math.Functions.smoothMax(dp * peak.V_flow ^ 2.0, V_flow_dp_small, V_flow_dp_small / 2.0) / IDEAS.Utilities.Math.Functions.smoothMax(peak.dp * V_flow ^ 2.0, V_flow_dp_small, V_flow_dp_small / 2.0)) was %g should be > 0", tmp6);
  }
  _log_r_Eu = log10(tmp6);

  _eta = (_peak._eta) * (omc_IDEAS_Fluid_Movers_BaseClasses_Euler_correlation(threadData, _log_r_Eu));
  _return: OMC_LABEL_UNUSED
  return _eta;
}
modelica_metatype boxptr_IDEAS_Fluid_Movers_BaseClasses_Euler_efficiency(threadData_t *threadData, modelica_metatype _peak, modelica_metatype _dp, modelica_metatype _V_flow, modelica_metatype _V_flow_dp_small)
{
  IDEAS_Fluid_Movers_BaseClasses_Euler_peak tmp1;
  modelica_metatype tmpMeta2;
  modelica_real tmp3;
  modelica_metatype tmpMeta4;
  modelica_real tmp5;
  modelica_metatype tmpMeta6;
  modelica_real tmp7;
  modelica_real tmp8;
  modelica_real tmp9;
  modelica_real tmp10;
  modelica_real _eta;
  modelica_metatype out_eta;
  tmpMeta2 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_peak), 2)));
  tmp3 = mmc_unbox_real(tmpMeta2);
  tmp1._V_flow = tmp3;
  tmpMeta4 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_peak), 3)));
  tmp5 = mmc_unbox_real(tmpMeta4);
  tmp1._dp = tmp5;
  tmpMeta6 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_peak), 4)));
  tmp7 = mmc_unbox_real(tmpMeta6);
  tmp1._eta = tmp7;tmp8 = mmc_unbox_real(_dp);
  tmp9 = mmc_unbox_real(_V_flow);
  tmp10 = mmc_unbox_real(_V_flow_dp_small);
  _eta = omc_IDEAS_Fluid_Movers_BaseClasses_Euler_efficiency(threadData, tmp1, tmp8, tmp9, tmp10);
  out_eta = mmc_mk_rcon(_eta);
  return out_eta;
}

IDEAS_Fluid_Movers_BaseClasses_Euler_peak omc_IDEAS_Fluid_Movers_BaseClasses_Euler_peak(threadData_t *threadData, modelica_real omc_V_flow, modelica_real omc_dp, modelica_real omc_eta)
{
  IDEAS_Fluid_Movers_BaseClasses_Euler_peak tmp1;
  tmp1._V_flow = omc_V_flow;
  tmp1._dp = omc_dp;
  tmp1._eta = omc_eta;
  return tmp1;
}

modelica_metatype boxptr_IDEAS_Fluid_Movers_BaseClasses_Euler_peak(threadData_t *threadData, modelica_metatype _V_flow, modelica_metatype _dp, modelica_metatype _eta)
{
  return mmc_mk_box4(3, &IDEAS_Fluid_Movers_BaseClasses_Euler_peak__desc, _V_flow, _dp, _eta);
}

DLLDirection
IDEAS_Fluid_Movers_BaseClasses_Euler_powerWithDerivative omc_IDEAS_Fluid_Movers_BaseClasses_Euler_power(threadData_t *threadData, IDEAS_Fluid_Movers_BaseClasses_Euler_peak _peak, IDEAS_Fluid_Movers_BaseClasses_Characteristics_flowParametersInternal _pressure)
{
  IDEAS_Fluid_Movers_BaseClasses_Euler_powerWithDerivative _power;
  real_array _V_flow;
  real_array _dp;
  modelica_real _V_flow_dp_small;
  real_array tmp2;
  modelica_integer tmp7;
  modelica_integer tmp8;
  modelica_integer tmp9;
  modelica_real tmp10;
  modelica_real tmp11;
  modelica_real tmp12;
  modelica_real tmp13;
  modelica_integer tmp14;
  modelica_integer tmp15;
  modelica_integer tmp16;
  real_array tmp17;
  integer_array tmp18;
  modelica_integer tmp19;
  index_spec_t tmp20;
  real_array tmp21;
  integer_array tmp22;
  modelica_integer tmp23;
  index_spec_t tmp24;
  integer_array tmp25;
  modelica_integer tmp26;
  index_spec_t tmp27;
  _tailrecursive: OMC_LABEL_UNUSED
  IDEAS_Fluid_Movers_BaseClasses_Euler_powerWithDerivative_1_2_3_construct(threadData, _power, _OMC_LIT11, _OMC_LIT11, _OMC_LIT11); // _power has no default value.
  alloc_real_array(&(_V_flow), 1, (_index_t)11); // _V_flow has no default value.
  alloc_real_array(&(_dp), 1, (_index_t)11); // _dp has no default value.
  // _V_flow_dp_small has no default value.
  {
    modelica_integer tmp1;
    real_array __omcQ_24tmpVar3;
    modelica_real __omcQ_24tmpVar2;
    modelica_integer tmp3;
    modelica_integer tmp4;
    modelica_integer tmp5;
    modelica_integer _i_length;
    modelica_integer _i;
    modelica_integer tmp6;
    tmp4 = 1 /* Range step-value */;
    tmp5 = ((modelica_integer) 10) /* Range stop-value */;
    _i = ((modelica_integer) 0) /* Range start-value */;
    _i_length = ((tmp5-_i)/tmp4)+1;
    _i = (((modelica_integer) 0) /* Range start-value */)-tmp4;
    tmp6 = 0;
    tmp6 = modelica_integer_max(tmp6,_i_length);
    tmp1 = 1;
    simple_alloc_1d_real_array(&__omcQ_24tmpVar3,tmp6);
    while(1) {
      tmp3 = 1;
      if (tmp4 > 0 ? _i+tmp4 <= tmp5 : _i+tmp4 >= tmp5) {
        _i += tmp4;
        tmp3--;
      }
      if (tmp3 == 0) {
        __omcQ_24tmpVar2 = ((real_array_get(_pressure._V_flow, 1, _pressure._n)) * (((modelica_real)_i))) * (0.1);
        real_array_get1(__omcQ_24tmpVar3, 1, tmp1++) = __omcQ_24tmpVar2;
      } else if (tmp3 == 1) {
        break;
      } else {
        MMC_THROW_INTERNAL();
      }
    }
    tmp2 = __omcQ_24tmpVar3;
  }
  real_array_copy_data(tmp2, _V_flow);

  tmp7 = ((modelica_integer) 1); tmp8 = 1; tmp9 = ((modelica_integer) 11);
  if(!(((tmp8 > 0) && (tmp7 > tmp9)) || ((tmp8 < 0) && (tmp7 < tmp9))))
  {
    modelica_integer _i;
    for(_i = ((modelica_integer) 1); in_range_integer(_i, tmp7, tmp9); _i += tmp8)
    {
      real_array_get(_dp, 1, _i) = omc_IDEAS_Utilities_Math_Functions_smoothInterpolation(threadData, real_array_get(_V_flow, 1, _i), _pressure._V_flow, _pressure._dp, 0 /* false */);
    }
  }

  real_array_copy_data(_V_flow, _power._V_flow);

  tmp10 = max_real_array(_pressure._V_flow);
  tmp11 = max_real_array(_pressure._dp);
  _V_flow_dp_small = ((1e-4) * (tmp10)) * (tmp11);

  tmp14 = ((modelica_integer) 2); tmp15 = 1; tmp16 = ((modelica_integer) 10);
  if(!(((tmp15 > 0) && (tmp14 > tmp16)) || ((tmp15 < 0) && (tmp14 < tmp16))))
  {
    modelica_integer _i;
    for(_i = ((modelica_integer) 2); in_range_integer(_i, tmp14, tmp16); _i += tmp15)
    {
      tmp12 = 2.0;
      if (tmp12 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "V_flow_dp_small / 2.0");}
      tmp13 = omc_IDEAS_Fluid_Movers_BaseClasses_Euler_efficiency(threadData, _peak, real_array_get(_dp, 1, _i), real_array_get(_V_flow, 1, _i), (_V_flow_dp_small) / tmp12);
      if (tmp13 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "V_flow[i] * dp[i] / IDEAS.Fluid.Movers.BaseClasses.Euler.efficiency(peak, dp[i], V_flow[i], V_flow_dp_small / 2.0)");}
      real_array_get(_power._P, 1, _i) = ((real_array_get(_V_flow, 1, _i)) * (real_array_get(_dp, 1, _i))) / tmp13;
    }
  }

  create_integer_array_from_range(&tmp18, ((modelica_integer) 2), 1, ((modelica_integer) 10));
  tmp19 = size_of_dimension_base_array(tmp18, 1);
  create_index_spec(&tmp20, 1, tmp19, integer_array_make_index_array(tmp18), 'A');
  index_alloc_real_array(&_V_flow, &tmp20, &tmp17);
  create_integer_array_from_range(&tmp22, ((modelica_integer) 2), 1, ((modelica_integer) 10));
  tmp23 = size_of_dimension_base_array(tmp22, 1);
  create_index_spec(&tmp24, 1, tmp23, integer_array_make_index_array(tmp22), 'A');
  index_alloc_real_array(&_power._P, &tmp24, &tmp21);
  create_integer_array_from_range(&tmp25, ((modelica_integer) 2), 1, ((modelica_integer) 10));
  tmp26 = size_of_dimension_base_array(tmp25, 1);
  create_index_spec(&tmp27, 1, tmp26, integer_array_make_index_array(tmp25), 'A');
  indexed_assign_real_array(omc_IDEAS_Utilities_Math_Functions_splineDerivatives(threadData, tmp17, tmp21, 0 /* false */), &_power._d, &tmp27);

  real_array_get(_power._d, 1, ((modelica_integer) 1)) = real_array_get(_power._d, 1, ((modelica_integer) 2));

  real_array_get(_power._d, 1, ((modelica_integer) 11)) = real_array_get(_power._d, 1, ((modelica_integer) 10));

  real_array_get(_power._P, 1, ((modelica_integer) 1)) = real_array_get(_power._P, 1, ((modelica_integer) 2)) - ((real_array_get(_power._d, 1, ((modelica_integer) 2))) * (real_array_get(_V_flow, 1, ((modelica_integer) 2))));

  real_array_get(_power._P, 1, ((modelica_integer) 11)) = real_array_get(_power._P, 1, ((modelica_integer) 10)) + (real_array_get(_power._d, 1, ((modelica_integer) 10))) * (real_array_get(_V_flow, 1, ((modelica_integer) 11)) - real_array_get(_V_flow, 1, ((modelica_integer) 10)));
  _return: OMC_LABEL_UNUSED
  return _power;
}
modelica_metatype boxptr_IDEAS_Fluid_Movers_BaseClasses_Euler_power(threadData_t *threadData, modelica_metatype _peak, modelica_metatype _pressure)
{
  IDEAS_Fluid_Movers_BaseClasses_Euler_peak tmp1;
  modelica_metatype tmpMeta2;
  modelica_real tmp3;
  modelica_metatype tmpMeta4;
  modelica_real tmp5;
  modelica_metatype tmpMeta6;
  modelica_real tmp7;
  IDEAS_Fluid_Movers_BaseClasses_Characteristics_flowParametersInternal tmp8;
  modelica_metatype tmpMeta9;
  modelica_integer tmp10;
  modelica_metatype tmpMeta11;
  modelica_metatype tmpMeta12;
  IDEAS_Fluid_Movers_BaseClasses_Euler_powerWithDerivative _power;
  modelica_metatype tmpMeta13;
  modelica_metatype tmpMeta14;
  modelica_metatype tmpMeta15;
  modelica_metatype out_power;
  tmpMeta2 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_peak), 2)));
  tmp3 = mmc_unbox_real(tmpMeta2);
  tmp1._V_flow = tmp3;
  tmpMeta4 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_peak), 3)));
  tmp5 = mmc_unbox_real(tmpMeta4);
  tmp1._dp = tmp5;
  tmpMeta6 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_peak), 4)));
  tmp7 = mmc_unbox_real(tmpMeta6);
  tmp1._eta = tmp7;tmpMeta9 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_pressure), 2)));
  tmp10 = mmc_unbox_integer(tmpMeta9);
  tmp8._n = tmp10;
  tmpMeta11 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_pressure), 3)));
  tmp8._V_flow = *((base_array_t*)tmpMeta11);
  tmpMeta12 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_pressure), 4)));
  tmp8._dp = *((base_array_t*)tmpMeta12);
  _power = omc_IDEAS_Fluid_Movers_BaseClasses_Euler_power(threadData, tmp1, tmp8);
  tmpMeta13 = mmc_mk_modelica_array(_power._V_flow);
  tmpMeta14 = mmc_mk_modelica_array(_power._P);
  tmpMeta15 = mmc_mk_modelica_array(_power._d);
  out_power = mmc_mk_box4(3, &IDEAS_Fluid_Movers_BaseClasses_Euler_powerWithDerivative__desc, tmpMeta13, tmpMeta14, tmpMeta15);
  return out_power;
}

IDEAS_Fluid_Movers_BaseClasses_Euler_powerWithDerivative omc_IDEAS_Fluid_Movers_BaseClasses_Euler_powerWithDerivative(threadData_t *threadData, real_array omc_V_flow, real_array omc_P, real_array omc_d)
{
  IDEAS_Fluid_Movers_BaseClasses_Euler_powerWithDerivative tmp1;
  tmp1._V_flow = omc_V_flow;
  tmp1._P = omc_P;
  tmp1._d = omc_d;
  return tmp1;
}

modelica_metatype boxptr_IDEAS_Fluid_Movers_BaseClasses_Euler_powerWithDerivative(threadData_t *threadData, modelica_metatype _V_flow, modelica_metatype _P, modelica_metatype _d)
{
  return mmc_mk_box4(3, &IDEAS_Fluid_Movers_BaseClasses_Euler_powerWithDerivative__desc, _V_flow, _P, _d);
}

DLLDirection
modelica_real omc_IDEAS_Utilities_Math_Functions_cubicHermiteLinearExtrapolation(threadData_t *threadData, modelica_real _x, modelica_real _x1, modelica_real _x2, modelica_real _y1, modelica_real _y2, modelica_real _y1d, modelica_real _y2d)
{
  modelica_real _y;
  _tailrecursive: OMC_LABEL_UNUSED
  // _y has no default value.
  if(((_x > _x1) && (_x < _x2)))
  {
    _y = omc_Modelica_Fluid_Utilities_cubicHermite(threadData, _x, _x1, _x2, _y1, _y2, _y1d, _y2d);
  }
  else
  {
    if((_x <= _x1))
    {
      _y = _y1 + (_x - _x1) * (_y1d);
    }
    else
    {
      _y = _y2 + (_x - _x2) * (_y2d);
    }
  }
  _return: OMC_LABEL_UNUSED
  return _y;
}
modelica_metatype boxptr_IDEAS_Utilities_Math_Functions_cubicHermiteLinearExtrapolation(threadData_t *threadData, modelica_metatype _x, modelica_metatype _x1, modelica_metatype _x2, modelica_metatype _y1, modelica_metatype _y2, modelica_metatype _y1d, modelica_metatype _y2d)
{
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_real tmp3;
  modelica_real tmp4;
  modelica_real tmp5;
  modelica_real tmp6;
  modelica_real tmp7;
  modelica_real _y;
  modelica_metatype out_y;
  tmp1 = mmc_unbox_real(_x);
  tmp2 = mmc_unbox_real(_x1);
  tmp3 = mmc_unbox_real(_x2);
  tmp4 = mmc_unbox_real(_y1);
  tmp5 = mmc_unbox_real(_y2);
  tmp6 = mmc_unbox_real(_y1d);
  tmp7 = mmc_unbox_real(_y2d);
  _y = omc_IDEAS_Utilities_Math_Functions_cubicHermiteLinearExtrapolation(threadData, tmp1, tmp2, tmp3, tmp4, tmp5, tmp6, tmp7);
  out_y = mmc_mk_rcon(_y);
  return out_y;
}

DLLDirection
modelica_boolean omc_IDEAS_Utilities_Math_Functions_isMonotonic(threadData_t *threadData, real_array _x, modelica_boolean _strict)
{
  modelica_boolean _monotonic;
  modelica_integer _n;
  modelica_integer tmp1;
  modelica_integer tmp2;
  modelica_integer tmp3;
  modelica_integer tmp4;
  modelica_integer tmp5;
  modelica_integer tmp6;
  modelica_integer tmp7;
  modelica_integer tmp8;
  modelica_integer tmp9;
  modelica_integer tmp10;
  modelica_integer tmp11;
  modelica_integer tmp12;
  modelica_integer tmp13;
  _tailrecursive: OMC_LABEL_UNUSED
  // _monotonic has no default value.
  tmp1 = size_of_dimension_base_array(_x, ((modelica_integer) 1));
  _n = tmp1;
  if((_n == ((modelica_integer) 1)))
  {
    _monotonic = 1 /* true */;
  }
  else
  {
    _monotonic = 1 /* true */;

    if(_strict)
    {
      if((real_array_get(_x, 1, ((modelica_integer) 1)) >= real_array_get(_x, 1, _n)))
      {
        tmp2 = ((modelica_integer) 1); tmp3 = 1; tmp4 = _n - ((modelica_integer) 1);
        if(!(((tmp3 > 0) && (tmp2 > tmp4)) || ((tmp3 < 0) && (tmp2 < tmp4))))
        {
          modelica_integer _i;
          for(_i = ((modelica_integer) 1); in_range_integer(_i, tmp2, tmp4); _i += tmp3)
          {
            if((!(real_array_get(_x, 1, _i) > real_array_get(_x, 1, _i + ((modelica_integer) 1)))))
            {
              _monotonic = 0 /* false */;
            }
          }
        }
      }
      else
      {
        tmp5 = ((modelica_integer) 1); tmp6 = 1; tmp7 = _n - ((modelica_integer) 1);
        if(!(((tmp6 > 0) && (tmp5 > tmp7)) || ((tmp6 < 0) && (tmp5 < tmp7))))
        {
          modelica_integer _i;
          for(_i = ((modelica_integer) 1); in_range_integer(_i, tmp5, tmp7); _i += tmp6)
          {
            if((!(real_array_get(_x, 1, _i) < real_array_get(_x, 1, _i + ((modelica_integer) 1)))))
            {
              _monotonic = 0 /* false */;
            }
          }
        }
      }
    }
    else
    {
      if((real_array_get(_x, 1, ((modelica_integer) 1)) >= real_array_get(_x, 1, _n)))
      {
        tmp8 = ((modelica_integer) 1); tmp9 = 1; tmp10 = _n - ((modelica_integer) 1);
        if(!(((tmp9 > 0) && (tmp8 > tmp10)) || ((tmp9 < 0) && (tmp8 < tmp10))))
        {
          modelica_integer _i;
          for(_i = ((modelica_integer) 1); in_range_integer(_i, tmp8, tmp10); _i += tmp9)
          {
            if((!(real_array_get(_x, 1, _i) >= real_array_get(_x, 1, _i + ((modelica_integer) 1)))))
            {
              _monotonic = 0 /* false */;
            }
          }
        }
      }
      else
      {
        tmp11 = ((modelica_integer) 1); tmp12 = 1; tmp13 = _n - ((modelica_integer) 1);
        if(!(((tmp12 > 0) && (tmp11 > tmp13)) || ((tmp12 < 0) && (tmp11 < tmp13))))
        {
          modelica_integer _i;
          for(_i = ((modelica_integer) 1); in_range_integer(_i, tmp11, tmp13); _i += tmp12)
          {
            if((!(real_array_get(_x, 1, _i) <= real_array_get(_x, 1, _i + ((modelica_integer) 1)))))
            {
              _monotonic = 0 /* false */;
            }
          }
        }
      }
    }
  }
  _return: OMC_LABEL_UNUSED
  return _monotonic;
}
modelica_metatype boxptr_IDEAS_Utilities_Math_Functions_isMonotonic(threadData_t *threadData, modelica_metatype _x, modelica_metatype _strict)
{
  modelica_integer tmp1;
  modelica_boolean _monotonic;
  modelica_metatype out_monotonic;
  tmp1 = mmc_unbox_integer(_strict);
  _monotonic = omc_IDEAS_Utilities_Math_Functions_isMonotonic(threadData, *((base_array_t*)_x), tmp1);
  out_monotonic = mmc_mk_icon(_monotonic);
  return out_monotonic;
}

DLLDirection
modelica_real omc_IDEAS_Utilities_Math_Functions_regStep(threadData_t *threadData, modelica_real _x, modelica_real _y1, modelica_real _y2, modelica_real _x_small)
{
  modelica_real _y;
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_real tmp3;
  modelica_real tmp4;
  modelica_real tmp5;
  modelica_real tmp6;
  modelica_boolean tmp7;
  modelica_real tmp8;
  modelica_boolean tmp9;
  modelica_real tmp10;
  modelica_boolean tmp11;
  modelica_real tmp12;
  _tailrecursive: OMC_LABEL_UNUSED
  // _y has no default value.
  tmp11 = (modelica_boolean)(_x > _x_small);
  if(tmp11)
  {
    tmp12 = _y1;
  }
  else
  {
    tmp9 = (modelica_boolean)(_x < (-_x_small));
    if(tmp9)
    {
      tmp10 = _y2;
    }
    else
    {
      tmp7 = (modelica_boolean)(_x_small > 0.0);
      if(tmp7)
      {
        tmp1 = _x_small;
        if (tmp1 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "x / x_small");}
        tmp2 = _x_small;
        if (tmp2 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "x / x_small");}
        tmp3 = (_x) / tmp2;
        tmp4 = 4.0;
        if (tmp4 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "x / x_small * ((x / x_small) ^ 2.0 - 3.0) * (y2 - y1) / 4.0");}
        tmp5 = 2.0;
        if (tmp5 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "(y1 + y2) / 2.0");}
        tmp8 = ((((_x) / tmp1) * ((tmp3 * tmp3) - 3.0)) * (_y2 - _y1)) / tmp4 + (_y1 + _y2) / tmp5;
      }
      else
      {
        tmp6 = 2.0;
        if (tmp6 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "(y1 + y2) / 2.0");}
        tmp8 = (_y1 + _y2) / tmp6;
      }
      tmp10 = tmp8;
    }
    tmp12 = tmp10;
  }
  _y = tmp12;
  _return: OMC_LABEL_UNUSED
  return _y;
}
modelica_metatype boxptr_IDEAS_Utilities_Math_Functions_regStep(threadData_t *threadData, modelica_metatype _x, modelica_metatype _y1, modelica_metatype _y2, modelica_metatype _x_small)
{
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_real tmp3;
  modelica_real tmp4;
  modelica_real _y;
  modelica_metatype out_y;
  tmp1 = mmc_unbox_real(_x);
  tmp2 = mmc_unbox_real(_y1);
  tmp3 = mmc_unbox_real(_y2);
  tmp4 = mmc_unbox_real(_x_small);
  _y = omc_IDEAS_Utilities_Math_Functions_regStep(threadData, tmp1, tmp2, tmp3, tmp4);
  out_y = mmc_mk_rcon(_y);
  return out_y;
}

DLLDirection
modelica_real omc_IDEAS_Utilities_Math_Functions_smoothInterpolation(threadData_t *threadData, modelica_real _x, real_array _xSup, real_array _ySup, modelica_boolean _ensureMonotonicity)
{
  modelica_real _yInt;
  modelica_integer _n;
  modelica_integer tmp1;
  real_array _dy_dx;
  modelica_integer tmp2;
  modelica_integer _i;
  modelica_integer tmp3;
  modelica_integer tmp4;
  modelica_integer tmp5;
  static int tmp6 = 0;
  modelica_real tmp7;
  _tailrecursive: OMC_LABEL_UNUSED
  // _yInt has no default value.
  tmp1 = size_of_dimension_base_array(_xSup, ((modelica_integer) 1));
  _n = tmp1;
  tmp2 = size_of_dimension_base_array(_xSup, ((modelica_integer) 1));
  alloc_real_array(&(_dy_dx), 1, (_index_t)tmp2); // _dy_dx has no default value.
  // _i has no default value.
  if((_n > ((modelica_integer) 2)))
  {
    real_array_copy_data(omc_IDEAS_Utilities_Math_Functions_splineDerivatives(threadData, _xSup, _ySup, _ensureMonotonicity), _dy_dx);

    _i = ((modelica_integer) 1);

    tmp3 = ((modelica_integer) 1); tmp4 = 1; tmp5 = _n - ((modelica_integer) 1);
    if(!(((tmp4 > 0) && (tmp3 > tmp5)) || ((tmp4 < 0) && (tmp3 < tmp5))))
    {
      modelica_integer _j;
      for(_j = ((modelica_integer) 1); in_range_integer(_j, tmp3, tmp5); _j += tmp4)
      {
        if((_x > real_array_get(_xSup, 1, _j)))
        {
          _i = _j;
        }
      }
    }

    {
      if(!(real_array_get(_xSup, 1, _i) < real_array_get(_xSup, 1, _i + ((modelica_integer) 1))))
      {
        {
          FILE_INFO info = {"/work/IDEAS-master/IDEAS/Utilities/Math/Functions/smoothInterpolation.mo",33,6,33,76,0};
          omc_assert(threadData, info, MMC_STRINGDATA(_OMC_LIT17));
        }
      }
    }

    _yInt = omc_IDEAS_Utilities_Math_Functions_cubicHermiteLinearExtrapolation(threadData, _x, real_array_get(_xSup, 1, _i), real_array_get(_xSup, 1, _i + ((modelica_integer) 1)), real_array_get(_ySup, 1, _i), real_array_get(_ySup, 1, _i + ((modelica_integer) 1)), real_array_get(_dy_dx, 1, _i), real_array_get(_dy_dx, 1, _i + ((modelica_integer) 1)));
  }
  else
  {
    if((_n == ((modelica_integer) 2)))
    {
      tmp7 = real_array_get(_xSup, 1, ((modelica_integer) 2)) - real_array_get(_xSup, 1, ((modelica_integer) 1));
      if (tmp7 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "(x - xSup[1]) * (ySup[2] - ySup[1]) / (xSup[2] - xSup[1])");}
      _yInt = real_array_get(_ySup, 1, ((modelica_integer) 1)) + ((_x - real_array_get(_xSup, 1, ((modelica_integer) 1))) * (real_array_get(_ySup, 1, ((modelica_integer) 2)) - real_array_get(_ySup, 1, ((modelica_integer) 1)))) / tmp7;
    }
    else
    {
      _yInt = real_array_get(_ySup, 1, ((modelica_integer) 1));
    }
  }
  _return: OMC_LABEL_UNUSED
  return _yInt;
}
modelica_metatype boxptr_IDEAS_Utilities_Math_Functions_smoothInterpolation(threadData_t *threadData, modelica_metatype _x, modelica_metatype _xSup, modelica_metatype _ySup, modelica_metatype _ensureMonotonicity)
{
  modelica_real tmp1;
  modelica_integer tmp2;
  modelica_real _yInt;
  modelica_metatype out_yInt;
  tmp1 = mmc_unbox_real(_x);
  tmp2 = mmc_unbox_integer(_ensureMonotonicity);
  _yInt = omc_IDEAS_Utilities_Math_Functions_smoothInterpolation(threadData, tmp1, *((base_array_t*)_xSup), *((base_array_t*)_ySup), tmp2);
  out_yInt = mmc_mk_rcon(_yInt);
  return out_yInt;
}

DLLDirection
modelica_real omc_IDEAS_Utilities_Math_Functions_smoothMax(threadData_t *threadData, modelica_real _x1, modelica_real _x2, modelica_real _deltaX)
{
  modelica_real _y;
  _tailrecursive: OMC_LABEL_UNUSED
  // _y has no default value.
  _y = omc_IDEAS_Utilities_Math_Functions_regStep(threadData, _x1 - _x2, _x1, _x2, _deltaX);
  _return: OMC_LABEL_UNUSED
  return _y;
}
modelica_metatype boxptr_IDEAS_Utilities_Math_Functions_smoothMax(threadData_t *threadData, modelica_metatype _x1, modelica_metatype _x2, modelica_metatype _deltaX)
{
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_real tmp3;
  modelica_real _y;
  modelica_metatype out_y;
  tmp1 = mmc_unbox_real(_x1);
  tmp2 = mmc_unbox_real(_x2);
  tmp3 = mmc_unbox_real(_deltaX);
  _y = omc_IDEAS_Utilities_Math_Functions_smoothMax(threadData, tmp1, tmp2, tmp3);
  out_y = mmc_mk_rcon(_y);
  return out_y;
}

DLLDirection
modelica_real omc_IDEAS_Utilities_Math_Functions_spliceFunction(threadData_t *threadData, modelica_real _pos, modelica_real _neg, modelica_real _x, modelica_real _deltax)
{
  modelica_real _out;
  modelica_real _lim;
  modelica_real _scaledX1;
  modelica_real _y;
  modelica_real _asin1;
  modelica_real tmp1;
  modelica_real tmp2;
  _tailrecursive: OMC_LABEL_UNUSED
  // _out has no default value.
  _lim = 0.9999999999;
  // _scaledX1 has no default value.
  // _y has no default value.
  _asin1 = 1.5707963267948966;
  tmp1 = _deltax;
  if (tmp1 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "x / deltax");}
  _scaledX1 = (_x) / tmp1;

  if((_scaledX1 <= (-_lim)))
  {
    _out = _neg;
  }
  else
  {
    if((_scaledX1 >= _lim))
    {
      _out = _pos;
    }
    else
    {
      tmp2 = 2.0;
      if (tmp2 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "(tanh(tan(scaledX1 * asin1)) + 1.0) / 2.0");}
      _y = (tanh(tan((_scaledX1) * (_asin1))) + 1.0) / tmp2;

      _out = (_pos) * (_y) + (1.0 - _y) * (_neg);
    }
  }
  _return: OMC_LABEL_UNUSED
  return _out;
}
modelica_metatype boxptr_IDEAS_Utilities_Math_Functions_spliceFunction(threadData_t *threadData, modelica_metatype _pos, modelica_metatype _neg, modelica_metatype _x, modelica_metatype _deltax)
{
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_real tmp3;
  modelica_real tmp4;
  modelica_real _out;
  modelica_metatype out_out;
  tmp1 = mmc_unbox_real(_pos);
  tmp2 = mmc_unbox_real(_neg);
  tmp3 = mmc_unbox_real(_x);
  tmp4 = mmc_unbox_real(_deltax);
  _out = omc_IDEAS_Utilities_Math_Functions_spliceFunction(threadData, tmp1, tmp2, tmp3, tmp4);
  out_out = mmc_mk_rcon(_out);
  return out_out;
}

DLLDirection
real_array omc_IDEAS_Utilities_Math_Functions_splineDerivatives(threadData_t *threadData, real_array _x, real_array _y, modelica_boolean _ensureMonotonicity)
{
  real_array _d;
  modelica_integer tmp1;
  modelica_integer _n;
  modelica_integer tmp2;
  modelica_real _alpha;
  modelica_real _beta;
  modelica_real _tau;
  real_array _delta;
  modelica_string tmp3;
  modelica_metatype tmpMeta4;
  modelica_metatype tmpMeta5;
  modelica_string tmp6;
  modelica_metatype tmpMeta7;
  modelica_metatype tmpMeta8;
  modelica_string tmp9;
  modelica_metatype tmpMeta10;
  static int tmp11 = 0;
  static int tmp12 = 0;
  static int tmp13 = 0;
  modelica_real tmp14;
  modelica_real tmp15;
  modelica_integer tmp16;
  modelica_integer tmp17;
  modelica_integer tmp18;
  modelica_real tmp19;
  modelica_integer tmp20;
  modelica_integer tmp21;
  modelica_integer tmp22;
  modelica_real tmp23;
  modelica_real tmp24;
  modelica_real tmp25;
  modelica_real tmp26;
  modelica_real tmp27;
  modelica_real tmp28;
  modelica_real tmp29;
  modelica_real tmp30;
  modelica_integer tmp31;
  modelica_integer tmp32;
  modelica_integer tmp33;
  _tailrecursive: OMC_LABEL_UNUSED
  tmp1 = size_of_dimension_base_array(_x, ((modelica_integer) 1));
  alloc_real_array(&(_d), 1, (_index_t)tmp1); // _d has no default value.
  tmp2 = size_of_dimension_base_array(_x, ((modelica_integer) 1));
  _n = tmp2;
  // _alpha has no default value.
  // _beta has no default value.
  // _tau has no default value.
  alloc_real_array(&(_delta), 1, (_index_t)_n - ((modelica_integer) 1)); // _delta has no default value.
  if((_n > ((modelica_integer) 1)))
  {
    {
      if(!(real_array_get(_x, 1, ((modelica_integer) 1)) < real_array_get(_x, 1, _n)))
      {
        tmp3 = modelica_real_to_modelica_string(real_array_get(_x, 1, ((modelica_integer) 1)), ((modelica_integer) 6), ((modelica_integer) 0), 1 /* true */);
        tmpMeta4 = stringAppend(_OMC_LIT18,tmp3);
        tmpMeta5 = stringAppend(tmpMeta4,_OMC_LIT19);
        tmp6 = modelica_integer_to_modelica_string(_n, ((modelica_integer) 0), 1 /* true */);
        tmpMeta7 = stringAppend(tmpMeta5,tmp6);
        tmpMeta8 = stringAppend(tmpMeta7,_OMC_LIT20);
        tmp9 = modelica_real_to_modelica_string(real_array_get(_x, 1, _n), ((modelica_integer) 6), ((modelica_integer) 0), 1 /* true */);
        tmpMeta10 = stringAppend(tmpMeta8,tmp9);
        {
          FILE_INFO info = {"/work/IDEAS-master/IDEAS/Utilities/Math/Functions/splineDerivatives.mo",19,5,21,52,0};
          omc_assert(threadData, info, MMC_STRINGDATA(tmpMeta10));
        }
      }
    }

    {
      if(!omc_IDEAS_Utilities_Math_Functions_isMonotonic(threadData, _x, 1 /* true */))
      {
        {
          FILE_INFO info = {"/work/IDEAS-master/IDEAS/Utilities/Math/Functions/splineDerivatives.mo",23,5,24,61,0};
          omc_assert(threadData, info, MMC_STRINGDATA(_OMC_LIT21));
        }
      }
    }

    if(_ensureMonotonicity)
    {
      {
        if(!omc_IDEAS_Utilities_Math_Functions_isMonotonic(threadData, _y, 0 /* false */))
        {
          {
            FILE_INFO info = {"/work/IDEAS-master/IDEAS/Utilities/Math/Functions/splineDerivatives.mo",26,7,27,91,0};
            omc_assert(threadData, info, MMC_STRINGDATA(_OMC_LIT22));
          }
        }
      }
    }
  }

  if((_n == ((modelica_integer) 1)))
  {
    real_array_get(_d, 1, ((modelica_integer) 1)) = 0.0;
  }
  else
  {
    if((_n == ((modelica_integer) 2)))
    {
      tmp14 = real_array_get(_x, 1, ((modelica_integer) 2)) - real_array_get(_x, 1, ((modelica_integer) 1));
      if (tmp14 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "(y[2] - y[1]) / (x[2] - x[1])");}
      real_array_get(_d, 1, ((modelica_integer) 1)) = (real_array_get(_y, 1, ((modelica_integer) 2)) - real_array_get(_y, 1, ((modelica_integer) 1))) / tmp14;

      real_array_get(_d, 1, ((modelica_integer) 2)) = real_array_get(_d, 1, ((modelica_integer) 1));
    }
    else
    {
      tmp16 = ((modelica_integer) 1); tmp17 = 1; tmp18 = _n - ((modelica_integer) 1);
      if(!(((tmp17 > 0) && (tmp16 > tmp18)) || ((tmp17 < 0) && (tmp16 < tmp18))))
      {
        modelica_integer _i;
        for(_i = ((modelica_integer) 1); in_range_integer(_i, tmp16, tmp18); _i += tmp17)
        {
          tmp15 = real_array_get(_x, 1, _i + ((modelica_integer) 1)) - real_array_get(_x, 1, _i);
          if (tmp15 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "(y[i + 1] - y[i]) / (x[i + 1] - x[i])");}
          real_array_get(_delta, 1, _i) = (real_array_get(_y, 1, _i + ((modelica_integer) 1)) - real_array_get(_y, 1, _i)) / tmp15;
        }
      }

      real_array_get(_d, 1, ((modelica_integer) 1)) = real_array_get(_delta, 1, ((modelica_integer) 1));

      real_array_get(_d, 1, _n) = real_array_get(_delta, 1, _n - ((modelica_integer) 1));

      tmp20 = ((modelica_integer) 2); tmp21 = 1; tmp22 = _n - ((modelica_integer) 1);
      if(!(((tmp21 > 0) && (tmp20 > tmp22)) || ((tmp21 < 0) && (tmp20 < tmp22))))
      {
        modelica_integer _i;
        for(_i = ((modelica_integer) 2); in_range_integer(_i, tmp20, tmp22); _i += tmp21)
        {
          tmp19 = 2.0;
          if (tmp19 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "(delta[i - 1] + delta[i]) / 2.0");}
          real_array_get(_d, 1, _i) = (real_array_get(_delta, 1, _i - ((modelica_integer) 1)) + real_array_get(_delta, 1, _i)) / tmp19;
        }
      }
    }
  }

  if(((_n > ((modelica_integer) 2)) && _ensureMonotonicity))
  {
    tmp31 = ((modelica_integer) 1); tmp32 = 1; tmp33 = _n - ((modelica_integer) 1);
    if(!(((tmp32 > 0) && (tmp31 > tmp33)) || ((tmp32 < 0) && (tmp31 < tmp33))))
    {
      modelica_integer _i;
      for(_i = ((modelica_integer) 1); in_range_integer(_i, tmp31, tmp33); _i += tmp32)
      {
        if((fabs(real_array_get(_delta, 1, _i)) < 1e-60))
        {
          real_array_get(_d, 1, _i) = 0.0;

          real_array_get(_d, 1, _i + ((modelica_integer) 1)) = 0.0;
        }
        else
        {
          tmp23 = real_array_get(_delta, 1, _i);
          if (tmp23 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "d[i] / delta[i]");}
          _alpha = (real_array_get(_d, 1, _i)) / tmp23;

          tmp24 = real_array_get(_delta, 1, _i);
          if (tmp24 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "d[i + 1] / delta[i]");}
          _beta = (real_array_get(_d, 1, _i + ((modelica_integer) 1))) / tmp24;

          tmp25 = _alpha;
          tmp26 = _beta;
          if(((tmp25 * tmp25) + (tmp26 * tmp26) > 9.0))
          {
            tmp27 = _alpha;
            tmp28 = _beta;
            tmp29 = (tmp27 * tmp27) + (tmp28 * tmp28);
            if(tmp29 < 0.0) {
              throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp29, 0.5);
            }tmp30 = sqrt(tmp29);
            if (tmp30 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "3.0 / (alpha ^ 2.0 + beta ^ 2.0) ^ 0.5");}
            _tau = (3.0) / tmp30;

            real_array_get(_d, 1, _i) = ((real_array_get(_delta, 1, _i)) * (_alpha)) * (_tau);

            real_array_get(_d, 1, _i + ((modelica_integer) 1)) = ((real_array_get(_delta, 1, _i)) * (_beta)) * (_tau);
          }
        }
      }
    }
  }
  _return: OMC_LABEL_UNUSED
  return _d;
}
modelica_metatype boxptr_IDEAS_Utilities_Math_Functions_splineDerivatives(threadData_t *threadData, modelica_metatype _x, modelica_metatype _y, modelica_metatype _ensureMonotonicity)
{
  modelica_integer tmp1;
  real_array _d;
  modelica_integer tmp2;
  modelica_metatype out_d;
  tmp1 = mmc_unbox_integer(_ensureMonotonicity);
  _d = omc_IDEAS_Utilities_Math_Functions_splineDerivatives(threadData, *((base_array_t*)_x), *((base_array_t*)_y), tmp1);
  out_d = mmc_mk_modelica_array(_d);
  return out_d;
}

DLLDirection
void omc_Modelica_Fluid_Utilities_checkBoundary(threadData_t *threadData, modelica_string _mediumName, string_array _substanceNames, modelica_boolean _singleState, modelica_boolean _define_p, real_array _X_boundary, modelica_string _modelName)
{
  modelica_integer _nX;
  modelica_integer tmp1;
  modelica_string _X_str = NULL;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype tmpMeta5;
  static int tmp6 = 0;
  modelica_metatype tmpMeta7;
  modelica_metatype tmpMeta8;
  modelica_metatype tmpMeta9;
  modelica_metatype tmpMeta10;
  modelica_string tmp11;
  modelica_metatype tmpMeta12;
  modelica_metatype tmpMeta13;
  modelica_string tmp14;
  modelica_metatype tmpMeta15;
  modelica_metatype tmpMeta16;
  static int tmp17 = 0;
  modelica_integer tmp18;
  modelica_integer tmp19;
  modelica_integer tmp20;
  modelica_metatype tmpMeta21;
  modelica_string tmp22;
  modelica_metatype tmpMeta23;
  modelica_metatype tmpMeta24;
  modelica_string tmp25;
  modelica_metatype tmpMeta26;
  modelica_metatype tmpMeta27;
  modelica_metatype tmpMeta28;
  modelica_metatype tmpMeta29;
  modelica_integer tmp30;
  modelica_integer tmp31;
  modelica_integer tmp32;
  modelica_metatype tmpMeta33;
  modelica_metatype tmpMeta34;
  modelica_metatype tmpMeta35;
  modelica_metatype tmpMeta36;
  modelica_metatype tmpMeta37;
  modelica_string tmp38;
  modelica_metatype tmpMeta39;
  modelica_metatype tmpMeta40;
  modelica_metatype tmpMeta41;
  _tailrecursive: OMC_LABEL_UNUSED
  tmp1 = size_of_dimension_base_array(_X_boundary, ((modelica_integer) 1));
  _nX = tmp1;
  // _X_str has no default value.
  {
    if(!((!_singleState) || (_singleState && _define_p)))
    {
      tmpMeta2 = stringAppend(_OMC_LIT24,_modelName);
      tmpMeta3 = stringAppend(tmpMeta2,_OMC_LIT25);
      tmpMeta4 = stringAppend(tmpMeta3,_mediumName);
      tmpMeta5 = stringAppend(tmpMeta4,_OMC_LIT26);
      {
        FILE_INFO info = {"/root/.openmodelica/libraries/Modelica 4.0.0+maint.om/Fluid/Utilities.mo",18,5,23,3,0};
        omc_assert(threadData, info, MMC_STRINGDATA(tmpMeta5));
      }
    }
  }

  tmp18 = ((modelica_integer) 1); tmp19 = 1; tmp20 = _nX;
  if(!(((tmp19 > 0) && (tmp18 > tmp20)) || ((tmp19 < 0) && (tmp18 < tmp20))))
  {
    modelica_integer _i;
    for(_i = ((modelica_integer) 1); in_range_integer(_i, tmp18, tmp20); _i += tmp19)
    {
      {
        if(!(real_array_get(_X_boundary, 1, _i) >= 0.0))
        {
          tmpMeta7 = stringAppend(_OMC_LIT27,_mediumName);
          tmpMeta8 = stringAppend(tmpMeta7,_OMC_LIT28);
          tmpMeta9 = stringAppend(tmpMeta8,_modelName);
          tmpMeta10 = stringAppend(tmpMeta9,_OMC_LIT29);
          tmp11 = modelica_integer_to_modelica_string(_i, ((modelica_integer) 0), 1 /* true */);
          tmpMeta12 = stringAppend(tmpMeta10,tmp11);
          tmpMeta13 = stringAppend(tmpMeta12,_OMC_LIT30);
          tmp14 = modelica_real_to_modelica_string(real_array_get(_X_boundary, 1, _i), ((modelica_integer) 6), ((modelica_integer) 0), 1 /* true */);
          tmpMeta15 = stringAppend(tmpMeta13,tmp14);
          tmpMeta16 = stringAppend(tmpMeta15,_OMC_LIT31);
          {
            FILE_INFO info = {"/root/.openmodelica/libraries/Modelica 4.0.0+maint.om/Fluid/Utilities.mo",26,7,33,3,0};
            omc_assert(threadData, info, MMC_STRINGDATA(tmpMeta16));
          }
        }
      }
    }
  }

  if(((_nX > ((modelica_integer) 0)) && (fabs(sum_real_array(_X_boundary) - 1.0) > 1e-10)))
  {
    _X_str = _OMC_LIT2;

    tmp30 = ((modelica_integer) 1); tmp31 = 1; tmp32 = _nX;
    if(!(((tmp31 > 0) && (tmp30 > tmp32)) || ((tmp31 < 0) && (tmp30 < tmp32))))
    {
      modelica_integer _i;
      for(_i = ((modelica_integer) 1); in_range_integer(_i, tmp30, tmp32); _i += tmp31)
      {
        tmpMeta21 = stringAppend(_X_str,_OMC_LIT32);
        tmp22 = modelica_integer_to_modelica_string(_i, ((modelica_integer) 0), 1 /* true */);
        tmpMeta23 = stringAppend(tmpMeta21,tmp22);
        tmpMeta24 = stringAppend(tmpMeta23,_OMC_LIT20);
        tmp25 = modelica_real_to_modelica_string(real_array_get(_X_boundary, 1, _i), ((modelica_integer) 6), ((modelica_integer) 0), 1 /* true */);
        tmpMeta26 = stringAppend(tmpMeta24,tmp25);
        tmpMeta27 = stringAppend(tmpMeta26,_OMC_LIT33);
        tmpMeta28 = stringAppend(tmpMeta27,string_array_get(_substanceNames, 1, _i));
        tmpMeta29 = stringAppend(tmpMeta28,_OMC_LIT34);
        _X_str = tmpMeta29;
      }
    }

    tmpMeta33 = stringAppend(_OMC_LIT35,_mediumName);
    tmpMeta34 = stringAppend(tmpMeta33,_OMC_LIT28);
    tmpMeta35 = stringAppend(tmpMeta34,_modelName);
    tmpMeta36 = stringAppend(tmpMeta35,_OMC_LIT34);
    tmpMeta37 = stringAppend(tmpMeta36,_OMC_LIT36);
    tmp38 = modelica_real_to_modelica_string(sum_real_array(_X_boundary), ((modelica_integer) 6), ((modelica_integer) 0), 1 /* true */);
    tmpMeta39 = stringAppend(tmpMeta37,tmp38);
    tmpMeta40 = stringAppend(tmpMeta39,_OMC_LIT37);
    tmpMeta41 = stringAppend(tmpMeta40,_X_str);
    omc_Modelica_Utilities_Streams_error(threadData, tmpMeta41);
  }
  _return: OMC_LABEL_UNUSED
  return;
}
void boxptr_Modelica_Fluid_Utilities_checkBoundary(threadData_t *threadData, modelica_metatype _mediumName, modelica_metatype _substanceNames, modelica_metatype _singleState, modelica_metatype _define_p, modelica_metatype _X_boundary, modelica_metatype _modelName)
{
  modelica_integer tmp1;
  modelica_integer tmp2;
  tmp1 = mmc_unbox_integer(_singleState);
  tmp2 = mmc_unbox_integer(_define_p);
  omc_Modelica_Fluid_Utilities_checkBoundary(threadData, _mediumName, *((base_array_t*)_substanceNames), tmp1, tmp2, *((base_array_t*)_X_boundary), _modelName);
  return;
}

DLLDirection
modelica_real omc_Modelica_Fluid_Utilities_cubicHermite(threadData_t *threadData, modelica_real _x, modelica_real _x1, modelica_real _x2, modelica_real _y1, modelica_real _y2, modelica_real _y1d, modelica_real _y2d)
{
  modelica_real _y;
  modelica_real _h;
  modelica_real _t;
  modelica_real _h00;
  modelica_real _h10;
  modelica_real _h01;
  modelica_real _h11;
  modelica_real _aux3;
  modelica_real _aux2;
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_real tmp3;
  modelica_real tmp4;
  _tailrecursive: OMC_LABEL_UNUSED
  // _y has no default value.
  // _h has no default value.
  // _t has no default value.
  // _h00 has no default value.
  // _h10 has no default value.
  // _h01 has no default value.
  // _h11 has no default value.
  // _aux3 has no default value.
  // _aux2 has no default value.
  _h = _x2 - _x1;

  if((fabs(_h) > 0.0))
  {
    tmp1 = _h;
    if (tmp1 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "(x - x1) / h");}
    _t = (_x - _x1) / tmp1;

    tmp2 = _t;
    _aux3 = (tmp2 * tmp2 * tmp2);

    tmp3 = _t;
    _aux2 = (tmp3 * tmp3);

    _h00 = (2.0) * (_aux3) - ((3.0) * (_aux2)) + 1.0;

    _h10 = _aux3 - ((2.0) * (_aux2)) + _t;

    _h01 = (3.0) * (_aux2) - ((2.0) * (_aux3));

    _h11 = _aux3 - _aux2;

    _y = (_y1) * (_h00) + ((_h) * (_y1d)) * (_h10) + (_y2) * (_h01) + ((_h) * (_y2d)) * (_h11);
  }
  else
  {
    tmp4 = 2.0;
    if (tmp4 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "(y1 + y2) / 2.0");}
    _y = (_y1 + _y2) / tmp4;
  }
  _return: OMC_LABEL_UNUSED
  return _y;
}
modelica_metatype boxptr_Modelica_Fluid_Utilities_cubicHermite(threadData_t *threadData, modelica_metatype _x, modelica_metatype _x1, modelica_metatype _x2, modelica_metatype _y1, modelica_metatype _y2, modelica_metatype _y1d, modelica_metatype _y2d)
{
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_real tmp3;
  modelica_real tmp4;
  modelica_real tmp5;
  modelica_real tmp6;
  modelica_real tmp7;
  modelica_real _y;
  modelica_metatype out_y;
  tmp1 = mmc_unbox_real(_x);
  tmp2 = mmc_unbox_real(_x1);
  tmp3 = mmc_unbox_real(_x2);
  tmp4 = mmc_unbox_real(_y1);
  tmp5 = mmc_unbox_real(_y2);
  tmp6 = mmc_unbox_real(_y1d);
  tmp7 = mmc_unbox_real(_y2d);
  _y = omc_Modelica_Fluid_Utilities_cubicHermite(threadData, tmp1, tmp2, tmp3, tmp4, tmp5, tmp6, tmp7);
  out_y = mmc_mk_rcon(_y);
  return out_y;
}

DLLDirection
modelica_real omc_Modelica_Fluid_Utilities_regStep(threadData_t *threadData, modelica_real _x, modelica_real _y1, modelica_real _y2, modelica_real _x_small)
{
  modelica_real _y;
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_real tmp3;
  modelica_real tmp4;
  modelica_real tmp5;
  modelica_real tmp6;
  modelica_boolean tmp7;
  modelica_real tmp8;
  modelica_boolean tmp9;
  modelica_real tmp10;
  modelica_boolean tmp11;
  modelica_real tmp12;
  _tailrecursive: OMC_LABEL_UNUSED
  // _y has no default value.
  tmp11 = (modelica_boolean)(_x > _x_small);
  if(tmp11)
  {
    tmp12 = _y1;
  }
  else
  {
    tmp9 = (modelica_boolean)(_x < (-_x_small));
    if(tmp9)
    {
      tmp10 = _y2;
    }
    else
    {
      tmp7 = (modelica_boolean)(_x_small > 0.0);
      if(tmp7)
      {
        tmp1 = _x_small;
        if (tmp1 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "x / x_small");}
        tmp2 = _x_small;
        if (tmp2 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "x / x_small");}
        tmp3 = (_x) / tmp2;
        tmp4 = 4.0;
        if (tmp4 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "x / x_small * ((x / x_small) ^ 2.0 - 3.0) * (y2 - y1) / 4.0");}
        tmp5 = 2.0;
        if (tmp5 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "(y1 + y2) / 2.0");}
        tmp8 = ((((_x) / tmp1) * ((tmp3 * tmp3) - 3.0)) * (_y2 - _y1)) / tmp4 + (_y1 + _y2) / tmp5;
      }
      else
      {
        tmp6 = 2.0;
        if (tmp6 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "(y1 + y2) / 2.0");}
        tmp8 = (_y1 + _y2) / tmp6;
      }
      tmp10 = tmp8;
    }
    tmp12 = tmp10;
  }
  _y = tmp12;
  _return: OMC_LABEL_UNUSED
  return _y;
}
modelica_metatype boxptr_Modelica_Fluid_Utilities_regStep(threadData_t *threadData, modelica_metatype _x, modelica_metatype _y1, modelica_metatype _y2, modelica_metatype _x_small)
{
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_real tmp3;
  modelica_real tmp4;
  modelica_real _y;
  modelica_metatype out_y;
  tmp1 = mmc_unbox_real(_x);
  tmp2 = mmc_unbox_real(_y1);
  tmp3 = mmc_unbox_real(_y2);
  tmp4 = mmc_unbox_real(_x_small);
  _y = omc_Modelica_Fluid_Utilities_regStep(threadData, tmp1, tmp2, tmp3, tmp4);
  out_y = mmc_mk_rcon(_y);
  return out_y;
}

void omc_Modelica_Utilities_Streams_error(threadData_t *threadData, modelica_string _string)
{
  FILE_INFO info = {"/root/.openmodelica/libraries/Modelica 4.0.0+maint.om/Utilities/Streams.mo",120,3,148,12,0};
  omc_assert(threadData, info, MMC_STRINGDATA(_string));
  return;
}

DLLDirection
modelica_real omc_pump__v3__basicCold__t_mat__cp(threadData_t *threadData, modelica_integer _mat)
{
  modelica_real _cp;
  _tailrecursive: OMC_LABEL_UNUSED
  // _cp has no default value.
  _cp = ((_mat == ((modelica_integer) 1))?385.0:((_mat == ((modelica_integer) 2))?1000.0:((_mat == ((modelica_integer) 3))?1900.0:((_mat == ((modelica_integer) 4))?1500.0:1000.0))));
  _return: OMC_LABEL_UNUSED
  return _cp;
}
modelica_metatype boxptr_pump__v3__basicCold__t_mat__cp(threadData_t *threadData, modelica_metatype _mat)
{
  modelica_integer tmp1;
  modelica_real _cp;
  modelica_metatype out_cp;
  tmp1 = mmc_unbox_integer(_mat);
  _cp = omc_pump__v3__basicCold__t_mat__cp(threadData, tmp1);
  out_cp = mmc_mk_rcon(_cp);
  return out_cp;
}

DLLDirection
modelica_real omc_pump__v3__basicCold__t_mat__k(threadData_t *threadData, modelica_integer _mat)
{
  modelica_real _k;
  _tailrecursive: OMC_LABEL_UNUSED
  // _k has no default value.
  _k = ((_mat == ((modelica_integer) 1))?390.0:((_mat == ((modelica_integer) 2))?0.19:((_mat == ((modelica_integer) 3))?0.465:((_mat == ((modelica_integer) 4))?0.24:0.19))));
  _return: OMC_LABEL_UNUSED
  return _k;
}
modelica_metatype boxptr_pump__v3__basicCold__t_mat__k(threadData_t *threadData, modelica_metatype _mat)
{
  modelica_integer tmp1;
  modelica_real _k;
  modelica_metatype out_k;
  tmp1 = mmc_unbox_integer(_mat);
  _k = omc_pump__v3__basicCold__t_mat__k(threadData, tmp1);
  out_k = mmc_mk_rcon(_k);
  return out_k;
}

DLLDirection
modelica_real omc_pump__v3__basicCold__t_mat__rho(threadData_t *threadData, modelica_integer _mat)
{
  modelica_real _rho;
  _tailrecursive: OMC_LABEL_UNUSED
  // _rho has no default value.
  _rho = ((_mat == ((modelica_integer) 1))?8960.0:((_mat == ((modelica_integer) 2))?1380.0:((_mat == ((modelica_integer) 3))?950.0:((_mat == ((modelica_integer) 4))?1200.0:1380.0))));
  _return: OMC_LABEL_UNUSED
  return _rho;
}
modelica_metatype boxptr_pump__v3__basicCold__t_mat__rho(threadData_t *threadData, modelica_metatype _mat)
{
  modelica_integer tmp1;
  modelica_real _rho;
  modelica_metatype out_rho;
  tmp1 = mmc_unbox_integer(_mat);
  _rho = omc_pump__v3__basicCold__t_mat__rho(threadData, tmp1);
  out_rho = mmc_mk_rcon(_rho);
  return out_rho;
}

pump__v3__basicCold__t_SenTempIn__cold_Medium_ThermodynamicState omc_pump__v3__basicCold__t_SenTempIn__cold_Medium_ThermodynamicState(threadData_t *threadData, modelica_real omc_p, modelica_real omc_T)
{
  pump__v3__basicCold__t_SenTempIn__cold_Medium_ThermodynamicState tmp1;
  tmp1._p = omc_p;
  tmp1._T = omc_T;
  return tmp1;
}

modelica_metatype boxptr_pump__v3__basicCold__t_SenTempIn__cold_Medium_ThermodynamicState(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T)
{
  return mmc_mk_box3(3, &pump__v3__basicCold__t_SenTempIn__cold_Medium_ThermodynamicState__desc, _p, _T);
}

DLLDirection
pump__v3__basicCold__t_SenTempIn__cold_Medium_ThermodynamicState omc_pump__v3__basicCold__t_SenTempIn__cold_Medium_setState__phX(threadData_t *threadData, modelica_real _p, modelica_real _h, real_array _X)
{
  pump__v3__basicCold__t_SenTempIn__cold_Medium_ThermodynamicState _state;
  pump__v3__basicCold__t_SenTempIn__cold_Medium_ThermodynamicState tmp1;
  pump__v3__basicCold__t_SenTempIn__cold_Medium_ThermodynamicState tmp2;
  modelica_real tmp3;
  _tailrecursive: OMC_LABEL_UNUSED
  pump__v3__basicCold__t_SenTempIn__cold_Medium_ThermodynamicState_construct(threadData, _state); // _state has no default value.
  tmp3 = 4184.0;
  if (tmp3 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "h / 4184.0");}
  tmp2._p = _p;
  tmp2._T = 273.15 + (_h) / tmp3;
  tmp1 = tmp2;
  pump__v3__basicCold__t_SenTempIn__cold_Medium_ThermodynamicState_copy(tmp1, _state);;
  _return: OMC_LABEL_UNUSED
  return _state;
}
modelica_metatype boxptr_pump__v3__basicCold__t_SenTempIn__cold_Medium_setState__phX(threadData_t *threadData, modelica_metatype _p, modelica_metatype _h, modelica_metatype _X)
{
  modelica_real tmp1;
  modelica_real tmp2;
  pump__v3__basicCold__t_SenTempIn__cold_Medium_ThermodynamicState _state;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype out_state;
  tmp1 = mmc_unbox_real(_p);
  tmp2 = mmc_unbox_real(_h);
  _state = omc_pump__v3__basicCold__t_SenTempIn__cold_Medium_setState__phX(threadData, tmp1, tmp2, *((base_array_t*)_X));
  tmpMeta3 = mmc_mk_rcon(_state._p);
  tmpMeta4 = mmc_mk_rcon(_state._T);
  out_state = mmc_mk_box3(3, &pump__v3__basicCold__t_SenTempIn__cold_Medium_ThermodynamicState__desc, tmpMeta3, tmpMeta4);
  return out_state;
}

DLLDirection
modelica_real omc_pump__v3__basicCold__t_SenTempIn__cold_Medium_temperature(threadData_t *threadData, pump__v3__basicCold__t_SenTempIn__cold_Medium_ThermodynamicState _state)
{
  modelica_real _T;
  _tailrecursive: OMC_LABEL_UNUSED
  // _T has no default value.
  _T = _state._T;
  _return: OMC_LABEL_UNUSED
  return _T;
}
modelica_metatype boxptr_pump__v3__basicCold__t_SenTempIn__cold_Medium_temperature(threadData_t *threadData, modelica_metatype _state)
{
  pump__v3__basicCold__t_SenTempIn__cold_Medium_ThermodynamicState tmp1;
  modelica_metatype tmpMeta2;
  modelica_real tmp3;
  modelica_metatype tmpMeta4;
  modelica_real tmp5;
  modelica_real _T;
  modelica_metatype out_T;
  tmpMeta2 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_state), 2)));
  tmp3 = mmc_unbox_real(tmpMeta2);
  tmp1._p = tmp3;
  tmpMeta4 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_state), 3)));
  tmp5 = mmc_unbox_real(tmpMeta4);
  tmp1._T = tmp5;
  _T = omc_pump__v3__basicCold__t_SenTempIn__cold_Medium_temperature(threadData, tmp1);
  out_T = mmc_mk_rcon(_T);
  return out_T;
}

pump__v3__basicCold__t_bou1_Medium_ThermodynamicState omc_pump__v3__basicCold__t_bou1_Medium_ThermodynamicState(threadData_t *threadData, modelica_real omc_p, modelica_real omc_T)
{
  pump__v3__basicCold__t_bou1_Medium_ThermodynamicState tmp1;
  tmp1._p = omc_p;
  tmp1._T = omc_T;
  return tmp1;
}

modelica_metatype boxptr_pump__v3__basicCold__t_bou1_Medium_ThermodynamicState(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T)
{
  return mmc_mk_box3(3, &pump__v3__basicCold__t_bou1_Medium_ThermodynamicState__desc, _p, _T);
}

DLLDirection
pump__v3__basicCold__t_bou1_Medium_ThermodynamicState omc_pump__v3__basicCold__t_bou1_Medium_setState__pTX(threadData_t *threadData, modelica_real _p, modelica_real _T, real_array _X)
{
  pump__v3__basicCold__t_bou1_Medium_ThermodynamicState _state;
  pump__v3__basicCold__t_bou1_Medium_ThermodynamicState tmp1;
  pump__v3__basicCold__t_bou1_Medium_ThermodynamicState tmp2;
  _tailrecursive: OMC_LABEL_UNUSED
  pump__v3__basicCold__t_bou1_Medium_ThermodynamicState_construct(threadData, _state); // _state has no default value.
  tmp2._p = _p;
  tmp2._T = _T;
  tmp1 = tmp2;
  pump__v3__basicCold__t_bou1_Medium_ThermodynamicState_copy(tmp1, _state);;
  _return: OMC_LABEL_UNUSED
  return _state;
}
modelica_metatype boxptr_pump__v3__basicCold__t_bou1_Medium_setState__pTX(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T, modelica_metatype _X)
{
  modelica_real tmp1;
  modelica_real tmp2;
  pump__v3__basicCold__t_bou1_Medium_ThermodynamicState _state;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype out_state;
  tmp1 = mmc_unbox_real(_p);
  tmp2 = mmc_unbox_real(_T);
  _state = omc_pump__v3__basicCold__t_bou1_Medium_setState__pTX(threadData, tmp1, tmp2, *((base_array_t*)_X));
  tmpMeta3 = mmc_mk_rcon(_state._p);
  tmpMeta4 = mmc_mk_rcon(_state._T);
  out_state = mmc_mk_box3(3, &pump__v3__basicCold__t_bou1_Medium_ThermodynamicState__desc, tmpMeta3, tmpMeta4);
  return out_state;
}

DLLDirection
modelica_real omc_pump__v3__basicCold__t_bou1_Medium_specificEnthalpy(threadData_t *threadData, pump__v3__basicCold__t_bou1_Medium_ThermodynamicState _state)
{
  modelica_real _h;
  _tailrecursive: OMC_LABEL_UNUSED
  // _h has no default value.
  _h = (4184.0) * (_state._T - 273.15);
  _return: OMC_LABEL_UNUSED
  return _h;
}
modelica_metatype boxptr_pump__v3__basicCold__t_bou1_Medium_specificEnthalpy(threadData_t *threadData, modelica_metatype _state)
{
  pump__v3__basicCold__t_bou1_Medium_ThermodynamicState tmp1;
  modelica_metatype tmpMeta2;
  modelica_real tmp3;
  modelica_metatype tmpMeta4;
  modelica_real tmp5;
  modelica_real _h;
  modelica_metatype out_h;
  tmpMeta2 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_state), 2)));
  tmp3 = mmc_unbox_real(tmpMeta2);
  tmp1._p = tmp3;
  tmpMeta4 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_state), 3)));
  tmp5 = mmc_unbox_real(tmpMeta4);
  tmp1._T = tmp5;
  _h = omc_pump__v3__basicCold__t_bou1_Medium_specificEnthalpy(threadData, tmp1);
  out_h = mmc_mk_rcon(_h);
  return out_h;
}

pump__v3__basicCold__t_plugFlowPipe_Medium_ThermodynamicState omc_pump__v3__basicCold__t_plugFlowPipe_Medium_ThermodynamicState(threadData_t *threadData, modelica_real omc_p, modelica_real omc_T)
{
  pump__v3__basicCold__t_plugFlowPipe_Medium_ThermodynamicState tmp1;
  tmp1._p = omc_p;
  tmp1._T = omc_T;
  return tmp1;
}

modelica_metatype boxptr_pump__v3__basicCold__t_plugFlowPipe_Medium_ThermodynamicState(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T)
{
  return mmc_mk_box3(3, &pump__v3__basicCold__t_plugFlowPipe_Medium_ThermodynamicState__desc, _p, _T);
}

DLLDirection
modelica_real omc_pump__v3__basicCold__t_plugFlowPipe_Medium_specificHeatCapacityCp(threadData_t *threadData, pump__v3__basicCold__t_plugFlowPipe_Medium_ThermodynamicState _state)
{
  modelica_real _cp;
  _tailrecursive: OMC_LABEL_UNUSED
  // _cp has no default value.
  _cp = 4184.0;
  _return: OMC_LABEL_UNUSED
  return _cp;
}
modelica_metatype boxptr_pump__v3__basicCold__t_plugFlowPipe_Medium_specificHeatCapacityCp(threadData_t *threadData, modelica_metatype _state)
{
  pump__v3__basicCold__t_plugFlowPipe_Medium_ThermodynamicState tmp1;
  modelica_metatype tmpMeta2;
  modelica_real tmp3;
  modelica_metatype tmpMeta4;
  modelica_real tmp5;
  modelica_real _cp;
  modelica_metatype out_cp;
  tmpMeta2 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_state), 2)));
  tmp3 = mmc_unbox_real(tmpMeta2);
  tmp1._p = tmp3;
  tmpMeta4 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_state), 3)));
  tmp5 = mmc_unbox_real(tmpMeta4);
  tmp1._T = tmp5;
  _cp = omc_pump__v3__basicCold__t_plugFlowPipe_Medium_specificHeatCapacityCp(threadData, tmp1);
  out_cp = mmc_mk_rcon(_cp);
  return out_cp;
}

pump__v3__basicCold__t_plugFlowPipe_del_Medium_ThermodynamicState omc_pump__v3__basicCold__t_plugFlowPipe_del_Medium_ThermodynamicState(threadData_t *threadData, modelica_real omc_p, modelica_real omc_T)
{
  pump__v3__basicCold__t_plugFlowPipe_del_Medium_ThermodynamicState tmp1;
  tmp1._p = omc_p;
  tmp1._T = omc_T;
  return tmp1;
}

modelica_metatype boxptr_pump__v3__basicCold__t_plugFlowPipe_del_Medium_ThermodynamicState(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T)
{
  return mmc_mk_box3(3, &pump__v3__basicCold__t_plugFlowPipe_del_Medium_ThermodynamicState__desc, _p, _T);
}

DLLDirection
modelica_real omc_pump__v3__basicCold__t_plugFlowPipe_del_Medium_density(threadData_t *threadData, pump__v3__basicCold__t_plugFlowPipe_del_Medium_ThermodynamicState _state)
{
  modelica_real _d;
  _tailrecursive: OMC_LABEL_UNUSED
  // _d has no default value.
  _d = 995.586;
  _return: OMC_LABEL_UNUSED
  return _d;
}
modelica_metatype boxptr_pump__v3__basicCold__t_plugFlowPipe_del_Medium_density(threadData_t *threadData, modelica_metatype _state)
{
  pump__v3__basicCold__t_plugFlowPipe_del_Medium_ThermodynamicState tmp1;
  modelica_metatype tmpMeta2;
  modelica_real tmp3;
  modelica_metatype tmpMeta4;
  modelica_real tmp5;
  modelica_real _d;
  modelica_metatype out_d;
  tmpMeta2 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_state), 2)));
  tmp3 = mmc_unbox_real(tmpMeta2);
  tmp1._p = tmp3;
  tmpMeta4 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_state), 3)));
  tmp5 = mmc_unbox_real(tmpMeta4);
  tmp1._T = tmp5;
  _d = omc_pump__v3__basicCold__t_plugFlowPipe_del_Medium_density(threadData, tmp1);
  out_d = mmc_mk_rcon(_d);
  return out_d;
}

DLLDirection
pump__v3__basicCold__t_plugFlowPipe_del_Medium_ThermodynamicState omc_pump__v3__basicCold__t_plugFlowPipe_del_Medium_setState__pTX(threadData_t *threadData, modelica_real _p, modelica_real _T, real_array _X)
{
  pump__v3__basicCold__t_plugFlowPipe_del_Medium_ThermodynamicState _state;
  pump__v3__basicCold__t_plugFlowPipe_del_Medium_ThermodynamicState tmp1;
  pump__v3__basicCold__t_plugFlowPipe_del_Medium_ThermodynamicState tmp2;
  _tailrecursive: OMC_LABEL_UNUSED
  pump__v3__basicCold__t_plugFlowPipe_del_Medium_ThermodynamicState_construct(threadData, _state); // _state has no default value.
  tmp2._p = _p;
  tmp2._T = _T;
  tmp1 = tmp2;
  pump__v3__basicCold__t_plugFlowPipe_del_Medium_ThermodynamicState_copy(tmp1, _state);;
  _return: OMC_LABEL_UNUSED
  return _state;
}
modelica_metatype boxptr_pump__v3__basicCold__t_plugFlowPipe_del_Medium_setState__pTX(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T, modelica_metatype _X)
{
  modelica_real tmp1;
  modelica_real tmp2;
  pump__v3__basicCold__t_plugFlowPipe_del_Medium_ThermodynamicState _state;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype out_state;
  tmp1 = mmc_unbox_real(_p);
  tmp2 = mmc_unbox_real(_T);
  _state = omc_pump__v3__basicCold__t_plugFlowPipe_del_Medium_setState__pTX(threadData, tmp1, tmp2, *((base_array_t*)_X));
  tmpMeta3 = mmc_mk_rcon(_state._p);
  tmpMeta4 = mmc_mk_rcon(_state._T);
  out_state = mmc_mk_box3(3, &pump__v3__basicCold__t_plugFlowPipe_del_Medium_ThermodynamicState__desc, tmpMeta3, tmpMeta4);
  return out_state;
}

DLLDirection
pump__v3__basicCold__t_plugFlowPipe_del_Medium_ThermodynamicState omc_pump__v3__basicCold__t_plugFlowPipe_del_Medium_setState__phX(threadData_t *threadData, modelica_real _p, modelica_real _h, real_array _X)
{
  pump__v3__basicCold__t_plugFlowPipe_del_Medium_ThermodynamicState _state;
  pump__v3__basicCold__t_plugFlowPipe_del_Medium_ThermodynamicState tmp1;
  pump__v3__basicCold__t_plugFlowPipe_del_Medium_ThermodynamicState tmp2;
  modelica_real tmp3;
  _tailrecursive: OMC_LABEL_UNUSED
  pump__v3__basicCold__t_plugFlowPipe_del_Medium_ThermodynamicState_construct(threadData, _state); // _state has no default value.
  tmp3 = 4184.0;
  if (tmp3 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "h / 4184.0");}
  tmp2._p = _p;
  tmp2._T = 273.15 + (_h) / tmp3;
  tmp1 = tmp2;
  pump__v3__basicCold__t_plugFlowPipe_del_Medium_ThermodynamicState_copy(tmp1, _state);;
  _return: OMC_LABEL_UNUSED
  return _state;
}
modelica_metatype boxptr_pump__v3__basicCold__t_plugFlowPipe_del_Medium_setState__phX(threadData_t *threadData, modelica_metatype _p, modelica_metatype _h, modelica_metatype _X)
{
  modelica_real tmp1;
  modelica_real tmp2;
  pump__v3__basicCold__t_plugFlowPipe_del_Medium_ThermodynamicState _state;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype out_state;
  tmp1 = mmc_unbox_real(_p);
  tmp2 = mmc_unbox_real(_h);
  _state = omc_pump__v3__basicCold__t_plugFlowPipe_del_Medium_setState__phX(threadData, tmp1, tmp2, *((base_array_t*)_X));
  tmpMeta3 = mmc_mk_rcon(_state._p);
  tmpMeta4 = mmc_mk_rcon(_state._T);
  out_state = mmc_mk_box3(3, &pump__v3__basicCold__t_plugFlowPipe_del_Medium_ThermodynamicState__desc, tmpMeta3, tmpMeta4);
  return out_state;
}

DLLDirection
modelica_real omc_pump__v3__basicCold__t_plugFlowPipe_del_Medium_specificEnthalpy(threadData_t *threadData, pump__v3__basicCold__t_plugFlowPipe_del_Medium_ThermodynamicState _state)
{
  modelica_real _h;
  _tailrecursive: OMC_LABEL_UNUSED
  // _h has no default value.
  _h = (4184.0) * (_state._T - 273.15);
  _return: OMC_LABEL_UNUSED
  return _h;
}
modelica_metatype boxptr_pump__v3__basicCold__t_plugFlowPipe_del_Medium_specificEnthalpy(threadData_t *threadData, modelica_metatype _state)
{
  pump__v3__basicCold__t_plugFlowPipe_del_Medium_ThermodynamicState tmp1;
  modelica_metatype tmpMeta2;
  modelica_real tmp3;
  modelica_metatype tmpMeta4;
  modelica_real tmp5;
  modelica_real _h;
  modelica_metatype out_h;
  tmpMeta2 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_state), 2)));
  tmp3 = mmc_unbox_real(tmpMeta2);
  tmp1._p = tmp3;
  tmpMeta4 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_state), 3)));
  tmp5 = mmc_unbox_real(tmpMeta4);
  tmp1._T = tmp5;
  _h = omc_pump__v3__basicCold__t_plugFlowPipe_del_Medium_specificEnthalpy(threadData, tmp1);
  out_h = mmc_mk_rcon(_h);
  return out_h;
}

pump__v3__basicCold__t_plugFlowPipe_heaLos__a_Medium_ThermodynamicState omc_pump__v3__basicCold__t_plugFlowPipe_heaLos__a_Medium_ThermodynamicState(threadData_t *threadData, modelica_real omc_p, modelica_real omc_T)
{
  pump__v3__basicCold__t_plugFlowPipe_heaLos__a_Medium_ThermodynamicState tmp1;
  tmp1._p = omc_p;
  tmp1._T = omc_T;
  return tmp1;
}

modelica_metatype boxptr_pump__v3__basicCold__t_plugFlowPipe_heaLos__a_Medium_ThermodynamicState(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T)
{
  return mmc_mk_box3(3, &pump__v3__basicCold__t_plugFlowPipe_heaLos__a_Medium_ThermodynamicState__desc, _p, _T);
}

DLLDirection
pump__v3__basicCold__t_plugFlowPipe_heaLos__a_Medium_ThermodynamicState omc_pump__v3__basicCold__t_plugFlowPipe_heaLos__a_Medium_setState__pTX(threadData_t *threadData, modelica_real _p, modelica_real _T, real_array _X)
{
  pump__v3__basicCold__t_plugFlowPipe_heaLos__a_Medium_ThermodynamicState _state;
  pump__v3__basicCold__t_plugFlowPipe_heaLos__a_Medium_ThermodynamicState tmp1;
  pump__v3__basicCold__t_plugFlowPipe_heaLos__a_Medium_ThermodynamicState tmp2;
  _tailrecursive: OMC_LABEL_UNUSED
  pump__v3__basicCold__t_plugFlowPipe_heaLos__a_Medium_ThermodynamicState_construct(threadData, _state); // _state has no default value.
  tmp2._p = _p;
  tmp2._T = _T;
  tmp1 = tmp2;
  pump__v3__basicCold__t_plugFlowPipe_heaLos__a_Medium_ThermodynamicState_copy(tmp1, _state);;
  _return: OMC_LABEL_UNUSED
  return _state;
}
modelica_metatype boxptr_pump__v3__basicCold__t_plugFlowPipe_heaLos__a_Medium_setState__pTX(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T, modelica_metatype _X)
{
  modelica_real tmp1;
  modelica_real tmp2;
  pump__v3__basicCold__t_plugFlowPipe_heaLos__a_Medium_ThermodynamicState _state;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype out_state;
  tmp1 = mmc_unbox_real(_p);
  tmp2 = mmc_unbox_real(_T);
  _state = omc_pump__v3__basicCold__t_plugFlowPipe_heaLos__a_Medium_setState__pTX(threadData, tmp1, tmp2, *((base_array_t*)_X));
  tmpMeta3 = mmc_mk_rcon(_state._p);
  tmpMeta4 = mmc_mk_rcon(_state._T);
  out_state = mmc_mk_box3(3, &pump__v3__basicCold__t_plugFlowPipe_heaLos__a_Medium_ThermodynamicState__desc, tmpMeta3, tmpMeta4);
  return out_state;
}

DLLDirection
pump__v3__basicCold__t_plugFlowPipe_heaLos__a_Medium_ThermodynamicState omc_pump__v3__basicCold__t_plugFlowPipe_heaLos__a_Medium_setState__phX(threadData_t *threadData, modelica_real _p, modelica_real _h, real_array _X)
{
  pump__v3__basicCold__t_plugFlowPipe_heaLos__a_Medium_ThermodynamicState _state;
  pump__v3__basicCold__t_plugFlowPipe_heaLos__a_Medium_ThermodynamicState tmp1;
  pump__v3__basicCold__t_plugFlowPipe_heaLos__a_Medium_ThermodynamicState tmp2;
  modelica_real tmp3;
  _tailrecursive: OMC_LABEL_UNUSED
  pump__v3__basicCold__t_plugFlowPipe_heaLos__a_Medium_ThermodynamicState_construct(threadData, _state); // _state has no default value.
  tmp3 = 4184.0;
  if (tmp3 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "h / 4184.0");}
  tmp2._p = _p;
  tmp2._T = 273.15 + (_h) / tmp3;
  tmp1 = tmp2;
  pump__v3__basicCold__t_plugFlowPipe_heaLos__a_Medium_ThermodynamicState_copy(tmp1, _state);;
  _return: OMC_LABEL_UNUSED
  return _state;
}
modelica_metatype boxptr_pump__v3__basicCold__t_plugFlowPipe_heaLos__a_Medium_setState__phX(threadData_t *threadData, modelica_metatype _p, modelica_metatype _h, modelica_metatype _X)
{
  modelica_real tmp1;
  modelica_real tmp2;
  pump__v3__basicCold__t_plugFlowPipe_heaLos__a_Medium_ThermodynamicState _state;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype out_state;
  tmp1 = mmc_unbox_real(_p);
  tmp2 = mmc_unbox_real(_h);
  _state = omc_pump__v3__basicCold__t_plugFlowPipe_heaLos__a_Medium_setState__phX(threadData, tmp1, tmp2, *((base_array_t*)_X));
  tmpMeta3 = mmc_mk_rcon(_state._p);
  tmpMeta4 = mmc_mk_rcon(_state._T);
  out_state = mmc_mk_box3(3, &pump__v3__basicCold__t_plugFlowPipe_heaLos__a_Medium_ThermodynamicState__desc, tmpMeta3, tmpMeta4);
  return out_state;
}

DLLDirection
modelica_real omc_pump__v3__basicCold__t_plugFlowPipe_heaLos__a_Medium_specificEnthalpy(threadData_t *threadData, pump__v3__basicCold__t_plugFlowPipe_heaLos__a_Medium_ThermodynamicState _state)
{
  modelica_real _h;
  _tailrecursive: OMC_LABEL_UNUSED
  // _h has no default value.
  _h = (4184.0) * (_state._T - 273.15);
  _return: OMC_LABEL_UNUSED
  return _h;
}
modelica_metatype boxptr_pump__v3__basicCold__t_plugFlowPipe_heaLos__a_Medium_specificEnthalpy(threadData_t *threadData, modelica_metatype _state)
{
  pump__v3__basicCold__t_plugFlowPipe_heaLos__a_Medium_ThermodynamicState tmp1;
  modelica_metatype tmpMeta2;
  modelica_real tmp3;
  modelica_metatype tmpMeta4;
  modelica_real tmp5;
  modelica_real _h;
  modelica_metatype out_h;
  tmpMeta2 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_state), 2)));
  tmp3 = mmc_unbox_real(tmpMeta2);
  tmp1._p = tmp3;
  tmpMeta4 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_state), 3)));
  tmp5 = mmc_unbox_real(tmpMeta4);
  tmp1._T = tmp5;
  _h = omc_pump__v3__basicCold__t_plugFlowPipe_heaLos__a_Medium_specificEnthalpy(threadData, tmp1);
  out_h = mmc_mk_rcon(_h);
  return out_h;
}

DLLDirection
modelica_real omc_pump__v3__basicCold__t_plugFlowPipe_heaLos__a_Medium_specificHeatCapacityCp(threadData_t *threadData, pump__v3__basicCold__t_plugFlowPipe_heaLos__a_Medium_ThermodynamicState _state)
{
  modelica_real _cp;
  _tailrecursive: OMC_LABEL_UNUSED
  // _cp has no default value.
  _cp = 4184.0;
  _return: OMC_LABEL_UNUSED
  return _cp;
}
modelica_metatype boxptr_pump__v3__basicCold__t_plugFlowPipe_heaLos__a_Medium_specificHeatCapacityCp(threadData_t *threadData, modelica_metatype _state)
{
  pump__v3__basicCold__t_plugFlowPipe_heaLos__a_Medium_ThermodynamicState tmp1;
  modelica_metatype tmpMeta2;
  modelica_real tmp3;
  modelica_metatype tmpMeta4;
  modelica_real tmp5;
  modelica_real _cp;
  modelica_metatype out_cp;
  tmpMeta2 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_state), 2)));
  tmp3 = mmc_unbox_real(tmpMeta2);
  tmp1._p = tmp3;
  tmpMeta4 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_state), 3)));
  tmp5 = mmc_unbox_real(tmpMeta4);
  tmp1._T = tmp5;
  _cp = omc_pump__v3__basicCold__t_plugFlowPipe_heaLos__a_Medium_specificHeatCapacityCp(threadData, tmp1);
  out_cp = mmc_mk_rcon(_cp);
  return out_cp;
}

DLLDirection
modelica_real omc_pump__v3__basicCold__t_plugFlowPipe_heaLos__a_Medium_temperature(threadData_t *threadData, pump__v3__basicCold__t_plugFlowPipe_heaLos__a_Medium_ThermodynamicState _state)
{
  modelica_real _T;
  _tailrecursive: OMC_LABEL_UNUSED
  // _T has no default value.
  _T = _state._T;
  _return: OMC_LABEL_UNUSED
  return _T;
}
modelica_metatype boxptr_pump__v3__basicCold__t_plugFlowPipe_heaLos__a_Medium_temperature(threadData_t *threadData, modelica_metatype _state)
{
  pump__v3__basicCold__t_plugFlowPipe_heaLos__a_Medium_ThermodynamicState tmp1;
  modelica_metatype tmpMeta2;
  modelica_real tmp3;
  modelica_metatype tmpMeta4;
  modelica_real tmp5;
  modelica_real _T;
  modelica_metatype out_T;
  tmpMeta2 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_state), 2)));
  tmp3 = mmc_unbox_real(tmpMeta2);
  tmp1._p = tmp3;
  tmpMeta4 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_state), 3)));
  tmp5 = mmc_unbox_real(tmpMeta4);
  tmp1._T = tmp5;
  _T = omc_pump__v3__basicCold__t_plugFlowPipe_heaLos__a_Medium_temperature(threadData, tmp1);
  out_T = mmc_mk_rcon(_T);
  return out_T;
}

pump__v3__basicCold__t_plugFlowPipe_heaLos__b_Medium_ThermodynamicState omc_pump__v3__basicCold__t_plugFlowPipe_heaLos__b_Medium_ThermodynamicState(threadData_t *threadData, modelica_real omc_p, modelica_real omc_T)
{
  pump__v3__basicCold__t_plugFlowPipe_heaLos__b_Medium_ThermodynamicState tmp1;
  tmp1._p = omc_p;
  tmp1._T = omc_T;
  return tmp1;
}

modelica_metatype boxptr_pump__v3__basicCold__t_plugFlowPipe_heaLos__b_Medium_ThermodynamicState(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T)
{
  return mmc_mk_box3(3, &pump__v3__basicCold__t_plugFlowPipe_heaLos__b_Medium_ThermodynamicState__desc, _p, _T);
}

DLLDirection
pump__v3__basicCold__t_plugFlowPipe_heaLos__b_Medium_ThermodynamicState omc_pump__v3__basicCold__t_plugFlowPipe_heaLos__b_Medium_setState__pTX(threadData_t *threadData, modelica_real _p, modelica_real _T, real_array _X)
{
  pump__v3__basicCold__t_plugFlowPipe_heaLos__b_Medium_ThermodynamicState _state;
  pump__v3__basicCold__t_plugFlowPipe_heaLos__b_Medium_ThermodynamicState tmp1;
  pump__v3__basicCold__t_plugFlowPipe_heaLos__b_Medium_ThermodynamicState tmp2;
  _tailrecursive: OMC_LABEL_UNUSED
  pump__v3__basicCold__t_plugFlowPipe_heaLos__b_Medium_ThermodynamicState_construct(threadData, _state); // _state has no default value.
  tmp2._p = _p;
  tmp2._T = _T;
  tmp1 = tmp2;
  pump__v3__basicCold__t_plugFlowPipe_heaLos__b_Medium_ThermodynamicState_copy(tmp1, _state);;
  _return: OMC_LABEL_UNUSED
  return _state;
}
modelica_metatype boxptr_pump__v3__basicCold__t_plugFlowPipe_heaLos__b_Medium_setState__pTX(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T, modelica_metatype _X)
{
  modelica_real tmp1;
  modelica_real tmp2;
  pump__v3__basicCold__t_plugFlowPipe_heaLos__b_Medium_ThermodynamicState _state;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype out_state;
  tmp1 = mmc_unbox_real(_p);
  tmp2 = mmc_unbox_real(_T);
  _state = omc_pump__v3__basicCold__t_plugFlowPipe_heaLos__b_Medium_setState__pTX(threadData, tmp1, tmp2, *((base_array_t*)_X));
  tmpMeta3 = mmc_mk_rcon(_state._p);
  tmpMeta4 = mmc_mk_rcon(_state._T);
  out_state = mmc_mk_box3(3, &pump__v3__basicCold__t_plugFlowPipe_heaLos__b_Medium_ThermodynamicState__desc, tmpMeta3, tmpMeta4);
  return out_state;
}

DLLDirection
pump__v3__basicCold__t_plugFlowPipe_heaLos__b_Medium_ThermodynamicState omc_pump__v3__basicCold__t_plugFlowPipe_heaLos__b_Medium_setState__phX(threadData_t *threadData, modelica_real _p, modelica_real _h, real_array _X)
{
  pump__v3__basicCold__t_plugFlowPipe_heaLos__b_Medium_ThermodynamicState _state;
  pump__v3__basicCold__t_plugFlowPipe_heaLos__b_Medium_ThermodynamicState tmp1;
  pump__v3__basicCold__t_plugFlowPipe_heaLos__b_Medium_ThermodynamicState tmp2;
  modelica_real tmp3;
  _tailrecursive: OMC_LABEL_UNUSED
  pump__v3__basicCold__t_plugFlowPipe_heaLos__b_Medium_ThermodynamicState_construct(threadData, _state); // _state has no default value.
  tmp3 = 4184.0;
  if (tmp3 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "h / 4184.0");}
  tmp2._p = _p;
  tmp2._T = 273.15 + (_h) / tmp3;
  tmp1 = tmp2;
  pump__v3__basicCold__t_plugFlowPipe_heaLos__b_Medium_ThermodynamicState_copy(tmp1, _state);;
  _return: OMC_LABEL_UNUSED
  return _state;
}
modelica_metatype boxptr_pump__v3__basicCold__t_plugFlowPipe_heaLos__b_Medium_setState__phX(threadData_t *threadData, modelica_metatype _p, modelica_metatype _h, modelica_metatype _X)
{
  modelica_real tmp1;
  modelica_real tmp2;
  pump__v3__basicCold__t_plugFlowPipe_heaLos__b_Medium_ThermodynamicState _state;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype out_state;
  tmp1 = mmc_unbox_real(_p);
  tmp2 = mmc_unbox_real(_h);
  _state = omc_pump__v3__basicCold__t_plugFlowPipe_heaLos__b_Medium_setState__phX(threadData, tmp1, tmp2, *((base_array_t*)_X));
  tmpMeta3 = mmc_mk_rcon(_state._p);
  tmpMeta4 = mmc_mk_rcon(_state._T);
  out_state = mmc_mk_box3(3, &pump__v3__basicCold__t_plugFlowPipe_heaLos__b_Medium_ThermodynamicState__desc, tmpMeta3, tmpMeta4);
  return out_state;
}

DLLDirection
modelica_real omc_pump__v3__basicCold__t_plugFlowPipe_heaLos__b_Medium_specificEnthalpy(threadData_t *threadData, pump__v3__basicCold__t_plugFlowPipe_heaLos__b_Medium_ThermodynamicState _state)
{
  modelica_real _h;
  _tailrecursive: OMC_LABEL_UNUSED
  // _h has no default value.
  _h = (4184.0) * (_state._T - 273.15);
  _return: OMC_LABEL_UNUSED
  return _h;
}
modelica_metatype boxptr_pump__v3__basicCold__t_plugFlowPipe_heaLos__b_Medium_specificEnthalpy(threadData_t *threadData, modelica_metatype _state)
{
  pump__v3__basicCold__t_plugFlowPipe_heaLos__b_Medium_ThermodynamicState tmp1;
  modelica_metatype tmpMeta2;
  modelica_real tmp3;
  modelica_metatype tmpMeta4;
  modelica_real tmp5;
  modelica_real _h;
  modelica_metatype out_h;
  tmpMeta2 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_state), 2)));
  tmp3 = mmc_unbox_real(tmpMeta2);
  tmp1._p = tmp3;
  tmpMeta4 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_state), 3)));
  tmp5 = mmc_unbox_real(tmpMeta4);
  tmp1._T = tmp5;
  _h = omc_pump__v3__basicCold__t_plugFlowPipe_heaLos__b_Medium_specificEnthalpy(threadData, tmp1);
  out_h = mmc_mk_rcon(_h);
  return out_h;
}

DLLDirection
modelica_real omc_pump__v3__basicCold__t_plugFlowPipe_heaLos__b_Medium_specificHeatCapacityCp(threadData_t *threadData, pump__v3__basicCold__t_plugFlowPipe_heaLos__b_Medium_ThermodynamicState _state)
{
  modelica_real _cp;
  _tailrecursive: OMC_LABEL_UNUSED
  // _cp has no default value.
  _cp = 4184.0;
  _return: OMC_LABEL_UNUSED
  return _cp;
}
modelica_metatype boxptr_pump__v3__basicCold__t_plugFlowPipe_heaLos__b_Medium_specificHeatCapacityCp(threadData_t *threadData, modelica_metatype _state)
{
  pump__v3__basicCold__t_plugFlowPipe_heaLos__b_Medium_ThermodynamicState tmp1;
  modelica_metatype tmpMeta2;
  modelica_real tmp3;
  modelica_metatype tmpMeta4;
  modelica_real tmp5;
  modelica_real _cp;
  modelica_metatype out_cp;
  tmpMeta2 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_state), 2)));
  tmp3 = mmc_unbox_real(tmpMeta2);
  tmp1._p = tmp3;
  tmpMeta4 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_state), 3)));
  tmp5 = mmc_unbox_real(tmpMeta4);
  tmp1._T = tmp5;
  _cp = omc_pump__v3__basicCold__t_plugFlowPipe_heaLos__b_Medium_specificHeatCapacityCp(threadData, tmp1);
  out_cp = mmc_mk_rcon(_cp);
  return out_cp;
}

DLLDirection
modelica_real omc_pump__v3__basicCold__t_plugFlowPipe_heaLos__b_Medium_temperature(threadData_t *threadData, pump__v3__basicCold__t_plugFlowPipe_heaLos__b_Medium_ThermodynamicState _state)
{
  modelica_real _T;
  _tailrecursive: OMC_LABEL_UNUSED
  // _T has no default value.
  _T = _state._T;
  _return: OMC_LABEL_UNUSED
  return _T;
}
modelica_metatype boxptr_pump__v3__basicCold__t_plugFlowPipe_heaLos__b_Medium_temperature(threadData_t *threadData, modelica_metatype _state)
{
  pump__v3__basicCold__t_plugFlowPipe_heaLos__b_Medium_ThermodynamicState tmp1;
  modelica_metatype tmpMeta2;
  modelica_real tmp3;
  modelica_metatype tmpMeta4;
  modelica_real tmp5;
  modelica_real _T;
  modelica_metatype out_T;
  tmpMeta2 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_state), 2)));
  tmp3 = mmc_unbox_real(tmpMeta2);
  tmp1._p = tmp3;
  tmpMeta4 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_state), 3)));
  tmp5 = mmc_unbox_real(tmpMeta4);
  tmp1._T = tmp5;
  _T = omc_pump__v3__basicCold__t_plugFlowPipe_heaLos__b_Medium_temperature(threadData, tmp1);
  out_T = mmc_mk_rcon(_T);
  return out_T;
}

pump__v3__basicCold__t_plugFlowPipe_res_Medium_ThermodynamicState omc_pump__v3__basicCold__t_plugFlowPipe_res_Medium_ThermodynamicState(threadData_t *threadData, modelica_real omc_p, modelica_real omc_T)
{
  pump__v3__basicCold__t_plugFlowPipe_res_Medium_ThermodynamicState tmp1;
  tmp1._p = omc_p;
  tmp1._T = omc_T;
  return tmp1;
}

modelica_metatype boxptr_pump__v3__basicCold__t_plugFlowPipe_res_Medium_ThermodynamicState(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T)
{
  return mmc_mk_box3(3, &pump__v3__basicCold__t_plugFlowPipe_res_Medium_ThermodynamicState__desc, _p, _T);
}

pump__v3__basicCold__t_plugFlowPipe_vol__a_Medium_ThermodynamicState omc_pump__v3__basicCold__t_plugFlowPipe_vol__a_Medium_ThermodynamicState(threadData_t *threadData, modelica_real omc_p, modelica_real omc_T)
{
  pump__v3__basicCold__t_plugFlowPipe_vol__a_Medium_ThermodynamicState tmp1;
  tmp1._p = omc_p;
  tmp1._T = omc_T;
  return tmp1;
}

modelica_metatype boxptr_pump__v3__basicCold__t_plugFlowPipe_vol__a_Medium_ThermodynamicState(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T)
{
  return mmc_mk_box3(3, &pump__v3__basicCold__t_plugFlowPipe_vol__a_Medium_ThermodynamicState__desc, _p, _T);
}

DLLDirection
modelica_real omc_pump__v3__basicCold__t_plugFlowPipe_vol__a_Medium_density(threadData_t *threadData, pump__v3__basicCold__t_plugFlowPipe_vol__a_Medium_ThermodynamicState _state)
{
  modelica_real _d;
  _tailrecursive: OMC_LABEL_UNUSED
  // _d has no default value.
  _d = 995.586;
  _return: OMC_LABEL_UNUSED
  return _d;
}
modelica_metatype boxptr_pump__v3__basicCold__t_plugFlowPipe_vol__a_Medium_density(threadData_t *threadData, modelica_metatype _state)
{
  pump__v3__basicCold__t_plugFlowPipe_vol__a_Medium_ThermodynamicState tmp1;
  modelica_metatype tmpMeta2;
  modelica_real tmp3;
  modelica_metatype tmpMeta4;
  modelica_real tmp5;
  modelica_real _d;
  modelica_metatype out_d;
  tmpMeta2 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_state), 2)));
  tmp3 = mmc_unbox_real(tmpMeta2);
  tmp1._p = tmp3;
  tmpMeta4 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_state), 3)));
  tmp5 = mmc_unbox_real(tmpMeta4);
  tmp1._T = tmp5;
  _d = omc_pump__v3__basicCold__t_plugFlowPipe_vol__a_Medium_density(threadData, tmp1);
  out_d = mmc_mk_rcon(_d);
  return out_d;
}

DLLDirection
modelica_real omc_pump__v3__basicCold__t_plugFlowPipe_vol__a_Medium_temperature__phX(threadData_t *threadData, modelica_real _p, modelica_real _h, real_array _X)
{
  modelica_real _T;
  modelica_real tmp1;
  _tailrecursive: OMC_LABEL_UNUSED
  // _T has no default value.
  tmp1 = 4184.0;
  if (tmp1 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "h / 4184.0");}
  _T = 273.15 + (_h) / tmp1;
  _return: OMC_LABEL_UNUSED
  return _T;
}
modelica_metatype boxptr_pump__v3__basicCold__t_plugFlowPipe_vol__a_Medium_temperature__phX(threadData_t *threadData, modelica_metatype _p, modelica_metatype _h, modelica_metatype _X)
{
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_real _T;
  modelica_metatype out_T;
  tmp1 = mmc_unbox_real(_p);
  tmp2 = mmc_unbox_real(_h);
  _T = omc_pump__v3__basicCold__t_plugFlowPipe_vol__a_Medium_temperature__phX(threadData, tmp1, tmp2, *((base_array_t*)_X));
  out_T = mmc_mk_rcon(_T);
  return out_T;
}

pump__v3__basicCold__t_plugFlowPipe_vol__a_dynBal_Medium_ThermodynamicState omc_pump__v3__basicCold__t_plugFlowPipe_vol__a_dynBal_Medium_ThermodynamicState(threadData_t *threadData, modelica_real omc_p, modelica_real omc_T)
{
  pump__v3__basicCold__t_plugFlowPipe_vol__a_dynBal_Medium_ThermodynamicState tmp1;
  tmp1._p = omc_p;
  tmp1._T = omc_T;
  return tmp1;
}

modelica_metatype boxptr_pump__v3__basicCold__t_plugFlowPipe_vol__a_dynBal_Medium_ThermodynamicState(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T)
{
  return mmc_mk_box3(3, &pump__v3__basicCold__t_plugFlowPipe_vol__a_dynBal_Medium_ThermodynamicState__desc, _p, _T);
}

DLLDirection
modelica_real omc_pump__v3__basicCold__t_plugFlowPipe_vol__a_dynBal_Medium_density(threadData_t *threadData, pump__v3__basicCold__t_plugFlowPipe_vol__a_dynBal_Medium_ThermodynamicState _state)
{
  modelica_real _d;
  _tailrecursive: OMC_LABEL_UNUSED
  // _d has no default value.
  _d = 995.586;
  _return: OMC_LABEL_UNUSED
  return _d;
}
modelica_metatype boxptr_pump__v3__basicCold__t_plugFlowPipe_vol__a_dynBal_Medium_density(threadData_t *threadData, modelica_metatype _state)
{
  pump__v3__basicCold__t_plugFlowPipe_vol__a_dynBal_Medium_ThermodynamicState tmp1;
  modelica_metatype tmpMeta2;
  modelica_real tmp3;
  modelica_metatype tmpMeta4;
  modelica_real tmp5;
  modelica_real _d;
  modelica_metatype out_d;
  tmpMeta2 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_state), 2)));
  tmp3 = mmc_unbox_real(tmpMeta2);
  tmp1._p = tmp3;
  tmpMeta4 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_state), 3)));
  tmp5 = mmc_unbox_real(tmpMeta4);
  tmp1._T = tmp5;
  _d = omc_pump__v3__basicCold__t_plugFlowPipe_vol__a_dynBal_Medium_density(threadData, tmp1);
  out_d = mmc_mk_rcon(_d);
  return out_d;
}

DLLDirection
pump__v3__basicCold__t_plugFlowPipe_vol__a_dynBal_Medium_ThermodynamicState omc_pump__v3__basicCold__t_plugFlowPipe_vol__a_dynBal_Medium_setState__pTX(threadData_t *threadData, modelica_real _p, modelica_real _T, real_array _X)
{
  pump__v3__basicCold__t_plugFlowPipe_vol__a_dynBal_Medium_ThermodynamicState _state;
  pump__v3__basicCold__t_plugFlowPipe_vol__a_dynBal_Medium_ThermodynamicState tmp1;
  pump__v3__basicCold__t_plugFlowPipe_vol__a_dynBal_Medium_ThermodynamicState tmp2;
  _tailrecursive: OMC_LABEL_UNUSED
  pump__v3__basicCold__t_plugFlowPipe_vol__a_dynBal_Medium_ThermodynamicState_construct(threadData, _state); // _state has no default value.
  tmp2._p = _p;
  tmp2._T = _T;
  tmp1 = tmp2;
  pump__v3__basicCold__t_plugFlowPipe_vol__a_dynBal_Medium_ThermodynamicState_copy(tmp1, _state);;
  _return: OMC_LABEL_UNUSED
  return _state;
}
modelica_metatype boxptr_pump__v3__basicCold__t_plugFlowPipe_vol__a_dynBal_Medium_setState__pTX(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T, modelica_metatype _X)
{
  modelica_real tmp1;
  modelica_real tmp2;
  pump__v3__basicCold__t_plugFlowPipe_vol__a_dynBal_Medium_ThermodynamicState _state;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype out_state;
  tmp1 = mmc_unbox_real(_p);
  tmp2 = mmc_unbox_real(_T);
  _state = omc_pump__v3__basicCold__t_plugFlowPipe_vol__a_dynBal_Medium_setState__pTX(threadData, tmp1, tmp2, *((base_array_t*)_X));
  tmpMeta3 = mmc_mk_rcon(_state._p);
  tmpMeta4 = mmc_mk_rcon(_state._T);
  out_state = mmc_mk_box3(3, &pump__v3__basicCold__t_plugFlowPipe_vol__a_dynBal_Medium_ThermodynamicState__desc, tmpMeta3, tmpMeta4);
  return out_state;
}

DLLDirection
modelica_real omc_pump__v3__basicCold__t_plugFlowPipe_vol__a_dynBal_Medium_specificEnthalpy__pTX(threadData_t *threadData, modelica_real _p, modelica_real _T, real_array _X)
{
  modelica_real _h;
  _tailrecursive: OMC_LABEL_UNUSED
  // _h has no default value.
  _h = (4184.0) * (_T - 273.15);
  _return: OMC_LABEL_UNUSED
  return _h;
}
modelica_metatype boxptr_pump__v3__basicCold__t_plugFlowPipe_vol__a_dynBal_Medium_specificEnthalpy__pTX(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T, modelica_metatype _X)
{
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_real _h;
  modelica_metatype out_h;
  tmp1 = mmc_unbox_real(_p);
  tmp2 = mmc_unbox_real(_T);
  _h = omc_pump__v3__basicCold__t_plugFlowPipe_vol__a_dynBal_Medium_specificEnthalpy__pTX(threadData, tmp1, tmp2, *((base_array_t*)_X));
  out_h = mmc_mk_rcon(_h);
  return out_h;
}

DLLDirection
modelica_real omc_pump__v3__basicCold__t_plugFlowPipe_vol__a_dynBal_Medium_specificInternalEnergy(threadData_t *threadData, pump__v3__basicCold__t_plugFlowPipe_vol__a_dynBal_Medium_ThermodynamicState _state)
{
  modelica_real _u;
  _tailrecursive: OMC_LABEL_UNUSED
  // _u has no default value.
  _u = (4184.0) * (_state._T - 273.15);
  _return: OMC_LABEL_UNUSED
  return _u;
}
modelica_metatype boxptr_pump__v3__basicCold__t_plugFlowPipe_vol__a_dynBal_Medium_specificInternalEnergy(threadData_t *threadData, modelica_metatype _state)
{
  pump__v3__basicCold__t_plugFlowPipe_vol__a_dynBal_Medium_ThermodynamicState tmp1;
  modelica_metatype tmpMeta2;
  modelica_real tmp3;
  modelica_metatype tmpMeta4;
  modelica_real tmp5;
  modelica_real _u;
  modelica_metatype out_u;
  tmpMeta2 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_state), 2)));
  tmp3 = mmc_unbox_real(tmpMeta2);
  tmp1._p = tmp3;
  tmpMeta4 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_state), 3)));
  tmp5 = mmc_unbox_real(tmpMeta4);
  tmp1._T = tmp5;
  _u = omc_pump__v3__basicCold__t_plugFlowPipe_vol__a_dynBal_Medium_specificInternalEnergy(threadData, tmp1);
  out_u = mmc_mk_rcon(_u);
  return out_u;
}

pump__v3__basicCold__t_plugFlowPipe_vol__b_Medium_ThermodynamicState omc_pump__v3__basicCold__t_plugFlowPipe_vol__b_Medium_ThermodynamicState(threadData_t *threadData, modelica_real omc_p, modelica_real omc_T)
{
  pump__v3__basicCold__t_plugFlowPipe_vol__b_Medium_ThermodynamicState tmp1;
  tmp1._p = omc_p;
  tmp1._T = omc_T;
  return tmp1;
}

modelica_metatype boxptr_pump__v3__basicCold__t_plugFlowPipe_vol__b_Medium_ThermodynamicState(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T)
{
  return mmc_mk_box3(3, &pump__v3__basicCold__t_plugFlowPipe_vol__b_Medium_ThermodynamicState__desc, _p, _T);
}

DLLDirection
modelica_real omc_pump__v3__basicCold__t_plugFlowPipe_vol__b_Medium_density(threadData_t *threadData, pump__v3__basicCold__t_plugFlowPipe_vol__b_Medium_ThermodynamicState _state)
{
  modelica_real _d;
  _tailrecursive: OMC_LABEL_UNUSED
  // _d has no default value.
  _d = 995.586;
  _return: OMC_LABEL_UNUSED
  return _d;
}
modelica_metatype boxptr_pump__v3__basicCold__t_plugFlowPipe_vol__b_Medium_density(threadData_t *threadData, modelica_metatype _state)
{
  pump__v3__basicCold__t_plugFlowPipe_vol__b_Medium_ThermodynamicState tmp1;
  modelica_metatype tmpMeta2;
  modelica_real tmp3;
  modelica_metatype tmpMeta4;
  modelica_real tmp5;
  modelica_real _d;
  modelica_metatype out_d;
  tmpMeta2 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_state), 2)));
  tmp3 = mmc_unbox_real(tmpMeta2);
  tmp1._p = tmp3;
  tmpMeta4 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_state), 3)));
  tmp5 = mmc_unbox_real(tmpMeta4);
  tmp1._T = tmp5;
  _d = omc_pump__v3__basicCold__t_plugFlowPipe_vol__b_Medium_density(threadData, tmp1);
  out_d = mmc_mk_rcon(_d);
  return out_d;
}

DLLDirection
modelica_real omc_pump__v3__basicCold__t_plugFlowPipe_vol__b_Medium_temperature__phX(threadData_t *threadData, modelica_real _p, modelica_real _h, real_array _X)
{
  modelica_real _T;
  modelica_real tmp1;
  _tailrecursive: OMC_LABEL_UNUSED
  // _T has no default value.
  tmp1 = 4184.0;
  if (tmp1 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "h / 4184.0");}
  _T = 273.15 + (_h) / tmp1;
  _return: OMC_LABEL_UNUSED
  return _T;
}
modelica_metatype boxptr_pump__v3__basicCold__t_plugFlowPipe_vol__b_Medium_temperature__phX(threadData_t *threadData, modelica_metatype _p, modelica_metatype _h, modelica_metatype _X)
{
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_real _T;
  modelica_metatype out_T;
  tmp1 = mmc_unbox_real(_p);
  tmp2 = mmc_unbox_real(_h);
  _T = omc_pump__v3__basicCold__t_plugFlowPipe_vol__b_Medium_temperature__phX(threadData, tmp1, tmp2, *((base_array_t*)_X));
  out_T = mmc_mk_rcon(_T);
  return out_T;
}

pump__v3__basicCold__t_plugFlowPipe_vol__b_dynBal_Medium_ThermodynamicState omc_pump__v3__basicCold__t_plugFlowPipe_vol__b_dynBal_Medium_ThermodynamicState(threadData_t *threadData, modelica_real omc_p, modelica_real omc_T)
{
  pump__v3__basicCold__t_plugFlowPipe_vol__b_dynBal_Medium_ThermodynamicState tmp1;
  tmp1._p = omc_p;
  tmp1._T = omc_T;
  return tmp1;
}

modelica_metatype boxptr_pump__v3__basicCold__t_plugFlowPipe_vol__b_dynBal_Medium_ThermodynamicState(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T)
{
  return mmc_mk_box3(3, &pump__v3__basicCold__t_plugFlowPipe_vol__b_dynBal_Medium_ThermodynamicState__desc, _p, _T);
}

DLLDirection
modelica_real omc_pump__v3__basicCold__t_plugFlowPipe_vol__b_dynBal_Medium_density(threadData_t *threadData, pump__v3__basicCold__t_plugFlowPipe_vol__b_dynBal_Medium_ThermodynamicState _state)
{
  modelica_real _d;
  _tailrecursive: OMC_LABEL_UNUSED
  // _d has no default value.
  _d = 995.586;
  _return: OMC_LABEL_UNUSED
  return _d;
}
modelica_metatype boxptr_pump__v3__basicCold__t_plugFlowPipe_vol__b_dynBal_Medium_density(threadData_t *threadData, modelica_metatype _state)
{
  pump__v3__basicCold__t_plugFlowPipe_vol__b_dynBal_Medium_ThermodynamicState tmp1;
  modelica_metatype tmpMeta2;
  modelica_real tmp3;
  modelica_metatype tmpMeta4;
  modelica_real tmp5;
  modelica_real _d;
  modelica_metatype out_d;
  tmpMeta2 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_state), 2)));
  tmp3 = mmc_unbox_real(tmpMeta2);
  tmp1._p = tmp3;
  tmpMeta4 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_state), 3)));
  tmp5 = mmc_unbox_real(tmpMeta4);
  tmp1._T = tmp5;
  _d = omc_pump__v3__basicCold__t_plugFlowPipe_vol__b_dynBal_Medium_density(threadData, tmp1);
  out_d = mmc_mk_rcon(_d);
  return out_d;
}

DLLDirection
pump__v3__basicCold__t_plugFlowPipe_vol__b_dynBal_Medium_ThermodynamicState omc_pump__v3__basicCold__t_plugFlowPipe_vol__b_dynBal_Medium_setState__pTX(threadData_t *threadData, modelica_real _p, modelica_real _T, real_array _X)
{
  pump__v3__basicCold__t_plugFlowPipe_vol__b_dynBal_Medium_ThermodynamicState _state;
  pump__v3__basicCold__t_plugFlowPipe_vol__b_dynBal_Medium_ThermodynamicState tmp1;
  pump__v3__basicCold__t_plugFlowPipe_vol__b_dynBal_Medium_ThermodynamicState tmp2;
  _tailrecursive: OMC_LABEL_UNUSED
  pump__v3__basicCold__t_plugFlowPipe_vol__b_dynBal_Medium_ThermodynamicState_construct(threadData, _state); // _state has no default value.
  tmp2._p = _p;
  tmp2._T = _T;
  tmp1 = tmp2;
  pump__v3__basicCold__t_plugFlowPipe_vol__b_dynBal_Medium_ThermodynamicState_copy(tmp1, _state);;
  _return: OMC_LABEL_UNUSED
  return _state;
}
modelica_metatype boxptr_pump__v3__basicCold__t_plugFlowPipe_vol__b_dynBal_Medium_setState__pTX(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T, modelica_metatype _X)
{
  modelica_real tmp1;
  modelica_real tmp2;
  pump__v3__basicCold__t_plugFlowPipe_vol__b_dynBal_Medium_ThermodynamicState _state;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype out_state;
  tmp1 = mmc_unbox_real(_p);
  tmp2 = mmc_unbox_real(_T);
  _state = omc_pump__v3__basicCold__t_plugFlowPipe_vol__b_dynBal_Medium_setState__pTX(threadData, tmp1, tmp2, *((base_array_t*)_X));
  tmpMeta3 = mmc_mk_rcon(_state._p);
  tmpMeta4 = mmc_mk_rcon(_state._T);
  out_state = mmc_mk_box3(3, &pump__v3__basicCold__t_plugFlowPipe_vol__b_dynBal_Medium_ThermodynamicState__desc, tmpMeta3, tmpMeta4);
  return out_state;
}

DLLDirection
modelica_real omc_pump__v3__basicCold__t_plugFlowPipe_vol__b_dynBal_Medium_specificEnthalpy__pTX(threadData_t *threadData, modelica_real _p, modelica_real _T, real_array _X)
{
  modelica_real _h;
  _tailrecursive: OMC_LABEL_UNUSED
  // _h has no default value.
  _h = (4184.0) * (_T - 273.15);
  _return: OMC_LABEL_UNUSED
  return _h;
}
modelica_metatype boxptr_pump__v3__basicCold__t_plugFlowPipe_vol__b_dynBal_Medium_specificEnthalpy__pTX(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T, modelica_metatype _X)
{
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_real _h;
  modelica_metatype out_h;
  tmp1 = mmc_unbox_real(_p);
  tmp2 = mmc_unbox_real(_T);
  _h = omc_pump__v3__basicCold__t_plugFlowPipe_vol__b_dynBal_Medium_specificEnthalpy__pTX(threadData, tmp1, tmp2, *((base_array_t*)_X));
  out_h = mmc_mk_rcon(_h);
  return out_h;
}

DLLDirection
modelica_real omc_pump__v3__basicCold__t_plugFlowPipe_vol__b_dynBal_Medium_specificInternalEnergy(threadData_t *threadData, pump__v3__basicCold__t_plugFlowPipe_vol__b_dynBal_Medium_ThermodynamicState _state)
{
  modelica_real _u;
  _tailrecursive: OMC_LABEL_UNUSED
  // _u has no default value.
  _u = (4184.0) * (_state._T - 273.15);
  _return: OMC_LABEL_UNUSED
  return _u;
}
modelica_metatype boxptr_pump__v3__basicCold__t_plugFlowPipe_vol__b_dynBal_Medium_specificInternalEnergy(threadData_t *threadData, modelica_metatype _state)
{
  pump__v3__basicCold__t_plugFlowPipe_vol__b_dynBal_Medium_ThermodynamicState tmp1;
  modelica_metatype tmpMeta2;
  modelica_real tmp3;
  modelica_metatype tmpMeta4;
  modelica_real tmp5;
  modelica_real _u;
  modelica_metatype out_u;
  tmpMeta2 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_state), 2)));
  tmp3 = mmc_unbox_real(tmpMeta2);
  tmp1._p = tmp3;
  tmpMeta4 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_state), 3)));
  tmp5 = mmc_unbox_real(tmpMeta4);
  tmp1._T = tmp5;
  _u = omc_pump__v3__basicCold__t_plugFlowPipe_vol__b_dynBal_Medium_specificInternalEnergy(threadData, tmp1);
  out_u = mmc_mk_rcon(_u);
  return out_u;
}

pump__v3__basicCold__t_plugFlowPipe1_Medium_ThermodynamicState omc_pump__v3__basicCold__t_plugFlowPipe1_Medium_ThermodynamicState(threadData_t *threadData, modelica_real omc_p, modelica_real omc_T)
{
  pump__v3__basicCold__t_plugFlowPipe1_Medium_ThermodynamicState tmp1;
  tmp1._p = omc_p;
  tmp1._T = omc_T;
  return tmp1;
}

modelica_metatype boxptr_pump__v3__basicCold__t_plugFlowPipe1_Medium_ThermodynamicState(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T)
{
  return mmc_mk_box3(3, &pump__v3__basicCold__t_plugFlowPipe1_Medium_ThermodynamicState__desc, _p, _T);
}

DLLDirection
modelica_real omc_pump__v3__basicCold__t_plugFlowPipe1_Medium_specificHeatCapacityCp(threadData_t *threadData, pump__v3__basicCold__t_plugFlowPipe1_Medium_ThermodynamicState _state)
{
  modelica_real _cp;
  _tailrecursive: OMC_LABEL_UNUSED
  // _cp has no default value.
  _cp = 4184.0;
  _return: OMC_LABEL_UNUSED
  return _cp;
}
modelica_metatype boxptr_pump__v3__basicCold__t_plugFlowPipe1_Medium_specificHeatCapacityCp(threadData_t *threadData, modelica_metatype _state)
{
  pump__v3__basicCold__t_plugFlowPipe1_Medium_ThermodynamicState tmp1;
  modelica_metatype tmpMeta2;
  modelica_real tmp3;
  modelica_metatype tmpMeta4;
  modelica_real tmp5;
  modelica_real _cp;
  modelica_metatype out_cp;
  tmpMeta2 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_state), 2)));
  tmp3 = mmc_unbox_real(tmpMeta2);
  tmp1._p = tmp3;
  tmpMeta4 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_state), 3)));
  tmp5 = mmc_unbox_real(tmpMeta4);
  tmp1._T = tmp5;
  _cp = omc_pump__v3__basicCold__t_plugFlowPipe1_Medium_specificHeatCapacityCp(threadData, tmp1);
  out_cp = mmc_mk_rcon(_cp);
  return out_cp;
}

pump__v3__basicCold__t_plugFlowPipe1_del_Medium_ThermodynamicState omc_pump__v3__basicCold__t_plugFlowPipe1_del_Medium_ThermodynamicState(threadData_t *threadData, modelica_real omc_p, modelica_real omc_T)
{
  pump__v3__basicCold__t_plugFlowPipe1_del_Medium_ThermodynamicState tmp1;
  tmp1._p = omc_p;
  tmp1._T = omc_T;
  return tmp1;
}

modelica_metatype boxptr_pump__v3__basicCold__t_plugFlowPipe1_del_Medium_ThermodynamicState(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T)
{
  return mmc_mk_box3(3, &pump__v3__basicCold__t_plugFlowPipe1_del_Medium_ThermodynamicState__desc, _p, _T);
}

DLLDirection
modelica_real omc_pump__v3__basicCold__t_plugFlowPipe1_del_Medium_density(threadData_t *threadData, pump__v3__basicCold__t_plugFlowPipe1_del_Medium_ThermodynamicState _state)
{
  modelica_real _d;
  _tailrecursive: OMC_LABEL_UNUSED
  // _d has no default value.
  _d = 995.586;
  _return: OMC_LABEL_UNUSED
  return _d;
}
modelica_metatype boxptr_pump__v3__basicCold__t_plugFlowPipe1_del_Medium_density(threadData_t *threadData, modelica_metatype _state)
{
  pump__v3__basicCold__t_plugFlowPipe1_del_Medium_ThermodynamicState tmp1;
  modelica_metatype tmpMeta2;
  modelica_real tmp3;
  modelica_metatype tmpMeta4;
  modelica_real tmp5;
  modelica_real _d;
  modelica_metatype out_d;
  tmpMeta2 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_state), 2)));
  tmp3 = mmc_unbox_real(tmpMeta2);
  tmp1._p = tmp3;
  tmpMeta4 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_state), 3)));
  tmp5 = mmc_unbox_real(tmpMeta4);
  tmp1._T = tmp5;
  _d = omc_pump__v3__basicCold__t_plugFlowPipe1_del_Medium_density(threadData, tmp1);
  out_d = mmc_mk_rcon(_d);
  return out_d;
}

DLLDirection
pump__v3__basicCold__t_plugFlowPipe1_del_Medium_ThermodynamicState omc_pump__v3__basicCold__t_plugFlowPipe1_del_Medium_setState__pTX(threadData_t *threadData, modelica_real _p, modelica_real _T, real_array _X)
{
  pump__v3__basicCold__t_plugFlowPipe1_del_Medium_ThermodynamicState _state;
  pump__v3__basicCold__t_plugFlowPipe1_del_Medium_ThermodynamicState tmp1;
  pump__v3__basicCold__t_plugFlowPipe1_del_Medium_ThermodynamicState tmp2;
  _tailrecursive: OMC_LABEL_UNUSED
  pump__v3__basicCold__t_plugFlowPipe1_del_Medium_ThermodynamicState_construct(threadData, _state); // _state has no default value.
  tmp2._p = _p;
  tmp2._T = _T;
  tmp1 = tmp2;
  pump__v3__basicCold__t_plugFlowPipe1_del_Medium_ThermodynamicState_copy(tmp1, _state);;
  _return: OMC_LABEL_UNUSED
  return _state;
}
modelica_metatype boxptr_pump__v3__basicCold__t_plugFlowPipe1_del_Medium_setState__pTX(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T, modelica_metatype _X)
{
  modelica_real tmp1;
  modelica_real tmp2;
  pump__v3__basicCold__t_plugFlowPipe1_del_Medium_ThermodynamicState _state;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype out_state;
  tmp1 = mmc_unbox_real(_p);
  tmp2 = mmc_unbox_real(_T);
  _state = omc_pump__v3__basicCold__t_plugFlowPipe1_del_Medium_setState__pTX(threadData, tmp1, tmp2, *((base_array_t*)_X));
  tmpMeta3 = mmc_mk_rcon(_state._p);
  tmpMeta4 = mmc_mk_rcon(_state._T);
  out_state = mmc_mk_box3(3, &pump__v3__basicCold__t_plugFlowPipe1_del_Medium_ThermodynamicState__desc, tmpMeta3, tmpMeta4);
  return out_state;
}

DLLDirection
pump__v3__basicCold__t_plugFlowPipe1_del_Medium_ThermodynamicState omc_pump__v3__basicCold__t_plugFlowPipe1_del_Medium_setState__phX(threadData_t *threadData, modelica_real _p, modelica_real _h, real_array _X)
{
  pump__v3__basicCold__t_plugFlowPipe1_del_Medium_ThermodynamicState _state;
  pump__v3__basicCold__t_plugFlowPipe1_del_Medium_ThermodynamicState tmp1;
  pump__v3__basicCold__t_plugFlowPipe1_del_Medium_ThermodynamicState tmp2;
  modelica_real tmp3;
  _tailrecursive: OMC_LABEL_UNUSED
  pump__v3__basicCold__t_plugFlowPipe1_del_Medium_ThermodynamicState_construct(threadData, _state); // _state has no default value.
  tmp3 = 4184.0;
  if (tmp3 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "h / 4184.0");}
  tmp2._p = _p;
  tmp2._T = 273.15 + (_h) / tmp3;
  tmp1 = tmp2;
  pump__v3__basicCold__t_plugFlowPipe1_del_Medium_ThermodynamicState_copy(tmp1, _state);;
  _return: OMC_LABEL_UNUSED
  return _state;
}
modelica_metatype boxptr_pump__v3__basicCold__t_plugFlowPipe1_del_Medium_setState__phX(threadData_t *threadData, modelica_metatype _p, modelica_metatype _h, modelica_metatype _X)
{
  modelica_real tmp1;
  modelica_real tmp2;
  pump__v3__basicCold__t_plugFlowPipe1_del_Medium_ThermodynamicState _state;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype out_state;
  tmp1 = mmc_unbox_real(_p);
  tmp2 = mmc_unbox_real(_h);
  _state = omc_pump__v3__basicCold__t_plugFlowPipe1_del_Medium_setState__phX(threadData, tmp1, tmp2, *((base_array_t*)_X));
  tmpMeta3 = mmc_mk_rcon(_state._p);
  tmpMeta4 = mmc_mk_rcon(_state._T);
  out_state = mmc_mk_box3(3, &pump__v3__basicCold__t_plugFlowPipe1_del_Medium_ThermodynamicState__desc, tmpMeta3, tmpMeta4);
  return out_state;
}

DLLDirection
modelica_real omc_pump__v3__basicCold__t_plugFlowPipe1_del_Medium_specificEnthalpy(threadData_t *threadData, pump__v3__basicCold__t_plugFlowPipe1_del_Medium_ThermodynamicState _state)
{
  modelica_real _h;
  _tailrecursive: OMC_LABEL_UNUSED
  // _h has no default value.
  _h = (4184.0) * (_state._T - 273.15);
  _return: OMC_LABEL_UNUSED
  return _h;
}
modelica_metatype boxptr_pump__v3__basicCold__t_plugFlowPipe1_del_Medium_specificEnthalpy(threadData_t *threadData, modelica_metatype _state)
{
  pump__v3__basicCold__t_plugFlowPipe1_del_Medium_ThermodynamicState tmp1;
  modelica_metatype tmpMeta2;
  modelica_real tmp3;
  modelica_metatype tmpMeta4;
  modelica_real tmp5;
  modelica_real _h;
  modelica_metatype out_h;
  tmpMeta2 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_state), 2)));
  tmp3 = mmc_unbox_real(tmpMeta2);
  tmp1._p = tmp3;
  tmpMeta4 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_state), 3)));
  tmp5 = mmc_unbox_real(tmpMeta4);
  tmp1._T = tmp5;
  _h = omc_pump__v3__basicCold__t_plugFlowPipe1_del_Medium_specificEnthalpy(threadData, tmp1);
  out_h = mmc_mk_rcon(_h);
  return out_h;
}

pump__v3__basicCold__t_plugFlowPipe1_heaLos__a_Medium_ThermodynamicState omc_pump__v3__basicCold__t_plugFlowPipe1_heaLos__a_Medium_ThermodynamicState(threadData_t *threadData, modelica_real omc_p, modelica_real omc_T)
{
  pump__v3__basicCold__t_plugFlowPipe1_heaLos__a_Medium_ThermodynamicState tmp1;
  tmp1._p = omc_p;
  tmp1._T = omc_T;
  return tmp1;
}

modelica_metatype boxptr_pump__v3__basicCold__t_plugFlowPipe1_heaLos__a_Medium_ThermodynamicState(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T)
{
  return mmc_mk_box3(3, &pump__v3__basicCold__t_plugFlowPipe1_heaLos__a_Medium_ThermodynamicState__desc, _p, _T);
}

DLLDirection
pump__v3__basicCold__t_plugFlowPipe1_heaLos__a_Medium_ThermodynamicState omc_pump__v3__basicCold__t_plugFlowPipe1_heaLos__a_Medium_setState__pTX(threadData_t *threadData, modelica_real _p, modelica_real _T, real_array _X)
{
  pump__v3__basicCold__t_plugFlowPipe1_heaLos__a_Medium_ThermodynamicState _state;
  pump__v3__basicCold__t_plugFlowPipe1_heaLos__a_Medium_ThermodynamicState tmp1;
  pump__v3__basicCold__t_plugFlowPipe1_heaLos__a_Medium_ThermodynamicState tmp2;
  _tailrecursive: OMC_LABEL_UNUSED
  pump__v3__basicCold__t_plugFlowPipe1_heaLos__a_Medium_ThermodynamicState_construct(threadData, _state); // _state has no default value.
  tmp2._p = _p;
  tmp2._T = _T;
  tmp1 = tmp2;
  pump__v3__basicCold__t_plugFlowPipe1_heaLos__a_Medium_ThermodynamicState_copy(tmp1, _state);;
  _return: OMC_LABEL_UNUSED
  return _state;
}
modelica_metatype boxptr_pump__v3__basicCold__t_plugFlowPipe1_heaLos__a_Medium_setState__pTX(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T, modelica_metatype _X)
{
  modelica_real tmp1;
  modelica_real tmp2;
  pump__v3__basicCold__t_plugFlowPipe1_heaLos__a_Medium_ThermodynamicState _state;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype out_state;
  tmp1 = mmc_unbox_real(_p);
  tmp2 = mmc_unbox_real(_T);
  _state = omc_pump__v3__basicCold__t_plugFlowPipe1_heaLos__a_Medium_setState__pTX(threadData, tmp1, tmp2, *((base_array_t*)_X));
  tmpMeta3 = mmc_mk_rcon(_state._p);
  tmpMeta4 = mmc_mk_rcon(_state._T);
  out_state = mmc_mk_box3(3, &pump__v3__basicCold__t_plugFlowPipe1_heaLos__a_Medium_ThermodynamicState__desc, tmpMeta3, tmpMeta4);
  return out_state;
}

DLLDirection
pump__v3__basicCold__t_plugFlowPipe1_heaLos__a_Medium_ThermodynamicState omc_pump__v3__basicCold__t_plugFlowPipe1_heaLos__a_Medium_setState__phX(threadData_t *threadData, modelica_real _p, modelica_real _h, real_array _X)
{
  pump__v3__basicCold__t_plugFlowPipe1_heaLos__a_Medium_ThermodynamicState _state;
  pump__v3__basicCold__t_plugFlowPipe1_heaLos__a_Medium_ThermodynamicState tmp1;
  pump__v3__basicCold__t_plugFlowPipe1_heaLos__a_Medium_ThermodynamicState tmp2;
  modelica_real tmp3;
  _tailrecursive: OMC_LABEL_UNUSED
  pump__v3__basicCold__t_plugFlowPipe1_heaLos__a_Medium_ThermodynamicState_construct(threadData, _state); // _state has no default value.
  tmp3 = 4184.0;
  if (tmp3 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "h / 4184.0");}
  tmp2._p = _p;
  tmp2._T = 273.15 + (_h) / tmp3;
  tmp1 = tmp2;
  pump__v3__basicCold__t_plugFlowPipe1_heaLos__a_Medium_ThermodynamicState_copy(tmp1, _state);;
  _return: OMC_LABEL_UNUSED
  return _state;
}
modelica_metatype boxptr_pump__v3__basicCold__t_plugFlowPipe1_heaLos__a_Medium_setState__phX(threadData_t *threadData, modelica_metatype _p, modelica_metatype _h, modelica_metatype _X)
{
  modelica_real tmp1;
  modelica_real tmp2;
  pump__v3__basicCold__t_plugFlowPipe1_heaLos__a_Medium_ThermodynamicState _state;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype out_state;
  tmp1 = mmc_unbox_real(_p);
  tmp2 = mmc_unbox_real(_h);
  _state = omc_pump__v3__basicCold__t_plugFlowPipe1_heaLos__a_Medium_setState__phX(threadData, tmp1, tmp2, *((base_array_t*)_X));
  tmpMeta3 = mmc_mk_rcon(_state._p);
  tmpMeta4 = mmc_mk_rcon(_state._T);
  out_state = mmc_mk_box3(3, &pump__v3__basicCold__t_plugFlowPipe1_heaLos__a_Medium_ThermodynamicState__desc, tmpMeta3, tmpMeta4);
  return out_state;
}

DLLDirection
modelica_real omc_pump__v3__basicCold__t_plugFlowPipe1_heaLos__a_Medium_specificEnthalpy(threadData_t *threadData, pump__v3__basicCold__t_plugFlowPipe1_heaLos__a_Medium_ThermodynamicState _state)
{
  modelica_real _h;
  _tailrecursive: OMC_LABEL_UNUSED
  // _h has no default value.
  _h = (4184.0) * (_state._T - 273.15);
  _return: OMC_LABEL_UNUSED
  return _h;
}
modelica_metatype boxptr_pump__v3__basicCold__t_plugFlowPipe1_heaLos__a_Medium_specificEnthalpy(threadData_t *threadData, modelica_metatype _state)
{
  pump__v3__basicCold__t_plugFlowPipe1_heaLos__a_Medium_ThermodynamicState tmp1;
  modelica_metatype tmpMeta2;
  modelica_real tmp3;
  modelica_metatype tmpMeta4;
  modelica_real tmp5;
  modelica_real _h;
  modelica_metatype out_h;
  tmpMeta2 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_state), 2)));
  tmp3 = mmc_unbox_real(tmpMeta2);
  tmp1._p = tmp3;
  tmpMeta4 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_state), 3)));
  tmp5 = mmc_unbox_real(tmpMeta4);
  tmp1._T = tmp5;
  _h = omc_pump__v3__basicCold__t_plugFlowPipe1_heaLos__a_Medium_specificEnthalpy(threadData, tmp1);
  out_h = mmc_mk_rcon(_h);
  return out_h;
}

DLLDirection
modelica_real omc_pump__v3__basicCold__t_plugFlowPipe1_heaLos__a_Medium_specificHeatCapacityCp(threadData_t *threadData, pump__v3__basicCold__t_plugFlowPipe1_heaLos__a_Medium_ThermodynamicState _state)
{
  modelica_real _cp;
  _tailrecursive: OMC_LABEL_UNUSED
  // _cp has no default value.
  _cp = 4184.0;
  _return: OMC_LABEL_UNUSED
  return _cp;
}
modelica_metatype boxptr_pump__v3__basicCold__t_plugFlowPipe1_heaLos__a_Medium_specificHeatCapacityCp(threadData_t *threadData, modelica_metatype _state)
{
  pump__v3__basicCold__t_plugFlowPipe1_heaLos__a_Medium_ThermodynamicState tmp1;
  modelica_metatype tmpMeta2;
  modelica_real tmp3;
  modelica_metatype tmpMeta4;
  modelica_real tmp5;
  modelica_real _cp;
  modelica_metatype out_cp;
  tmpMeta2 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_state), 2)));
  tmp3 = mmc_unbox_real(tmpMeta2);
  tmp1._p = tmp3;
  tmpMeta4 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_state), 3)));
  tmp5 = mmc_unbox_real(tmpMeta4);
  tmp1._T = tmp5;
  _cp = omc_pump__v3__basicCold__t_plugFlowPipe1_heaLos__a_Medium_specificHeatCapacityCp(threadData, tmp1);
  out_cp = mmc_mk_rcon(_cp);
  return out_cp;
}

DLLDirection
modelica_real omc_pump__v3__basicCold__t_plugFlowPipe1_heaLos__a_Medium_temperature(threadData_t *threadData, pump__v3__basicCold__t_plugFlowPipe1_heaLos__a_Medium_ThermodynamicState _state)
{
  modelica_real _T;
  _tailrecursive: OMC_LABEL_UNUSED
  // _T has no default value.
  _T = _state._T;
  _return: OMC_LABEL_UNUSED
  return _T;
}
modelica_metatype boxptr_pump__v3__basicCold__t_plugFlowPipe1_heaLos__a_Medium_temperature(threadData_t *threadData, modelica_metatype _state)
{
  pump__v3__basicCold__t_plugFlowPipe1_heaLos__a_Medium_ThermodynamicState tmp1;
  modelica_metatype tmpMeta2;
  modelica_real tmp3;
  modelica_metatype tmpMeta4;
  modelica_real tmp5;
  modelica_real _T;
  modelica_metatype out_T;
  tmpMeta2 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_state), 2)));
  tmp3 = mmc_unbox_real(tmpMeta2);
  tmp1._p = tmp3;
  tmpMeta4 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_state), 3)));
  tmp5 = mmc_unbox_real(tmpMeta4);
  tmp1._T = tmp5;
  _T = omc_pump__v3__basicCold__t_plugFlowPipe1_heaLos__a_Medium_temperature(threadData, tmp1);
  out_T = mmc_mk_rcon(_T);
  return out_T;
}

pump__v3__basicCold__t_plugFlowPipe1_heaLos__b_Medium_ThermodynamicState omc_pump__v3__basicCold__t_plugFlowPipe1_heaLos__b_Medium_ThermodynamicState(threadData_t *threadData, modelica_real omc_p, modelica_real omc_T)
{
  pump__v3__basicCold__t_plugFlowPipe1_heaLos__b_Medium_ThermodynamicState tmp1;
  tmp1._p = omc_p;
  tmp1._T = omc_T;
  return tmp1;
}

modelica_metatype boxptr_pump__v3__basicCold__t_plugFlowPipe1_heaLos__b_Medium_ThermodynamicState(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T)
{
  return mmc_mk_box3(3, &pump__v3__basicCold__t_plugFlowPipe1_heaLos__b_Medium_ThermodynamicState__desc, _p, _T);
}

DLLDirection
pump__v3__basicCold__t_plugFlowPipe1_heaLos__b_Medium_ThermodynamicState omc_pump__v3__basicCold__t_plugFlowPipe1_heaLos__b_Medium_setState__pTX(threadData_t *threadData, modelica_real _p, modelica_real _T, real_array _X)
{
  pump__v3__basicCold__t_plugFlowPipe1_heaLos__b_Medium_ThermodynamicState _state;
  pump__v3__basicCold__t_plugFlowPipe1_heaLos__b_Medium_ThermodynamicState tmp1;
  pump__v3__basicCold__t_plugFlowPipe1_heaLos__b_Medium_ThermodynamicState tmp2;
  _tailrecursive: OMC_LABEL_UNUSED
  pump__v3__basicCold__t_plugFlowPipe1_heaLos__b_Medium_ThermodynamicState_construct(threadData, _state); // _state has no default value.
  tmp2._p = _p;
  tmp2._T = _T;
  tmp1 = tmp2;
  pump__v3__basicCold__t_plugFlowPipe1_heaLos__b_Medium_ThermodynamicState_copy(tmp1, _state);;
  _return: OMC_LABEL_UNUSED
  return _state;
}
modelica_metatype boxptr_pump__v3__basicCold__t_plugFlowPipe1_heaLos__b_Medium_setState__pTX(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T, modelica_metatype _X)
{
  modelica_real tmp1;
  modelica_real tmp2;
  pump__v3__basicCold__t_plugFlowPipe1_heaLos__b_Medium_ThermodynamicState _state;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype out_state;
  tmp1 = mmc_unbox_real(_p);
  tmp2 = mmc_unbox_real(_T);
  _state = omc_pump__v3__basicCold__t_plugFlowPipe1_heaLos__b_Medium_setState__pTX(threadData, tmp1, tmp2, *((base_array_t*)_X));
  tmpMeta3 = mmc_mk_rcon(_state._p);
  tmpMeta4 = mmc_mk_rcon(_state._T);
  out_state = mmc_mk_box3(3, &pump__v3__basicCold__t_plugFlowPipe1_heaLos__b_Medium_ThermodynamicState__desc, tmpMeta3, tmpMeta4);
  return out_state;
}

DLLDirection
pump__v3__basicCold__t_plugFlowPipe1_heaLos__b_Medium_ThermodynamicState omc_pump__v3__basicCold__t_plugFlowPipe1_heaLos__b_Medium_setState__phX(threadData_t *threadData, modelica_real _p, modelica_real _h, real_array _X)
{
  pump__v3__basicCold__t_plugFlowPipe1_heaLos__b_Medium_ThermodynamicState _state;
  pump__v3__basicCold__t_plugFlowPipe1_heaLos__b_Medium_ThermodynamicState tmp1;
  pump__v3__basicCold__t_plugFlowPipe1_heaLos__b_Medium_ThermodynamicState tmp2;
  modelica_real tmp3;
  _tailrecursive: OMC_LABEL_UNUSED
  pump__v3__basicCold__t_plugFlowPipe1_heaLos__b_Medium_ThermodynamicState_construct(threadData, _state); // _state has no default value.
  tmp3 = 4184.0;
  if (tmp3 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "h / 4184.0");}
  tmp2._p = _p;
  tmp2._T = 273.15 + (_h) / tmp3;
  tmp1 = tmp2;
  pump__v3__basicCold__t_plugFlowPipe1_heaLos__b_Medium_ThermodynamicState_copy(tmp1, _state);;
  _return: OMC_LABEL_UNUSED
  return _state;
}
modelica_metatype boxptr_pump__v3__basicCold__t_plugFlowPipe1_heaLos__b_Medium_setState__phX(threadData_t *threadData, modelica_metatype _p, modelica_metatype _h, modelica_metatype _X)
{
  modelica_real tmp1;
  modelica_real tmp2;
  pump__v3__basicCold__t_plugFlowPipe1_heaLos__b_Medium_ThermodynamicState _state;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype out_state;
  tmp1 = mmc_unbox_real(_p);
  tmp2 = mmc_unbox_real(_h);
  _state = omc_pump__v3__basicCold__t_plugFlowPipe1_heaLos__b_Medium_setState__phX(threadData, tmp1, tmp2, *((base_array_t*)_X));
  tmpMeta3 = mmc_mk_rcon(_state._p);
  tmpMeta4 = mmc_mk_rcon(_state._T);
  out_state = mmc_mk_box3(3, &pump__v3__basicCold__t_plugFlowPipe1_heaLos__b_Medium_ThermodynamicState__desc, tmpMeta3, tmpMeta4);
  return out_state;
}

DLLDirection
modelica_real omc_pump__v3__basicCold__t_plugFlowPipe1_heaLos__b_Medium_specificEnthalpy(threadData_t *threadData, pump__v3__basicCold__t_plugFlowPipe1_heaLos__b_Medium_ThermodynamicState _state)
{
  modelica_real _h;
  _tailrecursive: OMC_LABEL_UNUSED
  // _h has no default value.
  _h = (4184.0) * (_state._T - 273.15);
  _return: OMC_LABEL_UNUSED
  return _h;
}
modelica_metatype boxptr_pump__v3__basicCold__t_plugFlowPipe1_heaLos__b_Medium_specificEnthalpy(threadData_t *threadData, modelica_metatype _state)
{
  pump__v3__basicCold__t_plugFlowPipe1_heaLos__b_Medium_ThermodynamicState tmp1;
  modelica_metatype tmpMeta2;
  modelica_real tmp3;
  modelica_metatype tmpMeta4;
  modelica_real tmp5;
  modelica_real _h;
  modelica_metatype out_h;
  tmpMeta2 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_state), 2)));
  tmp3 = mmc_unbox_real(tmpMeta2);
  tmp1._p = tmp3;
  tmpMeta4 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_state), 3)));
  tmp5 = mmc_unbox_real(tmpMeta4);
  tmp1._T = tmp5;
  _h = omc_pump__v3__basicCold__t_plugFlowPipe1_heaLos__b_Medium_specificEnthalpy(threadData, tmp1);
  out_h = mmc_mk_rcon(_h);
  return out_h;
}

DLLDirection
modelica_real omc_pump__v3__basicCold__t_plugFlowPipe1_heaLos__b_Medium_specificHeatCapacityCp(threadData_t *threadData, pump__v3__basicCold__t_plugFlowPipe1_heaLos__b_Medium_ThermodynamicState _state)
{
  modelica_real _cp;
  _tailrecursive: OMC_LABEL_UNUSED
  // _cp has no default value.
  _cp = 4184.0;
  _return: OMC_LABEL_UNUSED
  return _cp;
}
modelica_metatype boxptr_pump__v3__basicCold__t_plugFlowPipe1_heaLos__b_Medium_specificHeatCapacityCp(threadData_t *threadData, modelica_metatype _state)
{
  pump__v3__basicCold__t_plugFlowPipe1_heaLos__b_Medium_ThermodynamicState tmp1;
  modelica_metatype tmpMeta2;
  modelica_real tmp3;
  modelica_metatype tmpMeta4;
  modelica_real tmp5;
  modelica_real _cp;
  modelica_metatype out_cp;
  tmpMeta2 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_state), 2)));
  tmp3 = mmc_unbox_real(tmpMeta2);
  tmp1._p = tmp3;
  tmpMeta4 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_state), 3)));
  tmp5 = mmc_unbox_real(tmpMeta4);
  tmp1._T = tmp5;
  _cp = omc_pump__v3__basicCold__t_plugFlowPipe1_heaLos__b_Medium_specificHeatCapacityCp(threadData, tmp1);
  out_cp = mmc_mk_rcon(_cp);
  return out_cp;
}

DLLDirection
modelica_real omc_pump__v3__basicCold__t_plugFlowPipe1_heaLos__b_Medium_temperature(threadData_t *threadData, pump__v3__basicCold__t_plugFlowPipe1_heaLos__b_Medium_ThermodynamicState _state)
{
  modelica_real _T;
  _tailrecursive: OMC_LABEL_UNUSED
  // _T has no default value.
  _T = _state._T;
  _return: OMC_LABEL_UNUSED
  return _T;
}
modelica_metatype boxptr_pump__v3__basicCold__t_plugFlowPipe1_heaLos__b_Medium_temperature(threadData_t *threadData, modelica_metatype _state)
{
  pump__v3__basicCold__t_plugFlowPipe1_heaLos__b_Medium_ThermodynamicState tmp1;
  modelica_metatype tmpMeta2;
  modelica_real tmp3;
  modelica_metatype tmpMeta4;
  modelica_real tmp5;
  modelica_real _T;
  modelica_metatype out_T;
  tmpMeta2 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_state), 2)));
  tmp3 = mmc_unbox_real(tmpMeta2);
  tmp1._p = tmp3;
  tmpMeta4 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_state), 3)));
  tmp5 = mmc_unbox_real(tmpMeta4);
  tmp1._T = tmp5;
  _T = omc_pump__v3__basicCold__t_plugFlowPipe1_heaLos__b_Medium_temperature(threadData, tmp1);
  out_T = mmc_mk_rcon(_T);
  return out_T;
}

pump__v3__basicCold__t_plugFlowPipe1_res_Medium_ThermodynamicState omc_pump__v3__basicCold__t_plugFlowPipe1_res_Medium_ThermodynamicState(threadData_t *threadData, modelica_real omc_p, modelica_real omc_T)
{
  pump__v3__basicCold__t_plugFlowPipe1_res_Medium_ThermodynamicState tmp1;
  tmp1._p = omc_p;
  tmp1._T = omc_T;
  return tmp1;
}

modelica_metatype boxptr_pump__v3__basicCold__t_plugFlowPipe1_res_Medium_ThermodynamicState(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T)
{
  return mmc_mk_box3(3, &pump__v3__basicCold__t_plugFlowPipe1_res_Medium_ThermodynamicState__desc, _p, _T);
}

pump__v3__basicCold__t_plugFlowPipe1_vol__a_Medium_ThermodynamicState omc_pump__v3__basicCold__t_plugFlowPipe1_vol__a_Medium_ThermodynamicState(threadData_t *threadData, modelica_real omc_p, modelica_real omc_T)
{
  pump__v3__basicCold__t_plugFlowPipe1_vol__a_Medium_ThermodynamicState tmp1;
  tmp1._p = omc_p;
  tmp1._T = omc_T;
  return tmp1;
}

modelica_metatype boxptr_pump__v3__basicCold__t_plugFlowPipe1_vol__a_Medium_ThermodynamicState(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T)
{
  return mmc_mk_box3(3, &pump__v3__basicCold__t_plugFlowPipe1_vol__a_Medium_ThermodynamicState__desc, _p, _T);
}

DLLDirection
modelica_real omc_pump__v3__basicCold__t_plugFlowPipe1_vol__a_Medium_density(threadData_t *threadData, pump__v3__basicCold__t_plugFlowPipe1_vol__a_Medium_ThermodynamicState _state)
{
  modelica_real _d;
  _tailrecursive: OMC_LABEL_UNUSED
  // _d has no default value.
  _d = 995.586;
  _return: OMC_LABEL_UNUSED
  return _d;
}
modelica_metatype boxptr_pump__v3__basicCold__t_plugFlowPipe1_vol__a_Medium_density(threadData_t *threadData, modelica_metatype _state)
{
  pump__v3__basicCold__t_plugFlowPipe1_vol__a_Medium_ThermodynamicState tmp1;
  modelica_metatype tmpMeta2;
  modelica_real tmp3;
  modelica_metatype tmpMeta4;
  modelica_real tmp5;
  modelica_real _d;
  modelica_metatype out_d;
  tmpMeta2 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_state), 2)));
  tmp3 = mmc_unbox_real(tmpMeta2);
  tmp1._p = tmp3;
  tmpMeta4 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_state), 3)));
  tmp5 = mmc_unbox_real(tmpMeta4);
  tmp1._T = tmp5;
  _d = omc_pump__v3__basicCold__t_plugFlowPipe1_vol__a_Medium_density(threadData, tmp1);
  out_d = mmc_mk_rcon(_d);
  return out_d;
}

DLLDirection
modelica_real omc_pump__v3__basicCold__t_plugFlowPipe1_vol__a_Medium_temperature__phX(threadData_t *threadData, modelica_real _p, modelica_real _h, real_array _X)
{
  modelica_real _T;
  modelica_real tmp1;
  _tailrecursive: OMC_LABEL_UNUSED
  // _T has no default value.
  tmp1 = 4184.0;
  if (tmp1 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "h / 4184.0");}
  _T = 273.15 + (_h) / tmp1;
  _return: OMC_LABEL_UNUSED
  return _T;
}
modelica_metatype boxptr_pump__v3__basicCold__t_plugFlowPipe1_vol__a_Medium_temperature__phX(threadData_t *threadData, modelica_metatype _p, modelica_metatype _h, modelica_metatype _X)
{
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_real _T;
  modelica_metatype out_T;
  tmp1 = mmc_unbox_real(_p);
  tmp2 = mmc_unbox_real(_h);
  _T = omc_pump__v3__basicCold__t_plugFlowPipe1_vol__a_Medium_temperature__phX(threadData, tmp1, tmp2, *((base_array_t*)_X));
  out_T = mmc_mk_rcon(_T);
  return out_T;
}

pump__v3__basicCold__t_plugFlowPipe1_vol__a_dynBal_Medium_ThermodynamicState omc_pump__v3__basicCold__t_plugFlowPipe1_vol__a_dynBal_Medium_ThermodynamicState(threadData_t *threadData, modelica_real omc_p, modelica_real omc_T)
{
  pump__v3__basicCold__t_plugFlowPipe1_vol__a_dynBal_Medium_ThermodynamicState tmp1;
  tmp1._p = omc_p;
  tmp1._T = omc_T;
  return tmp1;
}

modelica_metatype boxptr_pump__v3__basicCold__t_plugFlowPipe1_vol__a_dynBal_Medium_ThermodynamicState(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T)
{
  return mmc_mk_box3(3, &pump__v3__basicCold__t_plugFlowPipe1_vol__a_dynBal_Medium_ThermodynamicState__desc, _p, _T);
}

DLLDirection
modelica_real omc_pump__v3__basicCold__t_plugFlowPipe1_vol__a_dynBal_Medium_density(threadData_t *threadData, pump__v3__basicCold__t_plugFlowPipe1_vol__a_dynBal_Medium_ThermodynamicState _state)
{
  modelica_real _d;
  _tailrecursive: OMC_LABEL_UNUSED
  // _d has no default value.
  _d = 995.586;
  _return: OMC_LABEL_UNUSED
  return _d;
}
modelica_metatype boxptr_pump__v3__basicCold__t_plugFlowPipe1_vol__a_dynBal_Medium_density(threadData_t *threadData, modelica_metatype _state)
{
  pump__v3__basicCold__t_plugFlowPipe1_vol__a_dynBal_Medium_ThermodynamicState tmp1;
  modelica_metatype tmpMeta2;
  modelica_real tmp3;
  modelica_metatype tmpMeta4;
  modelica_real tmp5;
  modelica_real _d;
  modelica_metatype out_d;
  tmpMeta2 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_state), 2)));
  tmp3 = mmc_unbox_real(tmpMeta2);
  tmp1._p = tmp3;
  tmpMeta4 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_state), 3)));
  tmp5 = mmc_unbox_real(tmpMeta4);
  tmp1._T = tmp5;
  _d = omc_pump__v3__basicCold__t_plugFlowPipe1_vol__a_dynBal_Medium_density(threadData, tmp1);
  out_d = mmc_mk_rcon(_d);
  return out_d;
}

DLLDirection
pump__v3__basicCold__t_plugFlowPipe1_vol__a_dynBal_Medium_ThermodynamicState omc_pump__v3__basicCold__t_plugFlowPipe1_vol__a_dynBal_Medium_setState__pTX(threadData_t *threadData, modelica_real _p, modelica_real _T, real_array _X)
{
  pump__v3__basicCold__t_plugFlowPipe1_vol__a_dynBal_Medium_ThermodynamicState _state;
  pump__v3__basicCold__t_plugFlowPipe1_vol__a_dynBal_Medium_ThermodynamicState tmp1;
  pump__v3__basicCold__t_plugFlowPipe1_vol__a_dynBal_Medium_ThermodynamicState tmp2;
  _tailrecursive: OMC_LABEL_UNUSED
  pump__v3__basicCold__t_plugFlowPipe1_vol__a_dynBal_Medium_ThermodynamicState_construct(threadData, _state); // _state has no default value.
  tmp2._p = _p;
  tmp2._T = _T;
  tmp1 = tmp2;
  pump__v3__basicCold__t_plugFlowPipe1_vol__a_dynBal_Medium_ThermodynamicState_copy(tmp1, _state);;
  _return: OMC_LABEL_UNUSED
  return _state;
}
modelica_metatype boxptr_pump__v3__basicCold__t_plugFlowPipe1_vol__a_dynBal_Medium_setState__pTX(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T, modelica_metatype _X)
{
  modelica_real tmp1;
  modelica_real tmp2;
  pump__v3__basicCold__t_plugFlowPipe1_vol__a_dynBal_Medium_ThermodynamicState _state;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype out_state;
  tmp1 = mmc_unbox_real(_p);
  tmp2 = mmc_unbox_real(_T);
  _state = omc_pump__v3__basicCold__t_plugFlowPipe1_vol__a_dynBal_Medium_setState__pTX(threadData, tmp1, tmp2, *((base_array_t*)_X));
  tmpMeta3 = mmc_mk_rcon(_state._p);
  tmpMeta4 = mmc_mk_rcon(_state._T);
  out_state = mmc_mk_box3(3, &pump__v3__basicCold__t_plugFlowPipe1_vol__a_dynBal_Medium_ThermodynamicState__desc, tmpMeta3, tmpMeta4);
  return out_state;
}

DLLDirection
modelica_real omc_pump__v3__basicCold__t_plugFlowPipe1_vol__a_dynBal_Medium_specificEnthalpy__pTX(threadData_t *threadData, modelica_real _p, modelica_real _T, real_array _X)
{
  modelica_real _h;
  _tailrecursive: OMC_LABEL_UNUSED
  // _h has no default value.
  _h = (4184.0) * (_T - 273.15);
  _return: OMC_LABEL_UNUSED
  return _h;
}
modelica_metatype boxptr_pump__v3__basicCold__t_plugFlowPipe1_vol__a_dynBal_Medium_specificEnthalpy__pTX(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T, modelica_metatype _X)
{
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_real _h;
  modelica_metatype out_h;
  tmp1 = mmc_unbox_real(_p);
  tmp2 = mmc_unbox_real(_T);
  _h = omc_pump__v3__basicCold__t_plugFlowPipe1_vol__a_dynBal_Medium_specificEnthalpy__pTX(threadData, tmp1, tmp2, *((base_array_t*)_X));
  out_h = mmc_mk_rcon(_h);
  return out_h;
}

DLLDirection
modelica_real omc_pump__v3__basicCold__t_plugFlowPipe1_vol__a_dynBal_Medium_specificInternalEnergy(threadData_t *threadData, pump__v3__basicCold__t_plugFlowPipe1_vol__a_dynBal_Medium_ThermodynamicState _state)
{
  modelica_real _u;
  _tailrecursive: OMC_LABEL_UNUSED
  // _u has no default value.
  _u = (4184.0) * (_state._T - 273.15);
  _return: OMC_LABEL_UNUSED
  return _u;
}
modelica_metatype boxptr_pump__v3__basicCold__t_plugFlowPipe1_vol__a_dynBal_Medium_specificInternalEnergy(threadData_t *threadData, modelica_metatype _state)
{
  pump__v3__basicCold__t_plugFlowPipe1_vol__a_dynBal_Medium_ThermodynamicState tmp1;
  modelica_metatype tmpMeta2;
  modelica_real tmp3;
  modelica_metatype tmpMeta4;
  modelica_real tmp5;
  modelica_real _u;
  modelica_metatype out_u;
  tmpMeta2 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_state), 2)));
  tmp3 = mmc_unbox_real(tmpMeta2);
  tmp1._p = tmp3;
  tmpMeta4 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_state), 3)));
  tmp5 = mmc_unbox_real(tmpMeta4);
  tmp1._T = tmp5;
  _u = omc_pump__v3__basicCold__t_plugFlowPipe1_vol__a_dynBal_Medium_specificInternalEnergy(threadData, tmp1);
  out_u = mmc_mk_rcon(_u);
  return out_u;
}

pump__v3__basicCold__t_plugFlowPipe1_vol__b_Medium_ThermodynamicState omc_pump__v3__basicCold__t_plugFlowPipe1_vol__b_Medium_ThermodynamicState(threadData_t *threadData, modelica_real omc_p, modelica_real omc_T)
{
  pump__v3__basicCold__t_plugFlowPipe1_vol__b_Medium_ThermodynamicState tmp1;
  tmp1._p = omc_p;
  tmp1._T = omc_T;
  return tmp1;
}

modelica_metatype boxptr_pump__v3__basicCold__t_plugFlowPipe1_vol__b_Medium_ThermodynamicState(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T)
{
  return mmc_mk_box3(3, &pump__v3__basicCold__t_plugFlowPipe1_vol__b_Medium_ThermodynamicState__desc, _p, _T);
}

DLLDirection
modelica_real omc_pump__v3__basicCold__t_plugFlowPipe1_vol__b_Medium_density(threadData_t *threadData, pump__v3__basicCold__t_plugFlowPipe1_vol__b_Medium_ThermodynamicState _state)
{
  modelica_real _d;
  _tailrecursive: OMC_LABEL_UNUSED
  // _d has no default value.
  _d = 995.586;
  _return: OMC_LABEL_UNUSED
  return _d;
}
modelica_metatype boxptr_pump__v3__basicCold__t_plugFlowPipe1_vol__b_Medium_density(threadData_t *threadData, modelica_metatype _state)
{
  pump__v3__basicCold__t_plugFlowPipe1_vol__b_Medium_ThermodynamicState tmp1;
  modelica_metatype tmpMeta2;
  modelica_real tmp3;
  modelica_metatype tmpMeta4;
  modelica_real tmp5;
  modelica_real _d;
  modelica_metatype out_d;
  tmpMeta2 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_state), 2)));
  tmp3 = mmc_unbox_real(tmpMeta2);
  tmp1._p = tmp3;
  tmpMeta4 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_state), 3)));
  tmp5 = mmc_unbox_real(tmpMeta4);
  tmp1._T = tmp5;
  _d = omc_pump__v3__basicCold__t_plugFlowPipe1_vol__b_Medium_density(threadData, tmp1);
  out_d = mmc_mk_rcon(_d);
  return out_d;
}

DLLDirection
modelica_real omc_pump__v3__basicCold__t_plugFlowPipe1_vol__b_Medium_temperature__phX(threadData_t *threadData, modelica_real _p, modelica_real _h, real_array _X)
{
  modelica_real _T;
  modelica_real tmp1;
  _tailrecursive: OMC_LABEL_UNUSED
  // _T has no default value.
  tmp1 = 4184.0;
  if (tmp1 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "h / 4184.0");}
  _T = 273.15 + (_h) / tmp1;
  _return: OMC_LABEL_UNUSED
  return _T;
}
modelica_metatype boxptr_pump__v3__basicCold__t_plugFlowPipe1_vol__b_Medium_temperature__phX(threadData_t *threadData, modelica_metatype _p, modelica_metatype _h, modelica_metatype _X)
{
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_real _T;
  modelica_metatype out_T;
  tmp1 = mmc_unbox_real(_p);
  tmp2 = mmc_unbox_real(_h);
  _T = omc_pump__v3__basicCold__t_plugFlowPipe1_vol__b_Medium_temperature__phX(threadData, tmp1, tmp2, *((base_array_t*)_X));
  out_T = mmc_mk_rcon(_T);
  return out_T;
}

pump__v3__basicCold__t_plugFlowPipe1_vol__b_dynBal_Medium_ThermodynamicState omc_pump__v3__basicCold__t_plugFlowPipe1_vol__b_dynBal_Medium_ThermodynamicState(threadData_t *threadData, modelica_real omc_p, modelica_real omc_T)
{
  pump__v3__basicCold__t_plugFlowPipe1_vol__b_dynBal_Medium_ThermodynamicState tmp1;
  tmp1._p = omc_p;
  tmp1._T = omc_T;
  return tmp1;
}

modelica_metatype boxptr_pump__v3__basicCold__t_plugFlowPipe1_vol__b_dynBal_Medium_ThermodynamicState(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T)
{
  return mmc_mk_box3(3, &pump__v3__basicCold__t_plugFlowPipe1_vol__b_dynBal_Medium_ThermodynamicState__desc, _p, _T);
}

DLLDirection
modelica_real omc_pump__v3__basicCold__t_plugFlowPipe1_vol__b_dynBal_Medium_density(threadData_t *threadData, pump__v3__basicCold__t_plugFlowPipe1_vol__b_dynBal_Medium_ThermodynamicState _state)
{
  modelica_real _d;
  _tailrecursive: OMC_LABEL_UNUSED
  // _d has no default value.
  _d = 995.586;
  _return: OMC_LABEL_UNUSED
  return _d;
}
modelica_metatype boxptr_pump__v3__basicCold__t_plugFlowPipe1_vol__b_dynBal_Medium_density(threadData_t *threadData, modelica_metatype _state)
{
  pump__v3__basicCold__t_plugFlowPipe1_vol__b_dynBal_Medium_ThermodynamicState tmp1;
  modelica_metatype tmpMeta2;
  modelica_real tmp3;
  modelica_metatype tmpMeta4;
  modelica_real tmp5;
  modelica_real _d;
  modelica_metatype out_d;
  tmpMeta2 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_state), 2)));
  tmp3 = mmc_unbox_real(tmpMeta2);
  tmp1._p = tmp3;
  tmpMeta4 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_state), 3)));
  tmp5 = mmc_unbox_real(tmpMeta4);
  tmp1._T = tmp5;
  _d = omc_pump__v3__basicCold__t_plugFlowPipe1_vol__b_dynBal_Medium_density(threadData, tmp1);
  out_d = mmc_mk_rcon(_d);
  return out_d;
}

DLLDirection
pump__v3__basicCold__t_plugFlowPipe1_vol__b_dynBal_Medium_ThermodynamicState omc_pump__v3__basicCold__t_plugFlowPipe1_vol__b_dynBal_Medium_setState__pTX(threadData_t *threadData, modelica_real _p, modelica_real _T, real_array _X)
{
  pump__v3__basicCold__t_plugFlowPipe1_vol__b_dynBal_Medium_ThermodynamicState _state;
  pump__v3__basicCold__t_plugFlowPipe1_vol__b_dynBal_Medium_ThermodynamicState tmp1;
  pump__v3__basicCold__t_plugFlowPipe1_vol__b_dynBal_Medium_ThermodynamicState tmp2;
  _tailrecursive: OMC_LABEL_UNUSED
  pump__v3__basicCold__t_plugFlowPipe1_vol__b_dynBal_Medium_ThermodynamicState_construct(threadData, _state); // _state has no default value.
  tmp2._p = _p;
  tmp2._T = _T;
  tmp1 = tmp2;
  pump__v3__basicCold__t_plugFlowPipe1_vol__b_dynBal_Medium_ThermodynamicState_copy(tmp1, _state);;
  _return: OMC_LABEL_UNUSED
  return _state;
}
modelica_metatype boxptr_pump__v3__basicCold__t_plugFlowPipe1_vol__b_dynBal_Medium_setState__pTX(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T, modelica_metatype _X)
{
  modelica_real tmp1;
  modelica_real tmp2;
  pump__v3__basicCold__t_plugFlowPipe1_vol__b_dynBal_Medium_ThermodynamicState _state;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype out_state;
  tmp1 = mmc_unbox_real(_p);
  tmp2 = mmc_unbox_real(_T);
  _state = omc_pump__v3__basicCold__t_plugFlowPipe1_vol__b_dynBal_Medium_setState__pTX(threadData, tmp1, tmp2, *((base_array_t*)_X));
  tmpMeta3 = mmc_mk_rcon(_state._p);
  tmpMeta4 = mmc_mk_rcon(_state._T);
  out_state = mmc_mk_box3(3, &pump__v3__basicCold__t_plugFlowPipe1_vol__b_dynBal_Medium_ThermodynamicState__desc, tmpMeta3, tmpMeta4);
  return out_state;
}

DLLDirection
modelica_real omc_pump__v3__basicCold__t_plugFlowPipe1_vol__b_dynBal_Medium_specificEnthalpy__pTX(threadData_t *threadData, modelica_real _p, modelica_real _T, real_array _X)
{
  modelica_real _h;
  _tailrecursive: OMC_LABEL_UNUSED
  // _h has no default value.
  _h = (4184.0) * (_T - 273.15);
  _return: OMC_LABEL_UNUSED
  return _h;
}
modelica_metatype boxptr_pump__v3__basicCold__t_plugFlowPipe1_vol__b_dynBal_Medium_specificEnthalpy__pTX(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T, modelica_metatype _X)
{
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_real _h;
  modelica_metatype out_h;
  tmp1 = mmc_unbox_real(_p);
  tmp2 = mmc_unbox_real(_T);
  _h = omc_pump__v3__basicCold__t_plugFlowPipe1_vol__b_dynBal_Medium_specificEnthalpy__pTX(threadData, tmp1, tmp2, *((base_array_t*)_X));
  out_h = mmc_mk_rcon(_h);
  return out_h;
}

DLLDirection
modelica_real omc_pump__v3__basicCold__t_plugFlowPipe1_vol__b_dynBal_Medium_specificInternalEnergy(threadData_t *threadData, pump__v3__basicCold__t_plugFlowPipe1_vol__b_dynBal_Medium_ThermodynamicState _state)
{
  modelica_real _u;
  _tailrecursive: OMC_LABEL_UNUSED
  // _u has no default value.
  _u = (4184.0) * (_state._T - 273.15);
  _return: OMC_LABEL_UNUSED
  return _u;
}
modelica_metatype boxptr_pump__v3__basicCold__t_plugFlowPipe1_vol__b_dynBal_Medium_specificInternalEnergy(threadData_t *threadData, modelica_metatype _state)
{
  pump__v3__basicCold__t_plugFlowPipe1_vol__b_dynBal_Medium_ThermodynamicState tmp1;
  modelica_metatype tmpMeta2;
  modelica_real tmp3;
  modelica_metatype tmpMeta4;
  modelica_real tmp5;
  modelica_real _u;
  modelica_metatype out_u;
  tmpMeta2 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_state), 2)));
  tmp3 = mmc_unbox_real(tmpMeta2);
  tmp1._p = tmp3;
  tmpMeta4 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_state), 3)));
  tmp5 = mmc_unbox_real(tmpMeta4);
  tmp1._T = tmp5;
  _u = omc_pump__v3__basicCold__t_plugFlowPipe1_vol__b_dynBal_Medium_specificInternalEnergy(threadData, tmp1);
  out_u = mmc_mk_rcon(_u);
  return out_u;
}

pump__v3__basicCold__t_plugFlowPipe2_Medium_ThermodynamicState omc_pump__v3__basicCold__t_plugFlowPipe2_Medium_ThermodynamicState(threadData_t *threadData, modelica_real omc_p, modelica_real omc_T)
{
  pump__v3__basicCold__t_plugFlowPipe2_Medium_ThermodynamicState tmp1;
  tmp1._p = omc_p;
  tmp1._T = omc_T;
  return tmp1;
}

modelica_metatype boxptr_pump__v3__basicCold__t_plugFlowPipe2_Medium_ThermodynamicState(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T)
{
  return mmc_mk_box3(3, &pump__v3__basicCold__t_plugFlowPipe2_Medium_ThermodynamicState__desc, _p, _T);
}

DLLDirection
modelica_real omc_pump__v3__basicCold__t_plugFlowPipe2_Medium_specificHeatCapacityCp(threadData_t *threadData, pump__v3__basicCold__t_plugFlowPipe2_Medium_ThermodynamicState _state)
{
  modelica_real _cp;
  _tailrecursive: OMC_LABEL_UNUSED
  // _cp has no default value.
  _cp = 4184.0;
  _return: OMC_LABEL_UNUSED
  return _cp;
}
modelica_metatype boxptr_pump__v3__basicCold__t_plugFlowPipe2_Medium_specificHeatCapacityCp(threadData_t *threadData, modelica_metatype _state)
{
  pump__v3__basicCold__t_plugFlowPipe2_Medium_ThermodynamicState tmp1;
  modelica_metatype tmpMeta2;
  modelica_real tmp3;
  modelica_metatype tmpMeta4;
  modelica_real tmp5;
  modelica_real _cp;
  modelica_metatype out_cp;
  tmpMeta2 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_state), 2)));
  tmp3 = mmc_unbox_real(tmpMeta2);
  tmp1._p = tmp3;
  tmpMeta4 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_state), 3)));
  tmp5 = mmc_unbox_real(tmpMeta4);
  tmp1._T = tmp5;
  _cp = omc_pump__v3__basicCold__t_plugFlowPipe2_Medium_specificHeatCapacityCp(threadData, tmp1);
  out_cp = mmc_mk_rcon(_cp);
  return out_cp;
}

pump__v3__basicCold__t_plugFlowPipe2_del_Medium_ThermodynamicState omc_pump__v3__basicCold__t_plugFlowPipe2_del_Medium_ThermodynamicState(threadData_t *threadData, modelica_real omc_p, modelica_real omc_T)
{
  pump__v3__basicCold__t_plugFlowPipe2_del_Medium_ThermodynamicState tmp1;
  tmp1._p = omc_p;
  tmp1._T = omc_T;
  return tmp1;
}

modelica_metatype boxptr_pump__v3__basicCold__t_plugFlowPipe2_del_Medium_ThermodynamicState(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T)
{
  return mmc_mk_box3(3, &pump__v3__basicCold__t_plugFlowPipe2_del_Medium_ThermodynamicState__desc, _p, _T);
}

DLLDirection
modelica_real omc_pump__v3__basicCold__t_plugFlowPipe2_del_Medium_density(threadData_t *threadData, pump__v3__basicCold__t_plugFlowPipe2_del_Medium_ThermodynamicState _state)
{
  modelica_real _d;
  _tailrecursive: OMC_LABEL_UNUSED
  // _d has no default value.
  _d = 995.586;
  _return: OMC_LABEL_UNUSED
  return _d;
}
modelica_metatype boxptr_pump__v3__basicCold__t_plugFlowPipe2_del_Medium_density(threadData_t *threadData, modelica_metatype _state)
{
  pump__v3__basicCold__t_plugFlowPipe2_del_Medium_ThermodynamicState tmp1;
  modelica_metatype tmpMeta2;
  modelica_real tmp3;
  modelica_metatype tmpMeta4;
  modelica_real tmp5;
  modelica_real _d;
  modelica_metatype out_d;
  tmpMeta2 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_state), 2)));
  tmp3 = mmc_unbox_real(tmpMeta2);
  tmp1._p = tmp3;
  tmpMeta4 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_state), 3)));
  tmp5 = mmc_unbox_real(tmpMeta4);
  tmp1._T = tmp5;
  _d = omc_pump__v3__basicCold__t_plugFlowPipe2_del_Medium_density(threadData, tmp1);
  out_d = mmc_mk_rcon(_d);
  return out_d;
}

DLLDirection
pump__v3__basicCold__t_plugFlowPipe2_del_Medium_ThermodynamicState omc_pump__v3__basicCold__t_plugFlowPipe2_del_Medium_setState__pTX(threadData_t *threadData, modelica_real _p, modelica_real _T, real_array _X)
{
  pump__v3__basicCold__t_plugFlowPipe2_del_Medium_ThermodynamicState _state;
  pump__v3__basicCold__t_plugFlowPipe2_del_Medium_ThermodynamicState tmp1;
  pump__v3__basicCold__t_plugFlowPipe2_del_Medium_ThermodynamicState tmp2;
  _tailrecursive: OMC_LABEL_UNUSED
  pump__v3__basicCold__t_plugFlowPipe2_del_Medium_ThermodynamicState_construct(threadData, _state); // _state has no default value.
  tmp2._p = _p;
  tmp2._T = _T;
  tmp1 = tmp2;
  pump__v3__basicCold__t_plugFlowPipe2_del_Medium_ThermodynamicState_copy(tmp1, _state);;
  _return: OMC_LABEL_UNUSED
  return _state;
}
modelica_metatype boxptr_pump__v3__basicCold__t_plugFlowPipe2_del_Medium_setState__pTX(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T, modelica_metatype _X)
{
  modelica_real tmp1;
  modelica_real tmp2;
  pump__v3__basicCold__t_plugFlowPipe2_del_Medium_ThermodynamicState _state;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype out_state;
  tmp1 = mmc_unbox_real(_p);
  tmp2 = mmc_unbox_real(_T);
  _state = omc_pump__v3__basicCold__t_plugFlowPipe2_del_Medium_setState__pTX(threadData, tmp1, tmp2, *((base_array_t*)_X));
  tmpMeta3 = mmc_mk_rcon(_state._p);
  tmpMeta4 = mmc_mk_rcon(_state._T);
  out_state = mmc_mk_box3(3, &pump__v3__basicCold__t_plugFlowPipe2_del_Medium_ThermodynamicState__desc, tmpMeta3, tmpMeta4);
  return out_state;
}

DLLDirection
pump__v3__basicCold__t_plugFlowPipe2_del_Medium_ThermodynamicState omc_pump__v3__basicCold__t_plugFlowPipe2_del_Medium_setState__phX(threadData_t *threadData, modelica_real _p, modelica_real _h, real_array _X)
{
  pump__v3__basicCold__t_plugFlowPipe2_del_Medium_ThermodynamicState _state;
  pump__v3__basicCold__t_plugFlowPipe2_del_Medium_ThermodynamicState tmp1;
  pump__v3__basicCold__t_plugFlowPipe2_del_Medium_ThermodynamicState tmp2;
  modelica_real tmp3;
  _tailrecursive: OMC_LABEL_UNUSED
  pump__v3__basicCold__t_plugFlowPipe2_del_Medium_ThermodynamicState_construct(threadData, _state); // _state has no default value.
  tmp3 = 4184.0;
  if (tmp3 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "h / 4184.0");}
  tmp2._p = _p;
  tmp2._T = 273.15 + (_h) / tmp3;
  tmp1 = tmp2;
  pump__v3__basicCold__t_plugFlowPipe2_del_Medium_ThermodynamicState_copy(tmp1, _state);;
  _return: OMC_LABEL_UNUSED
  return _state;
}
modelica_metatype boxptr_pump__v3__basicCold__t_plugFlowPipe2_del_Medium_setState__phX(threadData_t *threadData, modelica_metatype _p, modelica_metatype _h, modelica_metatype _X)
{
  modelica_real tmp1;
  modelica_real tmp2;
  pump__v3__basicCold__t_plugFlowPipe2_del_Medium_ThermodynamicState _state;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype out_state;
  tmp1 = mmc_unbox_real(_p);
  tmp2 = mmc_unbox_real(_h);
  _state = omc_pump__v3__basicCold__t_plugFlowPipe2_del_Medium_setState__phX(threadData, tmp1, tmp2, *((base_array_t*)_X));
  tmpMeta3 = mmc_mk_rcon(_state._p);
  tmpMeta4 = mmc_mk_rcon(_state._T);
  out_state = mmc_mk_box3(3, &pump__v3__basicCold__t_plugFlowPipe2_del_Medium_ThermodynamicState__desc, tmpMeta3, tmpMeta4);
  return out_state;
}

DLLDirection
modelica_real omc_pump__v3__basicCold__t_plugFlowPipe2_del_Medium_specificEnthalpy(threadData_t *threadData, pump__v3__basicCold__t_plugFlowPipe2_del_Medium_ThermodynamicState _state)
{
  modelica_real _h;
  _tailrecursive: OMC_LABEL_UNUSED
  // _h has no default value.
  _h = (4184.0) * (_state._T - 273.15);
  _return: OMC_LABEL_UNUSED
  return _h;
}
modelica_metatype boxptr_pump__v3__basicCold__t_plugFlowPipe2_del_Medium_specificEnthalpy(threadData_t *threadData, modelica_metatype _state)
{
  pump__v3__basicCold__t_plugFlowPipe2_del_Medium_ThermodynamicState tmp1;
  modelica_metatype tmpMeta2;
  modelica_real tmp3;
  modelica_metatype tmpMeta4;
  modelica_real tmp5;
  modelica_real _h;
  modelica_metatype out_h;
  tmpMeta2 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_state), 2)));
  tmp3 = mmc_unbox_real(tmpMeta2);
  tmp1._p = tmp3;
  tmpMeta4 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_state), 3)));
  tmp5 = mmc_unbox_real(tmpMeta4);
  tmp1._T = tmp5;
  _h = omc_pump__v3__basicCold__t_plugFlowPipe2_del_Medium_specificEnthalpy(threadData, tmp1);
  out_h = mmc_mk_rcon(_h);
  return out_h;
}

pump__v3__basicCold__t_plugFlowPipe2_heaLos__a_Medium_ThermodynamicState omc_pump__v3__basicCold__t_plugFlowPipe2_heaLos__a_Medium_ThermodynamicState(threadData_t *threadData, modelica_real omc_p, modelica_real omc_T)
{
  pump__v3__basicCold__t_plugFlowPipe2_heaLos__a_Medium_ThermodynamicState tmp1;
  tmp1._p = omc_p;
  tmp1._T = omc_T;
  return tmp1;
}

modelica_metatype boxptr_pump__v3__basicCold__t_plugFlowPipe2_heaLos__a_Medium_ThermodynamicState(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T)
{
  return mmc_mk_box3(3, &pump__v3__basicCold__t_plugFlowPipe2_heaLos__a_Medium_ThermodynamicState__desc, _p, _T);
}

DLLDirection
pump__v3__basicCold__t_plugFlowPipe2_heaLos__a_Medium_ThermodynamicState omc_pump__v3__basicCold__t_plugFlowPipe2_heaLos__a_Medium_setState__pTX(threadData_t *threadData, modelica_real _p, modelica_real _T, real_array _X)
{
  pump__v3__basicCold__t_plugFlowPipe2_heaLos__a_Medium_ThermodynamicState _state;
  pump__v3__basicCold__t_plugFlowPipe2_heaLos__a_Medium_ThermodynamicState tmp1;
  pump__v3__basicCold__t_plugFlowPipe2_heaLos__a_Medium_ThermodynamicState tmp2;
  _tailrecursive: OMC_LABEL_UNUSED
  pump__v3__basicCold__t_plugFlowPipe2_heaLos__a_Medium_ThermodynamicState_construct(threadData, _state); // _state has no default value.
  tmp2._p = _p;
  tmp2._T = _T;
  tmp1 = tmp2;
  pump__v3__basicCold__t_plugFlowPipe2_heaLos__a_Medium_ThermodynamicState_copy(tmp1, _state);;
  _return: OMC_LABEL_UNUSED
  return _state;
}
modelica_metatype boxptr_pump__v3__basicCold__t_plugFlowPipe2_heaLos__a_Medium_setState__pTX(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T, modelica_metatype _X)
{
  modelica_real tmp1;
  modelica_real tmp2;
  pump__v3__basicCold__t_plugFlowPipe2_heaLos__a_Medium_ThermodynamicState _state;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype out_state;
  tmp1 = mmc_unbox_real(_p);
  tmp2 = mmc_unbox_real(_T);
  _state = omc_pump__v3__basicCold__t_plugFlowPipe2_heaLos__a_Medium_setState__pTX(threadData, tmp1, tmp2, *((base_array_t*)_X));
  tmpMeta3 = mmc_mk_rcon(_state._p);
  tmpMeta4 = mmc_mk_rcon(_state._T);
  out_state = mmc_mk_box3(3, &pump__v3__basicCold__t_plugFlowPipe2_heaLos__a_Medium_ThermodynamicState__desc, tmpMeta3, tmpMeta4);
  return out_state;
}

DLLDirection
pump__v3__basicCold__t_plugFlowPipe2_heaLos__a_Medium_ThermodynamicState omc_pump__v3__basicCold__t_plugFlowPipe2_heaLos__a_Medium_setState__phX(threadData_t *threadData, modelica_real _p, modelica_real _h, real_array _X)
{
  pump__v3__basicCold__t_plugFlowPipe2_heaLos__a_Medium_ThermodynamicState _state;
  pump__v3__basicCold__t_plugFlowPipe2_heaLos__a_Medium_ThermodynamicState tmp1;
  pump__v3__basicCold__t_plugFlowPipe2_heaLos__a_Medium_ThermodynamicState tmp2;
  modelica_real tmp3;
  _tailrecursive: OMC_LABEL_UNUSED
  pump__v3__basicCold__t_plugFlowPipe2_heaLos__a_Medium_ThermodynamicState_construct(threadData, _state); // _state has no default value.
  tmp3 = 4184.0;
  if (tmp3 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "h / 4184.0");}
  tmp2._p = _p;
  tmp2._T = 273.15 + (_h) / tmp3;
  tmp1 = tmp2;
  pump__v3__basicCold__t_plugFlowPipe2_heaLos__a_Medium_ThermodynamicState_copy(tmp1, _state);;
  _return: OMC_LABEL_UNUSED
  return _state;
}
modelica_metatype boxptr_pump__v3__basicCold__t_plugFlowPipe2_heaLos__a_Medium_setState__phX(threadData_t *threadData, modelica_metatype _p, modelica_metatype _h, modelica_metatype _X)
{
  modelica_real tmp1;
  modelica_real tmp2;
  pump__v3__basicCold__t_plugFlowPipe2_heaLos__a_Medium_ThermodynamicState _state;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype out_state;
  tmp1 = mmc_unbox_real(_p);
  tmp2 = mmc_unbox_real(_h);
  _state = omc_pump__v3__basicCold__t_plugFlowPipe2_heaLos__a_Medium_setState__phX(threadData, tmp1, tmp2, *((base_array_t*)_X));
  tmpMeta3 = mmc_mk_rcon(_state._p);
  tmpMeta4 = mmc_mk_rcon(_state._T);
  out_state = mmc_mk_box3(3, &pump__v3__basicCold__t_plugFlowPipe2_heaLos__a_Medium_ThermodynamicState__desc, tmpMeta3, tmpMeta4);
  return out_state;
}

DLLDirection
modelica_real omc_pump__v3__basicCold__t_plugFlowPipe2_heaLos__a_Medium_specificEnthalpy(threadData_t *threadData, pump__v3__basicCold__t_plugFlowPipe2_heaLos__a_Medium_ThermodynamicState _state)
{
  modelica_real _h;
  _tailrecursive: OMC_LABEL_UNUSED
  // _h has no default value.
  _h = (4184.0) * (_state._T - 273.15);
  _return: OMC_LABEL_UNUSED
  return _h;
}
modelica_metatype boxptr_pump__v3__basicCold__t_plugFlowPipe2_heaLos__a_Medium_specificEnthalpy(threadData_t *threadData, modelica_metatype _state)
{
  pump__v3__basicCold__t_plugFlowPipe2_heaLos__a_Medium_ThermodynamicState tmp1;
  modelica_metatype tmpMeta2;
  modelica_real tmp3;
  modelica_metatype tmpMeta4;
  modelica_real tmp5;
  modelica_real _h;
  modelica_metatype out_h;
  tmpMeta2 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_state), 2)));
  tmp3 = mmc_unbox_real(tmpMeta2);
  tmp1._p = tmp3;
  tmpMeta4 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_state), 3)));
  tmp5 = mmc_unbox_real(tmpMeta4);
  tmp1._T = tmp5;
  _h = omc_pump__v3__basicCold__t_plugFlowPipe2_heaLos__a_Medium_specificEnthalpy(threadData, tmp1);
  out_h = mmc_mk_rcon(_h);
  return out_h;
}

DLLDirection
modelica_real omc_pump__v3__basicCold__t_plugFlowPipe2_heaLos__a_Medium_specificHeatCapacityCp(threadData_t *threadData, pump__v3__basicCold__t_plugFlowPipe2_heaLos__a_Medium_ThermodynamicState _state)
{
  modelica_real _cp;
  _tailrecursive: OMC_LABEL_UNUSED
  // _cp has no default value.
  _cp = 4184.0;
  _return: OMC_LABEL_UNUSED
  return _cp;
}
modelica_metatype boxptr_pump__v3__basicCold__t_plugFlowPipe2_heaLos__a_Medium_specificHeatCapacityCp(threadData_t *threadData, modelica_metatype _state)
{
  pump__v3__basicCold__t_plugFlowPipe2_heaLos__a_Medium_ThermodynamicState tmp1;
  modelica_metatype tmpMeta2;
  modelica_real tmp3;
  modelica_metatype tmpMeta4;
  modelica_real tmp5;
  modelica_real _cp;
  modelica_metatype out_cp;
  tmpMeta2 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_state), 2)));
  tmp3 = mmc_unbox_real(tmpMeta2);
  tmp1._p = tmp3;
  tmpMeta4 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_state), 3)));
  tmp5 = mmc_unbox_real(tmpMeta4);
  tmp1._T = tmp5;
  _cp = omc_pump__v3__basicCold__t_plugFlowPipe2_heaLos__a_Medium_specificHeatCapacityCp(threadData, tmp1);
  out_cp = mmc_mk_rcon(_cp);
  return out_cp;
}

DLLDirection
modelica_real omc_pump__v3__basicCold__t_plugFlowPipe2_heaLos__a_Medium_temperature(threadData_t *threadData, pump__v3__basicCold__t_plugFlowPipe2_heaLos__a_Medium_ThermodynamicState _state)
{
  modelica_real _T;
  _tailrecursive: OMC_LABEL_UNUSED
  // _T has no default value.
  _T = _state._T;
  _return: OMC_LABEL_UNUSED
  return _T;
}
modelica_metatype boxptr_pump__v3__basicCold__t_plugFlowPipe2_heaLos__a_Medium_temperature(threadData_t *threadData, modelica_metatype _state)
{
  pump__v3__basicCold__t_plugFlowPipe2_heaLos__a_Medium_ThermodynamicState tmp1;
  modelica_metatype tmpMeta2;
  modelica_real tmp3;
  modelica_metatype tmpMeta4;
  modelica_real tmp5;
  modelica_real _T;
  modelica_metatype out_T;
  tmpMeta2 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_state), 2)));
  tmp3 = mmc_unbox_real(tmpMeta2);
  tmp1._p = tmp3;
  tmpMeta4 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_state), 3)));
  tmp5 = mmc_unbox_real(tmpMeta4);
  tmp1._T = tmp5;
  _T = omc_pump__v3__basicCold__t_plugFlowPipe2_heaLos__a_Medium_temperature(threadData, tmp1);
  out_T = mmc_mk_rcon(_T);
  return out_T;
}

pump__v3__basicCold__t_plugFlowPipe2_heaLos__b_Medium_ThermodynamicState omc_pump__v3__basicCold__t_plugFlowPipe2_heaLos__b_Medium_ThermodynamicState(threadData_t *threadData, modelica_real omc_p, modelica_real omc_T)
{
  pump__v3__basicCold__t_plugFlowPipe2_heaLos__b_Medium_ThermodynamicState tmp1;
  tmp1._p = omc_p;
  tmp1._T = omc_T;
  return tmp1;
}

modelica_metatype boxptr_pump__v3__basicCold__t_plugFlowPipe2_heaLos__b_Medium_ThermodynamicState(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T)
{
  return mmc_mk_box3(3, &pump__v3__basicCold__t_plugFlowPipe2_heaLos__b_Medium_ThermodynamicState__desc, _p, _T);
}

DLLDirection
pump__v3__basicCold__t_plugFlowPipe2_heaLos__b_Medium_ThermodynamicState omc_pump__v3__basicCold__t_plugFlowPipe2_heaLos__b_Medium_setState__pTX(threadData_t *threadData, modelica_real _p, modelica_real _T, real_array _X)
{
  pump__v3__basicCold__t_plugFlowPipe2_heaLos__b_Medium_ThermodynamicState _state;
  pump__v3__basicCold__t_plugFlowPipe2_heaLos__b_Medium_ThermodynamicState tmp1;
  pump__v3__basicCold__t_plugFlowPipe2_heaLos__b_Medium_ThermodynamicState tmp2;
  _tailrecursive: OMC_LABEL_UNUSED
  pump__v3__basicCold__t_plugFlowPipe2_heaLos__b_Medium_ThermodynamicState_construct(threadData, _state); // _state has no default value.
  tmp2._p = _p;
  tmp2._T = _T;
  tmp1 = tmp2;
  pump__v3__basicCold__t_plugFlowPipe2_heaLos__b_Medium_ThermodynamicState_copy(tmp1, _state);;
  _return: OMC_LABEL_UNUSED
  return _state;
}
modelica_metatype boxptr_pump__v3__basicCold__t_plugFlowPipe2_heaLos__b_Medium_setState__pTX(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T, modelica_metatype _X)
{
  modelica_real tmp1;
  modelica_real tmp2;
  pump__v3__basicCold__t_plugFlowPipe2_heaLos__b_Medium_ThermodynamicState _state;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype out_state;
  tmp1 = mmc_unbox_real(_p);
  tmp2 = mmc_unbox_real(_T);
  _state = omc_pump__v3__basicCold__t_plugFlowPipe2_heaLos__b_Medium_setState__pTX(threadData, tmp1, tmp2, *((base_array_t*)_X));
  tmpMeta3 = mmc_mk_rcon(_state._p);
  tmpMeta4 = mmc_mk_rcon(_state._T);
  out_state = mmc_mk_box3(3, &pump__v3__basicCold__t_plugFlowPipe2_heaLos__b_Medium_ThermodynamicState__desc, tmpMeta3, tmpMeta4);
  return out_state;
}

DLLDirection
pump__v3__basicCold__t_plugFlowPipe2_heaLos__b_Medium_ThermodynamicState omc_pump__v3__basicCold__t_plugFlowPipe2_heaLos__b_Medium_setState__phX(threadData_t *threadData, modelica_real _p, modelica_real _h, real_array _X)
{
  pump__v3__basicCold__t_plugFlowPipe2_heaLos__b_Medium_ThermodynamicState _state;
  pump__v3__basicCold__t_plugFlowPipe2_heaLos__b_Medium_ThermodynamicState tmp1;
  pump__v3__basicCold__t_plugFlowPipe2_heaLos__b_Medium_ThermodynamicState tmp2;
  modelica_real tmp3;
  _tailrecursive: OMC_LABEL_UNUSED
  pump__v3__basicCold__t_plugFlowPipe2_heaLos__b_Medium_ThermodynamicState_construct(threadData, _state); // _state has no default value.
  tmp3 = 4184.0;
  if (tmp3 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "h / 4184.0");}
  tmp2._p = _p;
  tmp2._T = 273.15 + (_h) / tmp3;
  tmp1 = tmp2;
  pump__v3__basicCold__t_plugFlowPipe2_heaLos__b_Medium_ThermodynamicState_copy(tmp1, _state);;
  _return: OMC_LABEL_UNUSED
  return _state;
}
modelica_metatype boxptr_pump__v3__basicCold__t_plugFlowPipe2_heaLos__b_Medium_setState__phX(threadData_t *threadData, modelica_metatype _p, modelica_metatype _h, modelica_metatype _X)
{
  modelica_real tmp1;
  modelica_real tmp2;
  pump__v3__basicCold__t_plugFlowPipe2_heaLos__b_Medium_ThermodynamicState _state;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype out_state;
  tmp1 = mmc_unbox_real(_p);
  tmp2 = mmc_unbox_real(_h);
  _state = omc_pump__v3__basicCold__t_plugFlowPipe2_heaLos__b_Medium_setState__phX(threadData, tmp1, tmp2, *((base_array_t*)_X));
  tmpMeta3 = mmc_mk_rcon(_state._p);
  tmpMeta4 = mmc_mk_rcon(_state._T);
  out_state = mmc_mk_box3(3, &pump__v3__basicCold__t_plugFlowPipe2_heaLos__b_Medium_ThermodynamicState__desc, tmpMeta3, tmpMeta4);
  return out_state;
}

DLLDirection
modelica_real omc_pump__v3__basicCold__t_plugFlowPipe2_heaLos__b_Medium_specificEnthalpy(threadData_t *threadData, pump__v3__basicCold__t_plugFlowPipe2_heaLos__b_Medium_ThermodynamicState _state)
{
  modelica_real _h;
  _tailrecursive: OMC_LABEL_UNUSED
  // _h has no default value.
  _h = (4184.0) * (_state._T - 273.15);
  _return: OMC_LABEL_UNUSED
  return _h;
}
modelica_metatype boxptr_pump__v3__basicCold__t_plugFlowPipe2_heaLos__b_Medium_specificEnthalpy(threadData_t *threadData, modelica_metatype _state)
{
  pump__v3__basicCold__t_plugFlowPipe2_heaLos__b_Medium_ThermodynamicState tmp1;
  modelica_metatype tmpMeta2;
  modelica_real tmp3;
  modelica_metatype tmpMeta4;
  modelica_real tmp5;
  modelica_real _h;
  modelica_metatype out_h;
  tmpMeta2 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_state), 2)));
  tmp3 = mmc_unbox_real(tmpMeta2);
  tmp1._p = tmp3;
  tmpMeta4 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_state), 3)));
  tmp5 = mmc_unbox_real(tmpMeta4);
  tmp1._T = tmp5;
  _h = omc_pump__v3__basicCold__t_plugFlowPipe2_heaLos__b_Medium_specificEnthalpy(threadData, tmp1);
  out_h = mmc_mk_rcon(_h);
  return out_h;
}

DLLDirection
modelica_real omc_pump__v3__basicCold__t_plugFlowPipe2_heaLos__b_Medium_specificHeatCapacityCp(threadData_t *threadData, pump__v3__basicCold__t_plugFlowPipe2_heaLos__b_Medium_ThermodynamicState _state)
{
  modelica_real _cp;
  _tailrecursive: OMC_LABEL_UNUSED
  // _cp has no default value.
  _cp = 4184.0;
  _return: OMC_LABEL_UNUSED
  return _cp;
}
modelica_metatype boxptr_pump__v3__basicCold__t_plugFlowPipe2_heaLos__b_Medium_specificHeatCapacityCp(threadData_t *threadData, modelica_metatype _state)
{
  pump__v3__basicCold__t_plugFlowPipe2_heaLos__b_Medium_ThermodynamicState tmp1;
  modelica_metatype tmpMeta2;
  modelica_real tmp3;
  modelica_metatype tmpMeta4;
  modelica_real tmp5;
  modelica_real _cp;
  modelica_metatype out_cp;
  tmpMeta2 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_state), 2)));
  tmp3 = mmc_unbox_real(tmpMeta2);
  tmp1._p = tmp3;
  tmpMeta4 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_state), 3)));
  tmp5 = mmc_unbox_real(tmpMeta4);
  tmp1._T = tmp5;
  _cp = omc_pump__v3__basicCold__t_plugFlowPipe2_heaLos__b_Medium_specificHeatCapacityCp(threadData, tmp1);
  out_cp = mmc_mk_rcon(_cp);
  return out_cp;
}

DLLDirection
modelica_real omc_pump__v3__basicCold__t_plugFlowPipe2_heaLos__b_Medium_temperature(threadData_t *threadData, pump__v3__basicCold__t_plugFlowPipe2_heaLos__b_Medium_ThermodynamicState _state)
{
  modelica_real _T;
  _tailrecursive: OMC_LABEL_UNUSED
  // _T has no default value.
  _T = _state._T;
  _return: OMC_LABEL_UNUSED
  return _T;
}
modelica_metatype boxptr_pump__v3__basicCold__t_plugFlowPipe2_heaLos__b_Medium_temperature(threadData_t *threadData, modelica_metatype _state)
{
  pump__v3__basicCold__t_plugFlowPipe2_heaLos__b_Medium_ThermodynamicState tmp1;
  modelica_metatype tmpMeta2;
  modelica_real tmp3;
  modelica_metatype tmpMeta4;
  modelica_real tmp5;
  modelica_real _T;
  modelica_metatype out_T;
  tmpMeta2 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_state), 2)));
  tmp3 = mmc_unbox_real(tmpMeta2);
  tmp1._p = tmp3;
  tmpMeta4 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_state), 3)));
  tmp5 = mmc_unbox_real(tmpMeta4);
  tmp1._T = tmp5;
  _T = omc_pump__v3__basicCold__t_plugFlowPipe2_heaLos__b_Medium_temperature(threadData, tmp1);
  out_T = mmc_mk_rcon(_T);
  return out_T;
}

pump__v3__basicCold__t_plugFlowPipe2_res_Medium_ThermodynamicState omc_pump__v3__basicCold__t_plugFlowPipe2_res_Medium_ThermodynamicState(threadData_t *threadData, modelica_real omc_p, modelica_real omc_T)
{
  pump__v3__basicCold__t_plugFlowPipe2_res_Medium_ThermodynamicState tmp1;
  tmp1._p = omc_p;
  tmp1._T = omc_T;
  return tmp1;
}

modelica_metatype boxptr_pump__v3__basicCold__t_plugFlowPipe2_res_Medium_ThermodynamicState(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T)
{
  return mmc_mk_box3(3, &pump__v3__basicCold__t_plugFlowPipe2_res_Medium_ThermodynamicState__desc, _p, _T);
}

pump__v3__basicCold__t_plugFlowPipe2_vol__a_Medium_ThermodynamicState omc_pump__v3__basicCold__t_plugFlowPipe2_vol__a_Medium_ThermodynamicState(threadData_t *threadData, modelica_real omc_p, modelica_real omc_T)
{
  pump__v3__basicCold__t_plugFlowPipe2_vol__a_Medium_ThermodynamicState tmp1;
  tmp1._p = omc_p;
  tmp1._T = omc_T;
  return tmp1;
}

modelica_metatype boxptr_pump__v3__basicCold__t_plugFlowPipe2_vol__a_Medium_ThermodynamicState(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T)
{
  return mmc_mk_box3(3, &pump__v3__basicCold__t_plugFlowPipe2_vol__a_Medium_ThermodynamicState__desc, _p, _T);
}

DLLDirection
modelica_real omc_pump__v3__basicCold__t_plugFlowPipe2_vol__a_Medium_density(threadData_t *threadData, pump__v3__basicCold__t_plugFlowPipe2_vol__a_Medium_ThermodynamicState _state)
{
  modelica_real _d;
  _tailrecursive: OMC_LABEL_UNUSED
  // _d has no default value.
  _d = 995.586;
  _return: OMC_LABEL_UNUSED
  return _d;
}
modelica_metatype boxptr_pump__v3__basicCold__t_plugFlowPipe2_vol__a_Medium_density(threadData_t *threadData, modelica_metatype _state)
{
  pump__v3__basicCold__t_plugFlowPipe2_vol__a_Medium_ThermodynamicState tmp1;
  modelica_metatype tmpMeta2;
  modelica_real tmp3;
  modelica_metatype tmpMeta4;
  modelica_real tmp5;
  modelica_real _d;
  modelica_metatype out_d;
  tmpMeta2 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_state), 2)));
  tmp3 = mmc_unbox_real(tmpMeta2);
  tmp1._p = tmp3;
  tmpMeta4 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_state), 3)));
  tmp5 = mmc_unbox_real(tmpMeta4);
  tmp1._T = tmp5;
  _d = omc_pump__v3__basicCold__t_plugFlowPipe2_vol__a_Medium_density(threadData, tmp1);
  out_d = mmc_mk_rcon(_d);
  return out_d;
}

DLLDirection
modelica_real omc_pump__v3__basicCold__t_plugFlowPipe2_vol__a_Medium_temperature__phX(threadData_t *threadData, modelica_real _p, modelica_real _h, real_array _X)
{
  modelica_real _T;
  modelica_real tmp1;
  _tailrecursive: OMC_LABEL_UNUSED
  // _T has no default value.
  tmp1 = 4184.0;
  if (tmp1 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "h / 4184.0");}
  _T = 273.15 + (_h) / tmp1;
  _return: OMC_LABEL_UNUSED
  return _T;
}
modelica_metatype boxptr_pump__v3__basicCold__t_plugFlowPipe2_vol__a_Medium_temperature__phX(threadData_t *threadData, modelica_metatype _p, modelica_metatype _h, modelica_metatype _X)
{
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_real _T;
  modelica_metatype out_T;
  tmp1 = mmc_unbox_real(_p);
  tmp2 = mmc_unbox_real(_h);
  _T = omc_pump__v3__basicCold__t_plugFlowPipe2_vol__a_Medium_temperature__phX(threadData, tmp1, tmp2, *((base_array_t*)_X));
  out_T = mmc_mk_rcon(_T);
  return out_T;
}

pump__v3__basicCold__t_plugFlowPipe2_vol__a_dynBal_Medium_ThermodynamicState omc_pump__v3__basicCold__t_plugFlowPipe2_vol__a_dynBal_Medium_ThermodynamicState(threadData_t *threadData, modelica_real omc_p, modelica_real omc_T)
{
  pump__v3__basicCold__t_plugFlowPipe2_vol__a_dynBal_Medium_ThermodynamicState tmp1;
  tmp1._p = omc_p;
  tmp1._T = omc_T;
  return tmp1;
}

modelica_metatype boxptr_pump__v3__basicCold__t_plugFlowPipe2_vol__a_dynBal_Medium_ThermodynamicState(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T)
{
  return mmc_mk_box3(3, &pump__v3__basicCold__t_plugFlowPipe2_vol__a_dynBal_Medium_ThermodynamicState__desc, _p, _T);
}

DLLDirection
modelica_real omc_pump__v3__basicCold__t_plugFlowPipe2_vol__a_dynBal_Medium_density(threadData_t *threadData, pump__v3__basicCold__t_plugFlowPipe2_vol__a_dynBal_Medium_ThermodynamicState _state)
{
  modelica_real _d;
  _tailrecursive: OMC_LABEL_UNUSED
  // _d has no default value.
  _d = 995.586;
  _return: OMC_LABEL_UNUSED
  return _d;
}
modelica_metatype boxptr_pump__v3__basicCold__t_plugFlowPipe2_vol__a_dynBal_Medium_density(threadData_t *threadData, modelica_metatype _state)
{
  pump__v3__basicCold__t_plugFlowPipe2_vol__a_dynBal_Medium_ThermodynamicState tmp1;
  modelica_metatype tmpMeta2;
  modelica_real tmp3;
  modelica_metatype tmpMeta4;
  modelica_real tmp5;
  modelica_real _d;
  modelica_metatype out_d;
  tmpMeta2 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_state), 2)));
  tmp3 = mmc_unbox_real(tmpMeta2);
  tmp1._p = tmp3;
  tmpMeta4 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_state), 3)));
  tmp5 = mmc_unbox_real(tmpMeta4);
  tmp1._T = tmp5;
  _d = omc_pump__v3__basicCold__t_plugFlowPipe2_vol__a_dynBal_Medium_density(threadData, tmp1);
  out_d = mmc_mk_rcon(_d);
  return out_d;
}

DLLDirection
pump__v3__basicCold__t_plugFlowPipe2_vol__a_dynBal_Medium_ThermodynamicState omc_pump__v3__basicCold__t_plugFlowPipe2_vol__a_dynBal_Medium_setState__pTX(threadData_t *threadData, modelica_real _p, modelica_real _T, real_array _X)
{
  pump__v3__basicCold__t_plugFlowPipe2_vol__a_dynBal_Medium_ThermodynamicState _state;
  pump__v3__basicCold__t_plugFlowPipe2_vol__a_dynBal_Medium_ThermodynamicState tmp1;
  pump__v3__basicCold__t_plugFlowPipe2_vol__a_dynBal_Medium_ThermodynamicState tmp2;
  _tailrecursive: OMC_LABEL_UNUSED
  pump__v3__basicCold__t_plugFlowPipe2_vol__a_dynBal_Medium_ThermodynamicState_construct(threadData, _state); // _state has no default value.
  tmp2._p = _p;
  tmp2._T = _T;
  tmp1 = tmp2;
  pump__v3__basicCold__t_plugFlowPipe2_vol__a_dynBal_Medium_ThermodynamicState_copy(tmp1, _state);;
  _return: OMC_LABEL_UNUSED
  return _state;
}
modelica_metatype boxptr_pump__v3__basicCold__t_plugFlowPipe2_vol__a_dynBal_Medium_setState__pTX(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T, modelica_metatype _X)
{
  modelica_real tmp1;
  modelica_real tmp2;
  pump__v3__basicCold__t_plugFlowPipe2_vol__a_dynBal_Medium_ThermodynamicState _state;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype out_state;
  tmp1 = mmc_unbox_real(_p);
  tmp2 = mmc_unbox_real(_T);
  _state = omc_pump__v3__basicCold__t_plugFlowPipe2_vol__a_dynBal_Medium_setState__pTX(threadData, tmp1, tmp2, *((base_array_t*)_X));
  tmpMeta3 = mmc_mk_rcon(_state._p);
  tmpMeta4 = mmc_mk_rcon(_state._T);
  out_state = mmc_mk_box3(3, &pump__v3__basicCold__t_plugFlowPipe2_vol__a_dynBal_Medium_ThermodynamicState__desc, tmpMeta3, tmpMeta4);
  return out_state;
}

DLLDirection
modelica_real omc_pump__v3__basicCold__t_plugFlowPipe2_vol__a_dynBal_Medium_specificEnthalpy__pTX(threadData_t *threadData, modelica_real _p, modelica_real _T, real_array _X)
{
  modelica_real _h;
  _tailrecursive: OMC_LABEL_UNUSED
  // _h has no default value.
  _h = (4184.0) * (_T - 273.15);
  _return: OMC_LABEL_UNUSED
  return _h;
}
modelica_metatype boxptr_pump__v3__basicCold__t_plugFlowPipe2_vol__a_dynBal_Medium_specificEnthalpy__pTX(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T, modelica_metatype _X)
{
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_real _h;
  modelica_metatype out_h;
  tmp1 = mmc_unbox_real(_p);
  tmp2 = mmc_unbox_real(_T);
  _h = omc_pump__v3__basicCold__t_plugFlowPipe2_vol__a_dynBal_Medium_specificEnthalpy__pTX(threadData, tmp1, tmp2, *((base_array_t*)_X));
  out_h = mmc_mk_rcon(_h);
  return out_h;
}

DLLDirection
modelica_real omc_pump__v3__basicCold__t_plugFlowPipe2_vol__a_dynBal_Medium_specificInternalEnergy(threadData_t *threadData, pump__v3__basicCold__t_plugFlowPipe2_vol__a_dynBal_Medium_ThermodynamicState _state)
{
  modelica_real _u;
  _tailrecursive: OMC_LABEL_UNUSED
  // _u has no default value.
  _u = (4184.0) * (_state._T - 273.15);
  _return: OMC_LABEL_UNUSED
  return _u;
}
modelica_metatype boxptr_pump__v3__basicCold__t_plugFlowPipe2_vol__a_dynBal_Medium_specificInternalEnergy(threadData_t *threadData, modelica_metatype _state)
{
  pump__v3__basicCold__t_plugFlowPipe2_vol__a_dynBal_Medium_ThermodynamicState tmp1;
  modelica_metatype tmpMeta2;
  modelica_real tmp3;
  modelica_metatype tmpMeta4;
  modelica_real tmp5;
  modelica_real _u;
  modelica_metatype out_u;
  tmpMeta2 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_state), 2)));
  tmp3 = mmc_unbox_real(tmpMeta2);
  tmp1._p = tmp3;
  tmpMeta4 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_state), 3)));
  tmp5 = mmc_unbox_real(tmpMeta4);
  tmp1._T = tmp5;
  _u = omc_pump__v3__basicCold__t_plugFlowPipe2_vol__a_dynBal_Medium_specificInternalEnergy(threadData, tmp1);
  out_u = mmc_mk_rcon(_u);
  return out_u;
}

pump__v3__basicCold__t_plugFlowPipe2_vol__b_Medium_ThermodynamicState omc_pump__v3__basicCold__t_plugFlowPipe2_vol__b_Medium_ThermodynamicState(threadData_t *threadData, modelica_real omc_p, modelica_real omc_T)
{
  pump__v3__basicCold__t_plugFlowPipe2_vol__b_Medium_ThermodynamicState tmp1;
  tmp1._p = omc_p;
  tmp1._T = omc_T;
  return tmp1;
}

modelica_metatype boxptr_pump__v3__basicCold__t_plugFlowPipe2_vol__b_Medium_ThermodynamicState(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T)
{
  return mmc_mk_box3(3, &pump__v3__basicCold__t_plugFlowPipe2_vol__b_Medium_ThermodynamicState__desc, _p, _T);
}

DLLDirection
modelica_real omc_pump__v3__basicCold__t_plugFlowPipe2_vol__b_Medium_density(threadData_t *threadData, pump__v3__basicCold__t_plugFlowPipe2_vol__b_Medium_ThermodynamicState _state)
{
  modelica_real _d;
  _tailrecursive: OMC_LABEL_UNUSED
  // _d has no default value.
  _d = 995.586;
  _return: OMC_LABEL_UNUSED
  return _d;
}
modelica_metatype boxptr_pump__v3__basicCold__t_plugFlowPipe2_vol__b_Medium_density(threadData_t *threadData, modelica_metatype _state)
{
  pump__v3__basicCold__t_plugFlowPipe2_vol__b_Medium_ThermodynamicState tmp1;
  modelica_metatype tmpMeta2;
  modelica_real tmp3;
  modelica_metatype tmpMeta4;
  modelica_real tmp5;
  modelica_real _d;
  modelica_metatype out_d;
  tmpMeta2 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_state), 2)));
  tmp3 = mmc_unbox_real(tmpMeta2);
  tmp1._p = tmp3;
  tmpMeta4 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_state), 3)));
  tmp5 = mmc_unbox_real(tmpMeta4);
  tmp1._T = tmp5;
  _d = omc_pump__v3__basicCold__t_plugFlowPipe2_vol__b_Medium_density(threadData, tmp1);
  out_d = mmc_mk_rcon(_d);
  return out_d;
}

DLLDirection
modelica_real omc_pump__v3__basicCold__t_plugFlowPipe2_vol__b_Medium_temperature__phX(threadData_t *threadData, modelica_real _p, modelica_real _h, real_array _X)
{
  modelica_real _T;
  modelica_real tmp1;
  _tailrecursive: OMC_LABEL_UNUSED
  // _T has no default value.
  tmp1 = 4184.0;
  if (tmp1 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "h / 4184.0");}
  _T = 273.15 + (_h) / tmp1;
  _return: OMC_LABEL_UNUSED
  return _T;
}
modelica_metatype boxptr_pump__v3__basicCold__t_plugFlowPipe2_vol__b_Medium_temperature__phX(threadData_t *threadData, modelica_metatype _p, modelica_metatype _h, modelica_metatype _X)
{
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_real _T;
  modelica_metatype out_T;
  tmp1 = mmc_unbox_real(_p);
  tmp2 = mmc_unbox_real(_h);
  _T = omc_pump__v3__basicCold__t_plugFlowPipe2_vol__b_Medium_temperature__phX(threadData, tmp1, tmp2, *((base_array_t*)_X));
  out_T = mmc_mk_rcon(_T);
  return out_T;
}

pump__v3__basicCold__t_plugFlowPipe2_vol__b_dynBal_Medium_ThermodynamicState omc_pump__v3__basicCold__t_plugFlowPipe2_vol__b_dynBal_Medium_ThermodynamicState(threadData_t *threadData, modelica_real omc_p, modelica_real omc_T)
{
  pump__v3__basicCold__t_plugFlowPipe2_vol__b_dynBal_Medium_ThermodynamicState tmp1;
  tmp1._p = omc_p;
  tmp1._T = omc_T;
  return tmp1;
}

modelica_metatype boxptr_pump__v3__basicCold__t_plugFlowPipe2_vol__b_dynBal_Medium_ThermodynamicState(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T)
{
  return mmc_mk_box3(3, &pump__v3__basicCold__t_plugFlowPipe2_vol__b_dynBal_Medium_ThermodynamicState__desc, _p, _T);
}

DLLDirection
modelica_real omc_pump__v3__basicCold__t_plugFlowPipe2_vol__b_dynBal_Medium_density(threadData_t *threadData, pump__v3__basicCold__t_plugFlowPipe2_vol__b_dynBal_Medium_ThermodynamicState _state)
{
  modelica_real _d;
  _tailrecursive: OMC_LABEL_UNUSED
  // _d has no default value.
  _d = 995.586;
  _return: OMC_LABEL_UNUSED
  return _d;
}
modelica_metatype boxptr_pump__v3__basicCold__t_plugFlowPipe2_vol__b_dynBal_Medium_density(threadData_t *threadData, modelica_metatype _state)
{
  pump__v3__basicCold__t_plugFlowPipe2_vol__b_dynBal_Medium_ThermodynamicState tmp1;
  modelica_metatype tmpMeta2;
  modelica_real tmp3;
  modelica_metatype tmpMeta4;
  modelica_real tmp5;
  modelica_real _d;
  modelica_metatype out_d;
  tmpMeta2 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_state), 2)));
  tmp3 = mmc_unbox_real(tmpMeta2);
  tmp1._p = tmp3;
  tmpMeta4 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_state), 3)));
  tmp5 = mmc_unbox_real(tmpMeta4);
  tmp1._T = tmp5;
  _d = omc_pump__v3__basicCold__t_plugFlowPipe2_vol__b_dynBal_Medium_density(threadData, tmp1);
  out_d = mmc_mk_rcon(_d);
  return out_d;
}

DLLDirection
pump__v3__basicCold__t_plugFlowPipe2_vol__b_dynBal_Medium_ThermodynamicState omc_pump__v3__basicCold__t_plugFlowPipe2_vol__b_dynBal_Medium_setState__pTX(threadData_t *threadData, modelica_real _p, modelica_real _T, real_array _X)
{
  pump__v3__basicCold__t_plugFlowPipe2_vol__b_dynBal_Medium_ThermodynamicState _state;
  pump__v3__basicCold__t_plugFlowPipe2_vol__b_dynBal_Medium_ThermodynamicState tmp1;
  pump__v3__basicCold__t_plugFlowPipe2_vol__b_dynBal_Medium_ThermodynamicState tmp2;
  _tailrecursive: OMC_LABEL_UNUSED
  pump__v3__basicCold__t_plugFlowPipe2_vol__b_dynBal_Medium_ThermodynamicState_construct(threadData, _state); // _state has no default value.
  tmp2._p = _p;
  tmp2._T = _T;
  tmp1 = tmp2;
  pump__v3__basicCold__t_plugFlowPipe2_vol__b_dynBal_Medium_ThermodynamicState_copy(tmp1, _state);;
  _return: OMC_LABEL_UNUSED
  return _state;
}
modelica_metatype boxptr_pump__v3__basicCold__t_plugFlowPipe2_vol__b_dynBal_Medium_setState__pTX(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T, modelica_metatype _X)
{
  modelica_real tmp1;
  modelica_real tmp2;
  pump__v3__basicCold__t_plugFlowPipe2_vol__b_dynBal_Medium_ThermodynamicState _state;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype out_state;
  tmp1 = mmc_unbox_real(_p);
  tmp2 = mmc_unbox_real(_T);
  _state = omc_pump__v3__basicCold__t_plugFlowPipe2_vol__b_dynBal_Medium_setState__pTX(threadData, tmp1, tmp2, *((base_array_t*)_X));
  tmpMeta3 = mmc_mk_rcon(_state._p);
  tmpMeta4 = mmc_mk_rcon(_state._T);
  out_state = mmc_mk_box3(3, &pump__v3__basicCold__t_plugFlowPipe2_vol__b_dynBal_Medium_ThermodynamicState__desc, tmpMeta3, tmpMeta4);
  return out_state;
}

DLLDirection
modelica_real omc_pump__v3__basicCold__t_plugFlowPipe2_vol__b_dynBal_Medium_specificEnthalpy__pTX(threadData_t *threadData, modelica_real _p, modelica_real _T, real_array _X)
{
  modelica_real _h;
  _tailrecursive: OMC_LABEL_UNUSED
  // _h has no default value.
  _h = (4184.0) * (_T - 273.15);
  _return: OMC_LABEL_UNUSED
  return _h;
}
modelica_metatype boxptr_pump__v3__basicCold__t_plugFlowPipe2_vol__b_dynBal_Medium_specificEnthalpy__pTX(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T, modelica_metatype _X)
{
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_real _h;
  modelica_metatype out_h;
  tmp1 = mmc_unbox_real(_p);
  tmp2 = mmc_unbox_real(_T);
  _h = omc_pump__v3__basicCold__t_plugFlowPipe2_vol__b_dynBal_Medium_specificEnthalpy__pTX(threadData, tmp1, tmp2, *((base_array_t*)_X));
  out_h = mmc_mk_rcon(_h);
  return out_h;
}

DLLDirection
modelica_real omc_pump__v3__basicCold__t_plugFlowPipe2_vol__b_dynBal_Medium_specificInternalEnergy(threadData_t *threadData, pump__v3__basicCold__t_plugFlowPipe2_vol__b_dynBal_Medium_ThermodynamicState _state)
{
  modelica_real _u;
  _tailrecursive: OMC_LABEL_UNUSED
  // _u has no default value.
  _u = (4184.0) * (_state._T - 273.15);
  _return: OMC_LABEL_UNUSED
  return _u;
}
modelica_metatype boxptr_pump__v3__basicCold__t_plugFlowPipe2_vol__b_dynBal_Medium_specificInternalEnergy(threadData_t *threadData, modelica_metatype _state)
{
  pump__v3__basicCold__t_plugFlowPipe2_vol__b_dynBal_Medium_ThermodynamicState tmp1;
  modelica_metatype tmpMeta2;
  modelica_real tmp3;
  modelica_metatype tmpMeta4;
  modelica_real tmp5;
  modelica_real _u;
  modelica_metatype out_u;
  tmpMeta2 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_state), 2)));
  tmp3 = mmc_unbox_real(tmpMeta2);
  tmp1._p = tmp3;
  tmpMeta4 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_state), 3)));
  tmp5 = mmc_unbox_real(tmpMeta4);
  tmp1._T = tmp5;
  _u = omc_pump__v3__basicCold__t_plugFlowPipe2_vol__b_dynBal_Medium_specificInternalEnergy(threadData, tmp1);
  out_u = mmc_mk_rcon(_u);
  return out_u;
}

pump__v3__basicCold__t_plugFlowPipe__heat_Medium_ThermodynamicState omc_pump__v3__basicCold__t_plugFlowPipe__heat_Medium_ThermodynamicState(threadData_t *threadData, modelica_real omc_p, modelica_real omc_T)
{
  pump__v3__basicCold__t_plugFlowPipe__heat_Medium_ThermodynamicState tmp1;
  tmp1._p = omc_p;
  tmp1._T = omc_T;
  return tmp1;
}

modelica_metatype boxptr_pump__v3__basicCold__t_plugFlowPipe__heat_Medium_ThermodynamicState(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T)
{
  return mmc_mk_box3(3, &pump__v3__basicCold__t_plugFlowPipe__heat_Medium_ThermodynamicState__desc, _p, _T);
}

DLLDirection
modelica_real omc_pump__v3__basicCold__t_plugFlowPipe__heat_Medium_specificHeatCapacityCp(threadData_t *threadData, pump__v3__basicCold__t_plugFlowPipe__heat_Medium_ThermodynamicState _state)
{
  modelica_real _cp;
  _tailrecursive: OMC_LABEL_UNUSED
  // _cp has no default value.
  _cp = 4184.0;
  _return: OMC_LABEL_UNUSED
  return _cp;
}
modelica_metatype boxptr_pump__v3__basicCold__t_plugFlowPipe__heat_Medium_specificHeatCapacityCp(threadData_t *threadData, modelica_metatype _state)
{
  pump__v3__basicCold__t_plugFlowPipe__heat_Medium_ThermodynamicState tmp1;
  modelica_metatype tmpMeta2;
  modelica_real tmp3;
  modelica_metatype tmpMeta4;
  modelica_real tmp5;
  modelica_real _cp;
  modelica_metatype out_cp;
  tmpMeta2 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_state), 2)));
  tmp3 = mmc_unbox_real(tmpMeta2);
  tmp1._p = tmp3;
  tmpMeta4 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_state), 3)));
  tmp5 = mmc_unbox_real(tmpMeta4);
  tmp1._T = tmp5;
  _cp = omc_pump__v3__basicCold__t_plugFlowPipe__heat_Medium_specificHeatCapacityCp(threadData, tmp1);
  out_cp = mmc_mk_rcon(_cp);
  return out_cp;
}

pump__v3__basicCold__t_plugFlowPipe__heat_del_Medium_ThermodynamicState omc_pump__v3__basicCold__t_plugFlowPipe__heat_del_Medium_ThermodynamicState(threadData_t *threadData, modelica_real omc_p, modelica_real omc_T)
{
  pump__v3__basicCold__t_plugFlowPipe__heat_del_Medium_ThermodynamicState tmp1;
  tmp1._p = omc_p;
  tmp1._T = omc_T;
  return tmp1;
}

modelica_metatype boxptr_pump__v3__basicCold__t_plugFlowPipe__heat_del_Medium_ThermodynamicState(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T)
{
  return mmc_mk_box3(3, &pump__v3__basicCold__t_plugFlowPipe__heat_del_Medium_ThermodynamicState__desc, _p, _T);
}

DLLDirection
modelica_real omc_pump__v3__basicCold__t_plugFlowPipe__heat_del_Medium_density(threadData_t *threadData, pump__v3__basicCold__t_plugFlowPipe__heat_del_Medium_ThermodynamicState _state)
{
  modelica_real _d;
  _tailrecursive: OMC_LABEL_UNUSED
  // _d has no default value.
  _d = 995.586;
  _return: OMC_LABEL_UNUSED
  return _d;
}
modelica_metatype boxptr_pump__v3__basicCold__t_plugFlowPipe__heat_del_Medium_density(threadData_t *threadData, modelica_metatype _state)
{
  pump__v3__basicCold__t_plugFlowPipe__heat_del_Medium_ThermodynamicState tmp1;
  modelica_metatype tmpMeta2;
  modelica_real tmp3;
  modelica_metatype tmpMeta4;
  modelica_real tmp5;
  modelica_real _d;
  modelica_metatype out_d;
  tmpMeta2 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_state), 2)));
  tmp3 = mmc_unbox_real(tmpMeta2);
  tmp1._p = tmp3;
  tmpMeta4 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_state), 3)));
  tmp5 = mmc_unbox_real(tmpMeta4);
  tmp1._T = tmp5;
  _d = omc_pump__v3__basicCold__t_plugFlowPipe__heat_del_Medium_density(threadData, tmp1);
  out_d = mmc_mk_rcon(_d);
  return out_d;
}

DLLDirection
pump__v3__basicCold__t_plugFlowPipe__heat_del_Medium_ThermodynamicState omc_pump__v3__basicCold__t_plugFlowPipe__heat_del_Medium_setState__pTX(threadData_t *threadData, modelica_real _p, modelica_real _T, real_array _X)
{
  pump__v3__basicCold__t_plugFlowPipe__heat_del_Medium_ThermodynamicState _state;
  pump__v3__basicCold__t_plugFlowPipe__heat_del_Medium_ThermodynamicState tmp1;
  pump__v3__basicCold__t_plugFlowPipe__heat_del_Medium_ThermodynamicState tmp2;
  _tailrecursive: OMC_LABEL_UNUSED
  pump__v3__basicCold__t_plugFlowPipe__heat_del_Medium_ThermodynamicState_construct(threadData, _state); // _state has no default value.
  tmp2._p = _p;
  tmp2._T = _T;
  tmp1 = tmp2;
  pump__v3__basicCold__t_plugFlowPipe__heat_del_Medium_ThermodynamicState_copy(tmp1, _state);;
  _return: OMC_LABEL_UNUSED
  return _state;
}
modelica_metatype boxptr_pump__v3__basicCold__t_plugFlowPipe__heat_del_Medium_setState__pTX(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T, modelica_metatype _X)
{
  modelica_real tmp1;
  modelica_real tmp2;
  pump__v3__basicCold__t_plugFlowPipe__heat_del_Medium_ThermodynamicState _state;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype out_state;
  tmp1 = mmc_unbox_real(_p);
  tmp2 = mmc_unbox_real(_T);
  _state = omc_pump__v3__basicCold__t_plugFlowPipe__heat_del_Medium_setState__pTX(threadData, tmp1, tmp2, *((base_array_t*)_X));
  tmpMeta3 = mmc_mk_rcon(_state._p);
  tmpMeta4 = mmc_mk_rcon(_state._T);
  out_state = mmc_mk_box3(3, &pump__v3__basicCold__t_plugFlowPipe__heat_del_Medium_ThermodynamicState__desc, tmpMeta3, tmpMeta4);
  return out_state;
}

DLLDirection
pump__v3__basicCold__t_plugFlowPipe__heat_del_Medium_ThermodynamicState omc_pump__v3__basicCold__t_plugFlowPipe__heat_del_Medium_setState__phX(threadData_t *threadData, modelica_real _p, modelica_real _h, real_array _X)
{
  pump__v3__basicCold__t_plugFlowPipe__heat_del_Medium_ThermodynamicState _state;
  pump__v3__basicCold__t_plugFlowPipe__heat_del_Medium_ThermodynamicState tmp1;
  pump__v3__basicCold__t_plugFlowPipe__heat_del_Medium_ThermodynamicState tmp2;
  modelica_real tmp3;
  _tailrecursive: OMC_LABEL_UNUSED
  pump__v3__basicCold__t_plugFlowPipe__heat_del_Medium_ThermodynamicState_construct(threadData, _state); // _state has no default value.
  tmp3 = 4184.0;
  if (tmp3 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "h / 4184.0");}
  tmp2._p = _p;
  tmp2._T = 273.15 + (_h) / tmp3;
  tmp1 = tmp2;
  pump__v3__basicCold__t_plugFlowPipe__heat_del_Medium_ThermodynamicState_copy(tmp1, _state);;
  _return: OMC_LABEL_UNUSED
  return _state;
}
modelica_metatype boxptr_pump__v3__basicCold__t_plugFlowPipe__heat_del_Medium_setState__phX(threadData_t *threadData, modelica_metatype _p, modelica_metatype _h, modelica_metatype _X)
{
  modelica_real tmp1;
  modelica_real tmp2;
  pump__v3__basicCold__t_plugFlowPipe__heat_del_Medium_ThermodynamicState _state;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype out_state;
  tmp1 = mmc_unbox_real(_p);
  tmp2 = mmc_unbox_real(_h);
  _state = omc_pump__v3__basicCold__t_plugFlowPipe__heat_del_Medium_setState__phX(threadData, tmp1, tmp2, *((base_array_t*)_X));
  tmpMeta3 = mmc_mk_rcon(_state._p);
  tmpMeta4 = mmc_mk_rcon(_state._T);
  out_state = mmc_mk_box3(3, &pump__v3__basicCold__t_plugFlowPipe__heat_del_Medium_ThermodynamicState__desc, tmpMeta3, tmpMeta4);
  return out_state;
}

DLLDirection
modelica_real omc_pump__v3__basicCold__t_plugFlowPipe__heat_del_Medium_specificEnthalpy(threadData_t *threadData, pump__v3__basicCold__t_plugFlowPipe__heat_del_Medium_ThermodynamicState _state)
{
  modelica_real _h;
  _tailrecursive: OMC_LABEL_UNUSED
  // _h has no default value.
  _h = (4184.0) * (_state._T - 273.15);
  _return: OMC_LABEL_UNUSED
  return _h;
}
modelica_metatype boxptr_pump__v3__basicCold__t_plugFlowPipe__heat_del_Medium_specificEnthalpy(threadData_t *threadData, modelica_metatype _state)
{
  pump__v3__basicCold__t_plugFlowPipe__heat_del_Medium_ThermodynamicState tmp1;
  modelica_metatype tmpMeta2;
  modelica_real tmp3;
  modelica_metatype tmpMeta4;
  modelica_real tmp5;
  modelica_real _h;
  modelica_metatype out_h;
  tmpMeta2 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_state), 2)));
  tmp3 = mmc_unbox_real(tmpMeta2);
  tmp1._p = tmp3;
  tmpMeta4 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_state), 3)));
  tmp5 = mmc_unbox_real(tmpMeta4);
  tmp1._T = tmp5;
  _h = omc_pump__v3__basicCold__t_plugFlowPipe__heat_del_Medium_specificEnthalpy(threadData, tmp1);
  out_h = mmc_mk_rcon(_h);
  return out_h;
}

pump__v3__basicCold__t_plugFlowPipe__heat_heaLos__a_Medium_ThermodynamicState omc_pump__v3__basicCold__t_plugFlowPipe__heat_heaLos__a_Medium_ThermodynamicState(threadData_t *threadData, modelica_real omc_p, modelica_real omc_T)
{
  pump__v3__basicCold__t_plugFlowPipe__heat_heaLos__a_Medium_ThermodynamicState tmp1;
  tmp1._p = omc_p;
  tmp1._T = omc_T;
  return tmp1;
}

modelica_metatype boxptr_pump__v3__basicCold__t_plugFlowPipe__heat_heaLos__a_Medium_ThermodynamicState(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T)
{
  return mmc_mk_box3(3, &pump__v3__basicCold__t_plugFlowPipe__heat_heaLos__a_Medium_ThermodynamicState__desc, _p, _T);
}

DLLDirection
pump__v3__basicCold__t_plugFlowPipe__heat_heaLos__a_Medium_ThermodynamicState omc_pump__v3__basicCold__t_plugFlowPipe__heat_heaLos__a_Medium_setState__pTX(threadData_t *threadData, modelica_real _p, modelica_real _T, real_array _X)
{
  pump__v3__basicCold__t_plugFlowPipe__heat_heaLos__a_Medium_ThermodynamicState _state;
  pump__v3__basicCold__t_plugFlowPipe__heat_heaLos__a_Medium_ThermodynamicState tmp1;
  pump__v3__basicCold__t_plugFlowPipe__heat_heaLos__a_Medium_ThermodynamicState tmp2;
  _tailrecursive: OMC_LABEL_UNUSED
  pump__v3__basicCold__t_plugFlowPipe__heat_heaLos__a_Medium_ThermodynamicState_construct(threadData, _state); // _state has no default value.
  tmp2._p = _p;
  tmp2._T = _T;
  tmp1 = tmp2;
  pump__v3__basicCold__t_plugFlowPipe__heat_heaLos__a_Medium_ThermodynamicState_copy(tmp1, _state);;
  _return: OMC_LABEL_UNUSED
  return _state;
}
modelica_metatype boxptr_pump__v3__basicCold__t_plugFlowPipe__heat_heaLos__a_Medium_setState__pTX(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T, modelica_metatype _X)
{
  modelica_real tmp1;
  modelica_real tmp2;
  pump__v3__basicCold__t_plugFlowPipe__heat_heaLos__a_Medium_ThermodynamicState _state;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype out_state;
  tmp1 = mmc_unbox_real(_p);
  tmp2 = mmc_unbox_real(_T);
  _state = omc_pump__v3__basicCold__t_plugFlowPipe__heat_heaLos__a_Medium_setState__pTX(threadData, tmp1, tmp2, *((base_array_t*)_X));
  tmpMeta3 = mmc_mk_rcon(_state._p);
  tmpMeta4 = mmc_mk_rcon(_state._T);
  out_state = mmc_mk_box3(3, &pump__v3__basicCold__t_plugFlowPipe__heat_heaLos__a_Medium_ThermodynamicState__desc, tmpMeta3, tmpMeta4);
  return out_state;
}

DLLDirection
pump__v3__basicCold__t_plugFlowPipe__heat_heaLos__a_Medium_ThermodynamicState omc_pump__v3__basicCold__t_plugFlowPipe__heat_heaLos__a_Medium_setState__phX(threadData_t *threadData, modelica_real _p, modelica_real _h, real_array _X)
{
  pump__v3__basicCold__t_plugFlowPipe__heat_heaLos__a_Medium_ThermodynamicState _state;
  pump__v3__basicCold__t_plugFlowPipe__heat_heaLos__a_Medium_ThermodynamicState tmp1;
  pump__v3__basicCold__t_plugFlowPipe__heat_heaLos__a_Medium_ThermodynamicState tmp2;
  modelica_real tmp3;
  _tailrecursive: OMC_LABEL_UNUSED
  pump__v3__basicCold__t_plugFlowPipe__heat_heaLos__a_Medium_ThermodynamicState_construct(threadData, _state); // _state has no default value.
  tmp3 = 4184.0;
  if (tmp3 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "h / 4184.0");}
  tmp2._p = _p;
  tmp2._T = 273.15 + (_h) / tmp3;
  tmp1 = tmp2;
  pump__v3__basicCold__t_plugFlowPipe__heat_heaLos__a_Medium_ThermodynamicState_copy(tmp1, _state);;
  _return: OMC_LABEL_UNUSED
  return _state;
}
modelica_metatype boxptr_pump__v3__basicCold__t_plugFlowPipe__heat_heaLos__a_Medium_setState__phX(threadData_t *threadData, modelica_metatype _p, modelica_metatype _h, modelica_metatype _X)
{
  modelica_real tmp1;
  modelica_real tmp2;
  pump__v3__basicCold__t_plugFlowPipe__heat_heaLos__a_Medium_ThermodynamicState _state;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype out_state;
  tmp1 = mmc_unbox_real(_p);
  tmp2 = mmc_unbox_real(_h);
  _state = omc_pump__v3__basicCold__t_plugFlowPipe__heat_heaLos__a_Medium_setState__phX(threadData, tmp1, tmp2, *((base_array_t*)_X));
  tmpMeta3 = mmc_mk_rcon(_state._p);
  tmpMeta4 = mmc_mk_rcon(_state._T);
  out_state = mmc_mk_box3(3, &pump__v3__basicCold__t_plugFlowPipe__heat_heaLos__a_Medium_ThermodynamicState__desc, tmpMeta3, tmpMeta4);
  return out_state;
}

DLLDirection
modelica_real omc_pump__v3__basicCold__t_plugFlowPipe__heat_heaLos__a_Medium_specificEnthalpy(threadData_t *threadData, pump__v3__basicCold__t_plugFlowPipe__heat_heaLos__a_Medium_ThermodynamicState _state)
{
  modelica_real _h;
  _tailrecursive: OMC_LABEL_UNUSED
  // _h has no default value.
  _h = (4184.0) * (_state._T - 273.15);
  _return: OMC_LABEL_UNUSED
  return _h;
}
modelica_metatype boxptr_pump__v3__basicCold__t_plugFlowPipe__heat_heaLos__a_Medium_specificEnthalpy(threadData_t *threadData, modelica_metatype _state)
{
  pump__v3__basicCold__t_plugFlowPipe__heat_heaLos__a_Medium_ThermodynamicState tmp1;
  modelica_metatype tmpMeta2;
  modelica_real tmp3;
  modelica_metatype tmpMeta4;
  modelica_real tmp5;
  modelica_real _h;
  modelica_metatype out_h;
  tmpMeta2 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_state), 2)));
  tmp3 = mmc_unbox_real(tmpMeta2);
  tmp1._p = tmp3;
  tmpMeta4 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_state), 3)));
  tmp5 = mmc_unbox_real(tmpMeta4);
  tmp1._T = tmp5;
  _h = omc_pump__v3__basicCold__t_plugFlowPipe__heat_heaLos__a_Medium_specificEnthalpy(threadData, tmp1);
  out_h = mmc_mk_rcon(_h);
  return out_h;
}

DLLDirection
modelica_real omc_pump__v3__basicCold__t_plugFlowPipe__heat_heaLos__a_Medium_specificHeatCapacityCp(threadData_t *threadData, pump__v3__basicCold__t_plugFlowPipe__heat_heaLos__a_Medium_ThermodynamicState _state)
{
  modelica_real _cp;
  _tailrecursive: OMC_LABEL_UNUSED
  // _cp has no default value.
  _cp = 4184.0;
  _return: OMC_LABEL_UNUSED
  return _cp;
}
modelica_metatype boxptr_pump__v3__basicCold__t_plugFlowPipe__heat_heaLos__a_Medium_specificHeatCapacityCp(threadData_t *threadData, modelica_metatype _state)
{
  pump__v3__basicCold__t_plugFlowPipe__heat_heaLos__a_Medium_ThermodynamicState tmp1;
  modelica_metatype tmpMeta2;
  modelica_real tmp3;
  modelica_metatype tmpMeta4;
  modelica_real tmp5;
  modelica_real _cp;
  modelica_metatype out_cp;
  tmpMeta2 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_state), 2)));
  tmp3 = mmc_unbox_real(tmpMeta2);
  tmp1._p = tmp3;
  tmpMeta4 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_state), 3)));
  tmp5 = mmc_unbox_real(tmpMeta4);
  tmp1._T = tmp5;
  _cp = omc_pump__v3__basicCold__t_plugFlowPipe__heat_heaLos__a_Medium_specificHeatCapacityCp(threadData, tmp1);
  out_cp = mmc_mk_rcon(_cp);
  return out_cp;
}

DLLDirection
modelica_real omc_pump__v3__basicCold__t_plugFlowPipe__heat_heaLos__a_Medium_temperature(threadData_t *threadData, pump__v3__basicCold__t_plugFlowPipe__heat_heaLos__a_Medium_ThermodynamicState _state)
{
  modelica_real _T;
  _tailrecursive: OMC_LABEL_UNUSED
  // _T has no default value.
  _T = _state._T;
  _return: OMC_LABEL_UNUSED
  return _T;
}
modelica_metatype boxptr_pump__v3__basicCold__t_plugFlowPipe__heat_heaLos__a_Medium_temperature(threadData_t *threadData, modelica_metatype _state)
{
  pump__v3__basicCold__t_plugFlowPipe__heat_heaLos__a_Medium_ThermodynamicState tmp1;
  modelica_metatype tmpMeta2;
  modelica_real tmp3;
  modelica_metatype tmpMeta4;
  modelica_real tmp5;
  modelica_real _T;
  modelica_metatype out_T;
  tmpMeta2 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_state), 2)));
  tmp3 = mmc_unbox_real(tmpMeta2);
  tmp1._p = tmp3;
  tmpMeta4 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_state), 3)));
  tmp5 = mmc_unbox_real(tmpMeta4);
  tmp1._T = tmp5;
  _T = omc_pump__v3__basicCold__t_plugFlowPipe__heat_heaLos__a_Medium_temperature(threadData, tmp1);
  out_T = mmc_mk_rcon(_T);
  return out_T;
}

pump__v3__basicCold__t_plugFlowPipe__heat_heaLos__b_Medium_ThermodynamicState omc_pump__v3__basicCold__t_plugFlowPipe__heat_heaLos__b_Medium_ThermodynamicState(threadData_t *threadData, modelica_real omc_p, modelica_real omc_T)
{
  pump__v3__basicCold__t_plugFlowPipe__heat_heaLos__b_Medium_ThermodynamicState tmp1;
  tmp1._p = omc_p;
  tmp1._T = omc_T;
  return tmp1;
}

modelica_metatype boxptr_pump__v3__basicCold__t_plugFlowPipe__heat_heaLos__b_Medium_ThermodynamicState(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T)
{
  return mmc_mk_box3(3, &pump__v3__basicCold__t_plugFlowPipe__heat_heaLos__b_Medium_ThermodynamicState__desc, _p, _T);
}

DLLDirection
pump__v3__basicCold__t_plugFlowPipe__heat_heaLos__b_Medium_ThermodynamicState omc_pump__v3__basicCold__t_plugFlowPipe__heat_heaLos__b_Medium_setState__pTX(threadData_t *threadData, modelica_real _p, modelica_real _T, real_array _X)
{
  pump__v3__basicCold__t_plugFlowPipe__heat_heaLos__b_Medium_ThermodynamicState _state;
  pump__v3__basicCold__t_plugFlowPipe__heat_heaLos__b_Medium_ThermodynamicState tmp1;
  pump__v3__basicCold__t_plugFlowPipe__heat_heaLos__b_Medium_ThermodynamicState tmp2;
  _tailrecursive: OMC_LABEL_UNUSED
  pump__v3__basicCold__t_plugFlowPipe__heat_heaLos__b_Medium_ThermodynamicState_construct(threadData, _state); // _state has no default value.
  tmp2._p = _p;
  tmp2._T = _T;
  tmp1 = tmp2;
  pump__v3__basicCold__t_plugFlowPipe__heat_heaLos__b_Medium_ThermodynamicState_copy(tmp1, _state);;
  _return: OMC_LABEL_UNUSED
  return _state;
}
modelica_metatype boxptr_pump__v3__basicCold__t_plugFlowPipe__heat_heaLos__b_Medium_setState__pTX(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T, modelica_metatype _X)
{
  modelica_real tmp1;
  modelica_real tmp2;
  pump__v3__basicCold__t_plugFlowPipe__heat_heaLos__b_Medium_ThermodynamicState _state;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype out_state;
  tmp1 = mmc_unbox_real(_p);
  tmp2 = mmc_unbox_real(_T);
  _state = omc_pump__v3__basicCold__t_plugFlowPipe__heat_heaLos__b_Medium_setState__pTX(threadData, tmp1, tmp2, *((base_array_t*)_X));
  tmpMeta3 = mmc_mk_rcon(_state._p);
  tmpMeta4 = mmc_mk_rcon(_state._T);
  out_state = mmc_mk_box3(3, &pump__v3__basicCold__t_plugFlowPipe__heat_heaLos__b_Medium_ThermodynamicState__desc, tmpMeta3, tmpMeta4);
  return out_state;
}

DLLDirection
pump__v3__basicCold__t_plugFlowPipe__heat_heaLos__b_Medium_ThermodynamicState omc_pump__v3__basicCold__t_plugFlowPipe__heat_heaLos__b_Medium_setState__phX(threadData_t *threadData, modelica_real _p, modelica_real _h, real_array _X)
{
  pump__v3__basicCold__t_plugFlowPipe__heat_heaLos__b_Medium_ThermodynamicState _state;
  pump__v3__basicCold__t_plugFlowPipe__heat_heaLos__b_Medium_ThermodynamicState tmp1;
  pump__v3__basicCold__t_plugFlowPipe__heat_heaLos__b_Medium_ThermodynamicState tmp2;
  modelica_real tmp3;
  _tailrecursive: OMC_LABEL_UNUSED
  pump__v3__basicCold__t_plugFlowPipe__heat_heaLos__b_Medium_ThermodynamicState_construct(threadData, _state); // _state has no default value.
  tmp3 = 4184.0;
  if (tmp3 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "h / 4184.0");}
  tmp2._p = _p;
  tmp2._T = 273.15 + (_h) / tmp3;
  tmp1 = tmp2;
  pump__v3__basicCold__t_plugFlowPipe__heat_heaLos__b_Medium_ThermodynamicState_copy(tmp1, _state);;
  _return: OMC_LABEL_UNUSED
  return _state;
}
modelica_metatype boxptr_pump__v3__basicCold__t_plugFlowPipe__heat_heaLos__b_Medium_setState__phX(threadData_t *threadData, modelica_metatype _p, modelica_metatype _h, modelica_metatype _X)
{
  modelica_real tmp1;
  modelica_real tmp2;
  pump__v3__basicCold__t_plugFlowPipe__heat_heaLos__b_Medium_ThermodynamicState _state;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype out_state;
  tmp1 = mmc_unbox_real(_p);
  tmp2 = mmc_unbox_real(_h);
  _state = omc_pump__v3__basicCold__t_plugFlowPipe__heat_heaLos__b_Medium_setState__phX(threadData, tmp1, tmp2, *((base_array_t*)_X));
  tmpMeta3 = mmc_mk_rcon(_state._p);
  tmpMeta4 = mmc_mk_rcon(_state._T);
  out_state = mmc_mk_box3(3, &pump__v3__basicCold__t_plugFlowPipe__heat_heaLos__b_Medium_ThermodynamicState__desc, tmpMeta3, tmpMeta4);
  return out_state;
}

DLLDirection
modelica_real omc_pump__v3__basicCold__t_plugFlowPipe__heat_heaLos__b_Medium_specificEnthalpy(threadData_t *threadData, pump__v3__basicCold__t_plugFlowPipe__heat_heaLos__b_Medium_ThermodynamicState _state)
{
  modelica_real _h;
  _tailrecursive: OMC_LABEL_UNUSED
  // _h has no default value.
  _h = (4184.0) * (_state._T - 273.15);
  _return: OMC_LABEL_UNUSED
  return _h;
}
modelica_metatype boxptr_pump__v3__basicCold__t_plugFlowPipe__heat_heaLos__b_Medium_specificEnthalpy(threadData_t *threadData, modelica_metatype _state)
{
  pump__v3__basicCold__t_plugFlowPipe__heat_heaLos__b_Medium_ThermodynamicState tmp1;
  modelica_metatype tmpMeta2;
  modelica_real tmp3;
  modelica_metatype tmpMeta4;
  modelica_real tmp5;
  modelica_real _h;
  modelica_metatype out_h;
  tmpMeta2 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_state), 2)));
  tmp3 = mmc_unbox_real(tmpMeta2);
  tmp1._p = tmp3;
  tmpMeta4 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_state), 3)));
  tmp5 = mmc_unbox_real(tmpMeta4);
  tmp1._T = tmp5;
  _h = omc_pump__v3__basicCold__t_plugFlowPipe__heat_heaLos__b_Medium_specificEnthalpy(threadData, tmp1);
  out_h = mmc_mk_rcon(_h);
  return out_h;
}

DLLDirection
modelica_real omc_pump__v3__basicCold__t_plugFlowPipe__heat_heaLos__b_Medium_specificHeatCapacityCp(threadData_t *threadData, pump__v3__basicCold__t_plugFlowPipe__heat_heaLos__b_Medium_ThermodynamicState _state)
{
  modelica_real _cp;
  _tailrecursive: OMC_LABEL_UNUSED
  // _cp has no default value.
  _cp = 4184.0;
  _return: OMC_LABEL_UNUSED
  return _cp;
}
modelica_metatype boxptr_pump__v3__basicCold__t_plugFlowPipe__heat_heaLos__b_Medium_specificHeatCapacityCp(threadData_t *threadData, modelica_metatype _state)
{
  pump__v3__basicCold__t_plugFlowPipe__heat_heaLos__b_Medium_ThermodynamicState tmp1;
  modelica_metatype tmpMeta2;
  modelica_real tmp3;
  modelica_metatype tmpMeta4;
  modelica_real tmp5;
  modelica_real _cp;
  modelica_metatype out_cp;
  tmpMeta2 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_state), 2)));
  tmp3 = mmc_unbox_real(tmpMeta2);
  tmp1._p = tmp3;
  tmpMeta4 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_state), 3)));
  tmp5 = mmc_unbox_real(tmpMeta4);
  tmp1._T = tmp5;
  _cp = omc_pump__v3__basicCold__t_plugFlowPipe__heat_heaLos__b_Medium_specificHeatCapacityCp(threadData, tmp1);
  out_cp = mmc_mk_rcon(_cp);
  return out_cp;
}

DLLDirection
modelica_real omc_pump__v3__basicCold__t_plugFlowPipe__heat_heaLos__b_Medium_temperature(threadData_t *threadData, pump__v3__basicCold__t_plugFlowPipe__heat_heaLos__b_Medium_ThermodynamicState _state)
{
  modelica_real _T;
  _tailrecursive: OMC_LABEL_UNUSED
  // _T has no default value.
  _T = _state._T;
  _return: OMC_LABEL_UNUSED
  return _T;
}
modelica_metatype boxptr_pump__v3__basicCold__t_plugFlowPipe__heat_heaLos__b_Medium_temperature(threadData_t *threadData, modelica_metatype _state)
{
  pump__v3__basicCold__t_plugFlowPipe__heat_heaLos__b_Medium_ThermodynamicState tmp1;
  modelica_metatype tmpMeta2;
  modelica_real tmp3;
  modelica_metatype tmpMeta4;
  modelica_real tmp5;
  modelica_real _T;
  modelica_metatype out_T;
  tmpMeta2 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_state), 2)));
  tmp3 = mmc_unbox_real(tmpMeta2);
  tmp1._p = tmp3;
  tmpMeta4 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_state), 3)));
  tmp5 = mmc_unbox_real(tmpMeta4);
  tmp1._T = tmp5;
  _T = omc_pump__v3__basicCold__t_plugFlowPipe__heat_heaLos__b_Medium_temperature(threadData, tmp1);
  out_T = mmc_mk_rcon(_T);
  return out_T;
}

pump__v3__basicCold__t_plugFlowPipe__heat_res_Medium_ThermodynamicState omc_pump__v3__basicCold__t_plugFlowPipe__heat_res_Medium_ThermodynamicState(threadData_t *threadData, modelica_real omc_p, modelica_real omc_T)
{
  pump__v3__basicCold__t_plugFlowPipe__heat_res_Medium_ThermodynamicState tmp1;
  tmp1._p = omc_p;
  tmp1._T = omc_T;
  return tmp1;
}

modelica_metatype boxptr_pump__v3__basicCold__t_plugFlowPipe__heat_res_Medium_ThermodynamicState(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T)
{
  return mmc_mk_box3(3, &pump__v3__basicCold__t_plugFlowPipe__heat_res_Medium_ThermodynamicState__desc, _p, _T);
}

pump__v3__basicCold__t_plugFlowPipe__heat_vol__a_Medium_ThermodynamicState omc_pump__v3__basicCold__t_plugFlowPipe__heat_vol__a_Medium_ThermodynamicState(threadData_t *threadData, modelica_real omc_p, modelica_real omc_T)
{
  pump__v3__basicCold__t_plugFlowPipe__heat_vol__a_Medium_ThermodynamicState tmp1;
  tmp1._p = omc_p;
  tmp1._T = omc_T;
  return tmp1;
}

modelica_metatype boxptr_pump__v3__basicCold__t_plugFlowPipe__heat_vol__a_Medium_ThermodynamicState(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T)
{
  return mmc_mk_box3(3, &pump__v3__basicCold__t_plugFlowPipe__heat_vol__a_Medium_ThermodynamicState__desc, _p, _T);
}

DLLDirection
modelica_real omc_pump__v3__basicCold__t_plugFlowPipe__heat_vol__a_Medium_density(threadData_t *threadData, pump__v3__basicCold__t_plugFlowPipe__heat_vol__a_Medium_ThermodynamicState _state)
{
  modelica_real _d;
  _tailrecursive: OMC_LABEL_UNUSED
  // _d has no default value.
  _d = 995.586;
  _return: OMC_LABEL_UNUSED
  return _d;
}
modelica_metatype boxptr_pump__v3__basicCold__t_plugFlowPipe__heat_vol__a_Medium_density(threadData_t *threadData, modelica_metatype _state)
{
  pump__v3__basicCold__t_plugFlowPipe__heat_vol__a_Medium_ThermodynamicState tmp1;
  modelica_metatype tmpMeta2;
  modelica_real tmp3;
  modelica_metatype tmpMeta4;
  modelica_real tmp5;
  modelica_real _d;
  modelica_metatype out_d;
  tmpMeta2 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_state), 2)));
  tmp3 = mmc_unbox_real(tmpMeta2);
  tmp1._p = tmp3;
  tmpMeta4 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_state), 3)));
  tmp5 = mmc_unbox_real(tmpMeta4);
  tmp1._T = tmp5;
  _d = omc_pump__v3__basicCold__t_plugFlowPipe__heat_vol__a_Medium_density(threadData, tmp1);
  out_d = mmc_mk_rcon(_d);
  return out_d;
}

DLLDirection
modelica_real omc_pump__v3__basicCold__t_plugFlowPipe__heat_vol__a_Medium_temperature__phX(threadData_t *threadData, modelica_real _p, modelica_real _h, real_array _X)
{
  modelica_real _T;
  modelica_real tmp1;
  _tailrecursive: OMC_LABEL_UNUSED
  // _T has no default value.
  tmp1 = 4184.0;
  if (tmp1 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "h / 4184.0");}
  _T = 273.15 + (_h) / tmp1;
  _return: OMC_LABEL_UNUSED
  return _T;
}
modelica_metatype boxptr_pump__v3__basicCold__t_plugFlowPipe__heat_vol__a_Medium_temperature__phX(threadData_t *threadData, modelica_metatype _p, modelica_metatype _h, modelica_metatype _X)
{
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_real _T;
  modelica_metatype out_T;
  tmp1 = mmc_unbox_real(_p);
  tmp2 = mmc_unbox_real(_h);
  _T = omc_pump__v3__basicCold__t_plugFlowPipe__heat_vol__a_Medium_temperature__phX(threadData, tmp1, tmp2, *((base_array_t*)_X));
  out_T = mmc_mk_rcon(_T);
  return out_T;
}

pump__v3__basicCold__t_plugFlowPipe__heat_vol__a_dynBal_Medium_ThermodynamicState omc_pump__v3__basicCold__t_plugFlowPipe__heat_vol__a_dynBal_Medium_ThermodynamicState(threadData_t *threadData, modelica_real omc_p, modelica_real omc_T)
{
  pump__v3__basicCold__t_plugFlowPipe__heat_vol__a_dynBal_Medium_ThermodynamicState tmp1;
  tmp1._p = omc_p;
  tmp1._T = omc_T;
  return tmp1;
}

modelica_metatype boxptr_pump__v3__basicCold__t_plugFlowPipe__heat_vol__a_dynBal_Medium_ThermodynamicState(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T)
{
  return mmc_mk_box3(3, &pump__v3__basicCold__t_plugFlowPipe__heat_vol__a_dynBal_Medium_ThermodynamicState__desc, _p, _T);
}

DLLDirection
modelica_real omc_pump__v3__basicCold__t_plugFlowPipe__heat_vol__a_dynBal_Medium_density(threadData_t *threadData, pump__v3__basicCold__t_plugFlowPipe__heat_vol__a_dynBal_Medium_ThermodynamicState _state)
{
  modelica_real _d;
  _tailrecursive: OMC_LABEL_UNUSED
  // _d has no default value.
  _d = 995.586;
  _return: OMC_LABEL_UNUSED
  return _d;
}
modelica_metatype boxptr_pump__v3__basicCold__t_plugFlowPipe__heat_vol__a_dynBal_Medium_density(threadData_t *threadData, modelica_metatype _state)
{
  pump__v3__basicCold__t_plugFlowPipe__heat_vol__a_dynBal_Medium_ThermodynamicState tmp1;
  modelica_metatype tmpMeta2;
  modelica_real tmp3;
  modelica_metatype tmpMeta4;
  modelica_real tmp5;
  modelica_real _d;
  modelica_metatype out_d;
  tmpMeta2 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_state), 2)));
  tmp3 = mmc_unbox_real(tmpMeta2);
  tmp1._p = tmp3;
  tmpMeta4 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_state), 3)));
  tmp5 = mmc_unbox_real(tmpMeta4);
  tmp1._T = tmp5;
  _d = omc_pump__v3__basicCold__t_plugFlowPipe__heat_vol__a_dynBal_Medium_density(threadData, tmp1);
  out_d = mmc_mk_rcon(_d);
  return out_d;
}

DLLDirection
pump__v3__basicCold__t_plugFlowPipe__heat_vol__a_dynBal_Medium_ThermodynamicState omc_pump__v3__basicCold__t_plugFlowPipe__heat_vol__a_dynBal_Medium_setState__pTX(threadData_t *threadData, modelica_real _p, modelica_real _T, real_array _X)
{
  pump__v3__basicCold__t_plugFlowPipe__heat_vol__a_dynBal_Medium_ThermodynamicState _state;
  pump__v3__basicCold__t_plugFlowPipe__heat_vol__a_dynBal_Medium_ThermodynamicState tmp1;
  pump__v3__basicCold__t_plugFlowPipe__heat_vol__a_dynBal_Medium_ThermodynamicState tmp2;
  _tailrecursive: OMC_LABEL_UNUSED
  pump__v3__basicCold__t_plugFlowPipe__heat_vol__a_dynBal_Medium_ThermodynamicState_construct(threadData, _state); // _state has no default value.
  tmp2._p = _p;
  tmp2._T = _T;
  tmp1 = tmp2;
  pump__v3__basicCold__t_plugFlowPipe__heat_vol__a_dynBal_Medium_ThermodynamicState_copy(tmp1, _state);;
  _return: OMC_LABEL_UNUSED
  return _state;
}
modelica_metatype boxptr_pump__v3__basicCold__t_plugFlowPipe__heat_vol__a_dynBal_Medium_setState__pTX(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T, modelica_metatype _X)
{
  modelica_real tmp1;
  modelica_real tmp2;
  pump__v3__basicCold__t_plugFlowPipe__heat_vol__a_dynBal_Medium_ThermodynamicState _state;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype out_state;
  tmp1 = mmc_unbox_real(_p);
  tmp2 = mmc_unbox_real(_T);
  _state = omc_pump__v3__basicCold__t_plugFlowPipe__heat_vol__a_dynBal_Medium_setState__pTX(threadData, tmp1, tmp2, *((base_array_t*)_X));
  tmpMeta3 = mmc_mk_rcon(_state._p);
  tmpMeta4 = mmc_mk_rcon(_state._T);
  out_state = mmc_mk_box3(3, &pump__v3__basicCold__t_plugFlowPipe__heat_vol__a_dynBal_Medium_ThermodynamicState__desc, tmpMeta3, tmpMeta4);
  return out_state;
}

DLLDirection
modelica_real omc_pump__v3__basicCold__t_plugFlowPipe__heat_vol__a_dynBal_Medium_specificEnthalpy__pTX(threadData_t *threadData, modelica_real _p, modelica_real _T, real_array _X)
{
  modelica_real _h;
  _tailrecursive: OMC_LABEL_UNUSED
  // _h has no default value.
  _h = (4184.0) * (_T - 273.15);
  _return: OMC_LABEL_UNUSED
  return _h;
}
modelica_metatype boxptr_pump__v3__basicCold__t_plugFlowPipe__heat_vol__a_dynBal_Medium_specificEnthalpy__pTX(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T, modelica_metatype _X)
{
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_real _h;
  modelica_metatype out_h;
  tmp1 = mmc_unbox_real(_p);
  tmp2 = mmc_unbox_real(_T);
  _h = omc_pump__v3__basicCold__t_plugFlowPipe__heat_vol__a_dynBal_Medium_specificEnthalpy__pTX(threadData, tmp1, tmp2, *((base_array_t*)_X));
  out_h = mmc_mk_rcon(_h);
  return out_h;
}

DLLDirection
modelica_real omc_pump__v3__basicCold__t_plugFlowPipe__heat_vol__a_dynBal_Medium_specificInternalEnergy(threadData_t *threadData, pump__v3__basicCold__t_plugFlowPipe__heat_vol__a_dynBal_Medium_ThermodynamicState _state)
{
  modelica_real _u;
  _tailrecursive: OMC_LABEL_UNUSED
  // _u has no default value.
  _u = (4184.0) * (_state._T - 273.15);
  _return: OMC_LABEL_UNUSED
  return _u;
}
modelica_metatype boxptr_pump__v3__basicCold__t_plugFlowPipe__heat_vol__a_dynBal_Medium_specificInternalEnergy(threadData_t *threadData, modelica_metatype _state)
{
  pump__v3__basicCold__t_plugFlowPipe__heat_vol__a_dynBal_Medium_ThermodynamicState tmp1;
  modelica_metatype tmpMeta2;
  modelica_real tmp3;
  modelica_metatype tmpMeta4;
  modelica_real tmp5;
  modelica_real _u;
  modelica_metatype out_u;
  tmpMeta2 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_state), 2)));
  tmp3 = mmc_unbox_real(tmpMeta2);
  tmp1._p = tmp3;
  tmpMeta4 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_state), 3)));
  tmp5 = mmc_unbox_real(tmpMeta4);
  tmp1._T = tmp5;
  _u = omc_pump__v3__basicCold__t_plugFlowPipe__heat_vol__a_dynBal_Medium_specificInternalEnergy(threadData, tmp1);
  out_u = mmc_mk_rcon(_u);
  return out_u;
}

pump__v3__basicCold__t_plugFlowPipe__heat_vol__b_Medium_ThermodynamicState omc_pump__v3__basicCold__t_plugFlowPipe__heat_vol__b_Medium_ThermodynamicState(threadData_t *threadData, modelica_real omc_p, modelica_real omc_T)
{
  pump__v3__basicCold__t_plugFlowPipe__heat_vol__b_Medium_ThermodynamicState tmp1;
  tmp1._p = omc_p;
  tmp1._T = omc_T;
  return tmp1;
}

modelica_metatype boxptr_pump__v3__basicCold__t_plugFlowPipe__heat_vol__b_Medium_ThermodynamicState(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T)
{
  return mmc_mk_box3(3, &pump__v3__basicCold__t_plugFlowPipe__heat_vol__b_Medium_ThermodynamicState__desc, _p, _T);
}

DLLDirection
modelica_real omc_pump__v3__basicCold__t_plugFlowPipe__heat_vol__b_Medium_density(threadData_t *threadData, pump__v3__basicCold__t_plugFlowPipe__heat_vol__b_Medium_ThermodynamicState _state)
{
  modelica_real _d;
  _tailrecursive: OMC_LABEL_UNUSED
  // _d has no default value.
  _d = 995.586;
  _return: OMC_LABEL_UNUSED
  return _d;
}
modelica_metatype boxptr_pump__v3__basicCold__t_plugFlowPipe__heat_vol__b_Medium_density(threadData_t *threadData, modelica_metatype _state)
{
  pump__v3__basicCold__t_plugFlowPipe__heat_vol__b_Medium_ThermodynamicState tmp1;
  modelica_metatype tmpMeta2;
  modelica_real tmp3;
  modelica_metatype tmpMeta4;
  modelica_real tmp5;
  modelica_real _d;
  modelica_metatype out_d;
  tmpMeta2 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_state), 2)));
  tmp3 = mmc_unbox_real(tmpMeta2);
  tmp1._p = tmp3;
  tmpMeta4 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_state), 3)));
  tmp5 = mmc_unbox_real(tmpMeta4);
  tmp1._T = tmp5;
  _d = omc_pump__v3__basicCold__t_plugFlowPipe__heat_vol__b_Medium_density(threadData, tmp1);
  out_d = mmc_mk_rcon(_d);
  return out_d;
}

DLLDirection
modelica_real omc_pump__v3__basicCold__t_plugFlowPipe__heat_vol__b_Medium_temperature__phX(threadData_t *threadData, modelica_real _p, modelica_real _h, real_array _X)
{
  modelica_real _T;
  modelica_real tmp1;
  _tailrecursive: OMC_LABEL_UNUSED
  // _T has no default value.
  tmp1 = 4184.0;
  if (tmp1 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "h / 4184.0");}
  _T = 273.15 + (_h) / tmp1;
  _return: OMC_LABEL_UNUSED
  return _T;
}
modelica_metatype boxptr_pump__v3__basicCold__t_plugFlowPipe__heat_vol__b_Medium_temperature__phX(threadData_t *threadData, modelica_metatype _p, modelica_metatype _h, modelica_metatype _X)
{
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_real _T;
  modelica_metatype out_T;
  tmp1 = mmc_unbox_real(_p);
  tmp2 = mmc_unbox_real(_h);
  _T = omc_pump__v3__basicCold__t_plugFlowPipe__heat_vol__b_Medium_temperature__phX(threadData, tmp1, tmp2, *((base_array_t*)_X));
  out_T = mmc_mk_rcon(_T);
  return out_T;
}

pump__v3__basicCold__t_plugFlowPipe__heat_vol__b_dynBal_Medium_ThermodynamicState omc_pump__v3__basicCold__t_plugFlowPipe__heat_vol__b_dynBal_Medium_ThermodynamicState(threadData_t *threadData, modelica_real omc_p, modelica_real omc_T)
{
  pump__v3__basicCold__t_plugFlowPipe__heat_vol__b_dynBal_Medium_ThermodynamicState tmp1;
  tmp1._p = omc_p;
  tmp1._T = omc_T;
  return tmp1;
}

modelica_metatype boxptr_pump__v3__basicCold__t_plugFlowPipe__heat_vol__b_dynBal_Medium_ThermodynamicState(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T)
{
  return mmc_mk_box3(3, &pump__v3__basicCold__t_plugFlowPipe__heat_vol__b_dynBal_Medium_ThermodynamicState__desc, _p, _T);
}

DLLDirection
modelica_real omc_pump__v3__basicCold__t_plugFlowPipe__heat_vol__b_dynBal_Medium_density(threadData_t *threadData, pump__v3__basicCold__t_plugFlowPipe__heat_vol__b_dynBal_Medium_ThermodynamicState _state)
{
  modelica_real _d;
  _tailrecursive: OMC_LABEL_UNUSED
  // _d has no default value.
  _d = 995.586;
  _return: OMC_LABEL_UNUSED
  return _d;
}
modelica_metatype boxptr_pump__v3__basicCold__t_plugFlowPipe__heat_vol__b_dynBal_Medium_density(threadData_t *threadData, modelica_metatype _state)
{
  pump__v3__basicCold__t_plugFlowPipe__heat_vol__b_dynBal_Medium_ThermodynamicState tmp1;
  modelica_metatype tmpMeta2;
  modelica_real tmp3;
  modelica_metatype tmpMeta4;
  modelica_real tmp5;
  modelica_real _d;
  modelica_metatype out_d;
  tmpMeta2 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_state), 2)));
  tmp3 = mmc_unbox_real(tmpMeta2);
  tmp1._p = tmp3;
  tmpMeta4 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_state), 3)));
  tmp5 = mmc_unbox_real(tmpMeta4);
  tmp1._T = tmp5;
  _d = omc_pump__v3__basicCold__t_plugFlowPipe__heat_vol__b_dynBal_Medium_density(threadData, tmp1);
  out_d = mmc_mk_rcon(_d);
  return out_d;
}

DLLDirection
pump__v3__basicCold__t_plugFlowPipe__heat_vol__b_dynBal_Medium_ThermodynamicState omc_pump__v3__basicCold__t_plugFlowPipe__heat_vol__b_dynBal_Medium_setState__pTX(threadData_t *threadData, modelica_real _p, modelica_real _T, real_array _X)
{
  pump__v3__basicCold__t_plugFlowPipe__heat_vol__b_dynBal_Medium_ThermodynamicState _state;
  pump__v3__basicCold__t_plugFlowPipe__heat_vol__b_dynBal_Medium_ThermodynamicState tmp1;
  pump__v3__basicCold__t_plugFlowPipe__heat_vol__b_dynBal_Medium_ThermodynamicState tmp2;
  _tailrecursive: OMC_LABEL_UNUSED
  pump__v3__basicCold__t_plugFlowPipe__heat_vol__b_dynBal_Medium_ThermodynamicState_construct(threadData, _state); // _state has no default value.
  tmp2._p = _p;
  tmp2._T = _T;
  tmp1 = tmp2;
  pump__v3__basicCold__t_plugFlowPipe__heat_vol__b_dynBal_Medium_ThermodynamicState_copy(tmp1, _state);;
  _return: OMC_LABEL_UNUSED
  return _state;
}
modelica_metatype boxptr_pump__v3__basicCold__t_plugFlowPipe__heat_vol__b_dynBal_Medium_setState__pTX(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T, modelica_metatype _X)
{
  modelica_real tmp1;
  modelica_real tmp2;
  pump__v3__basicCold__t_plugFlowPipe__heat_vol__b_dynBal_Medium_ThermodynamicState _state;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype out_state;
  tmp1 = mmc_unbox_real(_p);
  tmp2 = mmc_unbox_real(_T);
  _state = omc_pump__v3__basicCold__t_plugFlowPipe__heat_vol__b_dynBal_Medium_setState__pTX(threadData, tmp1, tmp2, *((base_array_t*)_X));
  tmpMeta3 = mmc_mk_rcon(_state._p);
  tmpMeta4 = mmc_mk_rcon(_state._T);
  out_state = mmc_mk_box3(3, &pump__v3__basicCold__t_plugFlowPipe__heat_vol__b_dynBal_Medium_ThermodynamicState__desc, tmpMeta3, tmpMeta4);
  return out_state;
}

DLLDirection
modelica_real omc_pump__v3__basicCold__t_plugFlowPipe__heat_vol__b_dynBal_Medium_specificEnthalpy__pTX(threadData_t *threadData, modelica_real _p, modelica_real _T, real_array _X)
{
  modelica_real _h;
  _tailrecursive: OMC_LABEL_UNUSED
  // _h has no default value.
  _h = (4184.0) * (_T - 273.15);
  _return: OMC_LABEL_UNUSED
  return _h;
}
modelica_metatype boxptr_pump__v3__basicCold__t_plugFlowPipe__heat_vol__b_dynBal_Medium_specificEnthalpy__pTX(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T, modelica_metatype _X)
{
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_real _h;
  modelica_metatype out_h;
  tmp1 = mmc_unbox_real(_p);
  tmp2 = mmc_unbox_real(_T);
  _h = omc_pump__v3__basicCold__t_plugFlowPipe__heat_vol__b_dynBal_Medium_specificEnthalpy__pTX(threadData, tmp1, tmp2, *((base_array_t*)_X));
  out_h = mmc_mk_rcon(_h);
  return out_h;
}

DLLDirection
modelica_real omc_pump__v3__basicCold__t_plugFlowPipe__heat_vol__b_dynBal_Medium_specificInternalEnergy(threadData_t *threadData, pump__v3__basicCold__t_plugFlowPipe__heat_vol__b_dynBal_Medium_ThermodynamicState _state)
{
  modelica_real _u;
  _tailrecursive: OMC_LABEL_UNUSED
  // _u has no default value.
  _u = (4184.0) * (_state._T - 273.15);
  _return: OMC_LABEL_UNUSED
  return _u;
}
modelica_metatype boxptr_pump__v3__basicCold__t_plugFlowPipe__heat_vol__b_dynBal_Medium_specificInternalEnergy(threadData_t *threadData, modelica_metatype _state)
{
  pump__v3__basicCold__t_plugFlowPipe__heat_vol__b_dynBal_Medium_ThermodynamicState tmp1;
  modelica_metatype tmpMeta2;
  modelica_real tmp3;
  modelica_metatype tmpMeta4;
  modelica_real tmp5;
  modelica_real _u;
  modelica_metatype out_u;
  tmpMeta2 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_state), 2)));
  tmp3 = mmc_unbox_real(tmpMeta2);
  tmp1._p = tmp3;
  tmpMeta4 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_state), 3)));
  tmp5 = mmc_unbox_real(tmpMeta4);
  tmp1._T = tmp5;
  _u = omc_pump__v3__basicCold__t_plugFlowPipe__heat_vol__b_dynBal_Medium_specificInternalEnergy(threadData, tmp1);
  out_u = mmc_mk_rcon(_u);
  return out_u;
}

pump__v3__basicCold__t_pump_Medium_ThermodynamicState omc_pump__v3__basicCold__t_pump_Medium_ThermodynamicState(threadData_t *threadData, modelica_real omc_p, modelica_real omc_T)
{
  pump__v3__basicCold__t_pump_Medium_ThermodynamicState tmp1;
  tmp1._p = omc_p;
  tmp1._T = omc_T;
  return tmp1;
}

modelica_metatype boxptr_pump__v3__basicCold__t_pump_Medium_ThermodynamicState(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T)
{
  return mmc_mk_box3(3, &pump__v3__basicCold__t_pump_Medium_ThermodynamicState__desc, _p, _T);
}

DLLDirection
modelica_real omc_pump__v3__basicCold__t_pump_Medium_specificEnthalpy(threadData_t *threadData, pump__v3__basicCold__t_pump_Medium_ThermodynamicState _state)
{
  modelica_real _h;
  _tailrecursive: OMC_LABEL_UNUSED
  // _h has no default value.
  _h = (4184.0) * (_state._T - 273.15);
  _return: OMC_LABEL_UNUSED
  return _h;
}
modelica_metatype boxptr_pump__v3__basicCold__t_pump_Medium_specificEnthalpy(threadData_t *threadData, modelica_metatype _state)
{
  pump__v3__basicCold__t_pump_Medium_ThermodynamicState tmp1;
  modelica_metatype tmpMeta2;
  modelica_real tmp3;
  modelica_metatype tmpMeta4;
  modelica_real tmp5;
  modelica_real _h;
  modelica_metatype out_h;
  tmpMeta2 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_state), 2)));
  tmp3 = mmc_unbox_real(tmpMeta2);
  tmp1._p = tmp3;
  tmpMeta4 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_state), 3)));
  tmp5 = mmc_unbox_real(tmpMeta4);
  tmp1._T = tmp5;
  _h = omc_pump__v3__basicCold__t_pump_Medium_specificEnthalpy(threadData, tmp1);
  out_h = mmc_mk_rcon(_h);
  return out_h;
}

pump__v3__basicCold__t_pump_preSou_Medium_ThermodynamicState omc_pump__v3__basicCold__t_pump_preSou_Medium_ThermodynamicState(threadData_t *threadData, modelica_real omc_p, modelica_real omc_T)
{
  pump__v3__basicCold__t_pump_preSou_Medium_ThermodynamicState tmp1;
  tmp1._p = omc_p;
  tmp1._T = omc_T;
  return tmp1;
}

modelica_metatype boxptr_pump__v3__basicCold__t_pump_preSou_Medium_ThermodynamicState(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T)
{
  return mmc_mk_box3(3, &pump__v3__basicCold__t_pump_preSou_Medium_ThermodynamicState__desc, _p, _T);
}

DLLDirection
modelica_real omc_pump__v3__basicCold__t_pump_preSou_Medium_density(threadData_t *threadData, pump__v3__basicCold__t_pump_preSou_Medium_ThermodynamicState _state)
{
  modelica_real _d;
  _tailrecursive: OMC_LABEL_UNUSED
  // _d has no default value.
  _d = 995.586;
  _return: OMC_LABEL_UNUSED
  return _d;
}
modelica_metatype boxptr_pump__v3__basicCold__t_pump_preSou_Medium_density(threadData_t *threadData, modelica_metatype _state)
{
  pump__v3__basicCold__t_pump_preSou_Medium_ThermodynamicState tmp1;
  modelica_metatype tmpMeta2;
  modelica_real tmp3;
  modelica_metatype tmpMeta4;
  modelica_real tmp5;
  modelica_real _d;
  modelica_metatype out_d;
  tmpMeta2 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_state), 2)));
  tmp3 = mmc_unbox_real(tmpMeta2);
  tmp1._p = tmp3;
  tmpMeta4 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_state), 3)));
  tmp5 = mmc_unbox_real(tmpMeta4);
  tmp1._T = tmp5;
  _d = omc_pump__v3__basicCold__t_pump_preSou_Medium_density(threadData, tmp1);
  out_d = mmc_mk_rcon(_d);
  return out_d;
}

DLLDirection
pump__v3__basicCold__t_pump_preSou_Medium_ThermodynamicState omc_pump__v3__basicCold__t_pump_preSou_Medium_setState__phX(threadData_t *threadData, modelica_real _p, modelica_real _h, real_array _X)
{
  pump__v3__basicCold__t_pump_preSou_Medium_ThermodynamicState _state;
  pump__v3__basicCold__t_pump_preSou_Medium_ThermodynamicState tmp1;
  pump__v3__basicCold__t_pump_preSou_Medium_ThermodynamicState tmp2;
  modelica_real tmp3;
  _tailrecursive: OMC_LABEL_UNUSED
  pump__v3__basicCold__t_pump_preSou_Medium_ThermodynamicState_construct(threadData, _state); // _state has no default value.
  tmp3 = 4184.0;
  if (tmp3 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "h / 4184.0");}
  tmp2._p = _p;
  tmp2._T = 273.15 + (_h) / tmp3;
  tmp1 = tmp2;
  pump__v3__basicCold__t_pump_preSou_Medium_ThermodynamicState_copy(tmp1, _state);;
  _return: OMC_LABEL_UNUSED
  return _state;
}
modelica_metatype boxptr_pump__v3__basicCold__t_pump_preSou_Medium_setState__phX(threadData_t *threadData, modelica_metatype _p, modelica_metatype _h, modelica_metatype _X)
{
  modelica_real tmp1;
  modelica_real tmp2;
  pump__v3__basicCold__t_pump_preSou_Medium_ThermodynamicState _state;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype out_state;
  tmp1 = mmc_unbox_real(_p);
  tmp2 = mmc_unbox_real(_h);
  _state = omc_pump__v3__basicCold__t_pump_preSou_Medium_setState__phX(threadData, tmp1, tmp2, *((base_array_t*)_X));
  tmpMeta3 = mmc_mk_rcon(_state._p);
  tmpMeta4 = mmc_mk_rcon(_state._T);
  out_state = mmc_mk_box3(3, &pump__v3__basicCold__t_pump_preSou_Medium_ThermodynamicState__desc, tmpMeta3, tmpMeta4);
  return out_state;
}

pump__v3__basicCold__t_pump_vol_Medium_ThermodynamicState omc_pump__v3__basicCold__t_pump_vol_Medium_ThermodynamicState(threadData_t *threadData, modelica_real omc_p, modelica_real omc_T)
{
  pump__v3__basicCold__t_pump_vol_Medium_ThermodynamicState tmp1;
  tmp1._p = omc_p;
  tmp1._T = omc_T;
  return tmp1;
}

modelica_metatype boxptr_pump__v3__basicCold__t_pump_vol_Medium_ThermodynamicState(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T)
{
  return mmc_mk_box3(3, &pump__v3__basicCold__t_pump_vol_Medium_ThermodynamicState__desc, _p, _T);
}

DLLDirection
modelica_real omc_pump__v3__basicCold__t_pump_vol_Medium_density(threadData_t *threadData, pump__v3__basicCold__t_pump_vol_Medium_ThermodynamicState _state)
{
  modelica_real _d;
  _tailrecursive: OMC_LABEL_UNUSED
  // _d has no default value.
  _d = 995.586;
  _return: OMC_LABEL_UNUSED
  return _d;
}
modelica_metatype boxptr_pump__v3__basicCold__t_pump_vol_Medium_density(threadData_t *threadData, modelica_metatype _state)
{
  pump__v3__basicCold__t_pump_vol_Medium_ThermodynamicState tmp1;
  modelica_metatype tmpMeta2;
  modelica_real tmp3;
  modelica_metatype tmpMeta4;
  modelica_real tmp5;
  modelica_real _d;
  modelica_metatype out_d;
  tmpMeta2 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_state), 2)));
  tmp3 = mmc_unbox_real(tmpMeta2);
  tmp1._p = tmp3;
  tmpMeta4 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_state), 3)));
  tmp5 = mmc_unbox_real(tmpMeta4);
  tmp1._T = tmp5;
  _d = omc_pump__v3__basicCold__t_pump_vol_Medium_density(threadData, tmp1);
  out_d = mmc_mk_rcon(_d);
  return out_d;
}

DLLDirection
modelica_real omc_pump__v3__basicCold__t_pump_vol_Medium_temperature__phX(threadData_t *threadData, modelica_real _p, modelica_real _h, real_array _X)
{
  modelica_real _T;
  modelica_real tmp1;
  _tailrecursive: OMC_LABEL_UNUSED
  // _T has no default value.
  tmp1 = 4184.0;
  if (tmp1 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "h / 4184.0");}
  _T = 273.15 + (_h) / tmp1;
  _return: OMC_LABEL_UNUSED
  return _T;
}
modelica_metatype boxptr_pump__v3__basicCold__t_pump_vol_Medium_temperature__phX(threadData_t *threadData, modelica_metatype _p, modelica_metatype _h, modelica_metatype _X)
{
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_real _T;
  modelica_metatype out_T;
  tmp1 = mmc_unbox_real(_p);
  tmp2 = mmc_unbox_real(_h);
  _T = omc_pump__v3__basicCold__t_pump_vol_Medium_temperature__phX(threadData, tmp1, tmp2, *((base_array_t*)_X));
  out_T = mmc_mk_rcon(_T);
  return out_T;
}

pump__v3__basicCold__t_pump_vol_dynBal_Medium_ThermodynamicState omc_pump__v3__basicCold__t_pump_vol_dynBal_Medium_ThermodynamicState(threadData_t *threadData, modelica_real omc_p, modelica_real omc_T)
{
  pump__v3__basicCold__t_pump_vol_dynBal_Medium_ThermodynamicState tmp1;
  tmp1._p = omc_p;
  tmp1._T = omc_T;
  return tmp1;
}

modelica_metatype boxptr_pump__v3__basicCold__t_pump_vol_dynBal_Medium_ThermodynamicState(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T)
{
  return mmc_mk_box3(3, &pump__v3__basicCold__t_pump_vol_dynBal_Medium_ThermodynamicState__desc, _p, _T);
}

DLLDirection
modelica_real omc_pump__v3__basicCold__t_pump_vol_dynBal_Medium_density(threadData_t *threadData, pump__v3__basicCold__t_pump_vol_dynBal_Medium_ThermodynamicState _state)
{
  modelica_real _d;
  _tailrecursive: OMC_LABEL_UNUSED
  // _d has no default value.
  _d = 995.586;
  _return: OMC_LABEL_UNUSED
  return _d;
}
modelica_metatype boxptr_pump__v3__basicCold__t_pump_vol_dynBal_Medium_density(threadData_t *threadData, modelica_metatype _state)
{
  pump__v3__basicCold__t_pump_vol_dynBal_Medium_ThermodynamicState tmp1;
  modelica_metatype tmpMeta2;
  modelica_real tmp3;
  modelica_metatype tmpMeta4;
  modelica_real tmp5;
  modelica_real _d;
  modelica_metatype out_d;
  tmpMeta2 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_state), 2)));
  tmp3 = mmc_unbox_real(tmpMeta2);
  tmp1._p = tmp3;
  tmpMeta4 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_state), 3)));
  tmp5 = mmc_unbox_real(tmpMeta4);
  tmp1._T = tmp5;
  _d = omc_pump__v3__basicCold__t_pump_vol_dynBal_Medium_density(threadData, tmp1);
  out_d = mmc_mk_rcon(_d);
  return out_d;
}

DLLDirection
pump__v3__basicCold__t_pump_vol_dynBal_Medium_ThermodynamicState omc_pump__v3__basicCold__t_pump_vol_dynBal_Medium_setState__pTX(threadData_t *threadData, modelica_real _p, modelica_real _T, real_array _X)
{
  pump__v3__basicCold__t_pump_vol_dynBal_Medium_ThermodynamicState _state;
  pump__v3__basicCold__t_pump_vol_dynBal_Medium_ThermodynamicState tmp1;
  pump__v3__basicCold__t_pump_vol_dynBal_Medium_ThermodynamicState tmp2;
  _tailrecursive: OMC_LABEL_UNUSED
  pump__v3__basicCold__t_pump_vol_dynBal_Medium_ThermodynamicState_construct(threadData, _state); // _state has no default value.
  tmp2._p = _p;
  tmp2._T = _T;
  tmp1 = tmp2;
  pump__v3__basicCold__t_pump_vol_dynBal_Medium_ThermodynamicState_copy(tmp1, _state);;
  _return: OMC_LABEL_UNUSED
  return _state;
}
modelica_metatype boxptr_pump__v3__basicCold__t_pump_vol_dynBal_Medium_setState__pTX(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T, modelica_metatype _X)
{
  modelica_real tmp1;
  modelica_real tmp2;
  pump__v3__basicCold__t_pump_vol_dynBal_Medium_ThermodynamicState _state;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype out_state;
  tmp1 = mmc_unbox_real(_p);
  tmp2 = mmc_unbox_real(_T);
  _state = omc_pump__v3__basicCold__t_pump_vol_dynBal_Medium_setState__pTX(threadData, tmp1, tmp2, *((base_array_t*)_X));
  tmpMeta3 = mmc_mk_rcon(_state._p);
  tmpMeta4 = mmc_mk_rcon(_state._T);
  out_state = mmc_mk_box3(3, &pump__v3__basicCold__t_pump_vol_dynBal_Medium_ThermodynamicState__desc, tmpMeta3, tmpMeta4);
  return out_state;
}

DLLDirection
modelica_real omc_pump__v3__basicCold__t_pump_vol_dynBal_Medium_specificEnthalpy__pTX(threadData_t *threadData, modelica_real _p, modelica_real _T, real_array _X)
{
  modelica_real _h;
  _tailrecursive: OMC_LABEL_UNUSED
  // _h has no default value.
  _h = (4184.0) * (_T - 273.15);
  _return: OMC_LABEL_UNUSED
  return _h;
}
modelica_metatype boxptr_pump__v3__basicCold__t_pump_vol_dynBal_Medium_specificEnthalpy__pTX(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T, modelica_metatype _X)
{
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_real _h;
  modelica_metatype out_h;
  tmp1 = mmc_unbox_real(_p);
  tmp2 = mmc_unbox_real(_T);
  _h = omc_pump__v3__basicCold__t_pump_vol_dynBal_Medium_specificEnthalpy__pTX(threadData, tmp1, tmp2, *((base_array_t*)_X));
  out_h = mmc_mk_rcon(_h);
  return out_h;
}

DLLDirection
modelica_real omc_pump__v3__basicCold__t_pump_vol_dynBal_Medium_specificInternalEnergy(threadData_t *threadData, pump__v3__basicCold__t_pump_vol_dynBal_Medium_ThermodynamicState _state)
{
  modelica_real _u;
  _tailrecursive: OMC_LABEL_UNUSED
  // _u has no default value.
  _u = (4184.0) * (_state._T - 273.15);
  _return: OMC_LABEL_UNUSED
  return _u;
}
modelica_metatype boxptr_pump__v3__basicCold__t_pump_vol_dynBal_Medium_specificInternalEnergy(threadData_t *threadData, modelica_metatype _state)
{
  pump__v3__basicCold__t_pump_vol_dynBal_Medium_ThermodynamicState tmp1;
  modelica_metatype tmpMeta2;
  modelica_real tmp3;
  modelica_metatype tmpMeta4;
  modelica_real tmp5;
  modelica_real _u;
  modelica_metatype out_u;
  tmpMeta2 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_state), 2)));
  tmp3 = mmc_unbox_real(tmpMeta2);
  tmp1._p = tmp3;
  tmpMeta4 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_state), 3)));
  tmp5 = mmc_unbox_real(tmpMeta4);
  tmp1._T = tmp5;
  _u = omc_pump__v3__basicCold__t_pump_vol_dynBal_Medium_specificInternalEnergy(threadData, tmp1);
  out_u = mmc_mk_rcon(_u);
  return out_u;
}

pump__v3__basicCold__t_senTemIn__heat_Medium_ThermodynamicState omc_pump__v3__basicCold__t_senTemIn__heat_Medium_ThermodynamicState(threadData_t *threadData, modelica_real omc_p, modelica_real omc_T)
{
  pump__v3__basicCold__t_senTemIn__heat_Medium_ThermodynamicState tmp1;
  tmp1._p = omc_p;
  tmp1._T = omc_T;
  return tmp1;
}

modelica_metatype boxptr_pump__v3__basicCold__t_senTemIn__heat_Medium_ThermodynamicState(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T)
{
  return mmc_mk_box3(3, &pump__v3__basicCold__t_senTemIn__heat_Medium_ThermodynamicState__desc, _p, _T);
}

DLLDirection
pump__v3__basicCold__t_senTemIn__heat_Medium_ThermodynamicState omc_pump__v3__basicCold__t_senTemIn__heat_Medium_setState__phX(threadData_t *threadData, modelica_real _p, modelica_real _h, real_array _X)
{
  pump__v3__basicCold__t_senTemIn__heat_Medium_ThermodynamicState _state;
  pump__v3__basicCold__t_senTemIn__heat_Medium_ThermodynamicState tmp1;
  pump__v3__basicCold__t_senTemIn__heat_Medium_ThermodynamicState tmp2;
  modelica_real tmp3;
  _tailrecursive: OMC_LABEL_UNUSED
  pump__v3__basicCold__t_senTemIn__heat_Medium_ThermodynamicState_construct(threadData, _state); // _state has no default value.
  tmp3 = 4184.0;
  if (tmp3 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "h / 4184.0");}
  tmp2._p = _p;
  tmp2._T = 273.15 + (_h) / tmp3;
  tmp1 = tmp2;
  pump__v3__basicCold__t_senTemIn__heat_Medium_ThermodynamicState_copy(tmp1, _state);;
  _return: OMC_LABEL_UNUSED
  return _state;
}
modelica_metatype boxptr_pump__v3__basicCold__t_senTemIn__heat_Medium_setState__phX(threadData_t *threadData, modelica_metatype _p, modelica_metatype _h, modelica_metatype _X)
{
  modelica_real tmp1;
  modelica_real tmp2;
  pump__v3__basicCold__t_senTemIn__heat_Medium_ThermodynamicState _state;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype out_state;
  tmp1 = mmc_unbox_real(_p);
  tmp2 = mmc_unbox_real(_h);
  _state = omc_pump__v3__basicCold__t_senTemIn__heat_Medium_setState__phX(threadData, tmp1, tmp2, *((base_array_t*)_X));
  tmpMeta3 = mmc_mk_rcon(_state._p);
  tmpMeta4 = mmc_mk_rcon(_state._T);
  out_state = mmc_mk_box3(3, &pump__v3__basicCold__t_senTemIn__heat_Medium_ThermodynamicState__desc, tmpMeta3, tmpMeta4);
  return out_state;
}

DLLDirection
modelica_real omc_pump__v3__basicCold__t_senTemIn__heat_Medium_temperature(threadData_t *threadData, pump__v3__basicCold__t_senTemIn__heat_Medium_ThermodynamicState _state)
{
  modelica_real _T;
  _tailrecursive: OMC_LABEL_UNUSED
  // _T has no default value.
  _T = _state._T;
  _return: OMC_LABEL_UNUSED
  return _T;
}
modelica_metatype boxptr_pump__v3__basicCold__t_senTemIn__heat_Medium_temperature(threadData_t *threadData, modelica_metatype _state)
{
  pump__v3__basicCold__t_senTemIn__heat_Medium_ThermodynamicState tmp1;
  modelica_metatype tmpMeta2;
  modelica_real tmp3;
  modelica_metatype tmpMeta4;
  modelica_real tmp5;
  modelica_real _T;
  modelica_metatype out_T;
  tmpMeta2 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_state), 2)));
  tmp3 = mmc_unbox_real(tmpMeta2);
  tmp1._p = tmp3;
  tmpMeta4 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_state), 3)));
  tmp5 = mmc_unbox_real(tmpMeta4);
  tmp1._T = tmp5;
  _T = omc_pump__v3__basicCold__t_senTemIn__heat_Medium_temperature(threadData, tmp1);
  out_T = mmc_mk_rcon(_T);
  return out_T;
}

pump__v3__basicCold__t_senTemOut__cold_Medium_ThermodynamicState omc_pump__v3__basicCold__t_senTemOut__cold_Medium_ThermodynamicState(threadData_t *threadData, modelica_real omc_p, modelica_real omc_T)
{
  pump__v3__basicCold__t_senTemOut__cold_Medium_ThermodynamicState tmp1;
  tmp1._p = omc_p;
  tmp1._T = omc_T;
  return tmp1;
}

modelica_metatype boxptr_pump__v3__basicCold__t_senTemOut__cold_Medium_ThermodynamicState(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T)
{
  return mmc_mk_box3(3, &pump__v3__basicCold__t_senTemOut__cold_Medium_ThermodynamicState__desc, _p, _T);
}

DLLDirection
pump__v3__basicCold__t_senTemOut__cold_Medium_ThermodynamicState omc_pump__v3__basicCold__t_senTemOut__cold_Medium_setState__phX(threadData_t *threadData, modelica_real _p, modelica_real _h, real_array _X)
{
  pump__v3__basicCold__t_senTemOut__cold_Medium_ThermodynamicState _state;
  pump__v3__basicCold__t_senTemOut__cold_Medium_ThermodynamicState tmp1;
  pump__v3__basicCold__t_senTemOut__cold_Medium_ThermodynamicState tmp2;
  modelica_real tmp3;
  _tailrecursive: OMC_LABEL_UNUSED
  pump__v3__basicCold__t_senTemOut__cold_Medium_ThermodynamicState_construct(threadData, _state); // _state has no default value.
  tmp3 = 4184.0;
  if (tmp3 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "h / 4184.0");}
  tmp2._p = _p;
  tmp2._T = 273.15 + (_h) / tmp3;
  tmp1 = tmp2;
  pump__v3__basicCold__t_senTemOut__cold_Medium_ThermodynamicState_copy(tmp1, _state);;
  _return: OMC_LABEL_UNUSED
  return _state;
}
modelica_metatype boxptr_pump__v3__basicCold__t_senTemOut__cold_Medium_setState__phX(threadData_t *threadData, modelica_metatype _p, modelica_metatype _h, modelica_metatype _X)
{
  modelica_real tmp1;
  modelica_real tmp2;
  pump__v3__basicCold__t_senTemOut__cold_Medium_ThermodynamicState _state;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype out_state;
  tmp1 = mmc_unbox_real(_p);
  tmp2 = mmc_unbox_real(_h);
  _state = omc_pump__v3__basicCold__t_senTemOut__cold_Medium_setState__phX(threadData, tmp1, tmp2, *((base_array_t*)_X));
  tmpMeta3 = mmc_mk_rcon(_state._p);
  tmpMeta4 = mmc_mk_rcon(_state._T);
  out_state = mmc_mk_box3(3, &pump__v3__basicCold__t_senTemOut__cold_Medium_ThermodynamicState__desc, tmpMeta3, tmpMeta4);
  return out_state;
}

DLLDirection
modelica_real omc_pump__v3__basicCold__t_senTemOut__cold_Medium_temperature(threadData_t *threadData, pump__v3__basicCold__t_senTemOut__cold_Medium_ThermodynamicState _state)
{
  modelica_real _T;
  _tailrecursive: OMC_LABEL_UNUSED
  // _T has no default value.
  _T = _state._T;
  _return: OMC_LABEL_UNUSED
  return _T;
}
modelica_metatype boxptr_pump__v3__basicCold__t_senTemOut__cold_Medium_temperature(threadData_t *threadData, modelica_metatype _state)
{
  pump__v3__basicCold__t_senTemOut__cold_Medium_ThermodynamicState tmp1;
  modelica_metatype tmpMeta2;
  modelica_real tmp3;
  modelica_metatype tmpMeta4;
  modelica_real tmp5;
  modelica_real _T;
  modelica_metatype out_T;
  tmpMeta2 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_state), 2)));
  tmp3 = mmc_unbox_real(tmpMeta2);
  tmp1._p = tmp3;
  tmpMeta4 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_state), 3)));
  tmp5 = mmc_unbox_real(tmpMeta4);
  tmp1._T = tmp5;
  _T = omc_pump__v3__basicCold__t_senTemOut__cold_Medium_temperature(threadData, tmp1);
  out_T = mmc_mk_rcon(_T);
  return out_T;
}

pump__v3__basicCold__t_senTemOut__heat_Medium_ThermodynamicState omc_pump__v3__basicCold__t_senTemOut__heat_Medium_ThermodynamicState(threadData_t *threadData, modelica_real omc_p, modelica_real omc_T)
{
  pump__v3__basicCold__t_senTemOut__heat_Medium_ThermodynamicState tmp1;
  tmp1._p = omc_p;
  tmp1._T = omc_T;
  return tmp1;
}

modelica_metatype boxptr_pump__v3__basicCold__t_senTemOut__heat_Medium_ThermodynamicState(threadData_t *threadData, modelica_metatype _p, modelica_metatype _T)
{
  return mmc_mk_box3(3, &pump__v3__basicCold__t_senTemOut__heat_Medium_ThermodynamicState__desc, _p, _T);
}

DLLDirection
pump__v3__basicCold__t_senTemOut__heat_Medium_ThermodynamicState omc_pump__v3__basicCold__t_senTemOut__heat_Medium_setState__phX(threadData_t *threadData, modelica_real _p, modelica_real _h, real_array _X)
{
  pump__v3__basicCold__t_senTemOut__heat_Medium_ThermodynamicState _state;
  pump__v3__basicCold__t_senTemOut__heat_Medium_ThermodynamicState tmp1;
  pump__v3__basicCold__t_senTemOut__heat_Medium_ThermodynamicState tmp2;
  modelica_real tmp3;
  _tailrecursive: OMC_LABEL_UNUSED
  pump__v3__basicCold__t_senTemOut__heat_Medium_ThermodynamicState_construct(threadData, _state); // _state has no default value.
  tmp3 = 4184.0;
  if (tmp3 == 0) {throwStreamPrint(threadData, "Division by zero %s in function context", "h / 4184.0");}
  tmp2._p = _p;
  tmp2._T = 273.15 + (_h) / tmp3;
  tmp1 = tmp2;
  pump__v3__basicCold__t_senTemOut__heat_Medium_ThermodynamicState_copy(tmp1, _state);;
  _return: OMC_LABEL_UNUSED
  return _state;
}
modelica_metatype boxptr_pump__v3__basicCold__t_senTemOut__heat_Medium_setState__phX(threadData_t *threadData, modelica_metatype _p, modelica_metatype _h, modelica_metatype _X)
{
  modelica_real tmp1;
  modelica_real tmp2;
  pump__v3__basicCold__t_senTemOut__heat_Medium_ThermodynamicState _state;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype out_state;
  tmp1 = mmc_unbox_real(_p);
  tmp2 = mmc_unbox_real(_h);
  _state = omc_pump__v3__basicCold__t_senTemOut__heat_Medium_setState__phX(threadData, tmp1, tmp2, *((base_array_t*)_X));
  tmpMeta3 = mmc_mk_rcon(_state._p);
  tmpMeta4 = mmc_mk_rcon(_state._T);
  out_state = mmc_mk_box3(3, &pump__v3__basicCold__t_senTemOut__heat_Medium_ThermodynamicState__desc, tmpMeta3, tmpMeta4);
  return out_state;
}

DLLDirection
modelica_real omc_pump__v3__basicCold__t_senTemOut__heat_Medium_temperature(threadData_t *threadData, pump__v3__basicCold__t_senTemOut__heat_Medium_ThermodynamicState _state)
{
  modelica_real _T;
  _tailrecursive: OMC_LABEL_UNUSED
  // _T has no default value.
  _T = _state._T;
  _return: OMC_LABEL_UNUSED
  return _T;
}
modelica_metatype boxptr_pump__v3__basicCold__t_senTemOut__heat_Medium_temperature(threadData_t *threadData, modelica_metatype _state)
{
  pump__v3__basicCold__t_senTemOut__heat_Medium_ThermodynamicState tmp1;
  modelica_metatype tmpMeta2;
  modelica_real tmp3;
  modelica_metatype tmpMeta4;
  modelica_real tmp5;
  modelica_real _T;
  modelica_metatype out_T;
  tmpMeta2 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_state), 2)));
  tmp3 = mmc_unbox_real(tmpMeta2);
  tmp1._p = tmp3;
  tmpMeta4 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_state), 3)));
  tmp5 = mmc_unbox_real(tmpMeta4);
  tmp1._T = tmp5;
  _T = omc_pump__v3__basicCold__t_senTemOut__heat_Medium_temperature(threadData, tmp1);
  out_T = mmc_mk_rcon(_T);
  return out_T;
}

#ifdef __cplusplus
}
#endif
