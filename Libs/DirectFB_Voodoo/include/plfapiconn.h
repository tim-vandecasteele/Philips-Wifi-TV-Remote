
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


#if !defined(_PLFAPICONN_H_)
#define _PLFAPICONN_H_

#if !defined(_PLFAPICONN_DD_)
#include "plfapiconn_types.h"
#endif

extern int  plfapiconn_Init( int arg, char * argv[] );
extern void plfapiconn_Exit( void );

/*  Symbols for plfapiconnMethodID */
extern int idcmdmxAllocateClientStream;  /* 0 */
extern int idcmdmxFree;  /* 1 */
extern int idcmdmxGetAvailableClientStreams;  /* 2 */
extern int idcmdmxGetPlatformStream;  /* 3 */
extern int idcmdmxGetStreamInfo;  /* 4 */
extern int idcmdmxGetStreamMapSize;  /* 5 */
extern int idcmdmxGetSupportedPlatformStreams;  /* 6 */
extern int idcmdmxSetBuffer;  /* 7 */
extern int idcmdmxSetStreamIndex;  /* 8 */
extern int idcmdmxStart;  /* 9 */
extern int idcmdmxStop;  /* 10 */
extern int idconnitfGetAvailableInterfaces;  /* 11 */
extern int iddcfSetAesContentKey;  /* 12 */
extern int idimgdecDecodeImage;  /* 13 */
extern int idimgdecDecodeThumbnail;  /* 14 */
extern int idimgdecGetBufAlignment;  /* 15 */
extern int idimgdecGetMaxResolution;  /* 16 */
extern int idimgdecGetMetaDataPresent;  /* 17 */
extern int idimgdecGetOrgFullResolution;  /* 18 */
extern int idimgdecGetOrgImageAspectRatio;  /* 19 */
extern int idimgdecGetOrgImageOrientation;  /* 20 */
extern int idimgdecGetOrgThumbnailResolution;  /* 21 */
extern int idimgdecGetRawMetaData;  /* 22 */
extern int idimgdecGetRotationMode;  /* 23 */
extern int idimgdecGetScaleRange;  /* 24 */
extern int idimgdecGetSuppFormatClasses;  /* 25 */
extern int idimgdecGetSuppFormatTypes;  /* 26 */
extern int idimgdecGetSuppImageFormats;  /* 27 */
extern int idimgdecGetSupportedRotationModes;  /* 28 */
extern int idimgdecGetThumbnailPresent;  /* 29 */
extern int idimgdecSetRotationMode;  /* 30 */
extern int idmdGetAvType;  /* 31 */
extern int idnetschemecfgGetNetworkJitter;  /* 32 */
extern int idnetschemecfgSetNetworkJitter;  /* 33 */
extern int idurlsrcjpgAbortAction;  /* 34 */
extern int idurlsrcjpgCloseUrl;  /* 35 */
extern int idurlsrcjpgGetAvailStepModes;  /* 36 */
extern int idurlsrcjpgGetBufferFullness;  /* 37 */
extern int idurlsrcjpgGetPosition;  /* 38 */
extern int idurlsrcjpgGetSeekMode;  /* 39 */
extern int idurlsrcjpgGetSizeForDuration;  /* 40 */
extern int idurlsrcjpgGetSpeed;  /* 41 */
extern int idurlsrcjpgGetSpeedRange;  /* 42 */
extern int idurlsrcjpgGetSuppSchemes;  /* 43 */
extern int idurlsrcjpgGetTotalDuration;  /* 44 */
extern int idurlsrcjpgGetTotalSize;  /* 45 */
extern int idurlsrcjpgGetUrl;  /* 46 */
extern int idurlsrcjpgOpenUrl;  /* 47 */
extern int idurlsrcjpgPause;  /* 48 */
extern int idurlsrcjpgResume;  /* 49 */
extern int idurlsrcjpgSetPosition;  /* 50 */
extern int idurlsrcjpgSetSeekMode;  /* 51 */
extern int idurlsrcjpgSetSpeed;  /* 52 */
extern int idurlsrcjpgStart;  /* 53 */
extern int idurlsrcjpgStepBackward;  /* 54 */
extern int idurlsrcjpgStepForward;  /* 55 */
extern int idurlsrcjpgStop;  /* 56 */
extern int idurlsrcmp3AbortAction;  /* 57 */
extern int idurlsrcmp3CloseUrl;  /* 58 */
extern int idurlsrcmp3GetAvailStepModes;  /* 59 */
extern int idurlsrcmp3GetBufferFullness;  /* 60 */
extern int idurlsrcmp3GetPosition;  /* 61 */
extern int idurlsrcmp3GetSeekMode;  /* 62 */
extern int idurlsrcmp3GetSizeForDuration;  /* 63 */
extern int idurlsrcmp3GetSpeed;  /* 64 */
extern int idurlsrcmp3GetSpeedRange;  /* 65 */
extern int idurlsrcmp3GetSuppSchemes;  /* 66 */
extern int idurlsrcmp3GetTotalDuration;  /* 67 */
extern int idurlsrcmp3GetTotalSize;  /* 68 */
extern int idurlsrcmp3GetUrl;  /* 69 */
extern int idurlsrcmp3OpenUrl;  /* 70 */
extern int idurlsrcmp3Pause;  /* 71 */
extern int idurlsrcmp3Resume;  /* 72 */
extern int idurlsrcmp3SetPosition;  /* 73 */
extern int idurlsrcmp3SetSeekMode;  /* 74 */
extern int idurlsrcmp3SetSpeed;  /* 75 */
extern int idurlsrcmp3Start;  /* 76 */
extern int idurlsrcmp3StepBackward;  /* 77 */
extern int idurlsrcmp3StepForward;  /* 78 */
extern int idurlsrcmp3Stop;  /* 79 */
extern int idurlsrcvidAbortAction;  /* 80 */
extern int idurlsrcvidCloseUrl;  /* 81 */
extern int idurlsrcvidGetAvailStepModes;  /* 82 */
extern int idurlsrcvidGetBufferFullness;  /* 83 */
extern int idurlsrcvidGetPosition;  /* 84 */
extern int idurlsrcvidGetSeekMode;  /* 85 */
extern int idurlsrcvidGetSizeForDuration;  /* 86 */
extern int idurlsrcvidGetSpeed;  /* 87 */
extern int idurlsrcvidGetSpeedRange;  /* 88 */
extern int idurlsrcvidGetSuppSchemes;  /* 89 */
extern int idurlsrcvidGetTotalDuration;  /* 90 */
extern int idurlsrcvidGetTotalSize;  /* 91 */
extern int idurlsrcvidGetUrl;  /* 92 */
extern int idurlsrcvidOpenUrl;  /* 93 */
extern int idurlsrcvidPause;  /* 94 */
extern int idurlsrcvidResume;  /* 95 */
extern int idurlsrcvidSetPosition;  /* 96 */
extern int idurlsrcvidSetSeekMode;  /* 97 */
extern int idurlsrcvidSetSpeed;  /* 98 */
extern int idurlsrcvidStart;  /* 99 */
extern int idurlsrcvidStepBackward;  /* 100 */
extern int idurlsrcvidStepForward;  /* 101 */
extern int idurlsrcvidStop;  /* 102 */
extern int plfapiconnMethodID_Last;  /* 103 */

