/* Include files */

#include "Modell_PID_sfun.h"
#include "c1_Modell_PID.h"
#include "mwmathutil.h"
#define _SF_MEX_LISTEN_FOR_CTRL_C(S)   sf_mex_listen_for_ctrl_c(S);
#ifdef utFree
#undef utFree
#endif

#ifdef utMalloc
#undef utMalloc
#endif

#ifdef __cplusplus

extern "C" void *utMalloc(size_t size);
extern "C" void utFree(void*);

#else

extern void *utMalloc(size_t size);
extern void utFree(void*);

#endif

/* Forward Declarations */

/* Type Definitions */

/* Named Constants */
#define CALL_EVENT                     (-1)

/* Variable Declarations */

/* Variable Definitions */
static real_T _sfTime_;
static emlrtMCInfo c1_emlrtMCI = { 1,  /* lineNo */
  1,                                   /* colNo */
  "SystemCore",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\system\\coder\\+matlab\\+system\\+coder\\SystemCore.p"/* pName */
};

static emlrtMCInfo c1_b_emlrtMCI = { 28,/* lineNo */
  27,                                  /* colNo */
  "unaryMinOrMax",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\eml\\eml\\+coder\\+internal\\unaryMinOrMax.m"/* pName */
};

static emlrtMCInfo c1_c_emlrtMCI = { 134,/* lineNo */
  27,                                  /* colNo */
  "unaryMinOrMax",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\eml\\eml\\+coder\\+internal\\unaryMinOrMax.m"/* pName */
};

static emlrtMCInfo c1_d_emlrtMCI = { 87,/* lineNo */
  33,                                  /* colNo */
  "eml_int_forloop_overflow_check",    /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\eml\\lib\\matlab\\eml\\eml_int_forloop_overflow_check.m"/* pName */
};

static emlrtRSInfo c1_emlrtRSI = { 1,  /* lineNo */
  "BlobAnalysis",                      /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\vision\\vision\\+visioncodegen\\BlobAnalysis.p"/* pathName */
};

static emlrtRSInfo c1_b_emlrtRSI = { 1,/* lineNo */
  "System",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\system\\coder\\+matlab\\+system\\+coder\\System.p"/* pathName */
};

static emlrtRSInfo c1_c_emlrtRSI = { 1,/* lineNo */
  "SystemProp",                        /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\system\\coder\\+matlab\\+system\\+coder\\SystemProp.p"/* pathName */
};

static emlrtRSInfo c1_d_emlrtRSI = { 1,/* lineNo */
  "SystemCore",                        /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\system\\coder\\+matlab\\+system\\+coder\\SystemCore.p"/* pathName */
};

static emlrtRSInfo c1_e_emlrtRSI = { 1,/* lineNo */
  "ProcessConstructorArguments",       /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\shared\\system\\coder\\+matlab\\+system\\+coder\\ProcessConstructorArguments.p"/* pathName */
};

static emlrtRSInfo c1_f_emlrtRSI = { 13,/* lineNo */
  "im2gray",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\eml\\lib\\matlab\\images\\im2gray.m"/* pathName */
};

static emlrtRSInfo c1_g_emlrtRSI = { 48,/* lineNo */
  "rgb2gray",                          /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\eml\\lib\\matlab\\images\\rgb2gray.m"/* pathName */
};

static emlrtRSInfo c1_h_emlrtRSI = { 17,/* lineNo */
  "max",                               /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\eml\\lib\\matlab\\datafun\\max.m"/* pathName */
};

static emlrtRSInfo c1_i_emlrtRSI = { 38,/* lineNo */
  "minOrMax",                          /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\eml\\eml\\+coder\\+internal\\minOrMax.m"/* pathName */
};

static emlrtRSInfo c1_j_emlrtRSI = { 77,/* lineNo */
  "minOrMax",                          /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\eml\\eml\\+coder\\+internal\\minOrMax.m"/* pathName */
};

static emlrtRSInfo c1_k_emlrtRSI = { 22,/* lineNo */
  "matlabCodegenHandle",               /* fcnName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\eml\\eml\\+coder\\+internal\\matlabCodegenHandle.m"/* pathName */
};

static emlrtRSInfo c1_l_emlrtRSI = { 5,/* lineNo */
  "MATLAB Function1",                  /* fcnName */
  "#Modell_PID:213"                    /* pathName */
};

static emlrtRSInfo c1_m_emlrtRSI = { 12,/* lineNo */
  "MATLAB Function1",                  /* fcnName */
  "#Modell_PID:213"                    /* pathName */
};

static emlrtRSInfo c1_n_emlrtRSI = { 13,/* lineNo */
  "MATLAB Function1",                  /* fcnName */
  "#Modell_PID:213"                    /* pathName */
};

static emlrtRSInfo c1_o_emlrtRSI = { 16,/* lineNo */
  "MATLAB Function1",                  /* fcnName */
  "#Modell_PID:213"                    /* pathName */
};

static emlrtRTEInfo c1_emlrtRTEI = { 458,/* lineNo */
  21,                                  /* colNo */
  "unaryMinOrMax",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\eml\\eml\\+coder\\+internal\\unaryMinOrMax.m"/* pName */
};

static emlrtRTEInfo c1_b_emlrtRTEI = { 460,/* lineNo */
  5,                                   /* colNo */
  "unaryMinOrMax",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\eml\\eml\\+coder\\+internal\\unaryMinOrMax.m"/* pName */
};

static emlrtRTEInfo c1_c_emlrtRTEI = { 18,/* lineNo */
  5,                                   /* colNo */
  "max",                               /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\eml\\lib\\matlab\\datafun\\max.m"/* pName */
};

static emlrtRTEInfo c1_d_emlrtRTEI = { 1,/* lineNo */
  1,                                   /* colNo */
  "BlobAnalysis",                      /* fName */
  "C:\\Program Files\\MATLAB\\R2023a\\toolbox\\vision\\vision\\+visioncodegen\\BlobAnalysis.p"/* pName */
};

static emlrtDCInfo c1_emlrtDCI = { 19, /* lineNo */
  35,                                  /* colNo */
  "MATLAB Function1",                  /* fName */
  "#Modell_PID:213",                   /* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c1_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  19,                                  /* lineNo */
  35,                                  /* colNo */
  "detectBall",                        /* aName */
  "MATLAB Function1",                  /* fName */
  "#Modell_PID:213",                   /* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c1_b_emlrtDCI = { 21,/* lineNo */
  28,                                  /* colNo */
  "MATLAB Function1",                  /* fName */
  "#Modell_PID:213",                   /* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c1_b_emlrtBCI = { 1,/* iFirst */
  1,                                   /* iLast */
  21,                                  /* lineNo */
  28,                                  /* colNo */
  "posPx",                             /* aName */
  "MATLAB Function1",                  /* fName */
  "#Modell_PID:213",                   /* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c1_c_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  19,                                  /* lineNo */
  41,                                  /* colNo */
  "idx",                               /* aName */
  "MATLAB Function1",                  /* fName */
  "#Modell_PID:213",                   /* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c1_d_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  19,                                  /* lineNo */
  44,                                  /* colNo */
  "detectBall",                        /* aName */
  "MATLAB Function1",                  /* fName */
  "#Modell_PID:213",                   /* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c1_e_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  21,                                  /* lineNo */
  34,                                  /* colNo */
  "idx",                               /* aName */
  "MATLAB Function1",                  /* fName */
  "#Modell_PID:213",                   /* pName */
  0                                    /* checkKind */
};

/* Function Declarations */
static void initialize_c1_Modell_PID(SFc1_Modell_PIDInstanceStruct
  *chartInstance);
static void initialize_params_c1_Modell_PID(SFc1_Modell_PIDInstanceStruct
  *chartInstance);
static void mdl_start_c1_Modell_PID(SFc1_Modell_PIDInstanceStruct *chartInstance);
static void mdl_terminate_c1_Modell_PID(SFc1_Modell_PIDInstanceStruct
  *chartInstance);
static void mdl_setup_runtime_resources_c1_Modell_PID
  (SFc1_Modell_PIDInstanceStruct *chartInstance);
static void mdl_cleanup_runtime_resources_c1_Modell_PID
  (SFc1_Modell_PIDInstanceStruct *chartInstance);
static void enable_c1_Modell_PID(SFc1_Modell_PIDInstanceStruct *chartInstance);
static void disable_c1_Modell_PID(SFc1_Modell_PIDInstanceStruct *chartInstance);
static void sf_gateway_c1_Modell_PID(SFc1_Modell_PIDInstanceStruct
  *chartInstance);
static void ext_mode_exec_c1_Modell_PID(SFc1_Modell_PIDInstanceStruct
  *chartInstance);
static void c1_update_jit_animation_c1_Modell_PID(SFc1_Modell_PIDInstanceStruct *
  chartInstance);
static void c1_do_animation_call_c1_Modell_PID(SFc1_Modell_PIDInstanceStruct
  *chartInstance);
static const mxArray *get_sim_state_c1_Modell_PID(SFc1_Modell_PIDInstanceStruct *
  chartInstance);
static void set_sim_state_c1_Modell_PID(SFc1_Modell_PIDInstanceStruct
  *chartInstance, const mxArray *c1_st);
static void initSimStructsc1_Modell_PID(SFc1_Modell_PIDInstanceStruct
  *chartInstance);
static void initSubchartIOPointersc1_Modell_PID(SFc1_Modell_PIDInstanceStruct
  *chartInstance);
static void c1_SystemCore_step(SFc1_Modell_PIDInstanceStruct *chartInstance,
  const emlrtStack *c1_sp, c1_visioncodegen_BlobAnalysis *c1_obj, boolean_T
  c1_varargin_1[230400], int32_T c1_varargout_1_data[], int32_T
  c1_varargout_1_size[2], real_T c1_varargout_2_data[], int32_T
  c1_varargout_2_size[2], int32_T c1_varargout_3_data[], int32_T
  c1_varargout_3_size[2]);
static void c1_emlrt_marshallIn(SFc1_Modell_PIDInstanceStruct *chartInstance,
  const mxArray *c1_b_img, const char_T *c1_identifier, boolean_T c1_y[230400]);
static void c1_b_emlrt_marshallIn(SFc1_Modell_PIDInstanceStruct *chartInstance,
  const mxArray *c1_u, const emlrtMsgIdentifier *c1_parentId, boolean_T c1_y
  [230400]);
static void c1_c_emlrt_marshallIn(SFc1_Modell_PIDInstanceStruct *chartInstance,
  const mxArray *c1_b_pos, const char_T *c1_identifier, real_T c1_y[2]);
static void c1_d_emlrt_marshallIn(SFc1_Modell_PIDInstanceStruct *chartInstance,
  const mxArray *c1_u, const emlrtMsgIdentifier *c1_parentId, real_T c1_y[2]);
static void c1_e_emlrt_marshallIn(SFc1_Modell_PIDInstanceStruct *chartInstance,
  const mxArray *c1_b_wPx, const char_T *c1_identifier, real_T c1_y[2]);
static void c1_f_emlrt_marshallIn(SFc1_Modell_PIDInstanceStruct *chartInstance,
  const mxArray *c1_u, const emlrtMsgIdentifier *c1_parentId, real_T c1_y[2]);
static void c1_g_emlrt_marshallIn(SFc1_Modell_PIDInstanceStruct *chartInstance,
  const mxArray *c1_b_Px2m, const char_T *c1_identifier, boolean_T *c1_svPtr,
  real_T c1_y[2]);
