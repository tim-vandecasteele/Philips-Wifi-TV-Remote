
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


#if !defined(_PLFAPISRC_H_)
#define _PLFAPISRC_H_

#if !defined(_PLFAPISRC_DD_)
#include "plfapisrc_types.h"
#endif

extern int  plfapisrc_Init( int arg, char * argv[] );
extern void plfapisrc_Exit( void );

/*  Symbols for plfapisrcMethodID */
extern int idamut2Disable;  /* 0 */
extern int idamut2Enable;  /* 1 */
extern int idamut2IsEnabled;  /* 2 */
extern int idbrkDestinationExists;  /* 3 */
extern int idbrkDestinationStatus;  /* 4 */
extern int idbrkExtensionStatus;  /* 5 */
extern int idbrkGetDestinationType;  /* 6 */
extern int idbrkGetSourceType;  /* 7 */
extern int idbrkSetDestinationType;  /* 8 */
extern int idbrkSetSourceType;  /* 9 */
extern int idbrkSourceExists;  /* 10 */
extern int idbrkSourceTypeSupported;  /* 11 */
extern int idconfAssociateSoundInput;  /* 12 */
extern int idconfEnablePcMode;  /* 13 */
extern int idconfGetAssociatedSoundInput;  /* 14 */
extern int idconfGetMonitorOutMode;  /* 15 */
extern int idconfGetTunerMedium;  /* 16 */
extern int idconfIsAssociateSoundInputAllowed;  /* 17 */
extern int idconfSetMonitorOutMode;  /* 18 */
extern int idconfSetTunerMedium;  /* 19 */
extern int idsrcApplySourceSettings;  /* 20 */
extern int idsrcGetCurrentAudioSelection;  /* 21 */
extern int idsrcGetCurrentVideoSelection;  /* 22 */
extern int idsrcGetSourceCapabilities;  /* 23 */
extern int idsrcIsAudioSelectionAllowed;  /* 24 */
extern int idsrcIsVideoSelectionAllowed;  /* 25 */
extern int idsrcSelectAudioSource;  /* 26 */
extern int idsrcSelectVideoSource;  /* 27 */
extern int idsrcitfGetAvailableInterfaces;  /* 28 */
extern int idvmut2Disable;  /* 29 */
extern int idvmut2Enable;  /* 30 */
extern int idvmut2IsEnabled;  /* 31 */
extern int plfapisrcMethodID_Last;  /* 32 */

/*  Symbols for plfapisrcNotificationID */
extern int idbrkNOnDestinationStatusChanged;  /* 0 */
extern int idbrkNOnExtensionStatusChanged;  /* 1 */
extern int idsrc2NOnAudioSourceSelected;  /* 2 */
extern int idsrc2NOnSourceSettingsApplied;  /* 3 */
extern int idsrc2NOnVideoSourceSelected;  /* 4 */
extern int idsrcitfNOnAvailabilityChanged;  /* 5 */
extern int idsrcNOnAudioSourceSelected;  /* 6 */
extern int idsrcNOnSourceSettingsApplied;  /* 7 */
extern int idsrcNOnVideoSourceSelected;  /* 8 */
extern int plfapisrcNotificationID_Last;  /* 9 */

