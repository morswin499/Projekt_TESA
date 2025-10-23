/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: untitled2.c
 *
 * Code generated for Simulink model 'untitled2'.
 *
 * Model version                  : 1.0
 * Simulink Coder version         : 25.2 (R2025b) 28-Jul-2025
 * C/C++ source code generated on : Sun Oct 19 20:54:53 2025
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Atmel->AVR
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "untitled2.h"
#include "untitled2_types.h"
#include <string.h>
#include "rtwtypes.h"
#include <stddef.h>
#include "untitled2_private.h"

/* Block signals (default storage) */
B_untitled2_T untitled2_B;

/* Block states (default storage) */
DW_untitled2_T untitled2_DW;

/* Real-time model */
static RT_MODEL_untitled2_T untitled2_M_;
RT_MODEL_untitled2_T *const untitled2_M = &untitled2_M_;

/* Forward declaration for local functions */
static codertarget_arduinobase_inter_T *u_arduinoLSM9DS1_arduinoLSM9DS1
  (codertarget_arduinobase_inter_T *obj);
static void untitled2_SystemCore_setup(codertarget_arduinobase_inter_T *obj);
static codertarget_arduinobase_inter_T *u_arduinoLSM9DS1_arduinoLSM9DS1
  (codertarget_arduinobase_inter_T *obj)
{
  codertarget_arduinobase_inter_T *b_obj;

  /* Start for MATLABSystem: '<S1>/Base sensor block' */
  obj->isInitialized = 0L;
  obj->IsFirstStep = false;
  b_obj = obj;
  obj->i2cobj_A_G.DefaultMaximumBusSpeedInHz = 400000.0;
  obj->i2cobj_A_G.isInitialized = 0L;
  obj->i2cobj_A_G.I2CDriverObj.MW_I2C_HANDLE = NULL;
  obj->i2cobj_A_G.matlabCodegenIsDeleted = false;
  obj->i2cobj_MAG.DefaultMaximumBusSpeedInHz = 400000.0;
  obj->i2cobj_MAG.isInitialized = 0L;
  obj->i2cobj_MAG.I2CDriverObj.MW_I2C_HANDLE = NULL;
  obj->i2cobj_MAG.matlabCodegenIsDeleted = false;
  obj->matlabCodegenIsDeleted = false;
  return b_obj;
}

