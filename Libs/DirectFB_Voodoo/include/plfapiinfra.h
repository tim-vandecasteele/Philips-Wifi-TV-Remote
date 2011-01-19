
/*
 * (c) 2010 Koninklijke Philips Electronics N.V., All rights reserved
 * 
 * This source code and any compilation or derivative thereof is the
 * proprietary information of Koninklijke Philips Electronics N.V. and is
 * confidential in nature.
 * Under no circumstances is this software to be exposed to or placed under an
 * Open Source License of any type without the expressed written permission of
 * Koninklijke Philips Electronics N.V.
 */


#if !defined(_PLFAPIINFRA_H_)
#define _PLFAPIINFRA_H_

#if !defined(_PLFAPIINFRA_DD_)
#include "plfapiinfra_types.h"
#endif

extern int  plfapiinfra_Init( int arg, char * argv[] );
extern void plfapiinfra_Exit( void );

/*  Symbols for plfapiinfraMethodID */
extern int idaudonlyActivate;  /* 0 */
extern int idaudonlyDisable;  /* 1 */
extern int idaudonlyEnable;  /* 2 */
extern int idaudonlyIsActive;  /* 3 */
extern int idaudonlyIsEnabled;  /* 4 */
extern int idaudonlySetDestLogicalAddress;  /* 5 */
extern int idaudonlySetForwardRcCecKeys;  /* 6 */
extern int idaudonlySetListenAudioKey;  /* 7 */
extern int idaudonly2Activate;  /* 8 */
extern int idaudonly2AddForwardCecKey;  /* 9 */
extern int idaudonly2ClearForwardCecKeys;  /* 10 */
extern int idaudonly2Disable;  /* 11 */
extern int idaudonly2Enable;  /* 12 */
extern int idaudonly2IsActive;  /* 13 */
extern int idaudonly2IsDisabled;  /* 14 */
extern int idaudonly2SetDestLogicalAddress;  /* 15 */
extern int idaudonly2SetListenAudioKey;  /* 16 */
extern int idaudonly2SetStandbyKey;  /* 17 */
extern int idauthCheck;  /* 18 */
extern int idauthCheckFile;  /* 19 */
extern int idauthCheckFileFromFile;  /* 20 */
extern int idauthGetTDFPublicKey;  /* 21 */
extern int idauthIsProductAuthenticationRequired;  /* 22 */
extern int idauthSign;  /* 23 */
extern int idauthSignFile;  /* 24 */
extern int idauthSignFileToFile;  /* 25 */
extern int idbffsClose;  /* 26 */
extern int idbffsDelete;  /* 27 */
extern int idbffsGetFileSize;  /* 28 */
extern int idbffsGetVolumeName;  /* 29 */
extern int idbffsOpen;  /* 30 */
extern int idbffsRead;  /* 31 */
extern int idbffsSeek;  /* 32 */
extern int idbffsWrite;  /* 33 */
extern int idbootloaderGetEnvironmentVariable;  /* 34 */
extern int idbootloaderResetBootCounter;  /* 35 */
extern int idbootloaderSetEnvironmentVariable;  /* 36 */
extern int idcecackMessageProcessed;  /* 37 */
extern int idcecctrlCancel;  /* 38 */
extern int idcecctrlCausedWakeup;  /* 39 */
extern int idcecctrlDisable;  /* 40 */
extern int idcecctrlDisableReceive;  /* 41 */
extern int idcecctrlDisableTransmitStatus;  /* 42 */
extern int idcecctrlEnable;  /* 43 */
extern int idcecctrlEnableReceive;  /* 44 */
extern int idcecctrlEnableTransmitStatus;  /* 45 */
extern int idcecctrlGetBufferedMsg;  /* 46 */
extern int idcecctrlGetDeviceVendorID;  /* 47 */
extern int idcecctrlGetLogicalAddress;  /* 48 */
extern int idcecctrlGetOSDName;  /* 49 */
extern int idcecctrlGetVersion;  /* 50 */
extern int idcecctrlPreview;  /* 51 */
extern int idcecctrlSetDeviceVendorID;  /* 52 */
extern int idcecctrlSetLogicalAddress;  /* 53 */
extern int idcecctrlSetOSDName;  /* 54 */
extern int idcecctrlSetVersion;  /* 55 */
extern int idcecctrlSetWakeupMode;  /* 56 */
extern int idcectxTransmit;  /* 57 */
extern int idclkAlarmIsSet;  /* 58 */
extern int idclkCancelAlarm;  /* 59 */
extern int idclkCausedWakeup;  /* 60 */
extern int idclkClockIsSet;  /* 61 */
extern int idclkGetAlarm;  /* 62 */
extern int idclkGetLocalTime;  /* 63 */
extern int idclkGetLocalTimeOffset;  /* 64 */
extern int idclkGetUniversalTime;  /* 65 */
extern int idclkRunDuringStandby;  /* 66 */
extern int idclkSecondsSinceWakeup;  /* 67 */
extern int idclkSetAlarm;  /* 68 */
extern int idclkSetClock;  /* 69 */
extern int idclkSetWakeupMode;  /* 70 */
extern int idcryptCrypt;  /* 71 */
extern int iddbbrwseGetPacket;  /* 72 */
extern int iddbbrwseGetPacketLength;  /* 73 */
extern int iddbtfHasLastFileAccessSucceeded;  /* 74 */
extern int iddbtfIsFilePresent;  /* 75 */
extern int iddbtfSendData;  /* 76 */
extern int iddbtfciGetId;  /* 77 */
extern int iddbtfciHasLastFileAccessSucceeded;  /* 78 */
extern int iddbtfciIsFilePresent;  /* 79 */
extern int iddbtfciSendData;  /* 80 */
extern int iddmpctrDisableMagicKeys;  /* 81 */
extern int iddmpctrEnableMagicKeys;  /* 82 */
extern int iddmpctrMakeDebugDump;  /* 83 */
extern int idevlogctrClearLog;  /* 84 */
extern int idevlogctrGetHwLogRecord;  /* 85 */
extern int idevlogctrGetLastAlign;  /* 86 */
extern int idevlogctrGetLastLogCleared;  /* 87 */
extern int idevlogctrGetLoggedEvents;  /* 88 */
extern int idevlogctrGetLogRecord;  /* 89 */
extern int idevlogctrGetNumReboots;  /* 90 */
extern int idevlogctrGetNvmIntegCheck;  /* 91 */
extern int idevlogctrGetSwVersion;  /* 92 */
extern int idevlogctrHwClearLog;  /* 93 */
extern int idevlogctrHwGetLastLogCleared;  /* 94 */
extern int idevlogctrHwGetLoggedEvents;  /* 95 */
extern int idevlogctrSetLastKey;  /* 96 */
extern int idevlogctrSetLastKeyUp;  /* 97 */
extern int idevlogctrSetLastSrc;  /* 98 */
extern int idevlogctrSetNvmIntegCheck;  /* 99 */
extern int idevlogctrSetSwVersion;  /* 100 */
extern int idfopsIsPartitionMounted;  /* 101 */
extern int idfopsPartitionMount;  /* 102 */
extern int idfopsPartitionUnmount;  /* 103 */
extern int idgioPinGetAlt;  /* 104 */
extern int idgioPinGetLatch;  /* 105 */
extern int idgioPinGetLine;  /* 106 */
extern int idgioPinGetMode;  /* 107 */
extern int idgioPinSetAlt;  /* 108 */
extern int idgioPinSetLatch;  /* 109 */
extern int idgioPinSetMode;  /* 110 */
extern int idgioPortGetLatch;  /* 111 */
extern int idgioPortGetLine;  /* 112 */
extern int idgioPortSetAlt;  /* 113 */
extern int idgioPortSetLatch;  /* 114 */
extern int idgioPortSetMode;  /* 115 */
extern int idi2ccBlockBus;  /* 116 */
extern int idi2ccEnterIdleMode;  /* 117 */
extern int idi2ccGetBlocked;  /* 118 */
extern int idi2ccGetControlWord;  /* 119 */
extern int idi2ccGetIdle;  /* 120 */
extern int idi2ccGetMasterEnabled;  /* 121 */
extern int idi2ccGetSlaveEnabled;  /* 122 */
extern int idi2ccLeaveIdleMode;  /* 123 */
extern int idi2ccMasterDisable;  /* 124 */
extern int idi2ccMasterEnable;  /* 125 */
extern int idi2ccSetBitRate;  /* 126 */
extern int idi2ccSetMasterTimeout;  /* 127 */
extern int idi2ccSlaveDisable;  /* 128 */
extern int idi2ccSlaveEnable;  /* 129 */
extern int idi2ccUnblockBus;  /* 130 */
extern int idi2cmRead;  /* 131 */
extern int idi2cmWrite;  /* 132 */
extern int idi2cmWriteRead;  /* 133 */
extern int idinfraitfGetAvailableInterfaces;  /* 134 */
extern int idishaFinish;  /* 135 */
extern int idishaInit;  /* 136 */
extern int idishaUpdate;  /* 137 */
extern int idkeyiDown;  /* 138 */
extern int idkeyiUp;  /* 139 */
extern int idledDisablePlfLedControl;  /* 140 */
extern int idledEnablePlfLedControl;  /* 141 */
extern int idledGetIntensity;  /* 142 */
extern int idledIntensitySupported;  /* 143 */
extern int idledIsPlfLedControlEnabled;  /* 144 */
extern int idledSetBlinking;  /* 145 */
extern int idledSetFlash;  /* 146 */
extern int idledSetIntensity;  /* 147 */
extern int idledSetLightGuide;  /* 148 */
extern int idledSetPermanent;  /* 149 */
extern int idncdMem;  /* 150 */
extern int idnetCheckDnsStatus;  /* 151 */
extern int idnetConfigInterfaceAutomatic;  /* 152 */
extern int idnetConfigInterfaceStatic;  /* 153 */
extern int idnetEnableNetworkInterface;  /* 154 */
extern int idnetGetEnabledNetworkInterface;  /* 155 */
extern int idnetGetEnabledNetworkInterfaceStatus;  /* 156 */
extern int idnetGetInterfaceConfig;  /* 157 */
extern int idnetgetMaxNoOfAutomaticWirelessDevicesSupported;  /* 158 */
extern int idnetgetMaxNoOfManualWirelessDevicesSupported;  /* 159 */
extern int idnetgetMaxNoOfNetworkinterfacesSupported;  /* 160 */
extern int idnetGetNetworkConfigMode;  /* 161 */
extern int idnetGetNetworkInterfaceConfigStatus;  /* 162 */
extern int idnetGetNetworkInterfaceMacAddress;  /* 163 */
extern int idnetGetNetworkInterfaceName;  /* 164 */
extern int idnetGetNetworkInterfacePhysicalStatus;  /* 165 */
extern int idnetGetNetworkInterfaceThroughput;  /* 166 */
extern int idnetGetNetworkInterfaceType;  /* 167 */
extern int idnetGetNetworkInterfaceVersion;  /* 168 */
extern int idnetGetNumberOfNetworkInterfaces;  /* 169 */
extern int idnetGetNumberOfWifiDevices;  /* 170 */
extern int idnetGetSelectedWiFiDevice;  /* 171 */
extern int idnetGetStoredStaticInterfaceConfig;  /* 172 */
extern int idnetIsInitializationDone;  /* 173 */
extern int idnetIsNetworkModeVirgin;  /* 174 */
extern int idnetSelectWiFiDevice;  /* 175 */
extern int idnetSetNetworkToModeVirgin;  /* 176 */
extern int idnetWifiGetChannel;  /* 177 */
extern int idnetWifiGetChannelWifiDevice;  /* 178 */
extern int idnetWifiGetEffectiveSignalStrength;  /* 179 */
extern int idnetWifiGetEffectiveThroughput;  /* 180 */
extern int idnetWifiGetEncryptionMode;  /* 181 */
extern int idnetWifiGetEncryptionModeWifiDevice;  /* 182 */
extern int idnetWifiGetKey;  /* 183 */
extern int idnetWifiGetPortType;  /* 184 */
extern int idnetWifiGetPortTypeWifiDevice;  /* 185 */
extern int idnetWifiGetSignalStrengthWifiDevice;  /* 186 */
extern int idnetWifiGetSsidWifiDevice;  /* 187 */
extern int idnetWifiGetThroughputWifiDevice;  /* 188 */
extern int idnetWifiSetChannel;  /* 189 */
extern int idnetWifiSetEncryptionMode;  /* 190 */
extern int idnetWifiSetKey;  /* 191 */
extern int idnetWifiSetPortType;  /* 192 */
extern int idnet2CheckDnsStatus;  /* 193 */
extern int idnet2ConfigInterfaceAutomatic;  /* 194 */
extern int idnet2ConfigInterfaceStatic;  /* 195 */
extern int idnet2EnableNetworkInterface;  /* 196 */
extern int idnet2GetEnabledNetworkInterface;  /* 197 */
extern int idnet2GetInterfaceConfig;  /* 198 */
extern int idnet2getMaxNoOfAutomaticWirelessDevicesSupported;  /* 199 */
extern int idnet2getMaxNoOfManualWirelessDevicesSupported;  /* 200 */
extern int idnet2getMaxNoOfNetworkinterfacesSupported;  /* 201 */
extern int idnet2GetNetworkConfigMode;  /* 202 */
extern int idnet2GetNetworkInterfaceConfigStatus;  /* 203 */
extern int idnet2GetNetworkInterfaceMacAddress;  /* 204 */
extern int idnet2GetNetworkInterfaceName;  /* 205 */
extern int idnet2GetNetworkInterfacePhysicalStatus;  /* 206 */
extern int idnet2GetNetworkInterfaceThroughput;  /* 207 */
extern int idnet2GetNetworkInterfaceType;  /* 208 */
extern int idnet2GetNetworkInterfaceVersion;  /* 209 */
extern int idnet2GetNumberOfNetworkInterfaces;  /* 210 */
extern int idnet2GetNumberOfWifiDevices;  /* 211 */
extern int idnet2GetStoredStaticInterfaceConfig;  /* 212 */
extern int idnet2IsInitializationDone;  /* 213 */
extern int idnet2IsNetworkModeVirgin;  /* 214 */
extern int idnet2SelectWifiAntennas;  /* 215 */
extern int idnet2SetNetworkToModeVirgin;  /* 216 */
extern int idnet2WifiFindManualSsid;  /* 217 */
extern int idnet2WifiGenerateWpsPin;  /* 218 */
extern int idnet2WifiGetChannel;  /* 219 */
extern int idnet2WifiGetChannelWifiDevice;  /* 220 */
extern int idnet2WifiGetEffectiveSignalStrength;  /* 221 */
extern int idnet2WifiGetEffectiveThroughput;  /* 222 */
extern int idnet2WifiGetEncryptionMode;  /* 223 */
extern int idnet2WifiGetEncryptionModeWifiDevice;  /* 224 */
extern int idnet2WifiGetKey;  /* 225 */
extern int idnet2WifiGetMacAddress;  /* 226 */
extern int idnet2WifiGetMacAddressWifiDevice;  /* 227 */
extern int idnet2WifiGetPortType;  /* 228 */
extern int idnet2WifiGetPortTypeWifiDevice;  /* 229 */
extern int idnet2WifiGetSignalStrengthWifiDevice;  /* 230 */
extern int idnet2WifiGetSsid;  /* 231 */
extern int idnet2WifiGetSsidWifiDevice;  /* 232 */
extern int idnet2WifiGetThroughputWifiDevice;  /* 233 */
extern int idnet2WifiGetWpsModeWifiDevice;  /* 234 */
extern int idnet2WifiScanWifiDevices;  /* 235 */
extern int idnet2WifiSetChannel;  /* 236 */
extern int idnet2WifiSetEncryptionMode;  /* 237 */
extern int idnet2WifiSetKey;  /* 238 */
extern int idnet2WifiSetPortType;  /* 239 */
extern int idnet2WifiSetSsid;  /* 240 */
extern int idnet2WifiStartWpsConnection;  /* 241 */
extern int idp2pacNOnExecutionCompleted;  /* 242 */
extern int idp2pacNOnTransmissionCompleted;  /* 243 */
extern int idp2pahWriteASync;  /* 244 */
extern int idp2pahWriteASyncNoRetry;  /* 245 */
extern int idp2pahWriteCharASync;  /* 246 */
extern int idp2pahWriteCharASyncNoRetry;  /* 247 */
extern int idp2pahWriteCharNoSync;  /* 248 */
extern int idp2pahWriteCharNoSyncNoRetry;  /* 249 */
extern int idp2pahWriteNoSync;  /* 250 */
extern int idp2pahWriteNoSyncNoRetry;  /* 251 */
extern int idresmgrAcquire;  /* 252 */
extern int idresmgrRelease;  /* 253 */
extern int idsecstoCheck;  /* 254 */
extern int idsecstoGetPacket;  /* 255 */
extern int idsecstoGetPacketLength;  /* 256 */
extern int idsecstoLoad;  /* 257 */
extern int idsecstoStore;  /* 258 */
extern int idsecstoUnload;  /* 259 */
extern int idshmemCacheFlush;  /* 260 */
extern int idshmemCacheInvalidate;  /* 261 */
extern int idshmemFree;  /* 262 */
extern int idshmemMalloc;  /* 263 */
extern int idshmemMallocAlign;  /* 264 */
extern int idshmemMmspCreate;  /* 265 */
extern int idshmemMmspDelete;  /* 266 */
extern int iduartctlSetBaudRate;  /* 267 */
extern int iduartprintDisable;  /* 268 */
extern int iduartprintEnable;  /* 269 */
extern int iduartprintIsEnabled;  /* 270 */
extern int iduidGetSoCUniqueID;  /* 271 */
extern int idupginfGetCurrentTvSwDescription;  /* 272 */
extern int idupginfGetUpgHeaderSize;  /* 273 */
extern int idupginfGetUpgInfo;  /* 274 */
extern int idupginf2GetCurrentTvSwDescription;  /* 275 */
extern int idupginf2GetUpgInfo;  /* 276 */
extern int idupginf3GetCurrentTvSwDescription;  /* 277 */
extern int idupginf3GetUpgInfo;  /* 278 */
extern int idupgtoolGetUpgLoadingProgress;  /* 279 */
extern int idupgtoolGetUpgLoadingStatus;  /* 280 */
extern int idupgtoolGetUpgProgrammingProgress;  /* 281 */
extern int idupgtoolGetUpgProgrammingStatus;  /* 282 */
extern int idupgtoolGetUpgValidationProgress;  /* 283 */
extern int idupgtoolGetUpgValidationStatus;  /* 284 */
extern int idupgtoolStartUpgLoading;  /* 285 */
extern int idupgtoolStartUpgProgramming;  /* 286 */
extern int idupgtoolStartUpgValidation;  /* 287 */
extern int idupgtoolStopUpgLoading;  /* 288 */
extern int idupgtoolStopUpgProgramming;  /* 289 */
extern int idupgtoolStopUpgValidation;  /* 290 */
extern int idupgtool2GetUpgLoadingProgress;  /* 291 */
extern int idupgtool2GetUpgLoadingStatus;  /* 292 */
extern int idupgtool2GetUpgProgrammingProgress;  /* 293 */
extern int idupgtool2GetUpgProgrammingStatus;  /* 294 */
extern int idupgtool2GetUpgValidationProgress;  /* 295 */
extern int idupgtool2GetUpgValidationStatus;  /* 296 */
extern int idupgtool2StartUpgLoading;  /* 297 */
extern int idupgtool2StartUpgProgramming;  /* 298 */
extern int idupgtool2StartUpgValidation;  /* 299 */
extern int idupgtool2StopUpgLoading;  /* 300 */
extern int idupgtool2StopUpgProgramming;  /* 301 */
extern int idupgtool2StopUpgValidation;  /* 302 */
extern int idusbdevGetActiveDevicesList;  /* 303 */
extern int idusbdevGetDeviceInfo;  /* 304 */
extern int idusbdevGetPhysDeviceMemberList;  /* 305 */
extern int idusbdevGetPhysDevicesList;  /* 306 */
extern int idusbdevGetUsbMaxDevices;  /* 307 */
extern int idusbdevGetUsbMaxPartitionsPerDevice;  /* 308 */
extern int idusbdev2GetActiveDevicesList;  /* 309 */
extern int idusbdev2GetDeviceInfo;  /* 310 */
extern int idusbdev2GetPhysDeviceMemberList;  /* 311 */
extern int idusbdev2GetPhysDevicesList;  /* 312 */
extern int idusbdev2GetUsbMaxDevices;  /* 313 */
extern int idusbdev2GetUsbMaxPartitionsPerDevice;  /* 314 */
extern int idusbdev2IsInitializationDone;  /* 315 */
extern int idvidstorFormat;  /* 316 */
extern int idvidstorGetFreeSize;  /* 317 */
extern int idvidstorGetSize;  /* 318 */
extern int idvidstorGetSpeedClass;  /* 319 */
extern int idvidstorGetState;  /* 320 */
extern int idvidstorGetWriteProtected;  /* 321 */
extern int idvidstorIsInitialisationDone;  /* 322 */
extern int idvidstor2Format;  /* 323 */
extern int idvidstor2GetFreeSize;  /* 324 */
extern int idvidstor2GetMountPoint;  /* 325 */
extern int idvidstor2GetSize;  /* 326 */
extern int idvidstor2GetSpeedClass;  /* 327 */
extern int idvidstor2GetState;  /* 328 */
extern int idvidstor2GetWriteProtected;  /* 329 */
extern int idvidstor2IsInitialisationDone;  /* 330 */
extern int plfapiinfraMethodID_Last;  /* 331 */

