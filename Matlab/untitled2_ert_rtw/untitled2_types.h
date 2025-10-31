/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: untitled2_types.h
 *
 * Code generated for Simulink model 'untitled2'.
 *
 * Model version                  : 1.1
 * Simulink Coder version         : 25.2 (R2025b) 28-Jul-2025
 * C/C++ source code generated on : Thu Oct 30 18:24:58 2025
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Atmel->AVR
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef untitled2_types_h_
#define untitled2_types_h_
#include "MW_SVD.h"
#include "rtwtypes.h"

/* Custom Type definition for MATLABSystem: '<S1>/Base sensor block' */
#include "MW_SVD.h"
#ifndef struct_tag_BczSCX0m9Gp7rApo3jZAxG
#define struct_tag_BczSCX0m9Gp7rApo3jZAxG

struct tag_BczSCX0m9Gp7rApo3jZAxG
{
  MW_Handle_Type MW_I2C_HANDLE;
};

#endif                                 /* struct_tag_BczSCX0m9Gp7rApo3jZAxG */

#ifndef typedef_c_arduinodriver_ArduinoI2C_un_T
#define typedef_c_arduinodriver_ArduinoI2C_un_T

typedef struct tag_BczSCX0m9Gp7rApo3jZAxG c_arduinodriver_ArduinoI2C_un_T;

#endif                             /* typedef_c_arduinodriver_ArduinoI2C_un_T */

#ifndef struct_tag_zBM0QIfHHyCjZ4olmQoPBF
#define struct_tag_zBM0QIfHHyCjZ4olmQoPBF

struct tag_zBM0QIfHHyCjZ4olmQoPBF
{
  boolean_T matlabCodegenIsDeleted;
  int32_T isInitialized;
  c_arduinodriver_ArduinoI2C_un_T I2CDriverObj;
  uint32_T BusSpeed;
  real_T DefaultMaximumBusSpeedInHz;
};

#endif                                 /* struct_tag_zBM0QIfHHyCjZ4olmQoPBF */

#ifndef typedef_f_codertarget_arduinobase_int_T
#define typedef_f_codertarget_arduinobase_int_T

typedef struct tag_zBM0QIfHHyCjZ4olmQoPBF f_codertarget_arduinobase_int_T;

#endif                             /* typedef_f_codertarget_arduinobase_int_T */

#ifndef struct_tag_rLl17eNq1E4OGWkVCLWKZH
#define struct_tag_rLl17eNq1E4OGWkVCLWKZH

struct tag_rLl17eNq1E4OGWkVCLWKZH
{
  boolean_T matlabCodegenIsDeleted;
  int32_T isInitialized;
  c_arduinodriver_ArduinoI2C_un_T I2CDriverObj;
  uint32_T BusSpeed;
  real_T DefaultMaximumBusSpeedInHz;
};

#endif                                 /* struct_tag_rLl17eNq1E4OGWkVCLWKZH */

#ifndef typedef_g_codertarget_arduinobase_int_T
#define typedef_g_codertarget_arduinobase_int_T

typedef struct tag_rLl17eNq1E4OGWkVCLWKZH g_codertarget_arduinobase_int_T;

#endif                             /* typedef_g_codertarget_arduinobase_int_T */

#ifndef struct_tag_deoMZfmUSpLsQpycXV4boB
#define struct_tag_deoMZfmUSpLsQpycXV4boB

struct tag_deoMZfmUSpLsQpycXV4boB
{
  boolean_T matlabCodegenIsDeleted;
  int32_T isInitialized;
  boolean_T isSetupComplete;
  boolean_T IsFirstStep;
  f_codertarget_arduinobase_int_T i2cobj_A_G;
  g_codertarget_arduinobase_int_T i2cobj_MAG;
};

#endif                                 /* struct_tag_deoMZfmUSpLsQpycXV4boB */

#ifndef typedef_codertarget_arduinobase_inter_T
#define typedef_codertarget_arduinobase_inter_T

typedef struct tag_deoMZfmUSpLsQpycXV4boB codertarget_arduinobase_inter_T;

#endif                             /* typedef_codertarget_arduinobase_inter_T */

/* Forward declaration for rtModel */
typedef struct tag_RTM_untitled2_T RT_MODEL_untitled2_T;

#endif                                 /* untitled2_types_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