static void untitled2_SystemCore_setup(codertarget_arduinobase_inter_T *obj)
{
  uint8_T SwappedDataBytes[2];
  uint8_T b_SwappedDataBytes[2];
  uint8_T CastedData;

  /* Start for MATLABSystem: '<S1>/Base sensor block' */
  obj->isInitialized = 1L;
  obj->i2cobj_A_G.I2CDriverObj.MW_I2C_HANDLE = MW_I2C_Open(0, MW_I2C_MASTER);
  obj->i2cobj_A_G.BusSpeed = 100000UL;
  MW_I2C_SetBusSpeed(obj->i2cobj_A_G.I2CDriverObj.MW_I2C_HANDLE,
                     obj->i2cobj_A_G.BusSpeed);
  CastedData = 4U;
  memcpy((void *)&b_SwappedDataBytes[1], (void *)&CastedData, (size_t)1 * sizeof
         (uint8_T));
  b_SwappedDataBytes[0] = 34U;

  /* Start for MATLABSystem: '<S1>/Base sensor block' */
  memcpy((void *)&SwappedDataBytes[0], (void *)&b_SwappedDataBytes[0], (size_t)2
         * sizeof(uint8_T));
  MW_I2C_MasterWrite(obj->i2cobj_A_G.I2CDriverObj.MW_I2C_HANDLE, 107UL,
                     &SwappedDataBytes[0], 2UL, false, false);
  MW_delay_in_milliseconds(10UL);
  CastedData = 96U;

  /* Start for MATLABSystem: '<S1>/Base sensor block' */
  memcpy((void *)&b_SwappedDataBytes[1], (void *)&CastedData, (size_t)1 * sizeof
         (uint8_T));
  b_SwappedDataBytes[0] = 16U;

  /* Start for MATLABSystem: '<S1>/Base sensor block' */
  memcpy((void *)&SwappedDataBytes[0], (void *)&b_SwappedDataBytes[0], (size_t)2
         * sizeof(uint8_T));
  MW_I2C_MasterWrite(obj->i2cobj_A_G.I2CDriverObj.MW_I2C_HANDLE, 107UL,
                     &SwappedDataBytes[0], 2UL, false, false);
  CastedData = 0U;
  memcpy((void *)&b_SwappedDataBytes[1], (void *)&CastedData, (size_t)1 * sizeof
         (uint8_T));
  b_SwappedDataBytes[0] = 17U;

  /* Start for MATLABSystem: '<S1>/Base sensor block' */
  memcpy((void *)&SwappedDataBytes[0], (void *)&b_SwappedDataBytes[0], (size_t)2
         * sizeof(uint8_T));
  MW_I2C_MasterWrite(obj->i2cobj_A_G.I2CDriverObj.MW_I2C_HANDLE, 107UL,
                     &SwappedDataBytes[0], 2UL, false, false);
  CastedData = 64U;

  /* Start for MATLABSystem: '<S1>/Base sensor block' */
  memcpy((void *)&b_SwappedDataBytes[1], (void *)&CastedData, (size_t)1 * sizeof
         (uint8_T));
  b_SwappedDataBytes[0] = 18U;

  /* Start for MATLABSystem: '<S1>/Base sensor block' */
  memcpy((void *)&SwappedDataBytes[0], (void *)&b_SwappedDataBytes[0], (size_t)2
         * sizeof(uint8_T));
  MW_I2C_MasterWrite(obj->i2cobj_A_G.I2CDriverObj.MW_I2C_HANDLE, 107UL,
                     &SwappedDataBytes[0], 2UL, false, false);
  CastedData = 56U;
  memcpy((void *)&b_SwappedDataBytes[1], (void *)&CastedData, (size_t)1 * sizeof
         (uint8_T));
  b_SwappedDataBytes[0] = 30U;

  /* Start for MATLABSystem: '<S1>/Base sensor block' */
  memcpy((void *)&SwappedDataBytes[0], (void *)&b_SwappedDataBytes[0], (size_t)2
         * sizeof(uint8_T));
  MW_I2C_MasterWrite(obj->i2cobj_A_G.I2CDriverObj.MW_I2C_HANDLE, 107UL,
                     &SwappedDataBytes[0], 2UL, false, false);
  CastedData = 0U;
  memcpy((void *)&b_SwappedDataBytes[1], (void *)&CastedData, (size_t)1 * sizeof
         (uint8_T));
  b_SwappedDataBytes[0] = 19U;

  /* Start for MATLABSystem: '<S1>/Base sensor block' */
  memcpy((void *)&SwappedDataBytes[0], (void *)&b_SwappedDataBytes[0], (size_t)2
         * sizeof(uint8_T));
  MW_I2C_MasterWrite(obj->i2cobj_A_G.I2CDriverObj.MW_I2C_HANDLE, 107UL,
                     &SwappedDataBytes[0], 2UL, false, false);
  CastedData = 4U;
  memcpy((void *)&b_SwappedDataBytes[1], (void *)&CastedData, (size_t)1 * sizeof
         (uint8_T));
  b_SwappedDataBytes[0] = 34U;

  /* Start for MATLABSystem: '<S1>/Base sensor block' */
  memcpy((void *)&SwappedDataBytes[0], (void *)&b_SwappedDataBytes[0], (size_t)2
         * sizeof(uint8_T));
  MW_I2C_MasterWrite(obj->i2cobj_A_G.I2CDriverObj.MW_I2C_HANDLE, 107UL,
                     &SwappedDataBytes[0], 2UL, false, false);
  MW_delay_in_milliseconds(10UL);
  CastedData = 56U;
  memcpy((void *)&b_SwappedDataBytes[1], (void *)&CastedData, (size_t)1 * sizeof
         (uint8_T));
  b_SwappedDataBytes[0] = 31U;

  /* Start for MATLABSystem: '<S1>/Base sensor block' */
  memcpy((void *)&SwappedDataBytes[0], (void *)&b_SwappedDataBytes[0], (size_t)2
         * sizeof(uint8_T));
  MW_I2C_MasterWrite(obj->i2cobj_A_G.I2CDriverObj.MW_I2C_HANDLE, 107UL,
                     &SwappedDataBytes[0], 2UL, false, false);
  CastedData = 103U;

  /* Start for MATLABSystem: '<S1>/Base sensor block' */
  memcpy((void *)&b_SwappedDataBytes[1], (void *)&CastedData, (size_t)1 * sizeof
         (uint8_T));
  b_SwappedDataBytes[0] = 32U;

  /* Start for MATLABSystem: '<S1>/Base sensor block' */
  memcpy((void *)&SwappedDataBytes[0], (void *)&b_SwappedDataBytes[0], (size_t)2
         * sizeof(uint8_T));
  MW_I2C_MasterWrite(obj->i2cobj_A_G.I2CDriverObj.MW_I2C_HANDLE, 107UL,
                     &SwappedDataBytes[0], 2UL, false, false);
  CastedData = 0U;
  memcpy((void *)&b_SwappedDataBytes[1], (void *)&CastedData, (size_t)1 * sizeof
         (uint8_T));
  b_SwappedDataBytes[0] = 33U;

  /* Start for MATLABSystem: '<S1>/Base sensor block' */
  memcpy((void *)&SwappedDataBytes[0], (void *)&b_SwappedDataBytes[0], (size_t)2
         * sizeof(uint8_T));
  MW_I2C_MasterWrite(obj->i2cobj_A_G.I2CDriverObj.MW_I2C_HANDLE, 107UL,
                     &SwappedDataBytes[0], 2UL, false, false);
  obj->i2cobj_MAG.I2CDriverObj.MW_I2C_HANDLE = MW_I2C_Open(0, MW_I2C_MASTER);
  obj->i2cobj_MAG.BusSpeed = 100000UL;
  MW_I2C_SetBusSpeed(obj->i2cobj_MAG.I2CDriverObj.MW_I2C_HANDLE,
                     obj->i2cobj_MAG.BusSpeed);
  CastedData = 24U;

  /* Start for MATLABSystem: '<S1>/Base sensor block' */
  memcpy((void *)&b_SwappedDataBytes[1], (void *)&CastedData, (size_t)1 * sizeof
         (uint8_T));
  b_SwappedDataBytes[0] = 32U;

  /* Start for MATLABSystem: '<S1>/Base sensor block' */
  memcpy((void *)&SwappedDataBytes[0], (void *)&b_SwappedDataBytes[0], (size_t)2
         * sizeof(uint8_T));
  MW_I2C_MasterWrite(obj->i2cobj_MAG.I2CDriverObj.MW_I2C_HANDLE, 30UL,
                     &SwappedDataBytes[0], 2UL, false, false);
  CastedData = 0U;

  /* Start for MATLABSystem: '<S1>/Base sensor block' */
  memcpy((void *)&b_SwappedDataBytes[1], (void *)&CastedData, (size_t)1 * sizeof
         (uint8_T));
  b_SwappedDataBytes[0] = 33U;

  /* Start for MATLABSystem: '<S1>/Base sensor block' */
  memcpy((void *)&SwappedDataBytes[0], (void *)&b_SwappedDataBytes[0], (size_t)2
         * sizeof(uint8_T));
  MW_I2C_MasterWrite(obj->i2cobj_MAG.I2CDriverObj.MW_I2C_HANDLE, 30UL,
                     &SwappedDataBytes[0], 2UL, false, false);
  CastedData = 0U;

  /* Start for MATLABSystem: '<S1>/Base sensor block' */
  memcpy((void *)&b_SwappedDataBytes[1], (void *)&CastedData, (size_t)1 * sizeof
         (uint8_T));
  b_SwappedDataBytes[0] = 34U;

  /* Start for MATLABSystem: '<S1>/Base sensor block' */
  memcpy((void *)&SwappedDataBytes[0], (void *)&b_SwappedDataBytes[0], (size_t)2
         * sizeof(uint8_T));
  MW_I2C_MasterWrite(obj->i2cobj_MAG.I2CDriverObj.MW_I2C_HANDLE, 30UL,
                     &SwappedDataBytes[0], 2UL, false, false);
  CastedData = 0U;

  /* Start for MATLABSystem: '<S1>/Base sensor block' */
  memcpy((void *)&b_SwappedDataBytes[1], (void *)&CastedData, (size_t)1 * sizeof
         (uint8_T));
  b_SwappedDataBytes[0] = 35U;

  /* Start for MATLABSystem: '<S1>/Base sensor block' */
  memcpy((void *)&SwappedDataBytes[0], (void *)&b_SwappedDataBytes[0], (size_t)2
         * sizeof(uint8_T));
  MW_I2C_MasterWrite(obj->i2cobj_MAG.I2CDriverObj.MW_I2C_HANDLE, 30UL,
                     &SwappedDataBytes[0], 2UL, false, false);
  CastedData = 0U;

  /* Start for MATLABSystem: '<S1>/Base sensor block' */
  memcpy((void *)&b_SwappedDataBytes[1], (void *)&CastedData, (size_t)1 * sizeof
         (uint8_T));
  b_SwappedDataBytes[0] = 36U;

  /* Start for MATLABSystem: '<S1>/Base sensor block' */
  memcpy((void *)&SwappedDataBytes[0], (void *)&b_SwappedDataBytes[0], (size_t)2
         * sizeof(uint8_T));
  MW_I2C_MasterWrite(obj->i2cobj_MAG.I2CDriverObj.MW_I2C_HANDLE, 30UL,
                     &SwappedDataBytes[0], 2UL, false, false);
  MW_delay_in_milliseconds(10UL);
  obj->isSetupComplete = true;
}

