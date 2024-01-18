#ifndef __DATABASE_H
#define __DATABASE_H
#include "TSMaster.h"

// CAN Databases
// CAN Message SteerServoRear_Status_1
extern const TCANSignal Servo_Status_SteerServoRear_Status_1;
extern const TCANSignal Servo_curPos_SteerServoRear_Status_1;
extern const TCANSignal Servo_current_SteerServoRear_Status_1;
extern const TCANSignal Servo_errOpenPhFlt_SteerServoRear_Status_1;
extern const TCANSignal Servo_errNoIgnition_SteerServoRear_Status_1;
extern const TCANSignal Servo_errPeriodA_OOR_SteerServoRear_Status_1;
extern const TCANSignal Servo_errPeriodB_OOR_SteerServoRear_Status_1;
extern const TCANSignal Servo_servoTemp_SteerServoRear_Status_1;
extern const TCANSignal Servo_errModuleFailure_SteerServoRear_Status_1;
extern const TCANSignal Servo_errShortCircuitAtTheOutput_SteerServoRear_Status_1;
extern const TCANSignal Servo_errSensorFailure_SteerServoRear_Status_1;
extern const TCANSignal Servo_errOverheatPowerRadiator_SteerServoRear_Status_1;
extern const TCANSignal Servo_errUdcOvervoltage_SteerServoRear_Status_1;
extern const TCANSignal Servo_errUdcUndervoltage_SteerServoRear_Status_1;
extern const TCANSignal Servo_errLongTermCurrentOverload_SteerServoRear_Status_1;
extern const TCANSignal Servo_errIncorrectPolarityDC_SteerServoRear_Status_1;
struct _SteerServoRear_Status_1;
typedef struct _SteerServoRear_Status_1 TSteerServoRear_Status_1;
struct _SteerServoRear_Status_1{
  TCAN FCAN;
  PROPERTY(double, Servo_Status);
  GET(Servo_Status) { return com.get_can_signal_value((TCANSignal* const)&Servo_Status_SteerServoRear_Status_1, FCAN.FData);}
  SET(Servo_Status) { com.set_can_signal_value((TCANSignal* const)&Servo_Status_SteerServoRear_Status_1, FCAN.FData, value);}
  PROPERTY(double, Servo_curPos);
  GET(Servo_curPos) { return com.get_can_signal_value((TCANSignal* const)&Servo_curPos_SteerServoRear_Status_1, FCAN.FData);}
  SET(Servo_curPos) { com.set_can_signal_value((TCANSignal* const)&Servo_curPos_SteerServoRear_Status_1, FCAN.FData, value);}
  PROPERTY(double, Servo_current);
  GET(Servo_current) { return com.get_can_signal_value((TCANSignal* const)&Servo_current_SteerServoRear_Status_1, FCAN.FData);}
  SET(Servo_current) { com.set_can_signal_value((TCANSignal* const)&Servo_current_SteerServoRear_Status_1, FCAN.FData, value);}
  PROPERTY(double, Servo_errOpenPhFlt);
  GET(Servo_errOpenPhFlt) { return com.get_can_signal_value((TCANSignal* const)&Servo_errOpenPhFlt_SteerServoRear_Status_1, FCAN.FData);}
  SET(Servo_errOpenPhFlt) { com.set_can_signal_value((TCANSignal* const)&Servo_errOpenPhFlt_SteerServoRear_Status_1, FCAN.FData, value);}
  PROPERTY(double, Servo_errNoIgnition);
  GET(Servo_errNoIgnition) { return com.get_can_signal_value((TCANSignal* const)&Servo_errNoIgnition_SteerServoRear_Status_1, FCAN.FData);}
  SET(Servo_errNoIgnition) { com.set_can_signal_value((TCANSignal* const)&Servo_errNoIgnition_SteerServoRear_Status_1, FCAN.FData, value);}
  PROPERTY(double, Servo_errPeriodA_OOR);
  GET(Servo_errPeriodA_OOR) { return com.get_can_signal_value((TCANSignal* const)&Servo_errPeriodA_OOR_SteerServoRear_Status_1, FCAN.FData);}
  SET(Servo_errPeriodA_OOR) { com.set_can_signal_value((TCANSignal* const)&Servo_errPeriodA_OOR_SteerServoRear_Status_1, FCAN.FData, value);}
  PROPERTY(double, Servo_errPeriodB_OOR);
  GET(Servo_errPeriodB_OOR) { return com.get_can_signal_value((TCANSignal* const)&Servo_errPeriodB_OOR_SteerServoRear_Status_1, FCAN.FData);}
  SET(Servo_errPeriodB_OOR) { com.set_can_signal_value((TCANSignal* const)&Servo_errPeriodB_OOR_SteerServoRear_Status_1, FCAN.FData, value);}
  PROPERTY(double, Servo_servoTemp);
  GET(Servo_servoTemp) { return com.get_can_signal_value((TCANSignal* const)&Servo_servoTemp_SteerServoRear_Status_1, FCAN.FData);}
  SET(Servo_servoTemp) { com.set_can_signal_value((TCANSignal* const)&Servo_servoTemp_SteerServoRear_Status_1, FCAN.FData, value);}
  PROPERTY(double, Servo_errModuleFailure);
  GET(Servo_errModuleFailure) { return com.get_can_signal_value((TCANSignal* const)&Servo_errModuleFailure_SteerServoRear_Status_1, FCAN.FData);}
  SET(Servo_errModuleFailure) { com.set_can_signal_value((TCANSignal* const)&Servo_errModuleFailure_SteerServoRear_Status_1, FCAN.FData, value);}
  PROPERTY(double, Servo_errShortCircuitAtTheOutput);
  GET(Servo_errShortCircuitAtTheOutput) { return com.get_can_signal_value((TCANSignal* const)&Servo_errShortCircuitAtTheOutput_SteerServoRear_Status_1, FCAN.FData);}
  SET(Servo_errShortCircuitAtTheOutput) { com.set_can_signal_value((TCANSignal* const)&Servo_errShortCircuitAtTheOutput_SteerServoRear_Status_1, FCAN.FData, value);}
  PROPERTY(double, Servo_errSensorFailure);
  GET(Servo_errSensorFailure) { return com.get_can_signal_value((TCANSignal* const)&Servo_errSensorFailure_SteerServoRear_Status_1, FCAN.FData);}
  SET(Servo_errSensorFailure) { com.set_can_signal_value((TCANSignal* const)&Servo_errSensorFailure_SteerServoRear_Status_1, FCAN.FData, value);}
  PROPERTY(double, Servo_errOverheatPowerRadiator);
  GET(Servo_errOverheatPowerRadiator) { return com.get_can_signal_value((TCANSignal* const)&Servo_errOverheatPowerRadiator_SteerServoRear_Status_1, FCAN.FData);}
  SET(Servo_errOverheatPowerRadiator) { com.set_can_signal_value((TCANSignal* const)&Servo_errOverheatPowerRadiator_SteerServoRear_Status_1, FCAN.FData, value);}
  PROPERTY(double, Servo_errUdcOvervoltage);
  GET(Servo_errUdcOvervoltage) { return com.get_can_signal_value((TCANSignal* const)&Servo_errUdcOvervoltage_SteerServoRear_Status_1, FCAN.FData);}
  SET(Servo_errUdcOvervoltage) { com.set_can_signal_value((TCANSignal* const)&Servo_errUdcOvervoltage_SteerServoRear_Status_1, FCAN.FData, value);}
  PROPERTY(double, Servo_errUdcUndervoltage);
  GET(Servo_errUdcUndervoltage) { return com.get_can_signal_value((TCANSignal* const)&Servo_errUdcUndervoltage_SteerServoRear_Status_1, FCAN.FData);}
  SET(Servo_errUdcUndervoltage) { com.set_can_signal_value((TCANSignal* const)&Servo_errUdcUndervoltage_SteerServoRear_Status_1, FCAN.FData, value);}
  PROPERTY(double, Servo_errLongTermCurrentOverload);
  GET(Servo_errLongTermCurrentOverload) { return com.get_can_signal_value((TCANSignal* const)&Servo_errLongTermCurrentOverload_SteerServoRear_Status_1, FCAN.FData);}
  SET(Servo_errLongTermCurrentOverload) { com.set_can_signal_value((TCANSignal* const)&Servo_errLongTermCurrentOverload_SteerServoRear_Status_1, FCAN.FData, value);}
  PROPERTY(double, Servo_errIncorrectPolarityDC);
  GET(Servo_errIncorrectPolarityDC) { return com.get_can_signal_value((TCANSignal* const)&Servo_errIncorrectPolarityDC_SteerServoRear_Status_1, FCAN.FData);}
  SET(Servo_errIncorrectPolarityDC) { com.set_can_signal_value((TCANSignal* const)&Servo_errIncorrectPolarityDC_SteerServoRear_Status_1, FCAN.FData, value);}
  void init() { FCAN = create().FCAN; }
  TSteerServoRear_Status_1 create() { CANMsgDecl(_SteerServoRear_Status_1, cSteerServoRear_Status_1, 0, 0, 8, 400) return cSteerServoRear_Status_1; }
  void set_data(const PCAN ACAN) { FCAN = *ACAN; }
};

// CAN Message SteerServoFront_Status_1
extern const TCANSignal Servo_Status_SteerServoFront_Status_1;
extern const TCANSignal Servo_curPos_SteerServoFront_Status_1;
extern const TCANSignal Servo_current_SteerServoFront_Status_1;
extern const TCANSignal Servo_errOpenPhFlt_SteerServoFront_Status_1;
extern const TCANSignal Servo_errNoIgnition_SteerServoFront_Status_1;
extern const TCANSignal Servo_errPeriodA_OOR_SteerServoFront_Status_1;
extern const TCANSignal Servo_errPeriodB_OOR_SteerServoFront_Status_1;
extern const TCANSignal Servo_servoTemp_SteerServoFront_Status_1;
extern const TCANSignal Servo_errModuleFailure_SteerServoFront_Status_1;
extern const TCANSignal Servo_errShortCircuitAtTheOutput_SteerServoFront_Status_1;
extern const TCANSignal Servo_errSensorFailure_SteerServoFront_Status_1;
extern const TCANSignal Servo_errOverheatPowerRadiator_SteerServoFront_Status_1;
extern const TCANSignal Servo_errUdcOvervoltage_SteerServoFront_Status_1;
extern const TCANSignal Servo_errUdcUndervoltage_SteerServoFront_Status_1;
extern const TCANSignal Servo_errLongTermCurrentOverload_SteerServoFront_Status_1;
extern const TCANSignal Servo_errIncorrectPolarityDC_SteerServoFront_Status_1;
struct _SteerServoFront_Status_1;
typedef struct _SteerServoFront_Status_1 TSteerServoFront_Status_1;
struct _SteerServoFront_Status_1{
  TCAN FCAN;
  PROPERTY(double, Servo_Status);
  GET(Servo_Status) { return com.get_can_signal_value((TCANSignal* const)&Servo_Status_SteerServoFront_Status_1, FCAN.FData);}
  SET(Servo_Status) { com.set_can_signal_value((TCANSignal* const)&Servo_Status_SteerServoFront_Status_1, FCAN.FData, value);}
  PROPERTY(double, Servo_curPos);
  GET(Servo_curPos) { return com.get_can_signal_value((TCANSignal* const)&Servo_curPos_SteerServoFront_Status_1, FCAN.FData);}
  SET(Servo_curPos) { com.set_can_signal_value((TCANSignal* const)&Servo_curPos_SteerServoFront_Status_1, FCAN.FData, value);}
  PROPERTY(double, Servo_current);
  GET(Servo_current) { return com.get_can_signal_value((TCANSignal* const)&Servo_current_SteerServoFront_Status_1, FCAN.FData);}
  SET(Servo_current) { com.set_can_signal_value((TCANSignal* const)&Servo_current_SteerServoFront_Status_1, FCAN.FData, value);}
  PROPERTY(double, Servo_errOpenPhFlt);
  GET(Servo_errOpenPhFlt) { return com.get_can_signal_value((TCANSignal* const)&Servo_errOpenPhFlt_SteerServoFront_Status_1, FCAN.FData);}
  SET(Servo_errOpenPhFlt) { com.set_can_signal_value((TCANSignal* const)&Servo_errOpenPhFlt_SteerServoFront_Status_1, FCAN.FData, value);}
  PROPERTY(double, Servo_errNoIgnition);
  GET(Servo_errNoIgnition) { return com.get_can_signal_value((TCANSignal* const)&Servo_errNoIgnition_SteerServoFront_Status_1, FCAN.FData);}
  SET(Servo_errNoIgnition) { com.set_can_signal_value((TCANSignal* const)&Servo_errNoIgnition_SteerServoFront_Status_1, FCAN.FData, value);}
  PROPERTY(double, Servo_errPeriodA_OOR);
  GET(Servo_errPeriodA_OOR) { return com.get_can_signal_value((TCANSignal* const)&Servo_errPeriodA_OOR_SteerServoFront_Status_1, FCAN.FData);}
  SET(Servo_errPeriodA_OOR) { com.set_can_signal_value((TCANSignal* const)&Servo_errPeriodA_OOR_SteerServoFront_Status_1, FCAN.FData, value);}
  PROPERTY(double, Servo_errPeriodB_OOR);
  GET(Servo_errPeriodB_OOR) { return com.get_can_signal_value((TCANSignal* const)&Servo_errPeriodB_OOR_SteerServoFront_Status_1, FCAN.FData);}
  SET(Servo_errPeriodB_OOR) { com.set_can_signal_value((TCANSignal* const)&Servo_errPeriodB_OOR_SteerServoFront_Status_1, FCAN.FData, value);}
  PROPERTY(double, Servo_servoTemp);
  GET(Servo_servoTemp) { return com.get_can_signal_value((TCANSignal* const)&Servo_servoTemp_SteerServoFront_Status_1, FCAN.FData);}
  SET(Servo_servoTemp) { com.set_can_signal_value((TCANSignal* const)&Servo_servoTemp_SteerServoFront_Status_1, FCAN.FData, value);}
  PROPERTY(double, Servo_errModuleFailure);
  GET(Servo_errModuleFailure) { return com.get_can_signal_value((TCANSignal* const)&Servo_errModuleFailure_SteerServoFront_Status_1, FCAN.FData);}
  SET(Servo_errModuleFailure) { com.set_can_signal_value((TCANSignal* const)&Servo_errModuleFailure_SteerServoFront_Status_1, FCAN.FData, value);}
  PROPERTY(double, Servo_errShortCircuitAtTheOutput);
  GET(Servo_errShortCircuitAtTheOutput) { return com.get_can_signal_value((TCANSignal* const)&Servo_errShortCircuitAtTheOutput_SteerServoFront_Status_1, FCAN.FData);}
  SET(Servo_errShortCircuitAtTheOutput) { com.set_can_signal_value((TCANSignal* const)&Servo_errShortCircuitAtTheOutput_SteerServoFront_Status_1, FCAN.FData, value);}
  PROPERTY(double, Servo_errSensorFailure);
  GET(Servo_errSensorFailure) { return com.get_can_signal_value((TCANSignal* const)&Servo_errSensorFailure_SteerServoFront_Status_1, FCAN.FData);}
  SET(Servo_errSensorFailure) { com.set_can_signal_value((TCANSignal* const)&Servo_errSensorFailure_SteerServoFront_Status_1, FCAN.FData, value);}
  PROPERTY(double, Servo_errOverheatPowerRadiator);
  GET(Servo_errOverheatPowerRadiator) { return com.get_can_signal_value((TCANSignal* const)&Servo_errOverheatPowerRadiator_SteerServoFront_Status_1, FCAN.FData);}
  SET(Servo_errOverheatPowerRadiator) { com.set_can_signal_value((TCANSignal* const)&Servo_errOverheatPowerRadiator_SteerServoFront_Status_1, FCAN.FData, value);}
  PROPERTY(double, Servo_errUdcOvervoltage);
  GET(Servo_errUdcOvervoltage) { return com.get_can_signal_value((TCANSignal* const)&Servo_errUdcOvervoltage_SteerServoFront_Status_1, FCAN.FData);}
  SET(Servo_errUdcOvervoltage) { com.set_can_signal_value((TCANSignal* const)&Servo_errUdcOvervoltage_SteerServoFront_Status_1, FCAN.FData, value);}
  PROPERTY(double, Servo_errUdcUndervoltage);
  GET(Servo_errUdcUndervoltage) { return com.get_can_signal_value((TCANSignal* const)&Servo_errUdcUndervoltage_SteerServoFront_Status_1, FCAN.FData);}
  SET(Servo_errUdcUndervoltage) { com.set_can_signal_value((TCANSignal* const)&Servo_errUdcUndervoltage_SteerServoFront_Status_1, FCAN.FData, value);}
  PROPERTY(double, Servo_errLongTermCurrentOverload);
  GET(Servo_errLongTermCurrentOverload) { return com.get_can_signal_value((TCANSignal* const)&Servo_errLongTermCurrentOverload_SteerServoFront_Status_1, FCAN.FData);}
  SET(Servo_errLongTermCurrentOverload) { com.set_can_signal_value((TCANSignal* const)&Servo_errLongTermCurrentOverload_SteerServoFront_Status_1, FCAN.FData, value);}
  PROPERTY(double, Servo_errIncorrectPolarityDC);
  GET(Servo_errIncorrectPolarityDC) { return com.get_can_signal_value((TCANSignal* const)&Servo_errIncorrectPolarityDC_SteerServoFront_Status_1, FCAN.FData);}
  SET(Servo_errIncorrectPolarityDC) { com.set_can_signal_value((TCANSignal* const)&Servo_errIncorrectPolarityDC_SteerServoFront_Status_1, FCAN.FData, value);}
  void init() { FCAN = create().FCAN; }
  TSteerServoFront_Status_1 create() { CANMsgDecl(_SteerServoFront_Status_1, cSteerServoFront_Status_1, 0, 0, 8, 399) return cSteerServoFront_Status_1; }
  void set_data(const PCAN ACAN) { FCAN = *ACAN; }
};

// CAN Message SteerServo_cmd_1
extern const TCANSignal ServoFront_Enable_cmd_SteerServo_cmd_1;
extern const TCANSignal ServoRear_Enable_cmd_SteerServo_cmd_1;
extern const TCANSignal ServoFront_RefPos_cmd_SteerServo_cmd_1;
extern const TCANSignal ServoReart_RefPos_cmd_SteerServo_cmd_1;
struct _SteerServo_cmd_1;
typedef struct _SteerServo_cmd_1 TSteerServo_cmd_1;
struct _SteerServo_cmd_1{
  TCAN FCAN;
  PROPERTY(double, ServoFront_Enable_cmd);
  GET(ServoFront_Enable_cmd) { return com.get_can_signal_value((TCANSignal* const)&ServoFront_Enable_cmd_SteerServo_cmd_1, FCAN.FData);}
  SET(ServoFront_Enable_cmd) { com.set_can_signal_value((TCANSignal* const)&ServoFront_Enable_cmd_SteerServo_cmd_1, FCAN.FData, value);}
  PROPERTY(double, ServoRear_Enable_cmd);
  GET(ServoRear_Enable_cmd) { return com.get_can_signal_value((TCANSignal* const)&ServoRear_Enable_cmd_SteerServo_cmd_1, FCAN.FData);}
  SET(ServoRear_Enable_cmd) { com.set_can_signal_value((TCANSignal* const)&ServoRear_Enable_cmd_SteerServo_cmd_1, FCAN.FData, value);}
  PROPERTY(double, ServoFront_RefPos_cmd);
  GET(ServoFront_RefPos_cmd) { return com.get_can_signal_value((TCANSignal* const)&ServoFront_RefPos_cmd_SteerServo_cmd_1, FCAN.FData);}
  SET(ServoFront_RefPos_cmd) { com.set_can_signal_value((TCANSignal* const)&ServoFront_RefPos_cmd_SteerServo_cmd_1, FCAN.FData, value);}
  PROPERTY(double, ServoReart_RefPos_cmd);
  GET(ServoReart_RefPos_cmd) { return com.get_can_signal_value((TCANSignal* const)&ServoReart_RefPos_cmd_SteerServo_cmd_1, FCAN.FData);}
  SET(ServoReart_RefPos_cmd) { com.set_can_signal_value((TCANSignal* const)&ServoReart_RefPos_cmd_SteerServo_cmd_1, FCAN.FData, value);}
  void init() { FCAN = create().FCAN; }
  TSteerServo_cmd_1 create() { CANMsgDecl(_SteerServo_cmd_1, cSteerServo_cmd_1, 0, 0, 8, 788) return cSteerServo_cmd_1; }
  void set_data(const PCAN ACAN) { FCAN = *ACAN; }
};

// CAN Message VMU_Heartbeat_1
extern const TCANSignal State_VMU_Heartbeat_1;
extern const TCANSignal Toggle_VMU_Heartbeat_1;
struct _VMU_Heartbeat_1;
typedef struct _VMU_Heartbeat_1 TVMU_Heartbeat_1;
struct _VMU_Heartbeat_1{
  TCAN FCAN;
  PROPERTY(double, State);
  GET(State) { return com.get_can_signal_value((TCANSignal* const)&State_VMU_Heartbeat_1, FCAN.FData);}
  SET(State) { com.set_can_signal_value((TCANSignal* const)&State_VMU_Heartbeat_1, FCAN.FData, value);}
  PROPERTY(double, Toggle);
  GET(Toggle) { return com.get_can_signal_value((TCANSignal* const)&Toggle_VMU_Heartbeat_1, FCAN.FData);}
  SET(Toggle) { com.set_can_signal_value((TCANSignal* const)&Toggle_VMU_Heartbeat_1, FCAN.FData, value);}
  void init() { FCAN = create().FCAN; }
  TVMU_Heartbeat_1 create() { CANMsgDecl(_VMU_Heartbeat_1, cVMU_Heartbeat_1, 0, 0, 1, 1812) return cVMU_Heartbeat_1; }
  void set_data(const PCAN ACAN) { FCAN = *ACAN; }
};

