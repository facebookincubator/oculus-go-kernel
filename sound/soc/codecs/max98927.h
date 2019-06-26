/*
 * max98927.c  --  MAX98927 ALSA Soc Audio driver
 *
 * Copyright 2008-11 Wolfson Microelectronics PLC.
 * Author: Ryan Lee <ryans.lee@maximintegrated.com>
 *
 *  This program is free software; you can redistribute  it and/or modify it
 *  under  the terms of  the GNU General  Public License as published by the
 *  Free Software Foundation;  either version 2 of the  License, or (at your
 *  option) any later version.
 *
 */
#ifndef __MAX98927_REGISTERDEFS_H
#define __MAX98927_REGISTERDEFS_H
#ifdef CONFIG_SND_SOC_MAXIM_DSM
#include <sound/maxim_dsm.h>
#endif /* CONFIG_SND_SOC_MAXIM_DSM */
#include <linux/regulator/machine.h>

enum {
	PRI_MAX98927 = 0,
	SEC_MAX98927 = 1,
	MAX_DEV_ID_MAX98927,
} MAX98927deviceID;

enum {
	/*Interrupt Raw 1 (Address 0x0001)*/
	MAX98927_Interrupt_Raw_1 = 0x0001,
	MAX98927_Interrupt_Raw_1_BDE_ACTIVE_END_RAW = (0x1 << 0),
	MAX98927_Interrupt_Raw_1_BDE_ACTIVE_BGN_RAW = (0x1 << 1),
	MAX98927_Interrupt_Raw_1_BDE_LEVEL_CHANGE_RAW = (0x1 << 2),
	MAX98927_Interrupt_Raw_1_BDE_L8_RAW = (0x1 << 3),
	MAX98927_Interrupt_Raw_1_THERMWARN_END_RAW = (0x1 << 4),
	MAX98927_Interrupt_Raw_1_THERMWARN_START_RAW = (0x1 << 5),
	MAX98927_Interrupt_Raw_1_THERMSHDN_END_RAW = (0x1 << 6),
	MAX98927_Interrupt_Raw_1_THERMSHDN_START_RAW = (0x1 << 7),

	/* Interrupt Raw 2 (Address 0x0002)*/
	MAX98927_Interrupt_Raw_2 = 0x0002,
	MAX98927_Interrupt_Raw_2_WATCHDOGWARN_RAW = (0x1 << 0),
	MAX98927_Interrupt_Raw_2_WATCHDOGFAIL_RAW = (0x1 << 1),
	MAX98927_Interrupt_Raw_2_BOOSTCURRLIM_RAW = (0x1 << 2),
	MAX98927_Interrupt_Raw_2_CLKSTOP_RAW = (0x1 << 3),
	MAX98927_Interrupt_Raw_2_CLKSTART_RAW = (0x1 << 4),
	MAX98927_Interrupt_Raw_2_MEASADC_END_RAW = (0x1 << 5),
	MAX98927_Interrupt_Raw_2_PWRDN_DONE_RAW = (0x1 << 6),
	MAX98927_Interrupt_Raw_2_PWRUP_DONE_RAW = (0x1 << 7),

	/* Interrupt Raw 3 (Address 0x0003)*/
	MAX98927_Interrupt_Raw_3  = 0x0003,
	MAX98927_Interrupt_Raw_3_PWRUP_FAIL_RAW = (0x1 << 0),
	MAX98927_Interrupt_Raw_3_AUTH_DONE_RAW  = (0x1 << 1),
	MAX98927_Interrupt_Raw_3_SPK_OVC_RAW = (0x1 << 2),
	MAX98927_Interrupt_Raw_3_BST_UVLO_RAW = (0x1 << 3),

	/* Interrupt State 1 (Address 0x0004)*/
	MAX98927_Interrupt_State_1  = 0x0004,
	MAX98927_Interrupt_State_1_BDE_ACTIVE_END_STATE  = (0x1 << 0),
	MAX98927_Interrupt_State_1_BDE_ACTIVE_BGN_STATE  = (0x1 << 1),
	MAX98927_Interrupt_State_1_BDE_LEVEL_CHANGE_STATE  = (0x1 << 2),
	MAX98927_Interrupt_State_1_BDE_L8_STATE = (0x1 << 3),
	MAX98927_Interrupt_State_1_THERMWARN_END_STATE   = (0x1 << 4),
	MAX98927_Interrupt_State_1_THERMWARN_START_STATE = (0x1 << 5),
	MAX98927_Interrupt_State_1_THERMSHDN_END_STATE   = (0x1 << 6),
	MAX98927_Interrupt_State_1_THERMSHDN_START_STATE = (0x1 << 7),

	/* Interrupt State 2 (Address 0x0005)*/
	MAX98927_Interrupt_State_2  = 0x0005,
	MAX98927_Interrupt_State_2_WATCHDOGWARN_STATE = (0x1 << 0),
	MAX98927_Interrupt_State_2_WATCHDOGFAIL_STATE = (0x1 << 1),
	MAX98927_Interrupt_State_2_BOOSTCURRLIM_STATE = (0x1 << 2),
	MAX98927_Interrupt_State_2_CLKSTOP_STATE  = (0x1 << 3),
	MAX98927_Interrupt_State_2_CLKSTART_STATE = (0x1 << 4),
	MAX98927_Interrupt_State_2_MEASADC_END_STATE = (0x1 << 5),
	MAX98927_Interrupt_State_2_PWRDN_DONE_STATE  = (0x1 << 6),
	MAX98927_Interrupt_State_2_PWRUP_DONE_STATE  = (0x1 << 7),

	/* Interrupt State 3 (Address 0x0006)*/
	MAX98927_Interrupt_State_3  = 0x0006,
	MAX98927_Interrupt_State_3_PWRUP_FAIL_STATE  = (0x1 << 0),
	MAX98927_Interrupt_State_3_AUTH_DONE_STATE = (0x1 << 1),
	MAX98927_Interrupt_State_3_SPK_OVC_STATE  = (0x1 << 2),
	MAX98927_Interrupt_State_3_BST_UVLO_STATE = (0x1 << 3),

	/* Interrupt Flag 1 (Address 0x0007)*/
	MAX98927_Interrupt_Flag_1 = 0x0007,
	MAX98927_Interrupt_Flag_1_BDE_ACTIVE_END_FLAG = (0x1 << 0),
	MAX98927_Interrupt_Flag_1_BDE_ACTIVE_BGN_FLAG = (0x1 << 1),
	MAX98927_Interrupt_Flag_1_BDE_LEVEL_CHANGE_FLAG  = (0x1 << 2),
	MAX98927_Interrupt_Flag_1_BDE_L8_FLAG = (0x1 << 3),
	MAX98927_Interrupt_Flag_1_THERMWARN_END_FLAG = (0x1 << 4),
	MAX98927_Interrupt_Flag_1_THERMWARN_START_FLAG   = (0x1 << 5),
	MAX98927_Interrupt_Flag_1_THERMSHDN_END_FLAG = (0x1 << 6),
	MAX98927_Interrupt_Flag_1_THERMSHDN_START_FLAG   = (0x1 << 7),

	/* Interrupt Flag 2 (Address 0x0008)*/
	MAX98927_Interrupt_Flag_2 = 0x0008,
	MAX98927_Interrupt_Flag_2_WATCHDOGWARN_FLAG  = (0x1 << 0),
	MAX98927_Interrupt_Flag_2_WATCHDOGFAIL_FLAG  = (0x1 << 1),
	MAX98927_Interrupt_Flag_2_BOOSTCURRLIM_FLAG  = (0x1 << 2),
	MAX98927_Interrupt_Flag_2_CLKSTOP_FLAG  = (0x1 << 3),
	MAX98927_Interrupt_Flag_2_CLKSTART_FLAG = (0x1 << 4),
	MAX98927_Interrupt_Flag_2_MEASADC_END_FLAG = (0x1 << 5),
	MAX98927_Interrupt_Flag_2_PWRDN_DONE_FLAG = (0x1 << 6),
	MAX98927_Interrupt_Flag_2_PWRUP_DONE_FLAG = (0x1 << 7),

	/* Interrupt Flag 3 (Address 0x0009)*/
	MAX98927_Interrupt_Flag_3 = 0x0009,
	MAX98927_Interrupt_Flag_3_PWRUP_FAIL_FLAG = (0x1 << 0),
	MAX98927_Interrupt_Flag_3_AUTH_DONE_FLAG  = (0x1 << 1),
	MAX98927_Interrupt_Flag_3_SPK_OVC_FLAG  = (0x1 << 2),
	MAX98927_Interrupt_Flag_3_BST_UVLO_FLAG = (0x1 << 3),

	/* Interrupt Enable 1 (Address 0x000a)*/
	MAX98927_Interrupt_Enable_1 = 0x000a,
	MAX98927_Interrupt_Enable_1_BDE_ACTIVE_END_EN = (0x1 << 0),
	MAX98927_Interrupt_Enable_1_BDE_ACTIVE_BGN_EN = (0x1 << 1),
	MAX98927_Interrupt_Enable_1_BDE_LEVEL_CHANGE_EN  = (0x1 << 2),
	MAX98927_Interrupt_Enable_1_BDE_L8_EN = (0x1 << 3),
	MAX98927_Interrupt_Enable_1_THERMWARN_END_EN = (0x1 << 4),
	MAX98927_Interrupt_Enable_1_THERMWARN_START_EN   = (0x1 << 5),
	MAX98927_Interrupt_Enable_1_THERMSHDN_END_EN = (0x1 << 6),
	MAX98927_Interrupt_Enable_1_THERMSHDN_START_EN   = (0x1 << 7),

	/* Interrupt Enable 2 (Address 0x000b)*/
	MAX98927_Interrupt_Enable_2 = 0x000b,
	MAX98927_Interrupt_Enable_2_WATCHDOGWARN_EN  = (0x1 << 0),
	MAX98927_Interrupt_Enable_2_WATCHDOGFAIL_EN  = (0x1 << 1),
	MAX98927_Interrupt_Enable_2_BOOSTCURRLIM_EN  = (0x1 << 2),
	MAX98927_Interrupt_Enable_2_CLKSTOP_EN  = (0x1 << 3),
	MAX98927_Interrupt_Enable_2_CLKSTART_EN = (0x1 << 4),
	MAX98927_Interrupt_Enable_2_MEASADC_END_EN = (0x1 << 5),
	MAX98927_Interrupt_Enable_2_PWRDN_DONE_EN = (0x1 << 6),
	MAX98927_Interrupt_Enable_2_PWRUP_DONE_EN = (0x1 << 7),

	/* Interrupt Enable 3 (Address 0x000c)*/
	MAX98927_Interrupt_Enable_3 = 0x000c,
	MAX98927_Interrupt_Enable_3_PWRUP_FAIL_EN = (0x1 << 0),
	MAX98927_Interrupt_Enable_3_AUTH_DONE_EN  = (0x1 << 1),
	MAX98927_Interrupt_Enable_3_SPK_OVC_EN  = (0x1 << 2),
	MAX98927_Interrupt_Enable_3_BST_UVLO_EN = (0x1 << 3),

