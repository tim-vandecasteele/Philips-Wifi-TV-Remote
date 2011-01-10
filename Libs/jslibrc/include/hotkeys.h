/*
 *  Copyright(C) 2007 Koninklijke Philips Electronics N.V.,
 *  All Rights Reserved.
 *  This  source code and any compilation or derivative thereof is the
 *  proprietary information of Koninklijke Philips Electronics N.V.
 *  and is confidential in nature.
 *  Under no circumstances is this software to be exposed to or placed
 *  under an Open Source License of any type without the expressed
 *  written permission of Koninklijke Philips Electronics N.V.
 *
 *    %name: hotkeys.h %
 *    %version: brg46mgr#19_RR %
 *    %date_modified: Fri Aug 14 12:31:55 2009 %
 *    %derived_by: vandecat %
 */
 
#ifndef HOTKEYS_H
#define HOTKEYS_H

#include "directfb.h"

//Keys to be detected by plfApp, and injected in DirectFB, grabbed by AM

#define HK_ENTER_SDM            DIKS_CUSTOM1
#define HK_ENTER_SAM            DIKS_CUSTOM2
#define HK_ENTER_HOTEL          DIKS_CUSTOM3
#define HK_ENTER_CSM            DIKS_CUSTOM4
#define HK_ENTER_DEALER_OPT     DIKS_CUSTOM5
#define HK_EXIT_SERVICE         DIKS_CUSTOM6
#define HK_CLEAR_ERRORS         DIKS_CUSTOM7
#define HK_DIAG_X               DIKS_CUSTOM8
#define HK_SET_DISPLAY_OPT      DIKS_CUSTOM9
#define HK_FACTORY              DIKS_CUSTOM10
#define HK_ENTER_DEALER         DIKS_CUSTOM11
#define HK_XRAY                 DIKS_CUSTOM12
  
//Power state related keys

#define HK_WAKEUP               DIKS_CUSTOM13
#define HK_REQUEST_PS           DIKS_CUSTOM14
#define HK_PREPARE_PS           DIKS_CUSTOM15
#define HK_PREPARE_PS_DONE      DIKS_CUSTOM16
#define HK_UNBLANK              DIKS_CUSTOM72

//Application activation keys

#define HK_TELETEXT             DIKS_CUSTOM17
#define HK_CB                   DIKS_CUSTOM18
#define HK_HTML                 DIKS_CUSTOM19
#define HK_MEDIA                DIKS_CUSTOM20
#define HK_MHP                  DIKS_CUSTOM21
#define HK_TV_MENU              DIKS_CUSTOM22
#define HK_TV_FULL              DIKS_CUSTOM23
#define HK_HOMESCREEN           DIKS_CUSTOM36
#define HK_DEMO                 DIKS_CUSTOM37
#define HK_DFU                  DIKS_CUSTOM49
#define HK_UPGRADE              DIKS_CUSTOM51
#define HK_DVBS                 DIKS_CUSTOM52
#define HK_MULTIAPP             DIKS_CUSTOM53
#define HK_VIDEOSTORE           DIKS_CUSTOM66
#define HK_OSKB                 DIKS_CUSTOM67
#define HK_WIDGETS              DIKS_CUSTOM88
#define HK_REMOTEAPP            DIKS_CUSTOM91
//Breakin keys

#define HK_BREAKIN_ENABLE       DIKS_CUSTOM30
#define HK_BREAKIN_REQUEST      DIKS_CUSTOM24

//Installation keys

#define HK_INSTALL_REQ          DIKS_CUSTOM25
#define HK_INSTALL_CONFIRM      DIKS_CUSTOM26

//Layout/focus related keys