// CAN Message BMS_380_2
extern const TCANSignal bms_err_lowChTempr_BMS_380_2;
extern const TCANSignal bms_err_highChTempr_BMS_380_2;
extern const TCANSignal bms_err_sdMountError_BMS_380_2;
extern const TCANSignal bms_err_sdRWError_BMS_380_2;
extern const TCANSignal bms_err_unallowableCharging_BMS_380_2;
extern const TCANSignal bms_err_stuckContactor_BMS_380_2;
extern const TCANSignal bms_err_CHContactorFeedbackErr_BMS_380_2;
extern const TCANSignal bms_err_DCHContactorFeedbackErr_BMS_380_2;
struct _BMS_380_2;
typedef struct _BMS_380_2 TBMS_380_2;
struct _BMS_380_2{
  TCAN FCAN;
  PROPERTY(double, bms_err_lowChTempr);
  GET(bms_err_lowChTempr) { return com.get_can_signal_value((TCANSignal* const)&bms_err_lowChTempr_BMS_380_2, FCAN.FData);}
  SET(bms_err_lowChTempr) { com.set_can_signal_value((TCANSignal* const)&bms_err_lowChTempr_BMS_380_2, FCAN.FData, value);}
  PROPERTY(double, bms_err_highChTempr);
  GET(bms_err_highChTempr) { return com.get_can_signal_value((TCANSignal* const)&bms_err_highChTempr_BMS_380_2, FCAN.FData);}
  SET(bms_err_highChTempr) { com.set_can_signal_value((TCANSignal* const)&bms_err_highChTempr_BMS_380_2, FCAN.FData, value);}
  PROPERTY(double, bms_err_sdMountError);
  GET(bms_err_sdMountError) { return com.get_can_signal_value((TCANSignal* const)&bms_err_sdMountError_BMS_380_2, FCAN.FData);}
  SET(bms_err_sdMountError) { com.set_can_signal_value((TCANSignal* const)&bms_err_sdMountError_BMS_380_2, FCAN.FData, value);}
  PROPERTY(double, bms_err_sdRWError);
  GET(bms_err_sdRWError) { return com.get_can_signal_value((TCANSignal* const)&bms_err_sdRWError_BMS_380_2, FCAN.FData);}
  SET(bms_err_sdRWError) { com.set_can_signal_value((TCANSignal* const)&bms_err_sdRWError_BMS_380_2, FCAN.FData, value);}
  PROPERTY(double, bms_err_unallowableCharging);
  GET(bms_err_unallowableCharging) { return com.get_can_signal_value((TCANSignal* const)&bms_err_unallowableCharging_BMS_380_2, FCAN.FData);}
  SET(bms_err_unallowableCharging) { com.set_can_signal_value((TCANSignal* const)&bms_err_unallowableCharging_BMS_380_2, FCAN.FData, value);}
  PROPERTY(double, bms_err_stuckContactor);
  GET(bms_err_stuckContactor) { return com.get_can_signal_value((TCANSignal* const)&bms_err_stuckContactor_BMS_380_2, FCAN.FData);}
  SET(bms_err_stuckContactor) { com.set_can_signal_value((TCANSignal* const)&bms_err_stuckContactor_BMS_380_2, FCAN.FData, value);}
  PROPERTY(double, bms_err_CHContactorFeedbackErr);
  GET(bms_err_CHContactorFeedbackErr) { return com.get_can_signal_value((TCANSignal* const)&bms_err_CHContactorFeedbackErr_BMS_380_2, FCAN.FData);}
  SET(bms_err_CHContactorFeedbackErr) { com.set_can_signal_value((TCANSignal* const)&bms_err_CHContactorFeedbackErr_BMS_380_2, FCAN.FData, value);}
  PROPERTY(double, bms_err_DCHContactorFeedbackErr);
  GET(bms_err_DCHContactorFeedbackErr) { return com.get_can_signal_value((TCANSignal* const)&bms_err_DCHContactorFeedbackErr_BMS_380_2, FCAN.FData);}
  SET(bms_err_DCHContactorFeedbackErr) { com.set_can_signal_value((TCANSignal* const)&bms_err_DCHContactorFeedbackErr_BMS_380_2, FCAN.FData, value);}
  void init() { FCAN = create().FCAN; }
  TBMS_380_2 create() { CANMsgDecl(_BMS_380_2, cBMS_380_2, 1, 0, 8, 928) return cBMS_380_2; }
  void set_data(const PCAN ACAN) { FCAN = *ACAN; }
};

// CAN Message BMS_280_2
extern const TCANSignal bms_flag_lowSOC_BMS_280_2;
extern const TCANSignal bms_flag_highChargingCurrent_BMS_280_2;
extern const TCANSignal bms_flag_chargingContactor_BMS_280_2;
extern const TCANSignal bms_flag_allowCharging_BMS_280_2;
extern const TCANSignal bms_flag_chargicgCurPresent_BMS_280_2;
extern const TCANSignal bms_flag_dischargingContactor_BMS_280_2;
extern const TCANSignal bms_flag_dischargingCurPresent_BMS_280_2;
extern const TCANSignal bms_flag_increasedVoltage_BMS_280_2;
extern const TCANSignal bms_flag_highDCHTempr_BMS_280_2;
extern const TCANSignal bms_flag_cooler_BMS_280_2;
extern const TCANSignal bms_flag_HYGShutdown_BMS_280_2;
extern const TCANSignal bms_flag_init_BMS_280_2;
extern const TCANSignal bms_flag_prechargeContactor_BMS_280_2;
extern const TCANSignal bms_flag_combiliftShutdown_BMS_280_2;
extern const TCANSignal bms_flag_cellAnalysis_BMS_280_2;
extern const TCANSignal bms_flag_balancing1_BMS_280_2;
extern const TCANSignal bms_flag_balancing2_BMS_280_2;
extern const TCANSignal bms_flag_auxDischargingContactor_BMS_280_2;
extern const TCANSignal bms_flag_AckPowerdown_BMS_280_2;
extern const TCANSignal bms_flag_crownEWS_BMS_280_2;
extern const TCANSignal bms_flag_mainContactor_BMS_280_2;
extern const TCANSignal bms_flag_serviceReset_BMS_280_2;
extern const TCANSignal bms_flag_stateChDchcontactor_BMS_280_2;
extern const TCANSignal bms_flag_readyToCharge_BMS_280_2;
extern const TCANSignal bms_flag_readyToDischarge_BMS_280_2;
extern const TCANSignal bms_err_overcurrent_BMS_280_2;
extern const TCANSignal bms_err_undervoltage_BMS_280_2;
extern const TCANSignal bms_err_overvoltage_BMS_280_2;
extern const TCANSignal bms_err_lowDchTempr_BMS_280_2;
extern const TCANSignal bms_err_highDchTempr_BMS_280_2;
extern const TCANSignal bms_err_batteryCover_BMS_280_2;
extern const TCANSignal bms_err_highHumidity_BMS_280_2;
extern const TCANSignal bms_err_water_BMS_280_2;
extern const TCANSignal bms_err_highLogicTempr_BMS_280_2;
extern const TCANSignal bms_err_logicOffline_BMS_280_2;
extern const TCANSignal bms_err_criticalError_BMS_280_2;
extern const TCANSignal bms_err_crownDown_BMS_280_2;
extern const TCANSignal bms_err_cellCountError_BMS_280_2;
extern const TCANSignal bms_err_HYGOffline_BMS_280_2;
extern const TCANSignal bms_err_needAck_BMS_280_2;
extern const TCANSignal bms_err_combiliftOffline_BMS_280_2;
extern const TCANSignal bms_err_shortCircuit_BMS_280_2;
extern const TCANSignal bms_err_highContactorTempr_BMS_280_2;
extern const TCANSignal bms_err_logicCountError_BMS_280_2;
extern const TCANSignal bms_err_ADCError_BMS_280_2;
extern const TCANSignal bms_err_currentSensorError_BMS_280_2;
extern const TCANSignal bms_err_ChContactorCyclesError_BMS_280_2;
extern const TCANSignal bms_err_DchContactorCyclesError_BMS_280_2;
extern const TCANSignal bms_err_shuntOffline_BMS_280_2;
extern const TCANSignal bms_err_shuntError_BMS_280_2;
extern const TCANSignal bms_err_settingsError_BMS_280_2;
extern const TCANSignal bms_err_WDTReset_BMS_280_2;
extern const TCANSignal bms_err_noTemprSensors_BMS_280_2;
extern const TCANSignal bms_err_temprSensorShorted_BMS_280_2;
extern const TCANSignal bms_err_spiritOffline_BMS_280_2;
struct _BMS_280_2;
typedef struct _BMS_280_2 TBMS_280_2;
struct _BMS_280_2{
  TCAN FCAN;
  PROPERTY(double, bms_flag_lowSOC);
  GET(bms_flag_lowSOC) { return com.get_can_signal_value((TCANSignal* const)&bms_flag_lowSOC_BMS_280_2, FCAN.FData);}
  SET(bms_flag_lowSOC) { com.set_can_signal_value((TCANSignal* const)&bms_flag_lowSOC_BMS_280_2, FCAN.FData, value);}
  PROPERTY(double, bms_flag_highChargingCurrent);
  GET(bms_flag_highChargingCurrent) { return com.get_can_signal_value((TCANSignal* const)&bms_flag_highChargingCurrent_BMS_280_2, FCAN.FData);}
  SET(bms_flag_highChargingCurrent) { com.set_can_signal_value((TCANSignal* const)&bms_flag_highChargingCurrent_BMS_280_2, FCAN.FData, value);}
  PROPERTY(double, bms_flag_chargingContactor);
  GET(bms_flag_chargingContactor) { return com.get_can_signal_value((TCANSignal* const)&bms_flag_chargingContactor_BMS_280_2, FCAN.FData);}
  SET(bms_flag_chargingContactor) { com.set_can_signal_value((TCANSignal* const)&bms_flag_chargingContactor_BMS_280_2, FCAN.FData, value);}
  PROPERTY(double, bms_flag_allowCharging);
  GET(bms_flag_allowCharging) { return com.get_can_signal_value((TCANSignal* const)&bms_flag_allowCharging_BMS_280_2, FCAN.FData);}
  SET(bms_flag_allowCharging) { com.set_can_signal_value((TCANSignal* const)&bms_flag_allowCharging_BMS_280_2, FCAN.FData, value);}
  PROPERTY(double, bms_flag_chargicgCurPresent);
  GET(bms_flag_chargicgCurPresent) { return com.get_can_signal_value((TCANSignal* const)&bms_flag_chargicgCurPresent_BMS_280_2, FCAN.FData);}
  SET(bms_flag_chargicgCurPresent) { com.set_can_signal_value((TCANSignal* const)&bms_flag_chargicgCurPresent_BMS_280_2, FCAN.FData, value);}
  PROPERTY(double, bms_flag_dischargingContactor);
  GET(bms_flag_dischargingContactor) { return com.get_can_signal_value((TCANSignal* const)&bms_flag_dischargingContactor_BMS_280_2, FCAN.FData);}
  SET(bms_flag_dischargingContactor) { com.set_can_signal_value((TCANSignal* const)&bms_flag_dischargingContactor_BMS_280_2, FCAN.FData, value);}
  PROPERTY(double, bms_flag_dischargingCurPresent);
  GET(bms_flag_dischargingCurPresent) { return com.get_can_signal_value((TCANSignal* const)&bms_flag_dischargingCurPresent_BMS_280_2, FCAN.FData);}
  SET(bms_flag_dischargingCurPresent) { com.set_can_signal_value((TCANSignal* const)&bms_flag_dischargingCurPresent_BMS_280_2, FCAN.FData, value);}
  PROPERTY(double, bms_flag_increasedVoltage);
  GET(bms_flag_increasedVoltage) { return com.get_can_signal_value((TCANSignal* const)&bms_flag_increasedVoltage_BMS_280_2, FCAN.FData);}
  SET(bms_flag_increasedVoltage) { com.set_can_signal_value((TCANSignal* const)&bms_flag_increasedVoltage_BMS_280_2, FCAN.FData, value);}
  PROPERTY(double, bms_flag_highDCHTempr);
  GET(bms_flag_highDCHTempr) { return com.get_can_signal_value((TCANSignal* const)&bms_flag_highDCHTempr_BMS_280_2, FCAN.FData);}
  SET(bms_flag_highDCHTempr) { com.set_can_signal_value((TCANSignal* const)&bms_flag_highDCHTempr_BMS_280_2, FCAN.FData, value);}
  PROPERTY(double, bms_flag_cooler);
  GET(bms_flag_cooler) { return com.get_can_signal_value((TCANSignal* const)&bms_flag_cooler_BMS_280_2, FCAN.FData);}
  SET(bms_flag_cooler) { com.set_can_signal_value((TCANSignal* const)&bms_flag_cooler_BMS_280_2, FCAN.FData, value);}
  PROPERTY(double, bms_flag_HYGShutdown);
  GET(bms_flag_HYGShutdown) { return com.get_can_signal_value((TCANSignal* const)&bms_flag_HYGShutdown_BMS_280_2, FCAN.FData);}
  SET(bms_flag_HYGShutdown) { com.set_can_signal_value((TCANSignal* const)&bms_flag_HYGShutdown_BMS_280_2, FCAN.FData, value);}
  PROPERTY(double, bms_flag_init);
  GET(bms_flag_init) { return com.get_can_signal_value((TCANSignal* const)&bms_flag_init_BMS_280_2, FCAN.FData);}
  SET(bms_flag_init) { com.set_can_signal_value((TCANSignal* const)&bms_flag_init_BMS_280_2, FCAN.FData, value);}
  PROPERTY(double, bms_flag_prechargeContactor);
  GET(bms_flag_prechargeContactor) { return com.get_can_signal_value((TCANSignal* const)&bms_flag_prechargeContactor_BMS_280_2, FCAN.FData);}
  SET(bms_flag_prechargeContactor) { com.set_can_signal_value((TCANSignal* const)&bms_flag_prechargeContactor_BMS_280_2, FCAN.FData, value);}
  PROPERTY(double, bms_flag_combiliftShutdown);
  GET(bms_flag_combiliftShutdown) { return com.get_can_signal_value((TCANSignal* const)&bms_flag_combiliftShutdown_BMS_280_2, FCAN.FData);}
  SET(bms_flag_combiliftShutdown) { com.set_can_signal_value((TCANSignal* const)&bms_flag_combiliftShutdown_BMS_280_2, FCAN.FData, value);}
  PROPERTY(double, bms_flag_cellAnalysis);
  GET(bms_flag_cellAnalysis) { return com.get_can_signal_value((TCANSignal* const)&bms_flag_cellAnalysis_BMS_280_2, FCAN.FData);}
  SET(bms_flag_cellAnalysis) { com.set_can_signal_value((TCANSignal* const)&bms_flag_cellAnalysis_BMS_280_2, FCAN.FData, value);}
  PROPERTY(double, bms_flag_balancing1);
  GET(bms_flag_balancing1) { return com.get_can_signal_value((TCANSignal* const)&bms_flag_balancing1_BMS_280_2, FCAN.FData);}
  SET(bms_flag_balancing1) { com.set_can_signal_value((TCANSignal* const)&bms_flag_balancing1_BMS_280_2, FCAN.FData, value);}
  PROPERTY(double, bms_flag_balancing2);
  GET(bms_flag_balancing2) { return com.get_can_signal_value((TCANSignal* const)&bms_flag_balancing2_BMS_280_2, FCAN.FData);}
  SET(bms_flag_balancing2) { com.set_can_signal_value((TCANSignal* const)&bms_flag_balancing2_BMS_280_2, FCAN.FData, value);}
  PROPERTY(double, bms_flag_auxDischargingContactor);
  GET(bms_flag_auxDischargingContactor) { return com.get_can_signal_value((TCANSignal* const)&bms_flag_auxDischargingContactor_BMS_280_2, FCAN.FData);}
  SET(bms_flag_auxDischargingContactor) { com.set_can_signal_value((TCANSignal* const)&bms_flag_auxDischargingContactor_BMS_280_2, FCAN.FData, value);}
  PROPERTY(double, bms_flag_AckPowerdown);
  GET(bms_flag_AckPowerdown) { return com.get_can_signal_value((TCANSignal* const)&bms_flag_AckPowerdown_BMS_280_2, FCAN.FData);}
  SET(bms_flag_AckPowerdown) { com.set_can_signal_value((TCANSignal* const)&bms_flag_AckPowerdown_BMS_280_2, FCAN.FData, value);}
  PROPERTY(double, bms_flag_crownEWS);
  GET(bms_flag_crownEWS) { return com.get_can_signal_value((TCANSignal* const)&bms_flag_crownEWS_BMS_280_2, FCAN.FData);}
  SET(bms_flag_crownEWS) { com.set_can_signal_value((TCANSignal* const)&bms_flag_crownEWS_BMS_280_2, FCAN.FData, value);}
  PROPERTY(double, bms_flag_mainContactor);
  GET(bms_flag_mainContactor) { return com.get_can_signal_value((TCANSignal* const)&bms_flag_mainContactor_BMS_280_2, FCAN.FData);}
  SET(bms_flag_mainContactor) { com.set_can_signal_value((TCANSignal* const)&bms_flag_mainContactor_BMS_280_2, FCAN.FData, value);}
  PROPERTY(double, bms_flag_serviceReset);
  GET(bms_flag_serviceReset) { return com.get_can_signal_value((TCANSignal* const)&bms_flag_serviceReset_BMS_280_2, FCAN.FData);}
  SET(bms_flag_serviceReset) { com.set_can_signal_value((TCANSignal* const)&bms_flag_serviceReset_BMS_280_2, FCAN.FData, value);}
  PROPERTY(double, bms_flag_stateChDchcontactor);
  GET(bms_flag_stateChDchcontactor) { return com.get_can_signal_value((TCANSignal* const)&bms_flag_stateChDchcontactor_BMS_280_2, FCAN.FData);}
  SET(bms_flag_stateChDchcontactor) { com.set_can_signal_value((TCANSignal* const)&bms_flag_stateChDchcontactor_BMS_280_2, FCAN.FData, value);}
  PROPERTY(double, bms_flag_readyToCharge);
  GET(bms_flag_readyToCharge) { return com.get_can_signal_value((TCANSignal* const)&bms_flag_readyToCharge_BMS_280_2, FCAN.FData);}
  SET(bms_flag_readyToCharge) { com.set_can_signal_value((TCANSignal* const)&bms_flag_readyToCharge_BMS_280_2, FCAN.FData, value);}
  PROPERTY(double, bms_flag_readyToDischarge);
  GET(bms_flag_readyToDischarge) { return com.get_can_signal_value((TCANSignal* const)&bms_flag_readyToDischarge_BMS_280_2, FCAN.FData);}
  SET(bms_flag_readyToDischarge) { com.set_can_signal_value((TCANSignal* const)&bms_flag_readyToDischarge_BMS_280_2, FCAN.FData, value);}
  PROPERTY(double, bms_err_overcurrent);
  GET(bms_err_overcurrent) { return com.get_can_signal_value((TCANSignal* const)&bms_err_overcurrent_BMS_280_2, FCAN.FData);}
  SET(bms_err_overcurrent) { com.set_can_signal_value((TCANSignal* const)&bms_err_overcurrent_BMS_280_2, FCAN.FData, value);}
  PROPERTY(double, bms_err_undervoltage);
  GET(bms_err_undervoltage) { return com.get_can_signal_value((TCANSignal* const)&bms_err_undervoltage_BMS_280_2, FCAN.FData);}
  SET(bms_err_undervoltage) { com.set_can_signal_value((TCANSignal* const)&bms_err_undervoltage_BMS_280_2, FCAN.FData, value);}
  PROPERTY(double, bms_err_overvoltage);
  GET(bms_err_overvoltage) { return com.get_can_signal_value((TCANSignal* const)&bms_err_overvoltage_BMS_280_2, FCAN.FData);}
  SET(bms_err_overvoltage) { com.set_can_signal_value((TCANSignal* const)&bms_err_overvoltage_BMS_280_2, FCAN.FData, value);}
  PROPERTY(double, bms_err_lowDchTempr);
  GET(bms_err_lowDchTempr) { return com.get_can_signal_value((TCANSignal* const)&bms_err_lowDchTempr_BMS_280_2, FCAN.FData);}
  SET(bms_err_lowDchTempr) { com.set_can_signal_value((TCANSignal* const)&bms_err_lowDchTempr_BMS_280_2, FCAN.FData, value);}
  PROPERTY(double, bms_err_highDchTempr);
  GET(bms_err_highDchTempr) { return com.get_can_signal_value((TCANSignal* const)&bms_err_highDchTempr_BMS_280_2, FCAN.FData);}
  SET(bms_err_highDchTempr) { com.set_can_signal_value((TCANSignal* const)&bms_err_highDchTempr_BMS_280_2, FCAN.FData, value);}
  PROPERTY(double, bms_err_batteryCover);
  GET(bms_err_batteryCover) { return com.get_can_signal_value((TCANSignal* const)&bms_err_batteryCover_BMS_280_2, FCAN.FData);}
  SET(bms_err_batteryCover) { com.set_can_signal_value((TCANSignal* const)&bms_err_batteryCover_BMS_280_2, FCAN.FData, value);}
  PROPERTY(double, bms_err_highHumidity);
  GET(bms_err_highHumidity) { return com.get_can_signal_value((TCANSignal* const)&bms_err_highHumidity_BMS_280_2, FCAN.FData);}
  SET(bms_err_highHumidity) { com.set_can_signal_value((TCANSignal* const)&bms_err_highHumidity_BMS_280_2, FCAN.FData, value);}
  PROPERTY(double, bms_err_water);
  GET(bms_err_water) { return com.get_can_signal_value((TCANSignal* const)&bms_err_water_BMS_280_2, FCAN.FData);}
  SET(bms_err_water) { com.set_can_signal_value((TCANSignal* const)&bms_err_water_BMS_280_2, FCAN.FData, value);}
  PROPERTY(double, bms_err_highLogicTempr);
  GET(bms_err_highLogicTempr) { return com.get_can_signal_value((TCANSignal* const)&bms_err_highLogicTempr_BMS_280_2, FCAN.FData);}
  SET(bms_err_highLogicTempr) { com.set_can_signal_value((TCANSignal* const)&bms_err_highLogicTempr_BMS_280_2, FCAN.FData, value);}
  PROPERTY(double, bms_err_logicOffline);
  GET(bms_err_logicOffline) { return com.get_can_signal_value((TCANSignal* const)&bms_err_logicOffline_BMS_280_2, FCAN.FData);}
  SET(bms_err_logicOffline) { com.set_can_signal_value((TCANSignal* const)&bms_err_logicOffline_BMS_280_2, FCAN.FData, value);}
  PROPERTY(double, bms_err_criticalError);
  GET(bms_err_criticalError) { return com.get_can_signal_value((TCANSignal* const)&bms_err_criticalError_BMS_280_2, FCAN.FData);}
  SET(bms_err_criticalError) { com.set_can_signal_value((TCANSignal* const)&bms_err_criticalError_BMS_280_2, FCAN.FData, value);}
  PROPERTY(double, bms_err_crownDown);
  GET(bms_err_crownDown) { return com.get_can_signal_value((TCANSignal* const)&bms_err_crownDown_BMS_280_2, FCAN.FData);}
  SET(bms_err_crownDown) { com.set_can_signal_value((TCANSignal* const)&bms_err_crownDown_BMS_280_2, FCAN.FData, value);}
  PROPERTY(double, bms_err_cellCountError);
  GET(bms_err_cellCountError) { return com.get_can_signal_value((TCANSignal* const)&bms_err_cellCountError_BMS_280_2, FCAN.FData);}
  SET(bms_err_cellCountError) { com.set_can_signal_value((TCANSignal* const)&bms_err_cellCountError_BMS_280_2, FCAN.FData, value);}
  PROPERTY(double, bms_err_HYGOffline);
  GET(bms_err_HYGOffline) { return com.get_can_signal_value((TCANSignal* const)&bms_err_HYGOffline_BMS_280_2, FCAN.FData);}
  SET(bms_err_HYGOffline) { com.set_can_signal_value((TCANSignal* const)&bms_err_HYGOffline_BMS_280_2, FCAN.FData, value);}
  PROPERTY(double, bms_err_needAck);
  GET(bms_err_needAck) { return com.get_can_signal_value((TCANSignal* const)&bms_err_needAck_BMS_280_2, FCAN.FData);}
  SET(bms_err_needAck) { com.set_can_signal_value((TCANSignal* const)&bms_err_needAck_BMS_280_2, FCAN.FData, value);}
  PROPERTY(double, bms_err_combiliftOffline);
  GET(bms_err_combiliftOffline) { return com.get_can_signal_value((TCANSignal* const)&bms_err_combiliftOffline_BMS_280_2, FCAN.FData);}
  SET(bms_err_combiliftOffline) { com.set_can_signal_value((TCANSignal* const)&bms_err_combiliftOffline_BMS_280_2, FCAN.FData, value);}
  PROPERTY(double, bms_err_shortCircuit);
  GET(bms_err_shortCircuit) { return com.get_can_signal_value((TCANSignal* const)&bms_err_shortCircuit_BMS_280_2, FCAN.FData);}
  SET(bms_err_shortCircuit) { com.set_can_signal_value((TCANSignal* const)&bms_err_shortCircuit_BMS_280_2, FCAN.FData, value);}
  PROPERTY(double, bms_err_highContactorTempr);
  GET(bms_err_highContactorTempr) { return com.get_can_signal_value((TCANSignal* const)&bms_err_highContactorTempr_BMS_280_2, FCAN.FData);}
  SET(bms_err_highContactorTempr) { com.set_can_signal_value((TCANSignal* const)&bms_err_highContactorTempr_BMS_280_2, FCAN.FData, value);}
  PROPERTY(double, bms_err_logicCountError);
  GET(bms_err_logicCountError) { return com.get_can_signal_value((TCANSignal* const)&bms_err_logicCountError_BMS_280_2, FCAN.FData);}
  SET(bms_err_logicCountError) { com.set_can_signal_value((TCANSignal* const)&bms_err_logicCountError_BMS_280_2, FCAN.FData, value);}
  PROPERTY(double, bms_err_ADCError);
  GET(bms_err_ADCError) { return com.get_can_signal_value((TCANSignal* const)&bms_err_ADCError_BMS_280_2, FCAN.FData);}
  SET(bms_err_ADCError) { com.set_can_signal_value((TCANSignal* const)&bms_err_ADCError_BMS_280_2, FCAN.FData, value);}
  PROPERTY(double, bms_err_currentSensorError);
  GET(bms_err_currentSensorError) { return com.get_can_signal_value((TCANSignal* const)&bms_err_currentSensorError_BMS_280_2, FCAN.FData);}
  SET(bms_err_currentSensorError) { com.set_can_signal_value((TCANSignal* const)&bms_err_currentSensorError_BMS_280_2, FCAN.FData, value);}
  PROPERTY(double, bms_err_ChContactorCyclesError);
  GET(bms_err_ChContactorCyclesError) { return com.get_can_signal_value((TCANSignal* const)&bms_err_ChContactorCyclesError_BMS_280_2, FCAN.FData);}
  SET(bms_err_ChContactorCyclesError) { com.set_can_signal_value((TCANSignal* const)&bms_err_ChContactorCyclesError_BMS_280_2, FCAN.FData, value);}
  PROPERTY(double, bms_err_DchContactorCyclesError);
  GET(bms_err_DchContactorCyclesError) { return com.get_can_signal_value((TCANSignal* const)&bms_err_DchContactorCyclesError_BMS_280_2, FCAN.FData);}
  SET(bms_err_DchContactorCyclesError) { com.set_can_signal_value((TCANSignal* const)&bms_err_DchContactorCyclesError_BMS_280_2, FCAN.FData, value);}
  PROPERTY(double, bms_err_shuntOffline);
  GET(bms_err_shuntOffline) { return com.get_can_signal_value((TCANSignal* const)&bms_err_shuntOffline_BMS_280_2, FCAN.FData);}
  SET(bms_err_shuntOffline) { com.set_can_signal_value((TCANSignal* const)&bms_err_shuntOffline_BMS_280_2, FCAN.FData, value);}
  PROPERTY(double, bms_err_shuntError);
  GET(bms_err_shuntError) { return com.get_can_signal_value((TCANSignal* const)&bms_err_shuntError_BMS_280_2, FCAN.FData);}
  SET(bms_err_shuntError) { com.set_can_signal_value((TCANSignal* const)&bms_err_shuntError_BMS_280_2, FCAN.FData, value);}
  PROPERTY(double, bms_err_settingsError);
  GET(bms_err_settingsError) { return com.get_can_signal_value((TCANSignal* const)&bms_err_settingsError_BMS_280_2, FCAN.FData);}
  SET(bms_err_settingsError) { com.set_can_signal_value((TCANSignal* const)&bms_err_settingsError_BMS_280_2, FCAN.FData, value);}
  PROPERTY(double, bms_err_WDTReset);
  GET(bms_err_WDTReset) { return com.get_can_signal_value((TCANSignal* const)&bms_err_WDTReset_BMS_280_2, FCAN.FData);}
  SET(bms_err_WDTReset) { com.set_can_signal_value((TCANSignal* const)&bms_err_WDTReset_BMS_280_2, FCAN.FData, value);}
  PROPERTY(double, bms_err_noTemprSensors);
  GET(bms_err_noTemprSensors) { return com.get_can_signal_value((TCANSignal* const)&bms_err_noTemprSensors_BMS_280_2, FCAN.FData);}
  SET(bms_err_noTemprSensors) { com.set_can_signal_value((TCANSignal* const)&bms_err_noTemprSensors_BMS_280_2, FCAN.FData, value);}
  PROPERTY(double, bms_err_temprSensorShorted);
  GET(bms_err_temprSensorShorted) { return com.get_can_signal_value((TCANSignal* const)&bms_err_temprSensorShorted_BMS_280_2, FCAN.FData);}
  SET(bms_err_temprSensorShorted) { com.set_can_signal_value((TCANSignal* const)&bms_err_temprSensorShorted_BMS_280_2, FCAN.FData, value);}
  PROPERTY(double, bms_err_spiritOffline);
  GET(bms_err_spiritOffline) { return com.get_can_signal_value((TCANSignal* const)&bms_err_spiritOffline_BMS_280_2, FCAN.FData);}
  SET(bms_err_spiritOffline) { com.set_can_signal_value((TCANSignal* const)&bms_err_spiritOffline_BMS_280_2, FCAN.FData, value);}
  void init() { FCAN = create().FCAN; }
  TBMS_280_2 create() { CANMsgDecl(_BMS_280_2, cBMS_280_2, 1, 0, 8, 672) return cBMS_280_2; }
  void set_data(const PCAN ACAN) { FCAN = *ACAN; }
};