static void c1_h_emlrt_marshallIn(SFc1_Modell_PIDInstanceStruct *chartInstance,
  const mxArray *c1_u, const emlrtMsgIdentifier *c1_parentId, boolean_T
  *c1_svPtr, real_T c1_y[2]);
static boolean_T c1_i_emlrt_marshallIn(SFc1_Modell_PIDInstanceStruct
  *chartInstance, const mxArray *c1_b_isInitialized, const char_T *c1_identifier);
static boolean_T c1_j_emlrt_marshallIn(SFc1_Modell_PIDInstanceStruct
  *chartInstance, const mxArray *c1_u, const emlrtMsgIdentifier *c1_parentId);
static uint8_T c1_k_emlrt_marshallIn(SFc1_Modell_PIDInstanceStruct
  *chartInstance, const mxArray *c1_b_is_active_c1_Modell_PID, const char_T
  *c1_identifier);
static uint8_T c1_l_emlrt_marshallIn(SFc1_Modell_PIDInstanceStruct
  *chartInstance, const mxArray *c1_u, const emlrtMsgIdentifier *c1_parentId);
static void c1_slStringInitializeDynamicBuffers(SFc1_Modell_PIDInstanceStruct
  *chartInstance);
static void c1_chart_data_browse_helper(SFc1_Modell_PIDInstanceStruct
  *chartInstance, int32_T c1_ssIdNumber, const mxArray **c1_mxData, uint8_T
  *c1_isValueTooBig);
static void init_dsm_address_info(SFc1_Modell_PIDInstanceStruct *chartInstance);
static void init_simulink_io_address(SFc1_Modell_PIDInstanceStruct
  *chartInstance);