	/* Interrupt Flag Clear 1 (Address 0x000d)*/
	MAX98927_Interrupt_Flag_Clear_1  = 0x000d,
	MAX98927_Interrupt_Flag_Clear_1_BDE_ACTIVE_END_CLR = (0x1 << 0),
	MAX98927_Interrupt_Flag_Clear_1_BDE_ACTIVE_BGN_CLR = (0x1 << 1),
	MAX98927_Interrupt_Flag_Clear_1_BDE_LEVEL_CHANGE_CLR = (0x1 << 2),
	MAX98927_Interrupt_Flag_Clear_1_BDE_L8_CLR = (0x1 << 3),
	MAX98927_Interrupt_Flag_Clear_1_THERMWARN_END_CLR  = (0x1 << 4),
	MAX98927_Interrupt_Flag_Clear_1_THERMWARN_START_CLR  = (0x1 << 5),
	MAX98927_Interrupt_Flag_Clear_1_THERMSHDN_END_CLR  = (0x1 << 6),
	MAX98927_Interrupt_Flag_Clear_1_THERMSHDN_START_CLR  = (0x1 << 7),

	/* Interrupt Flag Clear 2 (Address 0x000e)*/
	MAX98927_Interrupt_Flag_Clear_2  = 0x000e,
	MAX98927_Interrupt_Flag_Clear_2_WATCHDOGWARN_CLR = (0x1 << 0),
	MAX98927_Interrupt_Flag_Clear_2_WATCHDOGFAIL_CLR = (0x1 << 1),
	MAX98927_Interrupt_Flag_Clear_2_BOOSTCURRLIM_CLR = (0x1 << 2),
	MAX98927_Interrupt_Flag_Clear_2_CLKSTOP_CLR  = (0x1 << 3),
	MAX98927_Interrupt_Flag_Clear_2_CLKSTART_CLR = (0x1 << 4),
	MAX98927_Interrupt_Flag_Clear_2_MEASADC_END_CLR  = (0x1 << 5),
	MAX98927_Interrupt_Flag_Clear_2_PWRDN_DONE_CLR   = (0x1 << 6),
	MAX98927_Interrupt_Flag_Clear_2_PWRUP_DONE_CLR   = (0x1 << 7),

	/* Interrupt Flag Clear 3 (Address 0x000f)*/
	MAX98927_Interrupt_Flag_Clear_3  = 0x000f,
	MAX98927_Interrupt_Flag_Clear_3_PWRUP_FAIL_CLR   = (0x1 << 0),
	MAX98927_Interrupt_Flag_Clear_3_AUTH_DONE_CLR = (0x1 << 1),
	MAX98927_Interrupt_Flag_Clear_3_SPK_OVC_CLR  = (0x1 << 2),
	MAX98927_Interrupt_Flag_Clear_3_BST_UVLO_CLR = (0x1 << 3),

	/* IRQ Control (Address 0x0010)*/
	MAX98927_IRQ_Control  = 0x0010,
	MAX98927_IRQ_Control_IRQ_EN = (0x1 << 0),
	MAX98927_IRQ_Control_IRQ_POL  = (0x1 << 1),
	MAX98927_IRQ_Control_IRQ_MODE = (0x1 << 2),

	/* Clock monitor enable (Address 0x0011)*/
	MAX98927_Clock_monitor_enable = 0x0011,
	MAX98927_Clock_monitor_enable_CMON_ENA  = (0x1 << 0),
	MAX98927_Clock_monitor_enable_CMON_AUTORESTART_ENA = (0x1 << 1),

	/* Watchdog Control (Address 0x0012)*/
	MAX98927_Watchdog_Control = 0x0012,
	MAX98927_Watchdog_Control_WDT_ENA  = (0x1 << 0),
	MAX98927_Watchdog_Control_WDT_MODE = (0x1 << 1),
	MAX98927_Watchdog_Control_WDT_TO_SEL_Mask = (0x3 << 2),
	MAX98927_Watchdog_Control_WDT_TO_SEL_5  = (0x0 << 2),
	MAX98927_Watchdog_Control_WDT_TO_SEL_10 = (0x1 << 2),
	MAX98927_Watchdog_Control_WDT_TO_SEL_35 = (0x2 << 2),
	MAX98927_Watchdog_Control_WDT_TO_SEL_50 = (0x3 << 2),
	MAX98927_Watchdog_Control_WDT_HW_SOURCE = (0x1 << 4),

	/* Watchdog SW Reset (Address 0x0013)*/
	MAX98927_Watchdog_SW_Reset  = 0x0013,
	MAX98927_Watchdog_SW_Reset_WDT_SW_RST_Mask = (0xff << 0),

	/* Meas ADC Thermal Warning Threshhold (Address 0x0014)*/
	MAX98927_Meas_ADC_TW_Threshhold = 0x0014,
	MAX98927_Meas_ADC_TW_Threshhold_MEAS_ADC_WARN_THRESH_Mask
		= (0xff << 0),

	/* Meas ADC Thermal Shutdown Threshhold (Address 0x0015)*/
	MAX98927_Meas_ADC_TS_Threshhold = 0x0015,
	MAX98927_Meas_ADC_TS_Threshhold_MEAS_ADC_SHDN_THRESH_Mask
		= (0xff << 0),

	/* Meas ADC Thermal Hysteresis (Address 0x0016)*/
	MAX98927_Meas_ADC_Thermal_Hysteresis = 0x0016,
	MAX98927_Meas_ADC_TH_MEAS_ADC_THERM_HYST_Mask  = (0x1f << 0),

	/* Pin Config (Address 0x0017)*/
	MAX98927_Pin_Config = 0x0017,
	MAX98927_Pin_Config_DOUT_DRV_Mask  = (0x3 << 0),
	MAX98927_Pin_Config_DOUT_DRV_01  = (0x0 << 0),
	MAX98927_Pin_Config_DOUT_DRV_11  = (0x2 << 0),
	MAX98927_Pin_Config_BCLK_DRV_Mask  = (0x3 << 2),
	MAX98927_Pin_Config_BCLK_DRV_01  = (0x0 << 2),
	MAX98927_Pin_Config_BCLK_DRV_11  = (0x2 << 2),
	MAX98927_Pin_Config_LRCLK_DRV_Mask = (0x3 << 4),
	MAX98927_Pin_Config_LRCLK_DRV_01 = (0x0 << 4),
	MAX98927_Pin_Config_LRCLK_DRV_11 = (0x2 << 4),
	MAX98927_Pin_Config_ICC_DRV_Mask = (0x3 << 6),
	MAX98927_Pin_Config_ICC_DRV_01 = (0x0 << 6),
	MAX98927_Pin_Config_ICC_DRV_11 = (0x2 << 6),

	/* PCM Rx Enables A (Address 0x0018)*/
	MAX98927_PCM_Rx_Enables_A = 0x0018,
	MAX98927_PCM_Rx_Enables_A_PCM_RX_CH0_EN = (0x1 << 0),
	MAX98927_PCM_Rx_Enables_A_PCM_RX_CH1_EN = (0x1 << 1),
	MAX98927_PCM_Rx_Enables_A_PCM_RX_CH2_EN = (0x1 << 2),
	MAX98927_PCM_Rx_Enables_A_PCM_RX_CH3_EN = (0x1 << 3),
	MAX98927_PCM_Rx_Enables_A_PCM_RX_CH4_EN = (0x1 << 4),
	MAX98927_PCM_Rx_Enables_A_PCM_RX_CH5_EN = (0x1 << 5),
	MAX98927_PCM_Rx_Enables_A_PCM_RX_CH6_EN = (0x1 << 6),
	MAX98927_PCM_Rx_Enables_A_PCM_RX_CH7_EN = (0x1 << 7),

	/* PCM Rx Enables B (Address 0x0019)*/
	MAX98927_PCM_Rx_Enables_B = 0x0019,
	MAX98927_PCM_Rx_Enables_B_PCM_RX_CH8_EN = (0x1 << 0),
	MAX98927_PCM_Rx_Enables_B_PCM_RX_CH9_EN = (0x1 << 1),
	MAX98927_PCM_Rx_Enables_B_PCM_RX_CH10_EN  = (0x1 << 2),
	MAX98927_PCM_Rx_Enables_B_PCM_RX_CH11_EN  = (0x1 << 3),
	MAX98927_PCM_Rx_Enables_B_PCM_RX_CH12_EN  = (0x1 << 4),
	MAX98927_PCM_Rx_Enables_B_PCM_RX_CH13_EN  = (0x1 << 5),
	MAX98927_PCM_Rx_Enables_B_PCM_RX_CH14_EN  = (0x1 << 6),
	MAX98927_PCM_Rx_Enables_B_PCM_RX_CH15_EN  = (0x1 << 7),

	/* PCM Tx Enables A (Address 0x001a)*/
	MAX98927_PCM_Tx_Enables_A = 0x001a,
	MAX98927_PCM_Tx_Enables_A_PCM_TX_CH0_EN = (0x1 << 0),
	MAX98927_PCM_Tx_Enables_A_PCM_TX_CH1_EN = (0x1 << 1),
	MAX98927_PCM_Tx_Enables_A_PCM_TX_CH2_EN = (0x1 << 2),
	MAX98927_PCM_Tx_Enables_A_PCM_TX_CH3_EN = (0x1 << 3),
	MAX98927_PCM_Tx_Enables_A_PCM_TX_CH4_EN = (0x1 << 4),
	MAX98927_PCM_Tx_Enables_A_PCM_TX_CH5_EN = (0x1 << 5),
	MAX98927_PCM_Tx_Enables_A_PCM_TX_CH6_EN = (0x1 << 6),
	MAX98927_PCM_Tx_Enables_A_PCM_TX_CH7_EN = (0x1 << 7),

	/* PCM Tx Enables B (Address 0x001b)*/
	MAX98927_PCM_Tx_Enables_B = 0x001b,
	MAX98927_PCM_Tx_Enables_B_PCM_TX_CH8_EN = (0x1 << 0),
	MAX98927_PCM_Tx_Enables_B_PCM_TX_CH9_EN = (0x1 << 1),
	MAX98927_PCM_Tx_Enables_B_PCM_TX_CH10_EN  = (0x1 << 2),
	MAX98927_PCM_Tx_Enables_B_PCM_TX_CH11_EN  = (0x1 << 3),
	MAX98927_PCM_Tx_Enables_B_PCM_TX_CH12_EN  = (0x1 << 4),
	MAX98927_PCM_Tx_Enables_B_PCM_TX_CH13_EN  = (0x1 << 5),
	MAX98927_PCM_Tx_Enables_B_PCM_TX_CH14_EN  = (0x1 << 6),
	MAX98927_PCM_Tx_Enables_B_PCM_TX_CH15_EN  = (0x1 << 7),

