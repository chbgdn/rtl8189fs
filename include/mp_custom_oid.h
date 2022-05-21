/******************************************************************************
 *
 * Copyright(c) 2007 - 2017 Realtek Corporation.
 *
 * This program is free software; you can redistribute it and/or modify it
 * under the terms of version 2 of the GNU General Public License as
 * published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
 * FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License for
 * more details.
 *
 *****************************************************************************/
#ifndef	__CUSTOM_OID_H
#define __CUSTOM_OID_H

/* by Owen
 * 0xFF818000 - 0xFF81802F		RTL8180 Mass Production Kit
 * 0xFF818500 - 0xFF81850F		RTL8185 Setup Utility
 * 0xFF818580 - 0xFF81858F		RTL8185 Phy Status Utility */

/*  */

/* by Owen for Production Kit
 * For Production Kit with Agilent Equipments
 * in order to make our custom oids hopefully somewhat unique
 * we will use 0xFF (indicating implementation specific OID)
 * 81(first byte of non zero Realtek unique identifier)
 * 80 (second byte of non zero Realtek unique identifier)
 * XX (the custom OID number - providing 255 possible custom oids) */

#define OID_RT_PRO_RESET_DUT				0xFF818000
#define OID_RT_PRO_SET_DATA_RATE			0xFF818001
#define OID_RT_PRO_START_TEST				0xFF818002
#define OID_RT_PRO_STOP_TEST			0xFF818003
#define OID_RT_PRO_SET_PREAMBLE				0xFF818004
#define OID_RT_PRO_SET_SCRAMBLER			0xFF818005
#define OID_RT_PRO_SET_FILTER_BB			0xFF818006
#define OID_RT_PRO_SET_MANUAL_DIVERSITY_BB		0xFF818007
#define OID_RT_PRO_SET_CHANNEL_DIRECT_CALL		0xFF818008
#define OID_RT_PRO_SET_SLEEP_MODE_DIRECT_CALL		0xFF818009
#define OID_RT_PRO_SET_WAKE_MODE_DIRECT_CALL		0xFF81800A

#define OID_RT_PRO_SET_TX_ANTENNA_BB			0xFF81800D
#define OID_RT_PRO_SET_ANTENNA_BB			0xFF81800E
#define OID_RT_PRO_SET_CR_SCRAMBLER			0xFF81800F
#define OID_RT_PRO_SET_CR_NEW_FILTER			0xFF818010
#define OID_RT_PRO_SET_TX_POWER_CONTROL			0xFF818011
#define OID_RT_PRO_SET_CR_TX_CONFIG			0xFF818012
#define OID_RT_PRO_GET_TX_POWER_CONTROL			0xFF818013
#define OID_RT_PRO_GET_CR_SIGNAL_QUALITY		0xFF818014
#define OID_RT_PRO_SET_CR_SETPOINT			0xFF818015
#define OID_RT_PRO_SET_INTEGRATOR			0xFF818016
#define OID_RT_PRO_SET_SIGNAL_QUALITY			0xFF818017
#define OID_RT_PRO_GET_INTEGRATOR			0xFF818018
#define OID_RT_PRO_GET_SIGNAL_QUALITY			0xFF818019
#define OID_RT_PRO_QUERY_EEPROM_TYPE			0xFF81801A
#define OID_RT_PRO_WRITE_MAC_ADDRESS			0xFF81801B
#define OID_RT_PRO_READ_MAC_ADDRESS			0xFF81801C
#define OID_RT_PRO_WRITE_CIS_DATA			0xFF81801D
#define OID_RT_PRO_READ_CIS_DATA			0xFF81801E
#define OID_RT_PRO_WRITE_POWER_CONTROL			0xFF81801F
#define OID_RT_PRO_READ_POWER_CONTROL			0xFF818020
#define OID_RT_PRO_WRITE_EEPROM				0xFF818021
#define OID_RT_PRO_READ_EEPROM				0xFF818022
#define OID_RT_PRO_RESET_TX_PACKET_SENT			0xFF818023
#define OID_RT_PRO_QUERY_TX_PACKET_SENT			0xFF818024
#define OID_RT_PRO_RESET_RX_PACKET_RECEIVED		0xFF818025
#define OID_RT_PRO_QUERY_RX_PACKET_RECEIVED		0xFF818026
#define OID_RT_PRO_QUERY_RX_PACKET_CRC32_ERROR		0xFF818027
#define OID_RT_PRO_QUERY_CURRENT_ADDRESS		0xFF818028
#define OID_RT_PRO_QUERY_PERMANENT_ADDRESS		0xFF818029
#define OID_RT_PRO_SET_PHILIPS_RF_PARAMETERS		0xFF81802A
#define OID_RT_PRO_RECEIVE_PACKET			0xFF81802C
/* added by Owen on 04/08/03 for Cameo's request */
#define OID_RT_PRO_WRITE_EEPROM_BYTE			0xFF81802D
#define OID_RT_PRO_READ_EEPROM_BYTE			0xFF81802E
#define OID_RT_PRO_SET_MODULATION			0xFF81802F
/*  */