/*  Symbols for plfapiinfraNotificationID */
extern int idcecrxntfOnReceived;  /* 0 */
extern int idcectxntfOnTransmitCompleted;  /* 1 */
extern int idclkntfOnAlarm;  /* 2 */
extern int idclkntfOnClockChanged;  /* 3 */
extern int idclkntfxOnAlarm;  /* 4 */
extern int idclkntfxOnAlarmCancelled;  /* 5 */
extern int idclkntfxOnClockChanged;  /* 6 */
extern int idfopsNOnPartitionMounted;  /* 7 */
extern int idfopsNOnPartitionMountFailed;  /* 8 */
extern int idfopsNOnPartitionUnmounted;  /* 9 */
extern int idinfraitfNOnAvailabilityChanged;  /* 10 */
extern int idnet2exexNOnDnsStatusChecked;  /* 11 */
extern int idnet2exexNOnInitializationDone;  /* 12 */
extern int idnet2exexNOnNetworkInterfaceConfigStatusChanged;  /* 13 */
extern int idnet2exexNOnNetworkInterfacePhysicalStatusChanged;  /* 14 */
extern int idnet2exexNOnWifiManualSsidFound;  /* 15 */
extern int idnet2exexNOnWifiScanWifiDevicesCompleted;  /* 16 */
extern int idnet2exexNOnWifiSignalFound;  /* 17 */
extern int idnet2exexNOnWifiSignalLost;  /* 18 */
extern int idnet2exexNOnWpsConnectionFinished;  /* 19 */
extern int idnet2exNOnDnsStatusChecked;  /* 20 */
extern int idnet2exNOnInitializationDone;  /* 21 */
extern int idnet2exNOnNetworkInterfaceConfigStatusChanged;  /* 22 */
extern int idnet2exNOnNetworkInterfacePhysicalStatusChanged;  /* 23 */
extern int idnet2exNOnWifiManualSsidFound;  /* 24 */
extern int idnet2exNOnWifiScanWifiDevicesCompleted;  /* 25 */
extern int idnet2exNOnWifiSignalFound;  /* 26 */
extern int idnet2exNOnWifiSignalLost;  /* 27 */
extern int idnet2NOnDnsStatusChecked;  /* 28 */
extern int idnet2NOnInitializationDone;  /* 29 */
extern int idnet2NOnNetworkInterfaceConfigStatusChanged;  /* 30 */
extern int idnet2NOnNetworkInterfacePhysicalStatusChanged;  /* 31 */
extern int idnet2NOnWifiManualSsidFound;  /* 32 */
extern int idnet2NOnWifiSignalFound;  /* 33 */
extern int idnet2NOnWifiSignalLost;  /* 34 */
extern int idnetexexNOnDnsStatusChecked;  /* 35 */
extern int idnetexexNOnIpConfigurationConflict;  /* 36 */
extern int idnetexexNOnNetworkInterfaceConfigStatusChanged;  /* 37 */
extern int idnetexexNOnNetworkInterfacePhysicalStatusChanged;  /* 38 */
extern int idnetexexNOnSelectedWifiDeviceDisappeared;  /* 39 */
extern int idnetexexNOnWifiSelectionCompleted;  /* 40 */
extern int idnetexNOnDnsStatusChecked;  /* 41 */
extern int idnetexNOnIpConfigurationConflict;  /* 42 */
extern int idnetexNOnNetworkInterfaceConfigStatusChanged;  /* 43 */
extern int idnetexNOnNetworkInterfacePhysicalStatusChanged;  /* 44 */
extern int idnetNOnIpConfigurationConflict;  /* 45 */
extern int idnetNOnNetworkInterfaceConfigStatusChanged;  /* 46 */
extern int idnetNOnNetworkInterfacePhysicalStatusChanged;  /* 47 */
extern int idp2pacWriteASync;  /* 48 */
extern int idp2pacWriteASyncNoRetry;  /* 49 */
extern int idp2pacWriteNoSync;  /* 50 */
extern int idp2pacWriteNoSyncNoRetry;  /* 51 */
extern int idp2pacxWriteASync;  /* 52 */
extern int idp2pacxWriteASyncNoRetry;  /* 53 */
extern int idp2pacxWriteCharASync;  /* 54 */
extern int idp2pacxWriteCharASyncNoRetry;  /* 55 */
extern int idp2pacxWriteCharNoSync;  /* 56 */
extern int idp2pacxWriteCharNoSyncNoRetry;  /* 57 */
extern int idp2pacxWriteNoSync;  /* 58 */
extern int idp2pacxWriteNoSyncNoRetry;  /* 59 */
extern int idp2pahNOnExecutionCompleted;  /* 60 */
extern int idp2pahNOnTransmissionCompleted;  /* 61 */
extern int idupgtoolNOnProgrammingMessage;  /* 62 */
extern int idupgtoolNOnUpgradeLoaded;  /* 63 */
extern int idupgtoolNOnUpgradeProgrammed;  /* 64 */
extern int idupgtoolNOnUpgradeValidated;  /* 65 */
extern int idusbdevexNOnDeviceError;  /* 66 */
extern int idusbdevexNOnDeviceInfoChanged;  /* 67 */
extern int idusbdevexNOnDeviceRemoved;  /* 68 */
extern int idusbdevexNOnDriveMounted;  /* 69 */
extern int idusbdevexNOnDriveUnmounted;  /* 70 */
extern int idusbdevexNOnInitializationDone;  /* 71 */
extern int idusbdevexNOnNewDevice;  /* 72 */
extern int idusbdevexNOnPhysicalDeviceConnected;  /* 73 */
extern int idusbdevexNOnPhysicalDeviceDisconnected;  /* 74 */
extern int idusbdevNOnDeviceError;  /* 75 */
extern int idusbdevNOnDeviceInfoChanged;  /* 76 */
extern int idusbdevNOnDeviceRemoved;  /* 77 */
extern int idusbdevNOnDriveMounted;  /* 78 */
extern int idusbdevNOnDriveUnmounted;  /* 79 */
extern int idusbdevNOnNewDevice;  /* 80 */
extern int idusbdevNOnPhysicalDeviceConnected;  /* 81 */
extern int idusbdevNOnPhysicalDeviceDisconnected;  /* 82 */
extern int idvidstorNOnInitialisationDone;  /* 83 */
extern int idvidstorNOnSDCardFormatProgress;  /* 84 */
extern int idvidstorNOnSDCardFormatted;  /* 85 */
extern int idvidstorNOnSDCardInserted;  /* 86 */
extern int idvidstorNOnSDCardMounted;  /* 87 */
extern int idvidstorNOnSDCardMountFailed;  /* 88 */
extern int idvidstorNOnSDCardRemoved;  /* 89 */
extern int idvidstorNOnSDCardUnmounted;  /* 90 */
extern int idvidstorNOnSDCardUnmountFailed;  /* 91 */
extern int plfapiinfraNotificationID_Last;  /* 92 */