/*  Symbols for plfapiconnNotificationID */
extern int idcmdmxNOnBufferFull;  /* 0 */
extern int idcmdmxNOnDataArrived;  /* 1 */
extern int idcmdmxNOnSystemBitRateChanged;  /* 2 */
extern int idconnitfNOnAvailabilityChanged;  /* 3 */
extern int iddigadecNOnError;  /* 4 */
extern int iddigvdecNOnError;  /* 5 */
extern int iddigvdecNOnStandardDataChanged;  /* 6 */
extern int idimgdecNOnEndMetaData;  /* 7 */
extern int idimgdecNOnFullImageDecoded;  /* 8 */
extern int idimgdecNOnMetaDataFound;  /* 9 */
extern int idimgdecNOnResolutionObtained;  /* 10 */
extern int idimgdecNOnThumbnailDecoded;  /* 11 */
extern int idimgdecNOnThumbnailPresence;  /* 12 */
extern int idmdNOnAvTypeNotify;  /* 13 */
extern int idurlsrcjpgNOnAccessible;  /* 14 */
extern int idurlsrcjpgNOnActionAborted;  /* 15 */
extern int idurlsrcjpgNOnBufferingStatusChanged;  /* 16 */
extern int idurlsrcjpgNOnConnectionRetry;  /* 17 */
extern int idurlsrcjpgNOnDataConsumed;  /* 18 */
extern int idurlsrcjpgNOnEndOfInput;  /* 19 */
extern int idurlsrcjpgNOnEndOfRendering;  /* 20 */
extern int idurlsrcjpgNOnNotAccessible;  /* 21 */
extern int idurlsrcjpgNOnPlayTimeChanged;  /* 22 */
extern int idurlsrcjpgNOnSetPositionAborted;  /* 23 */
extern int idurlsrcjpgNOnSetPositionCompleted;  /* 24 */
extern int idurlsrcjpgNOnTrickControlLost;  /* 25 */
extern int idurlsrcmp3NOnAccessible;  /* 26 */
extern int idurlsrcmp3NOnActionAborted;  /* 27 */
extern int idurlsrcmp3NOnBufferingStatusChanged;  /* 28 */
extern int idurlsrcmp3NOnConnectionRetry;  /* 29 */
extern int idurlsrcmp3NOnDataConsumed;  /* 30 */
extern int idurlsrcmp3NOnEndOfInput;  /* 31 */
extern int idurlsrcmp3NOnEndOfRendering;  /* 32 */
extern int idurlsrcmp3NOnNotAccessible;  /* 33 */
extern int idurlsrcmp3NOnPlayTimeChanged;  /* 34 */
extern int idurlsrcmp3NOnSetPositionAborted;  /* 35 */
extern int idurlsrcmp3NOnSetPositionCompleted;  /* 36 */
extern int idurlsrcmp3NOnTrickControlLost;  /* 37 */
extern int idurlsrcvidNOnAccessible;  /* 38 */
extern int idurlsrcvidNOnActionAborted;  /* 39 */
extern int idurlsrcvidNOnBufferingStatusChanged;  /* 40 */
extern int idurlsrcvidNOnConnectionRetry;  /* 41 */
extern int idurlsrcvidNOnDataConsumed;  /* 42 */
extern int idurlsrcvidNOnEndOfInput;  /* 43 */
extern int idurlsrcvidNOnEndOfRendering;  /* 44 */
extern int idurlsrcvidNOnNotAccessible;  /* 45 */
extern int idurlsrcvidNOnPlayTimeChanged;  /* 46 */
extern int idurlsrcvidNOnSetPositionAborted;  /* 47 */
extern int idurlsrcvidNOnSetPositionCompleted;  /* 48 */
extern int idurlsrcvidNOnTrickControlLost;  /* 49 */
extern int plfapiconnNotificationID_Last;  /* 50 */