	/* PCM Tx HiZ Control A (Address 0x001c)*/
	MAX98927_PCM_Tx_HiZ_Control_A = 0x001c,
	MAX98927_PCM_Tx_HiZ_Control_A_PCM_TX_CH0_HIZ = (0x1 << 0),
	MAX98927_PCM_Tx_HiZ_Control_A_PCM_TX_CH1_HIZ = (0x1 << 1),
	MAX98927_PCM_Tx_HiZ_Control_A_PCM_TX_CH2_HIZ = (0x1 << 2),
	MAX98927_PCM_Tx_HiZ_Control_A_PCM_TX_CH3_HIZ = (0x1 << 3),
	MAX98927_PCM_Tx_HiZ_Control_A_PCM_TX_CH4_HIZ = (0x1 << 4),
	MAX98927_PCM_Tx_HiZ_Control_A_PCM_TX_CH5_HIZ = (0x1 << 5),
	MAX98927_PCM_Tx_HiZ_Control_A_PCM_TX_CH6_HIZ = (0x1 << 6),
	MAX98927_PCM_Tx_HiZ_Control_A_PCM_TX_CH7_HIZ = (0x1 << 7),

	/* PCM Tx HiZ Control B (Address 0x001d)*/
	MAX98927_PCM_Tx_HiZ_Control_B = 0x001d,
	MAX98927_PCM_Tx_HiZ_Control_B_PCM_TX_CH8_HIZ = (0x1 << 0),
	MAX98927_PCM_Tx_HiZ_Control_B_PCM_TX_CH9_HIZ = (0x1 << 1),
	MAX98927_PCM_Tx_HiZ_Control_B_PCM_TX_CH10_HIZ = (0x1 << 2),
	MAX98927_PCM_Tx_HiZ_Control_B_PCM_TX_CH11_HIZ = (0x1 << 3),
	MAX98927_PCM_Tx_HiZ_Control_B_PCM_TX_CH12_HIZ = (0x1 << 4),
	MAX98927_PCM_Tx_HiZ_Control_B_PCM_TX_CH13_HIZ = (0x1 << 5),
	MAX98927_PCM_Tx_HiZ_Control_B_PCM_TX_CH14_HIZ = (0x1 << 6),
	MAX98927_PCM_Tx_HiZ_Control_B_PCM_TX_CH15_HIZ = (0x1 << 7),

	/* PCM Tx Channel Sources A (Address 0x001e)*/
	MAX98927_PCM_Tx_Channel_Sources_A  = 0x001e,
	MAX98927_PCM_Tx_Channel_Sources_A_PCM_IVADC_V_DEST_Mask = (0xf << 0),
	MAX98927_PCM_Tx_Channel_Sources_A_PCM_IVADC_I_DEST_Mask = (0xf << 4),

	/* PCM Tx Channel Sources B (Address 0x001f)*/
	MAX98927_PCM_Tx_Channel_Sources_B  = 0x001f,
	MAX98927_PCM_Tx_Channel_Sources_B_PCM_AMP_DSP_DEST_Mask = (0xf << 0),
	MAX98927_PCM_Tx_Channel_Src_INTERLEAVE_Mask = (0x1 << 5),

	/* PCM Mode Config (Address 0x0020)*/
	MAX98927_PCM_Mode_Config  = 0x0020,
	MAX98927_PCM_Mode_Config_PCM_TX_EXTRA_HIZ = (0x1 << 0),
	MAX98927_PCM_Mode_Config_PCM_CHANSEL = (0x1 << 1),
	MAX98927_PCM_Mode_Config_PCM_BCLKEDGE = (0x1 << 2),
	MAX98927_PCM_Mode_Config_PCM_FORMAT_Mask  = (0x7 << 3),
	MAX98927_PCM_Mode_Config_PCM_FORMAT_I2S = (0x0 << 3),
	MAX98927_PCM_Mode_Config_PCM_FORMAT_LEFT  = (0x1 << 3),
	MAX98927_PCM_Mode_Config_PCM_FORMAT_TDM_0 = (0x3 << 3),
	MAX98927_PCM_Mode_Config_PCM_FORMAT_TDM_1 = (0x4 << 3),
	MAX98927_PCM_Mode_Config_PCM_FORMAT_TDM_2 = (0x5 << 3),
	MAX98927_PCM_Mode_Config_PCM_FORMAT_ = (0x6 << 3),
	MAX98927_PCM_Mode_Config_PCM_CHANSZ_Mask  = (0x3 << 6),
	MAX98927_PCM_Mode_Config_PCM_CHANSZ_16  = (0x1 << 6),
	MAX98927_PCM_Mode_Config_PCM_CHANSZ_24  = (0x2 << 6),
	MAX98927_PCM_Mode_Config_PCM_CHANSZ_32  = (0x3 << 6),

	/* PCM Master Mode (Address 0x0021)*/
	MAX98927_PCM_Master_Mode  = 0x0021,
	MAX98927_PCM_Master_Mode_PCM_MSTR_MODE_Mask  = (0x3 << 0),
	MAX98927_PCM_Master_Mode_PCM_MSTR_MODE_SLAVE = (0x0 << 0),
	MAX98927_PCM_Master_Mode_PCM_MSTR_MODE_MASTER = (0x3 << 0),
	MAX98927_PCM_Master_Mode_PCM_MSTR_MODE_HYBRID = (0x1 << 0),
	MAX98927_PCM_Master_Mode_PCM_MCLK_RATE_Mask  = (0xf << 2),
	MAX98927_PCM_Master_Mode_PCM_CLK_SOURCE = (0x1 << 6),

	/* PCM Clock setup (Address 0x0022)*/
	MAX98927_PCM_Clock_setup  = 0x0022,
	MAX98927_PCM_Clock_setup_PCM_BSEL_Mask  = (0xf << 0),
	MAX98927_PCM_Clock_setup_PCM_MSEL_Mask  = (0xf << 4),

	/* PCM Sample rate setup 1 (Address 0x0023)*/
	MAX98927_PCM_Sample_rate_setup_1 = 0x0023,
	MAX98927_PCM_Sample_rate_setup_1_DIG_IF_SR_Mask  = (0xf << 0),
	MAX98927_PCM_Sample_rate_setup_1_DIG_IF_SR_8000  = (0x0 << 0),
	MAX98927_PCM_Sample_rate_setup_1_DIG_IF_SR_11025  = (0x1 << 0),
	MAX98927_PCM_Sample_rate_setup_1_DIG_IF_SR_12000  = (0x2 << 0),
	MAX98927_PCM_Sample_rate_setup_1_DIG_IF_SR_16000  = (0x3 << 0),
	MAX98927_PCM_Sample_rate_setup_1_DIG_IF_SR_22050  = (0x4 << 0),
	MAX98927_PCM_Sample_rate_setup_1_DIG_IF_SR_24000  = (0x5 << 0),
	MAX98927_PCM_Sample_rate_setup_1_DIG_IF_SR_32000  = (0x6 << 0),
	MAX98927_PCM_Sample_rate_setup_1_DIG_IF_SR_44100  = (0x7 << 0),
	MAX98927_PCM_Sample_rate_setup_1_DIG_IF_SR_48000  = (0x8 << 0),

	/* PCM Sample rate setup 1 (Address 0x0024)*/
	MAX98927_PCM_Sample_rate_setup_2 = 0x0024,
	MAX98927_PCM_Sample_rate_setup_2_IVADC_SR_Mask   = (0xf << 0),
	MAX98927_PCM_Sample_rate_setup_2_SPK_SR_Mask = (0xf << 4),
	MAX98927_PCM_Sample_rate_setup_2_SPK_SR_0001 = (0x0 << 4),
	MAX98927_PCM_Sample_rate_setup_2_SPK_SR_0011 = (0x2 << 4),
	MAX98927_PCM_Sample_rate_setup_2_SPK_SR_0101 = (0x4 << 4),
	MAX98927_PCM_Sample_rate_setup_2_SPK_SR_0111 = (0x6 << 4),
	MAX98927_PCM_Sample_rate_setup_2_SPK_SR_1001 = (0x8 << 4),
	MAX98927_PCM_Sample_rate_setup_2_SPK_SR_1011 = (0xa << 4),
	MAX98927_PCM_Sample_rate_setup_2_SPK_SR_1101 = (0xc << 4),
	MAX98927_PCM_Sample_rate_setup_2_SPK_SR_  = (0xf << 4),

	/* PCM to speaker monomix A (Address 0x0025)*/
	MAX98927_PCM_to_speaker_monomix_A  = 0x0025,
	MAX98927_PCM_to_spkmonomix_A_DMONOMIX_CH0_SOURCE_Mask  = (0xf << 0),
	MAX98927_PCM_to_spkmonomix_A_DMONOMIX_CFG_Mask  = (0x3 << 6),
	MAX98927_PCM_to_spkmonomix_A_DMONOMIX_CFG_1 = (0x0 << 6),
	MAX98927_PCM_to_spkmonomix_A_DMONOMIX_CFG_3 = (0x0 << 6),

	/* PCM to speaker monomix B (Address 0x0026)*/
	MAX98927_PCM_to_spkmonomix_B  = 0x0026,
	MAX98927_PCM_to_spkmonomix_B_DMONOMIX_CH1_SOURCE_Mask  = (0xf << 0),

	/* ICC RX Enables A (Address 0x0027)*/
	MAX98927_ICC_RX_Enables_A = 0x0027,
	MAX98927_ICC_RX_Enables_A_ICC_RX_CH0_EN = (0x1 << 0),
	MAX98927_ICC_RX_Enables_A_ICC_RX_CH1_EN = (0x1 << 1),
	MAX98927_ICC_RX_Enables_A_ICC_RX_CH2_EN = (0x1 << 2),
	MAX98927_ICC_RX_Enables_A_ICC_RX_CH3_EN = (0x1 << 3),
	MAX98927_ICC_RX_Enables_A_ICC_RX_CH4_EN = (0x1 << 4),
	MAX98927_ICC_RX_Enables_A_ICC_RX_CH5_EN = (0x1 << 5),
	MAX98927_ICC_RX_Enables_A_ICC_RX_CH6_EN = (0x1 << 6),
	MAX98927_ICC_RX_Enables_A_ICC_RX_CH7_EN = (0x1 << 7),

	/* ICC RX Enables B (Address 0x0028)*/
	MAX98927_ICC_RX_Enables_B = 0x0028,
	MAX98927_ICC_RX_Enables_B_ICC_RX_CH8_EN = (0x1 << 0),
	MAX98927_ICC_RX_Enables_B_ICC_RX_CH9_EN = (0x1 << 1),
	MAX98927_ICC_RX_Enables_B_ICC_RX_CH10_EN  = (0x1 << 2),
	MAX98927_ICC_RX_Enables_B_ICC_RX_CH11_EN  = (0x1 << 3),
	MAX98927_ICC_RX_Enables_B_ICC_RX_CH12_EN  = (0x1 << 4),
	MAX98927_ICC_RX_Enables_B_ICC_RX_CH13_EN  = (0x1 << 5),
	MAX98927_ICC_RX_Enables_B_ICC_RX_CH14_EN  = (0x1 << 6),
	MAX98927_ICC_RX_Enables_B_ICC_RX_CH15_EN  = (0x1 << 7),