/* Function Definitions */
static void initialize_c1_Modell_PID(SFc1_Modell_PIDInstanceStruct
  *chartInstance)
{
  emlrtStack c1_st = { NULL,           /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  c1_st.tls = chartInstance->c1_fEmlrtCtx;
  emlrtLicenseCheckR2022a(&c1_st, "EMLRT:runTime:MexFunctionNeedsLicense",
    "video_and_image_blockset", 2);
  sim_mode_is_external(chartInstance->S);
  chartInstance->c1_sfEvent = CALL_EVENT;
  _sfTime_ = sf_get_time(chartInstance->S);
  chartInstance->c1_hBlob_not_empty = false;
  chartInstance->c1_Px2m_not_empty = false;
  chartInstance->c1_is_active_c1_Modell_PID = 0U;
  chartInstance->c1_hBlob.matlabCodegenIsDeleted = true;
}

static void initialize_params_c1_Modell_PID(SFc1_Modell_PIDInstanceStruct
  *chartInstance)
{
  (void)chartInstance;
}

static void mdl_start_c1_Modell_PID(SFc1_Modell_PIDInstanceStruct *chartInstance)
{
  sim_mode_is_external(chartInstance->S);
}

static void mdl_terminate_c1_Modell_PID(SFc1_Modell_PIDInstanceStruct
  *chartInstance)
{
  c1_visioncodegen_BlobAnalysis *c1_b_obj;
  c1_visioncodegen_BlobAnalysis *c1_c_obj;
  c1_visioncodegen_BlobAnalysis *c1_obj;
  c1_obj = &chartInstance->c1_hBlob;
  if (!c1_obj->matlabCodegenIsDeleted) {
    c1_obj->matlabCodegenIsDeleted = true;
    c1_b_obj = c1_obj;
    c1_c_obj = c1_b_obj;
    if (c1_c_obj->isInitialized == 1) {
      c1_c_obj->isInitialized = 2;
    }
  }
}

static void mdl_setup_runtime_resources_c1_Modell_PID
  (SFc1_Modell_PIDInstanceStruct *chartInstance)
{
  static const uint32_T c1_decisionTxtEndIdx = 0U;
  static const uint32_T c1_decisionTxtStartIdx = 0U;
  setDebuggerFlag(chartInstance->S, true);
  setDataBrowseFcn(chartInstance->S, (void *)&c1_chart_data_browse_helper);
  chartInstance->c1_RuntimeVar = sfListenerCacheSimStruct(chartInstance->S);
  sfListenerInitializeRuntimeVars(chartInstance->c1_RuntimeVar,
    &chartInstance->c1_IsDebuggerActive,
    &chartInstance->c1_IsSequenceViewerPresent, 0, 0,
    &chartInstance->c1_mlFcnLineNumber, &chartInstance->c1_IsHeatMapPresent, 0);
  covrtCreateStateflowInstanceData(chartInstance->c1_covrtInstance, 1U, 0U, 1U,
    12U);
  covrtChartInitFcn(chartInstance->c1_covrtInstance, 0U, false, false, false);
  covrtStateInitFcn(chartInstance->c1_covrtInstance, 0U, 0U, false, false, false,
                    0U, &c1_decisionTxtStartIdx, &c1_decisionTxtEndIdx);
  covrtTransInitFcn(chartInstance->c1_covrtInstance, 0U, 0, NULL, NULL, 0U, NULL);
  covrtEmlInitFcn(chartInstance->c1_covrtInstance, "", 4U, 0U, 1U, 0U, 2U, 0U,
                  0U, 0U, 0U, 0U, 0U, 0U);
  covrtEmlFcnInitFcn(chartInstance->c1_covrtInstance, 4U, 0U, 0U,
                     "eML_blk_kernel", 0, -1, 840);
  covrtEmlIfInitFcn(chartInstance->c1_covrtInstance, 4U, 0U, 0U, 91, 108, -1,
                    399, false);
  covrtEmlIfInitFcn(chartInstance->c1_covrtInstance, 4U, 0U, 1U, 591, 596, 730,
                    821, false);
}

static void mdl_cleanup_runtime_resources_c1_Modell_PID
  (SFc1_Modell_PIDInstanceStruct *chartInstance)
{
  sfListenerLightTerminate(chartInstance->c1_RuntimeVar);
  covrtDeleteStateflowInstanceData(chartInstance->c1_covrtInstance);
}

static void enable_c1_Modell_PID(SFc1_Modell_PIDInstanceStruct *chartInstance)
{
  _sfTime_ = sf_get_time(chartInstance->S);
}

static void disable_c1_Modell_PID(SFc1_Modell_PIDInstanceStruct *chartInstance)
{
  _sfTime_ = sf_get_time(chartInstance->S);
}

static void sf_gateway_c1_Modell_PID(SFc1_Modell_PIDInstanceStruct
  *chartInstance)
{
  static int32_T c1_iv[8] = { -1, 481, 482, 483, 1, -481, -482, -483 };

  static char_T c1_cv1[39] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o', 'l',
    'b', 'o', 'x', ':', 'e', 'm', 'l', '_', 'm', 'i', 'n', '_', 'o', 'r', '_',
    'm', 'a', 'x', '_', 'v', 'a', 'r', 'D', 'i', 'm', 'Z', 'e', 'r', 'o' };

  static char_T c1_cv[36] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o', 'l',
    'b', 'o', 'x', ':', 'a', 'u', 't', 'o', 'D', 'i', 'm', 'I', 'n', 'c', 'o',
    'm', 'p', 'a', 't', 'i', 'b', 'i', 'l', 'i', 't', 'y' };

  c1_vision_BlobAnalysis_0 *c1_h_obj;
  c1_vision_BlobAnalysis_0 *c1_i_obj;
  c1_vision_BlobAnalysis_0 *c1_p_obj;
  c1_vision_BlobAnalysis_0 *c1_t_obj;
  c1_visioncodegen_BlobAnalysis *c1_b_obj;
  c1_visioncodegen_BlobAnalysis *c1_b_this;
  c1_visioncodegen_BlobAnalysis *c1_c_obj;
  c1_visioncodegen_BlobAnalysis *c1_d_obj;
  c1_visioncodegen_BlobAnalysis *c1_e_obj;
  c1_visioncodegen_BlobAnalysis *c1_f_obj;
  c1_visioncodegen_BlobAnalysis *c1_g_obj;
  c1_visioncodegen_BlobAnalysis *c1_j_obj;
  c1_visioncodegen_BlobAnalysis *c1_k_obj;
  c1_visioncodegen_BlobAnalysis *c1_l_obj;
  c1_visioncodegen_BlobAnalysis *c1_m_obj;
  c1_visioncodegen_BlobAnalysis *c1_n_obj;
  c1_visioncodegen_BlobAnalysis *c1_o_obj;
  c1_visioncodegen_BlobAnalysis *c1_obj;
  c1_visioncodegen_BlobAnalysis *c1_q_obj;
  c1_visioncodegen_BlobAnalysis *c1_r_obj;
  c1_visioncodegen_BlobAnalysis *c1_s_obj;
  c1_visioncodegen_BlobAnalysis *c1_this;
  emlrtStack c1_b_st;
  emlrtStack c1_c_st;
  emlrtStack c1_d_st;
  emlrtStack c1_e_st;
  emlrtStack c1_st = { NULL,           /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  const mxArray *c1_b_y = NULL;
  const mxArray *c1_c_y = NULL;
  const mxArray *c1_d_y = NULL;
  const mxArray *c1_e_y = NULL;
  const mxArray *c1_f_y = NULL;
  const mxArray *c1_g_y = NULL;
  const mxArray *c1_y = NULL;
  real_T c1_bbox_data[100];
  real_T c1_b_w[2];
  real_T c1_b_idx_data[1];
  real_T c1_d;
  real_T c1_d1;
  int32_T c1_detectBall_data[200];
  int32_T c1_area_data[50];
  int32_T c1_area_size[2];
  int32_T c1_b_idx_size[2];
  int32_T c1_bbox_size[2];
  int32_T c1_detectBall_size[2];
  int32_T c1_idx_size[2];
  int32_T c1_iv1[2];
  int32_T c1_va_size[2];
  int32_T c1_idx_data[1];
  int32_T c1_va_data[1];
  int32_T c1_b_i;
  int32_T c1_b_loop_ub;
  int32_T c1_detectBall;
  int32_T c1_i;
  int32_T c1_i1;
  int32_T c1_i10;
  int32_T c1_i11;
  int32_T c1_i12;
  int32_T c1_i13;
  int32_T c1_i14;
  int32_T c1_i15;
  int32_T c1_i16;
  int32_T c1_i17;
  int32_T c1_i18;
  int32_T c1_i19;
  int32_T c1_i2;
  int32_T c1_i20;
  int32_T c1_i21;
  int32_T c1_i22;
  int32_T c1_i23;
  int32_T c1_i24;
  int32_T c1_i25;
  int32_T c1_i26;
  int32_T c1_i27;
  int32_T c1_i28;
  int32_T c1_i3;
  int32_T c1_i4;
  int32_T c1_i5;
  int32_T c1_i6;
  int32_T c1_i7;
  int32_T c1_i8;
  int32_T c1_i9;
  int32_T c1_idx;
  int32_T c1_j;
  int32_T c1_k;
  int32_T c1_loop_ub;
  int32_T c1_m;
  int32_T c1_n;
  boolean_T c1_b;
  boolean_T c1_b1;
  boolean_T c1_b2;
  boolean_T c1_b3;
  boolean_T c1_b_flag;
  boolean_T c1_exitg1;
  boolean_T c1_flag;
  boolean_T c1_h_y;
  c1_st.tls = chartInstance->c1_fEmlrtCtx;
  c1_b_st.prev = &c1_st;
  c1_b_st.tls = c1_st.tls;
  c1_c_st.prev = &c1_b_st;
  c1_c_st.tls = c1_b_st.tls;
  c1_d_st.prev = &c1_c_st;
  c1_d_st.tls = c1_c_st.tls;
  c1_e_st.prev = &c1_d_st;
  c1_e_st.tls = c1_d_st.tls;
  chartInstance->c1_JITTransitionAnimation[0] = 0U;
  _sfTime_ = sf_get_time(chartInstance->S);
  for (c1_i = 0; c1_i < 691200; c1_i++) {
    covrtSigUpdateFcn(chartInstance->c1_covrtInstance, 1U, (real_T)
                      (*chartInstance->c1_b_rgb_img)[c1_i]);
  }

  for (c1_i1 = 0; c1_i1 < 2; c1_i1++) {
    covrtSigUpdateFcn(chartInstance->c1_covrtInstance, 0U, (*chartInstance->c1_w)
                      [c1_i1]);
  }

  chartInstance->c1_sfEvent = CALL_EVENT;
  for (c1_i2 = 0; c1_i2 < 2; c1_i2++) {
    c1_b_w[c1_i2] = (*chartInstance->c1_w)[c1_i2];
  }

  for (c1_i3 = 0; c1_i3 < 691200; c1_i3++) {
    chartInstance->c1_rgb_img[c1_i3] = (*chartInstance->c1_b_rgb_img)[c1_i3];
  }

  covrtEmlFcnEval(chartInstance->c1_covrtInstance, 4U, 0, 0);
  if (covrtEmlIfEval(chartInstance->c1_covrtInstance, 4U, 0, 0,
                     !chartInstance->c1_hBlob_not_empty)) {
    c1_b_st.site = &c1_l_emlrtRSI;
    c1_obj = &chartInstance->c1_hBlob;
    c1_b_obj = c1_obj;
    c1_c_st.site = &c1_emlrtRSI;
    c1_c_obj = c1_b_obj;
    c1_b_obj = c1_c_obj;
    c1_d_st.site = &c1_b_emlrtRSI;
    c1_d_obj = c1_b_obj;
    c1_b_obj = c1_d_obj;
    c1_e_st.site = &c1_c_emlrtRSI;
    c1_this = c1_b_obj;
    c1_b_obj = c1_this;
    c1_d_st.site = &c1_b_emlrtRSI;
    c1_f_obj = c1_b_obj;
    c1_b_obj = c1_f_obj;
    c1_e_st.site = &c1_d_emlrtRSI;
    c1_b_this = c1_b_obj;
    c1_b_obj = c1_b_this;
    c1_b_obj->isInitialized = 0;
    c1_e_st.site = &c1_d_emlrtRSI;
    c1_g_obj = c1_b_obj;
    for (c1_i6 = 0; c1_i6 < 2; c1_i6++) {
      c1_g_obj->tunablePropertyChanged[c1_i6] = false;
    }

    c1_b_obj->NoTuningBeforeLockingCodeGenError = true;
    c1_h_obj = &c1_b_obj->cSFunObject;

    /* System object Constructor function: vision.BlobAnalysis */
    c1_i_obj = c1_h_obj;
    for (c1_i7 = 0; c1_i7 < 8; c1_i7++) {
      c1_i_obj->P0_WALKER_RTP[c1_i7] = c1_iv[c1_i7];
    }

    c1_c_st.site = &c1_emlrtRSI;
    c1_j_obj = c1_b_obj;
    c1_d_st.site = &c1_c_emlrtRSI;
    c1_k_obj = c1_j_obj;
    c1_e_st.site = &c1_e_emlrtRSI;
    c1_l_obj = c1_k_obj;
    c1_m_obj = c1_l_obj;
    c1_n_obj = c1_m_obj;
    c1_flag = (c1_n_obj->isInitialized == 1);
    if (c1_flag) {
      c1_m_obj->TunablePropsChanged = true;
      c1_m_obj->tunablePropertyChanged[0] = true;
    }

    c1_o_obj = c1_l_obj;
    c1_p_obj = &c1_o_obj->cSFunObject;
    c1_p_obj->P1_MINAREA_RTP = 1000U;
    c1_o_obj->MinimumBlobArea = 1000.0;
    c1_q_obj = c1_l_obj;
    c1_r_obj = c1_q_obj;
    c1_b_flag = (c1_r_obj->isInitialized == 1);
    if (c1_b_flag) {
      c1_q_obj->TunablePropsChanged = true;
      c1_q_obj->tunablePropertyChanged[1] = true;
    }

    c1_s_obj = c1_l_obj;
    c1_t_obj = &c1_s_obj->cSFunObject;
    c1_t_obj->P2_MAXAREA_RTP = 5000U;
    c1_s_obj->MaximumBlobArea = 5000.0;
    c1_b_obj->NoTuningBeforeLockingCodeGenError = false;
    c1_b_obj->matlabCodegenIsDeleted = false;
    chartInstance->c1_hBlob_not_empty = true;
    for (c1_i11 = 0; c1_i11 < 2; c1_i11++) {
      chartInstance->c1_Px2m[c1_i11] = 0.00083333333333333339;
    }

    chartInstance->c1_Px2m_not_empty = true;
  }

  c1_b_st.site = &c1_m_emlrtRSI;
  c1_c_st.site = &c1_f_emlrtRSI;
  c1_d_st.site = &c1_g_emlrtRSI;
  rgb2gray_tbb_real32(&chartInstance->c1_rgb_img[0], 230400.0,
                      &chartInstance->c1_I[0], true);
  for (c1_i4 = 0; c1_i4 < 230400; c1_i4++) {
    chartInstance->c1_bw[c1_i4] = ((real_T)chartInstance->c1_I[c1_i4] >=
      0.66666666666666663);
  }

  c1_b_st.site = &c1_n_emlrtRSI;
  c1_e_obj = &chartInstance->c1_hBlob;
  c1_c_st.site = &c1_d_emlrtRSI;
  for (c1_i5 = 0; c1_i5 < 230400; c1_i5++) {
    chartInstance->c1_b_bw[c1_i5] = chartInstance->c1_bw[c1_i5];
  }

  c1_SystemCore_step(chartInstance, &c1_c_st, c1_e_obj, chartInstance->c1_b_bw,
                     c1_area_data, c1_area_size, c1_bbox_data, c1_bbox_size,
                     c1_detectBall_data, c1_detectBall_size);
  sf_mex_printf("%s =\\n", "area");
  c1_y = NULL;
  sf_mex_assign(&c1_y, sf_mex_create("y", &c1_area_data, 6, 0U, 1U, 0U, 2,
    c1_area_size[0], c1_area_size[1]), false);
  sf_mex_call(&c1_st, NULL, "disp", 0U, 1U, 14, c1_y);
  sf_mex_printf("%s =\\n", "bbox");
  c1_b_y = NULL;
  sf_mex_assign(&c1_b_y, sf_mex_create("y", &c1_bbox_data, 0, 0U, 1U, 0U, 2,
    c1_bbox_size[0], c1_bbox_size[1]), false);
  sf_mex_call(&c1_st, NULL, "disp", 0U, 1U, 14, c1_b_y);
  sf_mex_printf("%s =\\n", "detectBall");
  c1_c_y = NULL;
  sf_mex_assign(&c1_c_y, sf_mex_create("y", &c1_detectBall_data, 6, 0U, 1U, 0U,
    2, c1_detectBall_size[0], c1_detectBall_size[1]), false);
  sf_mex_call(&c1_st, NULL, "disp", 0U, 1U, 14, c1_c_y);
  c1_b_st.site = &c1_o_emlrtRSI;
  c1_c_st.site = &c1_h_emlrtRSI;
  c1_d_st.site = &c1_i_emlrtRSI;
  c1_e_st.site = &c1_j_emlrtRSI;
  c1_b = (c1_area_size[0] == 1);
  c1_b1 = (c1_area_size[1] == 1);
  if ((c1_b && c1_b1) || ((real_T)c1_area_size[0] != 1.0)) {
    c1_b2 = true;
  } else {
    c1_b2 = false;
  }

  if (!c1_b2) {
    c1_d_y = NULL;
    sf_mex_assign(&c1_d_y, sf_mex_create("y", c1_cv, 10, 0U, 1U, 0U, 2, 1, 36),
                  false);
    c1_f_y = NULL;
    sf_mex_assign(&c1_f_y, sf_mex_create("y", c1_cv, 10, 0U, 1U, 0U, 2, 1, 36),
                  false);
    sf_mex_call(&c1_e_st, &c1_b_emlrtMCI, "error", 0U, 2U, 14, c1_d_y, 14,
                sf_mex_call(&c1_e_st, NULL, "getString", 1U, 1U, 14, sf_mex_call
      (&c1_e_st, NULL, "message", 1U, 1U, 14, c1_f_y)));
  }

  if (!((real_T)c1_area_size[0] >= 1.0)) {
    c1_e_y = NULL;
    sf_mex_assign(&c1_e_y, sf_mex_create("y", c1_cv1, 10, 0U, 1U, 0U, 2, 1, 39),
                  false);
    c1_g_y = NULL;
    sf_mex_assign(&c1_g_y, sf_mex_create("y", c1_cv1, 10, 0U, 1U, 0U, 2, 1, 39),
                  false);
    sf_mex_call(&c1_e_st, &c1_c_emlrtMCI, "error", 0U, 2U, 14, c1_e_y, 14,
                sf_mex_call(&c1_e_st, NULL, "getString", 1U, 1U, 14, sf_mex_call
      (&c1_e_st, NULL, "message", 1U, 1U, 14, c1_g_y)));
  }

  c1_m = c1_area_size[0];
  c1_n = c1_area_size[1];
  c1_iv1[1] = c1_n;
  c1_va_size[1] = c1_iv1[1];
  c1_idx_size[1] = c1_n;
  c1_loop_ub = c1_n - 1;
  for (c1_i8 = 0; c1_i8 <= c1_loop_ub; c1_i8++) {
    c1_idx_data[c1_i8] = 1;
  }

  if (c1_n >= 1) {
    for (c1_j = 0; c1_j < 1; c1_j++) {
      c1_va_data[0] = c1_area_data[0];
      for (c1_b_i = 2; c1_b_i <= c1_m; c1_b_i++) {
        if (c1_va_data[0] < c1_area_data[c1_b_i - 1]) {
          c1_va_data[0] = c1_area_data[c1_b_i - 1];
          c1_idx_data[0] = c1_b_i;
        }
      }
    }
  }

  c1_b_idx_size[1] = c1_idx_size[1];
  c1_b_loop_ub = c1_idx_size[1] - 1;
  for (c1_i9 = 0; c1_i9 <= c1_b_loop_ub; c1_i9++) {
    c1_b_idx_data[c1_i9] = (real_T)c1_idx_data[c1_i9];
  }

  c1_b3 = (c1_va_size[1] == 0);
  c1_h_y = !c1_b3;
  if (c1_h_y) {
    c1_h_y = true;
    c1_i10 = c1_va_size[1];
    c1_i13 = (uint8_T)c1_i10 - 1;
    c1_k = 0;
    c1_exitg1 = false;
    while ((!c1_exitg1) && (c1_k <= c1_i13)) {
      if (c1_va_data[0] == 0) {
        c1_h_y = false;
        c1_exitg1 = true;
      } else {
        c1_k++;
      }
    }
  }

  if (covrtEmlIfEval(chartInstance->c1_covrtInstance, 4U, 0, 1, c1_h_y)) {
    c1_detectBall = c1_detectBall_size[1];
    c1_i14 = 1;
    if ((c1_i14 < 1) || (c1_i14 > c1_b_idx_size[1])) {
      emlrtDynamicBoundsCheckR2012b(c1_i14, 1, c1_b_idx_size[1], &c1_c_emlrtBCI,
        &c1_st);
    }

    c1_d = c1_b_idx_data[c1_i14 - 1];
    if (c1_d != (real_T)(int32_T)muDoubleScalarFloor(c1_d)) {
      emlrtIntegerCheckR2012b(c1_d, &c1_emlrtDCI, &c1_st);
    }

    c1_i18 = (int32_T)c1_d;
    if ((c1_i18 < 1) || (c1_i18 > c1_detectBall_size[0])) {
      emlrtDynamicBoundsCheckR2012b(c1_i18, 1, c1_detectBall_size[0],
        &c1_emlrtBCI, &c1_st);
    }

    c1_idx = c1_i18 - 1;
    for (c1_i20 = 0; c1_i20 < 2; c1_i20++) {
      c1_i23 = c1_i20 + 1;
      if ((c1_i23 < 1) || (c1_i23 > c1_detectBall)) {
        emlrtDynamicBoundsCheckR2012b(c1_i23, 1, c1_detectBall, &c1_d_emlrtBCI,
          &c1_st);
      }

      (*chartInstance->c1_posPx)[c1_i20] = (real_T)c1_detectBall_data[c1_idx +
        c1_detectBall_size[0] * (c1_i23 - 1)];
    }

    for (c1_i22 = 0; c1_i22 < 2; c1_i22++) {
      (*chartInstance->c1_wPx)[c1_i22] = c1_b_w[c1_i22];
    }

    c1_i25 = 1;
    if ((c1_i25 < 1) || (c1_i25 > c1_b_idx_size[1])) {
      emlrtDynamicBoundsCheckR2012b(c1_i25, 1, c1_b_idx_size[1], &c1_e_emlrtBCI,
        &c1_st);
    }

    c1_d1 = c1_b_idx_data[c1_i25 - 1];
    if (c1_d1 != (real_T)(int32_T)muDoubleScalarFloor(c1_d1)) {
      emlrtIntegerCheckR2012b(c1_d1, &c1_b_emlrtDCI, &c1_st);
    }

    c1_i27 = (int32_T)c1_d1;
    if ((c1_i27 < 1) || (c1_i27 > 1)) {
      emlrtDynamicBoundsCheckR2012b(c1_i27, 1, 1, &c1_b_emlrtBCI, &c1_st);
    }

    for (c1_i28 = 0; c1_i28 < 2; c1_i28++) {
      (*chartInstance->c1_pos)[c1_i28] = (*chartInstance->c1_posPx)[c1_i28] *
        chartInstance->c1_Px2m[c1_i28];
    }
  } else {
    for (c1_i12 = 0; c1_i12 < 2; c1_i12++) {
      (*chartInstance->c1_posPx)[c1_i12] = 0.0;
    }

    for (c1_i15 = 0; c1_i15 < 2; c1_i15++) {
      (*chartInstance->c1_wPx)[c1_i15] = c1_b_w[c1_i15];
    }

    for (c1_i16 = 0; c1_i16 < 2; c1_i16++) {
      (*chartInstance->c1_pos)[c1_i16] = c1_b_w[c1_i16];
    }
  }

  for (c1_i17 = 0; c1_i17 < 230400; c1_i17++) {
    (*chartInstance->c1_img)[c1_i17] = chartInstance->c1_bw[c1_i17];
  }

  c1_do_animation_call_c1_Modell_PID(chartInstance);
  for (c1_i19 = 0; c1_i19 < 2; c1_i19++) {
    covrtSigUpdateFcn(chartInstance->c1_covrtInstance, 2U,
                      (*chartInstance->c1_pos)[c1_i19]);
  }

  for (c1_i21 = 0; c1_i21 < 2; c1_i21++) {
    covrtSigUpdateFcn(chartInstance->c1_covrtInstance, 3U,
                      (*chartInstance->c1_posPx)[c1_i21]);
  }

  for (c1_i24 = 0; c1_i24 < 2; c1_i24++) {
    covrtSigUpdateFcn(chartInstance->c1_covrtInstance, 4U,
                      (*chartInstance->c1_wPx)[c1_i24]);
  }

  for (c1_i26 = 0; c1_i26 < 230400; c1_i26++) {
    covrtSigUpdateFcn(chartInstance->c1_covrtInstance, 5U, (real_T)
                      (*chartInstance->c1_img)[c1_i26]);
  }
}

