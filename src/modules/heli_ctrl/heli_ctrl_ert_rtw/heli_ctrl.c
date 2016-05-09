/*
 * File: heli_ctrl.c
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

#include "heli_ctrl.h"

/* user code (top of source file) */
// User -- Source File

/* Block states (auto storage) */
DW_heli_ctrl_T heli_ctrl_DW;

/* External inputs (root inport signals with auto storage) */
ExtU_heli_ctrl_T heli_ctrl_U;

/* External outputs (root outports fed by signals with auto storage) */
ExtY_heli_ctrl_T heli_ctrl_Y;

/* Real-time model */
RT_MODEL_heli_ctrl_T heli_ctrl_M_;
RT_MODEL_heli_ctrl_T *const heli_ctrl_M = &heli_ctrl_M_;

/* Model step function */
void heli_ctrl_step(real32_T dt)
{
	real32_T rtb_Sum7;
	real32_T rtb_Sum7_l;
	real32_T rtb_Sum13;
	real32_T rtb_NOut;
	real32_T rtb_Sum7_lv;
	real32_T rtb_NOut_lq;
	real32_T rtb_Sum7_n;
	real32_T rtb_Sum13_ld;
	real32_T rtb_NOut_m;
	real32_T rtb_Sum7_d;
	real32_T rtb_NOut_n;
	real32_T rtb_Sum7_a;
	real32_T rtb_Sum13_p;
	real32_T rtb_NOut_a;
	real32_T rtb_NOut_l;
	rtb_Sum7 = heli_ctrl_U.eta_sp[0] - heli_ctrl_U.eta[0];

	if ((heli_ctrl_U.reset != 0) || (heli_ctrl_DW.Integrator_PrevResetState != 0)) {
		heli_ctrl_DW.Integrator_DSTATE = 0.0F;
	}

	if ((heli_ctrl_U.reset != 0) || (heli_ctrl_DW.Filter_PrevResetState != 0)) {
		heli_ctrl_DW.Filter_DSTATE = 0.0F;
	}

	rtb_NOut = (rtb_Sum7 * heli_ctrl_U.ROLLPITCH_PID[2] -
		    heli_ctrl_DW.Filter_DSTATE) * 100.0F;
	rtb_Sum13 = ((rtb_Sum7 * heli_ctrl_U.ROLLPITCH_PID[0] +
		      heli_ctrl_DW.Integrator_DSTATE) + rtb_NOut) +
		    heli_ctrl_U.eta_sp[0] * heli_ctrl_U.ROLLPITCH_FF;
	rtb_Sum7_l = rtb_Sum13 - heli_ctrl_U.omb[0];

	if ((heli_ctrl_U.reset != 0) || (heli_ctrl_DW.Integrator_PrevResetState_g != 0)) {
		heli_ctrl_DW.Integrator_DSTATE_c = 0.0F;
	}

	if ((heli_ctrl_U.reset != 0) || (heli_ctrl_DW.Filter_PrevResetState_l != 0)) {
		heli_ctrl_DW.Filter_DSTATE_f = 0.0F;
	}

	rtb_NOut_lq = (rtb_Sum7_l * heli_ctrl_U.RP_RATE_PID[2] -
		       heli_ctrl_DW.Filter_DSTATE_f) * 100.0F;
	rtb_Sum7_lv = heli_ctrl_U.eta_sp[1] - heli_ctrl_U.eta[1];

	if ((heli_ctrl_U.reset != 0) || (heli_ctrl_DW.Integrator_PrevResetState_k != 0)) {
		heli_ctrl_DW.Integrator_DSTATE_i = 0.0F;
	}

	if ((heli_ctrl_U.reset != 0) || (heli_ctrl_DW.Filter_PrevResetState_g != 0)) {
		heli_ctrl_DW.Filter_DSTATE_i = 0.0F;
	}

	rtb_NOut_m = (rtb_Sum7_lv * heli_ctrl_U.ROLLPITCH_PID[2] -
		      heli_ctrl_DW.Filter_DSTATE_i) * 100.0F;
	rtb_Sum13_ld = ((rtb_Sum7_lv * heli_ctrl_U.ROLLPITCH_PID[0] +
			 heli_ctrl_DW.Integrator_DSTATE_i) + rtb_NOut_m) +
		       heli_ctrl_U.eta_sp[1] * heli_ctrl_U.ROLLPITCH_FF;
	rtb_Sum7_n = rtb_Sum13_ld - heli_ctrl_U.omb[1];

	if ((heli_ctrl_U.reset != 0) || (heli_ctrl_DW.Integrator_PrevResetState_d != 0)) {
		heli_ctrl_DW.Integrator_DSTATE_g = 0.0F;
	}

	if ((heli_ctrl_U.reset != 0) || (heli_ctrl_DW.Filter_PrevResetState_c != 0)) {
		heli_ctrl_DW.Filter_DSTATE_m = 0.0F;
	}

	rtb_NOut_n = (rtb_Sum7_n * heli_ctrl_U.RP_RATE_PID[2] -
		      heli_ctrl_DW.Filter_DSTATE_m) * 100.0F;
	rtb_Sum7_d = heli_ctrl_U.eta_sp[2] - heli_ctrl_U.eta[2];

	if ((heli_ctrl_U.reset != 0) || (heli_ctrl_DW.Integrator_PrevResetState_n != 0)) {
		heli_ctrl_DW.Integrator_DSTATE_d = 0.0F;
	}

	if ((heli_ctrl_U.reset != 0) || (heli_ctrl_DW.Filter_PrevResetState_k != 0)) {
		heli_ctrl_DW.Filter_DSTATE_if = 0.0F;
	}

	rtb_NOut_a = (rtb_Sum7_d * heli_ctrl_U.YAW_PID[2] -
		      heli_ctrl_DW.Filter_DSTATE_if) * 100.0F;
	rtb_Sum13_p = ((rtb_Sum7_d * heli_ctrl_U.YAW_PID[0] +
			heli_ctrl_DW.Integrator_DSTATE_d) + rtb_NOut_a) +
		      heli_ctrl_U.eta_sp[2] * heli_ctrl_U.YAW_FF;
	rtb_Sum7_a = rtb_Sum13_p - heli_ctrl_U.omb[2];

	if ((heli_ctrl_U.reset != 0) || (heli_ctrl_DW.Integrator_PrevResetState_p != 0)) {
		heli_ctrl_DW.Integrator_DSTATE_p = 0.0F;
	}

	if ((heli_ctrl_U.reset != 0) || (heli_ctrl_DW.Filter_PrevResetState_e != 0)) {
		heli_ctrl_DW.Filter_DSTATE_k = 0.0F;
	}

	rtb_NOut_l = (rtb_Sum7_a * heli_ctrl_U.YAW_RATE_PID[2] -
		      heli_ctrl_DW.Filter_DSTATE_k) * 100.0F;
	heli_ctrl_Y.out[0] = (rtb_Sum7_l * heli_ctrl_U.RP_RATE_PID[0] +
			      heli_ctrl_DW.Integrator_DSTATE_c) + rtb_NOut_lq;
	heli_ctrl_Y.out[1] = (rtb_Sum7_n * heli_ctrl_U.RP_RATE_PID[0] +
			      heli_ctrl_DW.Integrator_DSTATE_g) + rtb_NOut_n;
	heli_ctrl_Y.out[2] = (rtb_Sum7_a * heli_ctrl_U.YAW_RATE_PID[0] +
			      heli_ctrl_DW.Integrator_DSTATE_p) + rtb_NOut_l;
	heli_ctrl_Y.rate_sp[0] = rtb_Sum13;
	heli_ctrl_Y.rate_sp[1] = rtb_Sum13_ld;
	heli_ctrl_Y.rate_sp[2] = rtb_Sum13_p;
	heli_ctrl_DW.Integrator_DSTATE += rtb_Sum7 * heli_ctrl_U.ROLLPITCH_PID[1] *
					  dt;

	if (heli_ctrl_U.reset > 0) {
		heli_ctrl_DW.Integrator_PrevResetState = 1;
		heli_ctrl_DW.Filter_PrevResetState = 1;

	} else {
		if (heli_ctrl_U.reset < 0) {
			heli_ctrl_DW.Integrator_PrevResetState = -1;

		} else {
			heli_ctrl_DW.Integrator_PrevResetState = 0;
		}

		if (heli_ctrl_U.reset < 0) {
			heli_ctrl_DW.Filter_PrevResetState = -1;

		} else {
			heli_ctrl_DW.Filter_PrevResetState = 0;
		}
	}

	heli_ctrl_DW.Filter_DSTATE += dt * rtb_NOut;
	heli_ctrl_DW.Integrator_DSTATE_c += rtb_Sum7_l * heli_ctrl_U.RP_RATE_PID[1] *
					    dt;

	if (heli_ctrl_U.reset > 0) {
		heli_ctrl_DW.Integrator_PrevResetState_g = 1;
		heli_ctrl_DW.Filter_PrevResetState_l = 1;

	} else {
		if (heli_ctrl_U.reset < 0) {
			heli_ctrl_DW.Integrator_PrevResetState_g = -1;

		} else {
			heli_ctrl_DW.Integrator_PrevResetState_g = 0;
		}

		if (heli_ctrl_U.reset < 0) {
			heli_ctrl_DW.Filter_PrevResetState_l = -1;

		} else {
			heli_ctrl_DW.Filter_PrevResetState_l = 0;
		}
	}

	heli_ctrl_DW.Filter_DSTATE_f += dt * rtb_NOut_lq;
	heli_ctrl_DW.Integrator_DSTATE_i += rtb_Sum7_lv * heli_ctrl_U.ROLLPITCH_PID[1]
					    * dt;

	if (heli_ctrl_U.reset > 0) {
		heli_ctrl_DW.Integrator_PrevResetState_k = 1;
		heli_ctrl_DW.Filter_PrevResetState_g = 1;

	} else {
		if (heli_ctrl_U.reset < 0) {
			heli_ctrl_DW.Integrator_PrevResetState_k = -1;

		} else {
			heli_ctrl_DW.Integrator_PrevResetState_k = 0;
		}

		if (heli_ctrl_U.reset < 0) {
			heli_ctrl_DW.Filter_PrevResetState_g = -1;

		} else {
			heli_ctrl_DW.Filter_PrevResetState_g = 0;
		}
	}

	heli_ctrl_DW.Filter_DSTATE_i += dt * rtb_NOut_m;
	heli_ctrl_DW.Integrator_DSTATE_g += rtb_Sum7_n * heli_ctrl_U.RP_RATE_PID[1] *
					    dt;

	if (heli_ctrl_U.reset > 0) {
		heli_ctrl_DW.Integrator_PrevResetState_d = 1;
		heli_ctrl_DW.Filter_PrevResetState_c = 1;

	} else {
		if (heli_ctrl_U.reset < 0) {
			heli_ctrl_DW.Integrator_PrevResetState_d = -1;

		} else {
			heli_ctrl_DW.Integrator_PrevResetState_d = 0;
		}

		if (heli_ctrl_U.reset < 0) {
			heli_ctrl_DW.Filter_PrevResetState_c = -1;

		} else {
			heli_ctrl_DW.Filter_PrevResetState_c = 0;
		}
	}

	heli_ctrl_DW.Filter_DSTATE_m += dt * rtb_NOut_n;
	heli_ctrl_DW.Integrator_DSTATE_d += rtb_Sum7_d * heli_ctrl_U.YAW_PID[1] *
					    dt;

	if (heli_ctrl_U.reset > 0) {
		heli_ctrl_DW.Integrator_PrevResetState_n = 1;
		heli_ctrl_DW.Filter_PrevResetState_k = 1;

	} else {
		if (heli_ctrl_U.reset < 0) {
			heli_ctrl_DW.Integrator_PrevResetState_n = -1;

		} else {
			heli_ctrl_DW.Integrator_PrevResetState_n = 0;
		}

		if (heli_ctrl_U.reset < 0) {
			heli_ctrl_DW.Filter_PrevResetState_k = -1;

		} else {
			heli_ctrl_DW.Filter_PrevResetState_k = 0;
		}
	}

	heli_ctrl_DW.Filter_DSTATE_if += dt * rtb_NOut_a;
	heli_ctrl_DW.Integrator_DSTATE_p += rtb_Sum7_a * heli_ctrl_U.YAW_RATE_PID[1] *
					    dt;

	if (heli_ctrl_U.reset > 0) {
		heli_ctrl_DW.Integrator_PrevResetState_p = 1;
		heli_ctrl_DW.Filter_PrevResetState_e = 1;

	} else {
		if (heli_ctrl_U.reset < 0) {
			heli_ctrl_DW.Integrator_PrevResetState_p = -1;

		} else {
			heli_ctrl_DW.Integrator_PrevResetState_p = 0;
		}

		if (heli_ctrl_U.reset < 0) {
			heli_ctrl_DW.Filter_PrevResetState_e = -1;

		} else {
			heli_ctrl_DW.Filter_PrevResetState_e = 0;
		}
	}

	heli_ctrl_DW.Filter_DSTATE_k += dt * rtb_NOut_l;
}