/*  Functions clients can call, implemented by the supplier. */
extern FResult plfapisrc_amut2_Disable( int winid );
extern FResult plfapisrc_amut2_Enable( int winid );
extern FResult plfapisrc_amut2_IsEnabled( int winid, Bool * retval );
extern FResult plfapisrc_brk_DestinationExists( int winid, tmPlfInstPreset_Destination_t destination, Bool * Exists );
extern FResult plfapisrc_brk_DestinationStatus( int winid, tmPlfInstPreset_Destination_t destination, Bool * pStatus );
extern FResult plfapisrc_brk_ExtensionStatus( int winid, tmPlfInstPreset_Source_t source, Bool * Status );
extern FResult plfapisrc_brk_GetDestinationType( int winid, tmPlfInstPreset_Destination_t destination, tmPlfInstPreset_DestinationType_t * DestinationType );
extern FResult plfapisrc_brk_GetSourceType( int winid, tmPlfInstPreset_Source_t source, tmPlfInstPreset_SourceType_t * SourceType );
extern FResult plfapisrc_brk_SetDestinationType( int winid, tmPlfInstPreset_Destination_t destination, tmPlfInstPreset_DestinationType_t destinationType );
extern FResult plfapisrc_brk_SetSourceType( int winid, tmPlfInstPreset_Source_t source, tmPlfInstPreset_SourceType_t sourceType );
extern FResult plfapisrc_brk_SourceExists( int winid, tmPlfInstPreset_Source_t source, Bool * Exists );
extern FResult plfapisrc_brk_SourceTypeSupported( int winid, tmPlfInstPreset_Source_t source, tmPlfInstPreset_SourceType_t sourceType, Bool * Supported );
extern FResult plfapisrc_conf_AssociateSoundInput( int source, int assoc );
extern FResult plfapisrc_conf_EnablePcMode( int source, Bool ena );
extern FResult plfapisrc_conf_GetAssociatedSoundInput( int source, int * assoc );
extern FResult plfapisrc_conf_GetMonitorOutMode( int * mode );
extern FResult plfapisrc_conf_GetTunerMedium( int * medium );
extern FResult plfapisrc_conf_IsAssociateSoundInputAllowed( int source, int assoc, Bool * retval );
extern FResult plfapisrc_conf_SetMonitorOutMode( int mode );
extern FResult plfapisrc_conf_SetTunerMedium( int medium );
#define plfapisrc_conf_MediumCable  ((int)1)
#define plfapisrc_conf_MediumCable_CONSTANT  1
#define plfapisrc_conf_MediumTerrestrial  ((int)2)
#define plfapisrc_conf_MediumTerrestrial_CONSTANT  2
#define plfapisrc_conf_MonitorOutModeProcessed  ((int)1)
#define plfapisrc_conf_MonitorOutModeProcessed_CONSTANT  1
#define plfapisrc_conf_MonitorOutModeUnprocessed  ((int)2)
#define plfapisrc_conf_MonitorOutModeUnprocessed_CONSTANT  2
#define plfapisrc_dsgid_DesignatorAll  ((Nat32)-1)
#define plfapisrc_dsgid_DesignatorAll_CONSTANT  -1
#define plfapisrc_dsgid_DesignatorAnalog  ((Nat32)1)
#define plfapisrc_dsgid_DesignatorAnalog_CONSTANT  1
#define plfapisrc_dsgid_DesignatorDigital  ((Nat32)2)
#define plfapisrc_dsgid_DesignatorDigital_CONSTANT  2
#define plfapisrc_dsgid_DesignatorDivX  ((Nat32)128)
#define plfapisrc_dsgid_DesignatorDivX_CONSTANT  128
#define plfapisrc_dsgid_DesignatorJpg  ((Nat32)16)
#define plfapisrc_dsgid_DesignatorJpg_CONSTANT  16
#define plfapisrc_dsgid_DesignatorMkv  ((Nat32)1024)
#define plfapisrc_dsgid_DesignatorMkv_CONSTANT  1024
#define plfapisrc_dsgid_DesignatorMp3  ((Nat32)32)
#define plfapisrc_dsgid_DesignatorMp3_CONSTANT  32
#define plfapisrc_dsgid_DesignatorMpeg2  ((Nat32)4)
#define plfapisrc_dsgid_DesignatorMpeg2_CONSTANT  4
#define plfapisrc_dsgid_DesignatorMpeg4  ((Nat32)8)
#define plfapisrc_dsgid_DesignatorMpeg4_CONSTANT  8
#define plfapisrc_dsgid_DesignatorMpegTs  ((Nat32)256)
#define plfapisrc_dsgid_DesignatorMpegTs_CONSTANT  256
#define plfapisrc_dsgid_DesignatorNone  ((Nat32)0)
#define plfapisrc_dsgid_DesignatorNone_CONSTANT  0
#define plfapisrc_dsgid_DesignatorRm  ((Nat32)512)
#define plfapisrc_dsgid_DesignatorRm_CONSTANT  512
#define plfapisrc_dsgid_DesignatorWm  ((Nat32)64)
#define plfapisrc_dsgid_DesignatorWm_CONSTANT  64
#define plfapisrc_errid_InterfaceNotAvailable  ((FResult)2)
#define plfapisrc_errid_InterfaceNotAvailable_CONSTANT  2
#define plfapisrc_errid_Ok  ((FResult)0)
#define plfapisrc_errid_Ok_CONSTANT  0
#define plfapisrc_errid_Other  ((FResult)-1)
#define plfapisrc_errid_Other_CONSTANT  -1
#define plfapisrc_errid_ResourceNotOwned  ((FResult)1)
#define plfapisrc_errid_ResourceNotOwned_CONSTANT  1
extern FResult plfapisrc_src_ApplySourceSettings( int winid, Bool * retval );
extern FResult plfapisrc_src_GetCurrentAudioSelection( int audionodeid, int * source, Nat32 * designator );
extern FResult plfapisrc_src_GetCurrentVideoSelection( int winid, int * source, Nat32 * designator );
extern FResult plfapisrc_src_GetSourceCapabilities( int winid, int source, int * sourceSignalType, int * sourceType );
extern FResult plfapisrc_src_IsAudioSelectionAllowed( int audionodeid, int source, Nat32 designator, Bool * retval );
extern FResult plfapisrc_src_IsVideoSelectionAllowed( int winid, int source, Nat32 designator, Bool * retval );
extern FResult plfapisrc_src_SelectAudioSource( int audionodeid, int source, Nat32 designator, Bool * retval );
extern FResult plfapisrc_src_SelectVideoSource( int winid, int source, Nat32 designator, Bool * retval );
#define plfapisrc_src_SourceSignalTypeCvbs  ((int)1)
#define plfapisrc_src_SourceSignalTypeCvbs_CONSTANT  1
#define plfapisrc_src_SourceSignalTypeDvi  ((int)64)
#define plfapisrc_src_SourceSignalTypeDvi_CONSTANT  64
#define plfapisrc_src_SourceSignalTypeHdmi  ((int)16)
#define plfapisrc_src_SourceSignalTypeHdmi_CONSTANT  16
#define plfapisrc_src_SourceSignalTypeNone  ((int)0)
#define plfapisrc_src_SourceSignalTypeNone_CONSTANT  0
#define plfapisrc_src_SourceSignalTypeOther  ((int)32768)
#define plfapisrc_src_SourceSignalTypeOther_CONSTANT  32768
#define plfapisrc_src_SourceSignalTypeRgb  ((int)4)
#define plfapisrc_src_SourceSignalTypeRgb_CONSTANT  4
#define plfapisrc_src_SourceSignalTypeVga  ((int)32)
#define plfapisrc_src_SourceSignalTypeVga_CONSTANT  32
#define plfapisrc_src_SourceSignalTypeYc  ((int)2)
#define plfapisrc_src_SourceSignalTypeYc_CONSTANT  2
#define plfapisrc_src_SourceSignalTypeYPbPr  ((int)8)
#define plfapisrc_src_SourceSignalTypeYPbPr_CONSTANT  8
#define plfapisrc_src_SourceTypeCinch  ((int)2)
#define plfapisrc_src_SourceTypeCinch_CONSTANT  2
#define plfapisrc_src_SourceTypeDvi  ((int)32)
#define plfapisrc_src_SourceTypeDvi_CONSTANT  32
#define plfapisrc_src_SourceTypeHdmi  ((int)4)
#define plfapisrc_src_SourceTypeHdmi_CONSTANT  4
#define plfapisrc_src_SourceTypeNone  ((int)0)
#define plfapisrc_src_SourceTypeNone_CONSTANT  0
#define plfapisrc_src_SourceTypeOther  ((int)32768)
#define plfapisrc_src_SourceTypeOther_CONSTANT  32768
#define plfapisrc_src_SourceTypeScart  ((int)1)
#define plfapisrc_src_SourceTypeScart_CONSTANT  1
#define plfapisrc_src_SourceTypeVga  ((int)16)
#define plfapisrc_src_SourceTypeVga_CONSTANT  16
#define plfapisrc_srcid_SrcAnalogLr1  ((int)102)
#define plfapisrc_srcid_SrcAnalogLr1_CONSTANT  102
#define plfapisrc_srcid_SrcAnalogLr2  ((int)103)
#define plfapisrc_srcid_SrcAnalogLr2_CONSTANT  103
#define plfapisrc_srcid_SrcAv1  ((int)3)
#define plfapisrc_srcid_SrcAv1_CONSTANT  3
#define plfapisrc_srcid_SrcAv10  ((int)12)
#define plfapisrc_srcid_SrcAv10_CONSTANT  12
#define plfapisrc_srcid_SrcAv2  ((int)4)
#define plfapisrc_srcid_SrcAv2_CONSTANT  4
#define plfapisrc_srcid_SrcAv3  ((int)5)
#define plfapisrc_srcid_SrcAv3_CONSTANT  5
#define plfapisrc_srcid_SrcAv4  ((int)6)
#define plfapisrc_srcid_SrcAv4_CONSTANT  6
#define plfapisrc_srcid_SrcAv5  ((int)7)
#define plfapisrc_srcid_SrcAv5_CONSTANT  7
#define plfapisrc_srcid_SrcAv6  ((int)8)
#define plfapisrc_srcid_SrcAv6_CONSTANT  8
#define plfapisrc_srcid_SrcAv7  ((int)9)
#define plfapisrc_srcid_SrcAv7_CONSTANT  9
#define plfapisrc_srcid_SrcAv8  ((int)10)
#define plfapisrc_srcid_SrcAv8_CONSTANT  10
#define plfapisrc_srcid_SrcAv9  ((int)11)
#define plfapisrc_srcid_SrcAv9_CONSTANT  11
#define plfapisrc_srcid_SrcBolton  ((int)19)
#define plfapisrc_srcid_SrcBolton_CONSTANT  19
#define plfapisrc_srcid_SrcFront  ((int)2)
#define plfapisrc_srcid_SrcFront_CONSTANT  2
#define plfapisrc_srcid_SrcFrontHdmi  ((int)21)
#define plfapisrc_srcid_SrcFrontHdmi_CONSTANT  21
#define plfapisrc_srcid_SrcHdmi1  ((int)13)
#define plfapisrc_srcid_SrcHdmi1_CONSTANT  13
#define plfapisrc_srcid_SrcHdmi2  ((int)14)
#define plfapisrc_srcid_SrcHdmi2_CONSTANT  14
#define plfapisrc_srcid_SrcHdmi3  ((int)15)
#define plfapisrc_srcid_SrcHdmi3_CONSTANT  15
#define plfapisrc_srcid_SrcHdmi4  ((int)16)
#define plfapisrc_srcid_SrcHdmi4_CONSTANT  16
#define plfapisrc_srcid_SrcHdmi5  ((int)17)
#define plfapisrc_srcid_SrcHdmi5_CONSTANT  17
#define plfapisrc_srcid_SrcInvalid  ((int)-1)
#define plfapisrc_srcid_SrcInvalid_CONSTANT  -1
#define plfapisrc_srcid_SrcNone  ((int)0)
#define plfapisrc_srcid_SrcNone_CONSTANT  0
#define plfapisrc_srcid_SrcSpdif1  ((int)100)
#define plfapisrc_srcid_SrcSpdif1_CONSTANT  100
#define plfapisrc_srcid_SrcSpdif2  ((int)101)
#define plfapisrc_srcid_SrcSpdif2_CONSTANT  101
#define plfapisrc_srcid_SrcTuner  ((int)1)
#define plfapisrc_srcid_SrcTuner_CONSTANT  1
#define plfapisrc_srcid_SrcUrl  ((int)18)
#define plfapisrc_srcid_SrcUrl_CONSTANT  18
#define plfapisrc_srcid_SrcVga  ((int)20)
#define plfapisrc_srcid_SrcVga_CONSTANT  20
extern FResult plfapisrc_srcitf_GetAvailableInterfaces( int * nbrgroups, Nat32 * ids );
#define plfapisrc_srcitfid_amut2  ((Nat32)1)
#define plfapisrc_srcitfid_amut2_CONSTANT  1
#define plfapisrc_srcitfid_brk  ((Nat32)1)
#define plfapisrc_srcitfid_brk_CONSTANT  1
#define plfapisrc_srcitfid_conf  ((Nat32)1)
#define plfapisrc_srcitfid_conf_CONSTANT  1
#define plfapisrc_srcitfid_dsgid  ((Nat32)1)
#define plfapisrc_srcitfid_dsgid_CONSTANT  1
#define plfapisrc_srcitfid_src  ((Nat32)1)
#define plfapisrc_srcitfid_src_CONSTANT  1
#define plfapisrc_srcitfid_srcid  ((Nat32)1)
#define plfapisrc_srcitfid_srcid_CONSTANT  1
#define plfapisrc_srcitfid_vmut2  ((Nat32)1)
#define plfapisrc_srcitfid_vmut2_CONSTANT  1
extern FResult plfapisrc_vmut2_Disable( int winid );
extern FResult plfapisrc_vmut2_Enable( int winid );
extern FResult plfapisrc_vmut2_IsEnabled( int winid, Bool * retval );