static void ext_mode_exec_c1_Modell_PID(SFc1_Modell_PIDInstanceStruct
  *chartInstance)
{
  (void)chartInstance;
}

static void c1_update_jit_animation_c1_Modell_PID(SFc1_Modell_PIDInstanceStruct *
  chartInstance)
{
  (void)chartInstance;
}

static void c1_do_animation_call_c1_Modell_PID(SFc1_Modell_PIDInstanceStruct
  *chartInstance)
{
  sfDoAnimationWrapper(chartInstance->S, false, true);
  sfDoAnimationWrapper(chartInstance->S, false, false);
}

static const mxArray *get_sim_state_c1_Modell_PID(SFc1_Modell_PIDInstanceStruct *
  chartInstance)
{
  const mxArray *c1_b_y = NULL;
  const mxArray *c1_c_y = NULL;
  const mxArray *c1_d_y = NULL;
  const mxArray *c1_e_y = NULL;
  const mxArray *c1_f_y = NULL;
  const mxArray *c1_g_y = NULL;
  const mxArray *c1_h_y = NULL;
  const mxArray *c1_st;
  const mxArray *c1_y = NULL;
  c1_st = NULL;
  c1_st = NULL;
  c1_y = NULL;
  sf_mex_assign(&c1_y, sf_mex_createcellmatrix(7, 1), false);
  c1_b_y = NULL;
  sf_mex_assign(&c1_b_y, sf_mex_create("y", *chartInstance->c1_img, 11, 0U, 1U,
    0U, 2, 480, 480), false);
  sf_mex_setcell(c1_y, 0, c1_b_y);
  c1_c_y = NULL;
  sf_mex_assign(&c1_c_y, sf_mex_create("y", *chartInstance->c1_pos, 0, 0U, 1U,
    0U, 2, 1, 2), false);
  sf_mex_setcell(c1_y, 1, c1_c_y);
  c1_d_y = NULL;
  sf_mex_assign(&c1_d_y, sf_mex_create("y", *chartInstance->c1_posPx, 0, 0U, 1U,
    0U, 2, 1, 2), false);
  sf_mex_setcell(c1_y, 2, c1_d_y);
  c1_e_y = NULL;
  sf_mex_assign(&c1_e_y, sf_mex_create("y", *chartInstance->c1_wPx, 0, 0U, 1U,
    0U, 2, 2, 1), false);
  sf_mex_setcell(c1_y, 3, c1_e_y);
  c1_f_y = NULL;
  if (!chartInstance->c1_Px2m_not_empty) {
    sf_mex_assign(&c1_f_y, sf_mex_create("y", NULL, 0, 0U, 1U, 0U, 2, 0, 0),
                  false);
  } else {
    sf_mex_assign(&c1_f_y, sf_mex_create("y", chartInstance->c1_Px2m, 0, 0U, 1U,
      0U, 2, 1, 2), false);
  }

  sf_mex_setcell(c1_y, 4, c1_f_y);
  c1_g_y = NULL;
  sf_mex_assign(&c1_g_y, sf_mex_create("y", &chartInstance->c1_isInitialized, 11,
    0U, 0U, 0U, 0), false);
  sf_mex_setcell(c1_y, 5, c1_g_y);
  c1_h_y = NULL;
  sf_mex_assign(&c1_h_y, sf_mex_create("y",
    &chartInstance->c1_is_active_c1_Modell_PID, 3, 0U, 0U, 0U, 0), false);
  sf_mex_setcell(c1_y, 6, c1_h_y);
  sf_mex_assign(&c1_st, c1_y, false);
  return c1_st;
}

static void set_sim_state_c1_Modell_PID(SFc1_Modell_PIDInstanceStruct
  *chartInstance, const mxArray *c1_st)
{
  const mxArray *c1_u;
  real_T c1_dv[2];
  real_T c1_dv1[2];
  real_T c1_dv2[2];
  real_T c1_dv3[2];
  int32_T c1_i;
  int32_T c1_i1;
  int32_T c1_i2;
  int32_T c1_i3;
  int32_T c1_i4;
  chartInstance->c1_doneDoubleBufferReInit = true;
  c1_u = sf_mex_dup(c1_st);
  c1_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell(c1_u, 0)), "img",
                      chartInstance->c1_bv);
  for (c1_i = 0; c1_i < 230400; c1_i++) {
    (*chartInstance->c1_img)[c1_i] = chartInstance->c1_bv[c1_i];
  }

  c1_c_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell(c1_u, 1)),
                        "pos", c1_dv);
  for (c1_i1 = 0; c1_i1 < 2; c1_i1++) {
    (*chartInstance->c1_pos)[c1_i1] = c1_dv[c1_i1];
  }

  c1_c_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell(c1_u, 2)),
                        "posPx", c1_dv1);
  for (c1_i2 = 0; c1_i2 < 2; c1_i2++) {
    (*chartInstance->c1_posPx)[c1_i2] = c1_dv1[c1_i2];
  }

  c1_e_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell(c1_u, 3)),
                        "wPx", c1_dv2);
  for (c1_i3 = 0; c1_i3 < 2; c1_i3++) {
    (*chartInstance->c1_wPx)[c1_i3] = c1_dv2[c1_i3];
  }

  c1_g_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell(c1_u, 4)),
                        "Px2m", &chartInstance->c1_Px2m_not_empty, c1_dv3);
  for (c1_i4 = 0; c1_i4 < 2; c1_i4++) {
    chartInstance->c1_Px2m[c1_i4] = c1_dv3[c1_i4];
  }

  chartInstance->c1_isInitialized = c1_i_emlrt_marshallIn(chartInstance,
    sf_mex_dup(sf_mex_getcell(c1_u, 5)), "isInitialized");
  chartInstance->c1_is_active_c1_Modell_PID = c1_k_emlrt_marshallIn
    (chartInstance, sf_mex_dup(sf_mex_getcell(c1_u, 6)),
     "is_active_c1_Modell_PID");
  sf_mex_destroy(&c1_u);
  sf_mex_destroy(&c1_st);
}

static void initSimStructsc1_Modell_PID(SFc1_Modell_PIDInstanceStruct
  *chartInstance)
{
  (void)chartInstance;
}

static void initSubchartIOPointersc1_Modell_PID(SFc1_Modell_PIDInstanceStruct
  *chartInstance)
{
  (void)chartInstance;
}