	/* ICC TX Enables A (Address 0x002b)*/
	MAX98927_ICC_TX_Enables_A = 0x002b,
	MAX98927_ICC_TX_Enables_A_ICC_TX_CH0_EN = (0x1 << 0),
	MAX98927_ICC_TX_Enables_A_ICC_TX_CH1_EN = (0x1 << 1),
	MAX98927_ICC_TX_Enables_A_ICC_TX_CH2_EN = (0x1 << 2),
	MAX98927_ICC_TX_Enables_A_ICC_TX_CH3_EN = (0x1 << 3),
	MAX98927_ICC_TX_Enables_A_ICC_TX_CH4_EN = (0x1 << 4),
	MAX98927_ICC_TX_Enables_A_ICC_TX_CH5_EN = (0x1 << 5),
	MAX98927_ICC_TX_Enables_A_ICC_TX_CH6_EN = (0x1 << 6),
	MAX98927_ICC_TX_Enables_A_ICC_TX_CH7_EN = (0x1 << 7),

	/* ICC TX Enables B (Address 0x002c)*/
	MAX98927_ICC_TX_Enables_B = 0x002c,
	MAX98927_ICC_TX_Enables_B_ICC_TX_CH8_EN = (0x1 << 0),
	MAX98927_ICC_TX_Enables_B_ICC_TX_CH9_EN = (0x1 << 1),
	MAX98927_ICC_TX_Enables_B_ICC_TX_CH10_EN  = (0x1 << 2),
	MAX98927_ICC_TX_Enables_B_ICC_TX_CH11_EN  = (0x1 << 3),
	MAX98927_ICC_TX_Enables_B_ICC_TX_CH12_EN  = (0x1 << 4),
	MAX98927_ICC_TX_Enables_B_ICC_TX_CH13_EN  = (0x1 << 5),
	MAX98927_ICC_TX_Enables_B_ICC_TX_CH14_EN  = (0x1 << 6),
	MAX98927_ICC_TX_Enables_B_ICC_TX_CH15_EN  = (0x1 << 7),

	/* ICC Data Order Select (Address 0x002d)*/
	MAX98927_ICC_Data_Order_Select = 0x002d,
	MAX98927_ICC_Data_Order_Select_ICC_DRIVE_MODE = (0x1 << 3),

	/* ICC HiZ Manual Mode (Address 0x002e)*/
	MAX98927_ICC_HiZ_Manual_Mode  = 0x002e,
	MAX98927_ICC_HiZ_Manual_Mode_ICC_TX_HIZ_MANUAL   = (0x1 << 0),
	MAX98927_ICC_HiZ_Manual_Mode_ICC_TX_EXTRA_HIZ = (0x1 << 1),

	/* ICC TX HiZ Enables A (Address 0x002f)*/
	MAX98927_ICC_TX_HiZ_Enables_A = 0x002f,
	MAX98927_ICC_TX_HiZ_Enables_A_ICC_TX_CH0_HIZ = (0x1 << 0),
	MAX98927_ICC_TX_HiZ_Enables_A_ICC_TX_CH1_HIZ = (0x1 << 1),
	MAX98927_ICC_TX_HiZ_Enables_A_ICC_TX_CH2_HIZ = (0x1 << 2),
	MAX98927_ICC_TX_HiZ_Enables_A_ICC_TX_CH3_HIZ = (0x1 << 3),
	MAX98927_ICC_TX_HiZ_Enables_A_ICC_TX_CH4_HIZ = (0x1 << 4),
	MAX98927_ICC_TX_HiZ_Enables_A_ICC_TX_CH5_HIZ = (0x1 << 5),
	MAX98927_ICC_TX_HiZ_Enables_A_ICC_TX_CH6_HIZ = (0x1 << 6),
	MAX98927_ICC_TX_HiZ_Enables_A_ICC_TX_CH7_HIZ = (0x1 << 7),

	/* ICC TX HiZ Enables B (Address 0x0030)*/
	MAX98927_ICC_TX_HiZ_Enables_B = 0x0030,
	MAX98927_ICC_TX_HiZ_Enables_B_ICC_TX_CH8_HIZ = (0x1 << 0),
	MAX98927_ICC_TX_HiZ_Enables_B_ICC_TX_CH9_HIZ = (0x1 << 1),
	MAX98927_ICC_TX_HiZ_Enables_B_ICC_TX_CH10_HIZ = (0x1 << 2),
	MAX98927_ICC_TX_HiZ_Enables_B_ICC_TX_CH11_HIZ = (0x1 << 3),
	MAX98927_ICC_TX_HiZ_Enables_B_ICC_TX_CH12_HIZ = (0x1 << 4),
	MAX98927_ICC_TX_HiZ_Enables_B_ICC_TX_CH13_HIZ = (0x1 << 5),
	MAX98927_ICC_TX_HiZ_Enables_B_ICC_TX_CH14_HIZ = (0x1 << 6),
	MAX98927_ICC_TX_HiZ_Enables_B_ICC_TX_CH15_HIZ = (0x1 << 7),

	/* ICC Link Enables (Address 0x0031)*/
	MAX98927_ICC_Link_Enables = 0x0031,
	MAX98927_ICC_Link_Enables_ICC_LINK_EN = (0x1 << 1),

	/* PDM Tx Enables (Address 0x0032)*/
	MAX98927_PDM_Tx_Enables   = 0x0032,
	MAX98927_PDM_Tx_Enables_PDM_TX_EN  = (0x1 << 0),
	MAX98927_PDM_Tx_Enables_PDM_TX_CLK_DIV2 = (0x1 << 1),

	/* PDM Tx HiZ Control (Address 0x0033)*/
	MAX98927_PDM_Tx_HiZ_Control = 0x0033,
	MAX98927_PDM_Tx_HiZ_Control_PDM_TX_HIZ  = (0x1 << 0),

	/* PDM Tx Control (Address 0x0034)*/
	MAX98927_PDM_Tx_Control   = 0x0034,
	MAX98927_PDM_Tx_Control_PDM_TX_CH0_SOURCE = (0x1 << 0),
	MAX98927_PDM_Tx_Control_PDM_TX_CH1_SOURCE = (0x1 << 1),

	/* PDM Rx Enable (Address 0x0034)*/
	MAX98927_PDM_Rx_Enable = 0x0035,
	MAX98927_PDM_Rx_Enable_PDM_RX_EN = (0x1 << 0),
	MAX98927_PDM_Rx_Enable_PDM_DSP_EN  = (0x1 << 1),
	MAX98927_PDM_Rx_Enable_PDM_DITH_EN = (0x1 << 2),
	MAX98927_PDM_Rx_Enable_PDM_RX_CH_SEL = (0x1 << 3),
	MAX98927_PDM_Rx_Enable_PDM_FIFO_RDY_LVL_Mask = (0xf << 4),

	/* AMP volume control (Address 0x0036)*/
	MAX98927_AMP_volume_control = 0x0036,
	MAX98927_AMP_volume_control_AMP_VOL_Mask  = (0x7f << 0),
	MAX98927_AMP_volume_control_AMP_VOL_SEL = (0x1 << 7),

	/* AMP DSP Config (Address 0x0037)*/
	MAX98927_AMP_DSP_Config   = 0x0037,
	MAX98927_AMP_DSP_Config_AMP_DCBLK_EN = (0x1 << 0),
	MAX98927_AMP_DSP_Config_AMP_DITH_EN  = (0x1 << 1),
	MAX98927_AMP_DSP_Config_DAC_HALF_REF_CURRENT = (0x1 << 2),
	MAX98927_AMP_DSP_Config_DAC_DOUBLE_RFB  = (0x1 << 3),
	MAX98927_AMP_DSP_Config_AMP_VOL_RMP_BYPASS = (0x1 << 4),
	MAX98927_AMP_DSP_Config_DAC_INVERT = (0x1 << 5),

	/* Tone Generator and DC Config (Address 0x0038)*/
	MAX98927_Tone_Generator_and_DC_Config = 0x0038,
	MAX98927_Tone_Generator_and_DC_Config_TONE_CONFIG_Mask  = (0xf << 0),

	/* DRE Control (Address 0x0039)*/
	MAX98927_DRE_Control  = 0x0039,
	MAX98927_DRE_Control_DRE_EN = (0x1 << 0),

	/* AMP enables (Address 0x003a)*/
	MAX98927_AMP_enables  = 0x003a,
	MAX98927_AMP_enables_SPK_EN = (0x1 << 0),

	/* Speaker source select (Address 0x003b)*/
	MAX98927_Speaker_source_select = 0x003b,
	MAX98927_Speaker_source_select_SPK_SOURCE_Mask   = (0x3 << 0),
	MAX98927_Speaker_source_select_SPK_SOURCE_01 = (0x0 << 0),
	MAX98927_Speaker_source_select_SPK_SOURCE_11 = (0x2 << 0),

	/* Speaker Gain (Address 0x003c)*/
	MAX98927_Speaker_Gain = 0x003c,
	MAX98927_Speaker_Gain_SPK_PCM_GAIN_Mask = (0x7 << 0),
	MAX98927_Speaker_Gain_SPK_PCM_GAIN_001  = (0x0 << 0),
	MAX98927_Speaker_Gain_SPK_PCM_GAIN_011  = (0x2 << 0),
	MAX98927_Speaker_Gain_SPK_PCM_GAIN_101  = (0x4 << 0),
	MAX98927_Speaker_Gain_SPK_PCM_GAIN_111  = (0x6 << 0),
	MAX98927_Speaker_Gain_SPK_PDM_GAIN_Mask = (0x7 << 4),
	MAX98927_Speaker_Gain_SPK_PDM_GAIN_001  = (0x0 << 4),
	MAX98927_Speaker_Gain_SPK_PDM_GAIN_011  = (0x2 << 4),
	MAX98927_Speaker_Gain_SPK_PDM_GAIN_101  = (0x4 << 4),
	MAX98927_Speaker_Gain_SPK_PDM_GAIN_111  = (0x6 << 4),

	/* SSM Configuration (Address 0x003d)*/
	MAX98927_SSM_Configuration  = 0x003d,
	MAX98927_SSM_Configuration_SSM_MOD_INDEX_Mask = (0x7 << 0),
	MAX98927_SSM_Configuration_SSM_MOD_INDEX_001 = (0x0 << 0),
	MAX98927_SSM_Configuration_SSM_MOD_INDEX_011 = (0x2 << 0),
	MAX98927_SSM_Configuration_SSM_MOD_INDEX_101 = (0x4 << 0),
	MAX98927_SSM_Configuration_SSM_MOD_INDEX_ = (0x6 << 0),
	MAX98927_SSM_Configuration_SPK_FSW_SEL  = (0x1 << 3),
	MAX98927_SSM_Configuration_SSM_ENA = (0x1 << 7),