/* Functions called by supplier (notifications raised to clients), implemented by clients. */
extern void plfapisrc_brkN_OnDestinationStatusChanged( tmPlfInstPreset_Destination_t destination, Bool status );
extern void plfapisrc_brkN_OnExtensionStatusChanged( tmPlfInstPreset_Source_t source, Bool status );
extern void plfapisrc_src2N_OnAudioSourceSelected( int audionodeid, int source );
extern void plfapisrc_src2N_OnSourceSettingsApplied( int winid );
extern void plfapisrc_src2N_OnVideoSourceSelected( int winid, int source );
extern void plfapisrc_srcitfN_OnAvailabilityChanged( int nbrgroups, Nat32 * ids );
extern void plfapisrc_srcN_OnAudioSourceSelected( int audionodeid, int source );
extern void plfapisrc_srcN_OnSourceSettingsApplied( void );
extern void plfapisrc_srcN_OnVideoSourceSelected( int winid, int source );

/* Functions to indicate which notifications should be raised (for use in clients only!) */
extern void plfapisrc_EnableNotification_brkN( void );
extern void plfapisrc_DisableNotification_brkN( void );
extern void plfapisrc_EnableNotification_src2N( void );
extern void plfapisrc_DisableNotification_src2N( void );
extern void plfapisrc_EnableNotification_srcitfN( void );
extern void plfapisrc_DisableNotification_srcitfN( void );
extern void plfapisrc_EnableNotification_srcN( void );
extern void plfapisrc_DisableNotification_srcN( void );
extern void plfapisrc_EnableNotification( int notificationId );
extern void plfapisrc_DisableNotification( int notificationId );