#define HK_MULTISCREEN          DIKS_CUSTOM27
#define HK_CHANGE_FOCUS         DIKS_CUSTOM28
#define HK_REQUEST_STATE        DIKS_CUSTOM42
#define HK_CONFIRM_STATE        DIKS_CUSTOM43
#define HK_DUAL                 DIKS_CUSTOM46
#define HK_OVERLAY              DIKS_CUSTOM59
#define HK_RESTORE              DIKS_CUSTOM73
#define HK_REQUEST_CONTEXT      DIKS_CUSTOM83
#define HK_REQUEST_CONTEXT_CONFIRMED DIKS_CUSTOM84
#define HK_SUPPRESS_ALL_OSD     DIKS_CUSTOM85

//Miscellaneous keys
#define HK_SERVICE_MODE         DIKS_CUSTOM29
#define HK_ALARM                DIKS_TIME
#define HK_CHANNEL              DIKS_CHANNEL

#define DFB_LKB_TACT            DIKS_CUSTOM32
#define DFB_AMBILIGHT           DIKS_CUSTOM33
#define DFB_ANADIG              DIKS_CUSTOM34
#define HK_NON_INTERRUPTIBLE    DIKS_CUSTOM35
#define HK_INTERNETRESET        DIKS_CUSTOM38
#define HK_REQUEST_EPG          DIKS_CUSTOM39
#define HK_EPG                  DIKS_CUSTOM82
#define HK_RESET_EPG_REMINDERS  DIKS_CUSTOM40
#define HK_SETUP                DIKS_CUSTOM41
#define HK_GRAB_LKB             DIKS_CUSTOM44
#define HK_RC_FORWARD           DIKS_CUSTOM45
#define HK_REQUEST_PLFAPI       DIKS_CUSTOM47
#define HK_DISABLE_POWERDOWN    DIKS_CUSTOM48
#define HK_GRAB_YELLOW          DIKS_CUSTOM50
#define HK_REQUEST_USB_SCAN     DIKS_CUSTOM57
#define HK_EXPERIENCE           DIKS_CUSTOM58
#define HK_REQUEST_TIMED_PS     DIKS_CUSTOM60
#define HK_CANCEL_TIMED_PS      DIKS_CUSTOM61
#define HK_FACTORY_RESET        DIKS_CUSTOM62
#define HK_FACTORY_CLEAR_UI     DIKS_CUSTOM63
#define HK_FEATURES             DIKS_CUSTOM65
#define HK_RB_REQUEST           DIKS_CUSTOM54
#define HK_GRAB_RED             DIKS_CUSTOM68
#define HK_SERIALEXPRESS        DIKS_CUSTOM69
#define HK_REDUCED_MODE         DIKS_CUSTOM70
#define HK_ALARM_SET            DIKS_CUSTOM74
#define HK_BROADCAST_PIP        DIKS_CUSTOM75
#define HK_BB_REQUEST           DIKS_CUSTOM76
#define HK_REQUEST_PLFAPI_DENIED DIKS_CUSTOM77
#define HK_MUTESCREEN           DIKS_CUSTOM78
#define HK_REQUEST_ACTIVATION   DIKS_CUSTOM79
#define HK_GRAB_COLORKEYS       DIKS_CUSTOM80
#define HK_GRAB_OSKB_KEYS       DIKS_CUSTOM81
#define HK_REQUEST_LOADING_ANIMATION DIKS_CUSTOM86
#define HK_SYSTEM_EVENT         DIKS_CUSTOM87 /* to be used e.g. for a CI-PLUS CAM priority breakin */
#define HK_TOGGLE_AMBILOUNGE    DIKS_CUSTOM89
#define HK_NFR_TEST             DIKS_CUSTOM90

// upgrade keys
#define HK_PREPARE_UPGRADE      DIKS_CUSTOM55
#define HK_PREPARE_UPGRADE_DONE DIKS_CUSTOM56

// raw key
#define DFB_RAW_KEY             DIKS_CUSTOM31

//Installation hot key
#define HK_CHANNEL_INSTALLATION DIKS_CUSTOM64
#define HK_SATELLITE_INSTALLATION DIKS_CUSTOM71