/* Sean		 */
#define OID_RT_DRIVER_OPTION				0xFF818080
#define OID_RT_RF_OFF					0xFF818081
#define OID_RT_AUTH_STATUS				0xFF818082

/* ************************************************************************ */
#define OID_RT_PRO_SET_CONTINUOUS_TX			0xFF81800B
#define OID_RT_PRO_SET_SINGLE_CARRIER_TX		0xFF81800C
#define OID_RT_PRO_SET_CARRIER_SUPPRESSION_TX		0xFF81802B
#define OID_RT_PRO_SET_SINGLE_TONE_TX			0xFF818043
/* ************************************************************************ */


/* by Owen for RTL8185 Phy Status Report Utility */
#define OID_RT_UTILITY_FALSE_ALARM_COUNTERS				0xFF818580
#define OID_RT_UTILITY_SELECT_DEBUG_MODE				0xFF818581
#define OID_RT_UTILITY_SELECT_SUBCARRIER_NUMBER				0xFF818582
#define OID_RT_UTILITY_GET_RSSI_STATUS					0xFF818583
#define OID_RT_UTILITY_GET_FRAME_DETECTION_STATUS			0xFF818584
#define OID_RT_UTILITY_GET_AGC_AND_FREQUENCY_OFFSET_ESTIMATION_STATUS	0xFF818585
#define OID_RT_UTILITY_GET_CHANNEL_ESTIMATION_STATUS			0xFF818586
/*  */

/* by Owen on 03/09/19-03/09/22 for RTL8185 */
#define OID_RT_WIRELESS_MODE				0xFF818500
#define OID_RT_SUPPORTED_RATES				0xFF818501
#define OID_RT_DESIRED_RATES				0xFF818502
#define OID_RT_WIRELESS_MODE_STARTING_ADHOC		0xFF818503
/*  */

#define OID_RT_GET_CONNECT_STATE	0xFF030001
#define OID_RT_RESCAN		0xFF030002
#define OID_RT_SET_KEY_LENGTH				0xFF030003
#define OID_RT_SET_DEFAULT_KEY_ID			0xFF030004

#define OID_RT_SET_CHANNEL				0xFF010182
#define OID_RT_SET_SNIFFER_MODE	0xFF010183
#define OID_RT_GET_SIGNAL_QUALITY	0xFF010184
#define OID_RT_GET_SMALL_PACKET_CRC			0xFF010185
#define OID_RT_GET_MIDDLE_PACKET_CRC			0xFF010186
#define OID_RT_GET_LARGE_PACKET_CRC			0xFF010187
#define OID_RT_GET_TX_RETRY				0xFF010188
#define OID_RT_GET_RX_RETRY				0xFF010189
#define OID_RT_PRO_SET_FW_DIG_STATE			0xFF01018A/* S */
#define OID_RT_PRO_SET_FW_RA_STATE			0xFF01018B/* S */

#define OID_RT_GET_RX_TOTAL_PACKET			0xFF010190
#define OID_RT_GET_TX_BEACON_OK				0xFF010191
#define OID_RT_GET_TX_BEACON_ERR			0xFF010192
#define OID_RT_GET_RX_ICV_ERR				0xFF010193
#define OID_RT_SET_ENCRYPTION_ALGORITHM			0xFF010194
#define OID_RT_SET_NO_AUTO_RESCAN			0xFF010195
#define OID_RT_GET_PREAMBLE_MODE			0xFF010196
#define OID_RT_GET_DRIVER_UP_DELTA_TIME			0xFF010197
#define OID_RT_GET_AP_IP				0xFF010198
#define OID_RT_GET_CHANNELPLAN				0xFF010199
#define OID_RT_SET_PREAMBLE_MODE			0xFF01019A
#define OID_RT_SET_BCN_INTVL				0xFF01019B
#define OID_RT_GET_RF_VENDER				0xFF01019C
#define OID_RT_DEDICATE_PROBE				0xFF01019D
#define OID_RT_PRO_RX_FILTER_PATTERN			0xFF01019E

#define OID_RT_GET_DCST_CURRENT_THRESHOLD		0xFF01019F