/*  Functions clients can call, implemented by the supplier. */
extern FResult plfapiconn_cmdmx_AllocateClientStream( int winid, int * streamid, Nat32 * retval );
extern FResult plfapiconn_cmdmx_Free( int winid, int streamid, Nat32 datacookie, Nat32 * retval );
extern FResult plfapiconn_cmdmx_GetAvailableClientStreams( int winid, Nat32 * AvailClientStr, Nat32 * retval );
extern FResult plfapiconn_cmdmx_GetPlatformStream( int winid, tmCmDmx_PlatformStreamType_t platformStreamType, int * streamid, Nat32 * retval );
extern FResult plfapiconn_cmdmx_GetStreamInfo( int winid, Nat32 streamIndex, Nat16 langSize, tmCmDmx_StreamType_t * StreamType, char * streamLanguage, Nat32 * retval );
extern FResult plfapiconn_cmdmx_GetStreamMapSize( int winid, Nat32 * NumberOfStreams, Nat32 * retval );
extern FResult plfapiconn_cmdmx_GetSupportedPlatformStreams( int winid, tmCmDmx_SuppPlatformStreamTypes_t * SuppPlatformStreams, Nat32 * retval );
extern FResult plfapiconn_cmdmx_SetBuffer( int winid, int streamid, tmCmDmx_BufferType_t bufferType, Nat32 bufferSize, Nat32 granularity, tmCmDmx_Buffer_t buffer, Nat32 * retval );
extern FResult plfapiconn_cmdmx_SetStreamIndex( int winid, int streamid, Nat32 streamIndex, Nat32 * retval );
extern FResult plfapiconn_cmdmx_Start( int winid, int streamid, Nat32 * retval );
extern FResult plfapiconn_cmdmx_Stop( int winid, int streamid, Nat32 * retval );
#define plfapiconn_cmdmx_CmDmxClientStreamNotAvailable  ((Nat32)2049)
#define plfapiconn_cmdmx_CmDmxClientStreamNotAvailable_CONSTANT  2049
#define plfapiconn_cmdmx_CmDmxPlatformStreamTypeNotSupported  ((Nat32)2050)
#define plfapiconn_cmdmx_CmDmxPlatformStreamTypeNotSupported_CONSTANT  2050
extern FResult plfapiconn_connitf_GetAvailableInterfaces( int * nbrgroups, Nat32 * ids );
#define plfapiconn_connitfid_cmdmx  ((Nat32)64)
#define plfapiconn_connitfid_cmdmx_CONSTANT  64
#define plfapiconn_connitfid_dcf  ((Nat32)1)
#define plfapiconn_connitfid_dcf_CONSTANT  1
#define plfapiconn_connitfid_imgdec  ((Nat32)2)
#define plfapiconn_connitfid_imgdec_CONSTANT  2
#define plfapiconn_connitfid_md  ((Nat32)1)
#define plfapiconn_connitfid_md_CONSTANT  1
#define plfapiconn_connitfid_netschemecfg  ((Nat32)32)
#define plfapiconn_connitfid_netschemecfg_CONSTANT  32
#define plfapiconn_connitfid_urlsrcjpg  ((Nat32)16)
#define plfapiconn_connitfid_urlsrcjpg_CONSTANT  16
#define plfapiconn_connitfid_urlsrcmp3  ((Nat32)4)
#define plfapiconn_connitfid_urlsrcmp3_CONSTANT  4
#define plfapiconn_connitfid_urlsrcvid  ((Nat32)8)
#define plfapiconn_connitfid_urlsrcvid_CONSTANT  8
extern FResult plfapiconn_dcf_SetAesContentKey( int winid, Nat8 * key, int size, Bool * retval );
#define plfapiconn_errid_InterfaceNotAvailable  ((FResult)2)
#define plfapiconn_errid_InterfaceNotAvailable_CONSTANT  2
#define plfapiconn_errid_Ok  ((FResult)0)
#define plfapiconn_errid_Ok_CONSTANT  0
#define plfapiconn_errid_Other  ((FResult)-1)
#define plfapiconn_errid_Other_CONSTANT  -1
#define plfapiconn_errid_ResourceNotOwned  ((FResult)1)
#define plfapiconn_errid_ResourceNotOwned_CONSTANT  1
extern FResult plfapiconn_imgdec_DecodeImage( int winid, Nat32 requestedHorRes, Nat32 requestedVertRes, Nat32 stride, tmPixFmtCls_t formatClass, tmPixFmtType_t formatType, Bool useImageArea, tmImageDec2_ImageArea_t requestedImageArea, Nat32 bufferSize, tmImageDec_Buffer_t Buffer, Nat32 * retval );
extern FResult plfapiconn_imgdec_DecodeThumbnail( int winid, Nat32 requestedHorRes, Nat32 requestedVertRes, Nat32 stride, tmPixFmtCls_t formatClass, tmPixFmtType_t formatType, Nat32 bufferSize, tmImageDec_Buffer_t Buffer, Nat32 * retval );
extern FResult plfapiconn_imgdec_GetBufAlignment( int winid, Nat32 * BufAlignment, Nat32 * retval );
extern FResult plfapiconn_imgdec_GetMaxResolution( int winid, Nat32 * MaxHorRes, Nat32 * MaxVertRes, Nat32 * retval );
extern FResult plfapiconn_imgdec_GetMetaDataPresent( int winid, Bool * MetaDataPresent, Nat32 * retval );
extern FResult plfapiconn_imgdec_GetOrgFullResolution( int winid, Nat32 * retval );
extern FResult plfapiconn_imgdec_GetOrgImageAspectRatio( int winid, Nat16 * Numerator, Nat16 * Denominator, Nat32 * retval );
extern FResult plfapiconn_imgdec_GetOrgImageOrientation( int winid, tmImageDec2_Orientation_t * Orientation, Nat32 * retval );
extern FResult plfapiconn_imgdec_GetOrgThumbnailResolution( int winid, Nat32 * HorRes, Nat32 * VertRes, Nat32 * retval );
extern FResult plfapiconn_imgdec_GetRawMetaData( int winid, tmImageDec2_ImageFormat_t * ImageFormat, Nat32 * retval );
extern FResult plfapiconn_imgdec_GetRotationMode( int winid, tmImageDec2_RotationMode_t * Mode, tmImageDec2_Orientation_t * Orientation, Nat32 * retval );
extern FResult plfapiconn_imgdec_GetScaleRange( int winid, Nat32 * MinHorPercentage, Nat32 * MinVertPercentage, Nat32 * MaxHorPercentage, Nat32 * MaxVertPercentage, Nat32 * retval );
extern FResult plfapiconn_imgdec_GetSuppFormatClasses( int winid, tmPixFmtClsSet_t * FormatClasses, Nat32 * retval );
extern FResult plfapiconn_imgdec_GetSuppFormatTypes( int winid, tmPixFmtCls_t formatClass, tmPixFmtTypeSet_t * FormatTypes, Nat32 * retval );
extern FResult plfapiconn_imgdec_GetSuppImageFormats( int winid, tmImageDec2_ImageFormats_t * Formats, Nat32 * retval );
extern FResult plfapiconn_imgdec_GetSupportedRotationModes( int winid, tmImageDec2_RotationModes_t * Modes, Nat32 * retval );
extern FResult plfapiconn_imgdec_GetThumbnailPresent( int winid, Nat32 * retval );
extern FResult plfapiconn_imgdec_SetRotationMode( int winid, tmImageDec2_RotationMode_t mode, tmImageDec2_Orientation_t orientation, Nat32 * retval );
extern FResult plfapiconn_md_GetAvType( int winid, char * url, Nat32 * cookie );
extern FResult plfapiconn_netschemecfg_GetNetworkJitter( int winid, Nat32 * retval );
extern FResult plfapiconn_netschemecfg_SetNetworkJitter( int winid, Nat32 milliseconds );
extern FResult plfapiconn_urlsrcjpg_AbortAction( int winid, Nat32 * retval );
extern FResult plfapiconn_urlsrcjpg_CloseUrl( int winid, Nat32 * retval );
extern FResult plfapiconn_urlsrcjpg_GetAvailStepModes( int winid, tmUrlSrc_StepModes_t * AvailStepModes, Nat32 * retval );
extern FResult plfapiconn_urlsrcjpg_GetBufferFullness( int winid, Nat32 * BufferFullness, Nat32 * retval );
extern FResult plfapiconn_urlsrcjpg_GetPosition( int winid, Nat32 * Time, Nat32 * retval );
extern FResult plfapiconn_urlsrcjpg_GetSeekMode( int winid, tmUrlSrc_SeekMode_t * seekMode, Nat32 * retval );
extern FResult plfapiconn_urlsrcjpg_GetSizeForDuration( int winid, Nat32 timeDuration, Nat32 * numberOfBytes, Nat32 * retval );
extern FResult plfapiconn_urlsrcjpg_GetSpeed( int winid, Int8 * requestedSpeedNum, Nat8 * requestedSpeedDenom, Int8 * ActualSpeedNum, Nat8 * ActualSpeedDenom, Nat32 * retval );
extern FResult plfapiconn_urlsrcjpg_GetSpeedRange( int winid, Bool * ReverseSupp, Nat8 * MinSpeedNum, Nat8 * MinSpeedDenom, Nat8 * MaxSpeedNum, Nat8 * pMaxSpeedDenom, Nat32 * retval );
extern FResult plfapiconn_urlsrcjpg_GetSuppSchemes( int winid, tmUrlSrc_Schemes_t * SupportedSchemes, Nat32 * retval );
extern FResult plfapiconn_urlsrcjpg_GetTotalDuration( int winid, Nat32 * TotalDuration, Nat32 * retval );
extern FResult plfapiconn_urlsrcjpg_GetTotalSize( int winid, Nat64 * TotalSize, Nat32 * retval );
extern FResult plfapiconn_urlsrcjpg_GetUrl( int winid, Nat16 size, Nat32 * ActualSize, Nat8 * url, Nat32 * retval );
extern FResult plfapiconn_urlsrcjpg_OpenUrl( int winid, char * url, Nat32 timeOut, Nat32 * retval );
extern FResult plfapiconn_urlsrcjpg_Pause( int winid, Nat32 * retval );
extern FResult plfapiconn_urlsrcjpg_Resume( int winid, Nat32 * retval );
extern FResult plfapiconn_urlsrcjpg_SetPosition( int winid, Nat32 requestedTime, tmUrlSrc_Rounding_t rounding, Nat32 * retval );
extern FResult plfapiconn_urlsrcjpg_SetSeekMode( int winid, tmUrlSrc_SeekMode_t seekMode, Nat32 * retval );
extern FResult plfapiconn_urlsrcjpg_SetSpeed( int winid, Int8 requestedSpeedNum, Nat8 requestedSpeedDenom, Int8 * ActualSpeedNum, Nat8 * ActualSpeedDenom, Nat32 * retval );
extern FResult plfapiconn_urlsrcjpg_Start( int winid, Nat32 * retval );
extern FResult plfapiconn_urlsrcjpg_StepBackward( int winid, Nat32 * retval );
extern FResult plfapiconn_urlsrcjpg_StepForward( int winid, Nat32 * retval );
extern FResult plfapiconn_urlsrcjpg_Stop( int winid, Nat32 * retval );
#define plfapiconn_urlsrcjpg_UrlSrcAborted  ((Nat32)2051)
#define plfapiconn_urlsrcjpg_UrlSrcAborted_CONSTANT  2051
#define plfapiconn_urlsrcjpg_UrlSrcConnectionLost  ((Nat32)2054)
#define plfapiconn_urlsrcjpg_UrlSrcConnectionLost_CONSTANT  2054
#define plfapiconn_urlsrcjpg_UrlSrcEndOfStream  ((Nat32)2053)
#define plfapiconn_urlsrcjpg_UrlSrcEndOfStream_CONSTANT  2053
#define plfapiconn_urlsrcjpg_UrlSrcInvalidUrl  ((Nat32)2049)
#define plfapiconn_urlsrcjpg_UrlSrcInvalidUrl_CONSTANT  2049
#define plfapiconn_urlsrcjpg_UrlSrcNotAborted  ((Nat32)2052)
#define plfapiconn_urlsrcjpg_UrlSrcNotAborted_CONSTANT  2052
#define plfapiconn_urlsrcjpg_UrlSrcSchemeNotSupported  ((Nat32)2050)
#define plfapiconn_urlsrcjpg_UrlSrcSchemeNotSupported_CONSTANT  2050
extern FResult plfapiconn_urlsrcmp3_AbortAction( int winid, Nat32 * retval );
extern FResult plfapiconn_urlsrcmp3_CloseUrl( int winid, Nat32 * retval );
extern FResult plfapiconn_urlsrcmp3_GetAvailStepModes( int winid, tmUrlSrc_StepModes_t * AvailStepModes, Nat32 * retval );
extern FResult plfapiconn_urlsrcmp3_GetBufferFullness( int winid, Nat32 * BufferFullness, Nat32 * retval );
extern FResult plfapiconn_urlsrcmp3_GetPosition( int winid, Nat32 * Time, Nat32 * retval );
extern FResult plfapiconn_urlsrcmp3_GetSeekMode( int winid, tmUrlSrc_SeekMode_t * seekMode, Nat32 * retval );
extern FResult plfapiconn_urlsrcmp3_GetSizeForDuration( int winid, Nat32 timeDuration, Nat32 * numberOfBytes, Nat32 * retval );
extern FResult plfapiconn_urlsrcmp3_GetSpeed( int winid, Int8 * requestedSpeedNum, Nat8 * requestedSpeedDenom, Int8 * ActualSpeedNum, Nat8 * ActualSpeedDenom, Nat32 * retval );
extern FResult plfapiconn_urlsrcmp3_GetSpeedRange( int winid, Bool * ReverseSupp, Nat8 * MinSpeedNum, Nat8 * MinSpeedDenom, Nat8 * MaxSpeedNum, Nat8 * pMaxSpeedDenom, Nat32 * retval );
extern FResult plfapiconn_urlsrcmp3_GetSuppSchemes( int winid, tmUrlSrc_Schemes_t * SupportedSchemes, Nat32 * retval );
extern FResult plfapiconn_urlsrcmp3_GetTotalDuration( int winid, Nat32 * TotalDuration, Nat32 * retval );
extern FResult plfapiconn_urlsrcmp3_GetTotalSize( int winid, Nat64 * TotalSize, Nat32 * retval );
extern FResult plfapiconn_urlsrcmp3_GetUrl( int winid, Nat16 size, Nat32 * ActualSize, Nat8 * url, Nat32 * retval );
extern FResult plfapiconn_urlsrcmp3_OpenUrl( int winid, char * url, Nat32 timeOut, Nat32 * retval );
extern FResult plfapiconn_urlsrcmp3_Pause( int winid, Nat32 * retval );
extern FResult plfapiconn_urlsrcmp3_Resume( int winid, Nat32 * retval );
extern FResult plfapiconn_urlsrcmp3_SetPosition( int winid, Nat32 requestedTime, tmUrlSrc_Rounding_t rounding, Nat32 * retval );
extern FResult plfapiconn_urlsrcmp3_SetSeekMode( int winid, tmUrlSrc_SeekMode_t seekMode, Nat32 * retval );
extern FResult plfapiconn_urlsrcmp3_SetSpeed( int winid, Int8 requestedSpeedNum, Nat8 requestedSpeedDenom, Int8 * ActualSpeedNum, Nat8 * ActualSpeedDenom, Nat32 * retval );
extern FResult plfapiconn_urlsrcmp3_Start( int winid, Nat32 * retval );
extern FResult plfapiconn_urlsrcmp3_StepBackward( int winid, Nat32 * retval );
extern FResult plfapiconn_urlsrcmp3_StepForward( int winid, Nat32 * retval );
extern FResult plfapiconn_urlsrcmp3_Stop( int winid, Nat32 * retval );
#define plfapiconn_urlsrcmp3_UrlSrcAborted  ((Nat32)2051)
#define plfapiconn_urlsrcmp3_UrlSrcAborted_CONSTANT  2051
#define plfapiconn_urlsrcmp3_UrlSrcConnectionLost  ((Nat32)2054)
#define plfapiconn_urlsrcmp3_UrlSrcConnectionLost_CONSTANT  2054
#define plfapiconn_urlsrcmp3_UrlSrcEndOfStream  ((Nat32)2053)
#define plfapiconn_urlsrcmp3_UrlSrcEndOfStream_CONSTANT  2053
#define plfapiconn_urlsrcmp3_UrlSrcInvalidUrl  ((Nat32)2049)
#define plfapiconn_urlsrcmp3_UrlSrcInvalidUrl_CONSTANT  2049
#define plfapiconn_urlsrcmp3_UrlSrcNotAborted  ((Nat32)2052)
#define plfapiconn_urlsrcmp3_UrlSrcNotAborted_CONSTANT  2052
#define plfapiconn_urlsrcmp3_UrlSrcSchemeNotSupported  ((Nat32)2050)
#define plfapiconn_urlsrcmp3_UrlSrcSchemeNotSupported_CONSTANT  2050
extern FResult plfapiconn_urlsrcvid_AbortAction( int winid, Nat32 * retval );
extern FResult plfapiconn_urlsrcvid_CloseUrl( int winid, Nat32 * retval );
extern FResult plfapiconn_urlsrcvid_GetAvailStepModes( int winid, tmUrlSrc_StepModes_t * AvailStepModes, Nat32 * retval );
extern FResult plfapiconn_urlsrcvid_GetBufferFullness( int winid, Nat32 * BufferFullness, Nat32 * retval );
extern FResult plfapiconn_urlsrcvid_GetPosition( int winid, Nat32 * Time, Nat32 * retval );
extern FResult plfapiconn_urlsrcvid_GetSeekMode( int winid, tmUrlSrc_SeekMode_t * seekMode, Nat32 * retval );
extern FResult plfapiconn_urlsrcvid_GetSizeForDuration( int winid, Nat32 timeDuration, Nat32 * numberOfBytes, Nat32 * retval );
extern FResult plfapiconn_urlsrcvid_GetSpeed( int winid, Int8 * requestedSpeedNum, Nat8 * requestedSpeedDenom, Int8 * ActualSpeedNum, Nat8 * ActualSpeedDenom, Nat32 * retval );
extern FResult plfapiconn_urlsrcvid_GetSpeedRange( int winid, Bool * ReverseSupp, Nat8 * MinSpeedNum, Nat8 * MinSpeedDenom, Nat8 * MaxSpeedNum, Nat8 * pMaxSpeedDenom, Nat32 * retval );
extern FResult plfapiconn_urlsrcvid_GetSuppSchemes( int winid, tmUrlSrc_Schemes_t * SupportedSchemes, Nat32 * retval );
extern FResult plfapiconn_urlsrcvid_GetTotalDuration( int winid, Nat32 * TotalDuration, Nat32 * retval );
extern FResult plfapiconn_urlsrcvid_GetTotalSize( int winid, Nat64 * TotalSize, Nat32 * retval );
extern FResult plfapiconn_urlsrcvid_GetUrl( int winid, Nat16 size, Nat32 * ActualSize, Nat8 * url, Nat32 * retval );
extern FResult plfapiconn_urlsrcvid_OpenUrl( int winid, char * url, Nat32 timeOut, Nat32 * retval );
extern FResult plfapiconn_urlsrcvid_Pause( int winid, Nat32 * retval );
extern FResult plfapiconn_urlsrcvid_Resume( int winid, Nat32 * retval );
extern FResult plfapiconn_urlsrcvid_SetPosition( int winid, Nat32 requestedTime, tmUrlSrc_Rounding_t rounding, Nat32 * retval );
extern FResult plfapiconn_urlsrcvid_SetSeekMode( int winid, tmUrlSrc_SeekMode_t seekMode, Nat32 * retval );
extern FResult plfapiconn_urlsrcvid_SetSpeed( int winid, Int8 requestedSpeedNum, Nat8 requestedSpeedDenom, Int8 * ActualSpeedNum, Nat8 * ActualSpeedDenom, Nat32 * retval );
extern FResult plfapiconn_urlsrcvid_Start( int winid, Nat32 * retval );
extern FResult plfapiconn_urlsrcvid_StepBackward( int winid, Nat32 * retval );
extern FResult plfapiconn_urlsrcvid_StepForward( int winid, Nat32 * retval );
extern FResult plfapiconn_urlsrcvid_Stop( int winid, Nat32 * retval );
#define plfapiconn_urlsrcvid_UrlSrcAborted  ((Nat32)2051)
#define plfapiconn_urlsrcvid_UrlSrcAborted_CONSTANT  2051
#define plfapiconn_urlsrcvid_UrlSrcConnectionLost  ((Nat32)2054)
#define plfapiconn_urlsrcvid_UrlSrcConnectionLost_CONSTANT  2054
#define plfapiconn_urlsrcvid_UrlSrcEndOfStream  ((Nat32)2053)
#define plfapiconn_urlsrcvid_UrlSrcEndOfStream_CONSTANT  2053
#define plfapiconn_urlsrcvid_UrlSrcInvalidUrl  ((Nat32)2049)
#define plfapiconn_urlsrcvid_UrlSrcInvalidUrl_CONSTANT  2049
#define plfapiconn_urlsrcvid_UrlSrcNotAborted  ((Nat32)2052)
#define plfapiconn_urlsrcvid_UrlSrcNotAborted_CONSTANT  2052
#define plfapiconn_urlsrcvid_UrlSrcSchemeNotSupported  ((Nat32)2050)
#define plfapiconn_urlsrcvid_UrlSrcSchemeNotSupported_CONSTANT  2050