static void c1_SystemCore_step(SFc1_Modell_PIDInstanceStruct *chartInstance,
  const emlrtStack *c1_sp, c1_visioncodegen_BlobAnalysis *c1_obj, boolean_T
  c1_varargin_1[230400], int32_T c1_varargout_1_data[], int32_T
  c1_varargout_1_size[2], real_T c1_varargout_2_data[], int32_T
  c1_varargout_2_size[2], int32_T c1_varargout_3_data[], int32_T
  c1_varargout_3_size[2])
{
  static char_T c1_cv2[51] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'y', 's',
    't', 'e', 'm', ':', 'm', 'e', 't', 'h', 'o', 'd', 'C', 'a', 'l', 'l', 'e',
    'd', 'W', 'h', 'e', 'n', 'L', 'o', 'c', 'k', 'e', 'd', 'R', 'e', 'l', 'e',
    'a', 's', 'e', 'd', 'C', 'o', 'd', 'e', 'g', 'e', 'n' };

  static char_T c1_cv[45] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'y', 's',
    't', 'e', 'm', ':', 'm', 'e', 't', 'h', 'o', 'd', 'C', 'a', 'l', 'l', 'e',
    'd', 'W', 'h', 'e', 'n', 'R', 'e', 'l', 'e', 'a', 's', 'e', 'd', 'C', 'o',
    'd', 'e', 'g', 'e', 'n' };

  static char_T c1_cv3[5] = { 's', 'e', 't', 'u', 'p' };

  static char_T c1_cv1[4] = { 's', 't', 'e', 'p' };

  c1_cell_wrap_3 c1_varSizes[1];
  c1_vision_BlobAnalysis_0 *c1_f_obj;
  c1_vision_BlobAnalysis_0 *c1_g_obj;
  c1_visioncodegen_BlobAnalysis *c1_b_obj;
  c1_visioncodegen_BlobAnalysis *c1_c_obj;
  c1_visioncodegen_BlobAnalysis *c1_d_obj;
  c1_visioncodegen_BlobAnalysis *c1_e_obj;
  c1_visioncodegen_BlobAnalysis *c1_h_obj;
  c1_visioncodegen_BlobAnalysis *c1_i_obj;
  emlrtStack c1_b_st;
  emlrtStack c1_st;
  const mxArray *c1_b_y = NULL;
  const mxArray *c1_c_y = NULL;
  const mxArray *c1_d_y = NULL;
  const mxArray *c1_e_y = NULL;
  const mxArray *c1_f_y = NULL;
  const mxArray *c1_y = NULL;
  real_T c1_centroid[2];
  int32_T c1_bbox[4];
  int32_T c1_b_i;
  int32_T c1_b_loop;
  int32_T c1_b_m;
  int32_T c1_b_n;
  int32_T c1_c_i;
  int32_T c1_d_i;
  int32_T c1_i;
  int32_T c1_idx;
  int32_T c1_j;
  int32_T c1_j_pixListMinc;
  int32_T c1_j_pixListNinc;
  int32_T c1_loop;
  int32_T c1_loopEnd;
  int32_T c1_loopStart;
  int32_T c1_m;
  int32_T c1_maxc;
  int32_T c1_maxr;
  int32_T c1_minc;
  int32_T c1_minr;
  int32_T c1_mm;
  int32_T c1_ms;
  int32_T c1_n;
  int32_T c1_nn;
  int32_T c1_nnPadRows;
  int32_T c1_ns;
  int32_T c1_numLoops;
  int32_T c1_p;
  int32_T c1_pixListMinc;
  int32_T c1_pixListNinc;
  uint32_T c1_b_colOffset;
  uint32_T c1_centerIdx;
  uint32_T c1_colOffset;
  uint32_T c1_numBlobs;
  uint32_T c1_padIdx;
  uint32_T c1_pixIdx;
  uint32_T c1_stackIdx;
  uint32_T c1_start_pixIdx;
  uint32_T c1_walkerIdx;
  uint8_T c1_currentLabel;
  boolean_T c1_maxNumBlobsReached;
  (void)chartInstance;
  c1_st.prev = c1_sp;
  c1_st.tls = c1_sp->tls;
  c1_b_st.prev = &c1_st;
  c1_b_st.tls = c1_st.tls;
  if (c1_obj->isInitialized == 2) {
    c1_y = NULL;
    sf_mex_assign(&c1_y, sf_mex_create("y", c1_cv, 10, 0U, 1U, 0U, 2, 1, 45),
                  false);
    c1_b_y = NULL;
    sf_mex_assign(&c1_b_y, sf_mex_create("y", c1_cv, 10, 0U, 1U, 0U, 2, 1, 45),
                  false);
    c1_c_y = NULL;
    sf_mex_assign(&c1_c_y, sf_mex_create("y", c1_cv1, 10, 0U, 1U, 0U, 2, 1, 4),
                  false);
    sf_mex_call(c1_sp, &c1_emlrtMCI, "error", 0U, 2U, 14, c1_y, 14, sf_mex_call
                (c1_sp, NULL, "getString", 1U, 1U, 14, sf_mex_call(c1_sp, NULL,
      "message", 1U, 2U, 14, c1_b_y, 14, c1_c_y)));
  }

  if (c1_obj->isInitialized != 1) {
    c1_st.site = &c1_d_emlrtRSI;
    c1_b_obj = c1_obj;
    c1_b_st.site = &c1_d_emlrtRSI;
    c1_d_obj = c1_b_obj;
    c1_d_obj->isSetupComplete = false;
    if (c1_d_obj->isInitialized != 0) {
      c1_d_y = NULL;
      sf_mex_assign(&c1_d_y, sf_mex_create("y", c1_cv2, 10, 0U, 1U, 0U, 2, 1, 51),
                    false);
      c1_e_y = NULL;
      sf_mex_assign(&c1_e_y, sf_mex_create("y", c1_cv2, 10, 0U, 1U, 0U, 2, 1, 51),
                    false);
      c1_f_y = NULL;
      sf_mex_assign(&c1_f_y, sf_mex_create("y", c1_cv3, 10, 0U, 1U, 0U, 2, 1, 5),
                    false);
      sf_mex_call(&c1_b_st, &c1_emlrtMCI, "error", 0U, 2U, 14, c1_d_y, 14,
                  sf_mex_call(&c1_b_st, NULL, "getString", 1U, 1U, 14,
        sf_mex_call(&c1_b_st, NULL, "message", 1U, 2U, 14, c1_e_y, 14, c1_f_y)));
    }

    c1_d_obj->isInitialized = 1;
    c1_h_obj = c1_d_obj;
    for (c1_i = 0; c1_i < 8; c1_i++) {
      c1_varSizes[0].f1[c1_i] = 1U;
    }

    c1_h_obj->inputVarSize[0] = c1_varSizes[0];
    c1_i_obj = c1_d_obj;
    c1_i_obj->NoTuningBeforeLockingCodeGenError = true;
    c1_d_obj->isSetupComplete = true;
  }

  c1_st.site = &c1_d_emlrtRSI;
  c1_c_obj = c1_obj;
  c1_b_st.site = &c1_d_emlrtRSI;
  c1_e_obj = c1_c_obj;
  c1_f_obj = &c1_e_obj->cSFunObject;
  c1_g_obj = c1_f_obj;

  /* System object Outputs function: vision.BlobAnalysis */
  c1_maxNumBlobsReached = false;
  for (c1_loop = 0; c1_loop < 483; c1_loop++) {
    c1_g_obj->W3_PAD_DW[c1_loop] = 0U;
  }

  c1_currentLabel = 1U;
  c1_b_i = 0;
  c1_idx = 483;
  for (c1_n = 0; c1_n < 480; c1_n++) {
    for (c1_m = 0; c1_m < 480; c1_m++) {
      if (c1_varargin_1[c1_b_i]) {
        c1_g_obj->W3_PAD_DW[c1_idx] = MAX_uint8_T;
      } else {
        c1_g_obj->W3_PAD_DW[c1_idx] = 0U;
      }

      c1_b_i++;
      c1_idx++;
    }

    c1_g_obj->W3_PAD_DW[c1_idx] = 0U;
    c1_g_obj->W3_PAD_DW[c1_idx + 1] = 0U;
    c1_idx += 2;
  }

  for (c1_b_loop = 0; c1_b_loop < 481; c1_b_loop++) {
    c1_g_obj->W3_PAD_DW[c1_b_loop + c1_idx] = 0U;
  }

  c1_nn = 0;
  c1_stackIdx = 0U;
  c1_pixIdx = 0U;
  c1_b_n = 0;
  while (c1_b_n < 480) {
    c1_mm = 0;
    c1_nnPadRows = (c1_nn + 1) * 482;
    c1_b_m = 0;
    while (c1_b_m < 480) {
      c1_padIdx = (uint32_T)((c1_nnPadRows + c1_mm) + 1);
      c1_start_pixIdx = c1_pixIdx;
      if (c1_g_obj->W3_PAD_DW[c1_padIdx] == 255) {
        c1_g_obj->W3_PAD_DW[c1_padIdx] = c1_currentLabel;
        c1_g_obj->W0_N_PIXLIST_DW[c1_pixIdx] = (int16_T)c1_nn;
        c1_g_obj->W1_M_PIXLIST_DW[c1_pixIdx] = (int16_T)c1_mm;
        c1_pixIdx++;
        c1_g_obj->W2_NUM_PIX_DW[c1_currentLabel - 1] = 1U;
        c1_g_obj->W4_STACK_DW[c1_stackIdx] = c1_padIdx;
        c1_stackIdx++;
        while (c1_stackIdx != 0U) {
          c1_stackIdx--;
          c1_centerIdx = c1_g_obj->W4_STACK_DW[c1_stackIdx];
          for (c1_d_i = 0; c1_d_i < 8; c1_d_i++) {
            c1_walkerIdx = (uint32_T)((int32_T)c1_centerIdx +
              c1_g_obj->P0_WALKER_RTP[c1_d_i]);
            if (c1_g_obj->W3_PAD_DW[c1_walkerIdx] == 255) {
              c1_g_obj->W3_PAD_DW[c1_walkerIdx] = c1_currentLabel;
              c1_g_obj->W0_N_PIXLIST_DW[c1_pixIdx] = (int16_T)((int16_T)
                (c1_walkerIdx / 482U) - 1);
              c1_g_obj->W1_M_PIXLIST_DW[c1_pixIdx] = (int16_T)(c1_walkerIdx %
                482U - 1U);
              c1_pixIdx++;
              c1_g_obj->W2_NUM_PIX_DW[c1_currentLabel - 1]++;
              c1_g_obj->W4_STACK_DW[c1_stackIdx] = c1_walkerIdx;
              c1_stackIdx++;
            }
          }
        }

        if ((c1_g_obj->W2_NUM_PIX_DW[c1_currentLabel - 1] <
             c1_g_obj->P1_MINAREA_RTP) || (c1_g_obj->
             W2_NUM_PIX_DW[c1_currentLabel - 1] > c1_g_obj->P2_MAXAREA_RTP)) {
          c1_currentLabel--;
          c1_pixIdx = c1_start_pixIdx;
        }

        if (c1_currentLabel == 50) {
          c1_maxNumBlobsReached = true;
          c1_b_n = 480;
          c1_b_m = 480;
        }

        if (c1_b_m < 480) {
          c1_currentLabel++;
        }
      }

      c1_mm++;
      c1_b_m++;
    }

    c1_nn++;
    c1_b_n++;
  }

  if (c1_maxNumBlobsReached) {
    c1_numBlobs = c1_currentLabel;
  } else {
    c1_numBlobs = (uint8_T)((uint32_T)c1_currentLabel - 1U);
  }

  c1_pixListMinc = 0;
  c1_pixListNinc = 0;
  for (c1_c_i = 0; c1_c_i < (int32_T)c1_numBlobs; c1_c_i++) {
    c1_varargout_1_data[c1_c_i] = (int32_T)c1_g_obj->W2_NUM_PIX_DW[c1_c_i];
    c1_ns = 0;
    c1_ms = 0;
    if (c1_g_obj->W2_NUM_PIX_DW[c1_c_i] <= 260000U) {
      for (c1_j = 0; c1_j < (int32_T)c1_g_obj->W2_NUM_PIX_DW[c1_c_i]; c1_j++) {
        c1_ns += c1_g_obj->W0_N_PIXLIST_DW[c1_j + c1_pixListNinc];
        c1_ms += c1_g_obj->W1_M_PIXLIST_DW[c1_j + c1_pixListMinc];
      }

      c1_centroid[0] = (real_T)c1_ms / (real_T)c1_g_obj->W2_NUM_PIX_DW[c1_c_i];
      c1_centroid[1] = (real_T)c1_ns / (real_T)c1_g_obj->W2_NUM_PIX_DW[c1_c_i];
    } else {
      c1_numLoops = (int32_T)((real_T)c1_g_obj->W2_NUM_PIX_DW[c1_c_i] / 260000.0);
      c1_centroid[0] = 0.0;
      c1_centroid[1] = 0.0;
      for (c1_p = 0; c1_p < c1_numLoops; c1_p++) {
        c1_ns = 0;
        c1_ms = 0;
        for (c1_j = 0; c1_j < 260000; c1_j++) {
          c1_ns += c1_g_obj->W0_N_PIXLIST_DW[(c1_pixListNinc + c1_j) + c1_p *
            260000];
          c1_ms += c1_g_obj->W1_M_PIXLIST_DW[(c1_pixListMinc + c1_j) + c1_p *
            260000];
        }

        c1_centroid[0] += (real_T)c1_ms / (real_T)c1_g_obj->W2_NUM_PIX_DW[c1_c_i];
        c1_centroid[1] += (real_T)c1_ns / (real_T)c1_g_obj->W2_NUM_PIX_DW[c1_c_i];
      }

      c1_ns = 0;
      c1_ms = 0;
      c1_loopStart = c1_numLoops * 260000;
      c1_loopEnd = (int32_T)(c1_g_obj->W2_NUM_PIX_DW[c1_c_i] - (uint32_T)
        c1_loopStart);
      for (c1_j = 0; c1_j < c1_loopEnd; c1_j++) {
        c1_ns += c1_g_obj->W0_N_PIXLIST_DW[(c1_j + c1_pixListNinc) +
          c1_loopStart];
        c1_ms += c1_g_obj->W1_M_PIXLIST_DW[(c1_j + c1_pixListMinc) +
          c1_loopStart];
      }

      c1_centroid[0] += (real_T)c1_ms / (real_T)c1_g_obj->W2_NUM_PIX_DW[c1_c_i];
      c1_centroid[1] += (real_T)c1_ns / (real_T)c1_g_obj->W2_NUM_PIX_DW[c1_c_i];
    }

    c1_colOffset = c1_numBlobs;
    c1_varargout_2_data[c1_c_i] = c1_centroid[1] + 1.0;
    c1_varargout_2_data[c1_colOffset + (uint32_T)c1_c_i] = c1_centroid[0] + 1.0;
    c1_minc = 480;
    c1_minr = 480;
    c1_maxc = 0;
    c1_maxr = 0;
    for (c1_j = 0; c1_j < (int32_T)c1_g_obj->W2_NUM_PIX_DW[c1_c_i]; c1_j++) {
      c1_j_pixListNinc = c1_j + c1_pixListNinc;
      if (c1_g_obj->W0_N_PIXLIST_DW[c1_j_pixListNinc] < c1_minc) {
        c1_minc = c1_g_obj->W0_N_PIXLIST_DW[c1_j_pixListNinc];
      }

      if (c1_g_obj->W0_N_PIXLIST_DW[c1_j_pixListNinc] > c1_maxc) {
        c1_maxc = c1_g_obj->W0_N_PIXLIST_DW[c1_j_pixListNinc];
      }

      c1_j_pixListMinc = c1_j + c1_pixListMinc;
      if (c1_g_obj->W1_M_PIXLIST_DW[c1_j_pixListMinc] < c1_minr) {
        c1_minr = c1_g_obj->W1_M_PIXLIST_DW[c1_j_pixListMinc];
      }

      if (c1_g_obj->W1_M_PIXLIST_DW[c1_j_pixListMinc] > c1_maxr) {
        c1_maxr = c1_g_obj->W1_M_PIXLIST_DW[c1_j_pixListMinc];
      }
    }

    c1_bbox[0] = c1_minr;
    c1_bbox[1] = c1_minc;
    c1_bbox[2] = (c1_maxr - c1_minr) + 1;
    c1_bbox[3] = (c1_maxc - c1_minc) + 1;
    c1_b_colOffset = c1_numBlobs;
    c1_varargout_3_data[c1_c_i] = c1_bbox[1] + 1;
    c1_varargout_3_data[c1_b_colOffset + (uint32_T)c1_c_i] = c1_bbox[0] + 1;
    c1_varargout_3_data[((int32_T)c1_b_colOffset << 1) + c1_c_i] = c1_bbox[3];
    c1_varargout_3_data[3 * (int32_T)c1_b_colOffset + c1_c_i] = c1_bbox[2];
    c1_pixListMinc += (int32_T)c1_g_obj->W2_NUM_PIX_DW[c1_c_i];
    c1_pixListNinc += (int32_T)c1_g_obj->W2_NUM_PIX_DW[c1_c_i];
  }

  c1_varargout_1_size[0] = (int32_T)c1_numBlobs;
  c1_varargout_1_size[1] = 1;
  c1_varargout_2_size[0] = (int32_T)c1_numBlobs;
  c1_varargout_2_size[1] = 2;
  c1_varargout_3_size[0] = (int32_T)c1_numBlobs;
  c1_varargout_3_size[1] = 4;
}