	/* Measurement enables (Address 0x003e)*/
	MAX98927_Measurement_enables  = 0x003e,
	MAX98927_Measurement_enables_IVADC_V_EN = (0x1 << 0),
	MAX98927_Measurement_enables_IVADC_I_EN = (0x1 << 1),

	/* Measurement DSP Config (Address 0x003f)*/
	MAX98927_Measurement_DSP_Config  = 0x003f,
	MAX98927_Measurement_DSP_Config_MEAS_V_DCBLK_EN  = (0x1 << 0),
	MAX98927_Measurement_DSP_Config_MEAS_I_DCBLK_EN  = (0x1 << 1),
	MAX98927_Measurement_DSP_Config_MEAS_DITH_EN = (0x1 << 2),
	MAX98927_Measurement_DSP_Config_MEAS_V_DCBLK_Mask  = (0x3 << 4),
	MAX98927_Measurement_DSP_Config_MEAS_V_DCBLK_01  = (0x0 << 4),
	MAX98927_Measurement_DSP_Config_MEAS_V_DCBLK_11  = (0x2 << 4),
	MAX98927_Measurement_DSP_Config_MEAS_I_DCBLK_Mask  = (0x3 << 6),
	MAX98927_Measurement_DSP_Config_MEAS_I_DCBLK_01  = (0x0 << 6),
	MAX98927_Measurement_DSP_Config_MEAS_I_DCBLK_11  = (0x2 << 6),

	/* Boost Control 0 (Address 0x0040)*/
	MAX98927_Boost_Control_0  = 0x0040,
	MAX98927_Boost_Control_0_BST_VOUT_Mask  = (0x1f << 0),
	MAX98927_Boost_Control_0_EXT_PVDD_EN = (0x1 << 7),

	/* Boost Control 3 (Address 0x0041)*/
	MAX98927_Boost_Control_3  = 0x0041,
	MAX98927_Boost_Control_3_BST_SKIPLOAD_Mask = (0x3 << 0),
	MAX98927_Boost_Control_3_BST_SKIPLOAD_01  = (0x0 << 0),
	MAX98927_Boost_Control_3_BST_SKIPLOAD_11  = (0x2 << 0),
	MAX98927_Boost_Control_3_BST_PHASE_Mask = (0x7 << 2),
	MAX98927_Boost_Control_3_BST_PHASE_001  = (0x0 << 2),
	MAX98927_Boost_Control_3_BST_PHASE_011  = (0x2 << 2),
	MAX98927_Boost_Control_3_BST_PHASE_  = (0x1 << 2),
	MAX98927_Boost_Control_3_BST_SLOWSTART  = (0x1 << 5),

	/* Boost Control 1 (Address 0x0042)*/
	MAX98927_Boost_Control_1  = 0x0042,
	/*#BYHAND width >= 5:*/
	MAX98927_Boost_Control_1_BST_ILIM_Mask  = (0x3f << 0),

	/* Meas ADC Config (Address 0x0043)*/
	MAX98927_Meas_ADC_Config  = 0x0043,
	MAX98927_Meas_ADC_Config_MEAS_ADC_CH0_EN  = (0x1 << 0),
	MAX98927_Meas_ADC_Config_MEAS_ADC_CH1_EN  = (0x1 << 1),
	MAX98927_Meas_ADC_Config_MEAS_ADC_CH2_EN  = (0x1 << 2),

	/* Meas ADC Base Divide MSByte (Address 0x0044)*/
	MAX98927_Meas_ADC_Base_Divide_MSByte = 0x0044,
	/*#BYHAND width >= 5:*/
	MAX98927_Meas_ADC_Base_Divide_MSByte_MEAS_ADC_BASE_DIV_Mask
		= (0xff << 0),

	/* Meas ADC Base Divide LSByte (Address 0x0045)*/
	MAX98927_Meas_ADC_Base_Divide_LSByte = 0x0045,
	/*#BYHAND width >= 5:*/
	MAX98927_Meas_ADC_Base_Divide_LSByte_MEAS_ADC_BASE_DIV_Mask
		= (0xff << 0),

	/* Meas ADC Chan 0 Divide (Address 0x0046)*/
	MAX98927_Meas_ADC_Chan_0_Divide  = 0x0046,
	/*#BYHAND width >= 5:*/
	MAX98927_Meas_ADC_Chan_0_Divide_MEAS_ADC_CH0_DIV_Mask = (0xff << 0),

	/* Meas ADC Chan 1 Divide (Address 0x0047)*/
	MAX98927_Meas_ADC_Chan_1_Divide  = 0x0047,
	/*#BYHAND width >= 5:*/
	MAX98927_Meas_ADC_Chan_1_Divide_MEAS_ADC_CH1_DIV_Mask = (0xff << 0),

	/* Meas ADC Chan 2 Divide (Address 0x0048)*/
	MAX98927_Meas_ADC_Chan_2_Divide  = 0x0048,
	/*#BYHAND width >= 5:*/
	MAX98927_Meas_ADC_Chan_2_Divide_MEAS_ADC_CH2_DIV_Mask = (0xff << 0),

	/* Meas ADC Chan 0 Filt Config (Address 0x0049)*/
	MAX98927_Meas_ADC_Chan_0_Filt_Config = 0x0049,
	MAX98927_Meas_ADC_Chan_0_Filt_Config_MEAS_ADC_CH0_FILT_AVG_Mask
		= (0x7 << 0),
	MAX98927_Meas_ADC_Chan_0_Filt_Config_MEAS_ADC_CH0_FILT_AVG_001
		= (0x0 << 0),
	MAX98927_Meas_ADC_Chan_0_Filt_Config_MEAS_ADC_CH0_FILT_AVG_011
		= (0x2 << 0),
	MAX98927_Meas_ADC_Chan_0_Filt_Config_MEAS_ADC_CH0_FILT_AVG_101
		= (0x4 << 0),
	MAX98927_Meas_ADC_Chan_0_Filt_Config_MEAS_ADC_CH0_FILT_EN
		= (0x1 << 3),

	/* Meas ADC Chan 1 Filt Config (Address 0x004a)*/
	MAX98927_Meas_ADC_Chan_1_Filt_Config = 0x004a,
	MAX98927_Meas_ADC_Chan_1_Filt_Config_MEAS_ADC_CH1_FILT_AVG_Mask
		= (0x7 << 0),
	MAX98927_Meas_ADC_Chan_1_Filt_Config_MEAS_ADC_CH1_FILT_AVG_001
		= (0x0 << 0),
	MAX98927_Meas_ADC_Chan_1_Filt_Config_MEAS_ADC_CH1_FILT_AVG_011
		= (0x2 << 0),
	MAX98927_Meas_ADC_Chan_1_Filt_Config_MEAS_ADC_CH1_FILT_AVG_101
		= (0x4 << 0),
	MAX98927_Meas_ADC_Chan_1_Filt_Config_MEAS_ADC_CH1_FILT_EN
		= (0x1 << 3),

	/* Meas ADC Chan 2 Filt Config (Address 0x004b)*/
	MAX98927_Meas_ADC_Chan_2_Filt_Config = 0x004b,
	MAX98927_Meas_ADC_Chan_2_Filt_Config_MEAS_ADC_CH2_FILT_AVG_Mask
		= (0x7 << 0),
	MAX98927_Meas_ADC_Chan_2_Filt_Config_MEAS_ADC_CH2_FILT_AVG_001
		= (0x0 << 0),
	MAX98927_Meas_ADC_Chan_2_Filt_Config_MEAS_ADC_CH2_FILT_AVG_011
		= (0x2 << 0),
	MAX98927_Meas_ADC_Chan_2_Filt_Config_MEAS_ADC_CH2_FILT_AVG_101
		= (0x4 << 0),
	MAX98927_Meas_ADC_Chan_2_Filt_Config_MEAS_ADC_CH2_FILT_EN
		= (0x1 << 3),

	/* Meas ADC Chan 0 Readback (Address 0x004c)*/
	MAX98927_Meas_ADC_Chan_0_Readback  = 0x004c,
	/*#BYHAND width >= 5:*/
	MAX98927_Meas_ADC_Chan_0_Readback_MEAS_ADC_CH0_DATA_Mask
		= (0xff << 0),

	/* Meas ADC Chan 1 Readback (Address 0x004d)*/
	MAX98927_Meas_ADC_Chan_1_Readback  = 0x004d,
	/*#BYHAND width >= 5:*/
	MAX98927_Meas_ADC_Chan_1_Readback_MEAS_ADC_CH1_DATA_Mask
		= (0xff << 0),

	/* Meas ADC Chan 2 Readback (Address 0x004e)*/
	MAX98927_Meas_ADC_Chan_2_Readback  = 0x004e,
	/*#BYHAND width >= 5:*/
	MAX98927_Meas_ADC_Chan_2_Readback_MEAS_ADC_CH2_DATA_Mask
		= (0xff << 0),

	/* Brownout status (Address 0x0051)*/
	MAX98927_Brownout_status  = 0x0051,
	MAX98927_Brownout_status_BDE_STATE_Mask = (0xf << 0),

	/* Brownout enables (Address 0x0052)*/
	MAX98927_Brownout_enables = 0x0052,
	MAX98927_Brownout_enables_BDE_EN = (0x1 << 0),
	MAX98927_Brownout_enables_BDE_AMP_EN = (0x1 << 1),
	MAX98927_Brownout_enables_AMP_DSP_EN = (0x1 << 2),

	/* Brownout level infinite hold (Address 0x0053)*/
	MAX98927_Brownout_level_infinite_hold = 0x0053,
	MAX98927_Brownout_level_infinite_hold_BDE_L8_INF_HLD = (0x1 << 1),

	/* Brownout level infinite hold clear (Address 0x0054)*/
	MAX98927_Brownout_level_infinite_hold_clear  = 0x0054,
	MAX98927_Brownout_level_infinite_hold_clear_BDE_L8_HLD_RLS
		= (0x1 << 1),

	/* Brownout level hold (Address 0x0055)*/
	MAX98927_Brownout_level_hold  = 0x0055,
	/*#BYHAND width >= 5:*/
	MAX98927_Brownout_level_hold_BDE_HLD_Mask = (0xff << 0),

	/* Brownout  level 1 threshold (Address 0x0056)*/
	MAX98927_Brownout__level_1_threshold = 0x0056,
	/*#BYHAND width >= 5:*/
	MAX98927_Brownout__level_1_threshold_BDE_L1_VTHRESH_Mask  = (0xff << 0),