/* Functions called by supplier (notifications raised to clients), implemented by clients. */
extern void plfapiconn_cmdmxN_OnBufferFull( void );
extern void plfapiconn_cmdmxN_OnDataArrived( Nat32 dataCookie, Nat32 primaryDataSize, tmCmDmx_Buffer_t PrimaryDataStartAddress, Nat32 secondaryDataSize, tmCmDmx_Buffer_t SecondaryDataStartAddress );
extern void plfapiconn_cmdmxN_OnSystemBitRateChanged( Nat32 bitRate );
extern void plfapiconn_connitfN_OnAvailabilityChanged( int nbrgroups, Nat32 * ids );
extern void plfapiconn_digadecN_OnError( tmDigAdec_Error_t err );
extern void plfapiconn_digvdecN_OnError( tmDigVdec_Error_t err );
extern void plfapiconn_digvdecN_OnStandardDataChanged( tmDigVdec_CompressionStandard_t standard, tmDigVdec_Profile_t profile, tmDigVdec_Level_t level );
extern void plfapiconn_imgdecN_OnEndMetaData( void );
extern void plfapiconn_imgdecN_OnFullImageDecoded( tmImageDec2_Status_t status );
extern void plfapiconn_imgdecN_OnMetaDataFound( Nat32 size, tmImageDec_Buffer_t RawData );
extern void plfapiconn_imgdecN_OnResolutionObtained( tmImageDec2_Status_t status, Nat32 horRes, Nat32 vertRes );
extern void plfapiconn_imgdecN_OnThumbnailDecoded( tmImageDec2_Status_t status );
extern void plfapiconn_imgdecN_OnThumbnailPresence( tmImageDec2_Status_t status, Bool presence );
extern void plfapiconn_mdN_OnAvTypeNotify( int winid, Nat32 cookie, MediaDetect_Format_t * fmt );
extern void plfapiconn_urlsrcjpgN_OnAccessible( void );
extern void plfapiconn_urlsrcjpgN_OnActionAborted( void );
extern void plfapiconn_urlsrcjpgN_OnBufferingStatusChanged( tmUrlSrc_BufferingState_t bufferState );
extern void plfapiconn_urlsrcjpgN_OnConnectionRetry( void );
extern void plfapiconn_urlsrcjpgN_OnDataConsumed( Nat64 bytesConsumed );
extern void plfapiconn_urlsrcjpgN_OnEndOfInput( void );
extern void plfapiconn_urlsrcjpgN_OnEndOfRendering( void );
extern void plfapiconn_urlsrcjpgN_OnNotAccessible( tmUrlSrc_NotAccessibleCause_t cause );
extern void plfapiconn_urlsrcjpgN_OnPlayTimeChanged( Nat32 timePlayed );
extern void plfapiconn_urlsrcjpgN_OnSetPositionAborted( void );
extern void plfapiconn_urlsrcjpgN_OnSetPositionCompleted( Nat32 actualTime, Bool endOfStreamReached );
extern void plfapiconn_urlsrcjpgN_OnTrickControlLost( void );
extern void plfapiconn_urlsrcmp3N_OnAccessible( void );
extern void plfapiconn_urlsrcmp3N_OnActionAborted( void );
extern void plfapiconn_urlsrcmp3N_OnBufferingStatusChanged( tmUrlSrc_BufferingState_t bufferState );
extern void plfapiconn_urlsrcmp3N_OnConnectionRetry( void );
extern void plfapiconn_urlsrcmp3N_OnDataConsumed( Nat64 bytesConsumed );
extern void plfapiconn_urlsrcmp3N_OnEndOfInput( void );
extern void plfapiconn_urlsrcmp3N_OnEndOfRendering( void );
extern void plfapiconn_urlsrcmp3N_OnNotAccessible( tmUrlSrc_NotAccessibleCause_t cause );
extern void plfapiconn_urlsrcmp3N_OnPlayTimeChanged( Nat32 timePlayed );
extern void plfapiconn_urlsrcmp3N_OnSetPositionAborted( void );
extern void plfapiconn_urlsrcmp3N_OnSetPositionCompleted( Nat32 actualTime, Bool endOfStreamReached );
extern void plfapiconn_urlsrcmp3N_OnTrickControlLost( void );
extern void plfapiconn_urlsrcvidN_OnAccessible( void );
extern void plfapiconn_urlsrcvidN_OnActionAborted( void );
extern void plfapiconn_urlsrcvidN_OnBufferingStatusChanged( tmUrlSrc_BufferingState_t bufferState );
extern void plfapiconn_urlsrcvidN_OnConnectionRetry( void );
extern void plfapiconn_urlsrcvidN_OnDataConsumed( Nat64 bytesConsumed );
extern void plfapiconn_urlsrcvidN_OnEndOfInput( void );
extern void plfapiconn_urlsrcvidN_OnEndOfRendering( void );
extern void plfapiconn_urlsrcvidN_OnNotAccessible( tmUrlSrc_NotAccessibleCause_t cause );
extern void plfapiconn_urlsrcvidN_OnPlayTimeChanged( Nat32 timePlayed );
extern void plfapiconn_urlsrcvidN_OnSetPositionAborted( void );
extern void plfapiconn_urlsrcvidN_OnSetPositionCompleted( Nat32 actualTime, Bool endOfStreamReached );
extern void plfapiconn_urlsrcvidN_OnTrickControlLost( void );