const mxArray *sf_c1_Modell_PID_get_eml_resolved_functions_info(void)
{
  const mxArray *c1_nameCaptureInfo = NULL;
  c1_nameCaptureInfo = NULL;
  sf_mex_assign(&c1_nameCaptureInfo, sf_mex_create("nameCaptureInfo", NULL, 0,
    0U, 1U, 0U, 2, 0, 1), false);
  return c1_nameCaptureInfo;
}

static void c1_emlrt_marshallIn(SFc1_Modell_PIDInstanceStruct *chartInstance,
  const mxArray *c1_b_img, const char_T *c1_identifier, boolean_T c1_y[230400])
{
  emlrtMsgIdentifier c1_thisId;
  c1_thisId.fIdentifier = (const char_T *)c1_identifier;
  c1_thisId.fParent = NULL;
  c1_thisId.bParentIsCell = false;
  c1_b_emlrt_marshallIn(chartInstance, sf_mex_dup(c1_b_img), &c1_thisId, c1_y);
  sf_mex_destroy(&c1_b_img);
}

static void c1_b_emlrt_marshallIn(SFc1_Modell_PIDInstanceStruct *chartInstance,
  const mxArray *c1_u, const emlrtMsgIdentifier *c1_parentId, boolean_T c1_y
  [230400])
{
  int32_T c1_i;
  sf_mex_import(c1_parentId, sf_mex_dup(c1_u), chartInstance->c1_b_bv, 1, 11, 0U,
                1, 0U, 2, 480, 480);
  for (c1_i = 0; c1_i < 230400; c1_i++) {
    c1_y[c1_i] = chartInstance->c1_b_bv[c1_i];
  }

  sf_mex_destroy(&c1_u);
}

static void c1_c_emlrt_marshallIn(SFc1_Modell_PIDInstanceStruct *chartInstance,
  const mxArray *c1_b_pos, const char_T *c1_identifier, real_T c1_y[2])
{
  emlrtMsgIdentifier c1_thisId;
  c1_thisId.fIdentifier = (const char_T *)c1_identifier;
  c1_thisId.fParent = NULL;
  c1_thisId.bParentIsCell = false;
  c1_d_emlrt_marshallIn(chartInstance, sf_mex_dup(c1_b_pos), &c1_thisId, c1_y);
  sf_mex_destroy(&c1_b_pos);
}

static void c1_d_emlrt_marshallIn(SFc1_Modell_PIDInstanceStruct *chartInstance,
  const mxArray *c1_u, const emlrtMsgIdentifier *c1_parentId, real_T c1_y[2])
{
  real_T c1_dv[2];
  int32_T c1_i;
  (void)chartInstance;
  sf_mex_import(c1_parentId, sf_mex_dup(c1_u), c1_dv, 1, 0, 0U, 1, 0U, 2, 1, 2);
  for (c1_i = 0; c1_i < 2; c1_i++) {
    c1_y[c1_i] = c1_dv[c1_i];
  }

  sf_mex_destroy(&c1_u);
}

static void c1_e_emlrt_marshallIn(SFc1_Modell_PIDInstanceStruct *chartInstance,
  const mxArray *c1_b_wPx, const char_T *c1_identifier, real_T c1_y[2])
{
  emlrtMsgIdentifier c1_thisId;
  c1_thisId.fIdentifier = (const char_T *)c1_identifier;
  c1_thisId.fParent = NULL;
  c1_thisId.bParentIsCell = false;
  c1_f_emlrt_marshallIn(chartInstance, sf_mex_dup(c1_b_wPx), &c1_thisId, c1_y);
  sf_mex_destroy(&c1_b_wPx);
}

static void c1_f_emlrt_marshallIn(SFc1_Modell_PIDInstanceStruct *chartInstance,
  const mxArray *c1_u, const emlrtMsgIdentifier *c1_parentId, real_T c1_y[2])
{
  real_T c1_dv[2];
  int32_T c1_i;
  (void)chartInstance;
  sf_mex_import(c1_parentId, sf_mex_dup(c1_u), c1_dv, 1, 0, 0U, 1, 0U, 2, 2, 1);
  for (c1_i = 0; c1_i < 2; c1_i++) {
    c1_y[c1_i] = c1_dv[c1_i];
  }

  sf_mex_destroy(&c1_u);
}

static void c1_g_emlrt_marshallIn(SFc1_Modell_PIDInstanceStruct *chartInstance,
  const mxArray *c1_b_Px2m, const char_T *c1_identifier, boolean_T *c1_svPtr,
  real_T c1_y[2])
{
  emlrtMsgIdentifier c1_thisId;
  c1_thisId.fIdentifier = (const char_T *)c1_identifier;
  c1_thisId.fParent = NULL;
  c1_thisId.bParentIsCell = false;
  c1_h_emlrt_marshallIn(chartInstance, sf_mex_dup(c1_b_Px2m), &c1_thisId,
                        c1_svPtr, c1_y);
  sf_mex_destroy(&c1_b_Px2m);
}

static void c1_h_emlrt_marshallIn(SFc1_Modell_PIDInstanceStruct *chartInstance,
  const mxArray *c1_u, const emlrtMsgIdentifier *c1_parentId, boolean_T
  *c1_svPtr, real_T c1_y[2])
{
  real_T c1_dv[2];
  int32_T c1_i;
  (void)chartInstance;
  if (mxIsEmpty(c1_u)) {
    *c1_svPtr = false;
  } else {
    *c1_svPtr = true;
    sf_mex_import(c1_parentId, sf_mex_dup(c1_u), c1_dv, 1, 0, 0U, 1, 0U, 2, 1, 2);
    for (c1_i = 0; c1_i < 2; c1_i++) {
      c1_y[c1_i] = c1_dv[c1_i];
    }
  }

  sf_mex_destroy(&c1_u);
}