// CAN Message BMS_180_2
extern const TCANSignal bms_batteryCover_BMS_180_2;
extern const TCANSignal bms_chargerConnected_BMS_180_2;
extern const TCANSignal bms_powerDownRequest_BMS_180_2;
extern const TCANSignal bms_inhibitCharging_BMS_180_2;
extern const TCANSignal bms_inhibitDischarging_BMS_180_2;
extern const TCANSignal bms_chargingContactorFeedback_BMS_180_2;
extern const TCANSignal bms_dischargingContactorFeedback_BMS_180_2;
extern const TCANSignal bms_batteryCurrent_BMS_180_2;
extern const TCANSignal bms_cellTemprMin_BMS_180_2;
extern const TCANSignal bms_cellTemprMax_BMS_180_2;
extern const TCANSignal bms_SOC_BMS_180_2;
extern const TCANSignal bms_batteryVoltage_BMS_180_2;
struct _BMS_180_2;
typedef struct _BMS_180_2 TBMS_180_2;
struct _BMS_180_2{
  TCAN FCAN;
  PROPERTY(double, bms_batteryCover);
  GET(bms_batteryCover) { return com.get_can_signal_value((TCANSignal* const)&bms_batteryCover_BMS_180_2, FCAN.FData);}
  SET(bms_batteryCover) { com.set_can_signal_value((TCANSignal* const)&bms_batteryCover_BMS_180_2, FCAN.FData, value);}
  PROPERTY(double, bms_chargerConnected);
  GET(bms_chargerConnected) { return com.get_can_signal_value((TCANSignal* const)&bms_chargerConnected_BMS_180_2, FCAN.FData);}
  SET(bms_chargerConnected) { com.set_can_signal_value((TCANSignal* const)&bms_chargerConnected_BMS_180_2, FCAN.FData, value);}
  PROPERTY(double, bms_powerDownRequest);
  GET(bms_powerDownRequest) { return com.get_can_signal_value((TCANSignal* const)&bms_powerDownRequest_BMS_180_2, FCAN.FData);}
  SET(bms_powerDownRequest) { com.set_can_signal_value((TCANSignal* const)&bms_powerDownRequest_BMS_180_2, FCAN.FData, value);}
  PROPERTY(double, bms_inhibitCharging);
  GET(bms_inhibitCharging) { return com.get_can_signal_value((TCANSignal* const)&bms_inhibitCharging_BMS_180_2, FCAN.FData);}
  SET(bms_inhibitCharging) { com.set_can_signal_value((TCANSignal* const)&bms_inhibitCharging_BMS_180_2, FCAN.FData, value);}
  PROPERTY(double, bms_inhibitDischarging);
  GET(bms_inhibitDischarging) { return com.get_can_signal_value((TCANSignal* const)&bms_inhibitDischarging_BMS_180_2, FCAN.FData);}
  SET(bms_inhibitDischarging) { com.set_can_signal_value((TCANSignal* const)&bms_inhibitDischarging_BMS_180_2, FCAN.FData, value);}
  PROPERTY(double, bms_chargingContactorFeedback);
  GET(bms_chargingContactorFeedback) { return com.get_can_signal_value((TCANSignal* const)&bms_chargingContactorFeedback_BMS_180_2, FCAN.FData);}
  SET(bms_chargingContactorFeedback) { com.set_can_signal_value((TCANSignal* const)&bms_chargingContactorFeedback_BMS_180_2, FCAN.FData, value);}
  PROPERTY(double, bms_dischargingContactorFeedback);
  GET(bms_dischargingContactorFeedback) { return com.get_can_signal_value((TCANSignal* const)&bms_dischargingContactorFeedback_BMS_180_2, FCAN.FData);}
  SET(bms_dischargingContactorFeedback) { com.set_can_signal_value((TCANSignal* const)&bms_dischargingContactorFeedback_BMS_180_2, FCAN.FData, value);}
  PROPERTY(double, bms_batteryCurrent);
  GET(bms_batteryCurrent) { return com.get_can_signal_value((TCANSignal* const)&bms_batteryCurrent_BMS_180_2, FCAN.FData);}
  SET(bms_batteryCurrent) { com.set_can_signal_value((TCANSignal* const)&bms_batteryCurrent_BMS_180_2, FCAN.FData, value);}
  PROPERTY(double, bms_cellTemprMin);
  GET(bms_cellTemprMin) { return com.get_can_signal_value((TCANSignal* const)&bms_cellTemprMin_BMS_180_2, FCAN.FData);}
  SET(bms_cellTemprMin) { com.set_can_signal_value((TCANSignal* const)&bms_cellTemprMin_BMS_180_2, FCAN.FData, value);}
  PROPERTY(double, bms_cellTemprMax);
  GET(bms_cellTemprMax) { return com.get_can_signal_value((TCANSignal* const)&bms_cellTemprMax_BMS_180_2, FCAN.FData);}
  SET(bms_cellTemprMax) { com.set_can_signal_value((TCANSignal* const)&bms_cellTemprMax_BMS_180_2, FCAN.FData, value);}
  PROPERTY(double, bms_SOC);
  GET(bms_SOC) { return com.get_can_signal_value((TCANSignal* const)&bms_SOC_BMS_180_2, FCAN.FData);}
  SET(bms_SOC) { com.set_can_signal_value((TCANSignal* const)&bms_SOC_BMS_180_2, FCAN.FData, value);}
  PROPERTY(double, bms_batteryVoltage);
  GET(bms_batteryVoltage) { return com.get_can_signal_value((TCANSignal* const)&bms_batteryVoltage_BMS_180_2, FCAN.FData);}
  SET(bms_batteryVoltage) { com.set_can_signal_value((TCANSignal* const)&bms_batteryVoltage_BMS_180_2, FCAN.FData, value);}
  void init() { FCAN = create().FCAN; }
  TBMS_180_2 create() { CANMsgDecl(_BMS_180_2, cBMS_180_2, 1, 0, 8, 416) return cBMS_180_2; }
  void set_data(const PCAN ACAN) { FCAN = *ACAN; }
};

// CAN Message BMS_CCS_06E5_2
extern const TCANSignal bms_m_maxAllowableChVoltage_BMS_CCS_06E5_2;
extern const TCANSignal bms_m_maxAllowableChCurrent_BMS_CCS_06E5_2;
extern const TCANSignal bms_m_batState_BMS_CCS_06E5_2;
struct _BMS_CCS_06E5_2;
typedef struct _BMS_CCS_06E5_2 TBMS_CCS_06E5_2;
struct _BMS_CCS_06E5_2{
  TCAN FCAN;
  PROPERTY(double, bms_m_maxAllowableChVoltage);
  GET(bms_m_maxAllowableChVoltage) { return com.get_can_signal_value((TCANSignal* const)&bms_m_maxAllowableChVoltage_BMS_CCS_06E5_2, FCAN.FData);}
  SET(bms_m_maxAllowableChVoltage) { com.set_can_signal_value((TCANSignal* const)&bms_m_maxAllowableChVoltage_BMS_CCS_06E5_2, FCAN.FData, value);}
  PROPERTY(double, bms_m_maxAllowableChCurrent);
  GET(bms_m_maxAllowableChCurrent) { return com.get_can_signal_value((TCANSignal* const)&bms_m_maxAllowableChCurrent_BMS_CCS_06E5_2, FCAN.FData);}
  SET(bms_m_maxAllowableChCurrent) { com.set_can_signal_value((TCANSignal* const)&bms_m_maxAllowableChCurrent_BMS_CCS_06E5_2, FCAN.FData, value);}
  PROPERTY(double, bms_m_batState);
  GET(bms_m_batState) { return com.get_can_signal_value((TCANSignal* const)&bms_m_batState_BMS_CCS_06E5_2, FCAN.FData);}
  SET(bms_m_batState) { com.set_can_signal_value((TCANSignal* const)&bms_m_batState_BMS_CCS_06E5_2, FCAN.FData, value);}
  void init() { FCAN = create().FCAN; }
  TBMS_CCS_06E5_2 create() { CANMsgDecl(_BMS_CCS_06E5_2, cBMS_CCS_06E5_2, 1, 4, 8, 403105268) return cBMS_CCS_06E5_2; }
  void set_data(const PCAN ACAN) { FCAN = *ACAN; }
};