/* Functions to indicate which notifications should be raised (for use in clients only!) */
extern void plfapiconn_EnableNotification_cmdmxN( void );
extern void plfapiconn_DisableNotification_cmdmxN( void );
extern void plfapiconn_EnableNotification_connitfN( void );
extern void plfapiconn_DisableNotification_connitfN( void );
extern void plfapiconn_EnableNotification_digadecN( void );
extern void plfapiconn_DisableNotification_digadecN( void );
extern void plfapiconn_EnableNotification_digvdecN( void );
extern void plfapiconn_DisableNotification_digvdecN( void );
extern void plfapiconn_EnableNotification_imgdecN( void );
extern void plfapiconn_DisableNotification_imgdecN( void );
extern void plfapiconn_EnableNotification_mdN( void );
extern void plfapiconn_DisableNotification_mdN( void );
extern void plfapiconn_EnableNotification_urlsrcjpgN( void );
extern void plfapiconn_DisableNotification_urlsrcjpgN( void );
extern void plfapiconn_EnableNotification_urlsrcmp3N( void );
extern void plfapiconn_DisableNotification_urlsrcmp3N( void );
extern void plfapiconn_EnableNotification_urlsrcvidN( void );
extern void plfapiconn_DisableNotification_urlsrcvidN( void );
extern void plfapiconn_EnableNotification( int notificationId );
extern void plfapiconn_DisableNotification( int notificationId );