static boolean_T c1_i_emlrt_marshallIn(SFc1_Modell_PIDInstanceStruct
  *chartInstance, const mxArray *c1_b_isInitialized, const char_T *c1_identifier)
{
  emlrtMsgIdentifier c1_thisId;
  boolean_T c1_y;
  c1_thisId.fIdentifier = (const char_T *)c1_identifier;
  c1_thisId.fParent = NULL;
  c1_thisId.bParentIsCell = false;
  c1_y = c1_j_emlrt_marshallIn(chartInstance, sf_mex_dup(c1_b_isInitialized),
    &c1_thisId);
  sf_mex_destroy(&c1_b_isInitialized);
  return c1_y;
}

static boolean_T c1_j_emlrt_marshallIn(SFc1_Modell_PIDInstanceStruct
  *chartInstance, const mxArray *c1_u, const emlrtMsgIdentifier *c1_parentId)
{
  boolean_T c1_b;
  boolean_T c1_y;
  (void)chartInstance;
  sf_mex_import(c1_parentId, sf_mex_dup(c1_u), &c1_b, 1, 11, 0U, 0, 0U, 0);
  c1_y = c1_b;
  sf_mex_destroy(&c1_u);
  return c1_y;
}

static uint8_T c1_k_emlrt_marshallIn(SFc1_Modell_PIDInstanceStruct
  *chartInstance, const mxArray *c1_b_is_active_c1_Modell_PID, const char_T
  *c1_identifier)
{
  emlrtMsgIdentifier c1_thisId;
  uint8_T c1_y;
  c1_thisId.fIdentifier = (const char_T *)c1_identifier;
  c1_thisId.fParent = NULL;
  c1_thisId.bParentIsCell = false;
  c1_y = c1_l_emlrt_marshallIn(chartInstance, sf_mex_dup
    (c1_b_is_active_c1_Modell_PID), &c1_thisId);
  sf_mex_destroy(&c1_b_is_active_c1_Modell_PID);
  return c1_y;
}

static uint8_T c1_l_emlrt_marshallIn(SFc1_Modell_PIDInstanceStruct
  *chartInstance, const mxArray *c1_u, const emlrtMsgIdentifier *c1_parentId)
{
  uint8_T c1_b_u;
  uint8_T c1_y;
  (void)chartInstance;
  sf_mex_import(c1_parentId, sf_mex_dup(c1_u), &c1_b_u, 1, 3, 0U, 0, 0U, 0);
  c1_y = c1_b_u;
  sf_mex_destroy(&c1_u);
  return c1_y;
}

static void c1_slStringInitializeDynamicBuffers(SFc1_Modell_PIDInstanceStruct
  *chartInstance)
{
  (void)chartInstance;
}

static void c1_chart_data_browse_helper(SFc1_Modell_PIDInstanceStruct
  *chartInstance, int32_T c1_ssIdNumber, const mxArray **c1_mxData, uint8_T
  *c1_isValueTooBig)
{
  *c1_mxData = NULL;
  *c1_mxData = NULL;
  *c1_isValueTooBig = 0U;
  switch (c1_ssIdNumber) {
   case 7U:
    sf_mex_assign(c1_mxData, sf_mex_create("mxData", *chartInstance->c1_w, 0, 0U,
      1U, 0U, 1, 2), false);
    break;

   case 6U:
    sf_mex_assign(c1_mxData, sf_mex_create("mxData", *chartInstance->c1_pos, 0,
      0U, 1U, 0U, 2, 1, 2), false);
    break;

   case 4U:
    *c1_isValueTooBig = 1U;
    break;

   case 5U:
    sf_mex_assign(c1_mxData, sf_mex_create("mxData", *chartInstance->c1_posPx, 0,
      0U, 1U, 0U, 2, 1, 2), false);
    break;

   case 8U:
    sf_mex_assign(c1_mxData, sf_mex_create("mxData", *chartInstance->c1_wPx, 0,
      0U, 1U, 0U, 2, 2, 1), false);
    break;

   case 9U:
    *c1_isValueTooBig = 1U;
    break;
  }
}