// CAN Message BMS_CCS_multiMsg_2
extern const TCANSignal bms_m_cellMaxVoltage_BMS_CCS_multiMsg_2;
extern const TCANSignal bms_m_batTotalVoltage_BMS_CCS_multiMsg_2;
extern const TCANSignal bms_m_batNumbers_BMS_CCS_multiMsg_2;
extern const TCANSignal bms_m_batNominalAH_BMS_CCS_multiMsg_2;
extern const TCANSignal bms_m_maxAllowableChVoltage_BMS_CCS_multiMsg_2;
extern const TCANSignal bms_m_batActualAH_BMS_CCS_multiMsg_2;
extern const TCANSignal bms_m_cellMinVoltage_BMS_CCS_multiMsg_2;
extern const TCANSignal bms_m_maxAllowableChCurrent_BMS_CCS_multiMsg_2;
extern const TCANSignal bms_m_actualChCurrent_BMS_CCS_multiMsg_2;
extern const TCANSignal bms_m_presentSOC_BMS_CCS_multiMsg_2;
extern const TCANSignal bms_m_chargerClosed_BMS_CCS_multiMsg_2;
extern const TCANSignal bms_m_singleBatMaxProtectVolt_BMS_CCS_multiMsg_2;
extern const TCANSignal bms_m_batMaxTempr_BMS_CCS_multiMsg_2;
extern const TCANSignal bms_m_cellMinProtectVoltage_BMS_CCS_multiMsg_2;
extern const TCANSignal bms_m_maxAllowableDchCurrent_BMS_CCS_multiMsg_2;
extern const TCANSignal bms_m_batState_BMS_CCS_multiMsg_2;
extern const TCANSignal bms_m_batNumber_BMS_CCS_multiMsg_2;
extern const TCANSignal bms_m_batMinTempr_BMS_CCS_multiMsg_2;
extern const TCANSignal bms_multiMsg_page_BMS_CCS_multiMsg_2;
struct _BMS_CCS_multiMsg_2;
typedef struct _BMS_CCS_multiMsg_2 TBMS_CCS_multiMsg_2;
struct _BMS_CCS_multiMsg_2{
  TCAN FCAN;
  PROPERTY(double, bms_m_cellMaxVoltage);
  GET(bms_m_cellMaxVoltage) { return com.get_can_signal_value((TCANSignal* const)&bms_m_cellMaxVoltage_BMS_CCS_multiMsg_2, FCAN.FData);}
  SET(bms_m_cellMaxVoltage) { com.set_can_signal_value((TCANSignal* const)&bms_m_cellMaxVoltage_BMS_CCS_multiMsg_2, FCAN.FData, value);}
  PROPERTY(double, bms_m_batTotalVoltage);
  GET(bms_m_batTotalVoltage) { return com.get_can_signal_value((TCANSignal* const)&bms_m_batTotalVoltage_BMS_CCS_multiMsg_2, FCAN.FData);}
  SET(bms_m_batTotalVoltage) { com.set_can_signal_value((TCANSignal* const)&bms_m_batTotalVoltage_BMS_CCS_multiMsg_2, FCAN.FData, value);}
  PROPERTY(double, bms_m_batNumbers);
  GET(bms_m_batNumbers) { return com.get_can_signal_value((TCANSignal* const)&bms_m_batNumbers_BMS_CCS_multiMsg_2, FCAN.FData);}
  SET(bms_m_batNumbers) { com.set_can_signal_value((TCANSignal* const)&bms_m_batNumbers_BMS_CCS_multiMsg_2, FCAN.FData, value);}
  PROPERTY(double, bms_m_batNominalAH);
  GET(bms_m_batNominalAH) { return com.get_can_signal_value((TCANSignal* const)&bms_m_batNominalAH_BMS_CCS_multiMsg_2, FCAN.FData);}
  SET(bms_m_batNominalAH) { com.set_can_signal_value((TCANSignal* const)&bms_m_batNominalAH_BMS_CCS_multiMsg_2, FCAN.FData, value);}
  PROPERTY(double, bms_m_maxAllowableChVoltage);
  GET(bms_m_maxAllowableChVoltage) { return com.get_can_signal_value((TCANSignal* const)&bms_m_maxAllowableChVoltage_BMS_CCS_multiMsg_2, FCAN.FData);}
  SET(bms_m_maxAllowableChVoltage) { com.set_can_signal_value((TCANSignal* const)&bms_m_maxAllowableChVoltage_BMS_CCS_multiMsg_2, FCAN.FData, value);}
  PROPERTY(double, bms_m_batActualAH);
  GET(bms_m_batActualAH) { return com.get_can_signal_value((TCANSignal* const)&bms_m_batActualAH_BMS_CCS_multiMsg_2, FCAN.FData);}
  SET(bms_m_batActualAH) { com.set_can_signal_value((TCANSignal* const)&bms_m_batActualAH_BMS_CCS_multiMsg_2, FCAN.FData, value);}
  PROPERTY(double, bms_m_cellMinVoltage);
  GET(bms_m_cellMinVoltage) { return com.get_can_signal_value((TCANSignal* const)&bms_m_cellMinVoltage_BMS_CCS_multiMsg_2, FCAN.FData);}
  SET(bms_m_cellMinVoltage) { com.set_can_signal_value((TCANSignal* const)&bms_m_cellMinVoltage_BMS_CCS_multiMsg_2, FCAN.FData, value);}
  PROPERTY(double, bms_m_maxAllowableChCurrent);
  GET(bms_m_maxAllowableChCurrent) { return com.get_can_signal_value((TCANSignal* const)&bms_m_maxAllowableChCurrent_BMS_CCS_multiMsg_2, FCAN.FData);}
  SET(bms_m_maxAllowableChCurrent) { com.set_can_signal_value((TCANSignal* const)&bms_m_maxAllowableChCurrent_BMS_CCS_multiMsg_2, FCAN.FData, value);}
  PROPERTY(double, bms_m_actualChCurrent);
  GET(bms_m_actualChCurrent) { return com.get_can_signal_value((TCANSignal* const)&bms_m_actualChCurrent_BMS_CCS_multiMsg_2, FCAN.FData);}
  SET(bms_m_actualChCurrent) { com.set_can_signal_value((TCANSignal* const)&bms_m_actualChCurrent_BMS_CCS_multiMsg_2, FCAN.FData, value);}
  PROPERTY(double, bms_m_presentSOC);
  GET(bms_m_presentSOC) { return com.get_can_signal_value((TCANSignal* const)&bms_m_presentSOC_BMS_CCS_multiMsg_2, FCAN.FData);}
  SET(bms_m_presentSOC) { com.set_can_signal_value((TCANSignal* const)&bms_m_presentSOC_BMS_CCS_multiMsg_2, FCAN.FData, value);}
  PROPERTY(double, bms_m_chargerClosed);
  GET(bms_m_chargerClosed) { return com.get_can_signal_value((TCANSignal* const)&bms_m_chargerClosed_BMS_CCS_multiMsg_2, FCAN.FData);}
  SET(bms_m_chargerClosed) { com.set_can_signal_value((TCANSignal* const)&bms_m_chargerClosed_BMS_CCS_multiMsg_2, FCAN.FData, value);}
  PROPERTY(double, bms_m_singleBatMaxProtectVolt);
  GET(bms_m_singleBatMaxProtectVolt) { return com.get_can_signal_value((TCANSignal* const)&bms_m_singleBatMaxProtectVolt_BMS_CCS_multiMsg_2, FCAN.FData);}
  SET(bms_m_singleBatMaxProtectVolt) { com.set_can_signal_value((TCANSignal* const)&bms_m_singleBatMaxProtectVolt_BMS_CCS_multiMsg_2, FCAN.FData, value);}
  PROPERTY(double, bms_m_batMaxTempr);
  GET(bms_m_batMaxTempr) { return com.get_can_signal_value((TCANSignal* const)&bms_m_batMaxTempr_BMS_CCS_multiMsg_2, FCAN.FData);}
  SET(bms_m_batMaxTempr) { com.set_can_signal_value((TCANSignal* const)&bms_m_batMaxTempr_BMS_CCS_multiMsg_2, FCAN.FData, value);}
  PROPERTY(double, bms_m_cellMinProtectVoltage);
  GET(bms_m_cellMinProtectVoltage) { return com.get_can_signal_value((TCANSignal* const)&bms_m_cellMinProtectVoltage_BMS_CCS_multiMsg_2, FCAN.FData);}
  SET(bms_m_cellMinProtectVoltage) { com.set_can_signal_value((TCANSignal* const)&bms_m_cellMinProtectVoltage_BMS_CCS_multiMsg_2, FCAN.FData, value);}
  PROPERTY(double, bms_m_maxAllowableDchCurrent);
  GET(bms_m_maxAllowableDchCurrent) { return com.get_can_signal_value((TCANSignal* const)&bms_m_maxAllowableDchCurrent_BMS_CCS_multiMsg_2, FCAN.FData);}
  SET(bms_m_maxAllowableDchCurrent) { com.set_can_signal_value((TCANSignal* const)&bms_m_maxAllowableDchCurrent_BMS_CCS_multiMsg_2, FCAN.FData, value);}
  PROPERTY(double, bms_m_batState);
  GET(bms_m_batState) { return com.get_can_signal_value((TCANSignal* const)&bms_m_batState_BMS_CCS_multiMsg_2, FCAN.FData);}
  SET(bms_m_batState) { com.set_can_signal_value((TCANSignal* const)&bms_m_batState_BMS_CCS_multiMsg_2, FCAN.FData, value);}
  PROPERTY(double, bms_m_batNumber);
  GET(bms_m_batNumber) { return com.get_can_signal_value((TCANSignal* const)&bms_m_batNumber_BMS_CCS_multiMsg_2, FCAN.FData);}
  SET(bms_m_batNumber) { com.set_can_signal_value((TCANSignal* const)&bms_m_batNumber_BMS_CCS_multiMsg_2, FCAN.FData, value);}
  PROPERTY(double, bms_m_batMinTempr);
  GET(bms_m_batMinTempr) { return com.get_can_signal_value((TCANSignal* const)&bms_m_batMinTempr_BMS_CCS_multiMsg_2, FCAN.FData);}
  SET(bms_m_batMinTempr) { com.set_can_signal_value((TCANSignal* const)&bms_m_batMinTempr_BMS_CCS_multiMsg_2, FCAN.FData, value);}
  PROPERTY(double, bms_multiMsg_page);
  GET(bms_multiMsg_page) { return com.get_can_signal_value((TCANSignal* const)&bms_multiMsg_page_BMS_CCS_multiMsg_2, FCAN.FData);}
  SET(bms_multiMsg_page) { com.set_can_signal_value((TCANSignal* const)&bms_multiMsg_page_BMS_CCS_multiMsg_2, FCAN.FData, value);}
  void init() { FCAN = create().FCAN; }
  TBMS_CCS_multiMsg_2 create() { CANMsgDecl(_BMS_CCS_multiMsg_2, cBMS_CCS_multiMsg_2, 1, 4, 8, 403105524) return cBMS_CCS_multiMsg_2; }
  void set_data(const PCAN ACAN) { FCAN = *ACAN; }
};

// CAN Message CCS_Status_2
extern const TCANSignal ccs_outputVoltage_CCS_Status_2;
extern const TCANSignal ccs_outputCurrent_CCS_Status_2;
extern const TCANSignal ccs_status_hardwareFailure_CCS_Status_2;
extern const TCANSignal ccs_status_overheat_CCS_Status_2;
extern const TCANSignal ccs_status_inputVoltaheError_CCS_Status_2;
extern const TCANSignal ccs_status_statingState_CCS_Status_2;
extern const TCANSignal ccs_status_communicationError_CCS_Status_2;
struct _CCS_Status_2;
typedef struct _CCS_Status_2 TCCS_Status_2;
struct _CCS_Status_2{
  TCAN FCAN;
  PROPERTY(double, ccs_outputVoltage);
  GET(ccs_outputVoltage) { return com.get_can_signal_value((TCANSignal* const)&ccs_outputVoltage_CCS_Status_2, FCAN.FData);}
  SET(ccs_outputVoltage) { com.set_can_signal_value((TCANSignal* const)&ccs_outputVoltage_CCS_Status_2, FCAN.FData, value);}
  PROPERTY(double, ccs_outputCurrent);
  GET(ccs_outputCurrent) { return com.get_can_signal_value((TCANSignal* const)&ccs_outputCurrent_CCS_Status_2, FCAN.FData);}
  SET(ccs_outputCurrent) { com.set_can_signal_value((TCANSignal* const)&ccs_outputCurrent_CCS_Status_2, FCAN.FData, value);}
  PROPERTY(double, ccs_status_hardwareFailure);
  GET(ccs_status_hardwareFailure) { return com.get_can_signal_value((TCANSignal* const)&ccs_status_hardwareFailure_CCS_Status_2, FCAN.FData);}
  SET(ccs_status_hardwareFailure) { com.set_can_signal_value((TCANSignal* const)&ccs_status_hardwareFailure_CCS_Status_2, FCAN.FData, value);}
  PROPERTY(double, ccs_status_overheat);
  GET(ccs_status_overheat) { return com.get_can_signal_value((TCANSignal* const)&ccs_status_overheat_CCS_Status_2, FCAN.FData);}
  SET(ccs_status_overheat) { com.set_can_signal_value((TCANSignal* const)&ccs_status_overheat_CCS_Status_2, FCAN.FData, value);}
  PROPERTY(double, ccs_status_inputVoltaheError);
  GET(ccs_status_inputVoltaheError) { return com.get_can_signal_value((TCANSignal* const)&ccs_status_inputVoltaheError_CCS_Status_2, FCAN.FData);}
  SET(ccs_status_inputVoltaheError) { com.set_can_signal_value((TCANSignal* const)&ccs_status_inputVoltaheError_CCS_Status_2, FCAN.FData, value);}
  PROPERTY(double, ccs_status_statingState);
  GET(ccs_status_statingState) { return com.get_can_signal_value((TCANSignal* const)&ccs_status_statingState_CCS_Status_2, FCAN.FData);}
  SET(ccs_status_statingState) { com.set_can_signal_value((TCANSignal* const)&ccs_status_statingState_CCS_Status_2, FCAN.FData, value);}
  PROPERTY(double, ccs_status_communicationError);
  GET(ccs_status_communicationError) { return com.get_can_signal_value((TCANSignal* const)&ccs_status_communicationError_CCS_Status_2, FCAN.FData);}
  SET(ccs_status_communicationError) { com.set_can_signal_value((TCANSignal* const)&ccs_status_communicationError_CCS_Status_2, FCAN.FData, value);}
  void init() { FCAN = create().FCAN; }
  TCCS_Status_2 create() { CANMsgDecl(_CCS_Status_2, cCCS_Status_2, 1, 4, 8, 419385573) return cCCS_Status_2; }
  void set_data(const PCAN ACAN) { FCAN = *ACAN; }
};

// CAN Message BKU_Joystick_Suspension_2
extern const TCANSignal suspension_enable_BKU_Joystick_Suspension_2;
extern const TCANSignal suspension_cmd_fl_BKU_Joystick_Suspension_2;
extern const TCANSignal suspension_cmd_fr_BKU_Joystick_Suspension_2;
extern const TCANSignal suspension_cmd_rl_BKU_Joystick_Suspension_2;
extern const TCANSignal suspension_cmd_rr_BKU_Joystick_Suspension_2;
struct _BKU_Joystick_Suspension_2;
typedef struct _BKU_Joystick_Suspension_2 TBKU_Joystick_Suspension_2;
struct _BKU_Joystick_Suspension_2{
  TCAN FCAN;
  PROPERTY(double, suspension_enable);
  GET(suspension_enable) { return com.get_can_signal_value((TCANSignal* const)&suspension_enable_BKU_Joystick_Suspension_2, FCAN.FData);}
  SET(suspension_enable) { com.set_can_signal_value((TCANSignal* const)&suspension_enable_BKU_Joystick_Suspension_2, FCAN.FData, value);}
  PROPERTY(double, suspension_cmd_fl);
  GET(suspension_cmd_fl) { return com.get_can_signal_value((TCANSignal* const)&suspension_cmd_fl_BKU_Joystick_Suspension_2, FCAN.FData);}
  SET(suspension_cmd_fl) { com.set_can_signal_value((TCANSignal* const)&suspension_cmd_fl_BKU_Joystick_Suspension_2, FCAN.FData, value);}
  PROPERTY(double, suspension_cmd_fr);
  GET(suspension_cmd_fr) { return com.get_can_signal_value((TCANSignal* const)&suspension_cmd_fr_BKU_Joystick_Suspension_2, FCAN.FData);}
  SET(suspension_cmd_fr) { com.set_can_signal_value((TCANSignal* const)&suspension_cmd_fr_BKU_Joystick_Suspension_2, FCAN.FData, value);}
  PROPERTY(double, suspension_cmd_rl);
  GET(suspension_cmd_rl) { return com.get_can_signal_value((TCANSignal* const)&suspension_cmd_rl_BKU_Joystick_Suspension_2, FCAN.FData);}
  SET(suspension_cmd_rl) { com.set_can_signal_value((TCANSignal* const)&suspension_cmd_rl_BKU_Joystick_Suspension_2, FCAN.FData, value);}
  PROPERTY(double, suspension_cmd_rr);
  GET(suspension_cmd_rr) { return com.get_can_signal_value((TCANSignal* const)&suspension_cmd_rr_BKU_Joystick_Suspension_2, FCAN.FData);}
  SET(suspension_cmd_rr) { com.set_can_signal_value((TCANSignal* const)&suspension_cmd_rr_BKU_Joystick_Suspension_2, FCAN.FData, value);}
  void init() { FCAN = create().FCAN; }
  TBKU_Joystick_Suspension_2 create() { CANMsgDecl(_BKU_Joystick_Suspension_2, cBKU_Joystick_Suspension_2, 1, 4, 8, 419398564) return cBKU_Joystick_Suspension_2; }
  void set_data(const PCAN ACAN) { FCAN = *ACAN; }
};

// CAN Message BKU_Joystick_ResetErrors_2
extern const TCANSignal resetErrors_bits_BKU_Joystick_ResetErrors_2;
struct _BKU_Joystick_ResetErrors_2;
typedef struct _BKU_Joystick_ResetErrors_2 TBKU_Joystick_ResetErrors_2;
struct _BKU_Joystick_ResetErrors_2{
  TCAN FCAN;
  PROPERTY(double, resetErrors_bits);
  GET(resetErrors_bits) { return com.get_can_signal_value((TCANSignal* const)&resetErrors_bits_BKU_Joystick_ResetErrors_2, FCAN.FData);}
  SET(resetErrors_bits) { com.set_can_signal_value((TCANSignal* const)&resetErrors_bits_BKU_Joystick_ResetErrors_2, FCAN.FData, value);}
  void init() { FCAN = create().FCAN; }
  TBKU_Joystick_ResetErrors_2 create() { CANMsgDecl(_BKU_Joystick_ResetErrors_2, cBKU_Joystick_ResetErrors_2, 1, 4, 8, 419401892) return cBKU_Joystick_ResetErrors_2; }
  void set_data(const PCAN ACAN) { FCAN = *ACAN; }
};

// CAN Message BKU_Joystick_PeriphCmd_2
extern const TCANSignal periphCmd_lightsTurnLeft_BKU_Joystick_PeriphCmd_2;
extern const TCANSignal periphCmd_lightsTurnRight_BKU_Joystick_PeriphCmd_2;
extern const TCANSignal periphCmd_lightsStop_BKU_Joystick_PeriphCmd_2;
extern const TCANSignal periphCmd_lightsBack_BKU_Joystick_PeriphCmd_2;
extern const TCANSignal periphCmd_lightsFront_BKU_Joystick_PeriphCmd_2;
extern const TCANSignal periphCmd_lightsFar_BKU_Joystick_PeriphCmd_2;
extern const TCANSignal periphCmd_soundAlert_BKU_Joystick_PeriphCmd_2;
extern const TCANSignal periphCmd_steeringRearCmd_BKU_Joystick_PeriphCmd_2;
struct _BKU_Joystick_PeriphCmd_2;
typedef struct _BKU_Joystick_PeriphCmd_2 TBKU_Joystick_PeriphCmd_2;
struct _BKU_Joystick_PeriphCmd_2{
  TCAN FCAN;
  PROPERTY(double, periphCmd_lightsTurnLeft);
  GET(periphCmd_lightsTurnLeft) { return com.get_can_signal_value((TCANSignal* const)&periphCmd_lightsTurnLeft_BKU_Joystick_PeriphCmd_2, FCAN.FData);}
  SET(periphCmd_lightsTurnLeft) { com.set_can_signal_value((TCANSignal* const)&periphCmd_lightsTurnLeft_BKU_Joystick_PeriphCmd_2, FCAN.FData, value);}
  PROPERTY(double, periphCmd_lightsTurnRight);
  GET(periphCmd_lightsTurnRight) { return com.get_can_signal_value((TCANSignal* const)&periphCmd_lightsTurnRight_BKU_Joystick_PeriphCmd_2, FCAN.FData);}
  SET(periphCmd_lightsTurnRight) { com.set_can_signal_value((TCANSignal* const)&periphCmd_lightsTurnRight_BKU_Joystick_PeriphCmd_2, FCAN.FData, value);}
  PROPERTY(double, periphCmd_lightsStop);
  GET(periphCmd_lightsStop) { return com.get_can_signal_value((TCANSignal* const)&periphCmd_lightsStop_BKU_Joystick_PeriphCmd_2, FCAN.FData);}
  SET(periphCmd_lightsStop) { com.set_can_signal_value((TCANSignal* const)&periphCmd_lightsStop_BKU_Joystick_PeriphCmd_2, FCAN.FData, value);}
  PROPERTY(double, periphCmd_lightsBack);
  GET(periphCmd_lightsBack) { return com.get_can_signal_value((TCANSignal* const)&periphCmd_lightsBack_BKU_Joystick_PeriphCmd_2, FCAN.FData);}
  SET(periphCmd_lightsBack) { com.set_can_signal_value((TCANSignal* const)&periphCmd_lightsBack_BKU_Joystick_PeriphCmd_2, FCAN.FData, value);}
  PROPERTY(double, periphCmd_lightsFront);
  GET(periphCmd_lightsFront) { return com.get_can_signal_value((TCANSignal* const)&periphCmd_lightsFront_BKU_Joystick_PeriphCmd_2, FCAN.FData);}
  SET(periphCmd_lightsFront) { com.set_can_signal_value((TCANSignal* const)&periphCmd_lightsFront_BKU_Joystick_PeriphCmd_2, FCAN.FData, value);}
  PROPERTY(double, periphCmd_lightsFar);
  GET(periphCmd_lightsFar) { return com.get_can_signal_value((TCANSignal* const)&periphCmd_lightsFar_BKU_Joystick_PeriphCmd_2, FCAN.FData);}
  SET(periphCmd_lightsFar) { com.set_can_signal_value((TCANSignal* const)&periphCmd_lightsFar_BKU_Joystick_PeriphCmd_2, FCAN.FData, value);}
  PROPERTY(double, periphCmd_soundAlert);
  GET(periphCmd_soundAlert) { return com.get_can_signal_value((TCANSignal* const)&periphCmd_soundAlert_BKU_Joystick_PeriphCmd_2, FCAN.FData);}
  SET(periphCmd_soundAlert) { com.set_can_signal_value((TCANSignal* const)&periphCmd_soundAlert_BKU_Joystick_PeriphCmd_2, FCAN.FData, value);}
  PROPERTY(double, periphCmd_steeringRearCmd);
  GET(periphCmd_steeringRearCmd) { return com.get_can_signal_value((TCANSignal* const)&periphCmd_steeringRearCmd_BKU_Joystick_PeriphCmd_2, FCAN.FData);}
  SET(periphCmd_steeringRearCmd) { com.set_can_signal_value((TCANSignal* const)&periphCmd_steeringRearCmd_BKU_Joystick_PeriphCmd_2, FCAN.FData, value);}
  void init() { FCAN = create().FCAN; }
  TBKU_Joystick_PeriphCmd_2 create() { CANMsgDecl(_BKU_Joystick_PeriphCmd_2, cBKU_Joystick_PeriphCmd_2, 1, 4, 8, 419398308) return cBKU_Joystick_PeriphCmd_2; }
  void set_data(const PCAN ACAN) { FCAN = *ACAN; }
};

// CAN Message BKU_Joystick_MainCmd_2
extern const TCANSignal mainCmd_arm_BKU_Joystick_MainCmd_2;
extern const TCANSignal mainCmd_parkingBrakeCmd_BKU_Joystick_MainCmd_2;
extern const TCANSignal mainCmd_discreteBrakeCmd_BKU_Joystick_MainCmd_2;
extern const TCANSignal mainCmd_steeringPermission_BKU_Joystick_MainCmd_2;
extern const TCANSignal mainCmd_engineTorque_BKU_Joystick_MainCmd_2;
extern const TCANSignal mainCmd_steeringFrontCmd_BKU_Joystick_MainCmd_2;
extern const TCANSignal mainCmd_hydraulicBrakeCmd_BKU_Joystick_MainCmd_2;
struct _BKU_Joystick_MainCmd_2;
typedef struct _BKU_Joystick_MainCmd_2 TBKU_Joystick_MainCmd_2;
struct _BKU_Joystick_MainCmd_2{
  TCAN FCAN;
  PROPERTY(double, mainCmd_arm);
  GET(mainCmd_arm) { return com.get_can_signal_value((TCANSignal* const)&mainCmd_arm_BKU_Joystick_MainCmd_2, FCAN.FData);}
  SET(mainCmd_arm) { com.set_can_signal_value((TCANSignal* const)&mainCmd_arm_BKU_Joystick_MainCmd_2, FCAN.FData, value);}
  PROPERTY(double, mainCmd_parkingBrakeCmd);
  GET(mainCmd_parkingBrakeCmd) { return com.get_can_signal_value((TCANSignal* const)&mainCmd_parkingBrakeCmd_BKU_Joystick_MainCmd_2, FCAN.FData);}
  SET(mainCmd_parkingBrakeCmd) { com.set_can_signal_value((TCANSignal* const)&mainCmd_parkingBrakeCmd_BKU_Joystick_MainCmd_2, FCAN.FData, value);}
  PROPERTY(double, mainCmd_discreteBrakeCmd);
  GET(mainCmd_discreteBrakeCmd) { return com.get_can_signal_value((TCANSignal* const)&mainCmd_discreteBrakeCmd_BKU_Joystick_MainCmd_2, FCAN.FData);}
  SET(mainCmd_discreteBrakeCmd) { com.set_can_signal_value((TCANSignal* const)&mainCmd_discreteBrakeCmd_BKU_Joystick_MainCmd_2, FCAN.FData, value);}
  PROPERTY(double, mainCmd_steeringPermission);
  GET(mainCmd_steeringPermission) { return com.get_can_signal_value((TCANSignal* const)&mainCmd_steeringPermission_BKU_Joystick_MainCmd_2, FCAN.FData);}
  SET(mainCmd_steeringPermission) { com.set_can_signal_value((TCANSignal* const)&mainCmd_steeringPermission_BKU_Joystick_MainCmd_2, FCAN.FData, value);}
  PROPERTY(double, mainCmd_engineTorque);
  GET(mainCmd_engineTorque) { return com.get_can_signal_value((TCANSignal* const)&mainCmd_engineTorque_BKU_Joystick_MainCmd_2, FCAN.FData);}
  SET(mainCmd_engineTorque) { com.set_can_signal_value((TCANSignal* const)&mainCmd_engineTorque_BKU_Joystick_MainCmd_2, FCAN.FData, value);}
  PROPERTY(double, mainCmd_steeringFrontCmd);
  GET(mainCmd_steeringFrontCmd) { return com.get_can_signal_value((TCANSignal* const)&mainCmd_steeringFrontCmd_BKU_Joystick_MainCmd_2, FCAN.FData);}
  SET(mainCmd_steeringFrontCmd) { com.set_can_signal_value((TCANSignal* const)&mainCmd_steeringFrontCmd_BKU_Joystick_MainCmd_2, FCAN.FData, value);}
  PROPERTY(double, mainCmd_hydraulicBrakeCmd);
  GET(mainCmd_hydraulicBrakeCmd) { return com.get_can_signal_value((TCANSignal* const)&mainCmd_hydraulicBrakeCmd_BKU_Joystick_MainCmd_2, FCAN.FData);}
  SET(mainCmd_hydraulicBrakeCmd) { com.set_can_signal_value((TCANSignal* const)&mainCmd_hydraulicBrakeCmd_BKU_Joystick_MainCmd_2, FCAN.FData, value);}
  void init() { FCAN = create().FCAN; }
  TBKU_Joystick_MainCmd_2 create() { CANMsgDecl(_BKU_Joystick_MainCmd_2, cBKU_Joystick_MainCmd_2, 1, 4, 8, 83853732) return cBKU_Joystick_MainCmd_2; }
  void set_data(const PCAN ACAN) { FCAN = *ACAN; }
};