/*  Functions clients can call, implemented by the supplier. */
extern FResult plfapiinfra_audonly_Activate( int winid, FResult * retval );
extern FResult plfapiinfra_audonly_Disable( int winid, FResult * retval );
extern FResult plfapiinfra_audonly_Enable( int winid, FResult * retval );
extern FResult plfapiinfra_audonly_IsActive( int winid, Bool * retval );
extern FResult plfapiinfra_audonly_IsEnabled( int winid, Bool * retval );
extern FResult plfapiinfra_audonly_SetDestLogicalAddress( int winid, int address );
extern FResult plfapiinfra_audonly_SetForwardRcCecKeys( int winid, int nbrkeys, int * source, int * system, int * command, int * usercontrolcode );
extern FResult plfapiinfra_audonly_SetListenAudioKey( int winid, int source, int system, int command );
#define plfapiinfra_audonly_Error  ((FResult)1)
#define plfapiinfra_audonly_Error_CONSTANT  1
#define plfapiinfra_audonly_Ok  ((FResult)0)
#define plfapiinfra_audonly_Ok_CONSTANT  0
#define plfapiinfra_audonly_SourceRc5  ((int)0)
#define plfapiinfra_audonly_SourceRc5_CONSTANT  0
#define plfapiinfra_audonly_SourceRc6  ((int)1)
#define plfapiinfra_audonly_SourceRc6_CONSTANT  1
extern FResult plfapiinfra_audonly2_Activate( int winid );
extern FResult plfapiinfra_audonly2_AddForwardCecKey( int winid, int source, int system, int command, int cecaddress, Nat8 cecusercontrolcode, int cecoperandsize, Nat8 cecoperand );
extern FResult plfapiinfra_audonly2_ClearForwardCecKeys( int winid );
extern FResult plfapiinfra_audonly2_Disable( int winid );
extern FResult plfapiinfra_audonly2_Enable( int winid );
extern FResult plfapiinfra_audonly2_IsActive( int winid, Bool * retval );
extern FResult plfapiinfra_audonly2_IsDisabled( int winid, Bool * retval );
extern FResult plfapiinfra_audonly2_SetDestLogicalAddress( int winid, int address, FResult * retval );
extern FResult plfapiinfra_audonly2_SetListenAudioKey( int winid, int source, int system, int command );
extern FResult plfapiinfra_audonly2_SetStandbyKey( int winid, int source, int system, int command );
#define plfapiinfra_audonly2_Error  ((FResult)1)
#define plfapiinfra_audonly2_Error_CONSTANT  1
#define plfapiinfra_audonly2_Ok  ((FResult)0)
#define plfapiinfra_audonly2_Ok_CONSTANT  0
#define plfapiinfra_audonly2_SourceRc5  ((int)0)
#define plfapiinfra_audonly2_SourceRc5_CONSTANT  0
#define plfapiinfra_audonly2_SourceRc6  ((int)1)
#define plfapiinfra_audonly2_SourceRc6_CONSTANT  1
extern FResult plfapiinfra_auth_Check( void * addr, int size, void * key, int keysize, void * sig, int sigsize, int * retval );
extern FResult plfapiinfra_auth_CheckFile( void * fname, void * key, int keysize, void * sig, int sigsize, int * retval );
extern FResult plfapiinfra_auth_CheckFileFromFile( void * fname, void * key, int keysize, void * sigfname, int * retval );
extern FResult plfapiinfra_auth_GetTDFPublicKey( void * key, int keysize );
extern FResult plfapiinfra_auth_IsProductAuthenticationRequired( Bool * retval );
extern FResult plfapiinfra_auth_Sign( void * addr, int size, void * key, int keysize, void * sig, int sigsize, int * retval );
extern FResult plfapiinfra_auth_SignFile( char * fname, void * key, int keysize, void * sig, int sigsize, int * retval );
extern FResult plfapiinfra_auth_SignFileToFile( char * fname, void * key, int keysize, char * sigfname, int * retval );
#define plfapiinfra_auth_KeySizeRSA1024  ((int)256)
#define plfapiinfra_auth_KeySizeRSA1024_CONSTANT  256
#define plfapiinfra_auth_SignStatusOk  ((int)0)
#define plfapiinfra_auth_SignStatusOk_CONSTANT  0
#define plfapiinfra_auth_SignStatusReadError  ((int)2)
#define plfapiinfra_auth_SignStatusReadError_CONSTANT  2
#define plfapiinfra_auth_SignStatusWriteError  ((int)3)
#define plfapiinfra_auth_SignStatusWriteError_CONSTANT  3
#define plfapiinfra_auth_SignStatusWrongSig  ((int)1)
#define plfapiinfra_auth_SignStatusWrongSig_CONSTANT  1
#define plfapiinfra_auth_SigSizeRSA1024  ((int)128)
#define plfapiinfra_auth_SigSizeRSA1024_CONSTANT  128
extern FResult plfapiinfra_bffs_Close( int winid, int fd, int * retval );
extern FResult plfapiinfra_bffs_Delete( int winid, char * filepath, int * retval );
extern FResult plfapiinfra_bffs_GetFileSize( int winid, char * filepath, int * size, int * retval );
extern FResult plfapiinfra_bffs_GetVolumeName( int winid, int volume, char * buf, int size, int * retval );
extern FResult plfapiinfra_bffs_Open( int winid, char * filepath, int fmode, int * fd, int * retval );
extern FResult plfapiinfra_bffs_Read( int winid, int fd, char * fbuff, int * nbytes, int * retval );
extern FResult plfapiinfra_bffs_Seek( int winid, int fd, int offset, int smode, int * retval );
extern FResult plfapiinfra_bffs_Write( int winid, int fd, char * fbuff, int * nbytes, int * retval );
#define plfapiinfra_bffs_Error  ((int)-1)
#define plfapiinfra_bffs_Error_CONSTANT  -1
#define plfapiinfra_bffs_FileNotOpen  ((int)1)
#define plfapiinfra_bffs_FileNotOpen_CONSTANT  1
#define plfapiinfra_bffs_FModeROnly  ((int)0)
#define plfapiinfra_bffs_FModeROnly_CONSTANT  0
#define plfapiinfra_bffs_FModeWOnly  ((int)1)
#define plfapiinfra_bffs_FModeWOnly_CONSTANT  1
#define plfapiinfra_bffs_NoSuchFd  ((int)3)
#define plfapiinfra_bffs_NoSuchFd_CONSTANT  3
#define plfapiinfra_bffs_SModeCurrent  ((int)0)
#define plfapiinfra_bffs_SModeCurrent_CONSTANT  0
#define plfapiinfra_bffs_SModeOrigin  ((int)1)
#define plfapiinfra_bffs_SModeOrigin_CONSTANT  1
#define plfapiinfra_bffs_Success  ((int)0)
#define plfapiinfra_bffs_Success_CONSTANT  0
#define plfapiinfra_bffs_TooManyFilesOpen  ((int)2)
#define plfapiinfra_bffs_TooManyFilesOpen_CONSTANT  2
extern FResult plfapiinfra_bootloader_GetEnvironmentVariable( int winid, char * name, char * value, int size, Bool * retval );
extern FResult plfapiinfra_bootloader_ResetBootCounter( int winid );
extern FResult plfapiinfra_bootloader_SetEnvironmentVariable( int winid, char * name, char * value, Bool * retval );
extern FResult plfapiinfra_cecack_MessageProcessed( int winid );
extern FResult plfapiinfra_cecctrl_Cancel( int winid );
extern FResult plfapiinfra_cecctrl_CausedWakeup( int winid, Bool * retval );
extern FResult plfapiinfra_cecctrl_Disable( int winid );
extern FResult plfapiinfra_cecctrl_DisableReceive( int winid );
extern FResult plfapiinfra_cecctrl_DisableTransmitStatus( int winid );
extern FResult plfapiinfra_cecctrl_Enable( int winid );
extern FResult plfapiinfra_cecctrl_EnableReceive( int winid );
extern FResult plfapiinfra_cecctrl_EnableTransmitStatus( int winid );
extern FResult plfapiinfra_cecctrl_GetBufferedMsg( int winid, Nat8 * cec_message, Nat8 * msg_length );
extern FResult plfapiinfra_cecctrl_GetDeviceVendorID( int winid, Nat8 * vendor_id, int * length );
extern FResult plfapiinfra_cecctrl_GetLogicalAddress( int winid, CecLogicalAddress * retval );
extern FResult plfapiinfra_cecctrl_GetOSDName( int winid, char * osd_name, int * length );
extern FResult plfapiinfra_cecctrl_GetVersion( int winid, CecVersion * retval );
extern FResult plfapiinfra_cecctrl_Preview( int winid, Nat8 * pMessage, int size );
extern FResult plfapiinfra_cecctrl_SetDeviceVendorID( int winid, Nat8 * vendor_id, int length );
extern FResult plfapiinfra_cecctrl_SetLogicalAddress( int winid, CecLogicalAddress address );
extern FResult plfapiinfra_cecctrl_SetOSDName( int winid, char * osd_name, int length );
extern FResult plfapiinfra_cecctrl_SetVersion( int winid, CecVersion version );
extern FResult plfapiinfra_cecctrl_SetWakeupMode( int winid, CecOpcode * wkp_code, int size );
extern FResult plfapiinfra_cectx_Transmit( int winid, int size, Nat8 * msg, Bool * retval );
extern FResult plfapiinfra_clk_AlarmIsSet( int winid, Bool * retval );
extern FResult plfapiinfra_clk_CancelAlarm( int winid );
extern FResult plfapiinfra_clk_CausedWakeup( int winid, Bool * retval );
extern FResult plfapiinfra_clk_ClockIsSet( int winid, Bool * retval );
extern FResult plfapiinfra_clk_GetAlarm( int winid, DateTime * retval );
extern FResult plfapiinfra_clk_GetLocalTime( int winid, DateTime * retval );
extern FResult plfapiinfra_clk_GetLocalTimeOffset( int winid, DateTime * retval );
extern FResult plfapiinfra_clk_GetUniversalTime( int winid, DateTime * retval );
extern FResult plfapiinfra_clk_RunDuringStandby( int winid, Bool enable );
extern FResult plfapiinfra_clk_SecondsSinceWakeup( int winid, Nat32 * retval );
extern FResult plfapiinfra_clk_SetAlarm( int winid, DateTime alarm );
extern FResult plfapiinfra_clk_SetClock( int winid, DateTime utc, DateTime lto );
extern FResult plfapiinfra_clk_SetWakeupMode( int winid, Bool enable );
extern FResult plfapiinfra_crypt_Crypt( int winid, Nat8 * Key, Nat8 * Buffer, FResult * retval );
#define plfapiinfra_crypt_Ok  ((FResult)0)
#define plfapiinfra_crypt_Ok_CONSTANT  0
extern FResult plfapiinfra_dbbrwse_GetPacket( char * pub, char * label, Nat8 * bag, int baglength, Nat8 * packet, int packetlength );
extern FResult plfapiinfra_dbbrwse_GetPacketLength( char * pub, char * label, Nat8 * bag, int baglength, int * retval );
#define plfapiinfra_dbbrwse_KeyLength  ((int)32)
#define plfapiinfra_dbbrwse_KeyLength_CONSTANT  32
extern FResult plfapiinfra_dbtf_HasLastFileAccessSucceeded( int winid, Bool * retval );
extern FResult plfapiinfra_dbtf_IsFilePresent( int winid, Bool * retval );
extern FResult plfapiinfra_dbtf_SendData( int winid, void * bag, int length, Nat16 * Crc, int * retval );
#define plfapiinfra_dbtf_TransferNotOk  ((int)2)
#define plfapiinfra_dbtf_TransferNotOk_CONSTANT  2
#define plfapiinfra_dbtf_TransferNotOkFsNotAvailable  ((int)3)
#define plfapiinfra_dbtf_TransferNotOkFsNotAvailable_CONSTANT  3
#define plfapiinfra_dbtf_TransferOk  ((int)0)
#define plfapiinfra_dbtf_TransferOk_CONSTANT  0
#define plfapiinfra_dbtf_TransferOkNoCrcAvailable  ((int)1)
#define plfapiinfra_dbtf_TransferOkNoCrcAvailable_CONSTANT  1
extern FResult plfapiinfra_dbtfci_GetId( int winid, Nat8 * id, Nat32 * idlen, Bool * retval );
extern FResult plfapiinfra_dbtfci_HasLastFileAccessSucceeded( int winid, Bool * retval );
extern FResult plfapiinfra_dbtfci_IsFilePresent( int winid, Bool * retval );
extern FResult plfapiinfra_dbtfci_SendData( int winid, void * bag, int length, Nat16 * Crc, int * retval );
#define plfapiinfra_dbtfci_TransferNotOk  ((int)2)
#define plfapiinfra_dbtfci_TransferNotOk_CONSTANT  2
#define plfapiinfra_dbtfci_TransferNotOkFsNotAvailable  ((int)3)
#define plfapiinfra_dbtfci_TransferNotOkFsNotAvailable_CONSTANT  3
#define plfapiinfra_dbtfci_TransferOk  ((int)0)
#define plfapiinfra_dbtfci_TransferOk_CONSTANT  0
#define plfapiinfra_dbtfci_TransferOkNoCrcAvailable  ((int)1)
#define plfapiinfra_dbtfci_TransferOkNoCrcAvailable_CONSTANT  1
extern FResult plfapiinfra_dmpctr_DisableMagicKeys( int winid );
extern FResult plfapiinfra_dmpctr_EnableMagicKeys( int winid );
extern FResult plfapiinfra_dmpctr_MakeDebugDump( int winid, Bool fatal, char * debugdata, int len, Nat32 options );
#define plfapiinfra_dmpctr_AllFeatures  ((Nat32)-1)
#define plfapiinfra_dmpctr_AllFeatures_CONSTANT  -1
#define plfapiinfra_dmpctr_ClientContext  ((Nat32)16)
#define plfapiinfra_dmpctr_ClientContext_CONSTANT  16
#define plfapiinfra_dmpctr_DebugPrintBuffer  ((Nat32)32)
#define plfapiinfra_dmpctr_DebugPrintBuffer_CONSTANT  32
#define plfapiinfra_dmpctr_DvpPrintBuffer505x  ((Nat32)512)
#define plfapiinfra_dmpctr_DvpPrintBuffer505x_CONSTANT  512
#define plfapiinfra_dmpctr_DvpPrintBufferMIPS  ((Nat32)64)
#define plfapiinfra_dmpctr_DvpPrintBufferMIPS_CONSTANT  64
#define plfapiinfra_dmpctr_DvpPrintBufferTm0  ((Nat32)128)
#define plfapiinfra_dmpctr_DvpPrintBufferTm0_CONSTANT  128
#define plfapiinfra_dmpctr_DvpPrintBufferTm1  ((Nat32)256)
#define plfapiinfra_dmpctr_DvpPrintBufferTm1_CONSTANT  256
#define plfapiinfra_dmpctr_ErrorDetails  ((Nat32)2)
#define plfapiinfra_dmpctr_ErrorDetails_CONSTANT  2
#define plfapiinfra_dmpctr_FastTrace  ((Nat32)4096)
#define plfapiinfra_dmpctr_FastTrace_CONSTANT  4096
#define plfapiinfra_dmpctr_KernelPrintBuffer  ((Nat32)1024)
#define plfapiinfra_dmpctr_KernelPrintBuffer_CONSTANT  1024
#define plfapiinfra_dmpctr_KernelTrace  ((Nat32)2048)
#define plfapiinfra_dmpctr_KernelTrace_CONSTANT  2048
#define plfapiinfra_dmpctr_NoFeatures  ((Nat32)0)
#define plfapiinfra_dmpctr_NoFeatures_CONSTANT  0
#define plfapiinfra_dmpctr_SetAndSwVersion  ((Nat32)1)
#define plfapiinfra_dmpctr_SetAndSwVersion_CONSTANT  1
#define plfapiinfra_dmpctr_SystemContext  ((Nat32)8)
#define plfapiinfra_dmpctr_SystemContext_CONSTANT  8
#define plfapiinfra_dmpctr_TaskContext  ((Nat32)4)
#define plfapiinfra_dmpctr_TaskContext_CONSTANT  4
#define plfapiinfra_errid_InterfaceNotAvailable  ((FResult)2)
#define plfapiinfra_errid_InterfaceNotAvailable_CONSTANT  2
#define plfapiinfra_errid_Ok  ((FResult)0)
#define plfapiinfra_errid_Ok_CONSTANT  0
#define plfapiinfra_errid_Other  ((FResult)-1)
#define plfapiinfra_errid_Other_CONSTANT  -1
#define plfapiinfra_errid_ResourceNotOwned  ((FResult)1)
#define plfapiinfra_errid_ResourceNotOwned_CONSTANT  1
extern FResult plfapiinfra_evlogctr_ClearLog( int winid );
extern FResult plfapiinfra_evlogctr_GetHwLogRecord( int winid, int BackwardRef, PlfApiEventLogEntry * log, Bool * retval );
extern FResult plfapiinfra_evlogctr_GetLastAlign( int winid, Nat32 * retval );
extern FResult plfapiinfra_evlogctr_GetLastLogCleared( int winid, Nat32 * retval );
extern FResult plfapiinfra_evlogctr_GetLoggedEvents( int winid, Nat16 * retval );
extern FResult plfapiinfra_evlogctr_GetLogRecord( int winid, int BackwardRef, PlfApiEventLogEntry * log, Bool * retval );
extern FResult plfapiinfra_evlogctr_GetNumReboots( int winid, Nat16 * retval );
extern FResult plfapiinfra_evlogctr_GetNvmIntegCheck( int winid, Nat32 * retval );
extern FResult plfapiinfra_evlogctr_GetSwVersion( int winid, char * swver );
extern FResult plfapiinfra_evlogctr_HwClearLog( int winid );
extern FResult plfapiinfra_evlogctr_HwGetLastLogCleared( int winid, Nat32 * retval );
extern FResult plfapiinfra_evlogctr_HwGetLoggedEvents( int winid, Nat16 * retval );
extern FResult plfapiinfra_evlogctr_SetLastKey( int winid, KeySource source, Bool Toggle, KeySystem system, KeyCommand command, int TimeStamp );
extern FResult plfapiinfra_evlogctr_SetLastKeyUp( int winid, KeySystem sys, KeyCommand command );
extern FResult plfapiinfra_evlogctr_SetLastSrc( int winid, Nat8 src );
extern FResult plfapiinfra_evlogctr_SetNvmIntegCheck( int winid, Nat32 value );
extern FResult plfapiinfra_evlogctr_SetSwVersion( int winid, char * swver );
#define plfapiinfra_evlogctr_MinuteMask  ((Nat16)32768)
#define plfapiinfra_evlogctr_MinuteMask_CONSTANT  32768
extern FResult plfapiinfra_fops_IsPartitionMounted( int winid, char * mountpoint, Bool * retval );
extern FResult plfapiinfra_fops_PartitionMount( int winid, char * partitionname, char * mountpoint, char * fstype, Nat32 mountflags, char * options, FResult * retval );
extern FResult plfapiinfra_fops_PartitionUnmount( int winid, char * mountpoint, FResult * retval );
#define plfapiinfra_fops_MountFlagNone  ((Nat32)0)
#define plfapiinfra_fops_MountFlagNone_CONSTANT  0
#define plfapiinfra_fops_MountFlagReadOnly  ((Nat32)1)
#define plfapiinfra_fops_MountFlagReadOnly_CONSTANT  1
#define plfapiinfra_fops_Ok  ((FResult)0)
#define plfapiinfra_fops_Ok_CONSTANT  0
#define plfapiinfra_fops_PartitionAlreadyMounted  ((FResult)2)
#define plfapiinfra_fops_PartitionAlreadyMounted_CONSTANT  2
#define plfapiinfra_fops_PartitionMountFailed  ((FResult)1)
#define plfapiinfra_fops_PartitionMountFailed_CONSTANT  1
#define plfapiinfra_fops_PartitionNotMounted  ((FResult)3)
#define plfapiinfra_fops_PartitionNotMounted_CONSTANT  3
extern FResult plfapiinfra_gio_PinGetAlt( int winid, int pinid, int * retval );
extern FResult plfapiinfra_gio_PinGetLatch( int winid, int pinid, int * retval );
extern FResult plfapiinfra_gio_PinGetLine( int winid, int pinid, int * retval );
extern FResult plfapiinfra_gio_PinGetMode( int winid, int pinid, int * retval );
extern FResult plfapiinfra_gio_PinSetAlt( int winid, int pinid, int alt );
extern FResult plfapiinfra_gio_PinSetLatch( int winid, int pinid, int value );
extern FResult plfapiinfra_gio_PinSetMode( int winid, int pinid, int mode );
extern FResult plfapiinfra_gio_PortGetLatch( int winid, int port, int * retval );
extern FResult plfapiinfra_gio_PortGetLine( int winid, int port, int * retval );
extern FResult plfapiinfra_gio_PortSetAlt( int winid, int port, int mask, int alt );
extern FResult plfapiinfra_gio_PortSetLatch( int winid, int port, int mask, int value );
extern FResult plfapiinfra_gio_PortSetMode( int winid, int port, int mask, int mode );
#define plfapiinfra_gio_HighImpedance  ((int)0)
#define plfapiinfra_gio_HighImpedance_CONSTANT  0
#define plfapiinfra_gio_OpenDrain  ((int)1)
#define plfapiinfra_gio_OpenDrain_CONSTANT  1
#define plfapiinfra_gio_PushPull  ((int)2)
#define plfapiinfra_gio_PushPull_CONSTANT  2
#define plfapiinfra_gio_QuasiBidirectional  ((int)3)
#define plfapiinfra_gio_QuasiBidirectional_CONSTANT  3
extern FResult plfapiinfra_i2cc_BlockBus( int winid, int bus, Bool * retval );
extern FResult plfapiinfra_i2cc_EnterIdleMode( int winid, int bus, Bool * retval );
extern FResult plfapiinfra_i2cc_GetBlocked( int winid, int * retval );
extern FResult plfapiinfra_i2cc_GetControlWord( int winid, int bus, int * retval );
extern FResult plfapiinfra_i2cc_GetIdle( int winid, int * retval );
extern FResult plfapiinfra_i2cc_GetMasterEnabled( int winid, int * retval );
extern FResult plfapiinfra_i2cc_GetSlaveEnabled( int winid, int * retval );
extern FResult plfapiinfra_i2cc_LeaveIdleMode( int winid, int bus, Bool * retval );
extern FResult plfapiinfra_i2cc_MasterDisable( int winid, int bus, Bool * retval );
extern FResult plfapiinfra_i2cc_MasterEnable( int winid, int bus, Bool * retval );
extern FResult plfapiinfra_i2cc_SetBitRate( int winid, int bus, int bitrate, FResult * retval );
extern FResult plfapiinfra_i2cc_SetMasterTimeout( int winid, int bus, int timeout, FResult * retval );
extern FResult plfapiinfra_i2cc_SlaveDisable( int winid, int bus, Bool * retval );
extern FResult plfapiinfra_i2cc_SlaveEnable( int winid, int address, Nat8 * buf, int size, Bool * retval );
extern FResult plfapiinfra_i2cc_UnblockBus( int winid, int bus, Bool * retval );
#define plfapiinfra_i2cc_Blocked  ((int)8)
#define plfapiinfra_i2cc_Blocked_CONSTANT  8
#define plfapiinfra_i2cc_BusError  ((FResult)2)
#define plfapiinfra_i2cc_BusError_CONSTANT  2
#define plfapiinfra_i2cc_Idle  ((int)4)
#define plfapiinfra_i2cc_Idle_CONSTANT  4
#define plfapiinfra_i2cc_IllegalUse  ((FResult)1)
#define plfapiinfra_i2cc_IllegalUse_CONSTANT  1
#define plfapiinfra_i2cc_MasterEnabled  ((int)1)
#define plfapiinfra_i2cc_MasterEnabled_CONSTANT  1
#define plfapiinfra_i2cc_Ok  ((FResult)0)
#define plfapiinfra_i2cc_Ok_CONSTANT  0
#define plfapiinfra_i2cc_SlaveEnabled  ((int)2)
#define plfapiinfra_i2cc_SlaveEnabled_CONSTANT  2
extern FResult plfapiinfra_i2cm_Read( int winid, int address, Nat8 * msg, int len, FResult * retval );
extern FResult plfapiinfra_i2cm_Write( int winid, int address, Nat8 * msg, int len, FResult * retval );
extern FResult plfapiinfra_i2cm_WriteRead( int winid, int address, Nat8 * msgw, int lenw, Nat8 * msgr, int lenr, FResult * retval );
#define plfapiinfra_i2cm_BusBusyTimeout  ((FResult)12)
#define plfapiinfra_i2cm_BusBusyTimeout_CONSTANT  12
#define plfapiinfra_i2cm_BusError  ((FResult)1)
#define plfapiinfra_i2cm_BusError_CONSTANT  1
#define plfapiinfra_i2cm_DeviceError  ((FResult)3)
#define plfapiinfra_i2cm_DeviceError_CONSTANT  3
#define plfapiinfra_i2cm_HardwareError  ((FResult)10)
#define plfapiinfra_i2cm_HardwareError_CONSTANT  10
#define plfapiinfra_i2cm_IllegalUse  ((FResult)9)
#define plfapiinfra_i2cm_IllegalUse_CONSTANT  9
#define plfapiinfra_i2cm_MasterModeClockStretchTimeout  ((FResult)13)
#define plfapiinfra_i2cm_MasterModeClockStretchTimeout_CONSTANT  13
#define plfapiinfra_i2cm_NoBusPower  ((FResult)11)
#define plfapiinfra_i2cm_NoBusPower_CONSTANT  11
#define plfapiinfra_i2cm_Ok  ((FResult)0)
#define plfapiinfra_i2cm_Ok_CONSTANT  0
#define plfapiinfra_i2cm_OtherError  ((FResult)8)
#define plfapiinfra_i2cm_OtherError_CONSTANT  8
#define plfapiinfra_i2cm_ReadError  ((FResult)5)
#define plfapiinfra_i2cm_ReadError_CONSTANT  5
#define plfapiinfra_i2cm_SlaveModeClockSignalTimeout  ((FResult)14)
#define plfapiinfra_i2cm_SlaveModeClockSignalTimeout_CONSTANT  14
#define plfapiinfra_i2cm_StartFailed  ((FResult)2)
#define plfapiinfra_i2cm_StartFailed_CONSTANT  2
#define plfapiinfra_i2cm_StopFailed  ((FResult)6)
#define plfapiinfra_i2cm_StopFailed_CONSTANT  6
#define plfapiinfra_i2cm_Timeout  ((FResult)7)
#define plfapiinfra_i2cm_Timeout_CONSTANT  7
#define plfapiinfra_i2cm_WriteError  ((FResult)4)
#define plfapiinfra_i2cm_WriteError_CONSTANT  4
extern FResult plfapiinfra_infraitf_GetAvailableInterfaces( int * nbrgroups, Nat32 * ids );
#define plfapiinfra_infraitfid_audonly  ((Nat32)1)
#define plfapiinfra_infraitfid_audonly_CONSTANT  1
#define plfapiinfra_infraitfid_audonly2  ((Nat32)1)
#define plfapiinfra_infraitfid_audonly2_CONSTANT  1
#define plfapiinfra_infraitfid_auth  ((Nat32)1)
#define plfapiinfra_infraitfid_auth_CONSTANT  1
#define plfapiinfra_infraitfid_bffs  ((Nat32)1)
#define plfapiinfra_infraitfid_bffs_CONSTANT  1
#define plfapiinfra_infraitfid_bootloader  ((Nat32)1)
#define plfapiinfra_infraitfid_bootloader_CONSTANT  1
#define plfapiinfra_infraitfid_cecack  ((Nat32)1)
#define plfapiinfra_infraitfid_cecack_CONSTANT  1
#define plfapiinfra_infraitfid_cecctrl  ((Nat32)1)
#define plfapiinfra_infraitfid_cecctrl_CONSTANT  1
#define plfapiinfra_infraitfid_cectx  ((Nat32)1)
#define plfapiinfra_infraitfid_cectx_CONSTANT  1
#define plfapiinfra_infraitfid_clk  ((Nat32)1)
#define plfapiinfra_infraitfid_clk_CONSTANT  1
#define plfapiinfra_infraitfid_crypt  ((Nat32)1)
#define plfapiinfra_infraitfid_crypt_CONSTANT  1
#define plfapiinfra_infraitfid_dbbrwse  ((Nat32)1)
#define plfapiinfra_infraitfid_dbbrwse_CONSTANT  1
#define plfapiinfra_infraitfid_dbtf  ((Nat32)1)
#define plfapiinfra_infraitfid_dbtf_CONSTANT  1
#define plfapiinfra_infraitfid_dbtfci  ((Nat32)1)
#define plfapiinfra_infraitfid_dbtfci_CONSTANT  1
#define plfapiinfra_infraitfid_dmpctr  ((Nat32)1)
#define plfapiinfra_infraitfid_dmpctr_CONSTANT  1
#define plfapiinfra_infraitfid_evlogctr  ((Nat32)1)
#define plfapiinfra_infraitfid_evlogctr_CONSTANT  1
#define plfapiinfra_infraitfid_fops  ((Nat32)1)
#define plfapiinfra_infraitfid_fops_CONSTANT  1
#define plfapiinfra_infraitfid_fopsN  ((Nat32)1)
#define plfapiinfra_infraitfid_fopsN_CONSTANT  1
#define plfapiinfra_infraitfid_gio  ((Nat32)1)
#define plfapiinfra_infraitfid_gio_CONSTANT  1
#define plfapiinfra_infraitfid_i2cc  ((Nat32)1)
#define plfapiinfra_infraitfid_i2cc_CONSTANT  1
#define plfapiinfra_infraitfid_i2cm  ((Nat32)1)
#define plfapiinfra_infraitfid_i2cm_CONSTANT  1
#define plfapiinfra_infraitfid_isha  ((Nat32)1)
#define plfapiinfra_infraitfid_isha_CONSTANT  1
#define plfapiinfra_infraitfid_keyi  ((Nat32)1)
#define plfapiinfra_infraitfid_keyi_CONSTANT  1
#define plfapiinfra_infraitfid_led  ((Nat32)1)
#define plfapiinfra_infraitfid_led_CONSTANT  1
#define plfapiinfra_infraitfid_ncd  ((Nat32)1)
#define plfapiinfra_infraitfid_ncd_CONSTANT  1
#define plfapiinfra_infraitfid_net  ((Nat32)1)
#define plfapiinfra_infraitfid_net_CONSTANT  1
#define plfapiinfra_infraitfid_net2  ((Nat32)1)
#define plfapiinfra_infraitfid_net2_CONSTANT  1
#define plfapiinfra_infraitfid_p2pacN  ((Nat32)1)
#define plfapiinfra_infraitfid_p2pacN_CONSTANT  1
#define plfapiinfra_infraitfid_p2pah  ((Nat32)1)
#define plfapiinfra_infraitfid_p2pah_CONSTANT  1
#define plfapiinfra_infraitfid_secsto  ((Nat32)1)
#define plfapiinfra_infraitfid_secsto_CONSTANT  1
#define plfapiinfra_infraitfid_shmem  ((Nat32)1)
#define plfapiinfra_infraitfid_shmem_CONSTANT  1
#define plfapiinfra_infraitfid_uartctl  ((Nat32)1)
#define plfapiinfra_infraitfid_uartctl_CONSTANT  1
#define plfapiinfra_infraitfid_uid  ((Nat32)1)
#define plfapiinfra_infraitfid_uid_CONSTANT  1
#define plfapiinfra_infraitfid_upginf  ((Nat32)1)
#define plfapiinfra_infraitfid_upginf_CONSTANT  1
#define plfapiinfra_infraitfid_upginf2  ((Nat32)1)
#define plfapiinfra_infraitfid_upginf2_CONSTANT  1
#define plfapiinfra_infraitfid_upginf3  ((Nat32)1)
#define plfapiinfra_infraitfid_upginf3_CONSTANT  1
#define plfapiinfra_infraitfid_upgtool  ((Nat32)1)
#define plfapiinfra_infraitfid_upgtool_CONSTANT  1
#define plfapiinfra_infraitfid_upgtool2  ((Nat32)1)
#define plfapiinfra_infraitfid_upgtool2_CONSTANT  1
#define plfapiinfra_infraitfid_usbdev  ((Nat32)1)
#define plfapiinfra_infraitfid_usbdev_CONSTANT  1
#define plfapiinfra_infraitfid_usbdev2  ((Nat32)1)
#define plfapiinfra_infraitfid_usbdev2_CONSTANT  1
#define plfapiinfra_infraitfid_vidstor  ((Nat32)1)
#define plfapiinfra_infraitfid_vidstor_CONSTANT  1
#define plfapiinfra_infraitfid_vidstor2  ((Nat32)1)
#define plfapiinfra_infraitfid_vidstor2_CONSTANT  1
extern FResult plfapiinfra_isha_Finish( Nat32 context, Nat8 * digest );
extern FResult plfapiinfra_isha_Init( Nat32 * context );
extern FResult plfapiinfra_isha_Update( Nat32 context, Nat8 * buffer, Nat32 len );
#define plfapiinfra_isha_ResultError  ((FResult)1)
#define plfapiinfra_isha_ResultError_CONSTANT  1
#define plfapiinfra_isha_ResultOk  ((FResult)0)
#define plfapiinfra_isha_ResultOk_CONSTANT  0
#define plfapiinfra_isha_Sha1DigestSize  ((int)20)
#define plfapiinfra_isha_Sha1DigestSize_CONSTANT  20
extern FResult plfapiinfra_keyi_Down( int winid, KeySource source, KeySystem system, KeyCommand command, Bool * retval );
extern FResult plfapiinfra_keyi_Up( int winid, KeySource source, KeySystem system, KeyCommand command, Bool * retval );
extern FResult plfapiinfra_led_DisablePlfLedControl( int winid );
extern FResult plfapiinfra_led_EnablePlfLedControl( int winid );
extern FResult plfapiinfra_led_GetIntensity( int winid, int led, Nat8 * retval );
extern FResult plfapiinfra_led_IntensitySupported( int winid, int led, Bool * retval );
extern FResult plfapiinfra_led_IsPlfLedControlEnabled( int winid, Bool * retval );
extern FResult plfapiinfra_led_SetBlinking( int winid, int led, int msecson, int msecsoff );
extern FResult plfapiinfra_led_SetFlash( int winid, int led, int msecs );
extern FResult plfapiinfra_led_SetIntensity( int windid, int led, Nat8 intensity );
extern FResult plfapiinfra_led_SetLightGuide( int winid, int led, Bool turnon );
extern FResult plfapiinfra_led_SetPermanent( int winid, int led, Bool offon );
#define plfapiinfra_led_MainLed  ((int)1)
#define plfapiinfra_led_MainLed_CONSTANT  1
#define plfapiinfra_led_SBYLed  ((int)0)
#define plfapiinfra_led_SBYLed_CONSTANT  0
extern FResult plfapiinfra_ncd_Mem( int winid, Nat32 key, Nat32 size, Address * address, FResult * retval );
#define plfapiinfra_ncd_ErrorInvalidKey  ((FResult)-1001)
#define plfapiinfra_ncd_ErrorInvalidKey_CONSTANT  -1001
#define plfapiinfra_ncd_ErrorInvalidSize  ((FResult)-1002)
#define plfapiinfra_ncd_ErrorInvalidSize_CONSTANT  -1002
#define plfapiinfra_ncd_ErrorOk  ((FResult)0)
#define plfapiinfra_ncd_ErrorOk_CONSTANT  0
#define plfapiinfra_ncd_ErrorOutOfMemory  ((FResult)-1003)
#define plfapiinfra_ncd_ErrorOutOfMemory_CONSTANT  -1003
#define plfapiinfra_ncd_IdCeplfTestHarness  ((Nat32)-1870589936)
#define plfapiinfra_ncd_IdCeplfTestHarness_CONSTANT  -1870589936
#define plfapiinfra_ncd_IdCesvcPgctlLockEnable  ((Nat32)-2146291698)
#define plfapiinfra_ncd_IdCesvcPgctlLockEnable_CONSTANT  -2146291698
#define plfapiinfra_ncd_IdColoriMetry  ((Nat32)1887600647)
#define plfapiinfra_ncd_IdColoriMetry_CONSTANT  1887600647
#define plfapiinfra_ncd_IdColour  ((Nat32)1887600646)
#define plfapiinfra_ncd_IdColour_CONSTANT  1887600646
#define plfapiinfra_ncd_IdExColoriMetry  ((Nat32)1887600648)
#define plfapiinfra_ncd_IdExColoriMetry_CONSTANT  1887600648
#define plfapiinfra_ncd_IdHeadphonesOutToSpdif  ((Nat32)1887600645)
#define plfapiinfra_ncd_IdHeadphonesOutToSpdif_CONSTANT  1887600645
#define plfapiinfra_ncd_IdLastEventLog  ((Nat32)1887596544)
#define plfapiinfra_ncd_IdLastEventLog_CONSTANT  1887596544
#define plfapiinfra_ncd_IdLastPowerState  ((Nat32)1887600641)
#define plfapiinfra_ncd_IdLastPowerState_CONSTANT  1887600641
#define plfapiinfra_ncd_IdLastUseCase  ((Nat32)1888505869)
#define plfapiinfra_ncd_IdLastUseCase_CONSTANT  1888505869
#define plfapiinfra_ncd_IdLineOutToSpdif  ((Nat32)1887600643)
#define plfapiinfra_ncd_IdLineOutToSpdif_CONSTANT  1887600643
#define plfapiinfra_ncd_IdMainScalerBlank  ((Nat32)1887600649)
#define plfapiinfra_ncd_IdMainScalerBlank_CONSTANT  1887600649
#define plfapiinfra_ncd_IdMainScalerBlankBlue  ((Nat32)1887600652)
#define plfapiinfra_ncd_IdMainScalerBlankBlue_CONSTANT  1887600652
#define plfapiinfra_ncd_IdMainScalerBlankGreen  ((Nat32)1887600651)
#define plfapiinfra_ncd_IdMainScalerBlankGreen_CONSTANT  1887600651
#define plfapiinfra_ncd_IdMainScalerBlankRed  ((Nat32)1887600650)
#define plfapiinfra_ncd_IdMainScalerBlankRed_CONSTANT  1887600650
#define plfapiinfra_ncd_IdMicronasFrontEndState  ((Nat32)-2130698225)
#define plfapiinfra_ncd_IdMicronasFrontEndState_CONSTANT  -2130698225
#define plfapiinfra_ncd_IdSpdifOutToSpdif  ((Nat32)1887600644)
#define plfapiinfra_ncd_IdSpdifOutToSpdif_CONSTANT  1887600644
#define plfapiinfra_ncd_IdSpeakersOutToSpdif  ((Nat32)1887600642)
#define plfapiinfra_ncd_IdSpeakersOutToSpdif_CONSTANT  1887600642
#define plfapiinfra_ncd_iVersion  ((int)1)
#define plfapiinfra_ncd_iVersion_CONSTANT  1
extern FResult plfapiinfra_net_CheckDnsStatus( int winid, FResult * retval );
extern FResult plfapiinfra_net_ConfigInterfaceAutomatic( int winid, FResult * retval );
extern FResult plfapiinfra_net_ConfigInterfaceStatic( int winid, Nat32 ipaddress, Nat32 ipmask, Nat32 gateway, Nat32 dns1, Nat32 dns2, FResult * retval );
extern FResult plfapiinfra_net_EnableNetworkInterface( int winid, int intfhandle, FResult * retval );
extern FResult plfapiinfra_net_GetEnabledNetworkInterface( int winid, int * retval );
extern FResult plfapiinfra_net_GetEnabledNetworkInterfaceStatus( int winid, int * retval );
extern FResult plfapiinfra_net_GetInterfaceConfig( int winid, Nat32 * ipaddress, Nat32 * ipmask, Nat32 * gateway, Nat32 * dns1, Nat32 * dns2 );
extern FResult plfapiinfra_net_getMaxNoOfAutomaticWirelessDevicesSupported( int winid, int * retval );
extern FResult plfapiinfra_net_getMaxNoOfManualWirelessDevicesSupported( int winid, int * retval );
extern FResult plfapiinfra_net_getMaxNoOfNetworkinterfacesSupported( int winid, int * retval );
extern FResult plfapiinfra_net_GetNetworkConfigMode( int winid, int * retval );
extern FResult plfapiinfra_net_GetNetworkInterfaceConfigStatus( int winid, Bool * retval );
extern FResult plfapiinfra_net_GetNetworkInterfaceMacAddress( int winid, int intfhandle, int length, char * retval );
extern FResult plfapiinfra_net_GetNetworkInterfaceName( int winid, int intfhandle, int length, char * retval );
extern FResult plfapiinfra_net_GetNetworkInterfacePhysicalStatus( int winid, int intfhandle, Bool * retval );
extern FResult plfapiinfra_net_GetNetworkInterfaceThroughput( int winid, int intfhandle, int * retval );
extern FResult plfapiinfra_net_GetNetworkInterfaceType( int winid, int intfhandle, int * retval );
extern FResult plfapiinfra_net_GetNetworkInterfaceVersion( int winid, int intfhandle, int length, char * retval );
extern FResult plfapiinfra_net_GetNumberOfNetworkInterfaces( int winid, int * retval );
extern FResult plfapiinfra_net_GetNumberOfWifiDevices( int winid, int * retval );
extern FResult plfapiinfra_net_GetSelectedWiFiDevice( int winid, int * selconfigmode, int * wifidev, char * ssid );
extern FResult plfapiinfra_net_GetStoredStaticInterfaceConfig( int winid, Nat32 * ipaddress, Nat32 * ipmask, Nat32 * gateway, Nat32 * dns1, Nat32 * dns2 );
extern FResult plfapiinfra_net_IsInitializationDone( int winid, Bool * retval );
extern FResult plfapiinfra_net_IsNetworkModeVirgin( int winid, Bool * retval );
extern FResult plfapiinfra_net_SelectWiFiDevice( int winid, int selconfigmode, int wifidev, char * ssid, FResult * retval );
extern FResult plfapiinfra_net_SetNetworkToModeVirgin( int winid, FResult * retval );
extern FResult plfapiinfra_net_WifiGetChannel( int winid, int * retval );
extern FResult plfapiinfra_net_WifiGetChannelWifiDevice( int winid, int wifidev, int * retval );
extern FResult plfapiinfra_net_WifiGetEffectiveSignalStrength( int winid, int * retval );
extern FResult plfapiinfra_net_WifiGetEffectiveThroughput( int winid, int * retval );
extern FResult plfapiinfra_net_WifiGetEncryptionMode( int winid, int * mode, int * auth );
extern FResult plfapiinfra_net_WifiGetEncryptionModeWifiDevice( int winid, int wifidev, int * retval );
extern FResult plfapiinfra_net_WifiGetKey( int winid, Nat8 * key, int * len );
extern FResult plfapiinfra_net_WifiGetPortType( int winid, int * retval );
extern FResult plfapiinfra_net_WifiGetPortTypeWifiDevice( int winid, int wifidev, int * retval );
extern FResult plfapiinfra_net_WifiGetSignalStrengthWifiDevice( int winid, int wifidev, int * retval );
extern FResult plfapiinfra_net_WifiGetSsidWifiDevice( int winid, int wifidev, char * retval );
extern FResult plfapiinfra_net_WifiGetThroughputWifiDevice( int winid, int wifidev, int * retval );
extern FResult plfapiinfra_net_WifiSetChannel( int winid, int channel, FResult * retval );
extern FResult plfapiinfra_net_WifiSetEncryptionMode( int winid, int mode, int auth, FResult * retval );
extern FResult plfapiinfra_net_WifiSetKey( int winid, Nat8 * key, int len, FResult retval );
extern FResult plfapiinfra_net_WifiSetPortType( int winid, int porttype, FResult * retval );
#define plfapiinfra_net_AuthOpenSys  ((int)0)
#define plfapiinfra_net_AuthOpenSys_CONSTANT  0
#define plfapiinfra_net_AuthSharedKey  ((int)1)
#define plfapiinfra_net_AuthSharedKey_CONSTANT  1
#define plfapiinfra_net_GeneralError  ((FResult)2)
#define plfapiinfra_net_GeneralError_CONSTANT  2
#define plfapiinfra_net_InitializationNotDone  ((FResult)3)
#define plfapiinfra_net_InitializationNotDone_CONSTANT  3
#define plfapiinfra_net_IpConfigInvalid  ((FResult)1)
#define plfapiinfra_net_IpConfigInvalid_CONSTANT  1
#define plfapiinfra_net_MaxSsidArrayLength  ((int)33)
#define plfapiinfra_net_MaxSsidArrayLength_CONSTANT  33
#define plfapiinfra_net_ModeAutoIp  ((int)4)
#define plfapiinfra_net_ModeAutoIp_CONSTANT  4
#define plfapiinfra_net_ModeDhcp  ((int)3)
#define plfapiinfra_net_ModeDhcp_CONSTANT  3
#define plfapiinfra_net_ModeNoEncryption  ((int)0)
#define plfapiinfra_net_ModeNoEncryption_CONSTANT  0
#define plfapiinfra_net_ModeNone  ((int)0)
#define plfapiinfra_net_ModeNone_CONSTANT  0
#define plfapiinfra_net_ModeStatic  ((int)1)
#define plfapiinfra_net_ModeStatic_CONSTANT  1
#define plfapiinfra_net_ModeWepEncryption  ((int)1)
#define plfapiinfra_net_ModeWepEncryption_CONSTANT  1
#define plfapiinfra_net_ModeWpaEncryption  ((int)2)
#define plfapiinfra_net_ModeWpaEncryption_CONSTANT  2
#define plfapiinfra_net_NetworkInterfaceNone  ((int)0)
#define plfapiinfra_net_NetworkInterfaceNone_CONSTANT  0
#define plfapiinfra_net_NetworkNone  ((int)0)
#define plfapiinfra_net_NetworkNone_CONSTANT  0
#define plfapiinfra_net_NetworkWired  ((int)1)
#define plfapiinfra_net_NetworkWired_CONSTANT  1
#define plfapiinfra_net_NetworkWireless  ((int)2)
#define plfapiinfra_net_NetworkWireless_CONSTANT  2
#define plfapiinfra_net_Ok  ((FResult)0)
#define plfapiinfra_net_Ok_CONSTANT  0
#define plfapiinfra_net_StatusNotOk  ((int)0)
#define plfapiinfra_net_StatusNotOk_CONSTANT  0
#define plfapiinfra_net_StatusOk  ((int)1)
#define plfapiinfra_net_StatusOk_CONSTANT  1
#define plfapiinfra_net_StatusWaiting  ((int)2)
#define plfapiinfra_net_StatusWaiting_CONSTANT  2
#define plfapiinfra_net_WiFiDeviceSelectionFound  ((int)1)
#define plfapiinfra_net_WiFiDeviceSelectionFound_CONSTANT  1
#define plfapiinfra_net_WiFiDeviceSelectionManual  ((int)0)
#define plfapiinfra_net_WiFiDeviceSelectionManual_CONSTANT  0
#define plfapiinfra_net_WifiPortAdHoc  ((int)1)
#define plfapiinfra_net_WifiPortAdHoc_CONSTANT  1
#define plfapiinfra_net_WifiPortAny  ((int)0)
#define plfapiinfra_net_WifiPortAny_CONSTANT  0
#define plfapiinfra_net_WifiPortInfrastructure  ((int)2)
#define plfapiinfra_net_WifiPortInfrastructure_CONSTANT  2
extern FResult plfapiinfra_net2_CheckDnsStatus( int winid, FResult * retval );
extern FResult plfapiinfra_net2_ConfigInterfaceAutomatic( int winid, FResult * retval );
extern FResult plfapiinfra_net2_ConfigInterfaceStatic( int winid, Nat32 ipaddress, Nat32 ipmask, Nat32 gateway, Nat32 dns1, Nat32 dns2, FResult * retval );
extern FResult plfapiinfra_net2_EnableNetworkInterface( int winid, int intfhandle, FResult * retval );
extern FResult plfapiinfra_net2_GetEnabledNetworkInterface( int winid, int * retval );
extern FResult plfapiinfra_net2_GetInterfaceConfig( int winid, Nat32 * ipaddress, Nat32 * ipmask, Nat32 * gateway, Nat32 * dns1, Nat32 * dns2 );
extern FResult plfapiinfra_net2_getMaxNoOfAutomaticWirelessDevicesSupported( int winid, int * retval );
extern FResult plfapiinfra_net2_getMaxNoOfManualWirelessDevicesSupported( int winid, int * retval );
extern FResult plfapiinfra_net2_getMaxNoOfNetworkinterfacesSupported( int winid, int * retval );
extern FResult plfapiinfra_net2_GetNetworkConfigMode( int winid, int * retval );
extern FResult plfapiinfra_net2_GetNetworkInterfaceConfigStatus( int winid, int * retval );
extern FResult plfapiinfra_net2_GetNetworkInterfaceMacAddress( int winid, int intfhandle, int length, char * retval );
extern FResult plfapiinfra_net2_GetNetworkInterfaceName( int winid, int intfhandle, int length, char * retval );
extern FResult plfapiinfra_net2_GetNetworkInterfacePhysicalStatus( int winid, int intfhandle, Bool * retval );
extern FResult plfapiinfra_net2_GetNetworkInterfaceThroughput( int winid, int intfhandle, int * retval );
extern FResult plfapiinfra_net2_GetNetworkInterfaceType( int winid, int intfhandle, int * retval );
extern FResult plfapiinfra_net2_GetNetworkInterfaceVersion( int winid, int intfhandle, int length, char * retval );
extern FResult plfapiinfra_net2_GetNumberOfNetworkInterfaces( int winid, int * retval );
extern FResult plfapiinfra_net2_GetNumberOfWifiDevices( int winid, int * retval );
extern FResult plfapiinfra_net2_GetStoredStaticInterfaceConfig( int winid, Nat32 * ipaddress, Nat32 * ipmask, Nat32 * gateway, Nat32 * dns1, Nat32 * dns2 );
extern FResult plfapiinfra_net2_IsInitializationDone( int winid, Bool * retval );
extern FResult plfapiinfra_net2_IsNetworkModeVirgin( int winid, Bool * retval );
extern FResult plfapiinfra_net2_SelectWifiAntennas( int winid, int selection, FResult * retval );
extern FResult plfapiinfra_net2_SetNetworkToModeVirgin( int winid, FResult * retval );
extern FResult plfapiinfra_net2_WifiFindManualSsid( int winid, FResult * retval );
extern FResult plfapiinfra_net2_WifiGenerateWpsPin( int winid, char * pin, int pinsize );
extern FResult plfapiinfra_net2_WifiGetChannel( int winid, int * retval );
extern FResult plfapiinfra_net2_WifiGetChannelWifiDevice( int winid, int wifidev, int * retval );
extern FResult plfapiinfra_net2_WifiGetEffectiveSignalStrength( int winid, int * retval );
extern FResult plfapiinfra_net2_WifiGetEffectiveThroughput( int winid, int * retval );
extern FResult plfapiinfra_net2_WifiGetEncryptionMode( int winid, int * mode, int * auth );
extern FResult plfapiinfra_net2_WifiGetEncryptionModeWifiDevice( int winid, int wifidev, int * retval );
extern FResult plfapiinfra_net2_WifiGetKey( int winid, char * key, int * len );
extern FResult plfapiinfra_net2_WifiGetMacAddress( int winid, char * macaddr );
extern FResult plfapiinfra_net2_WifiGetMacAddressWifiDevice( int winid, int wifidev, char * macaddr );
extern FResult plfapiinfra_net2_WifiGetPortType( int winid, int * retval );
extern FResult plfapiinfra_net2_WifiGetPortTypeWifiDevice( int winid, int wifidev, int * retval );
extern FResult plfapiinfra_net2_WifiGetSignalStrengthWifiDevice( int winid, int wifidev, int * retval );
extern FResult plfapiinfra_net2_WifiGetSsid( int winid, char * ssid );
extern FResult plfapiinfra_net2_WifiGetSsidWifiDevice( int winid, int wifidev, char * retval );
extern FResult plfapiinfra_net2_WifiGetThroughputWifiDevice( int winid, int wifidev, int * retval );
extern FResult plfapiinfra_net2_WifiGetWpsModeWifiDevice( int winid, int wifidev, int * mode );
extern FResult plfapiinfra_net2_WifiScanWifiDevices( int winid, FResult * retval );
extern FResult plfapiinfra_net2_WifiSetChannel( int winid, int channel, FResult * retval );
extern FResult plfapiinfra_net2_WifiSetEncryptionMode( int winid, int mode, int auth, FResult * retval );
extern FResult plfapiinfra_net2_WifiSetKey( int winid, char * key, int len, FResult * retval );
extern FResult plfapiinfra_net2_WifiSetPortType( int winid, int porttype, FResult * retval );
extern FResult plfapiinfra_net2_WifiSetSsid( int winid, char * ssid, FResult * retval );
extern FResult plfapiinfra_net2_WifiStartWpsConnection( int winid, int mode, char * pin );
#define plfapiinfra_net2_Antenna1  ((int)1)
#define plfapiinfra_net2_Antenna1_CONSTANT  1
#define plfapiinfra_net2_Antenna2  ((int)2)
#define plfapiinfra_net2_Antenna2_CONSTANT  2
#define plfapiinfra_net2_AuthOpenSys  ((int)0)
#define plfapiinfra_net2_AuthOpenSys_CONSTANT  0
#define plfapiinfra_net2_AuthPreSharedKey  ((int)2)
#define plfapiinfra_net2_AuthPreSharedKey_CONSTANT  2
#define plfapiinfra_net2_AuthSharedKey  ((int)1)
#define plfapiinfra_net2_AuthSharedKey_CONSTANT  1
#define plfapiinfra_net2_GeneralError  ((FResult)2)
#define plfapiinfra_net2_GeneralError_CONSTANT  2
#define plfapiinfra_net2_InitializationNotDone  ((FResult)3)
#define plfapiinfra_net2_InitializationNotDone_CONSTANT  3
#define plfapiinfra_net2_IpConfigInvalid  ((FResult)1)
#define plfapiinfra_net2_IpConfigInvalid_CONSTANT  1
#define plfapiinfra_net2_MaxMacArrayLength  ((int)18)
#define plfapiinfra_net2_MaxMacArrayLength_CONSTANT  18
#define plfapiinfra_net2_MaxSsidArrayLength  ((int)33)
#define plfapiinfra_net2_MaxSsidArrayLength_CONSTANT  33
#define plfapiinfra_net2_ModeAutoIp  ((int)4)
#define plfapiinfra_net2_ModeAutoIp_CONSTANT  4
#define plfapiinfra_net2_ModeDhcp  ((int)3)
#define plfapiinfra_net2_ModeDhcp_CONSTANT  3
#define plfapiinfra_net2_ModeNoEncryption  ((int)0)
#define plfapiinfra_net2_ModeNoEncryption_CONSTANT  0
#define plfapiinfra_net2_ModeNone  ((int)0)
#define plfapiinfra_net2_ModeNone_CONSTANT  0
#define plfapiinfra_net2_ModeStatic  ((int)1)
#define plfapiinfra_net2_ModeStatic_CONSTANT  1
#define plfapiinfra_net2_ModeWepEncryption  ((int)1)
#define plfapiinfra_net2_ModeWepEncryption_CONSTANT  1
#define plfapiinfra_net2_ModeWpa2Encryption  ((int)3)
#define plfapiinfra_net2_ModeWpa2Encryption_CONSTANT  3
#define plfapiinfra_net2_ModeWpaEncryption  ((int)2)
#define plfapiinfra_net2_ModeWpaEncryption_CONSTANT  2
#define plfapiinfra_net2_NetworkInterfaceNone  ((int)0)
#define plfapiinfra_net2_NetworkInterfaceNone_CONSTANT  0
#define plfapiinfra_net2_NetworkNone  ((int)0)
#define plfapiinfra_net2_NetworkNone_CONSTANT  0
#define plfapiinfra_net2_NetworkWired  ((int)1)
#define plfapiinfra_net2_NetworkWired_CONSTANT  1
#define plfapiinfra_net2_NetworkWireless  ((int)2)
#define plfapiinfra_net2_NetworkWireless_CONSTANT  2
#define plfapiinfra_net2_Ok  ((FResult)0)
#define plfapiinfra_net2_Ok_CONSTANT  0
#define plfapiinfra_net2_StatusNotOk  ((int)0)
#define plfapiinfra_net2_StatusNotOk_CONSTANT  0
#define plfapiinfra_net2_StatusOk  ((int)1)
#define plfapiinfra_net2_StatusOk_CONSTANT  1
#define plfapiinfra_net2_StatusWaiting  ((int)2)
#define plfapiinfra_net2_StatusWaiting_CONSTANT  2
#define plfapiinfra_net2_WifiPortAdHoc  ((int)1)
#define plfapiinfra_net2_WifiPortAdHoc_CONSTANT  1
#define plfapiinfra_net2_WifiPortAny  ((int)0)
#define plfapiinfra_net2_WifiPortAny_CONSTANT  0
#define plfapiinfra_net2_WifiPortInfrastructure  ((int)2)
#define plfapiinfra_net2_WifiPortInfrastructure_CONSTANT  2
#define plfapiinfra_net2_WpsModeNone  ((int)0)
#define plfapiinfra_net2_WpsModeNone_CONSTANT  0
#define plfapiinfra_net2_WpsModePbc  ((int)1)
#define plfapiinfra_net2_WpsModePbc_CONSTANT  1
#define plfapiinfra_net2_WpsModePin  ((int)2)
#define plfapiinfra_net2_WpsModePin_CONSTANT  2
extern FResult plfapiinfra_p2pacN_OnExecutionCompleted( int winid, int appid );
extern FResult plfapiinfra_p2pacN_OnTransmissionCompleted( int winid, int appid, Bool success );
extern FResult plfapiinfra_p2pah_WriteASync( int winid, int appid, int bus, void * buf, int size, FResult * retval );
extern FResult plfapiinfra_p2pah_WriteASyncNoRetry( int winid, int appid, int bus, void * buf, int size, FResult * retval );
extern FResult plfapiinfra_p2pah_WriteCharASync( int winid, int appid, int bus, char * buf, int size, FResult * retval );
extern FResult plfapiinfra_p2pah_WriteCharASyncNoRetry( int winid, int appid, int bus, char * buf, int size, FResult * retval );
extern FResult plfapiinfra_p2pah_WriteCharNoSync( int winid, int appid, int bus, char * buf, int size, FResult * retval );
extern FResult plfapiinfra_p2pah_WriteCharNoSyncNoRetry( int winid, int appid, int bus, char * buf, int size, FResult * retval );
extern FResult plfapiinfra_p2pah_WriteNoSync( int winid, int appid, int bus, void * buf, int size, FResult * retval );
extern FResult plfapiinfra_p2pah_WriteNoSyncNoRetry( int winid, int appid, int bus, void * buf, int size, FResult * retval );
#define plfapiinfra_p2pah_Error  ((FResult)1)
#define plfapiinfra_p2pah_Error_CONSTANT  1
#define plfapiinfra_p2pah_Ok  ((FResult)0)
#define plfapiinfra_p2pah_Ok_CONSTANT  0
#define plfapiinfra_p2papid_AppIdBootloader  ((int)7)
#define plfapiinfra_p2papid_AppIdBootloader_CONSTANT  7
#define plfapiinfra_p2papid_AppIdCompair  ((int)2)
#define plfapiinfra_p2papid_AppIdCompair_CONSTANT  2
#define plfapiinfra_p2papid_AppIdDeaSvc  ((int)3)
#define plfapiinfra_p2papid_AppIdDeaSvc_CONSTANT  3
#define plfapiinfra_p2papid_AppIdDvpXray  ((int)14)
#define plfapiinfra_p2papid_AppIdDvpXray_CONSTANT  14
#define plfapiinfra_p2papid_AppIdEngineering  ((int)0)
#define plfapiinfra_p2papid_AppIdEngineering_CONSTANT  0
#define plfapiinfra_p2papid_AppIdEssenceMonitor  ((int)15)
#define plfapiinfra_p2papid_AppIdEssenceMonitor_CONSTANT  15
#define plfapiinfra_p2papid_AppIdFactory  ((int)13)
#define plfapiinfra_p2papid_AppIdFactory_CONSTANT  13
#define plfapiinfra_p2papid_AppIdForceTransparent  ((int)65536)
#define plfapiinfra_p2papid_AppIdForceTransparent_CONSTANT  65536
#define plfapiinfra_p2papid_AppIdJett  ((int)1)
#define plfapiinfra_p2papid_AppIdJett_CONSTANT  1
#define plfapiinfra_p2papid_AppIdPanelMode  ((int)16)
#define plfapiinfra_p2papid_AppIdPanelMode_CONSTANT  16
#define plfapiinfra_p2papid_AppIdPlatformTest  ((int)8)
#define plfapiinfra_p2papid_AppIdPlatformTest_CONSTANT  8
#define plfapiinfra_p2papid_AppIdPrintf  ((int)9)
#define plfapiinfra_p2papid_AppIdPrintf_CONSTANT  9
#define plfapiinfra_p2papid_AppIdSerialDebugger  ((int)5)
#define plfapiinfra_p2papid_AppIdSerialDebugger_CONSTANT  5
#define plfapiinfra_p2papid_AppIdSerialXpress  ((int)10)
#define plfapiinfra_p2papid_AppIdSerialXpress_CONSTANT  10
#define plfapiinfra_p2papid_AppIdSerialXpressBds  ((int)12)
#define plfapiinfra_p2papid_AppIdSerialXpressBds_CONSTANT  12
#define plfapiinfra_p2papid_AppIdSwDebugIntf  ((int)4)
#define plfapiinfra_p2papid_AppIdSwDebugIntf_CONSTANT  4
#define plfapiinfra_p2papid_AppIdSwUpgrade  ((int)11)
#define plfapiinfra_p2papid_AppIdSwUpgrade_CONSTANT  11
#define plfapiinfra_p2papid_AppIdTransparent  ((int)6)
#define plfapiinfra_p2papid_AppIdTransparent_CONSTANT  6
#define plfapiinfra_p2papid_BusTv  ((int)1)
#define plfapiinfra_p2papid_BusTv_CONSTANT  1
#define plfapiinfra_p2papid_BusUart  ((int)0)
#define plfapiinfra_p2papid_BusUart_CONSTANT  0
#define plfapiinfra_p2papid_Unknown  ((int)-1)
#define plfapiinfra_p2papid_Unknown_CONSTANT  -1
extern FResult plfapiinfra_resmgr_Acquire( int resid, Address * retval );
extern FResult plfapiinfra_resmgr_Release( int resid );
extern FResult plfapiinfra_secsto_Check( char * filename, FResult * retval );
extern FResult plfapiinfra_secsto_GetPacket( int handle, char * label, int packetlength, Nat8 * packet );
extern FResult plfapiinfra_secsto_GetPacketLength( int handle, char * label, int * retval );
extern FResult plfapiinfra_secsto_Load( char * filename, char * pub, int * handle, FResult * retval );
extern FResult plfapiinfra_secsto_Store( char * filename, int baglen, Nat8 * bag, int encrypt, FResult * retval );
extern FResult plfapiinfra_secsto_Unload( int handle );
#define plfapiinfra_secsto_EncryptAESUnique  ((int)1)
#define plfapiinfra_secsto_EncryptAESUnique_CONSTANT  1
#define plfapiinfra_secsto_EncryptNone  ((int)0)
#define plfapiinfra_secsto_EncryptNone_CONSTANT  0
#define plfapiinfra_secsto_ResultError  ((FResult)1)
#define plfapiinfra_secsto_ResultError_CONSTANT  1
#define plfapiinfra_secsto_ResultOk  ((FResult)0)
#define plfapiinfra_secsto_ResultOk_CONSTANT  0
extern FResult plfapiinfra_shmem_CacheFlush( int winid, Address address, Nat32 size, FResult * retval );
extern FResult plfapiinfra_shmem_CacheInvalidate( int winid, Address address, Nat32 size, FResult * retval );
extern FResult plfapiinfra_shmem_Free( int winid, Address address, FResult * retval );
extern FResult plfapiinfra_shmem_Malloc( int winid, Nat32 handle, Nat32 size, Address * address, Nat32 flags, FResult * retval );
extern FResult plfapiinfra_shmem_MallocAlign( int winid, Nat32 handle, Nat32 size, Address * address, Nat32 flags, Nat32 alignment, FResult * retval );
extern FResult plfapiinfra_shmem_MmspCreate( int winid, Nat32 * handle, Nat32 size, FResult * retval );
extern FResult plfapiinfra_shmem_MmspDelete( int winid, Nat32 handle, FResult * retval );
#define plfapiinfra_shmem_ErrorAddressIsNull  ((FResult)-1003)
#define plfapiinfra_shmem_ErrorAddressIsNull_CONSTANT  -1003
#define plfapiinfra_shmem_ErrorHandleIsNull  ((FResult)-1002)
#define plfapiinfra_shmem_ErrorHandleIsNull_CONSTANT  -1002
#define plfapiinfra_shmem_ErrorInvalidFlags  ((FResult)-1004)
#define plfapiinfra_shmem_ErrorInvalidFlags_CONSTANT  -1004
#define plfapiinfra_shmem_ErrorInvalidHandle  ((FResult)-1005)
#define plfapiinfra_shmem_ErrorInvalidHandle_CONSTANT  -1005
#define plfapiinfra_shmem_ErrorOk  ((FResult)0)
#define plfapiinfra_shmem_ErrorOk_CONSTANT  0
#define plfapiinfra_shmem_ErrorOutOfMemory  ((FResult)-1006)
#define plfapiinfra_shmem_ErrorOutOfMemory_CONSTANT  -1006
#define plfapiinfra_shmem_ErrorUnknown  ((FResult)-1001)
#define plfapiinfra_shmem_ErrorUnknown_CONSTANT  -1001
#define plfapiinfra_shmem_iVersion  ((int)1)
#define plfapiinfra_shmem_iVersion_CONSTANT  1
#define plfapiinfra_shmem_MallocCleared  ((Nat32)1)
#define plfapiinfra_shmem_MallocCleared_CONSTANT  1
#define plfapiinfra_shmem_MallocNone  ((Nat32)0)
#define plfapiinfra_shmem_MallocNone_CONSTANT  0
#define plfapiinfra_shmem_MallocPageAligned  ((Nat32)2)
#define plfapiinfra_shmem_MallocPageAligned_CONSTANT  2
extern FResult plfapiinfra_uartctl_SetBaudRate( int winid, int uart, int baudrate );
#define plfapiinfra_uartctl_BaudRate115200  ((int)115200)
#define plfapiinfra_uartctl_BaudRate115200_CONSTANT  115200
#define plfapiinfra_uartctl_BaudRate38400  ((int)38400)
#define plfapiinfra_uartctl_BaudRate38400_CONSTANT  38400
#define plfapiinfra_uartctl_ServiceUart  ((int)0)
#define plfapiinfra_uartctl_ServiceUart_CONSTANT  0
extern FResult plfapiinfra_uartprint_Disable( void );
extern FResult plfapiinfra_uartprint_Enable( void );
extern FResult plfapiinfra_uartprint_IsEnabled( Bool * retval );
extern FResult plfapiinfra_uid_GetSoCUniqueID( Nat64 * retval );
extern FResult plfapiinfra_upginf_GetCurrentTvSwDescription( int winid, int descsize, char * desc );
extern FResult plfapiinfra_upginf_GetUpgHeaderSize( int winid, int * headersize );
extern FResult plfapiinfra_upginf_GetUpgInfo( int winid, int buffersize, Nat8 * buffer, Bool * headervalid, Bool * flashable, Bool * executable, int * executionaddress, int swidsize, char * swid, int descriptionsize, char * description, int exceptionitemindex, int exceptionitemsize, char * exceptionitem );
#define plfapiinfra_upginf_DescriptionSize  ((int)128)
#define plfapiinfra_upginf_DescriptionSize_CONSTANT  128
#define plfapiinfra_upginf_SwIdSize  ((int)28)
#define plfapiinfra_upginf_SwIdSize_CONSTANT  28
extern FResult plfapiinfra_upginf2_GetCurrentTvSwDescription( int winid, int descsize, char * desc );
extern FResult plfapiinfra_upginf2_GetUpgInfo( int winid, char * filePath, Bool * headervalid, Bool * flashable, Bool * executable, int * executionaddress, int swidsize, char * swid, int descriptionsize, char * description, int exceptionitemindex, int exceptionitemsize, char * exceptionitem );
#define plfapiinfra_upginf2_DescriptionSize  ((int)128)
#define plfapiinfra_upginf2_DescriptionSize_CONSTANT  128
#define plfapiinfra_upginf2_SwIdSize  ((int)28)
#define plfapiinfra_upginf2_SwIdSize_CONSTANT  28
extern FResult plfapiinfra_upginf3_GetCurrentTvSwDescription( int winid, int descsize, char * desc );
extern FResult plfapiinfra_upginf3_GetUpgInfo( int winid, char * filepath, int fileoffset, Bool * headervalid, Bool * flashable, Bool * executable, int * executionaddress, int swidsize, char * swid, int descriptionsize, char * description, int exceptionitemindex, int exceptionitemsize, char * exceptionitem );
#define plfapiinfra_upginf3_DescriptionSize  ((int)128)
#define plfapiinfra_upginf3_DescriptionSize_CONSTANT  128
#define plfapiinfra_upginf3_SwIdSize  ((int)28)
#define plfapiinfra_upginf3_SwIdSize_CONSTANT  28
extern FResult plfapiinfra_upgtool_GetUpgLoadingProgress( int winid, int * retVal );
extern FResult plfapiinfra_upgtool_GetUpgLoadingStatus( int winid, int * retVal );
extern FResult plfapiinfra_upgtool_GetUpgProgrammingProgress( int winid, int * retVal );
extern FResult plfapiinfra_upgtool_GetUpgProgrammingStatus( int winid, int * retVal );
extern FResult plfapiinfra_upgtool_GetUpgValidationProgress( int winid, int * retVal );
extern FResult plfapiinfra_upgtool_GetUpgValidationStatus( int winid, int * retVal );
extern FResult plfapiinfra_upgtool_StartUpgLoading( int winid, char * filePath, Bool inPlaceDecrypt, Bool * retVal );
extern FResult plfapiinfra_upgtool_StartUpgProgramming( int winid, Bool * retVal );
extern FResult plfapiinfra_upgtool_StartUpgValidation( int winid, Bool * retVal );
extern FResult plfapiinfra_upgtool_StopUpgLoading( int winid, Bool * retVal );
extern FResult plfapiinfra_upgtool_StopUpgProgramming( int winid, Bool * retVal );
extern FResult plfapiinfra_upgtool_StopUpgValidation( int winid, Bool * retVal );
#define plfapiinfra_upgtool_Busy  ((int)2)
#define plfapiinfra_upgtool_Busy_CONSTANT  2
#define plfapiinfra_upgtool_Error  ((int)4)
#define plfapiinfra_upgtool_Error_CONSTANT  4
#define plfapiinfra_upgtool_Interrupted  ((int)3)
#define plfapiinfra_upgtool_Interrupted_CONSTANT  3
#define plfapiinfra_upgtool_MaxProgressValue  ((int)1000)
#define plfapiinfra_upgtool_MaxProgressValue_CONSTANT  1000
#define plfapiinfra_upgtool_NotStarted  ((int)1)
#define plfapiinfra_upgtool_NotStarted_CONSTANT  1
#define plfapiinfra_upgtool_Ok  ((int)0)
#define plfapiinfra_upgtool_Ok_CONSTANT  0
extern FResult plfapiinfra_upgtool2_GetUpgLoadingProgress( int winid, int * retVal );
extern FResult plfapiinfra_upgtool2_GetUpgLoadingStatus( int winid, int * retVal );
extern FResult plfapiinfra_upgtool2_GetUpgProgrammingProgress( int winid, int * retVal );
extern FResult plfapiinfra_upgtool2_GetUpgProgrammingStatus( int winid, int * retVal );
extern FResult plfapiinfra_upgtool2_GetUpgValidationProgress( int winid, int * retVal );
extern FResult plfapiinfra_upgtool2_GetUpgValidationStatus( int winid, int * retVal );
extern FResult plfapiinfra_upgtool2_StartUpgLoading( int winid, char * filePath, int fileOffset, Bool inPlaceDecrypt, Bool * retVal );
extern FResult plfapiinfra_upgtool2_StartUpgProgramming( int winid, Bool * retVal );
extern FResult plfapiinfra_upgtool2_StartUpgValidation( int winid, Bool * retVal );
extern FResult plfapiinfra_upgtool2_StopUpgLoading( int winid, Bool * retVal );
extern FResult plfapiinfra_upgtool2_StopUpgProgramming( int winid, Bool * retVal );
extern FResult plfapiinfra_upgtool2_StopUpgValidation( int winid, Bool * retVal );
#define plfapiinfra_upgtool2_Busy  ((int)2)
#define plfapiinfra_upgtool2_Busy_CONSTANT  2
#define plfapiinfra_upgtool2_Error  ((int)4)
#define plfapiinfra_upgtool2_Error_CONSTANT  4
#define plfapiinfra_upgtool2_Interrupted  ((int)3)
#define plfapiinfra_upgtool2_Interrupted_CONSTANT  3
#define plfapiinfra_upgtool2_MaxProgressValue  ((int)1000)
#define plfapiinfra_upgtool2_MaxProgressValue_CONSTANT  1000
#define plfapiinfra_upgtool2_NotStarted  ((int)1)
#define plfapiinfra_upgtool2_NotStarted_CONSTANT  1
#define plfapiinfra_upgtool2_Ok  ((int)0)
#define plfapiinfra_upgtool2_Ok_CONSTANT  0
extern FResult plfapiinfra_usbdev_GetActiveDevicesList( int winid, int nrofdevs, int * devices, int * activedevices );
extern FResult plfapiinfra_usbdev_GetDeviceInfo( int winid, int devid, int manufstrlen, char * manufacturer, int prodstrlen, char * product, int revstrlen, char * revision, int * devicetype, Bool * deviswriteprotected, Bool * ismounted, int pathnamelength, char * pathname, int * physdevid );
extern FResult plfapiinfra_usbdev_GetPhysDeviceMemberList( int winid, int physdevid, int nrofdevs, int * devices, int * actualnrofdevs );
extern FResult plfapiinfra_usbdev_GetPhysDevicesList( int winid, int nrofphysdevs, int * physdevices, int * activephysdevices );
extern FResult plfapiinfra_usbdev_GetUsbMaxDevices( int winid, int * maxdevs );
extern FResult plfapiinfra_usbdev_GetUsbMaxPartitionsPerDevice( int winid, int * maxparts );
#define plfapiinfra_usbdev_Communication  ((int)5)
#define plfapiinfra_usbdev_Communication_CONSTANT  5
#define plfapiinfra_usbdev_HID  ((int)4)
#define plfapiinfra_usbdev_HID_CONSTANT  4
#define plfapiinfra_usbdev_Hub  ((int)1)
#define plfapiinfra_usbdev_Hub_CONSTANT  1
#define plfapiinfra_usbdev_IllegalArgument  ((FResult)-1001)
#define plfapiinfra_usbdev_IllegalArgument_CONSTANT  -1001
#define plfapiinfra_usbdev_MassStorage  ((int)2)
#define plfapiinfra_usbdev_MassStorage_CONSTANT  2
#define plfapiinfra_usbdev_NrOfDevsTooBig  ((FResult)-1002)
#define plfapiinfra_usbdev_NrOfDevsTooBig_CONSTANT  -1002
#define plfapiinfra_usbdev_NullPointer  ((FResult)-1003)
#define plfapiinfra_usbdev_NullPointer_CONSTANT  -1003
#define plfapiinfra_usbdev_Printer  ((int)3)
#define plfapiinfra_usbdev_Printer_CONSTANT  3
#define plfapiinfra_usbdev_PTP  ((int)6)
#define plfapiinfra_usbdev_PTP_CONSTANT  6
#define plfapiinfra_usbdev_Unknown  ((int)-1)
#define plfapiinfra_usbdev_Unknown_CONSTANT  -1
#define plfapiinfra_usbdev_UnknownDeviceId  ((int)-1)
#define plfapiinfra_usbdev_UnknownDeviceId_CONSTANT  -1
extern FResult plfapiinfra_usbdev2_GetActiveDevicesList( int winid, int nrofdevs, int * devices, int * activedevices, FResult * fresult );
extern FResult plfapiinfra_usbdev2_GetDeviceInfo( int winid, int devid, int manufstrlen, char * manufacturer, int prodstrlen, char * product, int revstrlen, char * revision, int * devicetype, Bool * deviswriteprotected, Bool * ismounted, int pathnamelength, char * pathname, int * physdevid, FResult * fresult );
extern FResult plfapiinfra_usbdev2_GetPhysDeviceMemberList( int winid, int physdevid, int nrofdevs, int * devices, int * actualnrofdevs, FResult * fresult );
extern FResult plfapiinfra_usbdev2_GetPhysDevicesList( int winid, int nrofphysdevs, int * physdevices, int * activephysdevices, FResult * fresult );
extern FResult plfapiinfra_usbdev2_GetUsbMaxDevices( int winid, int * maxdevs );
extern FResult plfapiinfra_usbdev2_GetUsbMaxPartitionsPerDevice( int winid, int * maxparts );
extern FResult plfapiinfra_usbdev2_IsInitializationDone( int winid, Bool * retval );
#define plfapiinfra_usbdev2_Communication  ((int)5)
#define plfapiinfra_usbdev2_Communication_CONSTANT  5
#define plfapiinfra_usbdev2_HID  ((int)4)
#define plfapiinfra_usbdev2_HID_CONSTANT  4
#define plfapiinfra_usbdev2_Hub  ((int)1)
#define plfapiinfra_usbdev2_Hub_CONSTANT  1
#define plfapiinfra_usbdev2_IllegalArgument  ((FResult)1)
#define plfapiinfra_usbdev2_IllegalArgument_CONSTANT  1
#define plfapiinfra_usbdev2_MassStorage  ((int)2)
#define plfapiinfra_usbdev2_MassStorage_CONSTANT  2
#define plfapiinfra_usbdev2_NrOfDevsTooBig  ((FResult)2)
#define plfapiinfra_usbdev2_NrOfDevsTooBig_CONSTANT  2
#define plfapiinfra_usbdev2_NullPointer  ((FResult)3)
#define plfapiinfra_usbdev2_NullPointer_CONSTANT  3
#define plfapiinfra_usbdev2_Ok  ((FResult)0)
#define plfapiinfra_usbdev2_Ok_CONSTANT  0
#define plfapiinfra_usbdev2_Printer  ((int)3)
#define plfapiinfra_usbdev2_Printer_CONSTANT  3
#define plfapiinfra_usbdev2_PTP  ((int)6)
#define plfapiinfra_usbdev2_PTP_CONSTANT  6
#define plfapiinfra_usbdev2_Unknown  ((int)-1)
#define plfapiinfra_usbdev2_Unknown_CONSTANT  -1
#define plfapiinfra_usbdev2_UnknownDeviceId  ((int)-1)
#define plfapiinfra_usbdev2_UnknownDeviceId_CONSTANT  -1
#define plfapiinfra_usbdev2_UnknownPtpDeviceId  ((int)-2)
#define plfapiinfra_usbdev2_UnknownPtpDeviceId_CONSTANT  -2
extern FResult plfapiinfra_vidstor_Format( int winid, int * retval );
extern FResult plfapiinfra_vidstor_GetFreeSize( int winid, Nat64 * retval );
extern FResult plfapiinfra_vidstor_GetSize( int winid, Nat64 * retval, int * error );
extern FResult plfapiinfra_vidstor_GetSpeedClass( int winid, int * retval );
extern FResult plfapiinfra_vidstor_GetState( int winid, int * retval );
extern FResult plfapiinfra_vidstor_GetWriteProtected( int winid, Bool * retval );
extern FResult plfapiinfra_vidstor_IsInitialisationDone( int winid, Bool * retval );
#define plfapiinfra_vidstor_ErrorBadCard  ((int)-3)
#define plfapiinfra_vidstor_ErrorBadCard_CONSTANT  -3
#define plfapiinfra_vidstor_ErrorNoCard  ((int)-1)
#define plfapiinfra_vidstor_ErrorNoCard_CONSTANT  -1
#define plfapiinfra_vidstor_ErrorNotMounted  ((int)-2)
#define plfapiinfra_vidstor_ErrorNotMounted_CONSTANT  -2
#define plfapiinfra_vidstor_ErrorWriteProtected  ((int)-4)
#define plfapiinfra_vidstor_ErrorWriteProtected_CONSTANT  -4
#define plfapiinfra_vidstor_Ok  ((int)0)
#define plfapiinfra_vidstor_Ok_CONSTANT  0
#define plfapiinfra_vidstor_Speedclass10  ((int)10)
#define plfapiinfra_vidstor_Speedclass10_CONSTANT  10
#define plfapiinfra_vidstor_Speedclass2  ((int)2)
#define plfapiinfra_vidstor_Speedclass2_CONSTANT  2
#define plfapiinfra_vidstor_Speedclass4  ((int)4)
#define plfapiinfra_vidstor_Speedclass4_CONSTANT  4
#define plfapiinfra_vidstor_Speedclass6  ((int)6)
#define plfapiinfra_vidstor_Speedclass6_CONSTANT  6
#define plfapiinfra_vidstor_SpeedclassAbove10  ((int)11)
#define plfapiinfra_vidstor_SpeedclassAbove10_CONSTANT  11
#define plfapiinfra_vidstor_SpeedclassUnknown  ((int)1)
#define plfapiinfra_vidstor_SpeedclassUnknown_CONSTANT  1
#define plfapiinfra_vidstor_StateFormatting  ((int)5)
#define plfapiinfra_vidstor_StateFormatting_CONSTANT  5
#define plfapiinfra_vidstor_StateMounted  ((int)3)
#define plfapiinfra_vidstor_StateMounted_CONSTANT  3
#define plfapiinfra_vidstor_StateMounting  ((int)2)
#define plfapiinfra_vidstor_StateMounting_CONSTANT  2
#define plfapiinfra_vidstor_StateNotMounted  ((int)4)
#define plfapiinfra_vidstor_StateNotMounted_CONSTANT  4
#define plfapiinfra_vidstor_StateNotPresent  ((int)1)
#define plfapiinfra_vidstor_StateNotPresent_CONSTANT  1
extern FResult plfapiinfra_vidstor2_Format( int winid, int * retval );
extern FResult plfapiinfra_vidstor2_GetFreeSize( int winid, Nat64 * retval, int * error );
extern FResult plfapiinfra_vidstor2_GetMountPoint( int winid, char * retval );
extern FResult plfapiinfra_vidstor2_GetSize( int winid, Nat64 * retval, int * error );
extern FResult plfapiinfra_vidstor2_GetSpeedClass( int winid, int * retval );
extern FResult plfapiinfra_vidstor2_GetState( int winid, int * retval );
extern FResult plfapiinfra_vidstor2_GetWriteProtected( int winid, Bool * retval );
extern FResult plfapiinfra_vidstor2_IsInitialisationDone( int winid, Bool * retval );
#define plfapiinfra_vidstor2_ErrorBadCard  ((int)-3)
#define plfapiinfra_vidstor2_ErrorBadCard_CONSTANT  -3
#define plfapiinfra_vidstor2_ErrorBadState  ((int)-5)
#define plfapiinfra_vidstor2_ErrorBadState_CONSTANT  -5
#define plfapiinfra_vidstor2_ErrorNoCard  ((int)-1)
#define plfapiinfra_vidstor2_ErrorNoCard_CONSTANT  -1
#define plfapiinfra_vidstor2_ErrorNotMounted  ((int)-2)
#define plfapiinfra_vidstor2_ErrorNotMounted_CONSTANT  -2
#define plfapiinfra_vidstor2_ErrorWriteProtected  ((int)-4)
#define plfapiinfra_vidstor2_ErrorWriteProtected_CONSTANT  -4
#define plfapiinfra_vidstor2_MaxMountPointSize  ((int)64)
#define plfapiinfra_vidstor2_MaxMountPointSize_CONSTANT  64
#define plfapiinfra_vidstor2_Ok  ((int)0)
#define plfapiinfra_vidstor2_Ok_CONSTANT  0
#define plfapiinfra_vidstor2_Speedclass10  ((int)10)
#define plfapiinfra_vidstor2_Speedclass10_CONSTANT  10
#define plfapiinfra_vidstor2_Speedclass2  ((int)2)
#define plfapiinfra_vidstor2_Speedclass2_CONSTANT  2
#define plfapiinfra_vidstor2_Speedclass4  ((int)4)
#define plfapiinfra_vidstor2_Speedclass4_CONSTANT  4
#define plfapiinfra_vidstor2_Speedclass6  ((int)6)
#define plfapiinfra_vidstor2_Speedclass6_CONSTANT  6
#define plfapiinfra_vidstor2_SpeedclassAbove10  ((int)11)
#define plfapiinfra_vidstor2_SpeedclassAbove10_CONSTANT  11
#define plfapiinfra_vidstor2_SpeedclassUnknown  ((int)1)
#define plfapiinfra_vidstor2_SpeedclassUnknown_CONSTANT  1
#define plfapiinfra_vidstor2_StateFormatting  ((int)5)
#define plfapiinfra_vidstor2_StateFormatting_CONSTANT  5
#define plfapiinfra_vidstor2_StateMounted  ((int)3)
#define plfapiinfra_vidstor2_StateMounted_CONSTANT  3
#define plfapiinfra_vidstor2_StateMounting  ((int)2)
#define plfapiinfra_vidstor2_StateMounting_CONSTANT  2
#define plfapiinfra_vidstor2_StateNotMounted  ((int)4)
#define plfapiinfra_vidstor2_StateNotMounted_CONSTANT  4
#define plfapiinfra_vidstor2_StateNotPresent  ((int)1)
#define plfapiinfra_vidstor2_StateNotPresent_CONSTANT  1

