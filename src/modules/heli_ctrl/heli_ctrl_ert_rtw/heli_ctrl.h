/*
 * File: heli_ctrl.h
 *
 * Code generated for Simulink model 'heli_ctrl'.
 *
 * Model version                  : 1.848
 * Simulink Coder version         : 8.10 (R2016a) 10-Feb-2016
 * C/C++ source code generated on : Wed May  4 16:55:28 2016
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM 7
 * Code generation objectives:
 *    1. Execution efficiency
 *    2. ROM efficiency
 *    3. RAM efficiency
 * Validation result: Not run
 */

#ifndef RTW_HEADER_heli_ctrl_h_
#define RTW_HEADER_heli_ctrl_h_
#include <stddef.h>
#include <string.h>
#ifndef heli_ctrl_COMMON_INCLUDES_
# define heli_ctrl_COMMON_INCLUDES_
#include "rtwtypes.h"
#endif                                 /* heli_ctrl_COMMON_INCLUDES_ */

/* Macros for accessing real-time model data structure */
#ifndef rtmGetErrorStatus
# define rtmGetErrorStatus(rtm)        ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
# define rtmSetErrorStatus(rtm, val)   ((rtm)->errorStatus = (val))
#endif

/* Forward declaration for rtModel */
typedef struct tag_RTM_heli_ctrl_T RT_MODEL_heli_ctrl_T;

/* user code (top of header file) */
// User -- Header File

/* Block states (auto storage) for system '<Root>' */
typedef struct {
	real32_T Integrator_DSTATE;          /* '<S6>/Integrator' */
	real32_T Filter_DSTATE;              /* '<S6>/Filter' */
	real32_T Integrator_DSTATE_c;        /* '<S12>/Integrator' */
	real32_T Filter_DSTATE_f;            /* '<S12>/Filter' */
	real32_T Integrator_DSTATE_i;        /* '<S7>/Integrator' */
	real32_T Filter_DSTATE_i;            /* '<S7>/Filter' */
	real32_T Integrator_DSTATE_g;        /* '<S13>/Integrator' */
	real32_T Filter_DSTATE_m;            /* '<S13>/Filter' */
	real32_T Integrator_DSTATE_d;        /* '<S8>/Integrator' */
	real32_T Filter_DSTATE_if;           /* '<S8>/Filter' */
	real32_T Integrator_DSTATE_p;        /* '<S14>/Integrator' */
	real32_T Filter_DSTATE_k;            /* '<S14>/Filter' */
	int8_T Integrator_PrevResetState;    /* '<S6>/Integrator' */
	int8_T Filter_PrevResetState;        /* '<S6>/Filter' */
	int8_T Integrator_PrevResetState_g;  /* '<S12>/Integrator' */
	int8_T Filter_PrevResetState_l;      /* '<S12>/Filter' */
	int8_T Integrator_PrevResetState_k;  /* '<S7>/Integrator' */
	int8_T Filter_PrevResetState_g;      /* '<S7>/Filter' */
	int8_T Integrator_PrevResetState_d;  /* '<S13>/Integrator' */
	int8_T Filter_PrevResetState_c;      /* '<S13>/Filter' */
	int8_T Integrator_PrevResetState_n;  /* '<S8>/Integrator' */
	int8_T Filter_PrevResetState_k;      /* '<S8>/Filter' */
	int8_T Integrator_PrevResetState_p;  /* '<S14>/Integrator' */
	int8_T Filter_PrevResetState_e;      /* '<S14>/Filter' */
} DW_heli_ctrl_T;

/* External inputs (root inport signals with auto storage) */
typedef struct {
	real32_T eta_sp[3];                  /* '<Root>/eta_sp' */
	real32_T eta[3];                     /* '<Root>/eta' */
	real32_T omb[3];                     /* '<Root>/omb' */
	real32_T ROLLPITCH_FF;               /* '<Root>/ROLLPITCH_FF' */
	real32_T ROLLPITCH_PID[3];           /* '<Root>/ROLLPITCH_PID' */
	real32_T YAW_FF;                     /* '<Root>/YAW_FF' */
	real32_T YAW_PID[3];                 /* '<Root>/YAW_PID' */
	real32_T RP_RATE_PID[3];             /* '<Root>/RP_RATE_PID' */
	real32_T YAW_RATE_PID[3];            /* '<Root>/YAW_RATE_PID' */
	int8_T reset;                        /* '<Root>/reset' */
} ExtU_heli_ctrl_T;

/* External outputs (root outports fed by signals with auto storage) */
typedef struct {
	real32_T out[3];                     /* '<Root>/out' */
	real32_T rate_sp[3];                 /* '<Root>/rate_sp' */
} ExtY_heli_ctrl_T;

/* Real-time Model Data Structure */
struct tag_RTM_heli_ctrl_T {
	const char_T *errorStatus;
};

/* Block states (auto storage) */
extern DW_heli_ctrl_T heli_ctrl_DW;

/* External inputs (root inport signals with auto storage) */
extern ExtU_heli_ctrl_T heli_ctrl_U;

/* External outputs (root outports fed by signals with auto storage) */
extern ExtY_heli_ctrl_T heli_ctrl_Y;

/* Model entry point functions */
void heli_ctrl_initialize(void);
void heli_ctrl_step(real32_T dt);
void heli_ctrl_terminate(void);

/* Real-time Model object */
extern RT_MODEL_heli_ctrl_T *const heli_ctrl_M;

/*-
 * The generated code includes comments that allow you to trace directly
 * back to the appropriate location in the model.  The basic format
 * is <system>/block_name, where system is the system number (uniquely
 * assigned by Simulink) and block_name is the name of the block.
 *
 * Use the MATLAB hilite_system command to trace the generated code back
 * to the model.  For example,
 *
 * hilite_system('<S3>')    - opens system 3
 * hilite_system('<S3>/Kp') - opens and selects block Kp which resides in S3
 *
 * Here is the system hierarchy for this model
 *
 * '<Root>' : 'heli_ctrl'
 * '<S1>'   : 'heli_ctrl/attitude controller'
 * '<S2>'   : 'heli_ctrl/attitude rate controller'
 * '<S3>'   : 'heli_ctrl/attitude controller/PID_FF1'
 * '<S4>'   : 'heli_ctrl/attitude controller/PID_FF2'
 * '<S5>'   : 'heli_ctrl/attitude controller/PID_FF3'
 * '<S6>'   : 'heli_ctrl/attitude controller/PID_FF1/PID'
 * '<S7>'   : 'heli_ctrl/attitude controller/PID_FF2/PID'
 * '<S8>'   : 'heli_ctrl/attitude controller/PID_FF3/PID'
 * '<S9>'   : 'heli_ctrl/attitude rate controller/PID_FF1'
 * '<S10>'  : 'heli_ctrl/attitude rate controller/PID_FF2'
 * '<S11>'  : 'heli_ctrl/attitude rate controller/PID_FF3'
 * '<S12>'  : 'heli_ctrl/attitude rate controller/PID_FF1/PID'
 * '<S13>'  : 'heli_ctrl/attitude rate controller/PID_FF2/PID'
 * '<S14>'  : 'heli_ctrl/attitude rate controller/PID_FF3/PID'
 */
#endif                                 /* RTW_HEADER_heli_ctrl_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