// CAN Message VMU_PeripheralSignals_2
extern const TCANSignal peripheral_sideDoorLeft_VMU_PeripheralSignals_2;
extern const TCANSignal peripheral_sideDoorRight_VMU_PeripheralSignals_2;
extern const TCANSignal peripheral_hood_VMU_PeripheralSignals_2;
extern const TCANSignal peripheral_doorOfThe4thBlock_VMU_PeripheralSignals_2;
extern const TCANSignal peripheral_redButton_VMU_PeripheralSignals_2;
extern const TCANSignal peripheral_payloadResult_VMU_PeripheralSignals_2;
extern const TCANSignal peripheral_VMUState_VMU_PeripheralSignals_2;
struct _VMU_PeripheralSignals_2;
typedef struct _VMU_PeripheralSignals_2 TVMU_PeripheralSignals_2;
struct _VMU_PeripheralSignals_2{
  TCAN FCAN;
  PROPERTY(double, peripheral_sideDoorLeft);
  GET(peripheral_sideDoorLeft) { return com.get_can_signal_value((TCANSignal* const)&peripheral_sideDoorLeft_VMU_PeripheralSignals_2, FCAN.FData);}
  SET(peripheral_sideDoorLeft) { com.set_can_signal_value((TCANSignal* const)&peripheral_sideDoorLeft_VMU_PeripheralSignals_2, FCAN.FData, value);}
  PROPERTY(double, peripheral_sideDoorRight);
  GET(peripheral_sideDoorRight) { return com.get_can_signal_value((TCANSignal* const)&peripheral_sideDoorRight_VMU_PeripheralSignals_2, FCAN.FData);}
  SET(peripheral_sideDoorRight) { com.set_can_signal_value((TCANSignal* const)&peripheral_sideDoorRight_VMU_PeripheralSignals_2, FCAN.FData, value);}
  PROPERTY(double, peripheral_hood);
  GET(peripheral_hood) { return com.get_can_signal_value((TCANSignal* const)&peripheral_hood_VMU_PeripheralSignals_2, FCAN.FData);}
  SET(peripheral_hood) { com.set_can_signal_value((TCANSignal* const)&peripheral_hood_VMU_PeripheralSignals_2, FCAN.FData, value);}
  PROPERTY(double, peripheral_doorOfThe4thBlock);
  GET(peripheral_doorOfThe4thBlock) { return com.get_can_signal_value((TCANSignal* const)&peripheral_doorOfThe4thBlock_VMU_PeripheralSignals_2, FCAN.FData);}
  SET(peripheral_doorOfThe4thBlock) { com.set_can_signal_value((TCANSignal* const)&peripheral_doorOfThe4thBlock_VMU_PeripheralSignals_2, FCAN.FData, value);}
  PROPERTY(double, peripheral_redButton);
  GET(peripheral_redButton) { return com.get_can_signal_value((TCANSignal* const)&peripheral_redButton_VMU_PeripheralSignals_2, FCAN.FData);}
  SET(peripheral_redButton) { com.set_can_signal_value((TCANSignal* const)&peripheral_redButton_VMU_PeripheralSignals_2, FCAN.FData, value);}
  PROPERTY(double, peripheral_payloadResult);
  GET(peripheral_payloadResult) { return com.get_can_signal_value((TCANSignal* const)&peripheral_payloadResult_VMU_PeripheralSignals_2, FCAN.FData);}
  SET(peripheral_payloadResult) { com.set_can_signal_value((TCANSignal* const)&peripheral_payloadResult_VMU_PeripheralSignals_2, FCAN.FData, value);}
  PROPERTY(double, peripheral_VMUState);
  GET(peripheral_VMUState) { return com.get_can_signal_value((TCANSignal* const)&peripheral_VMUState_VMU_PeripheralSignals_2, FCAN.FData);}
  SET(peripheral_VMUState) { com.set_can_signal_value((TCANSignal* const)&peripheral_VMUState_VMU_PeripheralSignals_2, FCAN.FData, value);}
  void init() { FCAN = create().FCAN; }
  TVMU_PeripheralSignals_2 create() { CANMsgDecl(_VMU_PeripheralSignals_2, cVMU_PeripheralSignals_2, 1, 4, 8, 419390881) return cVMU_PeripheralSignals_2; }
  void set_data(const PCAN ACAN) { FCAN = *ACAN; }
};

// CAN Message BKU_ResetErrors_2
extern const TCANSignal resetErrors_bits_BKU_ResetErrors_2;
struct _BKU_ResetErrors_2;
typedef struct _BKU_ResetErrors_2 TBKU_ResetErrors_2;
struct _BKU_ResetErrors_2{
  TCAN FCAN;
  PROPERTY(double, resetErrors_bits);
  GET(resetErrors_bits) { return com.get_can_signal_value((TCANSignal* const)&resetErrors_bits_BKU_ResetErrors_2, FCAN.FData);}
  SET(resetErrors_bits) { com.set_can_signal_value((TCANSignal* const)&resetErrors_bits_BKU_ResetErrors_2, FCAN.FData, value);}
  void init() { FCAN = create().FCAN; }
  TBKU_ResetErrors_2 create() { CANMsgDecl(_BKU_ResetErrors_2, cBKU_ResetErrors_2, 1, 4, 8, 419401893) return cBKU_ResetErrors_2; }
  void set_data(const PCAN ACAN) { FCAN = *ACAN; }
};

// CAN Message BKU_Suspension_2
extern const TCANSignal suspension_enable_BKU_Suspension_2;
extern const TCANSignal suspension_cmd_fl_BKU_Suspension_2;
extern const TCANSignal suspension_cmd_fr_BKU_Suspension_2;
extern const TCANSignal suspension_cmd_rl_BKU_Suspension_2;
extern const TCANSignal suspension_cmd_rr_BKU_Suspension_2;
struct _BKU_Suspension_2;
typedef struct _BKU_Suspension_2 TBKU_Suspension_2;
struct _BKU_Suspension_2{
  TCAN FCAN;
  PROPERTY(double, suspension_enable);
  GET(suspension_enable) { return com.get_can_signal_value((TCANSignal* const)&suspension_enable_BKU_Suspension_2, FCAN.FData);}
  SET(suspension_enable) { com.set_can_signal_value((TCANSignal* const)&suspension_enable_BKU_Suspension_2, FCAN.FData, value);}
  PROPERTY(double, suspension_cmd_fl);
  GET(suspension_cmd_fl) { return com.get_can_signal_value((TCANSignal* const)&suspension_cmd_fl_BKU_Suspension_2, FCAN.FData);}
  SET(suspension_cmd_fl) { com.set_can_signal_value((TCANSignal* const)&suspension_cmd_fl_BKU_Suspension_2, FCAN.FData, value);}
  PROPERTY(double, suspension_cmd_fr);
  GET(suspension_cmd_fr) { return com.get_can_signal_value((TCANSignal* const)&suspension_cmd_fr_BKU_Suspension_2, FCAN.FData);}
  SET(suspension_cmd_fr) { com.set_can_signal_value((TCANSignal* const)&suspension_cmd_fr_BKU_Suspension_2, FCAN.FData, value);}
  PROPERTY(double, suspension_cmd_rl);
  GET(suspension_cmd_rl) { return com.get_can_signal_value((TCANSignal* const)&suspension_cmd_rl_BKU_Suspension_2, FCAN.FData);}
  SET(suspension_cmd_rl) { com.set_can_signal_value((TCANSignal* const)&suspension_cmd_rl_BKU_Suspension_2, FCAN.FData, value);}
  PROPERTY(double, suspension_cmd_rr);
  GET(suspension_cmd_rr) { return com.get_can_signal_value((TCANSignal* const)&suspension_cmd_rr_BKU_Suspension_2, FCAN.FData);}
  SET(suspension_cmd_rr) { com.set_can_signal_value((TCANSignal* const)&suspension_cmd_rr_BKU_Suspension_2, FCAN.FData, value);}
  void init() { FCAN = create().FCAN; }
  TBKU_Suspension_2 create() { CANMsgDecl(_BKU_Suspension_2, cBKU_Suspension_2, 1, 4, 8, 419398565) return cBKU_Suspension_2; }
  void set_data(const PCAN ACAN) { FCAN = *ACAN; }
};

// CAN Message VMU_WheelMileage_2
extern const TCANSignal abs_mileage_fl_VMU_WheelMileage_2;
extern const TCANSignal abs_mileage_fr_VMU_WheelMileage_2;
extern const TCANSignal abs_mileage_rl_VMU_WheelMileage_2;
extern const TCANSignal abs_mileage_rr_VMU_WheelMileage_2;
struct _VMU_WheelMileage_2;
typedef struct _VMU_WheelMileage_2 TVMU_WheelMileage_2;
struct _VMU_WheelMileage_2{
  TCAN FCAN;
  PROPERTY(double, abs_mileage_fl);
  GET(abs_mileage_fl) { return com.get_can_signal_value((TCANSignal* const)&abs_mileage_fl_VMU_WheelMileage_2, FCAN.FData);}
  SET(abs_mileage_fl) { com.set_can_signal_value((TCANSignal* const)&abs_mileage_fl_VMU_WheelMileage_2, FCAN.FData, value);}
  PROPERTY(double, abs_mileage_fr);
  GET(abs_mileage_fr) { return com.get_can_signal_value((TCANSignal* const)&abs_mileage_fr_VMU_WheelMileage_2, FCAN.FData);}
  SET(abs_mileage_fr) { com.set_can_signal_value((TCANSignal* const)&abs_mileage_fr_VMU_WheelMileage_2, FCAN.FData, value);}
  PROPERTY(double, abs_mileage_rl);
  GET(abs_mileage_rl) { return com.get_can_signal_value((TCANSignal* const)&abs_mileage_rl_VMU_WheelMileage_2, FCAN.FData);}
  SET(abs_mileage_rl) { com.set_can_signal_value((TCANSignal* const)&abs_mileage_rl_VMU_WheelMileage_2, FCAN.FData, value);}
  PROPERTY(double, abs_mileage_rr);
  GET(abs_mileage_rr) { return com.get_can_signal_value((TCANSignal* const)&abs_mileage_rr_VMU_WheelMileage_2, FCAN.FData);}
  SET(abs_mileage_rr) { com.set_can_signal_value((TCANSignal* const)&abs_mileage_rr_VMU_WheelMileage_2, FCAN.FData, value);}
  void init() { FCAN = create().FCAN; }
  TVMU_WheelMileage_2 create() { CANMsgDecl(_VMU_WheelMileage_2, cVMU_WheelMileage_2, 1, 4, 8, 285172129) return cVMU_WheelMileage_2; }
  void set_data(const PCAN ACAN) { FCAN = *ACAN; }
};

// CAN Message VMU_Suspension_2
extern const TCANSignal suspension_pressure_fl_VMU_Suspension_2;
extern const TCANSignal suspension_pressure_fr_VMU_Suspension_2;
extern const TCANSignal suspension_pressure_rl_VMU_Suspension_2;
extern const TCANSignal suspension_pressure_rr_VMU_Suspension_2;
extern const TCANSignal suspension_value_fl_VMU_Suspension_2;
extern const TCANSignal suspension_value_fr_VMU_Suspension_2;
extern const TCANSignal suspension_value_rl_VMU_Suspension_2;
extern const TCANSignal suspension_value_rr_VMU_Suspension_2;
struct _VMU_Suspension_2;
typedef struct _VMU_Suspension_2 TVMU_Suspension_2;
struct _VMU_Suspension_2{
  TCAN FCAN;
  PROPERTY(double, suspension_pressure_fl);
  GET(suspension_pressure_fl) { return com.get_can_signal_value((TCANSignal* const)&suspension_pressure_fl_VMU_Suspension_2, FCAN.FData);}
  SET(suspension_pressure_fl) { com.set_can_signal_value((TCANSignal* const)&suspension_pressure_fl_VMU_Suspension_2, FCAN.FData, value);}
  PROPERTY(double, suspension_pressure_fr);
  GET(suspension_pressure_fr) { return com.get_can_signal_value((TCANSignal* const)&suspension_pressure_fr_VMU_Suspension_2, FCAN.FData);}
  SET(suspension_pressure_fr) { com.set_can_signal_value((TCANSignal* const)&suspension_pressure_fr_VMU_Suspension_2, FCAN.FData, value);}
  PROPERTY(double, suspension_pressure_rl);
  GET(suspension_pressure_rl) { return com.get_can_signal_value((TCANSignal* const)&suspension_pressure_rl_VMU_Suspension_2, FCAN.FData);}
  SET(suspension_pressure_rl) { com.set_can_signal_value((TCANSignal* const)&suspension_pressure_rl_VMU_Suspension_2, FCAN.FData, value);}
  PROPERTY(double, suspension_pressure_rr);
  GET(suspension_pressure_rr) { return com.get_can_signal_value((TCANSignal* const)&suspension_pressure_rr_VMU_Suspension_2, FCAN.FData);}
  SET(suspension_pressure_rr) { com.set_can_signal_value((TCANSignal* const)&suspension_pressure_rr_VMU_Suspension_2, FCAN.FData, value);}
  PROPERTY(double, suspension_value_fl);
  GET(suspension_value_fl) { return com.get_can_signal_value((TCANSignal* const)&suspension_value_fl_VMU_Suspension_2, FCAN.FData);}
  SET(suspension_value_fl) { com.set_can_signal_value((TCANSignal* const)&suspension_value_fl_VMU_Suspension_2, FCAN.FData, value);}
  PROPERTY(double, suspension_value_fr);
  GET(suspension_value_fr) { return com.get_can_signal_value((TCANSignal* const)&suspension_value_fr_VMU_Suspension_2, FCAN.FData);}
  SET(suspension_value_fr) { com.set_can_signal_value((TCANSignal* const)&suspension_value_fr_VMU_Suspension_2, FCAN.FData, value);}
  PROPERTY(double, suspension_value_rl);
  GET(suspension_value_rl) { return com.get_can_signal_value((TCANSignal* const)&suspension_value_rl_VMU_Suspension_2, FCAN.FData);}
  SET(suspension_value_rl) { com.set_can_signal_value((TCANSignal* const)&suspension_value_rl_VMU_Suspension_2, FCAN.FData, value);}
  PROPERTY(double, suspension_value_rr);
  GET(suspension_value_rr) { return com.get_can_signal_value((TCANSignal* const)&suspension_value_rr_VMU_Suspension_2, FCAN.FData);}
  SET(suspension_value_rr) { com.set_can_signal_value((TCANSignal* const)&suspension_value_rr_VMU_Suspension_2, FCAN.FData, value);}
  void init() { FCAN = create().FCAN; }
  TVMU_Suspension_2 create() { CANMsgDecl(_VMU_Suspension_2, cVMU_Suspension_2, 1, 4, 8, 419390113) return cVMU_Suspension_2; }
  void set_data(const PCAN ACAN) { FCAN = *ACAN; }
};

// CAN Message VMU_WheelFreq_2
extern const TCANSignal abs_freq_fl_VMU_WheelFreq_2;
extern const TCANSignal abs_freq_fr_VMU_WheelFreq_2;
extern const TCANSignal abs_freq_rl_VMU_WheelFreq_2;
extern const TCANSignal abs_freq_rr_VMU_WheelFreq_2;
struct _VMU_WheelFreq_2;
typedef struct _VMU_WheelFreq_2 TVMU_WheelFreq_2;
struct _VMU_WheelFreq_2{
  TCAN FCAN;
  PROPERTY(double, abs_freq_fl);
  GET(abs_freq_fl) { return com.get_can_signal_value((TCANSignal* const)&abs_freq_fl_VMU_WheelFreq_2, FCAN.FData);}
  SET(abs_freq_fl) { com.set_can_signal_value((TCANSignal* const)&abs_freq_fl_VMU_WheelFreq_2, FCAN.FData, value);}
  PROPERTY(double, abs_freq_fr);
  GET(abs_freq_fr) { return com.get_can_signal_value((TCANSignal* const)&abs_freq_fr_VMU_WheelFreq_2, FCAN.FData);}
  SET(abs_freq_fr) { com.set_can_signal_value((TCANSignal* const)&abs_freq_fr_VMU_WheelFreq_2, FCAN.FData, value);}
  PROPERTY(double, abs_freq_rl);
  GET(abs_freq_rl) { return com.get_can_signal_value((TCANSignal* const)&abs_freq_rl_VMU_WheelFreq_2, FCAN.FData);}
  SET(abs_freq_rl) { com.set_can_signal_value((TCANSignal* const)&abs_freq_rl_VMU_WheelFreq_2, FCAN.FData, value);}
  PROPERTY(double, abs_freq_rr);
  GET(abs_freq_rr) { return com.get_can_signal_value((TCANSignal* const)&abs_freq_rr_VMU_WheelFreq_2, FCAN.FData);}
  SET(abs_freq_rr) { com.set_can_signal_value((TCANSignal* const)&abs_freq_rr_VMU_WheelFreq_2, FCAN.FData, value);}
  void init() { FCAN = create().FCAN; }
  TVMU_WheelFreq_2 create() { CANMsgDecl(_VMU_WheelFreq_2, cVMU_WheelFreq_2, 1, 4, 8, 285171873) return cVMU_WheelFreq_2; }
  void set_data(const PCAN ACAN) { FCAN = *ACAN; }
};

// CAN Message VMU_Brakes_2
extern const TCANSignal brakes_parkingInfo_VMU_Brakes_2;
extern const TCANSignal brakes_parkingState_VMU_Brakes_2;
extern const TCANSignal brakes_status_VMU_Brakes_2;
extern const TCANSignal brakes_cont1_VMU_Brakes_2;
extern const TCANSignal brakes_cont2_VMU_Brakes_2;
extern const TCANSignal brakes_cont3_VMU_Brakes_2;
extern const TCANSignal brakes_cont4_VMU_Brakes_2;
extern const TCANSignal brakes_discreteCmd_VMU_Brakes_2;
struct _VMU_Brakes_2;
typedef struct _VMU_Brakes_2 TVMU_Brakes_2;
struct _VMU_Brakes_2{
  TCAN FCAN;
  PROPERTY(double, brakes_parkingInfo);
  GET(brakes_parkingInfo) { return com.get_can_signal_value((TCANSignal* const)&brakes_parkingInfo_VMU_Brakes_2, FCAN.FData);}
  SET(brakes_parkingInfo) { com.set_can_signal_value((TCANSignal* const)&brakes_parkingInfo_VMU_Brakes_2, FCAN.FData, value);}
  PROPERTY(double, brakes_parkingState);
  GET(brakes_parkingState) { return com.get_can_signal_value((TCANSignal* const)&brakes_parkingState_VMU_Brakes_2, FCAN.FData);}
  SET(brakes_parkingState) { com.set_can_signal_value((TCANSignal* const)&brakes_parkingState_VMU_Brakes_2, FCAN.FData, value);}
  PROPERTY(double, brakes_status);
  GET(brakes_status) { return com.get_can_signal_value((TCANSignal* const)&brakes_status_VMU_Brakes_2, FCAN.FData);}
  SET(brakes_status) { com.set_can_signal_value((TCANSignal* const)&brakes_status_VMU_Brakes_2, FCAN.FData, value);}
  PROPERTY(double, brakes_cont1);
  GET(brakes_cont1) { return com.get_can_signal_value((TCANSignal* const)&brakes_cont1_VMU_Brakes_2, FCAN.FData);}
  SET(brakes_cont1) { com.set_can_signal_value((TCANSignal* const)&brakes_cont1_VMU_Brakes_2, FCAN.FData, value);}
  PROPERTY(double, brakes_cont2);
  GET(brakes_cont2) { return com.get_can_signal_value((TCANSignal* const)&brakes_cont2_VMU_Brakes_2, FCAN.FData);}
  SET(brakes_cont2) { com.set_can_signal_value((TCANSignal* const)&brakes_cont2_VMU_Brakes_2, FCAN.FData, value);}
  PROPERTY(double, brakes_cont3);
  GET(brakes_cont3) { return com.get_can_signal_value((TCANSignal* const)&brakes_cont3_VMU_Brakes_2, FCAN.FData);}
  SET(brakes_cont3) { com.set_can_signal_value((TCANSignal* const)&brakes_cont3_VMU_Brakes_2, FCAN.FData, value);}
  PROPERTY(double, brakes_cont4);
  GET(brakes_cont4) { return com.get_can_signal_value((TCANSignal* const)&brakes_cont4_VMU_Brakes_2, FCAN.FData);}
  SET(brakes_cont4) { com.set_can_signal_value((TCANSignal* const)&brakes_cont4_VMU_Brakes_2, FCAN.FData, value);}
  PROPERTY(double, brakes_discreteCmd);
  GET(brakes_discreteCmd) { return com.get_can_signal_value((TCANSignal* const)&brakes_discreteCmd_VMU_Brakes_2, FCAN.FData);}
  SET(brakes_discreteCmd) { com.set_can_signal_value((TCANSignal* const)&brakes_discreteCmd_VMU_Brakes_2, FCAN.FData, value);}
  void init() { FCAN = create().FCAN; }
  TVMU_Brakes_2 create() { CANMsgDecl(_VMU_Brakes_2, cVMU_Brakes_2, 1, 4, 8, 419387297) return cVMU_Brakes_2; }
  void set_data(const PCAN ACAN) { FCAN = *ACAN; }
};