/* Functions called by supplier (notifications raised to clients), implemented by clients. */
extern void plfapiinfra_cecrxntf_OnReceived( int size, Nat8 * pMsg );
extern void plfapiinfra_cectxntf_OnTransmitCompleted( FResult result );
#define plfapiinfra_cectxntf_IsCecBusBlocked  ((FResult)1)
#define plfapiinfra_cectxntf_IsCecBusBlocked_CONSTANT  1
#define plfapiinfra_cectxntf_IsCecDeviceBusy  ((FResult)2)
#define plfapiinfra_cectxntf_IsCecDeviceBusy_CONSTANT  2
#define plfapiinfra_cectxntf_IsCecDeviceNotPresent  ((FResult)4)
#define plfapiinfra_cectxntf_IsCecDeviceNotPresent_CONSTANT  4
#define plfapiinfra_cectxntf_IsCecMessageRejected  ((FResult)3)
#define plfapiinfra_cectxntf_IsCecMessageRejected_CONSTANT  3
#define plfapiinfra_cectxntf_Ok  ((FResult)0)
#define plfapiinfra_cectxntf_Ok_CONSTANT  0
extern void plfapiinfra_clkntf_OnAlarm( void );
extern void plfapiinfra_clkntf_OnClockChanged( DateTime old, DateTime new );
extern void plfapiinfra_clkntfx_OnAlarm( void );
extern void plfapiinfra_clkntfx_OnAlarmCancelled( void );
extern void plfapiinfra_clkntfx_OnClockChanged( DateTime old, DateTime new );
extern void plfapiinfra_fopsN_OnPartitionMounted( char * mountpoint );
extern void plfapiinfra_fopsN_OnPartitionMountFailed( char * mountpoint );
extern void plfapiinfra_fopsN_OnPartitionUnmounted( char * mountpoint );
extern void plfapiinfra_infraitfN_OnAvailabilityChanged( int nbrgroups, Nat32 * ids );
extern void plfapiinfra_net2exexN_OnDnsStatusChecked( Bool available );
extern void plfapiinfra_net2exexN_OnInitializationDone( void );
extern void plfapiinfra_net2exexN_OnNetworkInterfaceConfigStatusChanged( void );
extern void plfapiinfra_net2exexN_OnNetworkInterfacePhysicalStatusChanged( int intfhandle );
extern void plfapiinfra_net2exexN_OnWifiManualSsidFound( Bool retval );
extern void plfapiinfra_net2exexN_OnWifiScanWifiDevicesCompleted( void );
extern void plfapiinfra_net2exexN_OnWifiSignalFound( void );
extern void plfapiinfra_net2exexN_OnWifiSignalLost( void );
extern void plfapiinfra_net2exexN_OnWpsConnectionFinished( Bool success );
extern void plfapiinfra_net2exN_OnDnsStatusChecked( Bool available );
extern void plfapiinfra_net2exN_OnInitializationDone( void );
extern void plfapiinfra_net2exN_OnNetworkInterfaceConfigStatusChanged( void );
extern void plfapiinfra_net2exN_OnNetworkInterfacePhysicalStatusChanged( int intfhandle );
extern void plfapiinfra_net2exN_OnWifiManualSsidFound( Bool retval );
extern void plfapiinfra_net2exN_OnWifiScanWifiDevicesCompleted( void );
extern void plfapiinfra_net2exN_OnWifiSignalFound( void );
extern void plfapiinfra_net2exN_OnWifiSignalLost( void );
extern void plfapiinfra_net2N_OnDnsStatusChecked( Bool available );
extern void plfapiinfra_net2N_OnInitializationDone( void );
extern void plfapiinfra_net2N_OnNetworkInterfaceConfigStatusChanged( void );
extern void plfapiinfra_net2N_OnNetworkInterfacePhysicalStatusChanged( int intfhandle );
extern void plfapiinfra_net2N_OnWifiManualSsidFound( Bool retval );
extern void plfapiinfra_net2N_OnWifiSignalFound( void );
extern void plfapiinfra_net2N_OnWifiSignalLost( void );
extern void plfapiinfra_netexexN_OnDnsStatusChecked( Bool available );
extern void plfapiinfra_netexexN_OnIpConfigurationConflict( void );
extern void plfapiinfra_netexexN_OnNetworkInterfaceConfigStatusChanged( void );
extern void plfapiinfra_netexexN_OnNetworkInterfacePhysicalStatusChanged( int intfhandle );
extern void plfapiinfra_netexexN_OnSelectedWifiDeviceDisappeared( void );
extern void plfapiinfra_netexexN_OnWifiSelectionCompleted( FResult result );
#define plfapiinfra_netexexN_Ok  ((FResult)0)
#define plfapiinfra_netexexN_Ok_CONSTANT  0
#define plfapiinfra_netexexN_TimeOut  ((FResult)1)
#define plfapiinfra_netexexN_TimeOut_CONSTANT  1
extern void plfapiinfra_netexN_OnDnsStatusChecked( Bool available );
extern void plfapiinfra_netexN_OnIpConfigurationConflict( void );
extern void plfapiinfra_netexN_OnNetworkInterfaceConfigStatusChanged( void );
extern void plfapiinfra_netexN_OnNetworkInterfacePhysicalStatusChanged( int intfhandle );
extern void plfapiinfra_netN_OnIpConfigurationConflict( void );
extern void plfapiinfra_netN_OnNetworkInterfaceConfigStatusChanged( void );
extern void plfapiinfra_netN_OnNetworkInterfacePhysicalStatusChanged( int intfhandle );
extern void plfapiinfra_p2pac_WriteASync( int appid, int bus, void * buf, int size );
extern void plfapiinfra_p2pac_WriteASyncNoRetry( int appid, int bus, void * buf, int size );
extern void plfapiinfra_p2pac_WriteNoSync( int appid, int bus, void * buf, int size );
extern void plfapiinfra_p2pac_WriteNoSyncNoRetry( int appid, int bus, void * buf, int size );
extern void plfapiinfra_p2pacx_WriteASync( int appid, int bus, void * buf, int size );
extern void plfapiinfra_p2pacx_WriteASyncNoRetry( int appid, int bus, void * buf, int size );
extern void plfapiinfra_p2pacx_WriteCharASync( int appid, int bus, char * buf, int size );
extern void plfapiinfra_p2pacx_WriteCharASyncNoRetry( int appid, int bus, char * buf, int size );
extern void plfapiinfra_p2pacx_WriteCharNoSync( int appid, int bus, char * buf, int size );
extern void plfapiinfra_p2pacx_WriteCharNoSyncNoRetry( int appid, int bus, char * buf, int size );
extern void plfapiinfra_p2pacx_WriteNoSync( int appid, int bus, void * buf, int size );
extern void plfapiinfra_p2pacx_WriteNoSyncNoRetry( int appid, int bus, void * buf, int size );
extern void plfapiinfra_p2pahN_OnExecutionCompleted( int appid );
extern void plfapiinfra_p2pahN_OnTransmissionCompleted( int appid, Bool success );
extern void plfapiinfra_upgtoolN_OnProgrammingMessage( char * message );
extern void plfapiinfra_upgtoolN_OnUpgradeLoaded( void );
extern void plfapiinfra_upgtoolN_OnUpgradeProgrammed( void );
extern void plfapiinfra_upgtoolN_OnUpgradeValidated( void );
extern void plfapiinfra_usbdevexN_OnDeviceError( int errortype, int devid, int physdevid );
extern void plfapiinfra_usbdevexN_OnDeviceInfoChanged( int devid, int physdevid );
extern void plfapiinfra_usbdevexN_OnDeviceRemoved( int devid, int physdevid );
extern void plfapiinfra_usbdevexN_OnDriveMounted( int devid, char * drivename, int physdevid );
extern void plfapiinfra_usbdevexN_OnDriveUnmounted( int devid, char * drivename, int physdevid );
extern void plfapiinfra_usbdevexN_OnInitializationDone( void );
extern void plfapiinfra_usbdevexN_OnNewDevice( int devid, int physdevid );
extern void plfapiinfra_usbdevexN_OnPhysicalDeviceConnected( int physdevid );
extern void plfapiinfra_usbdevexN_OnPhysicalDeviceDisconnected( int physdevid );
#define plfapiinfra_usbdevexN_DeviceDriveUnmountError  ((int)2)
#define plfapiinfra_usbdevexN_DeviceDriveUnmountError_CONSTANT  2
#define plfapiinfra_usbdevexN_DeviceTableFullError  ((int)1)
#define plfapiinfra_usbdevexN_DeviceTableFullError_CONSTANT  1
#define plfapiinfra_usbdevexN_DeviceUnknownAttachedError  ((int)3)
#define plfapiinfra_usbdevexN_DeviceUnknownAttachedError_CONSTANT  3
#define plfapiinfra_usbdevexN_DeviceUnknownDetachedError  ((int)4)
#define plfapiinfra_usbdevexN_DeviceUnknownDetachedError_CONSTANT  4
extern void plfapiinfra_usbdevN_OnDeviceError( int errortype, int devid, int physdevid );
extern void plfapiinfra_usbdevN_OnDeviceInfoChanged( int devid, int physdevid );
extern void plfapiinfra_usbdevN_OnDeviceRemoved( int devid, int physdevid );
extern void plfapiinfra_usbdevN_OnDriveMounted( int devid, char * drivename, int physdevid );
extern void plfapiinfra_usbdevN_OnDriveUnmounted( int devid, char * drivename, int physdevid );
extern void plfapiinfra_usbdevN_OnNewDevice( int devid, int physdevid );
extern void plfapiinfra_usbdevN_OnPhysicalDeviceConnected( int physdevid );
extern void plfapiinfra_usbdevN_OnPhysicalDeviceDisconnected( int physdevid );
#define plfapiinfra_usbdevN_DeviceDriveUnmountError  ((int)2)
#define plfapiinfra_usbdevN_DeviceDriveUnmountError_CONSTANT  2
#define plfapiinfra_usbdevN_DeviceTableFullError  ((int)1)
#define plfapiinfra_usbdevN_DeviceTableFullError_CONSTANT  1
#define plfapiinfra_usbdevN_DeviceUnknownAttachedError  ((int)3)
#define plfapiinfra_usbdevN_DeviceUnknownAttachedError_CONSTANT  3
#define plfapiinfra_usbdevN_DeviceUnknownDetachedError  ((int)4)
#define plfapiinfra_usbdevN_DeviceUnknownDetachedError_CONSTANT  4
extern void plfapiinfra_vidstorN_OnInitialisationDone( void );
extern void plfapiinfra_vidstorN_OnSDCardFormatProgress( int progress );
extern void plfapiinfra_vidstorN_OnSDCardFormatted( Bool success );
extern void plfapiinfra_vidstorN_OnSDCardInserted( void );
extern void plfapiinfra_vidstorN_OnSDCardMounted( char * mountpoint );
extern void plfapiinfra_vidstorN_OnSDCardMountFailed( char * mountpoint );
extern void plfapiinfra_vidstorN_OnSDCardRemoved( void );
extern void plfapiinfra_vidstorN_OnSDCardUnmounted( char * mountpoint );
extern void plfapiinfra_vidstorN_OnSDCardUnmountFailed( char * mountpoint );