	/* Brownout  level 2 threshold (Address 0x0057)*/
	MAX98927_Brownout__level_2_threshold = 0x0057,
	/*#BYHAND width >= 5:*/
	MAX98927_Brownout__level_2_threshold_BDE_L2_VTHRESH_Mask  = (0xff << 0),

	/* Brownout  level 3 threshold (Address 0x0058)*/
	MAX98927_Brownout__level_3_threshold = 0x0058,
	/*#BYHAND width >= 5:*/
	MAX98927_Brownout__level_3_threshold_BDE_L3_VTHRESH_Mask  = (0xff << 0),

	/* Brownout  level 4 threshold (Address 0x0059)*/
	MAX98927_Brownout__level_4_threshold = 0x0059,
	/*#BYHAND width >= 5:*/
	MAX98927_Brownout__level_4_threshold_BDE_L4_VTHRESH_Mask  = (0xff << 0),

	/* Brownout  level 5 threshold (Address 0x005a)*/
	MAX98927_Brownout__level_5_threshold = 0x005a,
	/*#BYHAND width >= 5:*/
	MAX98927_Brownout__level_5_threshold_BDE_L5_VTHRESH_Mask  = (0xff << 0),

	/* Brownout  level 6 threshold (Address 0x005b)*/
	MAX98927_Brownout__level_6_threshold = 0x005b,
	/*#BYHAND width >= 5:*/
	MAX98927_Brownout__level_6_threshold_BDE_L6_VTHRESH_Mask  = (0xff << 0),

	/* Brownout  level 7 threshold (Address 0x005c)*/
	MAX98927_Brownout__level_7_threshold = 0x005c,
	/*#BYHAND width >= 5:*/
	MAX98927_Brownout__level_7_threshold_BDE_L7_VTHRESH_Mask  = (0xff << 0),

	/* Brownout  level 8 threshold (Address 0x005d)*/
	MAX98927_Brownout__level_8_threshold = 0x005d,
	/*#BYHAND width >= 5:*/
	MAX98927_Brownout__level_8_threshold_BDE_L8_VTHRESH_Mask  = (0xff << 0),

	/* Brownout threshold hysterysis (Address 0x005e)*/
	MAX98927_Brownout_threshold_hysterysis  = 0x005e,
	/*#BYHAND width >= 5:*/
	MAX98927_Brownout_threshold_hysterysis_BDE_VTHRESH_HYST_Mask
		= (0xff << 0),
	/* Brownout AMP limiter attack/release (Address 0x005f)*/
	MAX98927_Brownout_AMP_limiter_attack_release = 0x005f,
	MAX98927_Brownout_AMP_limiter_attack_release_AMP_LIM_RLS_Mask
		= (0xf << 0),
	MAX98927_Brownout_AMP_limiter_attack_release_AMP_LIM_RLS_0001
		= (0x0 << 0),
	MAX98927_Brownout_AMP_limiter_attack_release_AMP_LIM_RLS_0011
		= (0x2 << 0),
	MAX98927_Brownout_AMP_limiter_attack_release_AMP_LIM_RLS_0101
		= (0x4 << 0),
	MAX98927_Brownout_AMP_limiter_attack_release_AMP_LIM_RLS_0111
		= (0x6 << 0),
	MAX98927_Brownout_AMP_limiter_attack_release_AMP_LIM_RLS_1001
		= (0x8 << 0),
	MAX98927_Brownout_AMP_limiter_attack_release_AMP_LIM_RLS_1011
		= (0xa << 0),
	MAX98927_Brownout_AMP_limiter_attack_release_AMP_LIM_RLS_1101
		= (0xc << 0),
	MAX98927_Brownout_AMP_limiter_attack_release_AMP_LIM_RLS_1111
		= (0xe << 0),
	MAX98927_Brownout_AMP_limiter_attack_release_AMP_LIM_ATK_Mask
		= (0xf << 4),
	MAX98927_Brownout_AMP_limiter_attack_release_AMP_LIM_ATK_0001
		= (0x0 << 4),
	MAX98927_Brownout_AMP_limiter_attack_release_AMP_LIM_ATK_0011
		= (0x2 << 4),
	MAX98927_Brownout_AMP_limiter_attack_release_AMP_LIM_ATK_0101
		= (0x4 << 4),
	MAX98927_Brownout_AMP_limiter_attack_release_AMP_LIM_ATK_0111
		= (0x6 << 4),
	MAX98927_Brownout_AMP_limiter_attack_release_AMP_LIM_ATK_1001
		= (0x8 << 4),
	MAX98927_Brownout_AMP_limiter_attack_release_AMP_LIM_ATK_1011
		= (0xa << 4),
	MAX98927_Brownout_AMP_limiter_attack_release_AMP_LIM_ATK_1101
		= (0xc << 4),
	MAX98927_Brownout_AMP_limiter_attack_release_AMP_LIM_ATK_1111
		= (0xe << 4),

	/* Brownout AMP gain attack/release (Address 0x0060)*/
	MAX98927_Brownout_AMP_gain_attack_release = 0x0060,
	MAX98927_Brownout_AMP_gain_attack_release_AMP_GAIN_RLS_Mask
		= (0xf << 0),
	MAX98927_Brownout_AMP_gain_attack_release_AMP_GAIN_RLS_0001
		= (0x0 << 0),
	MAX98927_Brownout_AMP_gain_attack_release_AMP_GAIN_RLS_0011
		= (0x2 << 0),
	MAX98927_Brownout_AMP_gain_attack_release_AMP_GAIN_RLS_0101
		= (0x4 << 0),
	MAX98927_Brownout_AMP_gain_attack_release_AMP_GAIN_RLS_0111
		= (0x6 << 0),
	MAX98927_Brownout_AMP_gain_attack_release_AMP_GAIN_RLS_1001
		= (0x8 << 0),
	MAX98927_Brownout_AMP_gain_attack_release_AMP_GAIN_RLS_1011
		= (0xa << 0),
	MAX98927_Brownout_AMP_gain_attack_release_AMP_GAIN_RLS_1101
		= (0xc << 0),
	MAX98927_Brownout_AMP_gain_attack_release_AMP_GAIN_RLS_1111
		= (0xe << 0),
	MAX98927_Brownout_AMP_gain_attack_release_AMP_GAIN_ATK_Mask
		= (0xf << 4),
	MAX98927_Brownout_AMP_gain_attack_release_AMP_GAIN_ATK_0001
		= (0x0 << 4),
	MAX98927_Brownout_AMP_gain_attack_release_AMP_GAIN_ATK_0011
		= (0x2 << 4),
	MAX98927_Brownout_AMP_gain_attack_release_AMP_GAIN_ATK_0101
		= (0x4 << 4),
	MAX98927_Brownout_AMP_gain_attack_release_AMP_GAIN_ATK_0111
		= (0x6 << 4),
	MAX98927_Brownout_AMP_gain_attack_release_AMP_GAIN_ATK_1001
		= (0x8 << 4),
	MAX98927_Brownout_AMP_gain_attack_release_AMP_GAIN_ATK_1011
		= (0xa << 4),
	MAX98927_Brownout_AMP_gain_attack_release_AMP_GAIN_ATK_1101
		= (0xc << 4),
	MAX98927_Brownout_AMP_gain_attack_release_AMP_GAIN_ATK_1111
		= (0xe << 4),

	/* Brownout AMP1 clip mode (Address 0x0061)*/
	MAX98927_Brownout_AMP1_clip_mode = 0x0061,
	MAX98927_Brownout_AMP1_clip_mode_AMP_CLIP_MODE   = (0x1 << 0),

	/* Brownout  level 1 current limit (Address 0x0062)*/
	MAX98927_Brownout__level_1_current_limit  = 0x0062,
	/*#BYHAND width >= 5:*/
	MAX98927_Brownout__level_1_current_limit_BDE_L1_ILIM_Mask
		= (0x3f << 0),

	/* Brownout  level 1 amp 1 control 1 (Address 0x0063)*/
	MAX98927_Brownout__level_1_amp_1_control_1 = 0x0063,
	MAX98927_Brownout__level_1_amp_1_control_1_BDE_L1_AMP1_LIM_Mask
		= (0xf << 0),

	/* Brownout  level 1 amp 1 control 2 (Address 0x0064)*/
	MAX98927_Brownout__level_1_amp_1_control_2 = 0x0064,
	/*#BYHAND width >= 5:*/
	MAX98927_Brownout__level_1_amp_1_control_2_BDE_L1_AMP1_CLIP_Mask
		= (0x3f << 0),

	/* Brownout  level 1 amp 1 control 3 (Address 0x0065)*/
	MAX98927_Brownout__level_1_amp_1_control_3 = 0x0065,
	/*#BYHAND width >= 5:*/
	MAX98927_Brownout__level_1_amp_1_control_3_BDE_L1_AMP1_GAIN_Mask
		= (0x3f << 0),

	/* Brownout  level 2 current limit (Address 0x0066)*/
	MAX98927_Brownout__level_2_current_limit  = 0x0066,
	/*#BYHAND width >= 5:*/
	MAX98927_Brownout__level_2_current_limit_BDE_L2_ILIM_Mask = (0x3f << 0),

	/* Brownout  level 2 amp 1 control 1 (Address 0x0067)*/
	MAX98927_Brownout__level_2_amp_1_control_1 = 0x0067,
	MAX98927_Brownout__level_2_amp_1_control_1_BDE_L2_AMP1_LIM_Mask
		= (0xf << 0),

	/* Brownout  level 2 amp 1 control 2 (Address 0x0068)*/
	MAX98927_Brownout__level_2_amp_1_control_2 = 0x0068,
	/*#BYHAND width >= 5:*/
	MAX98927_Brownout__level_2_amp_1_control_2_BDE_L2_AMP1_CLIP_Mask
		= (0x3f << 0),

	/* Brownout  level 2 amp 1 control 3 (Address 0x0069)*/
	MAX98927_Brownout__level_2_amp_1_control_3 = 0x0069,
	/*#BYHAND width >= 5:*/
	MAX98927_Brownout__level_2_amp_1_control_3_BDE_L2_AMP1_GAIN_Mask
		= (0x3f << 0),

	/* Brownout  level 3 current limit (Address 0x006a)*/
	MAX98927_Brownout__level_3_current_limit  = 0x006a,
	/*#BYHAND width >= 5:*/
	MAX98927_Brownout__level_3_current_limit_BDE_L3_ILIM_Mask = (0x3f << 0),

	/* Brownout  level 3 amp 1 control 1 (Address 0x006b)*/
	MAX98927_Brownout__level_3_amp_1_control_1 = 0x006b,
	MAX98927_Brownout__level_3_amp_1_control_1_BDE_L3_AMP1_LIM_Mask
		= (0xf << 0),

	/* Brownout  level 3 amp 1 control 2 (Address 0x006c)*/
	MAX98927_Brownout__level_3_amp_1_control_2 = 0x006c,
	/*#BYHAND width >= 5:*/
	MAX98927_Brownout__level_3_amp_1_control_2_BDE_L3_AMP1_CLIP_Mask
		= (0x3f << 0),