// CAN Message VMU_Steering_2
extern const TCANSignal steering_front_status_VMU_Steering_2;
extern const TCANSignal steering_front_curPosition_VMU_Steering_2;
extern const TCANSignal steering_rear_status_VMU_Steering_2;
extern const TCANSignal steering_rear_curPosition_VMU_Steering_2;
struct _VMU_Steering_2;
typedef struct _VMU_Steering_2 TVMU_Steering_2;
struct _VMU_Steering_2{
  TCAN FCAN;
  PROPERTY(double, steering_front_status);
  GET(steering_front_status) { return com.get_can_signal_value((TCANSignal* const)&steering_front_status_VMU_Steering_2, FCAN.FData);}
  SET(steering_front_status) { com.set_can_signal_value((TCANSignal* const)&steering_front_status_VMU_Steering_2, FCAN.FData, value);}
  PROPERTY(double, steering_front_curPosition);
  GET(steering_front_curPosition) { return com.get_can_signal_value((TCANSignal* const)&steering_front_curPosition_VMU_Steering_2, FCAN.FData);}
  SET(steering_front_curPosition) { com.set_can_signal_value((TCANSignal* const)&steering_front_curPosition_VMU_Steering_2, FCAN.FData, value);}
  PROPERTY(double, steering_rear_status);
  GET(steering_rear_status) { return com.get_can_signal_value((TCANSignal* const)&steering_rear_status_VMU_Steering_2, FCAN.FData);}
  SET(steering_rear_status) { com.set_can_signal_value((TCANSignal* const)&steering_rear_status_VMU_Steering_2, FCAN.FData, value);}
  PROPERTY(double, steering_rear_curPosition);
  GET(steering_rear_curPosition) { return com.get_can_signal_value((TCANSignal* const)&steering_rear_curPosition_VMU_Steering_2, FCAN.FData);}
  SET(steering_rear_curPosition) { com.set_can_signal_value((TCANSignal* const)&steering_rear_curPosition_VMU_Steering_2, FCAN.FData, value);}
  void init() { FCAN = create().FCAN; }
  TVMU_Steering_2 create() { CANMsgDecl(_VMU_Steering_2, cVMU_Steering_2, 1, 4, 8, 419386785) return cVMU_Steering_2; }
  void set_data(const PCAN ACAN) { FCAN = *ACAN; }
};

// CAN Message VMU_Engine_2_2
extern const TCANSignal engine_2_voltage_VMU_Engine_2_2;
extern const TCANSignal engine_2_motorTemp_VMU_Engine_2_2;
extern const TCANSignal engine_2_invertorTemp_VMU_Engine_2_2;
extern const TCANSignal engine_2_fluxCoilTemp_VMU_Engine_2_2;
extern const TCANSignal engine_2_power_VMU_Engine_2_2;
struct _VMU_Engine_2_2;
typedef struct _VMU_Engine_2_2 TVMU_Engine_2_2;
struct _VMU_Engine_2_2{
  TCAN FCAN;
  PROPERTY(double, engine_2_voltage);
  GET(engine_2_voltage) { return com.get_can_signal_value((TCANSignal* const)&engine_2_voltage_VMU_Engine_2_2, FCAN.FData);}
  SET(engine_2_voltage) { com.set_can_signal_value((TCANSignal* const)&engine_2_voltage_VMU_Engine_2_2, FCAN.FData, value);}
  PROPERTY(double, engine_2_motorTemp);
  GET(engine_2_motorTemp) { return com.get_can_signal_value((TCANSignal* const)&engine_2_motorTemp_VMU_Engine_2_2, FCAN.FData);}
  SET(engine_2_motorTemp) { com.set_can_signal_value((TCANSignal* const)&engine_2_motorTemp_VMU_Engine_2_2, FCAN.FData, value);}
  PROPERTY(double, engine_2_invertorTemp);
  GET(engine_2_invertorTemp) { return com.get_can_signal_value((TCANSignal* const)&engine_2_invertorTemp_VMU_Engine_2_2, FCAN.FData);}
  SET(engine_2_invertorTemp) { com.set_can_signal_value((TCANSignal* const)&engine_2_invertorTemp_VMU_Engine_2_2, FCAN.FData, value);}
  PROPERTY(double, engine_2_fluxCoilTemp);
  GET(engine_2_fluxCoilTemp) { return com.get_can_signal_value((TCANSignal* const)&engine_2_fluxCoilTemp_VMU_Engine_2_2, FCAN.FData);}
  SET(engine_2_fluxCoilTemp) { com.set_can_signal_value((TCANSignal* const)&engine_2_fluxCoilTemp_VMU_Engine_2_2, FCAN.FData, value);}
  PROPERTY(double, engine_2_power);
  GET(engine_2_power) { return com.get_can_signal_value((TCANSignal* const)&engine_2_power_VMU_Engine_2_2, FCAN.FData);}
  SET(engine_2_power) { com.set_can_signal_value((TCANSignal* const)&engine_2_power_VMU_Engine_2_2, FCAN.FData, value);}
  void init() { FCAN = create().FCAN; }
  TVMU_Engine_2_2 create() { CANMsgDecl(_VMU_Engine_2_2, cVMU_Engine_2_2, 1, 4, 8, 419386529) return cVMU_Engine_2_2; }
  void set_data(const PCAN ACAN) { FCAN = *ACAN; }
};

// CAN Message VMU_Engine_1_2
extern const TCANSignal engine_1_status_VMU_Engine_1_2;
extern const TCANSignal engine_1_torque_VMU_Engine_1_2;
extern const TCANSignal engine_1_rpm_VMU_Engine_1_2;
extern const TCANSignal engine_1_statorCurrent_VMU_Engine_1_2;
struct _VMU_Engine_1_2;
typedef struct _VMU_Engine_1_2 TVMU_Engine_1_2;
struct _VMU_Engine_1_2{
  TCAN FCAN;
  PROPERTY(double, engine_1_status);
  GET(engine_1_status) { return com.get_can_signal_value((TCANSignal* const)&engine_1_status_VMU_Engine_1_2, FCAN.FData);}
  SET(engine_1_status) { com.set_can_signal_value((TCANSignal* const)&engine_1_status_VMU_Engine_1_2, FCAN.FData, value);}
  PROPERTY(double, engine_1_torque);
  GET(engine_1_torque) { return com.get_can_signal_value((TCANSignal* const)&engine_1_torque_VMU_Engine_1_2, FCAN.FData);}
  SET(engine_1_torque) { com.set_can_signal_value((TCANSignal* const)&engine_1_torque_VMU_Engine_1_2, FCAN.FData, value);}
  PROPERTY(double, engine_1_rpm);
  GET(engine_1_rpm) { return com.get_can_signal_value((TCANSignal* const)&engine_1_rpm_VMU_Engine_1_2, FCAN.FData);}
  SET(engine_1_rpm) { com.set_can_signal_value((TCANSignal* const)&engine_1_rpm_VMU_Engine_1_2, FCAN.FData, value);}
  PROPERTY(double, engine_1_statorCurrent);
  GET(engine_1_statorCurrent) { return com.get_can_signal_value((TCANSignal* const)&engine_1_statorCurrent_VMU_Engine_1_2, FCAN.FData);}
  SET(engine_1_statorCurrent) { com.set_can_signal_value((TCANSignal* const)&engine_1_statorCurrent_VMU_Engine_1_2, FCAN.FData, value);}
  void init() { FCAN = create().FCAN; }
  TVMU_Engine_1_2 create() { CANMsgDecl(_VMU_Engine_1_2, cVMU_Engine_1_2, 1, 4, 8, 419386273) return cVMU_Engine_1_2; }
  void set_data(const PCAN ACAN) { FCAN = *ACAN; }
};

// CAN Message BKU_PeriphCmd_2
extern const TCANSignal periphCmd_lightsTurnLeft_BKU_PeriphCmd_2;
extern const TCANSignal periphCmd_lightsTurnRight_BKU_PeriphCmd_2;
extern const TCANSignal periphCmd_lightsStop_BKU_PeriphCmd_2;
extern const TCANSignal periphCmd_lightsBack_BKU_PeriphCmd_2;
extern const TCANSignal periphCmd_lightsFront_BKU_PeriphCmd_2;
extern const TCANSignal periphCmd_lightsFar_BKU_PeriphCmd_2;
extern const TCANSignal periphCmd_soundAlert_BKU_PeriphCmd_2;
extern const TCANSignal periphCmd_steeringRearCmd_BKU_PeriphCmd_2;
struct _BKU_PeriphCmd_2;
typedef struct _BKU_PeriphCmd_2 TBKU_PeriphCmd_2;
struct _BKU_PeriphCmd_2{
  TCAN FCAN;
  PROPERTY(double, periphCmd_lightsTurnLeft);
  GET(periphCmd_lightsTurnLeft) { return com.get_can_signal_value((TCANSignal* const)&periphCmd_lightsTurnLeft_BKU_PeriphCmd_2, FCAN.FData);}
  SET(periphCmd_lightsTurnLeft) { com.set_can_signal_value((TCANSignal* const)&periphCmd_lightsTurnLeft_BKU_PeriphCmd_2, FCAN.FData, value);}
  PROPERTY(double, periphCmd_lightsTurnRight);
  GET(periphCmd_lightsTurnRight) { return com.get_can_signal_value((TCANSignal* const)&periphCmd_lightsTurnRight_BKU_PeriphCmd_2, FCAN.FData);}
  SET(periphCmd_lightsTurnRight) { com.set_can_signal_value((TCANSignal* const)&periphCmd_lightsTurnRight_BKU_PeriphCmd_2, FCAN.FData, value);}
  PROPERTY(double, periphCmd_lightsStop);
  GET(periphCmd_lightsStop) { return com.get_can_signal_value((TCANSignal* const)&periphCmd_lightsStop_BKU_PeriphCmd_2, FCAN.FData);}
  SET(periphCmd_lightsStop) { com.set_can_signal_value((TCANSignal* const)&periphCmd_lightsStop_BKU_PeriphCmd_2, FCAN.FData, value);}
  PROPERTY(double, periphCmd_lightsBack);
  GET(periphCmd_lightsBack) { return com.get_can_signal_value((TCANSignal* const)&periphCmd_lightsBack_BKU_PeriphCmd_2, FCAN.FData);}
  SET(periphCmd_lightsBack) { com.set_can_signal_value((TCANSignal* const)&periphCmd_lightsBack_BKU_PeriphCmd_2, FCAN.FData, value);}
  PROPERTY(double, periphCmd_lightsFront);
  GET(periphCmd_lightsFront) { return com.get_can_signal_value((TCANSignal* const)&periphCmd_lightsFront_BKU_PeriphCmd_2, FCAN.FData);}
  SET(periphCmd_lightsFront) { com.set_can_signal_value((TCANSignal* const)&periphCmd_lightsFront_BKU_PeriphCmd_2, FCAN.FData, value);}
  PROPERTY(double, periphCmd_lightsFar);
  GET(periphCmd_lightsFar) { return com.get_can_signal_value((TCANSignal* const)&periphCmd_lightsFar_BKU_PeriphCmd_2, FCAN.FData);}
  SET(periphCmd_lightsFar) { com.set_can_signal_value((TCANSignal* const)&periphCmd_lightsFar_BKU_PeriphCmd_2, FCAN.FData, value);}
  PROPERTY(double, periphCmd_soundAlert);
  GET(periphCmd_soundAlert) { return com.get_can_signal_value((TCANSignal* const)&periphCmd_soundAlert_BKU_PeriphCmd_2, FCAN.FData);}
  SET(periphCmd_soundAlert) { com.set_can_signal_value((TCANSignal* const)&periphCmd_soundAlert_BKU_PeriphCmd_2, FCAN.FData, value);}
  PROPERTY(double, periphCmd_steeringRearCmd);
  GET(periphCmd_steeringRearCmd) { return com.get_can_signal_value((TCANSignal* const)&periphCmd_steeringRearCmd_BKU_PeriphCmd_2, FCAN.FData);}
  SET(periphCmd_steeringRearCmd) { com.set_can_signal_value((TCANSignal* const)&periphCmd_steeringRearCmd_BKU_PeriphCmd_2, FCAN.FData, value);}
  void init() { FCAN = create().FCAN; }
  TBKU_PeriphCmd_2 create() { CANMsgDecl(_BKU_PeriphCmd_2, cBKU_PeriphCmd_2, 1, 4, 8, 419398309) return cBKU_PeriphCmd_2; }
  void set_data(const PCAN ACAN) { FCAN = *ACAN; }
};

// CAN Message BKU_MainCmd_2
extern const TCANSignal mainCmd_arm_BKU_MainCmd_2;
extern const TCANSignal mainCmd_parkingBrakeCmd_BKU_MainCmd_2;
extern const TCANSignal mainCmd_discreteBrakeCmd_BKU_MainCmd_2;
extern const TCANSignal mainCmd_steeringPermission_BKU_MainCmd_2;
extern const TCANSignal mainCmd_engineTorque_BKU_MainCmd_2;
extern const TCANSignal mainCmd_steeringFrontCmd_BKU_MainCmd_2;
extern const TCANSignal mainCmd_hydraulicBrakeCmd_BKU_MainCmd_2;
struct _BKU_MainCmd_2;
typedef struct _BKU_MainCmd_2 TBKU_MainCmd_2;
struct _BKU_MainCmd_2{
  TCAN FCAN;
  PROPERTY(double, mainCmd_arm);
  GET(mainCmd_arm) { return com.get_can_signal_value((TCANSignal* const)&mainCmd_arm_BKU_MainCmd_2, FCAN.FData);}
  SET(mainCmd_arm) { com.set_can_signal_value((TCANSignal* const)&mainCmd_arm_BKU_MainCmd_2, FCAN.FData, value);}
  PROPERTY(double, mainCmd_parkingBrakeCmd);
  GET(mainCmd_parkingBrakeCmd) { return com.get_can_signal_value((TCANSignal* const)&mainCmd_parkingBrakeCmd_BKU_MainCmd_2, FCAN.FData);}
  SET(mainCmd_parkingBrakeCmd) { com.set_can_signal_value((TCANSignal* const)&mainCmd_parkingBrakeCmd_BKU_MainCmd_2, FCAN.FData, value);}
  PROPERTY(double, mainCmd_discreteBrakeCmd);
  GET(mainCmd_discreteBrakeCmd) { return com.get_can_signal_value((TCANSignal* const)&mainCmd_discreteBrakeCmd_BKU_MainCmd_2, FCAN.FData);}
  SET(mainCmd_discreteBrakeCmd) { com.set_can_signal_value((TCANSignal* const)&mainCmd_discreteBrakeCmd_BKU_MainCmd_2, FCAN.FData, value);}
  PROPERTY(double, mainCmd_steeringPermission);
  GET(mainCmd_steeringPermission) { return com.get_can_signal_value((TCANSignal* const)&mainCmd_steeringPermission_BKU_MainCmd_2, FCAN.FData);}
  SET(mainCmd_steeringPermission) { com.set_can_signal_value((TCANSignal* const)&mainCmd_steeringPermission_BKU_MainCmd_2, FCAN.FData, value);}
  PROPERTY(double, mainCmd_engineTorque);
  GET(mainCmd_engineTorque) { return com.get_can_signal_value((TCANSignal* const)&mainCmd_engineTorque_BKU_MainCmd_2, FCAN.FData);}
  SET(mainCmd_engineTorque) { com.set_can_signal_value((TCANSignal* const)&mainCmd_engineTorque_BKU_MainCmd_2, FCAN.FData, value);}
  PROPERTY(double, mainCmd_steeringFrontCmd);
  GET(mainCmd_steeringFrontCmd) { return com.get_can_signal_value((TCANSignal* const)&mainCmd_steeringFrontCmd_BKU_MainCmd_2, FCAN.FData);}
  SET(mainCmd_steeringFrontCmd) { com.set_can_signal_value((TCANSignal* const)&mainCmd_steeringFrontCmd_BKU_MainCmd_2, FCAN.FData, value);}
  PROPERTY(double, mainCmd_hydraulicBrakeCmd);
  GET(mainCmd_hydraulicBrakeCmd) { return com.get_can_signal_value((TCANSignal* const)&mainCmd_hydraulicBrakeCmd_BKU_MainCmd_2, FCAN.FData);}
  SET(mainCmd_hydraulicBrakeCmd) { com.set_can_signal_value((TCANSignal* const)&mainCmd_hydraulicBrakeCmd_BKU_MainCmd_2, FCAN.FData, value);}
  void init() { FCAN = create().FCAN; }
  TBKU_MainCmd_2 create() { CANMsgDecl(_BKU_MainCmd_2, cBKU_MainCmd_2, 1, 4, 8, 83853733) return cBKU_MainCmd_2; }
  void set_data(const PCAN ACAN) { FCAN = *ACAN; }
};

// CAN Message VMU_MainState_2
extern const TCANSignal mainState_readyToMove_VMU_MainState_2;
extern const TCANSignal mainState_chargerConnected_VMU_MainState_2;
extern const TCANSignal mainState_emergencyStop_VMU_MainState_2;
extern const TCANSignal mainState_bmsStatus_VMU_MainState_2;
extern const TCANSignal mainState_voltage24_VMU_MainState_2;
extern const TCANSignal mainState_workMode_VMU_MainState_2;
extern const TCANSignal mainState_warningCount_VMU_MainState_2;
extern const TCANSignal mainState_criticalCount_VMU_MainState_2;
extern const TCANSignal mainState_errorCode_VMU_MainState_2;
struct _VMU_MainState_2;
typedef struct _VMU_MainState_2 TVMU_MainState_2;
struct _VMU_MainState_2{
  TCAN FCAN;
  PROPERTY(double, mainState_readyToMove);
  GET(mainState_readyToMove) { return com.get_can_signal_value((TCANSignal* const)&mainState_readyToMove_VMU_MainState_2, FCAN.FData);}
  SET(mainState_readyToMove) { com.set_can_signal_value((TCANSignal* const)&mainState_readyToMove_VMU_MainState_2, FCAN.FData, value);}
  PROPERTY(double, mainState_chargerConnected);
  GET(mainState_chargerConnected) { return com.get_can_signal_value((TCANSignal* const)&mainState_chargerConnected_VMU_MainState_2, FCAN.FData);}
  SET(mainState_chargerConnected) { com.set_can_signal_value((TCANSignal* const)&mainState_chargerConnected_VMU_MainState_2, FCAN.FData, value);}
  PROPERTY(double, mainState_emergencyStop);
  GET(mainState_emergencyStop) { return com.get_can_signal_value((TCANSignal* const)&mainState_emergencyStop_VMU_MainState_2, FCAN.FData);}
  SET(mainState_emergencyStop) { com.set_can_signal_value((TCANSignal* const)&mainState_emergencyStop_VMU_MainState_2, FCAN.FData, value);}
  PROPERTY(double, mainState_bmsStatus);
  GET(mainState_bmsStatus) { return com.get_can_signal_value((TCANSignal* const)&mainState_bmsStatus_VMU_MainState_2, FCAN.FData);}
  SET(mainState_bmsStatus) { com.set_can_signal_value((TCANSignal* const)&mainState_bmsStatus_VMU_MainState_2, FCAN.FData, value);}
  PROPERTY(double, mainState_voltage24);
  GET(mainState_voltage24) { return com.get_can_signal_value((TCANSignal* const)&mainState_voltage24_VMU_MainState_2, FCAN.FData);}
  SET(mainState_voltage24) { com.set_can_signal_value((TCANSignal* const)&mainState_voltage24_VMU_MainState_2, FCAN.FData, value);}
  PROPERTY(double, mainState_workMode);
  GET(mainState_workMode) { return com.get_can_signal_value((TCANSignal* const)&mainState_workMode_VMU_MainState_2, FCAN.FData);}
  SET(mainState_workMode) { com.set_can_signal_value((TCANSignal* const)&mainState_workMode_VMU_MainState_2, FCAN.FData, value);}
  PROPERTY(double, mainState_warningCount);
  GET(mainState_warningCount) { return com.get_can_signal_value((TCANSignal* const)&mainState_warningCount_VMU_MainState_2, FCAN.FData);}
  SET(mainState_warningCount) { com.set_can_signal_value((TCANSignal* const)&mainState_warningCount_VMU_MainState_2, FCAN.FData, value);}
  PROPERTY(double, mainState_criticalCount);
  GET(mainState_criticalCount) { return com.get_can_signal_value((TCANSignal* const)&mainState_criticalCount_VMU_MainState_2, FCAN.FData);}
  SET(mainState_criticalCount) { com.set_can_signal_value((TCANSignal* const)&mainState_criticalCount_VMU_MainState_2, FCAN.FData, value);}
  PROPERTY(double, mainState_errorCode);
  GET(mainState_errorCode) { return com.get_can_signal_value((TCANSignal* const)&mainState_errorCode_VMU_MainState_2, FCAN.FData);}
  SET(mainState_errorCode) { com.set_can_signal_value((TCANSignal* const)&mainState_errorCode_VMU_MainState_2, FCAN.FData, value);}
  void init() { FCAN = create().FCAN; }
  TVMU_MainState_2 create() { CANMsgDecl(_VMU_MainState_2, cVMU_MainState_2, 1, 4, 8, 150950305) return cVMU_MainState_2; }
  void set_data(const PCAN ACAN) { FCAN = *ACAN; }
};