/* Model step function */
void untitled2_step(void)
{
  int16_T b_output[3];
  int16_T b_output_0[3];
  int16_T b_output_1[3];
  uint8_T output_raw[6];
  uint8_T SwappedDataBytes;
  uint8_T status;

  /* Outputs for Atomic SubSystem: '<Root>/LSM9DS1 IMU Sensor' */
  /* MATLABSystem: '<S1>/Base sensor block' */
  if (!untitled2_DW.obj.IsFirstStep) {
    MW_getCurrentTime_in_milliseconds();
    untitled2_DW.obj.IsFirstStep = true;
  }

  status = 40U;
  memcpy((void *)&SwappedDataBytes, (void *)&status, (size_t)1 * sizeof(uint8_T));
  status = MW_I2C_MasterWrite
    (untitled2_DW.obj.i2cobj_A_G.I2CDriverObj.MW_I2C_HANDLE, 107UL,
     &SwappedDataBytes, 1UL, true, false);
  if (status == 0) {
    MW_I2C_MasterRead(untitled2_DW.obj.i2cobj_A_G.I2CDriverObj.MW_I2C_HANDLE,
                      107UL, &output_raw[0], 6UL, false, true);
    memcpy((void *)&b_output[0], (void *)&output_raw[0], (size_t)3 * sizeof
           (int16_T));
  } else {
    b_output[0] = 0;
    b_output[1] = 0;
    b_output[2] = 0;
  }

  status = 24U;
  memcpy((void *)&SwappedDataBytes, (void *)&status, (size_t)1 * sizeof(uint8_T));
  status = MW_I2C_MasterWrite
    (untitled2_DW.obj.i2cobj_A_G.I2CDriverObj.MW_I2C_HANDLE, 107UL,
     &SwappedDataBytes, 1UL, true, false);
  if (status == 0) {
    MW_I2C_MasterRead(untitled2_DW.obj.i2cobj_A_G.I2CDriverObj.MW_I2C_HANDLE,
                      107UL, &output_raw[0], 6UL, false, true);
    memcpy((void *)&b_output_0[0], (void *)&output_raw[0], (size_t)3 * sizeof
           (int16_T));
  } else {
    b_output_0[0] = 0;
    b_output_0[1] = 0;
    b_output_0[2] = 0;
  }

  status = 40U;
  memcpy((void *)&SwappedDataBytes, (void *)&status, (size_t)1 * sizeof(uint8_T));
  status = MW_I2C_MasterWrite
    (untitled2_DW.obj.i2cobj_MAG.I2CDriverObj.MW_I2C_HANDLE, 30UL,
     &SwappedDataBytes, 1UL, true, false);
  if (status == 0) {
    MW_I2C_MasterRead(untitled2_DW.obj.i2cobj_MAG.I2CDriverObj.MW_I2C_HANDLE,
                      30UL, &output_raw[0], 6UL, false, true);
    memcpy((void *)&b_output_1[0], (void *)&output_raw[0], (size_t)3 * sizeof
           (int16_T));
  } else {
    b_output_1[0] = 0;
    b_output_1[1] = 0;
    b_output_1[2] = 0;
  }

  /* MATLABSystem: '<S1>/Base sensor block' */
  untitled2_B.Basesensorblock_o1[0] = (real_T)b_output[0] * 2.0 / 32768.0;

  /* MATLABSystem: '<S1>/Base sensor block' */
  untitled2_B.Basesensorblock_o2[0] = (real_T)b_output_0[0] * 245.0 / 32768.0;

  /* MATLABSystem: '<S1>/Base sensor block' */
  untitled2_B.Basesensorblock_o3[0] = (real_T)b_output_1[0] * 4.0 / 32768.0;

  /* MATLABSystem: '<S1>/Base sensor block' */
  untitled2_B.Basesensorblock_o1[1] = (real_T)b_output[1] * 2.0 / 32768.0;

  /* MATLABSystem: '<S1>/Base sensor block' */
  untitled2_B.Basesensorblock_o2[1] = (real_T)b_output_0[1] * 245.0 / 32768.0;

  /* MATLABSystem: '<S1>/Base sensor block' */
  untitled2_B.Basesensorblock_o3[1] = (real_T)b_output_1[1] * 4.0 / 32768.0;

  /* MATLABSystem: '<S1>/Base sensor block' */
  untitled2_B.Basesensorblock_o1[2] = (real_T)b_output[2] * 2.0 / 32768.0;

  /* MATLABSystem: '<S1>/Base sensor block' */
  untitled2_B.Basesensorblock_o2[2] = (real_T)b_output_0[2] * 245.0 / 32768.0;

  /* MATLABSystem: '<S1>/Base sensor block' */
  untitled2_B.Basesensorblock_o3[2] = (real_T)b_output_1[2] * 4.0 / 32768.0;

  /* End of Outputs for SubSystem: '<Root>/LSM9DS1 IMU Sensor' */

  /* Update absolute time for base rate */
  /* The "clockTick0" counts the number of times the code of this task has
   * been executed. The resolution of this integer timer is 0.1, which is the step size
   * of the task. Size of "clockTick0" ensures timer will not overflow during the
   * application lifespan selected.
   */
  untitled2_M->Timing.clockTick0++;
}