#if !defined(_COMACALLSTUB_)
#define _COMACALLSTUB_
/* The datatype used for stubs in the plfapisrc_call_stubs */
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

extern void plfapisrc_RegisterHookGlobal( IpcHookFunction callback );

/* For client: ipchtCall, ipchtCallDone */
/* For supply: ipchtCallReceived, ipchtCallHandled */
extern void plfapisrc_RegisterHook_amut2( IpcHookFunction callback );
extern void plfapisrc_RegisterHook_brk( IpcHookFunction callback );
extern void plfapisrc_RegisterHook_conf( IpcHookFunction callback );
extern void plfapisrc_RegisterHook_dsgid( IpcHookFunction callback );
extern void plfapisrc_RegisterHook_errid( IpcHookFunction callback );
extern void plfapisrc_RegisterHook_src( IpcHookFunction callback );
extern void plfapisrc_RegisterHook_srcid( IpcHookFunction callback );
extern void plfapisrc_RegisterHook_srcitf( IpcHookFunction callback );
extern void plfapisrc_RegisterHook_srcitfid( IpcHookFunction callback );
extern void plfapisrc_RegisterHook_vmut2( IpcHookFunction callback );

/* For client: ipchtNotificationReceived, ipchtNotificationHandled */
/* For supply: ipchtNotificationCalled, ipchtNotificationPosted, ipchtNotificationDone */
extern void plfapisrc_RegisterHook_brkN( IpcHookFunction callback );
extern void plfapisrc_RegisterHook_src2N( IpcHookFunction callback );
extern void plfapisrc_RegisterHook_srcitfN( IpcHookFunction callback );
extern void plfapisrc_RegisterHook_srcN( IpcHookFunction callback );

#endif /* _PLFAPISRC_H_ */

