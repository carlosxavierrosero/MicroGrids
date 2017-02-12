#ifndef __c25_experiment_lib2_h__
#define __c25_experiment_lib2_h__

/* Include files */
#include "sf_runtime/sfc_sf.h"
#include "sf_runtime/sfc_mex.h"
#include "rtwtypes.h"
#include "multiword_types.h"

/* Type Definitions */
#ifndef typedef_SFc25_experiment_lib2InstanceStruct
#define typedef_SFc25_experiment_lib2InstanceStruct

typedef struct {
  SimStruct *S;
  ChartInfoStruct chartInfo;
  uint32_T chartNumber;
  uint32_T instanceNumber;
  int32_T c25_sfEvent;
  boolean_T c25_isStable;
  boolean_T c25_doneDoubleBufferReInit;
  uint8_T c25_is_active_c25_experiment_lib2;
  real_T c25_a;
  real_T c25_wo;
  real_T c25_kif;
  real_T c25_kpf;
  real_T c25_kiV;
  real_T c25_kpV;
  real_T c25_ts;
  real_T c25_dr[4];
  real_T c25_t;
  boolean_T c25_t_not_empty;
  real_T c25_tc;
  boolean_T c25_tc_not_empty;
  real_T c25_drift;
  boolean_T c25_drift_not_empty;
  real_T c25_integral;
  boolean_T c25_integral_not_empty;
} SFc25_experiment_lib2InstanceStruct;

#endif                                 /*typedef_SFc25_experiment_lib2InstanceStruct*/

/* Named Constants */

/* Variable Declarations */

/* Variable Definitions */

/* Function Declarations */
extern const mxArray *sf_c25_experiment_lib2_get_eml_resolved_functions_info
  (void);

/* Function Definitions */
extern void sf_c25_experiment_lib2_get_check_sum(mxArray *plhs[]);
extern void c25_experiment_lib2_method_dispatcher(SimStruct *S, int_T method,
  void *data);

#endif