/* Model initialize function */
void untitled2_initialize(void)
{
  /* Registration code */
  rtmSetTFinal(untitled2_M, 30.0);

  /* External mode info */
  untitled2_M->Sizes.checksums[0] = (3471286302U);
  untitled2_M->Sizes.checksums[1] = (2563287817U);
  untitled2_M->Sizes.checksums[2] = (3330987326U);
  untitled2_M->Sizes.checksums[3] = (1186402741U);

  {
    static const sysRanDType rtAlwaysEnabled = SUBSYS_RAN_BC_ENABLE;
    static RTWExtModeInfo rt_ExtModeInfo;
    static const sysRanDType *systemRan[3];
    untitled2_M->extModeInfo = (&rt_ExtModeInfo);
    rteiSetSubSystemActiveVectorAddresses(&rt_ExtModeInfo, systemRan);
    systemRan[0] = &rtAlwaysEnabled;
    systemRan[1] = &rtAlwaysEnabled;
    systemRan[2] = &rtAlwaysEnabled;
    rteiSetModelMappingInfoPtr(untitled2_M->extModeInfo,
      &untitled2_M->SpecialInfo.mappingInfo);
    rteiSetChecksumsPtr(untitled2_M->extModeInfo, untitled2_M->Sizes.checksums);
    rteiSetTFinalTicks(untitled2_M->extModeInfo, 300);
  }

  /* SystemInitialize for Atomic SubSystem: '<Root>/LSM9DS1 IMU Sensor' */
  /* Start for MATLABSystem: '<S1>/Base sensor block' */
  untitled2_DW.obj.i2cobj_A_G.matlabCodegenIsDeleted = true;
  untitled2_DW.obj.i2cobj_MAG.matlabCodegenIsDeleted = true;
  untitled2_DW.obj.matlabCodegenIsDeleted = true;
  u_arduinoLSM9DS1_arduinoLSM9DS1(&untitled2_DW.obj);
  untitled2_SystemCore_setup(&untitled2_DW.obj);

  /* End of SystemInitialize for SubSystem: '<Root>/LSM9DS1 IMU Sensor' */
}