	/* Brownout  level 3 amp 1 control 3 (Address 0x006d)*/
	MAX98927_Brownout__level_3_amp_1_control_3 = 0x006d,
	/*#BYHAND width >= 5:*/
	MAX98927_Brownout__level_3_amp_1_control_3_BDE_L3_AMP1_GAIN_Mask
		= (0x3f << 0),

	/* Brownout  level 4 current limit (Address 0x006e)*/
	MAX98927_Brownout__level_4_current_limit  = 0x006e,
	/*#BYHAND width >= 5:*/
	MAX98927_Brownout__level_4_current_limit_BDE_L4_ILIM_Mask = (0x3f << 0),

	/* Brownout  level 4 amp 1 control 1 (Address 0x006f)*/
	MAX98927_Brownout__level_4_amp_1_control_1 = 0x006f,
	MAX98927_Brownout__level_4_amp_1_control_1_BDE_L4_AMP1_LIM_Mask
		= (0xf << 0),

	/* Brownout  level 4 amp 1 control 2 (Address 0x0070)*/
	MAX98927_Brownout__level_4_amp_1_control_2 = 0x0070,
	/*#BYHAND width >= 5:*/
	MAX98927_Brownout__level_4_amp_1_control_2_BDE_L4_AMP1_CLIP_Mask
		= (0x3f << 0),

	/* Brownout  level 4 amp 1 control 3 (Address 0x0071)*/
	MAX98927_Brownout__level_4_amp_1_control_3 = 0x0071,
	/*#BYHAND width >= 5:*/
	MAX98927_Brownout__level_4_amp_1_control_3_BDE_L4_AMP1_GAIN_Mask
		= (0x3f << 0),

	/* Brownout  level 5 current limit (Address 0x0072)*/
	MAX98927_Brownout__level_5_current_limit  = 0x0072,
	/*#BYHAND width >= 5:*/
	MAX98927_Brownout__level_5_current_limit_BDE_L5_ILIM_Mask = (0x3f << 0),

	/* Brownout  level 5 amp 1 control 1 (Address 0x0073)*/
	MAX98927_Brownout__level_5_amp_1_control_1 = 0x0073,
	MAX98927_Brownout__level_5_amp_1_control_1_BDE_L5_AMP1_LIM_Mask
		= (0xf << 0),

	/* Brownout  level 5 amp 1 control 2 (Address 0x0074)*/
	MAX98927_Brownout__level_5_amp_1_control_2 = 0x0074,
	/*#BYHAND width >= 5:*/
	MAX98927_Brownout__level_5_amp_1_control_2_BDE_L5_AMP1_CLIP_Mask
		= (0x3f << 0),

	/* Brownout  level 5 amp 1 control 3 (Address 0x0075)*/
	MAX98927_Brownout__level_5_amp_1_control_3 = 0x0075,
	/*#BYHAND width >= 5:*/
	MAX98927_Brownout__level_5_amp_1_control_3_BDE_L5_AMP1_GAIN_Mask
		= (0x3f << 0),

	/* Brownout  level 6 current limit (Address 0x0076)*/
	MAX98927_Brownout__level_6_current_limit  = 0x0076,
	/*#BYHAND width >= 5:*/
	MAX98927_Brownout__level_6_current_limit_BDE_L6_ILIM_Mask = (0x3f << 0),

	/* Brownout  level 6 amp 1 control 1 (Address 0x0077)*/
	MAX98927_Brownout__level_6_amp_1_control_1 = 0x0077,
	MAX98927_Brownout__level_6_amp_1_control_1_BDE_L6_AMP1_LIM_Mask
		= (0xf << 0),

	/* Brownout  level 6 amp 1 control 2 (Address 0x0078)*/
	MAX98927_Brownout__level_6_amp_1_control_2 = 0x0078,
	/*#BYHAND width >= 5:*/
	MAX98927_Brownout__level_6_amp_1_control_2_BDE_L6_AMP1_CLIP_Mask
		= (0x3f << 0),

	/* Brownout  level 6 amp 1 control 3 (Address 0x0079)*/
	MAX98927_Brownout__level_6_amp_1_control_3 = 0x0079,
	/*#BYHAND width >= 5:*/
	MAX98927_Brownout__level_6_amp_1_control_3_BDE_L6_AMP1_GAIN_Mask
		= (0x3f << 0),

	/* Brownout  level 7 current limit (Address 0x007a)*/
	MAX98927_Brownout__level_7_current_limit  = 0x007a,
	/*#BYHAND width >= 5:*/
	MAX98927_Brownout__level_7_current_limit_BDE_L7_ILIM_Mask = (0x3f << 0),

	/* Brownout  level 7 amp 1 control 1 (Address 0x007b)*/
	MAX98927_Brownout__level_7_amp_1_control_1 = 0x007b,
	MAX98927_Brownout__level_7_amp_1_control_1_BDE_L7_AMP1_LIM_Mask
		= (0xf << 0),

	/* Brownout  level 7 amp 1 control 2 (Address 0x007c)*/
	MAX98927_Brownout__level_7_amp_1_control_2 = 0x007c,
	/*#BYHAND width >= 5:*/
	MAX98927_Brownout__level_7_amp_1_control_2_BDE_L7_AMP1_CLIP_Mask
		= (0x3f << 0),

	/* Brownout  level 7 amp 1 control 3 (Address 0x007d)*/
	MAX98927_Brownout__level_7_amp_1_control_3 = 0x007d,
	/*#BYHAND width >= 5:*/
	MAX98927_Brownout__level_7_amp_1_control_3_BDE_L7_AMP1_GAIN_Mask
		= (0x3f << 0),

	/* Brownout  level 8 current limit (Address 0x007e)*/
	MAX98927_Brownout__level_8_current_limit  = 0x007e,
	/*#BYHAND width >= 5:*/
	MAX98927_Brownout__level_8_current_limit_BDE_L8_ILIM_Mask = (0x3f << 0),

	/* Brownout  level 8 amp 1 control 1 (Address 0x007f)*/
	MAX98927_Brownout__level_8_amp_1_control_1 = 0x007f,
	MAX98927_Brownout__level_8_amp_1_control_1_BDE_L8_AMP1_LIM_Mask
		= (0xf << 0),

	/* Brownout  level 8 amp 1 control 2 (Address 0x0080)*/
	MAX98927_Brownout__lvl_8_amp_1_control_2 = 0x0080,
	/*#BYHAND width >= 5:*/
	MAX98927_Brownout__lvl_8_amp_1_control_2_BDE_L8_AMP1_CLIP_Mask
		= (0x3f << 0),
	MAX98927_Brownout__lvl_8_amp_1_control_2_BDE_L8_AMP1_MUTE
		= (0x1 << 7),

	/* Brownout  level 8 amp 1 control 3 (Address 0x0081)*/
	MAX98927_Brownout__level_8_amp_1_control_3 = 0x0081,
	/*#BYHAND width >= 5:*/
	MAX98927_Brownout__level_8_amp_1_control_3_BDE_L8_AMP1_GAIN_Mask
		= (0x3f << 0),

	/* Env Tracker Vout Headroom (Address 0x0082)*/
	MAX98927_Env_Tracker_Vout_Headroom = 0x0082,
	/*#BYHAND width >= 5:*/
	MAX98927_Env_Tracker_Vout_Head_ENV_TRACKER_BST_VOUT_HEADROOM_Mask
		= (0x1f << 0),

	/* Env Tracker Boost Vout Delay (Address 0x0083)*/
	MAX98927_Env_Tracker_Boost_Vout_Delay = 0x0083,
	/*#BYHAND width >= 5:*/
	MAX98927_Env_Tracker_Boost_V_Delay_ENV_TRACKER_BST_VOUT_DELAY_Mask
		= (0x1f << 0),
	MAX98927_Env_Tracker_Boost_Vout_Delay_ENV_TRACKER_BDE_MODE
		= (0x1 << 7),

	/* Env Tracker Release Rate (Address 0x0084)*/
	MAX98927_Env_Tracker_Release_Rate  = 0x0084,
	MAX98927_Env_Tracker_Release_Rate_ENV_TRACKER_RLS_RATE_Mask
		= (0x7 << 0),
	MAX98927_Env_Tracker_Release_Rate_ENV_TRACKER_RLS_RATE_001
		= (0x0 << 0),
	MAX98927_Env_Tracker_Release_Rate_ENV_TRACKER_RLS_RATE_011
		= (0x2 << 0),
	MAX98927_Env_Tracker_Release_Rate_ENV_TRACKER_RLS_RATE_101
		= (0x4 << 0),
	MAX98927_Env_Tracker_Release_Rate_ENV_TRACKER_RLS_RATE_111
		= (0x6 << 0),
	MAX98927_Env_Tracker_Release_Rate_ENV_TRACKER_PEAK_DET_LPF_BYP_EN
		= (0x1 << 3),
	MAX98927_Env_Tracker_Release_Rate_ENV_TRACKER_RLS_RATE_SCALE_Mask
		= (0x3 << 4),
	MAX98927_Env_Tracker_Release_Rate_ENV_TRACKER_RLS_RATE_SCALE_01
		= (0x0 << 4),
	MAX98927_Env_Tracker_Release_Rate_ENV_TRACKER_RLS_RATE_SCALE_11
		= (0x2 << 4),

	/* Env Tracker Hold Rate (Address 0x0085)*/
	MAX98927_Env_Tracker_Hold_Rate = 0x0085,
	MAX98927_Env_Tracker_Hold_Rate_ENV_TRACKER_HOLD_RATE_Mask
		= (0x7 << 0),
	MAX98927_Env_Tracker_Hold_Rate_ENV_TRACKER_HOLD_RATE_001
		= (0x0 << 0),
	MAX98927_Env_Tracker_Hold_Rate_ENV_TRACKER_HOLD_RATE_011
		= (0x2 << 0),
	MAX98927_Env_Tracker_Hold_Rate_ENV_TRACKER_HOLD_RATE_101
		= (0x4 << 0),
	MAX98927_Env_Tracker_Hold_Rate_ENV_TRACKER_HOLD_RATE_111
		= (0x6 << 0),

	/* Env Tracker Control (Address 0x0086)*/
	MAX98927_Env_Tracker_Control  = 0x0086,
	MAX98927_Env_Tracker_Control_ENV_TRACKER_EN  = (0x1 << 0),

	/* Env Tracker  Boost Vout ReadBack (Address 0x0087)*/
	MAX98927_Env_Tracker__Boost_Vout_ReadBack = 0x0087,
	/*#BYHAND width >= 5:*/
	MAX98927_Env_Tracker__Boost_Vout_RB_ENV_TRACKER_BST_VOUT_RD_Mask
		= (0x1f << 0),