#define NOTRCSOURCEMASK         0x20 //0010 0000
#define NOTRCSOURCE( source )   ((source & NOTRCSOURCEMASK) == NOTRCSOURCEMASK)

#define ISHOTKEY( key )         ( ( key == HK_ENTER_SDM             ) \
                                ||( key == HK_ENTER_SAM             ) \
                                ||( key == HK_ENTER_HOTEL           ) \
                                ||( key == HK_ENTER_CSM             ) \
                                ||( key == HK_ENTER_DEALER_OPT      ) \
                                ||( key == HK_EXIT_SERVICE          ) \
                                ||( key == HK_CLEAR_ERRORS          ) \
                                ||( key == HK_DIAG_X                ) \
                                ||( key == HK_SET_DISPLAY_OPT       ) \
                                ||( key == HK_FACTORY               ) \
                                ||( key == HK_ENTER_DEALER          ) \
                                ||( key == HK_XRAY                  ) \
                                ||( key == HK_WAKEUP                ) \
                                ||( key == HK_REQUEST_PS            ) \
                                ||( key == HK_PREPARE_PS            ) \
                                ||( key == HK_PREPARE_PS_DONE       ) \
                                ||( key == HK_TELETEXT              ) \
                                ||( key == HK_CB                    ) \
                                ||( key == HK_HTML                  ) \
                                ||( key == HK_MEDIA                 ) \
                                ||( key == HK_MHP                   ) \
                                ||( key == HK_TV_MENU               ) \
                                ||( key == HK_TV_FULL               ) \
                                ||( key == HK_HOMESCREEN            ) \
                                ||( key == HK_DEMO                  ) \
                                ||( key == HK_BREAKIN_ENABLE        ) \
                                ||( key == HK_BREAKIN_REQUEST       ) \
                                ||( key == HK_INSTALL_REQ           ) \
                                ||( key == HK_INSTALL_CONFIRM       ) \
                                ||( key == HK_MULTISCREEN           ) \
                                ||( key == HK_CHANGE_FOCUS          ) \
                                ||( key == HK_SERVICE_MODE          ) \
                                ||( key == HK_ALARM                 ) \
                                ||( key == HK_CHANNEL               ) \
                                ||( key == HK_NON_INTERRUPTIBLE     ) \
                                ||( key == HK_INTERNETRESET         ) \
                                ||( key == HK_REQUEST_EPG           ) \
                                ||( key == HK_RESET_EPG_REMINDERS   ) \
                                ||( key == HK_SETUP                 ) \
                                ||( key == HK_REQUEST_STATE         ) \
                                ||( key == HK_CONFIRM_STATE         ) \
                                ||( key == HK_GRAB_LKB              ) \
                                ||( key == HK_RC_FORWARD            ) \
                                ||( key == HK_DUAL                  ) \
                                ||( key == HK_REQUEST_PLFAPI        ) \
                                ||( key == HK_DISABLE_POWERDOWN     ) \
                                ||( key == HK_DFU                   ) \
                                ||( key == HK_GRAB_YELLOW           ) \
                                ||( key == HK_UPGRADE               ) \
                                ||( key == HK_REQUEST_USB_SCAN      ) \
                                ||( key == HK_EXPERIENCE            ) \
                                ||( key == HK_REQUEST_TIMED_PS      ) \
                                ||( key == HK_CANCEL_TIMED_PS       ) \
                                ||( key == HK_OVERLAY               ) \
                                ||( key == HK_PREPARE_UPGRADE       ) \
                                ||( key == HK_PREPARE_UPGRADE_DONE  ) \
                                ||( key == HK_FACTORY_RESET         ) \
                                ||( key == HK_FACTORY_CLEAR_UI      ) \
                                ||( key == HK_CHANNEL_INSTALLATION  ) \
                                ||( key == HK_FEATURES              ) \
                                ||( key == HK_RB_REQUEST            ) \
                                ||( key == HK_GRAB_RED              ) \
                                ||( key == HK_SERIALEXPRESS         ) \
                                ||( key == HK_REDUCED_MODE          ) \
                                ||( key == HK_DVBS                  ) \
                                ||( key == HK_MULTIAPP              ) \
                                ||( key == HK_VIDEOSTORE            ) \
                                ||( key == HK_OSKB                  ) \
                                ||( key == HK_SATELLITE_INSTALLATION) \
                                ||( key == HK_UNBLANK               ) \
                                ||( key == HK_RESTORE               ) \
                                ||( key == HK_ALARM_SET             ) \
                                ||( key == HK_BROADCAST_PIP         ) \
                                ||( key == HK_BB_REQUEST            ) \
                                ||( key == HK_REQUEST_PLFAPI_DENIED ) \
                                ||( key == HK_MUTESCREEN            ) \
                                ||( key == HK_REQUEST_ACTIVATION    ) \
                                ||( key == HK_GRAB_COLORKEYS        ) \
                                ||( key == HK_GRAB_OSKB_KEYS        ) \
                                ||( key == HK_EPG                   ) \
                                ||( key == HK_REQUEST_CONTEXT       ) \
                                ||( key == HK_REQUEST_CONTEXT_CONFIRMED ) \
                                ||( key == HK_SUPPRESS_ALL_OSD      ) \
                                ||( key == HK_REQUEST_LOADING_ANIMATION ) \
                                ||( key == HK_SYSTEM_EVENT          ) \
                                ||( key == HK_WIDGETS               ) \
                                ||( key == HK_TOGGLE_AMBILOUNGE     ) \
                                ||( key == HK_NFR_TEST              ) \
                                ||( key == HK_REMOTEAPP             ) \
                                )      
                                           