/* Model terminate function */
void untitled2_terminate(void)
{
  /* Terminate for Atomic SubSystem: '<Root>/LSM9DS1 IMU Sensor' */
  /* Terminate for MATLABSystem: '<S1>/Base sensor block' */
  if (!untitled2_DW.obj.matlabCodegenIsDeleted) {
    untitled2_DW.obj.matlabCodegenIsDeleted = true;
    if ((untitled2_DW.obj.isInitialized == 1L) &&
        untitled2_DW.obj.isSetupComplete) {
      MW_I2C_Close(untitled2_DW.obj.i2cobj_A_G.I2CDriverObj.MW_I2C_HANDLE);
      MW_I2C_Close(untitled2_DW.obj.i2cobj_MAG.I2CDriverObj.MW_I2C_HANDLE);
    }
  }

  if (!untitled2_DW.obj.i2cobj_MAG.matlabCodegenIsDeleted) {
    untitled2_DW.obj.i2cobj_MAG.matlabCodegenIsDeleted = true;
    if (untitled2_DW.obj.i2cobj_MAG.isInitialized == 1L) {
      untitled2_DW.obj.i2cobj_MAG.isInitialized = 2L;
    }
  }

  if (!untitled2_DW.obj.i2cobj_A_G.matlabCodegenIsDeleted) {
    untitled2_DW.obj.i2cobj_A_G.matlabCodegenIsDeleted = true;
    if (untitled2_DW.obj.i2cobj_A_G.isInitialized == 1L) {
      untitled2_DW.obj.i2cobj_A_G.isInitialized = 2L;
    }
  }

  /* End of Terminate for MATLABSystem: '<S1>/Base sensor block' */
  /* End of Terminate for SubSystem: '<Root>/LSM9DS1 IMU Sensor' */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