// CAN Message EVP100_Heartbeat_1
extern const TCANSignal State_EVP100_Heartbeat_1;
extern const TCANSignal Toggle_EVP100_Heartbeat_1;
struct _EVP100_Heartbeat_1;
typedef struct _EVP100_Heartbeat_1 TEVP100_Heartbeat_1;
struct _EVP100_Heartbeat_1{
  TCAN FCAN;
  PROPERTY(double, State);
  GET(State) { return com.get_can_signal_value((TCANSignal* const)&State_EVP100_Heartbeat_1, FCAN.FData);}
  SET(State) { com.set_can_signal_value((TCANSignal* const)&State_EVP100_Heartbeat_1, FCAN.FData, value);}
  PROPERTY(double, Toggle);
  GET(Toggle) { return com.get_can_signal_value((TCANSignal* const)&Toggle_EVP100_Heartbeat_1, FCAN.FData);}
  SET(Toggle) { com.set_can_signal_value((TCANSignal* const)&Toggle_EVP100_Heartbeat_1, FCAN.FData, value);}
  void init() { FCAN = create().FCAN; }
  TEVP100_Heartbeat_1 create() { CANMsgDecl(_EVP100_Heartbeat_1, cEVP100_Heartbeat_1, 0, 0, 1, 1793) return cEVP100_Heartbeat_1; }
  void set_data(const PCAN ACAN) { FCAN = *ACAN; }
};

// CAN Message VMU_RefTorque_1
extern const TCANSignal VMU_RefTorque_cmd_VMU_RefTorque_1;
extern const TCANSignal VMU_RefTorque_16bit_VMU_RefTorque_1;
extern const TCANSignal VMU_RefFluxCurrent_VMU_RefTorque_1;
extern const TCANSignal VMU_RefElectricAngleOffset_VMU_RefTorque_1;
struct _VMU_RefTorque_1;
typedef struct _VMU_RefTorque_1 TVMU_RefTorque_1;
struct _VMU_RefTorque_1{
  TCAN FCAN;
  PROPERTY(double, VMU_RefTorque_cmd);
  GET(VMU_RefTorque_cmd) { return com.get_can_signal_value((TCANSignal* const)&VMU_RefTorque_cmd_VMU_RefTorque_1, FCAN.FData);}
  SET(VMU_RefTorque_cmd) { com.set_can_signal_value((TCANSignal* const)&VMU_RefTorque_cmd_VMU_RefTorque_1, FCAN.FData, value);}
  PROPERTY(double, VMU_RefTorque_16bit);
  GET(VMU_RefTorque_16bit) { return com.get_can_signal_value((TCANSignal* const)&VMU_RefTorque_16bit_VMU_RefTorque_1, FCAN.FData);}
  SET(VMU_RefTorque_16bit) { com.set_can_signal_value((TCANSignal* const)&VMU_RefTorque_16bit_VMU_RefTorque_1, FCAN.FData, value);}
  PROPERTY(double, VMU_RefFluxCurrent);
  GET(VMU_RefFluxCurrent) { return com.get_can_signal_value((TCANSignal* const)&VMU_RefFluxCurrent_VMU_RefTorque_1, FCAN.FData);}
  SET(VMU_RefFluxCurrent) { com.set_can_signal_value((TCANSignal* const)&VMU_RefFluxCurrent_VMU_RefTorque_1, FCAN.FData, value);}
  PROPERTY(double, VMU_RefElectricAngleOffset);
  GET(VMU_RefElectricAngleOffset) { return com.get_can_signal_value((TCANSignal* const)&VMU_RefElectricAngleOffset_VMU_RefTorque_1, FCAN.FData);}
  SET(VMU_RefElectricAngleOffset) { com.set_can_signal_value((TCANSignal* const)&VMU_RefElectricAngleOffset_VMU_RefTorque_1, FCAN.FData, value);}
  void init() { FCAN = create().FCAN; }
  TVMU_RefTorque_1 create() { CANMsgDecl(_VMU_RefTorque_1, cVMU_RefTorque_1, 0, 0, 8, 660) return cVMU_RefTorque_1; }
  void set_data(const PCAN ACAN) { FCAN = *ACAN; }
};

// CAN Message EVP100_Errors_1
extern const TCANSignal Error_DC_UNDERVOLTAGE_EVP100_Errors_1;
extern const TCANSignal Error_DC_OVERVOLTAGE_EVP100_Errors_1;
extern const TCANSignal Error_PHASE_OVERCURRENT_EVP100_Errors_1;
extern const TCANSignal Error_FIELD_OVERCURRENT_EVP100_Errors_1;
extern const TCANSignal Error_DC_OVERCURRENT_EVP100_Errors_1;
extern const TCANSignal Error_DRIVER_3PH_FLT_EVP100_Errors_1;
extern const TCANSignal Error_DRIVER_1PH_FLT_EVP100_Errors_1;
extern const TCANSignal Error_JUNCTION_OVERTEMP_EVP100_Errors_1;
extern const TCANSignal Error_CASE_AIR_OVERTEMP_EVP100_Errors_1;
extern const TCANSignal Error_STATOR_OVERTEMP_EVP100_Errors_1;
extern const TCANSignal Error_FIELD_WINDING_OVERTEMP_EVP100_Errors_1;
extern const TCANSignal Error_CONNECTION_LOST_EVP100_Errors_1;
extern const TCANSignal Error_CAN_BUS_ERROR_EVP100_Errors_1;
extern const TCANSignal Error_RUNTIME_ERRROR_EVP100_Errors_1;
extern const TCANSignal Error_EEPROM_ERROR_EVP100_Errors_1;
extern const TCANSignal Error_PHASE_CURRENT_SENSOR_FAULT_EVP100_Errors_1;
extern const TCANSignal Error_FIELD_CURRENT_SENSOR_FAULT_EVP100_Errors_1;
extern const TCANSignal Error_DC_CURRENT_SENSOR_FAULT_EVP100_Errors_1;
extern const TCANSignal Error_EMERGENCY_STOP_EVP100_Errors_1;
extern const TCANSignal Error_DCLINK_CHARGE_FAILURE_EVP100_Errors_1;
extern const TCANSignal Error_POSSENS_CALIBRATION_FAULT_EVP100_Errors_1;
extern const TCANSignal Error_MOTOR_TEMP_SENSOR_FAULT_EVP100_Errors_1;
extern const TCANSignal Error_POWER_CONTACTOR_OPENING_EVP100_Errors_1;
extern const TCANSignal Warning_DCLINK_DISCONNECTED_EVP100_Errors_1;
extern const TCANSignal Warning_DCLINK_CHARGING_EVP100_Errors_1;
extern const TCANSignal Warning_DCLINK_HV_OPEN_CONTACTOR_EVP100_Errors_1;
extern const TCANSignal Warning_CAN_BUS_WARNING_EVP100_Errors_1;
extern const TCANSignal Warning_JUNCTION_OVERHEATING_EVP100_Errors_1;
extern const TCANSignal Warning_CASE_OVERHEATING_EVP100_Errors_1;
extern const TCANSignal Warning_STATOR_OVERHEATING_EVP100_Errors_1;
extern const TCANSignal Warning_FIELD_WINDING_OVERHEAT_EVP100_Errors_1;
extern const TCANSignal Warning_FLUX_WEAKENING_EVP100_Errors_1;
struct _EVP100_Errors_1;
typedef struct _EVP100_Errors_1 TEVP100_Errors_1;
struct _EVP100_Errors_1{
  TCAN FCAN;
  PROPERTY(double, Error_DC_UNDERVOLTAGE);
  GET(Error_DC_UNDERVOLTAGE) { return com.get_can_signal_value((TCANSignal* const)&Error_DC_UNDERVOLTAGE_EVP100_Errors_1, FCAN.FData);}
  SET(Error_DC_UNDERVOLTAGE) { com.set_can_signal_value((TCANSignal* const)&Error_DC_UNDERVOLTAGE_EVP100_Errors_1, FCAN.FData, value);}
  PROPERTY(double, Error_DC_OVERVOLTAGE);
  GET(Error_DC_OVERVOLTAGE) { return com.get_can_signal_value((TCANSignal* const)&Error_DC_OVERVOLTAGE_EVP100_Errors_1, FCAN.FData);}
  SET(Error_DC_OVERVOLTAGE) { com.set_can_signal_value((TCANSignal* const)&Error_DC_OVERVOLTAGE_EVP100_Errors_1, FCAN.FData, value);}
  PROPERTY(double, Error_PHASE_OVERCURRENT);
  GET(Error_PHASE_OVERCURRENT) { return com.get_can_signal_value((TCANSignal* const)&Error_PHASE_OVERCURRENT_EVP100_Errors_1, FCAN.FData);}
  SET(Error_PHASE_OVERCURRENT) { com.set_can_signal_value((TCANSignal* const)&Error_PHASE_OVERCURRENT_EVP100_Errors_1, FCAN.FData, value);}
  PROPERTY(double, Error_FIELD_OVERCURRENT);
  GET(Error_FIELD_OVERCURRENT) { return com.get_can_signal_value((TCANSignal* const)&Error_FIELD_OVERCURRENT_EVP100_Errors_1, FCAN.FData);}
  SET(Error_FIELD_OVERCURRENT) { com.set_can_signal_value((TCANSignal* const)&Error_FIELD_OVERCURRENT_EVP100_Errors_1, FCAN.FData, value);}
  PROPERTY(double, Error_DC_OVERCURRENT);
  GET(Error_DC_OVERCURRENT) { return com.get_can_signal_value((TCANSignal* const)&Error_DC_OVERCURRENT_EVP100_Errors_1, FCAN.FData);}
  SET(Error_DC_OVERCURRENT) { com.set_can_signal_value((TCANSignal* const)&Error_DC_OVERCURRENT_EVP100_Errors_1, FCAN.FData, value);}
  PROPERTY(double, Error_DRIVER_3PH_FLT);
  GET(Error_DRIVER_3PH_FLT) { return com.get_can_signal_value((TCANSignal* const)&Error_DRIVER_3PH_FLT_EVP100_Errors_1, FCAN.FData);}
  SET(Error_DRIVER_3PH_FLT) { com.set_can_signal_value((TCANSignal* const)&Error_DRIVER_3PH_FLT_EVP100_Errors_1, FCAN.FData, value);}
  PROPERTY(double, Error_DRIVER_1PH_FLT);
  GET(Error_DRIVER_1PH_FLT) { return com.get_can_signal_value((TCANSignal* const)&Error_DRIVER_1PH_FLT_EVP100_Errors_1, FCAN.FData);}
  SET(Error_DRIVER_1PH_FLT) { com.set_can_signal_value((TCANSignal* const)&Error_DRIVER_1PH_FLT_EVP100_Errors_1, FCAN.FData, value);}
  PROPERTY(double, Error_JUNCTION_OVERTEMP);
  GET(Error_JUNCTION_OVERTEMP) { return com.get_can_signal_value((TCANSignal* const)&Error_JUNCTION_OVERTEMP_EVP100_Errors_1, FCAN.FData);}
  SET(Error_JUNCTION_OVERTEMP) { com.set_can_signal_value((TCANSignal* const)&Error_JUNCTION_OVERTEMP_EVP100_Errors_1, FCAN.FData, value);}
  PROPERTY(double, Error_CASE_AIR_OVERTEMP);
  GET(Error_CASE_AIR_OVERTEMP) { return com.get_can_signal_value((TCANSignal* const)&Error_CASE_AIR_OVERTEMP_EVP100_Errors_1, FCAN.FData);}
  SET(Error_CASE_AIR_OVERTEMP) { com.set_can_signal_value((TCANSignal* const)&Error_CASE_AIR_OVERTEMP_EVP100_Errors_1, FCAN.FData, value);}
  PROPERTY(double, Error_STATOR_OVERTEMP);
  GET(Error_STATOR_OVERTEMP) { return com.get_can_signal_value((TCANSignal* const)&Error_STATOR_OVERTEMP_EVP100_Errors_1, FCAN.FData);}
  SET(Error_STATOR_OVERTEMP) { com.set_can_signal_value((TCANSignal* const)&Error_STATOR_OVERTEMP_EVP100_Errors_1, FCAN.FData, value);}
  PROPERTY(double, Error_FIELD_WINDING_OVERTEMP);
  GET(Error_FIELD_WINDING_OVERTEMP) { return com.get_can_signal_value((TCANSignal* const)&Error_FIELD_WINDING_OVERTEMP_EVP100_Errors_1, FCAN.FData);}
  SET(Error_FIELD_WINDING_OVERTEMP) { com.set_can_signal_value((TCANSignal* const)&Error_FIELD_WINDING_OVERTEMP_EVP100_Errors_1, FCAN.FData, value);}
  PROPERTY(double, Error_CONNECTION_LOST);
  GET(Error_CONNECTION_LOST) { return com.get_can_signal_value((TCANSignal* const)&Error_CONNECTION_LOST_EVP100_Errors_1, FCAN.FData);}
  SET(Error_CONNECTION_LOST) { com.set_can_signal_value((TCANSignal* const)&Error_CONNECTION_LOST_EVP100_Errors_1, FCAN.FData, value);}
  PROPERTY(double, Error_CAN_BUS_ERROR);
  GET(Error_CAN_BUS_ERROR) { return com.get_can_signal_value((TCANSignal* const)&Error_CAN_BUS_ERROR_EVP100_Errors_1, FCAN.FData);}
  SET(Error_CAN_BUS_ERROR) { com.set_can_signal_value((TCANSignal* const)&Error_CAN_BUS_ERROR_EVP100_Errors_1, FCAN.FData, value);}
  PROPERTY(double, Error_RUNTIME_ERRROR);
  GET(Error_RUNTIME_ERRROR) { return com.get_can_signal_value((TCANSignal* const)&Error_RUNTIME_ERRROR_EVP100_Errors_1, FCAN.FData);}
  SET(Error_RUNTIME_ERRROR) { com.set_can_signal_value((TCANSignal* const)&Error_RUNTIME_ERRROR_EVP100_Errors_1, FCAN.FData, value);}
  PROPERTY(double, Error_EEPROM_ERROR);
  GET(Error_EEPROM_ERROR) { return com.get_can_signal_value((TCANSignal* const)&Error_EEPROM_ERROR_EVP100_Errors_1, FCAN.FData);}
  SET(Error_EEPROM_ERROR) { com.set_can_signal_value((TCANSignal* const)&Error_EEPROM_ERROR_EVP100_Errors_1, FCAN.FData, value);}
  PROPERTY(double, Error_PHASE_CURRENT_SENSOR_FAULT);
  GET(Error_PHASE_CURRENT_SENSOR_FAULT) { return com.get_can_signal_value((TCANSignal* const)&Error_PHASE_CURRENT_SENSOR_FAULT_EVP100_Errors_1, FCAN.FData);}
  SET(Error_PHASE_CURRENT_SENSOR_FAULT) { com.set_can_signal_value((TCANSignal* const)&Error_PHASE_CURRENT_SENSOR_FAULT_EVP100_Errors_1, FCAN.FData, value);}
  PROPERTY(double, Error_FIELD_CURRENT_SENSOR_FAULT);
  GET(Error_FIELD_CURRENT_SENSOR_FAULT) { return com.get_can_signal_value((TCANSignal* const)&Error_FIELD_CURRENT_SENSOR_FAULT_EVP100_Errors_1, FCAN.FData);}
  SET(Error_FIELD_CURRENT_SENSOR_FAULT) { com.set_can_signal_value((TCANSignal* const)&Error_FIELD_CURRENT_SENSOR_FAULT_EVP100_Errors_1, FCAN.FData, value);}
  PROPERTY(double, Error_DC_CURRENT_SENSOR_FAULT);
  GET(Error_DC_CURRENT_SENSOR_FAULT) { return com.get_can_signal_value((TCANSignal* const)&Error_DC_CURRENT_SENSOR_FAULT_EVP100_Errors_1, FCAN.FData);}
  SET(Error_DC_CURRENT_SENSOR_FAULT) { com.set_can_signal_value((TCANSignal* const)&Error_DC_CURRENT_SENSOR_FAULT_EVP100_Errors_1, FCAN.FData, value);}
  PROPERTY(double, Error_EMERGENCY_STOP);
  GET(Error_EMERGENCY_STOP) { return com.get_can_signal_value((TCANSignal* const)&Error_EMERGENCY_STOP_EVP100_Errors_1, FCAN.FData);}
  SET(Error_EMERGENCY_STOP) { com.set_can_signal_value((TCANSignal* const)&Error_EMERGENCY_STOP_EVP100_Errors_1, FCAN.FData, value);}
  PROPERTY(double, Error_DCLINK_CHARGE_FAILURE);
  GET(Error_DCLINK_CHARGE_FAILURE) { return com.get_can_signal_value((TCANSignal* const)&Error_DCLINK_CHARGE_FAILURE_EVP100_Errors_1, FCAN.FData);}
  SET(Error_DCLINK_CHARGE_FAILURE) { com.set_can_signal_value((TCANSignal* const)&Error_DCLINK_CHARGE_FAILURE_EVP100_Errors_1, FCAN.FData, value);}
  PROPERTY(double, Error_POSSENS_CALIBRATION_FAULT);
  GET(Error_POSSENS_CALIBRATION_FAULT) { return com.get_can_signal_value((TCANSignal* const)&Error_POSSENS_CALIBRATION_FAULT_EVP100_Errors_1, FCAN.FData);}
  SET(Error_POSSENS_CALIBRATION_FAULT) { com.set_can_signal_value((TCANSignal* const)&Error_POSSENS_CALIBRATION_FAULT_EVP100_Errors_1, FCAN.FData, value);}
  PROPERTY(double, Error_MOTOR_TEMP_SENSOR_FAULT);
  GET(Error_MOTOR_TEMP_SENSOR_FAULT) { return com.get_can_signal_value((TCANSignal* const)&Error_MOTOR_TEMP_SENSOR_FAULT_EVP100_Errors_1, FCAN.FData);}
  SET(Error_MOTOR_TEMP_SENSOR_FAULT) { com.set_can_signal_value((TCANSignal* const)&Error_MOTOR_TEMP_SENSOR_FAULT_EVP100_Errors_1, FCAN.FData, value);}
  PROPERTY(double, Error_POWER_CONTACTOR_OPENING);
  GET(Error_POWER_CONTACTOR_OPENING) { return com.get_can_signal_value((TCANSignal* const)&Error_POWER_CONTACTOR_OPENING_EVP100_Errors_1, FCAN.FData);}
  SET(Error_POWER_CONTACTOR_OPENING) { com.set_can_signal_value((TCANSignal* const)&Error_POWER_CONTACTOR_OPENING_EVP100_Errors_1, FCAN.FData, value);}
  PROPERTY(double, Warning_DCLINK_DISCONNECTED);
  GET(Warning_DCLINK_DISCONNECTED) { return com.get_can_signal_value((TCANSignal* const)&Warning_DCLINK_DISCONNECTED_EVP100_Errors_1, FCAN.FData);}
  SET(Warning_DCLINK_DISCONNECTED) { com.set_can_signal_value((TCANSignal* const)&Warning_DCLINK_DISCONNECTED_EVP100_Errors_1, FCAN.FData, value);}
  PROPERTY(double, Warning_DCLINK_CHARGING);
  GET(Warning_DCLINK_CHARGING) { return com.get_can_signal_value((TCANSignal* const)&Warning_DCLINK_CHARGING_EVP100_Errors_1, FCAN.FData);}
  SET(Warning_DCLINK_CHARGING) { com.set_can_signal_value((TCANSignal* const)&Warning_DCLINK_CHARGING_EVP100_Errors_1, FCAN.FData, value);}
  PROPERTY(double, Warning_DCLINK_HV_OPEN_CONTACTOR);
  GET(Warning_DCLINK_HV_OPEN_CONTACTOR) { return com.get_can_signal_value((TCANSignal* const)&Warning_DCLINK_HV_OPEN_CONTACTOR_EVP100_Errors_1, FCAN.FData);}
  SET(Warning_DCLINK_HV_OPEN_CONTACTOR) { com.set_can_signal_value((TCANSignal* const)&Warning_DCLINK_HV_OPEN_CONTACTOR_EVP100_Errors_1, FCAN.FData, value);}
  PROPERTY(double, Warning_CAN_BUS_WARNING);
  GET(Warning_CAN_BUS_WARNING) { return com.get_can_signal_value((TCANSignal* const)&Warning_CAN_BUS_WARNING_EVP100_Errors_1, FCAN.FData);}
  SET(Warning_CAN_BUS_WARNING) { com.set_can_signal_value((TCANSignal* const)&Warning_CAN_BUS_WARNING_EVP100_Errors_1, FCAN.FData, value);}
  PROPERTY(double, Warning_JUNCTION_OVERHEATING);
  GET(Warning_JUNCTION_OVERHEATING) { return com.get_can_signal_value((TCANSignal* const)&Warning_JUNCTION_OVERHEATING_EVP100_Errors_1, FCAN.FData);}
  SET(Warning_JUNCTION_OVERHEATING) { com.set_can_signal_value((TCANSignal* const)&Warning_JUNCTION_OVERHEATING_EVP100_Errors_1, FCAN.FData, value);}
  PROPERTY(double, Warning_CASE_OVERHEATING);
  GET(Warning_CASE_OVERHEATING) { return com.get_can_signal_value((TCANSignal* const)&Warning_CASE_OVERHEATING_EVP100_Errors_1, FCAN.FData);}
  SET(Warning_CASE_OVERHEATING) { com.set_can_signal_value((TCANSignal* const)&Warning_CASE_OVERHEATING_EVP100_Errors_1, FCAN.FData, value);}
  PROPERTY(double, Warning_STATOR_OVERHEATING);
  GET(Warning_STATOR_OVERHEATING) { return com.get_can_signal_value((TCANSignal* const)&Warning_STATOR_OVERHEATING_EVP100_Errors_1, FCAN.FData);}
  SET(Warning_STATOR_OVERHEATING) { com.set_can_signal_value((TCANSignal* const)&Warning_STATOR_OVERHEATING_EVP100_Errors_1, FCAN.FData, value);}
  PROPERTY(double, Warning_FIELD_WINDING_OVERHEAT);
  GET(Warning_FIELD_WINDING_OVERHEAT) { return com.get_can_signal_value((TCANSignal* const)&Warning_FIELD_WINDING_OVERHEAT_EVP100_Errors_1, FCAN.FData);}
  SET(Warning_FIELD_WINDING_OVERHEAT) { com.set_can_signal_value((TCANSignal* const)&Warning_FIELD_WINDING_OVERHEAT_EVP100_Errors_1, FCAN.FData, value);}
  PROPERTY(double, Warning_FLUX_WEAKENING);
  GET(Warning_FLUX_WEAKENING) { return com.get_can_signal_value((TCANSignal* const)&Warning_FLUX_WEAKENING_EVP100_Errors_1, FCAN.FData);}
  SET(Warning_FLUX_WEAKENING) { com.set_can_signal_value((TCANSignal* const)&Warning_FLUX_WEAKENING_EVP100_Errors_1, FCAN.FData, value);}
  void init() { FCAN = create().FCAN; }
  TEVP100_Errors_1 create() { CANMsgDecl(_EVP100_Errors_1, cEVP100_Errors_1, 0, 0, 8, 1153) return cEVP100_Errors_1; }
  void set_data(const PCAN ACAN) { FCAN = *ACAN; }
};