#define OID_RT_GET_CCA_ERR				0xFF0101A0
#define OID_RT_GET_CCA_UPGRADE_THRESHOLD		0xFF0101A1
#define OID_RT_GET_CCA_FALLBACK_THRESHOLD		0xFF0101A2

#define OID_RT_GET_CCA_UPGRADE_EVALUATE_TIMES		0xFF0101A3
#define OID_RT_GET_CCA_FALLBACK_EVALUATE_TIMES		0xFF0101A4

/* by Owen on 03/31/03 for Cameo's request */
#define OID_RT_SET_RATE_ADAPTIVE			0xFF0101A5
/*  */
#define OID_RT_GET_DCST_EVALUATE_PERIOD			0xFF0101A5
#define OID_RT_GET_DCST_TIME_UNIT_INDEX			0xFF0101A6
#define OID_RT_GET_TOTAL_TX_BYTES			0xFF0101A7
#define OID_RT_GET_TOTAL_RX_BYTES			0xFF0101A8
#define OID_RT_CURRENT_TX_POWER_LEVEL			0xFF0101A9
#define OID_RT_GET_ENC_KEY_MISMATCH_COUNT		0xFF0101AA
#define OID_RT_GET_ENC_KEY_MATCH_COUNT			0xFF0101AB
#define OID_RT_GET_CHANNEL				0xFF0101AC

#define OID_RT_SET_CHANNELPLAN				0xFF0101AD
#define OID_RT_GET_HARDWARE_RADIO_OFF			0xFF0101AE
#define OID_RT_CHANNELPLAN_BY_COUNTRY			0xFF0101AF
#define OID_RT_SCAN_AVAILABLE_BSSID			0xFF0101B0
#define OID_RT_GET_HARDWARE_VERSION			0xFF0101B1
#define OID_RT_GET_IS_ROAMING				0xFF0101B2
#define OID_RT_GET_IS_PRIVACY				0xFF0101B3
#define OID_RT_GET_KEY_MISMATCH				0xFF0101B4
#define OID_RT_SET_RSSI_ROAM_TRAFFIC_TH			0xFF0101B5
#define OID_RT_SET_RSSI_ROAM_SIGNAL_TH			0xFF0101B6
#define OID_RT_RESET_LOG				0xFF0101B7
#define OID_RT_GET_LOG					0xFF0101B8
#define OID_RT_SET_INDICATE_HIDDEN_AP			0xFF0101B9
#define OID_RT_GET_HEADER_FAIL				0xFF0101BA
#define OID_RT_SUPPORTED_WIRELESS_MODE			0xFF0101BB
#define OID_RT_GET_CHANNEL_LIST				0xFF0101BC
#define OID_RT_GET_SCAN_IN_PROGRESS			0xFF0101BD
#define OID_RT_GET_TX_INFO				0xFF0101BE
#define OID_RT_RF_READ_WRITE_OFFSET			0xFF0101BF
#define OID_RT_RF_READ_WRITE				0xFF0101C0

/* For Netgear request. 2005.01.13, by rcnjko. */
#define OID_RT_FORCED_DATA_RATE				0xFF0101C1
#define OID_RT_WIRELESS_MODE_FOR_SCAN_LIST		0xFF0101C2
/* For Netgear request. 2005.02.17, by rcnjko. */
#define OID_RT_GET_BSS_WIRELESS_MODE			0xFF0101C3
/* For AZ project. 2005.06.27, by rcnjko. */
#define OID_RT_SCAN_WITH_MAGIC_PACKET			0xFF0101C4

/* Vincent 8185MP */
#define OID_RT_PRO_RX_FILTER				0xFF0111C0

/* Andy TEST
 * #define OID_RT_PRO_WRITE_REGISTRY			0xFF0111C1
 * #define OID_RT_PRO_READ_REGISTRY			0xFF0111C2 */
#define OID_CE_USB_WRITE_REGISTRY			0xFF0111C1
#define OID_CE_USB_READ_REGISTRY			0xFF0111C2


#define OID_RT_PRO_SET_INITIAL_GAIN			0xFF0111C3
#define OID_RT_PRO_SET_BB_RF_STANDBY_MODE		0xFF0111C4
#define OID_RT_PRO_SET_BB_RF_SHUTDOWN_MODE		0xFF0111C5
#define OID_RT_PRO_SET_TX_CHARGE_PUMP			0xFF0111C6
#define OID_RT_PRO_SET_RX_CHARGE_PUMP			0xFF0111C7
#define OID_RT_PRO_RF_WRITE_REGISTRY			0xFF0111C8
#define OID_RT_PRO_RF_READ_REGISTRY			0xFF0111C9
#define OID_RT_PRO_QUERY_RF_TYPE			0xFF0111CA