/* Functions to indicate which notifications should be raised (for use in clients only!) */
extern void plfapiinfra_EnableNotification_cecrxntf( void );
extern void plfapiinfra_DisableNotification_cecrxntf( void );
extern void plfapiinfra_EnableNotification_cectxntf( void );
extern void plfapiinfra_DisableNotification_cectxntf( void );
extern void plfapiinfra_EnableNotification_clkntf( void );
extern void plfapiinfra_DisableNotification_clkntf( void );
extern void plfapiinfra_EnableNotification_clkntfx( void );
extern void plfapiinfra_DisableNotification_clkntfx( void );
extern void plfapiinfra_EnableNotification_fopsN( void );
extern void plfapiinfra_DisableNotification_fopsN( void );
extern void plfapiinfra_EnableNotification_infraitfN( void );
extern void plfapiinfra_DisableNotification_infraitfN( void );
extern void plfapiinfra_EnableNotification_net2exexN( void );
extern void plfapiinfra_DisableNotification_net2exexN( void );
extern void plfapiinfra_EnableNotification_net2exN( void );
extern void plfapiinfra_DisableNotification_net2exN( void );
extern void plfapiinfra_EnableNotification_net2N( void );
extern void plfapiinfra_DisableNotification_net2N( void );
extern void plfapiinfra_EnableNotification_netexexN( void );
extern void plfapiinfra_DisableNotification_netexexN( void );
extern void plfapiinfra_EnableNotification_netexN( void );
extern void plfapiinfra_DisableNotification_netexN( void );
extern void plfapiinfra_EnableNotification_netN( void );
extern void plfapiinfra_DisableNotification_netN( void );
extern void plfapiinfra_EnableNotification_p2pac( void );
extern void plfapiinfra_DisableNotification_p2pac( void );
extern void plfapiinfra_EnableNotification_p2pacx( void );
extern void plfapiinfra_DisableNotification_p2pacx( void );
extern void plfapiinfra_EnableNotification_p2pahN( void );
extern void plfapiinfra_DisableNotification_p2pahN( void );
extern void plfapiinfra_EnableNotification_upgtoolN( void );
extern void plfapiinfra_DisableNotification_upgtoolN( void );
extern void plfapiinfra_EnableNotification_usbdevexN( void );
extern void plfapiinfra_DisableNotification_usbdevexN( void );
extern void plfapiinfra_EnableNotification_usbdevN( void );
extern void plfapiinfra_DisableNotification_usbdevN( void );
extern void plfapiinfra_EnableNotification_vidstorN( void );
extern void plfapiinfra_DisableNotification_vidstorN( void );
extern void plfapiinfra_EnableNotification( int notificationId );
extern void plfapiinfra_DisableNotification( int notificationId );

