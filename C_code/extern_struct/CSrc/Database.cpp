﻿#include "Database.h"

// CAN Databases
// CAN Message SteerServoRear_Status
CANSgnDecl(Servo_Status_SteerServoRear_Status_1, 0, true, 0, 4, 1, 0)
CANSgnDecl(Servo_curPos_SteerServoRear_Status_1, 1, true, 8, 16, 1, 0)
CANSgnDecl(Servo_current_SteerServoRear_Status_1, 1, true, 24, 16, 0.01, 0)
CANSgnDecl(Servo_errOpenPhFlt_SteerServoRear_Status_1, 0, true, 40, 1, 1, 0)
CANSgnDecl(Servo_errNoIgnition_SteerServoRear_Status_1, 0, true, 41, 1, 1, 0)
CANSgnDecl(Servo_errPeriodA_OOR_SteerServoRear_Status_1, 0, true, 42, 1, 1, 0)
CANSgnDecl(Servo_errPeriodB_OOR_SteerServoRear_Status_1, 0, true, 43, 1, 1, 0)
CANSgnDecl(Servo_servoTemp_SteerServoRear_Status_1, 0, true, 48, 8, 1, -40)
CANSgnDecl(Servo_errModuleFailure_SteerServoRear_Status_1, 0, true, 56, 1, 1, 0)
CANSgnDecl(Servo_errShortCircuitAtTheOutput_SteerServoRear_Status_1, 0, true, 57, 1, 1, 0)
CANSgnDecl(Servo_errSensorFailure_SteerServoRear_Status_1, 0, true, 58, 1, 1, 0)
CANSgnDecl(Servo_errOverheatPowerRadiator_SteerServoRear_Status_1, 0, true, 59, 1, 1, 0)
CANSgnDecl(Servo_errUdcOvervoltage_SteerServoRear_Status_1, 0, true, 60, 1, 1, 0)
CANSgnDecl(Servo_errUdcUndervoltage_SteerServoRear_Status_1, 0, true, 61, 1, 1, 0)
CANSgnDecl(Servo_errLongTermCurrentOverload_SteerServoRear_Status_1, 0, true, 62, 1, 1, 0)
CANSgnDecl(Servo_errIncorrectPolarityDC_SteerServoRear_Status_1, 0, true, 63, 1, 1, 0)
// CAN Message SteerServoFront_Status
CANSgnDecl(Servo_Status_SteerServoFront_Status_1, 0, true, 0, 4, 1, 0)
CANSgnDecl(Servo_curPos_SteerServoFront_Status_1, 1, true, 8, 16, 1, 0)
CANSgnDecl(Servo_current_SteerServoFront_Status_1, 1, true, 24, 16, 0.01, 0)
CANSgnDecl(Servo_errOpenPhFlt_SteerServoFront_Status_1, 0, true, 40, 1, 1, 0)
CANSgnDecl(Servo_errNoIgnition_SteerServoFront_Status_1, 0, true, 41, 1, 1, 0)
CANSgnDecl(Servo_errPeriodA_OOR_SteerServoFront_Status_1, 0, true, 42, 1, 1, 0)
CANSgnDecl(Servo_errPeriodB_OOR_SteerServoFront_Status_1, 0, true, 43, 1, 1, 0)
CANSgnDecl(Servo_servoTemp_SteerServoFront_Status_1, 0, true, 48, 8, 1, -40)
CANSgnDecl(Servo_errModuleFailure_SteerServoFront_Status_1, 0, true, 56, 1, 1, 0)
CANSgnDecl(Servo_errShortCircuitAtTheOutput_SteerServoFront_Status_1, 0, true, 57, 1, 1, 0)
CANSgnDecl(Servo_errSensorFailure_SteerServoFront_Status_1, 0, true, 58, 1, 1, 0)
CANSgnDecl(Servo_errOverheatPowerRadiator_SteerServoFront_Status_1, 0, true, 59, 1, 1, 0)
CANSgnDecl(Servo_errUdcOvervoltage_SteerServoFront_Status_1, 0, true, 60, 1, 1, 0)
CANSgnDecl(Servo_errUdcUndervoltage_SteerServoFront_Status_1, 0, true, 61, 1, 1, 0)
CANSgnDecl(Servo_errLongTermCurrentOverload_SteerServoFront_Status_1, 0, true, 62, 1, 1, 0)
CANSgnDecl(Servo_errIncorrectPolarityDC_SteerServoFront_Status_1, 0, true, 63, 1, 1, 0)
// CAN Message SteerServo_cmd
CANSgnDecl(ServoFront_Enable_cmd_SteerServo_cmd_1, 0, true, 0, 1, 1, 0)
CANSgnDecl(ServoRear_Enable_cmd_SteerServo_cmd_1, 0, true, 1, 1, 1, 0)
CANSgnDecl(ServoFront_RefPos_cmd_SteerServo_cmd_1, 1, true, 8, 16, 1, 0)
CANSgnDecl(ServoReart_RefPos_cmd_SteerServo_cmd_1, 1, true, 24, 16, 1, 0)
// CAN Message VMU_Heartbeat
CANSgnDecl(State_VMU_Heartbeat_1, 0, true, 0, 7, 1, 0)
CANSgnDecl(Toggle_VMU_Heartbeat_1, 0, true, 7, 1, 1, 0)
// CAN Message BMS_380
CANSgnDecl(bms_err_lowChTempr_BMS_380_2, 0, true, 0, 1, 1, 0)
CANSgnDecl(bms_err_highChTempr_BMS_380_2, 0, true, 1, 1, 1, 0)
CANSgnDecl(bms_err_sdMountError_BMS_380_2, 0, true, 2, 1, 1, 0)
CANSgnDecl(bms_err_sdRWError_BMS_380_2, 0, true, 3, 1, 1, 0)
CANSgnDecl(bms_err_unallowableCharging_BMS_380_2, 0, true, 4, 1, 1, 0)
CANSgnDecl(bms_err_stuckContactor_BMS_380_2, 0, true, 5, 1, 1, 0)
CANSgnDecl(bms_err_CHContactorFeedbackErr_BMS_380_2, 0, true, 6, 1, 1, 0)
CANSgnDecl(bms_err_DCHContactorFeedbackErr_BMS_380_2, 0, true, 7, 1, 1, 0)
// CAN Message BMS_280
CANSgnDecl(bms_flag_lowSOC_BMS_280_2, 0, true, 0, 1, 1, 0)
CANSgnDecl(bms_flag_highChargingCurrent_BMS_280_2, 0, true, 1, 1, 1, 0)
CANSgnDecl(bms_flag_chargingContactor_BMS_280_2, 0, true, 2, 1, 1, 0)
CANSgnDecl(bms_flag_allowCharging_BMS_280_2, 0, true, 3, 1, 1, 0)
CANSgnDecl(bms_flag_chargicgCurPresent_BMS_280_2, 0, true, 4, 1, 1, 0)
CANSgnDecl(bms_flag_dischargingContactor_BMS_280_2, 0, true, 5, 1, 1, 0)
CANSgnDecl(bms_flag_dischargingCurPresent_BMS_280_2, 0, true, 6, 1, 1, 0)
CANSgnDecl(bms_flag_increasedVoltage_BMS_280_2, 0, true, 7, 1, 1, 0)
CANSgnDecl(bms_flag_highDCHTempr_BMS_280_2, 0, true, 8, 1, 1, 0)
CANSgnDecl(bms_flag_cooler_BMS_280_2, 0, true, 9, 1, 1, 0)
CANSgnDecl(bms_flag_HYGShutdown_BMS_280_2, 0, true, 10, 1, 1, 0)
CANSgnDecl(bms_flag_init_BMS_280_2, 0, true, 11, 1, 1, 0)
CANSgnDecl(bms_flag_prechargeContactor_BMS_280_2, 0, true, 12, 1, 1, 0)
CANSgnDecl(bms_flag_combiliftShutdown_BMS_280_2, 0, true, 13, 1, 1, 0)
CANSgnDecl(bms_flag_cellAnalysis_BMS_280_2, 0, true, 14, 1, 1, 0)
CANSgnDecl(bms_flag_balancing1_BMS_280_2, 0, true, 15, 1, 1, 0)
CANSgnDecl(bms_flag_balancing2_BMS_280_2, 0, true, 16, 1, 1, 0)
CANSgnDecl(bms_flag_auxDischargingContactor_BMS_280_2, 0, true, 17, 1, 1, 0)
CANSgnDecl(bms_flag_AckPowerdown_BMS_280_2, 0, true, 18, 1, 1, 0)
CANSgnDecl(bms_flag_crownEWS_BMS_280_2, 0, true, 19, 1, 1, 0)
CANSgnDecl(bms_flag_mainContactor_BMS_280_2, 0, true, 20, 1, 1, 0)
CANSgnDecl(bms_flag_serviceReset_BMS_280_2, 0, true, 21, 1, 1, 0)
CANSgnDecl(bms_flag_stateChDchcontactor_BMS_280_2, 0, true, 22, 1, 1, 0)
CANSgnDecl(bms_flag_readyToCharge_BMS_280_2, 0, true, 23, 1, 1, 0)
CANSgnDecl(bms_flag_readyToDischarge_BMS_280_2, 0, true, 24, 1, 1, 0)
CANSgnDecl(bms_err_overcurrent_BMS_280_2, 0, true, 32, 1, 1, 0)
CANSgnDecl(bms_err_undervoltage_BMS_280_2, 0, true, 33, 1, 1, 0)
CANSgnDecl(bms_err_overvoltage_BMS_280_2, 0, true, 34, 1, 1, 0)
CANSgnDecl(bms_err_lowDchTempr_BMS_280_2, 0, true, 35, 1, 1, 0)
CANSgnDecl(bms_err_highDchTempr_BMS_280_2, 0, true, 36, 1, 1, 0)
CANSgnDecl(bms_err_batteryCover_BMS_280_2, 0, true, 37, 1, 1, 0)
CANSgnDecl(bms_err_highHumidity_BMS_280_2, 0, true, 38, 1, 1, 0)
CANSgnDecl(bms_err_water_BMS_280_2, 0, true, 39, 1, 1, 0)
CANSgnDecl(bms_err_highLogicTempr_BMS_280_2, 0, true, 40, 1, 1, 0)
CANSgnDecl(bms_err_logicOffline_BMS_280_2, 0, true, 41, 1, 1, 0)
CANSgnDecl(bms_err_criticalError_BMS_280_2, 0, true, 42, 1, 1, 0)
CANSgnDecl(bms_err_crownDown_BMS_280_2, 0, true, 43, 1, 1, 0)
CANSgnDecl(bms_err_cellCountError_BMS_280_2, 0, true, 44, 1, 1, 0)
CANSgnDecl(bms_err_HYGOffline_BMS_280_2, 0, true, 45, 1, 1, 0)
CANSgnDecl(bms_err_needAck_BMS_280_2, 0, true, 46, 1, 1, 0)
CANSgnDecl(bms_err_combiliftOffline_BMS_280_2, 0, true, 47, 1, 1, 0)
CANSgnDecl(bms_err_shortCircuit_BMS_280_2, 0, true, 48, 1, 1, 0)
CANSgnDecl(bms_err_highContactorTempr_BMS_280_2, 0, true, 49, 1, 1, 0)
CANSgnDecl(bms_err_logicCountError_BMS_280_2, 0, true, 50, 1, 1, 0)
CANSgnDecl(bms_err_ADCError_BMS_280_2, 0, true, 51, 1, 1, 0)
CANSgnDecl(bms_err_currentSensorError_BMS_280_2, 0, true, 52, 1, 1, 0)
CANSgnDecl(bms_err_ChContactorCyclesError_BMS_280_2, 0, true, 53, 1, 1, 0)
CANSgnDecl(bms_err_DchContactorCyclesError_BMS_280_2, 0, true, 54, 1, 1, 0)
CANSgnDecl(bms_err_shuntOffline_BMS_280_2, 0, true, 55, 1, 1, 0)
CANSgnDecl(bms_err_shuntError_BMS_280_2, 0, true, 56, 1, 1, 0)
CANSgnDecl(bms_err_settingsError_BMS_280_2, 0, true, 57, 1, 1, 0)
CANSgnDecl(bms_err_WDTReset_BMS_280_2, 0, true, 58, 1, 1, 0)
CANSgnDecl(bms_err_noTemprSensors_BMS_280_2, 0, true, 59, 1, 1, 0)
CANSgnDecl(bms_err_temprSensorShorted_BMS_280_2, 0, true, 60, 1, 1, 0)
CANSgnDecl(bms_err_spiritOffline_BMS_280_2, 0, true, 61, 1, 1, 0)
// CAN Message BMS_180
CANSgnDecl(bms_batteryCover_BMS_180_2, 0, true, 0, 1, 1, 0)
CANSgnDecl(bms_chargerConnected_BMS_180_2, 0, true, 1, 1, 1, 0)
CANSgnDecl(bms_powerDownRequest_BMS_180_2, 0, true, 2, 1, 1, 0)
CANSgnDecl(bms_inhibitCharging_BMS_180_2, 0, true, 3, 1, 1, 0)
CANSgnDecl(bms_inhibitDischarging_BMS_180_2, 0, true, 4, 1, 1, 0)
CANSgnDecl(bms_chargingContactorFeedback_BMS_180_2, 0, true, 5, 1, 1, 0)
CANSgnDecl(bms_dischargingContactorFeedback_BMS_180_2, 0, true, 6, 1, 1, 0)
CANSgnDecl(bms_batteryCurrent_BMS_180_2, 1, true, 8, 16, 0.1, 0)
CANSgnDecl(bms_cellTemprMin_BMS_180_2, 1, true, 24, 8, 1, 0)
CANSgnDecl(bms_cellTemprMax_BMS_180_2, 1, true, 32, 8, 1, 0)
CANSgnDecl(bms_SOC_BMS_180_2, 0, true, 40, 8, 1, 0)
CANSgnDecl(bms_batteryVoltage_BMS_180_2, 0, true, 48, 16, 0.1, 0)
// CAN Message BMS_CCS_06E5
CANSgnDecl(bms_m_maxAllowableChVoltage_BMS_CCS_06E5_2, 0, false, 8, 16, 0.1, 0)
CANSgnDecl(bms_m_maxAllowableChCurrent_BMS_CCS_06E5_2, 0, false, 24, 16, 0.1, 0)
CANSgnDecl(bms_m_batState_BMS_CCS_06E5_2, 0, false, 32, 1, 1, 0)
// CAN Message BMS_CCS_multiMsg
CANSgnDecl(bms_m_cellMaxVoltage_BMS_CCS_multiMsg_2, 0, false, 8, 16, 1, 0)
CANSgnDecl(bms_m_batTotalVoltage_BMS_CCS_multiMsg_2, 0, false, 8, 16, 0.1, 0)
CANSgnDecl(bms_m_batNumbers_BMS_CCS_multiMsg_2, 0, false, 8, 16, 1, 0)
CANSgnDecl(bms_m_batNominalAH_BMS_CCS_multiMsg_2, 0, false, 8, 16, 0.1, 0)
CANSgnDecl(bms_m_maxAllowableChVoltage_BMS_CCS_multiMsg_2, 0, false, 8, 16, 0.1, 0)
CANSgnDecl(bms_m_batActualAH_BMS_CCS_multiMsg_2, 0, false, 24, 16, 0.1, 0)
CANSgnDecl(bms_m_cellMinVoltage_BMS_CCS_multiMsg_2, 0, false, 24, 16, 1, 0)
CANSgnDecl(bms_m_maxAllowableChCurrent_BMS_CCS_multiMsg_2, 0, false, 24, 16, 0.1, 0)
CANSgnDecl(bms_m_actualChCurrent_BMS_CCS_multiMsg_2, 1, false, 24, 16, 0.1, 0)
CANSgnDecl(bms_m_presentSOC_BMS_CCS_multiMsg_2, 0, true, 32, 8, 1, 0)
CANSgnDecl(bms_m_chargerClosed_BMS_CCS_multiMsg_2, 0, true, 32, 1, 1, 0)
CANSgnDecl(bms_m_singleBatMaxProtectVolt_BMS_CCS_multiMsg_2, 0, false, 40, 16, 1, 0)
CANSgnDecl(bms_m_batMaxTempr_BMS_CCS_multiMsg_2, 0, true, 40, 8, 1, -100)
CANSgnDecl(bms_m_cellMinProtectVoltage_BMS_CCS_multiMsg_2, 0, false, 40, 16, 1, 0)
CANSgnDecl(bms_m_maxAllowableDchCurrent_BMS_CCS_multiMsg_2, 0, true, 40, 8, 10, 0)
CANSgnDecl(bms_m_batState_BMS_CCS_multiMsg_2, 0, true, 48, 2, 1, 0)
CANSgnDecl(bms_m_batNumber_BMS_CCS_multiMsg_2, 0, true, 48, 8, 1, 0)
CANSgnDecl(bms_m_batMinTempr_BMS_CCS_multiMsg_2, 0, true, 48, 8, 1, -100)
CANSgnDecl(bms_multiMsg_page_BMS_CCS_multiMsg_2, 0, true, 56, 8, 1, 0)
// CAN Message CCS_Status
CANSgnDecl(ccs_outputVoltage_CCS_Status_2, 0, false, 8, 16, 0.1, 0)
CANSgnDecl(ccs_outputCurrent_CCS_Status_2, 1, false, 24, 16, 25.6, 0)
CANSgnDecl(ccs_status_hardwareFailure_CCS_Status_2, 0, true, 32, 1, 1, 0)
CANSgnDecl(ccs_status_overheat_CCS_Status_2, 0, true, 33, 1, 1, 0)
CANSgnDecl(ccs_status_inputVoltaheError_CCS_Status_2, 0, true, 34, 1, 1, 0)
CANSgnDecl(ccs_status_statingState_CCS_Status_2, 0, true, 35, 1, 1, 0)
CANSgnDecl(ccs_status_communicationError_CCS_Status_2, 0, true, 36, 1, 1, 0)
// CAN Message BKU_Joystick_Suspension
CANSgnDecl(suspension_enable_BKU_Joystick_Suspension_2, 0, true, 0, 2, 1, 0)
CANSgnDecl(suspension_cmd_fl_BKU_Joystick_Suspension_2, 0, true, 8, 8, 2, -250)
CANSgnDecl(suspension_cmd_fr_BKU_Joystick_Suspension_2, 0, true, 16, 8, 2, -250)
CANSgnDecl(suspension_cmd_rl_BKU_Joystick_Suspension_2, 0, true, 24, 8, 2, -250)
CANSgnDecl(suspension_cmd_rr_BKU_Joystick_Suspension_2, 0, true, 32, 8, 2, -250)
// CAN Message BKU_Joystick_ResetErrors
CANSgnDecl(resetErrors_bits_BKU_Joystick_ResetErrors_2, 0, true, 0, 40, 1, 0)
// CAN Message BKU_Joystick_PeriphCmd
CANSgnDecl(periphCmd_lightsTurnLeft_BKU_Joystick_PeriphCmd_2, 0, true, 0, 2, 1, 0)
CANSgnDecl(periphCmd_lightsTurnRight_BKU_Joystick_PeriphCmd_2, 0, true, 2, 2, 1, 0)
CANSgnDecl(periphCmd_lightsStop_BKU_Joystick_PeriphCmd_2, 0, true, 4, 2, 1, 0)
CANSgnDecl(periphCmd_lightsBack_BKU_Joystick_PeriphCmd_2, 0, true, 6, 2, 1, 0)
CANSgnDecl(periphCmd_lightsFront_BKU_Joystick_PeriphCmd_2, 0, true, 8, 2, 1, 0)
CANSgnDecl(periphCmd_lightsFar_BKU_Joystick_PeriphCmd_2, 0, true, 10, 2, 1, 0)
CANSgnDecl(periphCmd_soundAlert_BKU_Joystick_PeriphCmd_2, 0, true, 14, 2, 1, 0)
CANSgnDecl(periphCmd_steeringRearCmd_BKU_Joystick_PeriphCmd_2, 0, true, 16, 16, 0.01, -100)
// CAN Message BKU_Joystick_MainCmd
CANSgnDecl(mainCmd_arm_BKU_Joystick_MainCmd_2, 0, true, 0, 2, 1, 0)
CANSgnDecl(mainCmd_parkingBrakeCmd_BKU_Joystick_MainCmd_2, 0, true, 2, 2, 1, 0)
CANSgnDecl(mainCmd_discreteBrakeCmd_BKU_Joystick_MainCmd_2, 0, true, 4, 2, 1, 0)
CANSgnDecl(mainCmd_steeringPermission_BKU_Joystick_MainCmd_2, 0, true, 6, 2, 1, 0)
CANSgnDecl(mainCmd_engineTorque_BKU_Joystick_MainCmd_2, 0, true, 8, 16, 0.01, -100)
CANSgnDecl(mainCmd_steeringFrontCmd_BKU_Joystick_MainCmd_2, 0, true, 24, 16, 0.01, -100)
CANSgnDecl(mainCmd_hydraulicBrakeCmd_BKU_Joystick_MainCmd_2, 0, true, 40, 8, 0.4, 0)
// CAN Message VMU_PeripheralSignals
CANSgnDecl(peripheral_sideDoorLeft_VMU_PeripheralSignals_2, 0, true, 0, 2, 1, 0)
CANSgnDecl(peripheral_sideDoorRight_VMU_PeripheralSignals_2, 0, true, 2, 2, 1, 0)
CANSgnDecl(peripheral_hood_VMU_PeripheralSignals_2, 0, true, 4, 2, 1, 0)
CANSgnDecl(peripheral_doorOfThe4thBlock_VMU_PeripheralSignals_2, 0, true, 6, 2, 1, 0)
CANSgnDecl(peripheral_redButton_VMU_PeripheralSignals_2, 0, true, 8, 2, 1, 0)
CANSgnDecl(peripheral_payloadResult_VMU_PeripheralSignals_2, 0, true, 32, 8, 20, 0)
CANSgnDecl(peripheral_VMUState_VMU_PeripheralSignals_2, 0, true, 42, 6, 1, 0)
// CAN Message BKU_ResetErrors
CANSgnDecl(resetErrors_bits_BKU_ResetErrors_2, 0, true, 0, 40, 1, 0)
// CAN Message BKU_Suspension
CANSgnDecl(suspension_enable_BKU_Suspension_2, 0, true, 0, 2, 1, 0)
CANSgnDecl(suspension_cmd_fl_BKU_Suspension_2, 0, true, 8, 8, 2, -250)
CANSgnDecl(suspension_cmd_fr_BKU_Suspension_2, 0, true, 16, 8, 2, -250)
CANSgnDecl(suspension_cmd_rl_BKU_Suspension_2, 0, true, 24, 8, 2, -250)
CANSgnDecl(suspension_cmd_rr_BKU_Suspension_2, 0, true, 32, 8, 2, -250)
// CAN Message VMU_WheelMileage
CANSgnDecl(abs_mileage_fl_VMU_WheelMileage_2, 0, true, 0, 16, 1, 0)
CANSgnDecl(abs_mileage_fr_VMU_WheelMileage_2, 0, true, 16, 16, 1, 0)
CANSgnDecl(abs_mileage_rl_VMU_WheelMileage_2, 0, true, 32, 16, 1, 0)
CANSgnDecl(abs_mileage_rr_VMU_WheelMileage_2, 0, true, 48, 16, 1, 0)
// CAN Message VMU_Suspension
CANSgnDecl(suspension_pressure_fl_VMU_Suspension_2, 0, true, 0, 8, 0.1, 0)
CANSgnDecl(suspension_pressure_fr_VMU_Suspension_2, 0, true, 8, 8, 0.1, 0)
CANSgnDecl(suspension_pressure_rl_VMU_Suspension_2, 0, true, 16, 8, 0.1, 0)
CANSgnDecl(suspension_pressure_rr_VMU_Suspension_2, 0, true, 24, 8, 0.1, 0)
CANSgnDecl(suspension_value_fl_VMU_Suspension_2, 0, true, 32, 8, 2, -250)
CANSgnDecl(suspension_value_fr_VMU_Suspension_2, 0, true, 40, 8, 2, -250)
CANSgnDecl(suspension_value_rl_VMU_Suspension_2, 0, true, 48, 8, 2, -250)
CANSgnDecl(suspension_value_rr_VMU_Suspension_2, 0, true, 56, 8, 2, -250)
// CAN Message VMU_WheelFreq
CANSgnDecl(abs_freq_fl_VMU_WheelFreq_2, 0, true, 0, 16, 0.002, -50)
CANSgnDecl(abs_freq_fr_VMU_WheelFreq_2, 0, true, 16, 16, 0.002, -50)
CANSgnDecl(abs_freq_rl_VMU_WheelFreq_2, 0, true, 32, 16, 0.002, -50)
CANSgnDecl(abs_freq_rr_VMU_WheelFreq_2, 0, true, 48, 16, 0.002, -50)
// CAN Message VMU_Brakes
CANSgnDecl(brakes_parkingInfo_VMU_Brakes_2, 0, true, 0, 4, 1, 0)
CANSgnDecl(brakes_parkingState_VMU_Brakes_2, 0, true, 4, 2, 1, 0)
CANSgnDecl(brakes_status_VMU_Brakes_2, 0, true, 8, 8, 1, 0)
CANSgnDecl(brakes_cont1_VMU_Brakes_2, 0, true, 16, 8, 1, 0)
CANSgnDecl(brakes_cont2_VMU_Brakes_2, 0, true, 24, 8, 1, 0)
CANSgnDecl(brakes_cont3_VMU_Brakes_2, 0, true, 32, 8, 1, 0)
CANSgnDecl(brakes_cont4_VMU_Brakes_2, 0, true, 40, 8, 1, 0)
CANSgnDecl(brakes_discreteCmd_VMU_Brakes_2, 0, true, 48, 2, 1, 0)
// CAN Message VMU_Steering
CANSgnDecl(steering_front_status_VMU_Steering_2, 0, true, 0, 8, 1, 0)
CANSgnDecl(steering_front_curPosition_VMU_Steering_2, 0, true, 8, 16, 1, -30000)
CANSgnDecl(steering_rear_status_VMU_Steering_2, 0, true, 32, 8, 1, 0)
CANSgnDecl(steering_rear_curPosition_VMU_Steering_2, 0, true, 40, 16, 1, -30000)
// CAN Message VMU_Engine_2
CANSgnDecl(engine_2_voltage_VMU_Engine_2_2, 0, true, 0, 16, 0.1, 0)
CANSgnDecl(engine_2_motorTemp_VMU_Engine_2_2, 0, true, 16, 8, 1, -40)
CANSgnDecl(engine_2_invertorTemp_VMU_Engine_2_2, 0, true, 24, 8, 1, -40)
CANSgnDecl(engine_2_fluxCoilTemp_VMU_Engine_2_2, 0, true, 32, 8, 1, -40)
CANSgnDecl(engine_2_power_VMU_Engine_2_2, 0, true, 40, 16, 0.1, -2000)
// CAN Message VMU_Engine_1
CANSgnDecl(engine_1_status_VMU_Engine_1_2, 0, true, 0, 8, 1, 0)
CANSgnDecl(engine_1_torque_VMU_Engine_1_2, 0, true, 8, 16, 0.01, -100)
CANSgnDecl(engine_1_rpm_VMU_Engine_1_2, 0, true, 24, 16, 0.25, -8000)
CANSgnDecl(engine_1_statorCurrent_VMU_Engine_1_2, 0, true, 40, 16, 0.1, -2000)
// CAN Message BKU_PeriphCmd
CANSgnDecl(periphCmd_lightsTurnLeft_BKU_PeriphCmd_2, 0, true, 0, 2, 1, 0)
CANSgnDecl(periphCmd_lightsTurnRight_BKU_PeriphCmd_2, 0, true, 2, 2, 1, 0)
CANSgnDecl(periphCmd_lightsStop_BKU_PeriphCmd_2, 0, true, 4, 2, 1, 0)
CANSgnDecl(periphCmd_lightsBack_BKU_PeriphCmd_2, 0, true, 6, 2, 1, 0)
CANSgnDecl(periphCmd_lightsFront_BKU_PeriphCmd_2, 0, true, 8, 2, 1, 0)
CANSgnDecl(periphCmd_lightsFar_BKU_PeriphCmd_2, 0, true, 10, 2, 1, 0)
CANSgnDecl(periphCmd_soundAlert_BKU_PeriphCmd_2, 0, true, 14, 2, 1, 0)
CANSgnDecl(periphCmd_steeringRearCmd_BKU_PeriphCmd_2, 0, true, 16, 16, 0.01, -100)
// CAN Message BKU_MainCmd
CANSgnDecl(mainCmd_arm_BKU_MainCmd_2, 0, true, 0, 2, 1, 0)
CANSgnDecl(mainCmd_parkingBrakeCmd_BKU_MainCmd_2, 0, true, 2, 2, 1, 0)
CANSgnDecl(mainCmd_discreteBrakeCmd_BKU_MainCmd_2, 0, true, 4, 2, 1, 0)
CANSgnDecl(mainCmd_steeringPermission_BKU_MainCmd_2, 0, true, 6, 2, 1, 0)
CANSgnDecl(mainCmd_engineTorque_BKU_MainCmd_2, 0, true, 8, 16, 0.01, -100)
CANSgnDecl(mainCmd_steeringFrontCmd_BKU_MainCmd_2, 0, true, 24, 16, 0.01, -100)
CANSgnDecl(mainCmd_hydraulicBrakeCmd_BKU_MainCmd_2, 0, true, 40, 8, 0.4, 0)
// CAN Message VMU_MainState
CANSgnDecl(mainState_readyToMove_VMU_MainState_2, 0, true, 0, 2, 1, 0)
CANSgnDecl(mainState_chargerConnected_VMU_MainState_2, 0, true, 2, 2, 1, 0)
CANSgnDecl(mainState_emergencyStop_VMU_MainState_2, 0, true, 4, 2, 1, 0)
CANSgnDecl(mainState_bmsStatus_VMU_MainState_2, 0, true, 8, 8, 1, 0)
CANSgnDecl(mainState_voltage24_VMU_MainState_2, 0, true, 16, 8, 0.1, 10)
CANSgnDecl(mainState_workMode_VMU_MainState_2, 0, true, 24, 8, 1, 0)
CANSgnDecl(mainState_warningCount_VMU_MainState_2, 0, true, 32, 4, 1, 0)
CANSgnDecl(mainState_criticalCount_VMU_MainState_2, 0, true, 36, 4, 1, 0)
CANSgnDecl(mainState_errorCode_VMU_MainState_2, 0, true, 40, 16, 1, 0)
// CAN Message EVP100_Heartbeat
CANSgnDecl(State_EVP100_Heartbeat_1, 0, true, 0, 7, 1, 0)
CANSgnDecl(Toggle_EVP100_Heartbeat_1, 0, true, 7, 1, 1, 0)
// CAN Message VMU_RefTorque
CANSgnDecl(VMU_RefTorque_cmd_VMU_RefTorque_1, 1, true, 0, 8, 0.78740157, 0)
CANSgnDecl(VMU_RefTorque_16bit_VMU_RefTorque_1, 1, true, 16, 16, 0.0030518509476, 0)
CANSgnDecl(VMU_RefFluxCurrent_VMU_RefTorque_1, 0, true, 32, 8, 0.2, 0)
CANSgnDecl(VMU_RefElectricAngleOffset_VMU_RefTorque_1, 1, true, 40, 16, 0.010986663411359, 0)
// CAN Message EVP100_Errors
CANSgnDecl(Error_DC_UNDERVOLTAGE_EVP100_Errors_1, 0, true, 0, 1, 1, 0)
CANSgnDecl(Error_DC_OVERVOLTAGE_EVP100_Errors_1, 0, true, 1, 1, 1, 0)
CANSgnDecl(Error_PHASE_OVERCURRENT_EVP100_Errors_1, 0, true, 2, 1, 1, 0)
CANSgnDecl(Error_FIELD_OVERCURRENT_EVP100_Errors_1, 0, true, 3, 1, 1, 0)
CANSgnDecl(Error_DC_OVERCURRENT_EVP100_Errors_1, 0, true, 4, 1, 1, 0)
CANSgnDecl(Error_DRIVER_3PH_FLT_EVP100_Errors_1, 0, true, 5, 1, 1, 0)
CANSgnDecl(Error_DRIVER_1PH_FLT_EVP100_Errors_1, 0, true, 6, 1, 1, 0)
CANSgnDecl(Error_JUNCTION_OVERTEMP_EVP100_Errors_1, 0, true, 7, 1, 1, 0)
CANSgnDecl(Error_CASE_AIR_OVERTEMP_EVP100_Errors_1, 0, true, 8, 1, 1, 0)
CANSgnDecl(Error_STATOR_OVERTEMP_EVP100_Errors_1, 0, true, 9, 1, 1, 0)
CANSgnDecl(Error_FIELD_WINDING_OVERTEMP_EVP100_Errors_1, 0, true, 10, 1, 1, 0)
CANSgnDecl(Error_CONNECTION_LOST_EVP100_Errors_1, 0, true, 11, 1, 1, 0)
CANSgnDecl(Error_CAN_BUS_ERROR_EVP100_Errors_1, 0, true, 12, 1, 1, 0)
CANSgnDecl(Error_RUNTIME_ERRROR_EVP100_Errors_1, 0, true, 13, 1, 1, 0)
CANSgnDecl(Error_EEPROM_ERROR_EVP100_Errors_1, 0, true, 14, 1, 1, 0)
CANSgnDecl(Error_PHASE_CURRENT_SENSOR_FAULT_EVP100_Errors_1, 0, true, 15, 1, 1, 0)
CANSgnDecl(Error_FIELD_CURRENT_SENSOR_FAULT_EVP100_Errors_1, 0, true, 16, 1, 1, 0)
CANSgnDecl(Error_DC_CURRENT_SENSOR_FAULT_EVP100_Errors_1, 0, true, 17, 1, 1, 0)
CANSgnDecl(Error_EMERGENCY_STOP_EVP100_Errors_1, 0, true, 18, 1, 1, 0)
CANSgnDecl(Error_DCLINK_CHARGE_FAILURE_EVP100_Errors_1, 0, true, 19, 1, 1, 0)
CANSgnDecl(Error_POSSENS_CALIBRATION_FAULT_EVP100_Errors_1, 0, true, 20, 1, 1, 0)
CANSgnDecl(Error_MOTOR_TEMP_SENSOR_FAULT_EVP100_Errors_1, 0, true, 21, 1, 1, 0)
CANSgnDecl(Error_POWER_CONTACTOR_OPENING_EVP100_Errors_1, 0, true, 22, 1, 1, 0)
CANSgnDecl(Warning_DCLINK_DISCONNECTED_EVP100_Errors_1, 0, true, 48, 1, 1, 0)
CANSgnDecl(Warning_DCLINK_CHARGING_EVP100_Errors_1, 0, true, 49, 1, 1, 0)
CANSgnDecl(Warning_DCLINK_HV_OPEN_CONTACTOR_EVP100_Errors_1, 0, true, 50, 1, 1, 0)
CANSgnDecl(Warning_CAN_BUS_WARNING_EVP100_Errors_1, 0, true, 51, 1, 1, 0)
CANSgnDecl(Warning_JUNCTION_OVERHEATING_EVP100_Errors_1, 0, true, 52, 1, 1, 0)
CANSgnDecl(Warning_CASE_OVERHEATING_EVP100_Errors_1, 0, true, 53, 1, 1, 0)
CANSgnDecl(Warning_STATOR_OVERHEATING_EVP100_Errors_1, 0, true, 54, 1, 1, 0)
CANSgnDecl(Warning_FIELD_WINDING_OVERHEAT_EVP100_Errors_1, 0, true, 55, 1, 1, 0)
CANSgnDecl(Warning_FLUX_WEAKENING_EVP100_Errors_1, 0, true, 56, 1, 1, 0)
// CAN Message EVP100_HighVoltage
CANSgnDecl(EVP100_HighToCase_Voltage_EVP100_HighVoltage_1, 0, true, 0, 8, 6.35294117, 0)
CANSgnDecl(EVP100_LowToCase_Voltage_EVP100_HighVoltage_1, 0, true, 8, 8, 6.35294117, 0)
CANSgnDecl(EVP100_WireIsolationStatus_EVP100_HighVoltage_1, 0, true, 16, 4, 1, 0)
CANSgnDecl(EVP100_highVoltageCurrent_EVP100_HighVoltage_1, 1, true, 24, 8, 1.5748031496, 0)
// CAN Message EVP100_Temp
CANSgnDecl(EVP100_motorTemp_EVP100_Temp_1, 0, true, 0, 8, 1, -40)
CANSgnDecl(EVP100_invertorTemp_EVP100_Temp_1, 0, true, 8, 8, 1, -40)
CANSgnDecl(EVP100_InvertorVoltage_EVP100_Temp_1, 0, true, 16, 8, 0.392156862745, 0)
CANSgnDecl(EVP100_modelHeat_EVP100_Temp_1, 0, true, 24, 7, 0.7874015748, 0)
CANSgnDecl(EVP100_OverheatTorqueLimited_EVP100_Temp_1, 0, true, 31, 1, 1, 0)
CANSgnDecl(EVP100_FluxCoilTemp_EVP100_Temp_1, 0, true, 32, 8, 1, -40)
CANSgnDecl(EVP100_coolerTemp_EVP100_Temp_1, 0, true, 40, 8, 1, -40)
CANSgnDecl(EVP100_internalTemp_EVP100_Temp_1, 0, true, 48, 8, 1, -40)
// CAN Message EVP100_Status1
CANSgnDecl(EVP100_ReadyFlag_EVP100_Status1_1, 0, true, 0, 1, 1, 0)
CANSgnDecl(EVP100_ErrorFlag_EVP100_Status1_1, 0, true, 1, 1, 1, 0)
CANSgnDecl(EVP100_WarningFlag_EVP100_Status1_1, 0, true, 2, 1, 1, 0)
CANSgnDecl(EVP100_OverheatFlag_EVP100_Status1_1, 0, true, 3, 1, 1, 0)
CANSgnDecl(EVP100_CurTorque_EVP100_Status1_1, 1, true, 8, 8, 0.78740157, 0)
CANSgnDecl(EVP100_curRpm_EVP100_Status1_1, 1, true, 16, 16, 0.24414807, 0)
CANSgnDecl(EVP100_curCurrent_EVP100_Status1_1, 1, true, 32, 8, 5.118110236, 0)
CANSgnDecl(EVP100_curPower_EVP100_Status1_1, 1, true, 40, 8, 1.1811023622, 0)
CANSgnDecl(EVP100_curHighVoltage_EVP100_Status1_1, 0, true, 48, 8, 6.35294117, 0)
CANSgnDecl(EVP100_curFluxCurrent_EVP100_Status1_1, 0, true, 56, 8, 0.1372549019, 0)
// CAN Message VMU_cmd_flags
CANSgnDecl(VMU_Enable_cmd_VMU_cmd_flags_1, 0, true, 0, 1, 1, 0)
CANSgnDecl(VMU_IsolationControl_VMU_cmd_flags_1, 0, true, 1, 1, 1, 0)
CANSgnDecl(VMU_MotorRpmLimit_VMU_cmd_flags_1, 0, true, 16, 16, 1, 0)
CANSgnDecl(VMU_emStop_cmd_VMU_cmd_flags_1, 0, true, 32, 1, 1, 0)
CANSgnDecl(VMU_brake_cmd_VMU_cmd_flags_1, 0, true, 34, 1, 1, 0)
CANSgnDecl(VMU_BmsVoltage_VMU_cmd_flags_1, 0, true, 48, 16, 0.1, 0)
// CAN Message SSDO_003
CANSgnDecl(cmd_byte_SSDO_003_2, 0, true, 0, 8, 1, 0)
CANSgnDecl(index_SSDO_003_2, 0, true, 8, 16, 1, 0)
CANSgnDecl(sub_index_SSDO_003_2, 0, true, 24, 8, 1, 0)
CANSgnDecl(DATA_SSDO_003_2, 0, true, 32, 32, 1, 0)
// CAN Message CSDO_003
CANSgnDecl(cmd_byte_CSDO_003_2, 0, true, 0, 8, 1, 0)
CANSgnDecl(index_CSDO_003_2, 0, true, 8, 16, 1, 0)
CANSgnDecl(sub_index_CSDO_003_2, 0, true, 24, 8, 1, 0)
CANSgnDecl(DATA_CSDO_003_2, 0, true, 32, 32, 1, 0)
// LIN Databases
// FlexRay Databases