// CAN Message EVP100_HighVoltage_1
extern const TCANSignal EVP100_HighToCase_Voltage_EVP100_HighVoltage_1;
extern const TCANSignal EVP100_LowToCase_Voltage_EVP100_HighVoltage_1;
extern const TCANSignal EVP100_WireIsolationStatus_EVP100_HighVoltage_1;
extern const TCANSignal EVP100_highVoltageCurrent_EVP100_HighVoltage_1;
struct _EVP100_HighVoltage_1;
typedef struct _EVP100_HighVoltage_1 TEVP100_HighVoltage_1;
struct _EVP100_HighVoltage_1{
  TCAN FCAN;
  PROPERTY(double, EVP100_HighToCase_Voltage);
  GET(EVP100_HighToCase_Voltage) { return com.get_can_signal_value((TCANSignal* const)&EVP100_HighToCase_Voltage_EVP100_HighVoltage_1, FCAN.FData);}
  SET(EVP100_HighToCase_Voltage) { com.set_can_signal_value((TCANSignal* const)&EVP100_HighToCase_Voltage_EVP100_HighVoltage_1, FCAN.FData, value);}
  PROPERTY(double, EVP100_LowToCase_Voltage);
  GET(EVP100_LowToCase_Voltage) { return com.get_can_signal_value((TCANSignal* const)&EVP100_LowToCase_Voltage_EVP100_HighVoltage_1, FCAN.FData);}
  SET(EVP100_LowToCase_Voltage) { com.set_can_signal_value((TCANSignal* const)&EVP100_LowToCase_Voltage_EVP100_HighVoltage_1, FCAN.FData, value);}
  PROPERTY(double, EVP100_WireIsolationStatus);
  GET(EVP100_WireIsolationStatus) { return com.get_can_signal_value((TCANSignal* const)&EVP100_WireIsolationStatus_EVP100_HighVoltage_1, FCAN.FData);}
  SET(EVP100_WireIsolationStatus) { com.set_can_signal_value((TCANSignal* const)&EVP100_WireIsolationStatus_EVP100_HighVoltage_1, FCAN.FData, value);}
  PROPERTY(double, EVP100_highVoltageCurrent);
  GET(EVP100_highVoltageCurrent) { return com.get_can_signal_value((TCANSignal* const)&EVP100_highVoltageCurrent_EVP100_HighVoltage_1, FCAN.FData);}
  SET(EVP100_highVoltageCurrent) { com.set_can_signal_value((TCANSignal* const)&EVP100_highVoltageCurrent_EVP100_HighVoltage_1, FCAN.FData, value);}
  void init() { FCAN = create().FCAN; }
  TEVP100_HighVoltage_1 create() { CANMsgDecl(_EVP100_HighVoltage_1, cEVP100_HighVoltage_1, 0, 0, 8, 897) return cEVP100_HighVoltage_1; }
  void set_data(const PCAN ACAN) { FCAN = *ACAN; }
};

// CAN Message EVP100_Temp_1
extern const TCANSignal EVP100_motorTemp_EVP100_Temp_1;
extern const TCANSignal EVP100_invertorTemp_EVP100_Temp_1;
extern const TCANSignal EVP100_InvertorVoltage_EVP100_Temp_1;
extern const TCANSignal EVP100_modelHeat_EVP100_Temp_1;
extern const TCANSignal EVP100_OverheatTorqueLimited_EVP100_Temp_1;
extern const TCANSignal EVP100_FluxCoilTemp_EVP100_Temp_1;
extern const TCANSignal EVP100_coolerTemp_EVP100_Temp_1;
extern const TCANSignal EVP100_internalTemp_EVP100_Temp_1;
struct _EVP100_Temp_1;
typedef struct _EVP100_Temp_1 TEVP100_Temp_1;
struct _EVP100_Temp_1{
  TCAN FCAN;
  PROPERTY(double, EVP100_motorTemp);
  GET(EVP100_motorTemp) { return com.get_can_signal_value((TCANSignal* const)&EVP100_motorTemp_EVP100_Temp_1, FCAN.FData);}
  SET(EVP100_motorTemp) { com.set_can_signal_value((TCANSignal* const)&EVP100_motorTemp_EVP100_Temp_1, FCAN.FData, value);}
  PROPERTY(double, EVP100_invertorTemp);
  GET(EVP100_invertorTemp) { return com.get_can_signal_value((TCANSignal* const)&EVP100_invertorTemp_EVP100_Temp_1, FCAN.FData);}
  SET(EVP100_invertorTemp) { com.set_can_signal_value((TCANSignal* const)&EVP100_invertorTemp_EVP100_Temp_1, FCAN.FData, value);}
  PROPERTY(double, EVP100_InvertorVoltage);
  GET(EVP100_InvertorVoltage) { return com.get_can_signal_value((TCANSignal* const)&EVP100_InvertorVoltage_EVP100_Temp_1, FCAN.FData);}
  SET(EVP100_InvertorVoltage) { com.set_can_signal_value((TCANSignal* const)&EVP100_InvertorVoltage_EVP100_Temp_1, FCAN.FData, value);}
  PROPERTY(double, EVP100_modelHeat);
  GET(EVP100_modelHeat) { return com.get_can_signal_value((TCANSignal* const)&EVP100_modelHeat_EVP100_Temp_1, FCAN.FData);}
  SET(EVP100_modelHeat) { com.set_can_signal_value((TCANSignal* const)&EVP100_modelHeat_EVP100_Temp_1, FCAN.FData, value);}
  PROPERTY(double, EVP100_OverheatTorqueLimited);
  GET(EVP100_OverheatTorqueLimited) { return com.get_can_signal_value((TCANSignal* const)&EVP100_OverheatTorqueLimited_EVP100_Temp_1, FCAN.FData);}
  SET(EVP100_OverheatTorqueLimited) { com.set_can_signal_value((TCANSignal* const)&EVP100_OverheatTorqueLimited_EVP100_Temp_1, FCAN.FData, value);}
  PROPERTY(double, EVP100_FluxCoilTemp);
  GET(EVP100_FluxCoilTemp) { return com.get_can_signal_value((TCANSignal* const)&EVP100_FluxCoilTemp_EVP100_Temp_1, FCAN.FData);}
  SET(EVP100_FluxCoilTemp) { com.set_can_signal_value((TCANSignal* const)&EVP100_FluxCoilTemp_EVP100_Temp_1, FCAN.FData, value);}
  PROPERTY(double, EVP100_coolerTemp);
  GET(EVP100_coolerTemp) { return com.get_can_signal_value((TCANSignal* const)&EVP100_coolerTemp_EVP100_Temp_1, FCAN.FData);}
  SET(EVP100_coolerTemp) { com.set_can_signal_value((TCANSignal* const)&EVP100_coolerTemp_EVP100_Temp_1, FCAN.FData, value);}
  PROPERTY(double, EVP100_internalTemp);
  GET(EVP100_internalTemp) { return com.get_can_signal_value((TCANSignal* const)&EVP100_internalTemp_EVP100_Temp_1, FCAN.FData);}
  SET(EVP100_internalTemp) { com.set_can_signal_value((TCANSignal* const)&EVP100_internalTemp_EVP100_Temp_1, FCAN.FData, value);}
  void init() { FCAN = create().FCAN; }
  TEVP100_Temp_1 create() { CANMsgDecl(_EVP100_Temp_1, cEVP100_Temp_1, 0, 0, 8, 641) return cEVP100_Temp_1; }
  void set_data(const PCAN ACAN) { FCAN = *ACAN; }
};

// CAN Message EVP100_Status1_1
extern const TCANSignal EVP100_ReadyFlag_EVP100_Status1_1;
extern const TCANSignal EVP100_ErrorFlag_EVP100_Status1_1;
extern const TCANSignal EVP100_WarningFlag_EVP100_Status1_1;
extern const TCANSignal EVP100_OverheatFlag_EVP100_Status1_1;
extern const TCANSignal EVP100_CurTorque_EVP100_Status1_1;
extern const TCANSignal EVP100_curRpm_EVP100_Status1_1;
extern const TCANSignal EVP100_curCurrent_EVP100_Status1_1;
extern const TCANSignal EVP100_curPower_EVP100_Status1_1;
extern const TCANSignal EVP100_curHighVoltage_EVP100_Status1_1;
extern const TCANSignal EVP100_curFluxCurrent_EVP100_Status1_1;
struct _EVP100_Status1_1;
typedef struct _EVP100_Status1_1 TEVP100_Status1_1;
struct _EVP100_Status1_1{
  TCAN FCAN;
  PROPERTY(double, EVP100_ReadyFlag);
  GET(EVP100_ReadyFlag) { return com.get_can_signal_value((TCANSignal* const)&EVP100_ReadyFlag_EVP100_Status1_1, FCAN.FData);}
  SET(EVP100_ReadyFlag) { com.set_can_signal_value((TCANSignal* const)&EVP100_ReadyFlag_EVP100_Status1_1, FCAN.FData, value);}
  PROPERTY(double, EVP100_ErrorFlag);
  GET(EVP100_ErrorFlag) { return com.get_can_signal_value((TCANSignal* const)&EVP100_ErrorFlag_EVP100_Status1_1, FCAN.FData);}
  SET(EVP100_ErrorFlag) { com.set_can_signal_value((TCANSignal* const)&EVP100_ErrorFlag_EVP100_Status1_1, FCAN.FData, value);}
  PROPERTY(double, EVP100_WarningFlag);
  GET(EVP100_WarningFlag) { return com.get_can_signal_value((TCANSignal* const)&EVP100_WarningFlag_EVP100_Status1_1, FCAN.FData);}
  SET(EVP100_WarningFlag) { com.set_can_signal_value((TCANSignal* const)&EVP100_WarningFlag_EVP100_Status1_1, FCAN.FData, value);}
  PROPERTY(double, EVP100_OverheatFlag);
  GET(EVP100_OverheatFlag) { return com.get_can_signal_value((TCANSignal* const)&EVP100_OverheatFlag_EVP100_Status1_1, FCAN.FData);}
  SET(EVP100_OverheatFlag) { com.set_can_signal_value((TCANSignal* const)&EVP100_OverheatFlag_EVP100_Status1_1, FCAN.FData, value);}
  PROPERTY(double, EVP100_CurTorque);
  GET(EVP100_CurTorque) { return com.get_can_signal_value((TCANSignal* const)&EVP100_CurTorque_EVP100_Status1_1, FCAN.FData);}
  SET(EVP100_CurTorque) { com.set_can_signal_value((TCANSignal* const)&EVP100_CurTorque_EVP100_Status1_1, FCAN.FData, value);}
  PROPERTY(double, EVP100_curRpm);
  GET(EVP100_curRpm) { return com.get_can_signal_value((TCANSignal* const)&EVP100_curRpm_EVP100_Status1_1, FCAN.FData);}
  SET(EVP100_curRpm) { com.set_can_signal_value((TCANSignal* const)&EVP100_curRpm_EVP100_Status1_1, FCAN.FData, value);}
  PROPERTY(double, EVP100_curCurrent);
  GET(EVP100_curCurrent) { return com.get_can_signal_value((TCANSignal* const)&EVP100_curCurrent_EVP100_Status1_1, FCAN.FData);}
  SET(EVP100_curCurrent) { com.set_can_signal_value((TCANSignal* const)&EVP100_curCurrent_EVP100_Status1_1, FCAN.FData, value);}
  PROPERTY(double, EVP100_curPower);
  GET(EVP100_curPower) { return com.get_can_signal_value((TCANSignal* const)&EVP100_curPower_EVP100_Status1_1, FCAN.FData);}
  SET(EVP100_curPower) { com.set_can_signal_value((TCANSignal* const)&EVP100_curPower_EVP100_Status1_1, FCAN.FData, value);}
  PROPERTY(double, EVP100_curHighVoltage);
  GET(EVP100_curHighVoltage) { return com.get_can_signal_value((TCANSignal* const)&EVP100_curHighVoltage_EVP100_Status1_1, FCAN.FData);}
  SET(EVP100_curHighVoltage) { com.set_can_signal_value((TCANSignal* const)&EVP100_curHighVoltage_EVP100_Status1_1, FCAN.FData, value);}
  PROPERTY(double, EVP100_curFluxCurrent);
  GET(EVP100_curFluxCurrent) { return com.get_can_signal_value((TCANSignal* const)&EVP100_curFluxCurrent_EVP100_Status1_1, FCAN.FData);}
  SET(EVP100_curFluxCurrent) { com.set_can_signal_value((TCANSignal* const)&EVP100_curFluxCurrent_EVP100_Status1_1, FCAN.FData, value);}
  void init() { FCAN = create().FCAN; }
  TEVP100_Status1_1 create() { CANMsgDecl(_EVP100_Status1_1, cEVP100_Status1_1, 0, 0, 8, 385) return cEVP100_Status1_1; }
  void set_data(const PCAN ACAN) { FCAN = *ACAN; }
};

// CAN Message VMU_cmd_flags_1
extern const TCANSignal VMU_Enable_cmd_VMU_cmd_flags_1;
extern const TCANSignal VMU_IsolationControl_VMU_cmd_flags_1;
extern const TCANSignal VMU_MotorRpmLimit_VMU_cmd_flags_1;
extern const TCANSignal VMU_emStop_cmd_VMU_cmd_flags_1;
extern const TCANSignal VMU_brake_cmd_VMU_cmd_flags_1;
extern const TCANSignal VMU_BmsVoltage_VMU_cmd_flags_1;
struct _VMU_cmd_flags_1;
typedef struct _VMU_cmd_flags_1 TVMU_cmd_flags_1;
struct _VMU_cmd_flags_1{
  TCAN FCAN;
  PROPERTY(double, VMU_Enable_cmd);
  GET(VMU_Enable_cmd) { return com.get_can_signal_value((TCANSignal* const)&VMU_Enable_cmd_VMU_cmd_flags_1, FCAN.FData);}
  SET(VMU_Enable_cmd) { com.set_can_signal_value((TCANSignal* const)&VMU_Enable_cmd_VMU_cmd_flags_1, FCAN.FData, value);}
  PROPERTY(double, VMU_IsolationControl);
  GET(VMU_IsolationControl) { return com.get_can_signal_value((TCANSignal* const)&VMU_IsolationControl_VMU_cmd_flags_1, FCAN.FData);}
  SET(VMU_IsolationControl) { com.set_can_signal_value((TCANSignal* const)&VMU_IsolationControl_VMU_cmd_flags_1, FCAN.FData, value);}
  PROPERTY(double, VMU_MotorRpmLimit);
  GET(VMU_MotorRpmLimit) { return com.get_can_signal_value((TCANSignal* const)&VMU_MotorRpmLimit_VMU_cmd_flags_1, FCAN.FData);}
  SET(VMU_MotorRpmLimit) { com.set_can_signal_value((TCANSignal* const)&VMU_MotorRpmLimit_VMU_cmd_flags_1, FCAN.FData, value);}
  PROPERTY(double, VMU_emStop_cmd);
  GET(VMU_emStop_cmd) { return com.get_can_signal_value((TCANSignal* const)&VMU_emStop_cmd_VMU_cmd_flags_1, FCAN.FData);}
  SET(VMU_emStop_cmd) { com.set_can_signal_value((TCANSignal* const)&VMU_emStop_cmd_VMU_cmd_flags_1, FCAN.FData, value);}
  PROPERTY(double, VMU_brake_cmd);
  GET(VMU_brake_cmd) { return com.get_can_signal_value((TCANSignal* const)&VMU_brake_cmd_VMU_cmd_flags_1, FCAN.FData);}
  SET(VMU_brake_cmd) { com.set_can_signal_value((TCANSignal* const)&VMU_brake_cmd_VMU_cmd_flags_1, FCAN.FData, value);}
  PROPERTY(double, VMU_BmsVoltage);
  GET(VMU_BmsVoltage) { return com.get_can_signal_value((TCANSignal* const)&VMU_BmsVoltage_VMU_cmd_flags_1, FCAN.FData);}
  SET(VMU_BmsVoltage) { com.set_can_signal_value((TCANSignal* const)&VMU_BmsVoltage_VMU_cmd_flags_1, FCAN.FData, value);}
  void init() { FCAN = create().FCAN; }
  TVMU_cmd_flags_1 create() { CANMsgDecl(_VMU_cmd_flags_1, cVMU_cmd_flags_1, 0, 0, 8, 404) return cVMU_cmd_flags_1; }
  void set_data(const PCAN ACAN) { FCAN = *ACAN; }
};

// CAN Message SSDO_003_2
extern const TCANSignal cmd_byte_SSDO_003_2;
extern const TCANSignal index_SSDO_003_2;
extern const TCANSignal sub_index_SSDO_003_2;
extern const TCANSignal DATA_SSDO_003_2;
struct _SSDO_003_2;
typedef struct _SSDO_003_2 TSSDO_003_2;
struct _SSDO_003_2{
  TCAN FCAN;
  PROPERTY(double, cmd_byte);
  GET(cmd_byte) { return com.get_can_signal_value((TCANSignal* const)&cmd_byte_SSDO_003_2, FCAN.FData);}
  SET(cmd_byte) { com.set_can_signal_value((TCANSignal* const)&cmd_byte_SSDO_003_2, FCAN.FData, value);}
  PROPERTY(double, index);
  GET(index) { return com.get_can_signal_value((TCANSignal* const)&index_SSDO_003_2, FCAN.FData);}
  SET(index) { com.set_can_signal_value((TCANSignal* const)&index_SSDO_003_2, FCAN.FData, value);}
  PROPERTY(double, sub_index);
  GET(sub_index) { return com.get_can_signal_value((TCANSignal* const)&sub_index_SSDO_003_2, FCAN.FData);}
  SET(sub_index) { com.set_can_signal_value((TCANSignal* const)&sub_index_SSDO_003_2, FCAN.FData, value);}
  PROPERTY(double, DATA);
  GET(DATA) { return com.get_can_signal_value((TCANSignal* const)&DATA_SSDO_003_2, FCAN.FData);}
  SET(DATA) { com.set_can_signal_value((TCANSignal* const)&DATA_SSDO_003_2, FCAN.FData, value);}
  void init() { FCAN = create().FCAN; }
  TSSDO_003_2 create() { CANMsgDecl(_SSDO_003_2, cSSDO_003_2, 1, 0, 8, 1411) return cSSDO_003_2; }
  void set_data(const PCAN ACAN) { FCAN = *ACAN; }
};

// CAN Message CSDO_003_2
extern const TCANSignal cmd_byte_CSDO_003_2;
extern const TCANSignal index_CSDO_003_2;
extern const TCANSignal sub_index_CSDO_003_2;
extern const TCANSignal DATA_CSDO_003_2;
struct _CSDO_003_2;
typedef struct _CSDO_003_2 TCSDO_003_2;
struct _CSDO_003_2{
  TCAN FCAN;
  PROPERTY(double, cmd_byte);
  GET(cmd_byte) { return com.get_can_signal_value((TCANSignal* const)&cmd_byte_CSDO_003_2, FCAN.FData);}
  SET(cmd_byte) { com.set_can_signal_value((TCANSignal* const)&cmd_byte_CSDO_003_2, FCAN.FData, value);}
  PROPERTY(double, index);
  GET(index) { return com.get_can_signal_value((TCANSignal* const)&index_CSDO_003_2, FCAN.FData);}
  SET(index) { com.set_can_signal_value((TCANSignal* const)&index_CSDO_003_2, FCAN.FData, value);}
  PROPERTY(double, sub_index);
  GET(sub_index) { return com.get_can_signal_value((TCANSignal* const)&sub_index_CSDO_003_2, FCAN.FData);}
  SET(sub_index) { com.set_can_signal_value((TCANSignal* const)&sub_index_CSDO_003_2, FCAN.FData, value);}
  PROPERTY(double, DATA);
  GET(DATA) { return com.get_can_signal_value((TCANSignal* const)&DATA_CSDO_003_2, FCAN.FData);}
  SET(DATA) { com.set_can_signal_value((TCANSignal* const)&DATA_CSDO_003_2, FCAN.FData, value);}
  void init() { FCAN = create().FCAN; }
  TCSDO_003_2 create() { CANMsgDecl(_CSDO_003_2, cCSDO_003_2, 1, 0, 8, 1539) return cCSDO_003_2; }
  void set_data(const PCAN ACAN) { FCAN = *ACAN; }
};

// LIN Databases
// FlexRay Databases
#endif