#if !defined(_COMACALLSTUB_)
#define _COMACALLSTUB_
/* The datatype used for stubs in the plfapiinfra_call_stubs */
typedef void (*ComaCallStub)( void *ctx, void *arg, unsigned int callcookie );


typedef enum {
  // Client
  ipchtCall                   = 0x01,
  ipchtCallDone               = 0x02,
  ipchtNotificationReceived   = 0x03,
  ipchtNotificationHandled    = 0x04,
  ipchtNotificationDiscarded  = 0x05,

  // Supplier
  ipchtCallDecoupled        = 0x10,		// only used when decoupled in the supplier, only for global hook
  ipchtCallReceived         = 0x20,
  ipchtCallHandled          = 0x30,
  ipchtNotificationCalled   = 0x40,
  ipchtNotificationPosted   = 0x50,
  ipchtNotificationDone     = 0x60,
} IpcHookType;  

typedef void ( *IpcHookFunction)( IpcHookType h, int methodID, void *data);
#endif

extern void plfapiinfra_RegisterHookGlobal( IpcHookFunction callback );

/* For client: ipchtCall, ipchtCallDone */
/* For supply: ipchtCallReceived, ipchtCallHandled */
extern void plfapiinfra_RegisterHook_audonly( IpcHookFunction callback );
extern void plfapiinfra_RegisterHook_audonly2( IpcHookFunction callback );
extern void plfapiinfra_RegisterHook_auth( IpcHookFunction callback );
extern void plfapiinfra_RegisterHook_bffs( IpcHookFunction callback );
extern void plfapiinfra_RegisterHook_bootloader( IpcHookFunction callback );
extern void plfapiinfra_RegisterHook_cecack( IpcHookFunction callback );
extern void plfapiinfra_RegisterHook_cecctrl( IpcHookFunction callback );
extern void plfapiinfra_RegisterHook_cectx( IpcHookFunction callback );
extern void plfapiinfra_RegisterHook_clk( IpcHookFunction callback );
extern void plfapiinfra_RegisterHook_crypt( IpcHookFunction callback );
extern void plfapiinfra_RegisterHook_dbbrwse( IpcHookFunction callback );
extern void plfapiinfra_RegisterHook_dbtf( IpcHookFunction callback );
extern void plfapiinfra_RegisterHook_dbtfci( IpcHookFunction callback );
extern void plfapiinfra_RegisterHook_dmpctr( IpcHookFunction callback );
extern void plfapiinfra_RegisterHook_errid( IpcHookFunction callback );
extern void plfapiinfra_RegisterHook_evlogctr( IpcHookFunction callback );
extern void plfapiinfra_RegisterHook_fops( IpcHookFunction callback );
extern void plfapiinfra_RegisterHook_gio( IpcHookFunction callback );
extern void plfapiinfra_RegisterHook_i2cc( IpcHookFunction callback );
extern void plfapiinfra_RegisterHook_i2cm( IpcHookFunction callback );
extern void plfapiinfra_RegisterHook_infraitf( IpcHookFunction callback );
extern void plfapiinfra_RegisterHook_infraitfid( IpcHookFunction callback );
extern void plfapiinfra_RegisterHook_isha( IpcHookFunction callback );
extern void plfapiinfra_RegisterHook_keyi( IpcHookFunction callback );
extern void plfapiinfra_RegisterHook_led( IpcHookFunction callback );
extern void plfapiinfra_RegisterHook_ncd( IpcHookFunction callback );
extern void plfapiinfra_RegisterHook_net( IpcHookFunction callback );
extern void plfapiinfra_RegisterHook_net2( IpcHookFunction callback );
extern void plfapiinfra_RegisterHook_p2pacN( IpcHookFunction callback );
extern void plfapiinfra_RegisterHook_p2pah( IpcHookFunction callback );
extern void plfapiinfra_RegisterHook_p2papid( IpcHookFunction callback );
extern void plfapiinfra_RegisterHook_resmgr( IpcHookFunction callback );
extern void plfapiinfra_RegisterHook_secsto( IpcHookFunction callback );
extern void plfapiinfra_RegisterHook_shmem( IpcHookFunction callback );
extern void plfapiinfra_RegisterHook_uartctl( IpcHookFunction callback );
extern void plfapiinfra_RegisterHook_uartprint( IpcHookFunction callback );
extern void plfapiinfra_RegisterHook_uid( IpcHookFunction callback );
extern void plfapiinfra_RegisterHook_upginf( IpcHookFunction callback );
extern void plfapiinfra_RegisterHook_upginf2( IpcHookFunction callback );
extern void plfapiinfra_RegisterHook_upginf3( IpcHookFunction callback );
extern void plfapiinfra_RegisterHook_upgtool( IpcHookFunction callback );
extern void plfapiinfra_RegisterHook_upgtool2( IpcHookFunction callback );
extern void plfapiinfra_RegisterHook_usbdev( IpcHookFunction callback );
extern void plfapiinfra_RegisterHook_usbdev2( IpcHookFunction callback );
extern void plfapiinfra_RegisterHook_vidstor( IpcHookFunction callback );
extern void plfapiinfra_RegisterHook_vidstor2( IpcHookFunction callback );