/* Model initialize function */
void heli_ctrl_initialize(void)
{
	/* Registration code */

	/* initialize error status */
	rtmSetErrorStatus(heli_ctrl_M, (NULL));

	/* states (dwork) */
	(void) memset((void *)&heli_ctrl_DW, 0,
		      sizeof(DW_heli_ctrl_T));

	/* external inputs */
	(void) memset((void *)&heli_ctrl_U, 0,
		      sizeof(ExtU_heli_ctrl_T));

	/* external outputs */
	(void) memset((void *)&heli_ctrl_Y, 0,
		      sizeof(ExtY_heli_ctrl_T));
	heli_ctrl_DW.Integrator_PrevResetState = 0;
	heli_ctrl_DW.Filter_PrevResetState = 0;
	heli_ctrl_DW.Integrator_PrevResetState_g = 0;
	heli_ctrl_DW.Filter_PrevResetState_l = 0;
	heli_ctrl_DW.Integrator_PrevResetState_k = 0;
	heli_ctrl_DW.Filter_PrevResetState_g = 0;
	heli_ctrl_DW.Integrator_PrevResetState_d = 0;
	heli_ctrl_DW.Filter_PrevResetState_c = 0;
	heli_ctrl_DW.Integrator_PrevResetState_n = 0;
	heli_ctrl_DW.Filter_PrevResetState_k = 0;
	heli_ctrl_DW.Integrator_PrevResetState_p = 0;
	heli_ctrl_DW.Filter_PrevResetState_e = 0;

	/* user code (Initialize function Body) */

	// User -- Initialize Function
}

/* Model terminate function */
void heli_ctrl_terminate(void)
{
	/* user code (Terminate function Body) */

	// User -- Terminate Function
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