#if !defined(_COMACALLSTUB_)
#define _COMACALLSTUB_
/* The datatype used for stubs in the plfapiconn_call_stubs */
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

extern void plfapiconn_RegisterHookGlobal( IpcHookFunction callback );

/* For client: ipchtCall, ipchtCallDone */
/* For supply: ipchtCallReceived, ipchtCallHandled */
extern void plfapiconn_RegisterHook_cmdmx( IpcHookFunction callback );
extern void plfapiconn_RegisterHook_connitf( IpcHookFunction callback );
extern void plfapiconn_RegisterHook_connitfid( IpcHookFunction callback );
extern void plfapiconn_RegisterHook_dcf( IpcHookFunction callback );
extern void plfapiconn_RegisterHook_errid( IpcHookFunction callback );
extern void plfapiconn_RegisterHook_imgdec( IpcHookFunction callback );
extern void plfapiconn_RegisterHook_md( IpcHookFunction callback );
extern void plfapiconn_RegisterHook_netschemecfg( IpcHookFunction callback );
extern void plfapiconn_RegisterHook_urlsrcjpg( IpcHookFunction callback );
extern void plfapiconn_RegisterHook_urlsrcmp3( IpcHookFunction callback );
extern void plfapiconn_RegisterHook_urlsrcvid( IpcHookFunction callback );

/* For client: ipchtNotificationReceived, ipchtNotificationHandled */
/* For supply: ipchtNotificationCalled, ipchtNotificationPosted, ipchtNotificationDone */
extern void plfapiconn_RegisterHook_cmdmxN( IpcHookFunction callback );
extern void plfapiconn_RegisterHook_connitfN( IpcHookFunction callback );
extern void plfapiconn_RegisterHook_digadecN( IpcHookFunction callback );
extern void plfapiconn_RegisterHook_digvdecN( IpcHookFunction callback );
extern void plfapiconn_RegisterHook_imgdecN( IpcHookFunction callback );
extern void plfapiconn_RegisterHook_mdN( IpcHookFunction callback );
extern void plfapiconn_RegisterHook_urlsrcjpgN( IpcHookFunction callback );
extern void plfapiconn_RegisterHook_urlsrcmp3N( IpcHookFunction callback );
extern void plfapiconn_RegisterHook_urlsrcvidN( IpcHookFunction callback );

#endif /* _PLFAPICONN_H_ */