#define PREPARE_PS_NON_DIGIT_KEY  (255)    
                                                 
// Enumerations                                      
                                           
typedef enum{                              
    PS_SemiPowerOff,                       
    PS_Protection,                         
    PS_Standby,                            
    PS_SystemStandby,                      
    PS_SemiStandby,                        
    PS_On,                                 
    PS_RestartTv,                          
    PS_RestartSwDownload                   
} EnumPowerStates;                         
                                           
typedef enum{                           
    WR_ColdBoot,
    WR_FastColdBoot,
    WR_HotBoot,
    WR_RC_Digit,
    WR_RC_Non_Digit,
    WR_LKB_Tact,
    WR_LKB_Other,
    WR_Alarm,
    WR_CEC_Breakin,
    WR_PIN_Interupt,
    WR_Panel_Mode,
    WR_Upgrade_Mode,
    WR_Debug1,
    WR_Debug2
} EnumWakeUpReason;

typedef enum{
    WRD_SDM = 0,
    WRD_AMBILIGHT = 100,
    WRD_VOLUMEMIN = 101,
    WRD_PLAY = 102
} EnumWakeUpReasonDetails;

typedef enum{
    CID_Plf,
    CID_Tv,
    CID_Spett,
    CID_Media,
    CID_Ecd,
    CID_BroadCast,
    CID_Html,
    CID_Demo,
    CID_Home,
    CID_Dfu,
    CID_Upgrade,
    CID_Dvbs2,
    CID_Oskb,
    CID_Js
} EnumConfirmationIds;

typedef enum{
    AppID_Tv,
    AppID_Spett,
    AppID_MediaUSB,
    AppID_MediaDlna,
    AppID_MediaScenea,
    AppID_Html,
    AppID_HtmlWidgets,
    AppID_HtmlVideoStore,
    AppID_Demo,
    AppID_Home,
    AppID_Dfu,
    AppID_Upgrade,
    AppID_Broadcast,
    AppID_MultiApp,
    AppID_Dvbs2
} EnumActiveAppId;

typedef enum{
    BI_ScartBreakIn = 1,
    BI_USBBreakIn = 2,
    BI_CECBreakIn = 4,
    BI_DLNABreakIn = 8,
    BI_SDCardBreakin = 16
} EnumBreakIn;