/* AP OID */
#define OID_RT_AP_GET_ASSOCIATED_STATION_LIST		0xFF010300
#define OID_RT_AP_GET_CURRENT_TIME_STAMP		0xFF010301
#define OID_RT_AP_SWITCH_INTO_AP_MODE			0xFF010302
#define OID_RT_AP_SET_DTIM_PERIOD			0xFF010303
#define OID_RT_AP_SUPPORTED				0xFF010304	/* Determine if driver supports AP mode. 2004.08.27, by rcnjko. */
#define OID_RT_AP_SET_PASSPHRASE			0xFF010305	/* Set WPA-PSK passphrase into authenticator. 2005.07.08, byrcnjko. */

/* 8187MP. 2004.09.06, by rcnjko. */
#define OID_RT_PRO8187_WI_POLL				0xFF818780
#define OID_RT_PRO_WRITE_BB_REG				0xFF818781
#define OID_RT_PRO_READ_BB_REG				0xFF818782
#define OID_RT_PRO_WRITE_RF_REG				0xFF818783
#define OID_RT_PRO_READ_RF_REG				0xFF818784

/* Meeting House. added by Annie, 2005-07-20. */
#define OID_RT_MH_VENDER_ID				0xFFEDC100

/* 8711 MP OID added 20051230. */
#define OID_RT_PRO8711_JOIN_BSS				0xFF871100/* S */

#define OID_RT_PRO_READ_REGISTER			0xFF871101 /* Q */
#define OID_RT_PRO_WRITE_REGISTER			0xFF871102 /* S */

#define OID_RT_PRO_BURST_READ_REGISTER			0xFF871103 /* Q		 */
#define OID_RT_PRO_BURST_WRITE_REGISTER 		0xFF871104 /* S */

#define OID_RT_PRO_WRITE_TXCMD				0xFF871105 /* S */

#define OID_RT_PRO_READ16_EEPROM			0xFF871106 /* Q */
#define OID_RT_PRO_WRITE16_EEPROM			0xFF871107 /* S */

#define OID_RT_PRO_H2C_SET_COMMAND			0xFF871108 /* S */
#define OID_RT_PRO_H2C_QUERY_RESULT			0xFF871109 /* Q */

#define OID_RT_PRO8711_WI_POLL				0xFF87110A /* Q */
#define OID_RT_PRO8711_PKT_LOSS				0xFF87110B /* Q */
#define OID_RT_RD_ATTRIB_MEM				0xFF87110C/* Q */
#define OID_RT_WR_ATTRIB_MEM				0xFF87110D/* S */


/* Method 2 for H2C/C2H */
#define OID_RT_PRO_H2C_CMD_MODE				0xFF871110 /* S */
#define OID_RT_PRO_H2C_CMD_RSP_MODE			0xFF871111 /* Q */
#define OID_RT_PRO_H2C_CMD_EVENT_MODE			0xFF871112 /* S */
#define OID_RT_PRO_WAIT_C2H_EVENT			0xFF871113 /* Q */
#define OID_RT_PRO_RW_ACCESS_PROTOCOL_TEST		0xFF871114/* Q */

#define OID_RT_PRO_SCSI_ACCESS_TEST			0xFF871115 /* Q, S */

#define OID_RT_PRO_SCSI_TCPIPOFFLOAD_OUT		0xFF871116 /* S */
#define OID_RT_PRO_SCSI_TCPIPOFFLOAD_IN			0xFF871117 /* Q, S */
#define OID_RT_RRO_RX_PKT_VIA_IOCTRL			0xFF871118 /* Q */
#define OID_RT_RRO_RX_PKTARRAY_VIA_IOCTRL		0xFF871119 /* Q */

#define OID_RT_RPO_SET_PWRMGT_TEST			0xFF87111A /* S */
#define OID_RT_PRO_QRY_PWRMGT_TEST			0XFF87111B /* Q */
#define OID_RT_RPO_ASYNC_RWIO_TEST			0xFF87111C /* S */
#define OID_RT_RPO_ASYNC_RWIO_POLL			0xFF87111D /* Q */
#define OID_RT_PRO_SET_RF_INTFS				0xFF87111E /* S */
#define OID_RT_POLL_RX_STATUS				0xFF87111F /* Q */