static void init_dsm_address_info(SFc1_Modell_PIDInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void init_simulink_io_address(SFc1_Modell_PIDInstanceStruct
  *chartInstance)
{
  chartInstance->c1_covrtInstance = (CovrtStateflowInstance *)
    sfrtGetCovrtInstance(chartInstance->S);
  chartInstance->c1_fEmlrtCtx = (void *)sfrtGetEmlrtCtx(chartInstance->S);
  chartInstance->c1_w = (real_T (*)[2])ssGetInputPortSignal_wrapper
    (chartInstance->S, 0);
  chartInstance->c1_pos = (real_T (*)[2])ssGetOutputPortSignal_wrapper
    (chartInstance->S, 1);
  chartInstance->c1_b_rgb_img = (real32_T (*)[691200])
    ssGetInputPortSignal_wrapper(chartInstance->S, 1);
  chartInstance->c1_posPx = (real_T (*)[2])ssGetOutputPortSignal_wrapper
    (chartInstance->S, 2);
  chartInstance->c1_wPx = (real_T (*)[2])ssGetOutputPortSignal_wrapper
    (chartInstance->S, 3);
  chartInstance->c1_img = (boolean_T (*)[230400])ssGetOutputPortSignal_wrapper
    (chartInstance->S, 4);
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* SFunction Glue Code */
void sf_c1_Modell_PID_get_check_sum(mxArray *plhs[])
{
  ((real_T *)mxGetPr((plhs[0])))[0] = (real_T)(3643083171U);
  ((real_T *)mxGetPr((plhs[0])))[1] = (real_T)(1551629395U);
  ((real_T *)mxGetPr((plhs[0])))[2] = (real_T)(1996903457U);
  ((real_T *)mxGetPr((plhs[0])))[3] = (real_T)(4167009310U);
}

mxArray *sf_c1_Modell_PID_third_party_uses_info(void)
{
  mxArray * mxcell3p = mxCreateCellMatrix(1,1);
  mxSetCell(mxcell3p, 0, mxCreateString(
             "images.internal.coder.buildable.Rgb2grayBuildable"));
  return(mxcell3p);
}

mxArray *sf_c1_Modell_PID_jit_fallback_info(void)
{
  const char *infoFields[] = { "fallbackType", "fallbackReason",
    "hiddenFallbackType", "hiddenFallbackReason", "incompatibleSymbol" };

  mxArray *mxInfo = mxCreateStructMatrix(1, 1, 5, infoFields);
  mxArray *fallbackType = mxCreateString("late");
  mxArray *fallbackReason = mxCreateString("ir_vars");
  mxArray *hiddenFallbackType = mxCreateString("");
  mxArray *hiddenFallbackReason = mxCreateString("");
  mxArray *incompatibleSymbol = mxCreateString("i0");
  mxSetField(mxInfo, 0, infoFields[0], fallbackType);
  mxSetField(mxInfo, 0, infoFields[1], fallbackReason);
  mxSetField(mxInfo, 0, infoFields[2], hiddenFallbackType);
  mxSetField(mxInfo, 0, infoFields[3], hiddenFallbackReason);
  mxSetField(mxInfo, 0, infoFields[4], incompatibleSymbol);
  return mxInfo;
}

mxArray *sf_c1_Modell_PID_updateBuildInfo_args_info(void)
{
  mxArray *mxBIArgs = mxCreateCellMatrix(1,0);
  return mxBIArgs;
}

static const mxArray *sf_get_sim_state_info_c1_Modell_PID(void)
{
  const char *infoFields[] = { "chartChecksum", "varInfo" };

  mxArray *mxInfo = mxCreateStructMatrix(1, 1, 2, infoFields);
  mxArray *mxVarInfo = sf_mex_decode(
    "eNpjYPT0ZQACPiCewcbAAEQMHEDMxAABrFA+IxCzQ2mIOAtcXAGISyoLUkHixUXJnilAOi8xF8x"
    "PLK3wzEvLB5tvwYAwnw2L+YxI5nNCxSHggz1l+pUcQPoNkPSzYNHPjKRfAMjLzE0HuxsWPgPnfg"
    "my3F+QXzxI3C/igK4fm/tZUdwP4QP9EFABdf/A+0OBrHgoB/qAOu4XcKBMP8R+Qu5nQXE/C0NAh"
    "VEuSN8FBvzlAyNa+cAE5YP05DBkMhRA7Xcg4H4mNPcLwBzvEOwAoUOoEg6DJT4cCMQHL1q+APEz"
    "iz3zMksyE3Myq1JTqOYfBar4x4OAf8TR/CMO9k98YnJJZllqfLJhvG9+SmpOTnyApwvcXwDwnjX"
    "/"
    );
  mxArray *mxChecksum = mxCreateDoubleMatrix(1, 4, mxREAL);
  sf_c1_Modell_PID_get_check_sum(&mxChecksum);
  mxSetField(mxInfo, 0, infoFields[0], mxChecksum);
  mxSetField(mxInfo, 0, infoFields[1], mxVarInfo);
  return mxInfo;
}

static const char* sf_get_instance_specialization(void)
{
  return "sLw5168jknlg8XTzpCJyqdF";
}

static void sf_opaque_initialize_c1_Modell_PID(void *chartInstanceVar)
{
  initialize_params_c1_Modell_PID((SFc1_Modell_PIDInstanceStruct*)
    chartInstanceVar);
  initialize_c1_Modell_PID((SFc1_Modell_PIDInstanceStruct*) chartInstanceVar);
}

static void sf_opaque_enable_c1_Modell_PID(void *chartInstanceVar)
{
  enable_c1_Modell_PID((SFc1_Modell_PIDInstanceStruct*) chartInstanceVar);
}

static void sf_opaque_disable_c1_Modell_PID(void *chartInstanceVar)
{
  disable_c1_Modell_PID((SFc1_Modell_PIDInstanceStruct*) chartInstanceVar);
}

static void sf_opaque_gateway_c1_Modell_PID(void *chartInstanceVar)
{
  sf_gateway_c1_Modell_PID((SFc1_Modell_PIDInstanceStruct*) chartInstanceVar);
}

static const mxArray* sf_opaque_get_sim_state_c1_Modell_PID(SimStruct* S)
{
  return get_sim_state_c1_Modell_PID((SFc1_Modell_PIDInstanceStruct *)
    sf_get_chart_instance_ptr(S));     /* raw sim ctx */
}

static void sf_opaque_set_sim_state_c1_Modell_PID(SimStruct* S, const mxArray
  *st)
{
  set_sim_state_c1_Modell_PID((SFc1_Modell_PIDInstanceStruct*)
    sf_get_chart_instance_ptr(S), st);
}

static void sf_opaque_cleanup_runtime_resources_c1_Modell_PID(void
  *chartInstanceVar)
{
  if (chartInstanceVar!=NULL) {
    SimStruct *S = ((SFc1_Modell_PIDInstanceStruct*) chartInstanceVar)->S;
    if (sim_mode_is_rtw_gen(S) || sim_mode_is_external(S)) {
      sf_clear_rtw_identifier(S);
      unload_Modell_PID_optimization_info();
    }

    mdl_cleanup_runtime_resources_c1_Modell_PID((SFc1_Modell_PIDInstanceStruct*)
      chartInstanceVar);
    utFree(chartInstanceVar);
    if (ssGetUserData(S)!= NULL) {
      sf_free_ChartRunTimeInfo(S);
    }

    ssSetUserData(S,NULL);
  }
}

static void sf_opaque_mdl_start_c1_Modell_PID(void *chartInstanceVar)
{
  mdl_start_c1_Modell_PID((SFc1_Modell_PIDInstanceStruct*) chartInstanceVar);
  if (chartInstanceVar) {
    sf_reset_warnings_ChartRunTimeInfo(((SFc1_Modell_PIDInstanceStruct*)
      chartInstanceVar)->S);
  }
}

static void sf_opaque_mdl_terminate_c1_Modell_PID(void *chartInstanceVar)
{
  mdl_terminate_c1_Modell_PID((SFc1_Modell_PIDInstanceStruct*) chartInstanceVar);
}

extern unsigned int sf_machine_global_initializer_called(void);
static void mdlProcessParameters_c1_Modell_PID(SimStruct *S)
{
  int i;
  for (i=0;i<ssGetNumRunTimeParams(S);i++) {
    if (ssGetSFcnParamTunable(S,i)) {
      ssUpdateDlgParamAsRunTimeParam(S,i);
    }
  }

  sf_warn_if_symbolic_dimension_param_changed(S);
  if (sf_machine_global_initializer_called()) {
    initialize_params_c1_Modell_PID((SFc1_Modell_PIDInstanceStruct*)
      sf_get_chart_instance_ptr(S));
    initSubchartIOPointersc1_Modell_PID((SFc1_Modell_PIDInstanceStruct*)
      sf_get_chart_instance_ptr(S));
  }
}

const char* sf_c1_Modell_PID_get_post_codegen_info(void)
{
  int i;
  const char* encStrCodegen [24] = {
    "eNrtWd1u40QUnnSzXVZ0q14ggQSCCgnEDRItWtQLBGnzA0EpjXBaEDfV1D6Jh4zH7sw4PyuQeAw",
    "kLngHLnkKuEE8BleIS844TjZ1TOtxi9oFXCXu2P7mnPPN+RuHVNqHBI9N/Lz1KiHreH4OP2tkdt",
    "xPx5Wlz+x6lbyfjr9+nhA39GAAwon7fTYhdoeIgy6VNFDE/hA0gM9AhTzWLBRt0Q+LY5nogwTh4",
    "gRRKLWVXMWCmDMxbMXCNZLV5z5zfccPY+4d4ITUOxJ8+ndyo1h3UWKDSXB1C8DTvgzjgd/idHA5",
    "C1KP6z64QxUH1lwp0E4cGVPVYcw1izg0J+C2hdIUWVBX2OtoqqGuJ3YkG3uVM0eHQcQZFcW59ql",
    "yIELv0HAcefh9FGtkrxDW9anUB+DTEagOGybSQwGFpDOFT58xQXUoGeXNgNfNbAXt7XK08RBDgt",
    "uuEdp7IIEOo5AJbRkQTgt5bgp6xqEBZ/HAUq4D57GJhhMGY5B269uvhyOQdABHwk7nZI2ak8QpF",
    "7FUEKtZACdU7rvouwo8u7yBQacciu4IPZzGCgsJxW3Vk2yEvmGb69om/EvlujiYeb8qhU3kNkdg",
    "7VcLuS1X1Cnnyg7bC6MOjIAn8htU0xLYmXwLsFLM64XoHSbbWGasWDCMhBRbD4XHinvlKINKCtu",
    "nWKQKwFlgwgA8pHmh+mKiq+IoVjoM6phyGp1OQXmr2LbQIPvUhcI1RlKmABVO/MpSrseUCSREI0",
    "s6sbLwDLMYLAUlqh+LxjiUQ+TYtpg95cpEgh0avAEmZg1Jkmuid59QHhfUOVADjB90j2OFWdZOL",
    "mJN/JQCu9T1wTOVk3E4xDyLExRdYmVK/j5aO2J62gDlShYVjaQYEzoWXcNSbxrBsRiKcCxaMgyc",
    "tPO6xK8AMGtQKZgYHGAJl9MWKl9MawnnvSS72zY5hmeqOT0zvvERCKyGxlbTNVAXo6opsEVGha6",
    "DddgTbGKEYkpjoZ7OSv2s7pn+vUae9u/VnP790VL/vpWO3Z3TpE/hp912I53nnaV5NgrsA0gBHF",
    "nBkQVusf9Ywldy5JKlc1bew7WLz69l5K3hX6WyytOjjJxqBreecjX9ZjT+4eXvf/3p6I1vf/njz",
    "R+vkl9ZkV9J/je4jx/Y7bM20/Er835pkZ1HKwksmf8KP3gx4wdmrDrjxzvv7X01FHyw90XvSVT/",
    "ZHrutZL5vlu/XN8HGX3n17dNj4bBm+QC6ba9dL9mxjSe7SPM/HtL+q5fwcfDJX8i5PcPr4d/vZZ",
    "dxzy+7l3g6x7W6cEFv709/V8qpX8Uqjui/wu1LD5P//sZfzVjtKE7yeSP27Nju9Q6jNGCm9F/q3",
    "Y9/Go+zdO/ekH/KulOdgOD+5nY5bN5bjYYThiJcupXnv5rGf235srXnNrs3LsRHu7KepSp50y1B",
    "bbDlGOr4N2YPds3Yk+ZusTUKTUdJJxe7FQ2C/YBeXX4f9yzjav8B+3bKJhXy+Cq/2Dff5O469pn",
    "u7941p+/rJ6TzPNbd9iO7LnsPvOu2fWbZd/0Wjr+YPF+s+4z7uW8YUlvd4D28+7+S/z7T0v+5v1",
    "F0/CX/hD25bv7gvKpYrPXQ/PLXWl+z1jckkBV/nur26gnRfvDjUx8m/GYCS8cq7d3dh/vXqc+/Q",
    "XyLDO8",
    ""
  };

  static char newstr [1657] = "";
  newstr[0] = '\0';
  for (i = 0; i < 24; i++) {
    strcat(newstr, encStrCodegen[i]);
  }

  return newstr;
}

static void mdlSetWorkWidths_c1_Modell_PID(SimStruct *S)
{
  const char* newstr = sf_c1_Modell_PID_get_post_codegen_info();
  sf_set_work_widths(S, newstr);
  ssSetChecksum0(S,(2004254073U));
  ssSetChecksum1(S,(3600489375U));
  ssSetChecksum2(S,(2149928890U));
  ssSetChecksum3(S,(2988898001U));
}

static void mdlRTW_c1_Modell_PID(SimStruct *S)
{
  if (sim_mode_is_rtw_gen(S)) {
    ssWriteRTWStrParam(S, "StateflowChartType", "Embedded MATLAB");
  }
}

static void mdlSetupRuntimeResources_c1_Modell_PID(SimStruct *S)
{
  SFc1_Modell_PIDInstanceStruct *chartInstance;
  chartInstance = (SFc1_Modell_PIDInstanceStruct *)utMalloc(sizeof
    (SFc1_Modell_PIDInstanceStruct));
  if (chartInstance==NULL) {
    sf_mex_error_message("Could not allocate memory for chart instance.");
  }

  memset(chartInstance, 0, sizeof(SFc1_Modell_PIDInstanceStruct));
  chartInstance->chartInfo.chartInstance = chartInstance;
  if (ssGetSampleTime(S, 0) == CONTINUOUS_SAMPLE_TIME && ssGetOffsetTime(S, 0) ==
      0 && sfHasContStates(S)> 0 &&
      !supportsLegacyBehaviorForPersistentVarInContinuousTime(S)) {
    sf_error_out_about_continuous_sample_time_with_persistent_vars(S);
  }

  chartInstance->chartInfo.isEMLChart = 1;
  chartInstance->chartInfo.chartInitialized = 0;
  chartInstance->chartInfo.sFunctionGateway = sf_opaque_gateway_c1_Modell_PID;
  chartInstance->chartInfo.initializeChart = sf_opaque_initialize_c1_Modell_PID;
  chartInstance->chartInfo.mdlStart = sf_opaque_mdl_start_c1_Modell_PID;
  chartInstance->chartInfo.mdlTerminate = sf_opaque_mdl_terminate_c1_Modell_PID;
  chartInstance->chartInfo.mdlCleanupRuntimeResources =
    sf_opaque_cleanup_runtime_resources_c1_Modell_PID;
  chartInstance->chartInfo.enableChart = sf_opaque_enable_c1_Modell_PID;
  chartInstance->chartInfo.disableChart = sf_opaque_disable_c1_Modell_PID;
  chartInstance->chartInfo.getSimState = sf_opaque_get_sim_state_c1_Modell_PID;
  chartInstance->chartInfo.setSimState = sf_opaque_set_sim_state_c1_Modell_PID;
  chartInstance->chartInfo.getSimStateInfo = sf_get_sim_state_info_c1_Modell_PID;
  chartInstance->chartInfo.zeroCrossings = NULL;
  chartInstance->chartInfo.outputs = NULL;
  chartInstance->chartInfo.derivatives = NULL;
  chartInstance->chartInfo.mdlRTW = mdlRTW_c1_Modell_PID;
  chartInstance->chartInfo.mdlSetWorkWidths = mdlSetWorkWidths_c1_Modell_PID;
  chartInstance->chartInfo.extModeExec = NULL;
  chartInstance->chartInfo.restoreLastMajorStepConfiguration = NULL;
  chartInstance->chartInfo.restoreBeforeLastMajorStepConfiguration = NULL;
  chartInstance->chartInfo.storeCurrentConfiguration = NULL;
  chartInstance->chartInfo.callAtomicSubchartUserFcn = NULL;
  chartInstance->chartInfo.callAtomicSubchartAutoFcn = NULL;
  chartInstance->chartInfo.callAtomicSubchartEventFcn = NULL;
  chartInstance->S = S;
  chartInstance->chartInfo.dispatchToExportedFcn = NULL;
  sf_init_ChartRunTimeInfo(S, &(chartInstance->chartInfo), false, 0,
    chartInstance->c1_JITStateAnimation,
    chartInstance->c1_JITTransitionAnimation);
  init_dsm_address_info(chartInstance);
  init_simulink_io_address(chartInstance);
  if (!sim_mode_is_rtw_gen(S)) {
  }

  mdl_setup_runtime_resources_c1_Modell_PID(chartInstance);
}

void c1_Modell_PID_method_dispatcher(SimStruct *S, int_T method, void *data)
{
  switch (method) {
   case SS_CALL_MDL_SETUP_RUNTIME_RESOURCES:
    mdlSetupRuntimeResources_c1_Modell_PID(S);
    break;

   case SS_CALL_MDL_SET_WORK_WIDTHS:
    mdlSetWorkWidths_c1_Modell_PID(S);
    break;

   case SS_CALL_MDL_PROCESS_PARAMETERS:
    mdlProcessParameters_c1_Modell_PID(S);
    break;

   default:
    /* Unhandled method */
    sf_mex_error_message("Stateflow Internal Error:\n"
                         "Error calling c1_Modell_PID_method_dispatcher.\n"
                         "Can't handle method %d.\n", method);
    break;
  }
}