typedef enum{
    BID_None,
    BID_CB,
    BID_Upgrade,
    BID_Demo,
    BID_BDS,
    BID_Decoder
} EnumBreakInDetails;

typedef enum{
    ACT_Toggle,
    ACT_Start,
    ACT_Stop,
    ACT_StartNoFocus
} EnumActivation;

typedef enum{
    SRC_PIN,
    SRC_RC
} EnumSource;

typedef enum{
    BDS_RC,
    BDS_BDSRC
} EnumBDSSource;

typedef enum{
    SDM_Regular,
    SDM_Digital
} EnumSDM;

typedef enum{
    ENA_Disable,
    ENA_Enable
} EnumEnable;

typedef enum{
    ST_Stop,
    ST_Start
} EnumStart;

typedef enum{
    CON_Cancelled,
    CON_Finished
} EnumConfirm;

typedef enum{
    MS_Dual,
    MS_Pip
} EnumMultiScreen;

typedef enum{
    PN_Previous,
    PN_Next,
    PN_Cancel,
    PN_Done,
    PN_Prepared
} EnumPrevNext;

typedef enum{
    EPG_Process,
    EPG_Deny,
    EPG_Unknown,
    EPG_Accept
} EnumEPGReq;

typedef enum{
    RB_Process,
    RB_Deny,
    RB_Accept
} EnumRBReq;

typedef enum{
    MEDIA_USB,
    MEDIA_Network,
    MEDIA_Scenea,
    MEDIA_DRM
} EnumMediaStart;

typedef enum{
    OVERLAY_Deactivate,
    OVERLAY_Activate_OnTop,
    OVERLAY_Activate_Replace
} EnumOverlay;

typedef enum{
    FOCUS_NoFocus,
    FOCUS_Focus
} EnumFocus;

typedef enum{
    STATE_PlayState, 
    STATE_PauseState, 
    STATE_SuspendState
} EnumAppStates;

typedef enum{
    CONF_Confirmed,
    CONF_Unconfirmed
} EnumConfirmation;

typedef enum{
    PLFAPI_af = 0x1, //audio featuring
    PLFAPI_conn = 0x2, //connectivity
    PLFAPI_fe = 0x4, //frontend
    PLFAPI_gen = 0x8, //general
    PLFAPI_infra = 0x10, //infrastructure
    PLFAPI_src = 0x20, //src selection
    PLFAPI_vf = 0x40, //video featuring
    PLFAPI_xray = 0x80, //xray
    PLFAPI_scale = 0x100, // scale
    PLFAPI_gfx = 0x200, // graphics
    PLFAPI_mute = 0x400 // mute
} EnumPlfApiResources;

typedef enum{
    CK_Red = 0x1,
    CK_Green = 0x2,
    CK_Yellow = 0x4,
    CK_Blue = 0x8,
} EnumColorKeys;

typedef enum{
    MC_Master,
    MC_Client
} EnumMasterClient;

typedef enum{
    FEAT_Breakin = 0x1, //disable/enable breakin
} EnumFeatures;

typedef enum{
    NONINT_BlockAll,
    NONINT_AllowHome
} EnumNonInterruptable;

typedef enum{
    OSKBKEYS_None,
    OSKBKEYS_Basic,
	OSKBKEYS_Full
} EnumOskbKeys;

// Events

#define SystemPowerModeString   "SYSTEM_POWER_MODE"
#define SystemInfoChangedString "SYSTEM_INFO_CHANGED"
#define ZaplistChangedString    "ZAPLIST_CHANGED"
#define EcdDataInfoChangedString "ECDDATA_CHANGED"

#ifdef JSCONFIG
#define ResourceOwnerString     "RESOURCE_OWNER"

#define NBROFRESOURCES  (11)
#define NBROFCLIENTS    (10)
#define INVALID_ID      (-1)
typedef struct{
    int ResourceList[NBROFRESOURCES][NBROFCLIENTS];
}ResourceOwnerType;
#endif

#endif