#define OID_RT_PRO_CFG_DEBUG_MESSAGE			0xFF871120 /* Q, S */
#define OID_RT_PRO_SET_DATA_RATE_EX			0xFF871121/* S */
#define OID_RT_PRO_SET_BASIC_RATE			0xFF871122/* S */
#define OID_RT_PRO_READ_TSSI				0xFF871123/* S */
#define OID_RT_PRO_SET_POWER_TRACKING			0xFF871124/* S */


#define OID_RT_PRO_QRY_PWRSTATE				0xFF871150 /* Q */
#define OID_RT_PRO_SET_PWRSTATE				0xFF871151 /* S */

/* Method 2 , using workitem */
#define OID_RT_SET_READ_REG				0xFF871181 /* S */
#define OID_RT_SET_WRITE_REG				0xFF871182 /* S */
#define OID_RT_SET_BURST_READ_REG			0xFF871183 /* S */
#define OID_RT_SET_BURST_WRITE_REG			0xFF871184 /* S */
#define OID_RT_SET_WRITE_TXCMD				0xFF871185 /* S */
#define OID_RT_SET_READ16_EEPROM			0xFF871186 /* S */
#define OID_RT_SET_WRITE16_EEPROM			0xFF871187 /* S */
#define OID_RT_QRY_POLL_WKITEM				0xFF871188 /* Q */

/* For SDIO INTERFACE only */
#define OID_RT_PRO_SYNCPAGERW_SRAM			0xFF8711A0 /* Q, S */
#define OID_RT_PRO_871X_DRV_EXT			0xFF8711A1

/* For USB INTERFACE only */
#define OID_RT_PRO_USB_VENDOR_REQ			0xFF8711B0 /* Q, S */
#define OID_RT_PRO_SCSI_AUTO_TEST			0xFF8711B1 /* S */
#define OID_RT_PRO_USB_MAC_AC_FIFO_WRITE		0xFF8711B2 /* S */
#define OID_RT_PRO_USB_MAC_RX_FIFO_READ			0xFF8711B3 /* Q */
#define OID_RT_PRO_USB_MAC_RX_FIFO_POLLING		0xFF8711B4 /* Q */

#define OID_RT_PRO_H2C_SET_RATE_TABLE			0xFF8711FB /* S */
#define OID_RT_PRO_H2C_GET_RATE_TABLE			0xFF8711FC /* S */
#define OID_RT_PRO_H2C_C2H_LBK_TEST			0xFF8711FE

#define OID_RT_PRO_ENCRYPTION_CTRL			0xFF871200 /* Q, S */
#define OID_RT_PRO_ADD_STA_INFO				0xFF871201 /* S */
#define OID_RT_PRO_DELE_STA_INFO    			0xFF871202 /* S */
#define OID_RT_PRO_QUERY_DR_VARIABLE   			0xFF871203 /* Q */

#define OID_RT_PRO_RX_PACKET_TYPE			0xFF871204 /* Q, S */

#define OID_RT_PRO_READ_EFUSE				0xFF871205 /* Q */
#define OID_RT_PRO_WRITE_EFUSE				0xFF871206 /* S */
#define OID_RT_PRO_RW_EFUSE_PGPKT			0xFF871207 /* Q, S */
#define OID_RT_GET_EFUSE_CURRENT_SIZE			0xFF871208 /* Q */

#define OID_RT_SET_BANDWIDTH				0xFF871209 /* S */
#define OID_RT_SET_CRYSTAL_CAP				0xFF87120A /* S */

#define OID_RT_SET_RX_PACKET_TYPE    			0xFF87120B /* S */

#define OID_RT_GET_EFUSE_MAX_SIZE			0xFF87120C /* Q */

#define OID_RT_PRO_SET_TX_AGC_OFFSET			0xFF87120D /* S */

#define OID_RT_PRO_SET_PKT_TEST_MODE			0xFF87120E /* S */

#define OID_RT_PRO_FOR_EVM_TEST_SETTING			0xFF87120F /* S */

#define OID_RT_PRO_GET_THERMAL_METER			0xFF871210 /* Q */

#define OID_RT_RESET_PHY_RX_PACKET_COUNT		0xFF871211 /* S */
#define OID_RT_GET_PHY_RX_PACKET_RECEIVED		0xFF871212 /* Q */
#define OID_RT_GET_PHY_RX_PACKET_CRC32_ERROR		0xFF871213 /* Q */

#define OID_RT_SET_POWER_DOWN				0xFF871214 /* S */

#define OID_RT_GET_POWER_MODE				0xFF871215 /* Q */

#define OID_RT_PRO_EFUSE				0xFF871216 /* Q, S */
#define OID_RT_PRO_EFUSE_MAP				0xFF871217 /* Q, S */

#endif /* #ifndef	__CUSTOM_OID_H */