/* For client: ipchtNotificationReceived, ipchtNotificationHandled */
/* For supply: ipchtNotificationCalled, ipchtNotificationPosted, ipchtNotificationDone */
extern void plfapiinfra_RegisterHook_cecrxntf( IpcHookFunction callback );
extern void plfapiinfra_RegisterHook_cectxntf( IpcHookFunction callback );
extern void plfapiinfra_RegisterHook_clkntf( IpcHookFunction callback );
extern void plfapiinfra_RegisterHook_clkntfx( IpcHookFunction callback );
extern void plfapiinfra_RegisterHook_fopsN( IpcHookFunction callback );
extern void plfapiinfra_RegisterHook_infraitfN( IpcHookFunction callback );
extern void plfapiinfra_RegisterHook_net2exexN( IpcHookFunction callback );
extern void plfapiinfra_RegisterHook_net2exN( IpcHookFunction callback );
extern void plfapiinfra_RegisterHook_net2N( IpcHookFunction callback );
extern void plfapiinfra_RegisterHook_netexexN( IpcHookFunction callback );
extern void plfapiinfra_RegisterHook_netexN( IpcHookFunction callback );
extern void plfapiinfra_RegisterHook_netN( IpcHookFunction callback );
extern void plfapiinfra_RegisterHook_p2pac( IpcHookFunction callback );
extern void plfapiinfra_RegisterHook_p2pacx( IpcHookFunction callback );
extern void plfapiinfra_RegisterHook_p2pahN( IpcHookFunction callback );
extern void plfapiinfra_RegisterHook_upgtoolN( IpcHookFunction callback );
extern void plfapiinfra_RegisterHook_usbdevexN( IpcHookFunction callback );
extern void plfapiinfra_RegisterHook_usbdevN( IpcHookFunction callback );
extern void plfapiinfra_RegisterHook_vidstorN( IpcHookFunction callback );

#endif /* _PLFAPIINFRA_H_ */

