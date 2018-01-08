/*
 * Copyright (c) 2013-2016 Realtek Semiconductor Corp.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

/**
 * @brief This is ported from export-rom_v02.txt
 */
SECTIONS
{
    __vectors_table = 0x0;
    Reset_Handler = 0x101;
    NMI_Handler = 0x109;
    HardFault_Handler = 0x10d;
    MemManage_Handler = 0x121;
    BusFault_Handler = 0x125;
    UsageFault_Handler = 0x129;
    HalLogUartInit = 0x201;
    HalSerialGetcRtl8195a = 0x309;
    HalSerialGetIsrEnRegRtl8195a = 0x329;
    HalSerialSetIrqEnRegRtl8195a = 0x335;
    HalCpuClkConfig = 0x341;
    HalGetCpuClk = 0x355;
    HalRomInfo = 0x39d;
    HalGetRomInfo = 0x3b5;
    HalResetVsr = 0x3c5;
    HalDelayUs = 0x899;
    HalNMIHandler = 0x8e1;
    HalHardFaultHandler = 0x911;
    HalMemManageHandler = 0xc09;
    HalBusFaultHandler = 0xc39;
    HalUsageFaultHandler = 0xc69;
    HalUart0PinCtrlRtl8195A = 0xcfd;
    HalUart1PinCtrlRtl8195A = 0xdc9;
    HalUart2PinCtrlRtl8195A = 0xe9d;
    HalSPI0PinCtrlRtl8195A = 0xf75;
    HalSPI1PinCtrlRtl8195A = 0x1015;
    HalSPI2PinCtrlRtl8195A = 0x10e5;
    HalSPI0MCSPinCtrlRtl8195A = 0x11b5;
    HalI2C0PinCtrlRtl8195A = 0x1275;
    HalI2C1PinCtrlRtl8195A = 0x1381;
    HalI2C2PinCtrlRtl8195A = 0x1459;
    HalI2C3PinCtrlRtl8195A = 0x1529;
    HalI2S0PinCtrlRtl8195A = 0x1639;
    HalI2S1PinCtrlRtl8195A = 0x176d;
    HalPCM0PinCtrlRtl8195A = 0x1845;
    HalPCM1PinCtrlRtl8195A = 0x1949;
    HalSDIODPinCtrlRtl8195A = 0x1a1d;
    HalSDIOHPinCtrlRtl8195A = 0x1a6d;
    HalMIIPinCtrlRtl8195A = 0x1ab9;
    HalWLLEDPinCtrlRtl8195A = 0x1b51;
    HalWLANT0PinCtrlRtl8195A = 0x1c0d;
    HalWLANT1PinCtrlRtl8195A = 0x1c61;
    HalWLBTCOEXPinCtrlRtl8195A = 0x1cb5;
    HalWLBTCMDPinCtrlRtl8195A = 0x1d05;
    HalNFCPinCtrlRtl8195A = 0x1d59;
    HalPWM0PinCtrlRtl8195A = 0x1da9;
    HalPWM1PinCtrlRtl8195A = 0x1ead;
    HalPWM2PinCtrlRtl8195A = 0x1fb5;
    HalPWM3PinCtrlRtl8195A = 0x20b1;
    HalETE0PinCtrlRtl8195A = 0x21b9;
    HalETE1PinCtrlRtl8195A = 0x22c1;
    HalETE2PinCtrlRtl8195A = 0x23c9;
    HalETE3PinCtrlRtl8195A = 0x24d1;
    HalEGTIMPinCtrlRtl8195A = 0x25d9;
    HalSPIFlashPinCtrlRtl8195A = 0x2679;
    HalSDRPinCtrlRtl8195A = 0x2725;
    HalJTAGPinCtrlRtl8195A = 0x280d;
    HalTRACEPinCtrlRtl8195A = 0x2861;
    HalLOGUartPinCtrlRtl8195A = 0x28b9;
    HalLOGUartIRPinCtrlRtl8195A = 0x291d;
    HalSICPinCtrlRtl8195A = 0x2981;
    HalEEPROMPinCtrlRtl8195A = 0x29d9;
    HalDEBUGPinCtrlRtl8195A = 0x2a31;
    HalPinCtrlRtl8195A = 0x2b39;
    SpicRxCmdRtl8195A = 0x2e5d;
    SpicWaitBusyDoneRtl8195A = 0x2ea5;
    SpicGetFlashStatusRtl8195A = 0x2eb5;
    SpicWaitWipDoneRtl8195A = 0x2f55;
    SpicTxCmdRtl8195A = 0x2f6d;
    SpicSetFlashStatusRtl8195A = 0x2fc1;
    SpicCmpDataForCalibrationRtl8195A = 0x3049;
    SpicLoadInitParaFromClockRtl8195A = 0x3081;
    SpicInitRtl8195A = 0x30e5;
    SpicEraseFlashRtl8195A = 0x31bd;
    SpiFlashApp = 0x3279;
    HalPeripheralIntrHandle = 0x33b5;
    HalSysOnIntrHandle = 0x3439;
    HalWdgIntrHandle = 0x3485;
    HalTimer0IntrHandle = 0x34d5;
    HalTimer1IntrHandle = 0x3525;
    HalI2C3IntrHandle = 0x3575;
    HalTimer2To7IntrHandle = 0x35c5;
    HalSpi0IntrHandle = 0x3615;
    HalGpioIntrHandle = 0x3665;
    HalUart0IntrHandle = 0x36b5;
    HalSpiFlashIntrHandle = 0x3705;
    HalUsbOtgIntrHandle = 0x3755;
    HalSdioHostIntrHandle = 0x37a5;
    HalI2s0OrPcm0IntrHandle = 0x37f5;
    HalI2s1OrPcm1IntrHandle = 0x3845;
    HalWlDmaIntrHandle = 0x3895;
    HalWlProtocolIntrHandle = 0x38e5;
    HalCryptoIntrHandle = 0x3935;
    HalGmacIntrHandle = 0x3985;
    HalGdma0Ch0IntrHandle = 0x39d5;
    HalGdma0Ch1IntrHandle = 0x3a25;
    HalGdma0Ch2IntrHandle = 0x3a75;
    HalGdma0Ch3IntrHandle = 0x3ac5;
    HalGdma0Ch4IntrHandle = 0x3b15;
    HalGdma0Ch5IntrHandle = 0x3b65;
    HalGdma1Ch0IntrHandle = 0x3bb5;
    HalGdma1Ch1IntrHandle = 0x3c05;
    HalGdma1Ch2IntrHandle = 0x3c55;
    HalGdma1Ch3IntrHandle = 0x3ca5;
    HalGdma1Ch4IntrHandle = 0x3cf5;
    HalGdma1Ch5IntrHandle = 0x3d45;
    HalSdioDeviceIntrHandle = 0x3d95;
    VectorTableInitRtl8195A = 0x3de5;
    VectorTableInitForOSRtl8195A = 0x4019;
    VectorIrqRegisterRtl8195A = 0x4029;
    VectorIrqUnRegisterRtl8195A = 0x4091;
    VectorIrqEnRtl8195A = 0x40f1;
    VectorIrqDisRtl8195A = 0x418d;
    _UartRxDmaIrqHandle = 0x422d;
    HalRuartPutCRtl8195a = 0x4281;
    HalRuartGetCRtl8195a = 0x429d;
    HalRuartRTSCtrlRtl8195a = 0x42bd;
    HalRuartGetDebugValueRtl8195a = 0x42e1;
    HalRuartGetIMRRtl8195a = 0x43e1;
    HalRuartSetIMRRtl8195a = 0x442d;
    _UartIrqHandle = 0x4465;
    HalRuartDmaInitRtl8195a = 0x4681;
    HalRuartIntDisableRtl8195a = 0x4845;
    HalRuartDeInitRtl8195a = 0x4855;
    HalRuartIntEnableRtl8195a = 0x4985;
    _UartTxDmaIrqHandle = 0x4995;
    HalRuartRegIrqRtl8195a = 0x49d1;
    HalRuartAdapterLoadDefRtl8195a = 0x4a4d;
    HalRuartTxGdmaLoadDefRtl8195a = 0x4add;
    HalRuartRxGdmaLoadDefRtl8195a = 0x4bc9;
    RuartLock = 0x4cc9;
    RuartUnLock = 0x4ced;
    HalRuartIntSendRtl8195a = 0x4d09;
    HalRuartDmaSendRtl8195a = 0x4e35;
    HalRuartStopSendRtl8195a = 0x4f89;
    HalRuartIntRecvRtl8195a = 0x504d;
    HalRuartDmaRecvRtl8195a = 0x51ad;
    HalRuartStopRecvRtl8195a = 0x52cd;
    RuartIsTimeout = 0x5385;
    HalRuartSendRtl8195a = 0x53b1;
    HalRuartRecvRtl8195a = 0x5599;
    RuartResetRxFifoRtl8195a = 0x5751;
    HalRuartResetRxFifoRtl8195a = 0x5775;
    HalRuartInitRtl8195a = 0x5829;
    HalGdmaOnOffRtl8195a = 0x5df1;
    HalGdmaChIsrEnAndDisRtl8195a = 0x5e0d;
    HalGdmaChEnRtl8195a = 0x5e51;
    HalGdmaChDisRtl8195a = 0x5e6d;
    HalGdamChInitRtl8195a = 0x5e91;
    HalGdmaChSetingRtl8195a = 0x5ebd;
    HalGdmaChBlockSetingRtl8195a = 0x000060dd;
    HalGdmaChIsrCleanRtl8195a = 0x6419;
    HalGdmaChCleanAutoSrcRtl8195a = 0x64a1;
    HalGdmaChCleanAutoDstRtl8195a = 0x6501;
    HalEFUSEPowerSwitch8195AROM = 0x6561;
    HALEFUSEOneByteReadROM = 0x65f9;
    HALEFUSEOneByteWriteROM = 0x6699;
    __rtl_memcmpb_v1_00 = 0x681d;
    __rtl_random_v1_00 = 0x6861;
    __rtl_align_to_be32_v1_00 = 0x6881;
    __rtl_memsetw_v1_00 = 0x6899;
    __rtl_memsetb_v1_00 = 0x68ad;
    __rtl_memcpyw_v1_00 = 0x68bd;
    __rtl_memcpyb_v1_00 = 0x68dd;
    __rtl_memDump_v1_00 = 0x68f5;
    __rtl_AES_set_encrypt_key = 0x6901;
    __rtl_cryptoEngine_AES_set_decrypt_key = 0x6c11;
    __rtl_cryptoEngine_set_security_mode_v1_00 = 0x6c95;
    __rtl_cryptoEngine_init_v1_00 = 0x6ea9;
    __rtl_cryptoEngine_exit_v1_00 = 0x7055;
    __rtl_cryptoEngine_reset_v1_00 = 0x70b1;
    __rtl_cryptoEngine_v1_00 = 0x70ed;
    __rtl_crypto_cipher_init_v1_00 = 0x7c69;
    __rtl_crypto_cipher_encrypt_v1_00 = 0x7c89;
    __rtl_crypto_cipher_decrypt_v1_00 = 0x7cad;
    HalSsiPinmuxEnableRtl8195a = 0x7cd5;
    HalSsiEnableRtl8195a = 0x7e45;
    HalSsiDisableRtl8195a = 0x7ef9;
    HalSsiLoadSettingRtl8195a = 0x7fad;
    HalSsiSetInterruptMaskRtl8195a = 0x8521;
    HalSsiGetInterruptMaskRtl8195a = 0x85c9;
    HalSsiSetSclkPolarityRtl8195a = 0x863d;
    HalSsiSetSclkPhaseRtl8195a = 0x8715;
    HalSsiWriteRtl8195a = 0x87e9;
    HalSsiSetDeviceRoleRtl8195a = 0x8861;
    HalSsiSetRxFifoThresholdLevelRtl8195a = 0x88c9;
    HalSsiSetTxFifoThresholdLevelRtl8195a = 0x8941;
    HalSsiReadRtl8195a = 0x89b9;
    HalSsiGetRxFifoLevelRtl8195a = 0x8a2d;
    HalSsiGetTxFifoLevelRtl8195a = 0x8aa5;
    HalSsiGetStatusRtl8195a = 0x8b1d;
    HalSsiWriteableRtl8195a = 0x8b91;
    HalSsiReadableRtl8195a = 0x8c09;
    HalSsiBusyRtl8195a = 0x8c81;
    HalSsiReadInterruptRtl8195a = 0x8cf9;
    HalSsiWriteInterruptRtl8195a = 0x8efd;
    HalSsiSetSlaveEnableRegisterRtl8195a = 0x9009;
    HalSsiGetInterruptStatusRtl8195a = 0x90d9;
    HalSsiInterruptEnableRtl8195a = 0x914d;
    HalSsiInterruptDisableRtl8195a = 0x9299;
    HalSsiGetRawInterruptStatusRtl8195a = 0x93e9;
    HalSsiGetSlaveEnableRegisterRtl8195a = 0x945d;
    HalSsiInitRtl8195a = 0x94d1;
    _SsiReadInterrupt = 0x9ba5;
    _SsiWriteInterrupt = 0x9db1;
    _SsiIrqHandle = 0x9eb1;
    HalI2CWrite32 = 0xa061;
    HalI2CRead32 = 0xa09d;
    HalI2CDeInit8195a = 0xa0dd;
    HalI2CSendRtl8195a = 0xa1f1;
    HalI2CReceiveRtl8195a = 0xa25d;
    HalI2CEnableRtl8195a = 0xa271;
    HalI2CIntrCtrl8195a = 0xa389;
    HalI2CReadRegRtl8195a = 0xa3a1;
    HalI2CWriteRegRtl8195a = 0xa3b1;
    HalI2CSetCLKRtl8195a = 0xa3c5;
    HalI2CMassSendRtl8195a = 0xa6e9;
    HalI2CClrIntrRtl8195a = 0xa749;
    HalI2CClrAllIntrRtl8195a = 0xa761;
    HalI2CInit8195a = 0xa775;
    HalI2CDMACtrl8195a = 0xaa31;
    RtkI2CIoCtrl = 0xaa61;
    RtkI2CPowerCtrl = 0xaa65;
    HalI2COpInit = 0xaa69;
    I2CIsTimeout = 0xac65;
    I2CTXGDMAISRHandle = 0xb435;
    I2CRXGDMAISRHandle = 0xb4c1;
    RtkI2CIrqInit = 0xb54d;
    RtkI2CIrqDeInit = 0xb611;
    RtkI2CPinMuxInit = 0xb675;
    RtkI2CPinMuxDeInit = 0xb7c9;
    RtkI2CDMAInit = 0xb955;
    RtkI2CInit = 0xbc95;
    RtkI2CDMADeInit = 0xbdad;
    RtkI2CDeInit = 0xbe4d;
    RtkI2CSendUserAddr = 0xbee5;
    RtkI2CSend = 0xc07d;
    RtkI2CLoadDefault = 0xce51;
    RtkSalI2COpInit = 0xcf21;
    HalI2SWrite32 = 0xcf65;
    HalI2SRead32 = 0xcf85;
    HalI2SDeInitRtl8195a = 0xcfa9;
    HalI2STxRtl8195a = 0xcfc9;
    HalI2SRxRtl8195a = 0xd011;
    HalI2SEnableRtl8195a = 0xd05d;
    HalI2SIntrCtrlRtl8195a = 0xd0b1;
    HalI2SReadRegRtl8195a = 0xd0d1;
    HalI2SClrIntrRtl8195a = 0xd0dd;
    HalI2SClrAllIntrRtl8195a = 0xd0fd;
    HalI2SInitRtl8195a = 0xd11d;
    GPIO_GetIPPinName_8195a = 0xd2e5;
    GPIO_GetChipPinName_8195a = 0xd331;
    GPIO_PullCtrl_8195a = 0xd39d;
    GPIO_FuncOn_8195a = 0xd421;
    GPIO_FuncOff_8195a = 0xd481;
    GPIO_Int_Mask_8195a = 0xd4e9;
    GPIO_Int_SetType_8195a = 0xd511;
    HAL_GPIO_IrqHandler_8195a = 0xd5fd;
    HAL_GPIO_MbedIrqHandler_8195a = 0xd645;
    HAL_GPIO_UserIrqHandler_8195a = 0xd6a1;
    HAL_GPIO_IntCtrl_8195a = 0xd6cd;
    HAL_GPIO_Init_8195a = 0xd805;
    HAL_GPIO_DeInit_8195a = 0xdac1;
    HAL_GPIO_ReadPin_8195a = 0xdbd1;
    HAL_GPIO_WritePin_8195a = 0xdc91;
    HAL_GPIO_RegIrq_8195a = 0xddad;
    HAL_GPIO_UnRegIrq_8195a = 0xddf5;
    HAL_GPIO_UserRegIrq_8195a = 0xde15;
    HAL_GPIO_UserUnRegIrq_8195a = 0xdef9;
    HAL_GPIO_MaskIrq_8195a = 0xdfc1;
    HAL_GPIO_UnMaskIrq_8195a = 0xe061;
    HAL_GPIO_IntDebounce_8195a = 0xe101;
    HAL_GPIO_GetIPPinName_8195a = 0xe1c1;
    HAL_GPIO_PullCtrl_8195a = 0xe1c9;
    DumpForOneBytes = 0xe259;
    CmdRomHelp = 0xe419;
    CmdWriteWord = 0xe491;
    CmdDumpHelfWord = 0xe505;
    CmdDumpWord = 0xe5f1;
    CmdDumpByte = 0xe6f5;
    CmdSpiFlashTool = 0xe751;
    GetRomCmdNum = 0xe7a9;
    CmdWriteByte = 0xe7ad;
    Isspace = 0xe7ed;
    Strtoul = 0xe801;
    ArrayInitialize = 0xe8b1;
    GetArgc = 0xe8c9;
    GetArgv = 0xe8f9;
    UartLogCmdExecute = 0xe95d;
    UartLogShowBackSpace = 0xe9fd;
    UartLogRecallOldCmd = 0xea39;
    UartLogHistoryCmd = 0xea71;
    UartLogCmdChk = 0xeadd;
    UartLogIrqHandle = 0xebf5;
    RtlConsolInit = 0xecc5;
    RtlConsolTaskRom = 0xed49;
    RtlExitConsol = 0xed79;
    RtlConsolRom = 0xedcd;
    HalTimerOpInit = 0xee0d;
    HalTimerIrq2To7Handle = 0xee59;
    HalGetTimerIdRtl8195a = 0xef09;
    HalTimerInitRtl8195a = 0xef3d;
    HalTimerDisRtl8195a = 0xf069;
    HalTimerEnRtl8195a = 0xf089;
    HalTimerReadCountRtl8195a = 0xf0a9;
    HalTimerIrqClearRtl8195a = 0xf0bd;
    HalTimerDumpRegRtl8195a = 0xf0d1;
    VSprintf = 0xf129;
    DiagPrintf = 0xf39d;
    DiagSPrintf = 0xf3b9;
    DiagSnPrintf = 0xf3d1;
    prvDiagPrintf = 0xf3ed;
    prvDiagSPrintf = 0xf40d;
    _memcmp = 0xf429;
    _memcpy = 0xf465;
    _memset = 0xf511;
    Rand = 0xf585;
    _strncpy = 0xf60d;
    _strcpy = 0xf629;
    prvStrCpy = 0xf639;
    _strlen = 0xf651;
    _strnlen = 0xf669;
    prvStrLen = 0xf699;
    _strcmp = 0xf6b1;
    _strncmp = 0xf6d1;
    prvStrCmp = 0xf719;
    StrUpr = 0xf749;
    prvAtoi = 0xf769;
    prvStrStr = 0xf7bd;
    _strsep = 0xf7d5;
    skip_spaces = 0xf815;
    skip_atoi = 0xf831;
    _parse_integer_fixup_radix = 0xf869;
    _parse_integer = 0xf8bd;
    simple_strtoull = 0xf915;
    simple_strtoll = 0xf945;
    simple_strtoul = 0xf965;
    simple_strtol = 0xf96d;
    _vsscanf = 0xf985;
    _sscanf = 0xff71;
    div_u64 = 0xff91;
    div_s64 = 0xff99;
    div_u64_rem = 0xffa1;
    div_s64_rem = 0xffb1;
    _strpbrk = 0xffc1;
    _strchr = 0xffed;
    aes_set_key = 0x10005;
    aes_encrypt = 0x103d1;
    aes_decrypt = 0x114a5;
    AES_WRAP = 0x125c9;
    AES_UnWRAP = 0x12701;
    crc32_get = 0x12861;
    arc4_byte = 0x12895;
    rt_arc4_init = 0x128bd;
    rt_arc4_crypt = 0x12901;
    rt_md5_init = 0x131c1;
    rt_md5_append = 0x131f5;
    rt_md5_final = 0x1327d;
    rt_md5_hmac = 0x132d5;
    rtw_get_bit_value_from_ieee_value = 0x13449;
    rtw_is_cckrates_included = 0x13475;
    rtw_is_cckratesonly_included = 0x134b5;
    rtw_check_network_type = 0x134dd;
    rtw_set_fixed_ie = 0x1350d;
    rtw_set_ie = 0x1352d;
    rtw_get_ie = 0x1355d;
    rtw_set_supported_rate = 0x13591;
    rtw_get_rateset_len = 0x13611;
    rtw_get_wpa_ie = 0x1362d;
    rtw_get_wpa2_ie = 0x136c9;
    rtw_get_wpa_cipher_suite = 0x13701;
    rtw_get_wpa2_cipher_suite = 0x13769;
    rtw_parse_wpa_ie = 0x137d1;
    rtw_parse_wpa2_ie = 0x138ad;
    rtw_get_sec_ie = 0x13965;
    rtw_get_wps_ie = 0x13a15;
    rtw_get_wps_attr = 0x13a99;
    rtw_get_wps_attr_content = 0x13b49;
    rtw_ieee802_11_parse_elems = 0x13b91;
    str_2char2num = 0x13d9d;
    key_2char2num = 0x13db9;
    convert_ip_addr = 0x13dd1;
    rom_psk_PasswordHash = 0x13e9d;
    rom_psk_CalcGTK = 0x13ed5;
    rom_psk_CalcPTK = 0x13f69;
    wep_80211_encrypt = 0x14295;
    wep_80211_decrypt = 0x142f5;
    tkip_micappendbyte = 0x14389;
    rtw_secmicsetkey = 0x143d9;
    rtw_secmicappend = 0x14419;
    rtw_secgetmic = 0x14435;
    rtw_seccalctkipmic = 0x1449d;
    tkip_phase1 = 0x145a5;
    tkip_phase2 = 0x14725;
    tkip_80211_encrypt = 0x14941;
    tkip_80211_decrypt = 0x149d5;
    aes1_encrypt = 0x14a8d;
    aesccmp_construct_mic_iv = 0x14c65;
    aesccmp_construct_mic_header1 = 0x14ccd;
    aesccmp_construct_mic_header2 = 0x14d21;
    aesccmp_construct_ctr_preload = 0x14db5;
    aes_80211_encrypt = 0x14e29;
    aes_80211_decrypt = 0x151ad;
    _sha1_process_message_block = 0x155b9;
    _sha1_pad_message = 0x15749;
    rt_sha1_init = 0x157e5;
    rt_sha1_update = 0x15831;
    rt_sha1_finish = 0x158a9;
    rt_hmac_sha1 = 0x15909;
    rom_aes_128_cbc_encrypt = 0x15a65;
    rom_aes_128_cbc_decrypt = 0x15ae1;
    rom_rijndaelKeySetupEnc = 0x15b5d;
    rom_aes_decrypt_init = 0x15c39;
    rom_aes_internal_decrypt = 0x15d15;
    rom_aes_decrypt_deinit = 0x16071;
    rom_aes_encrypt_init = 0x16085;
    rom_aes_internal_encrypt = 0x1609d;
    rom_aes_encrypt_deinit = 0x16451;
    bignum_init = 0x17b35;
    bignum_deinit = 0x17b61;
    bignum_get_unsigned_bin_len = 0x17b81;
    bignum_get_unsigned_bin = 0x17b85;
    bignum_set_unsigned_bin = 0x17c21;
    bignum_cmp = 0x17cd1;
    bignum_cmp_d = 0x17cd5;
    bignum_add = 0x17cfd;
    bignum_sub = 0x17d0d;
    bignum_mul = 0x17d1d;
    bignum_exptmod = 0x17d2d;
    WPS_realloc = 0x17d51;
    os_zalloc = 0x17d99;
    rom_hmac_sha256_vector = 0x17dc1;
    rom_hmac_sha256 = 0x17ebd;
    rom_sha256_vector = 0x18009;
    phy_CalculateBitShift = 0x18221;
    PHY_SetBBReg_8195A = 0x18239;
    PHY_QueryBBReg_8195A = 0x18279;
    ROM_odm_QueryRxPwrPercentage = 0x1829d;
    ROM_odm_EVMdbToPercentage = 0x182bd;
    ROM_odm_SignalScaleMapping_8195A = 0x182e5;
    ROM_odm_FalseAlarmCounterStatistics = 0x183cd;
    ROM_odm_SetEDCCAThreshold = 0x18721;
    ROM_odm_SetTRxMux = 0x18749;
    ROM_odm_SetCrystalCap = 0x18771;
    ROM_odm_GetDefaultCrytaltalCap = 0x187d5;
    ROM_ODM_CfoTrackingReset = 0x187e9;
    ROM_odm_CfoTrackingFlow = 0x18811;
    curve25519_donna = 0x1965d;
    aes_test_alignment_detection = 0x1a391;
    aes_mode_reset = 0x1a3ed;
    aes_ecb_encrypt = 0x1a3f9;
    aes_ecb_decrypt = 0x1a431;
    aes_cbc_encrypt = 0x1a469;
    aes_cbc_decrypt = 0x1a579;
    aes_cfb_encrypt = 0x1a701;
    aes_cfb_decrypt = 0x1a9e5;
    aes_ofb_crypt = 0x1acc9;
    aes_ctr_crypt = 0x1af7d;
    aes_encrypt_key128 = 0x1b289;
    aes_encrypt_key192 = 0x1b2a5;
    aes_encrypt_key256 = 0x1b2c1;
    aes_encrypt_key = 0x1b2e1;
    aes_decrypt_key128 = 0x1b351;
    aes_decrypt_key192 = 0x1b36d;
    aes_decrypt_key256 = 0x1b389;
    aes_decrypt_key = 0x1b3a9;
    aes_init = 0x1b419;
    CRYPTO_chacha_20 = 0x1b41d;
    CRYPTO_poly1305_init = 0x1bc25;
    CRYPTO_poly1305_update = 0x1bd09;
    CRYPTO_poly1305_finish = 0x1bd8d;
    rom_sha512_starts = 0x1ceb5;
    rom_sha512_update = 0x1d009;
    rom_sha512_finish = 0x1d011;
    rom_sha512 = 0x1d261;
    rom_sha512_hmac_starts = 0x1d299;
    rom_sha512_hmac_update = 0x1d35d;
    rom_sha512_hmac_finish = 0x1d365;
    rom_sha512_hmac_reset = 0x1d3b5;
    rom_sha512_hmac = 0x1d3d1;
    rom_sha512_hkdf = 0x1d40d;
    rom_ed25519_gen_keypair = 0x1d501;
    rom_ed25519_gen_signature = 0x1d505;
    rom_ed25519_verify_signature = 0x1d51d;
    rom_ed25519_crypto_sign_seed_keypair = 0x1d521;
    rom_ed25519_crypto_sign_detached = 0x1d579;
    rom_ed25519_crypto_sign_verify_detached = 0x1d655;
    rom_ed25519_ge_double_scalarmult_vartime = 0x1f86d;
    rom_ed25519_ge_frombytes_negate_vartime = 0x1fc35;
    rom_ed25519_ge_p3_tobytes = 0x207d5;
    rom_ed25519_ge_scalarmult_base = 0x20821;
    rom_ed25519_ge_tobytes = 0x209e1;
    rom_ed25519_sc_muladd = 0x20a2d;
    rom_ed25519_sc_reduce = 0x2603d;
    __rtl_memchr_v1_00 = 0x28a4d;
    __rtl_memcmp_v1_00 = 0x28ae1;
    __rtl_memcpy_v1_00 = 0x28b49;
    __rtl_memmove_v1_00 = 0x28bed;
    __rtl_memset_v1_00 = 0x28cb5;
    __rtl_strcat_v1_00 = 0x28d49;
    __rtl_strchr_v1_00 = 0x28d91;
    __rtl_strcmp_v1_00 = 0x28e55;
    __rtl_strcpy_v1_00 = 0x28ec9;
    __rtl_strlen_v1_00 = 0x28f15;
    __rtl_strncat_v1_00 = 0x28f69;
    __rtl_strncmp_v1_00 = 0x28fc5;
    __rtl_strncpy_v1_00 = 0x2907d;
    __rtl_strstr_v1_00 = 0x293cd;
    __rtl_strsep_v1_00 = 0x2960d;
    __rtl_strtok_v1_00 = 0x29619;
    __rtl__strtok_r_v1_00 = 0x2962d;
    __rtl_strtok_r_v1_00 = 0x29691;
    __rtl_close_v1_00 = 0x29699;
    __rtl_fstat_v1_00 = 0x296ad;
    __rtl_isatty_v1_00 = 0x296c1;
    __rtl_lseek_v1_00 = 0x296d5;
    __rtl_open_v1_00 = 0x296e9;
    __rtl_read_v1_00 = 0x296fd;
    __rtl_write_v1_00 = 0x29711;
    __rtl_sbrk_v1_00 = 0x29725;
    __rtl_ltoa_v1_00 = 0x297bd;
    __rtl_ultoa_v1_00 = 0x29855;
    __rtl_dtoi_v1_00 = 0x298c5;
    __rtl_dtoi64_v1_00 = 0x29945;
    __rtl_dtoui_v1_00 = 0x299dd;
    __rtl_ftol_v1_00 = 0x299e5;
    __rtl_itof_v1_00 = 0x29a51;
    __rtl_itod_v1_00 = 0x29ae9;
    __rtl_i64tod_v1_00 = 0x29b79;
    __rtl_uitod_v1_00 = 0x29c55;
    __rtl_ftod_v1_00 = 0x29d2d;
    __rtl_dtof_v1_00 = 0x29de9;
    __rtl_uitof_v1_00 = 0x29e89;
    __rtl_fadd_v1_00 = 0x29f65;
    __rtl_fsub_v1_00 = 0x2a261;
    __rtl_fmul_v1_00 = 0x2a559;
    __rtl_fdiv_v1_00 = 0x2a695;
    __rtl_dadd_v1_00 = 0x2a825;
    __rtl_dsub_v1_00 = 0x2aed9;
    __rtl_dmul_v1_00 = 0x2b555;
    __rtl_ddiv_v1_00 = 0x2b8ad;
    __rtl_dcmpeq_v1_00 = 0x2be4d;
    __rtl_dcmplt_v1_00 = 0x2bebd;
    __rtl_dcmpgt_v1_00 = 0x2bf51;
    __rtl_dcmple_v1_00 = 0x2c049;
    __rtl_fcmplt_v1_00 = 0x2c139;
    __rtl_fcmpgt_v1_00 = 0x2c195;
    __rtl_cos_f32_v1_00 = 0x2c229;
    __rtl_sin_f32_v1_00 = 0x2c435;
    __rtl_fabs_v1_00 = 0x2c639;
    __rtl_fabsf_v1_00 = 0x2c641;
    __rtl_dtoa_r_v1_00 = 0x2c77d;
    __rom_mallocr_init_v1_00 = 0x2d7d1;
    __rtl_free_r_v1_00 = 0x2d841;
    __rtl_malloc_r_v1_00 = 0x2da31;
    __rtl_realloc_r_v1_00 = 0x2df55;
    __rtl_memalign_r_v1_00 = 0x2e331;
    __rtl_valloc_r_v1_00 = 0x2e421;
    __rtl_pvalloc_r_v1_00 = 0x2e42d;
    __rtl_calloc_r_v1_00 = 0x2e441;
    __rtl_cfree_r_v1_00 = 0x2e4a9;
    __rtl_Balloc_v1_00 = 0x2e515;
    __rtl_Bfree_v1_00 = 0x2e571;
    __rtl_i2b_v1_00 = 0x2e585;
    __rtl_multadd_v1_00 = 0x2e599;
    __rtl_mult_v1_00 = 0x2e629;
    __rtl_pow5mult_v1_00 = 0x2e769;
    __rtl_hi0bits_v1_00 = 0x2e809;
    __rtl_d2b_v1_00 = 0x2e845;
    __rtl_lshift_v1_00 = 0x2e901;
    __rtl_cmp_v1_00 = 0x2e9bd;
    __rtl_diff_v1_00 = 0x2ea01;
    __rtl_sread_v1_00 = 0x2eae9;
    __rtl_seofread_v1_00 = 0x2eb39;
    __rtl_swrite_v1_00 = 0x2eb3d;
    __rtl_sseek_v1_00 = 0x2ebc1;
    __rtl_sclose_v1_00 = 0x2ec11;
    __rtl_sbrk_r_v1_00 = 0x2ec41;
    __rtl_fflush_r_v1_00 = 0x2ef8d;
    __rtl_vfprintf_r_v1_00 = 0x2f661;
    __rtl_fpclassifyd = 0x30c15;
    CpkClkTbl = 0x30c68;
    ROM_IMG1_VALID_PATTEN = 0x30c80;
    SpicCalibrationPattern = 0x30c88;
    SpicInitCPUCLK = 0x30c98;
    BAUDRATE = 0x30ca8;
    OVSR = 0x30d1c;
    DIV = 0x30d90;
    OVSR_ADJ = 0x30e04;
    __AES_rcon = 0x30e78;
    __AES_Te4 = 0x30ea0;
    I2CDmaChNo = 0x312a0;
    UartLogRomCmdTable = 0x316a0;
    _HalRuartOp = 0x31700;
    _HalGdmaOp = 0x31760;
    RTW_WPA_OUI_TYPE = 0x3540c;
    WPA_CIPHER_SUITE_NONE = 0x35410;
    WPA_CIPHER_SUITE_WEP40 = 0x35414;
    WPA_CIPHER_SUITE_TKIP = 0x35418;
    WPA_CIPHER_SUITE_CCMP = 0x3541c;
    WPA_CIPHER_SUITE_WEP104 = 0x35420;
    RSN_CIPHER_SUITE_NONE = 0x35424;
    RSN_CIPHER_SUITE_WEP40 = 0x35428;
    RSN_CIPHER_SUITE_TKIP = 0x3542c;
    RSN_CIPHER_SUITE_CCMP = 0x35430;
    RSN_CIPHER_SUITE_WEP104 = 0x35434;
    RSN_AUTH_KEY_MGMT_PSK_OVER_802_1X = 0x35444;
    RSN_AUTH_KEY_MGMT_UNSPEC_802_1X = 0x35448;
    RSN_VERSION_BSD = 0x3544c;
    rom_wps_Te0 = 0x35988;
    rom_wps_rcons = 0x35d88;
    rom_wps_Td4s = 0x35d94;
    rom_wps_Td0 = 0x35e94;
    NewVectorTable = 0x10000000;
    UserIrqFunTable = 0x10000100;
    UserIrqDataTable = 0x10000200;
    __rom_bss_start__ = 0x10000300;
    CfgSysDebugWarn = 0x10000300;
    CfgSysDebugInfo = 0x10000304;
    CfgSysDebugErr = 0x10000308;
    ConfigDebugWarn = 0x1000030c;
    ConfigDebugInfo = 0x10000310;
    ConfigDebugErr = 0x10000314;
    HalTimerOp = 0x10000318;
    GPIOState = 0x10000334;
    gTimerRecord = 0x1000034c;
    SSI_DBG_CONFIG = 0x10000350;
    _pHAL_Gpio_Adapter = 0x10000354;
    Timer2To7VectorTable = 0x10000358;
    pUartLogCtl = 0x10000384;
    UartLogBuf = 0x10000388;
    UartLogCtl = 0x10000408;
    UartLogHistoryBuf = 0x10000430;
    ArgvArray = 0x100006ac;
    rom_wlan_ram_map = 0x100006d4;
    FalseAlmCnt = 0x100006e0;
    ROMInfo = 0x10000720;
    DM_CfoTrack = 0x10000738;
    rom_libgloss_ram_map = 0x10000760;
    __rtl_errno = 0x10000bc4;
    _rtl_impure_ptr = 0x10001c60;
}