	/* Advanced Settings (Address 0x0089)*/
	MAX98927_Advanced_Settings  = 0x0089,
	MAX98927_Advanced_Settings_DAC_HALF_FIR = (0x1 << 0),
	MAX98927_Advanced_Settings_PDM_MOD_SEL  = (0x1 << 1),
	MAX98927_Advanced_Settings_ISOCH_EN  = (0x1 << 2),

	/* DAC Test 1 (Address 0x009f)*/
	MAX98927_DAC_Test_1 = 0x009f,
	MAX98927_DAC_Test_1_DAC_PCM_TIMING = (0x1 << 0),
	MAX98927_DAC_Test_1_DAC_HALFI_AMP  = (0x1 << 1),
	MAX98927_DAC_Test_1_DAC_LONG_HOLD  = (0x1 << 3),
	MAX98927_DAC_Test_1_DAC_DISABLE_CHOP = (0x1 << 4),
	MAX98927_DAC_Test_1_DAC_TM  = (0x1 << 5),
	MAX98927_DAC_Test_1_DAC_INVERT_DACCLK = (0x1 << 6),

	/* Authentication key 0 (Address 0x00ea)*/
	MAX98927_Authentication_key_0 = 0x00ea,
	/*#BYHAND width >= 5:*/
	MAX98927_Authentication_key_0_AUTH_KEY_Mask  = (0xff << 0),

	/* Authentication key 1 (Address 0x00eb)*/
	MAX98927_Authentication_key_1 = 0x00eb,
	/*#BYHAND width >= 5:*/
	MAX98927_Authentication_key_1_AUTH_KEY_Mask  = (0xff << 0),

	/* Authentication key 2 (Address 0x00ec)*/
	MAX98927_Authentication_key_2 = 0x00ec,
	/*#BYHAND width >= 5:*/
	MAX98927_Authentication_key_2_AUTH_KEY_Mask  = (0xff << 0),

	/* Authentication key 3 (Address 0x00ed)*/
	MAX98927_Authentication_key_3 = 0x00ed,
	/*#BYHAND width >= 5:*/
	MAX98927_Authentication_key_3_AUTH_KEY_Mask  = (0xff << 0),

	/* Authentication enable (Address 0x00ee)*/
	MAX98927_Authentication_enable = 0x00ee,
	MAX98927_Authentication_enable_AUTH_EN  = (0x1 << 0),

	/* Authentication result 0 (Address 0x00ef)*/
	MAX98927_Authentication_result_0 = 0x00ef,
	/*#BYHAND width >= 5:*/
	MAX98927_Authentication_result_0_AUTH_RESULT_Mask  = (0xff << 0),

	/* Authentication result 1 (Address 0x00f0)*/
	MAX98927_Authentication_result_1 = 0x00f0,
	/*#BYHAND width >= 5:*/
	MAX98927_Authentication_result_1_AUTH_RESULT_Mask  = (0xff << 0),

	/* Authentication result 2 (Address 0x00f1)*/
	MAX98927_Authentication_result_2 = 0x00f1,
	/*#BYHAND width >= 5:*/
	MAX98927_Authentication_result_2_AUTH_RESULT_Mask  = (0xff << 0),

	/* Authentication result 3 (Address 0x00f2)*/
	MAX98927_Authentication_result_3 = 0x00f2,
	/*#BYHAND width >= 5:*/
	MAX98927_Authentication_result_3_AUTH_RESULT_Mask  = (0xff << 0),

	/* Authentication result 4 (Address 0x00f3)*/
	MAX98927_Authentication_result_4 = 0x00f3,
	/*#BYHAND width >= 5:*/
	MAX98927_Authentication_result_4_AUTH_RESULT_Mask  = (0xff << 0),

	/* Authentication result 5 (Address 0x00f4)*/
	MAX98927_Authentication_result_5 = 0x00f4,
	/*#BYHAND width >= 5:*/
	MAX98927_Authentication_result_5_AUTH_RESULT_Mask  = (0xff << 0),

	/* Authentication result 6 (Address 0x00f5)*/
	MAX98927_Authentication_result_6 = 0x00f5,
	/*#BYHAND width >= 5:*/
	MAX98927_Authentication_result_6_AUTH_RESULT_Mask  = (0xff << 0),

	/* Authentication result 7 (Address 0x00f6)*/
	MAX98927_Authentication_result_7 = 0x00f6,
	/*#BYHAND width >= 5:*/
	MAX98927_Authentication_result_7_AUTH_RESULT_Mask  = (0xff << 0),

	/* Authentication result 8 (Address 0x00f7)*/
	MAX98927_Authentication_result_8 = 0x00f7,
	/*#BYHAND width >= 5:*/
	MAX98927_Authentication_result_8_AUTH_RESULT_Mask  = (0xff << 0),

	/* Authentication result 9 (Address 0x00f8)*/
	MAX98927_Authentication_result_9 = 0x00f8,
	/*#BYHAND width >= 5:*/
	MAX98927_Authentication_result_9_AUTH_RESULT_Mask  = (0xff << 0),

	/* Authentication result 10 (Address 0x00f9)*/
	MAX98927_Authentication_result_10  = 0x00f9,
	/*#BYHAND width >= 5:*/
	MAX98927_Authentication_result_10_AUTH_RESULT_Mask = (0xff << 0),

	/* Authentication result 11 (Address 0x00fa)*/
	MAX98927_Authentication_result_11  = 0x00fa,
	/*#BYHAND width >= 5:*/
	MAX98927_Authentication_result_11_AUTH_RESULT_Mask = (0xff << 0),

	/* Authentication result 12 (Address 0x00fb)*/
	MAX98927_Authentication_result_12  = 0x00fb,
	/*#BYHAND width >= 5:*/
	MAX98927_Authentication_result_12_AUTH_RESULT_Mask = (0xff << 0),

	/* Authentication result 13 (Address 0x00fc)*/
	MAX98927_Authentication_result_13  = 0x00fc,
	/*#BYHAND width >= 5:*/
	MAX98927_Authentication_result_13_AUTH_RESULT_Mask = (0xff << 0),

	/* Authentication result 14 (Address 0x00fd)*/
	MAX98927_Authentication_result_14  = 0x00fd,
	/*#BYHAND width >= 5:*/
	MAX98927_Authentication_result_14_AUTH_RESULT_Mask = (0xff << 0),

	/* Authentication result 15 (Address 0x00fe)*/
	MAX98927_Authentication_result_15  = 0x00fe,
	/*#BYHAND width >= 5:*/
	MAX98927_Authentication_result_15_AUTH_RESULT_Mask = (0xff << 0),

	/* Global Enable (Address 0x00ff)*/
	MAX98927_Global_Enable = 0x00ff,
	MAX98927_Global_Enable_EN = (0x1 << 0),
	/* Software Reset (Address 0x0100)*/
	MAX98927_Software_Reset   = 0x0100,
	MAX98927_Software_Reset_RST = (0x1 << 0),

	/* REV ID (Address 0x01ff)*/
	MAX98927_REV_ID  = 0x01ff,
	/*#BYHAND width >= 5:*/
	MAX98927_REV_ID_REV_ID_Mask = (0xff << 0),
} MAX98927Registers;

struct max98927_reg_default {
	unsigned int ch;
	unsigned int reg;
	unsigned int def;
};
struct max98927_priv {
	struct regmap *regmap;
	struct regmap *sub_regmap;
	struct snd_soc_codec *codec;
	struct max98927_pdata *pdata;
	const uint32_t *regcfg;
	uint32_t regcfg_sz;
	unsigned int spk_gain;
	unsigned int sysclk;
	unsigned int v_l_slot;
	unsigned int i_l_slot;
	unsigned int v_r_slot;
	unsigned int i_r_slot;
	bool interleave_mode;
	unsigned int ch_size;
	unsigned int rate;
	unsigned int iface;
	unsigned int master;
	unsigned int thres_hyste;
	unsigned int level5_hold;
	unsigned int level6_hold;
	unsigned int level7_hold;
	unsigned int level8_hold;
	unsigned int amp_limit;
	unsigned int amp_limit_rel;
	unsigned int amp1_level;
	unsigned int amp2_level;
	unsigned int amp3_level;
	unsigned int amp1_level8;
	unsigned int amp2_level8;
	unsigned int amp3_level8;
	unsigned int amp1_level7;
	unsigned int amp2_level7;
	unsigned int amp3_level7;
	unsigned int amp1_level6;
	unsigned int amp2_level6;
	unsigned int amp3_level6;
	unsigned int amp1_level5;
	unsigned int amp2_level5;
	unsigned int amp3_level5;
	unsigned int digital_gain;
	unsigned int pdm_gain;
	unsigned int level_hold;
	struct i2c_client *sub_i2c;
	int sub_reg;
	int sub_bus;
	int spkamp1_reset_gpio;
	int spkamp2_reset_gpio;
	struct regulator *dvdd_core;
};

#define MAX98927_GLOBAL_SHIFT 0
#define M98927_DAI_MSEL_SHIFT 4
#define M98927_DAI_BSEL_SHIFT 0
#define M98927_DAI_BSEL_32 (2 << M98927_DAI_BSEL_SHIFT)
#define M98927_DAI_BSEL_48 (3 << M98927_DAI_BSEL_SHIFT)
#define M98927_DAI_BSEL_64 (4 << M98927_DAI_BSEL_SHIFT)
#define M98927_DAI_MSEL_32 (2 << M98927_DAI_MSEL_SHIFT)
#define M98927_DAI_MSEL_48 (3 << M98927_DAI_MSEL_SHIFT)
#define M98927_DAI_MSEL_64 (4 << M98927_DAI_MSEL_SHIFT)
#define MAX98927_Speaker_Gain_Width 3
#define MAX98927_SPK_RMP_EN_SHIFT 4
#define MAX98927_PDM_GAIN_SHIFT 4
#define MAX98927_pdm_Gain_Width 3
#define MAX98927_AMP_VOL_WIDTH 7
#define MAX98927_AMP_VOL_LOCATION_SHIFT 7
#define MAX98927_PDM_Rx_Enable_PDM_CH_SHIFT 3
#define MAX98927_PCM_to_speaker_monomix_A_SHIFT 6
#define MAX98927_PCM_Sample_rate_setup_2_DIG_IF_SR_48000    (0x8 << 4)
#define MAX98927_PCM_FORMAT_DSP_A    (0x3 << 3)
#define MAX98927_DRE_Control_DRE_SHIFT   0x1
#define MAX98927_PCM_Master_Mode_PCM_MCLK_RATE_SHIFT    (2)
#define MAX98927_Brownout_AMP_limiter_attack_release_shift 4
#define MAX98927_BDE_DSP_SHIFT 2
#define MAX98927_Speaker_Gain_SPK_PDM_GAIN_SHIFT (4)
#define MAX98927_BDE_AMP_SHIFT (1)
#define MAX98927_PCM_Tx_Ch_Sources_A_I_SHIFT (4)
#endif
