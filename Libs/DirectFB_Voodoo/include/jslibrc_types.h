
/* 
 * Copyright © 2009, Koninklijke Philips Electronics N.V.
 * All rights reserved.
 * Redistribution and use in source and binary forms, with or without 
 * modification, are permitted provided that the following conditions are met:
 * -	Redistributions of source code must retain the above copyright notice, 
 *      this list of conditions and the following disclaimer.
 * -	Redistributions in binary form must reproduce the above copyright 
 *      notice, this list of conditions and the following disclaimer in the 
 *      documentation and/or other materials provided with the distribution.
 * -	Neither the name of the Koninklijke Philips Electronics N.V. nor the 
 *      names of its contributors may be used to endorse or promote products 
 *      derived from this software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" 
 * AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE 
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE 
 * ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE 
 * LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR 
 * CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF 
 * SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS 
 * INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN 
 * CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) 
 * ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE 
 * POSSIBILITY OF SUCH DAMAGE.
 *
 */

#ifndef __JSLIBRC_TYPES__
#define __JSLIBRC_TYPES__

/* Rc6 System 0 raw key codes ----------------------*/
#define rc6S0Digit0                          0
#define rc6S0Digit1                          1
#define rc6S0Digit2                          2
#define rc6S0Digit3                          3
#define rc6S0Digit4                          4
#define rc6S0Digit5                          5
#define rc6S0Digit6                          6
#define rc6S0Digit7                          7
#define rc6S0Digit8                          8
#define rc6S0Digit9                          9
#define rc6S0PreviousProgram                10
/* define rc6S0...                          11 */
#define rc6S0Standby                        12
#define rc6S0MuteDemute                     13
#define rc6S0PersonalPreference             14
#define rc6S0Display                        15
#define rc6S0VolumeUp                       16
#define rc6S0VolumeDown                     17
#define rc6S0BrightnessUp                   18
#define rc6S0BrightnessDown                 19
#define rc6S0SaturationUp                   20
#define rc6S0SaturationDown                 21
#define rc6S0BassUp                         22
#define rc6S0BassDown                       23
#define rc6S0TrebleUp                       24
#define rc6S0TrebleDown                     25
#define rc6S0BalanceRight                   26
#define rc6S0BalanceLeft                    27
#define rc6S0CtrlLastPosition               28
/* define rc6S0...                          29 */
#define rc6S0SearchUp                       30
#define rc6S0SearchDown                     31
#define rc6S0Next                           32
#define rc6S0Previous                       33
/* define rc6S0...                          34 */
/* define rc6S0...                          35 */
/* define rc6S0...                          36 */
/* define rc6S0...                          37 */
/* define rc6S0...                          38 */
/* define rc6S0...                          39 */
#define rc6S0FastForward                    40
/* define rc6S0...                          41 */
/* define rc6S0...                          42 */
#define rc6S0ScanReverse                    43
#define rc6S0Play                           44
/* define rc6S0...                          45 */
/* define rc6S0...                          46 */
/* define rc6S0...                          47 */
/* define rc6S0...                          48 */
#define rc6S0Stop                           49
/* define rc6S0...                          50 */
/* define rc6S0...                          51 */
/* define rc6S0...                          52 */
/* define rc6S0...                          53 */
/* define rc6S0...                          54 */
#define rc6S0Record                         55
#define rc6S0External1                      56
#define rc6S0External2                      57
/* define rc6S0...                          58 */
#define rc6S0AbProgram                      59
#define rc6S0TxtSubmode                     60
#define rc6S0SystemStandby                  61
/* define rc6S0...                          62 */
#define rc6S0SystemSelect                   63
#define rc6S0ContextualOptions              64 
/* define rc6S0...                          65 */
/* define rc6S0...                          66 */
/* define rc6S0...                          67 */
/* define rc6S0...                          68 */
#define rc6S0StoreOpenClose                 69
#define rc6S0ClosedCaptioning               70
#define rc6S0Sleeptimer                     71
/* define rc6S0...                          72 */
/* define rc6S0...                          73 */
#define rc6S0PictureNumberTime              74
#define rc6S0TvTextSubtitle                 75
/* define rc6S0...                          76 */
/* define rc6S0...                          77 */
#define rc6S0SoundSelect                    78
#define rc6S0SpatialStereo                  79
#define rc6S0StereoMono                     80
#define rc6S0SoundScroll                    81
#define rc6S0SurroundSound                  82
#define rc6S0SurroundSoundScroll            83
#define rc6S0MenuOn                         84
#define rc6S0MenuOff                        85
/* define rc6S0...                          86 */
/* define rc6S0...                          87 */
#define rc6S0StepUp                         88
#define rc6S0StepDown                       89
#define rc6S0StepLeft                       90
#define rc6S0StepRight                      91
#define rc6S0Acknowledge                    92
#define rc6S0PipOnOff                       93
#define rc6S0PipSelect                      94
#define rc6S0PipShift                       95
#define rc6S0PipSize                        96
#define rc6S0PipStepDown                    97
#define rc6S0PipStepUp                      98
#define rc6S0PipMainSwap                    99
#define rc6S0PipFreeze                     100
#define rc6S0PipStrobe                     101
#define rc6S0MosaicMultiPip                102
#define rc6S0MainFreezed                   103
#define rc6S0MainStored                    104
/* define rc6S0...                         105 */
/* define rc6S0...                         106 */
/* define rc6S0...                         107 */
/* define rc6S0...                         108 */
#define rc6S0Red                           109
#define rc6S0Green                         110
#define rc6S0Yellow                        111
#define rc6S0Cyan                          112
#define rc6S0IndexWhite                    113
/* define rc6S0...                         114 */
/* define rc6S0...                         115 */
/* define rc6S0...                         116 */
#define rc6S0TimerSet                      117
/* define rc6S0...                         118 */
/* define rc6S0...                         119 */
#define rc6S0Preset10                      120
#define rc6S0Preset11                      121
#define rc6S0Preset12                      122
#define rc6S0Preset13                      123
#define rc6S0Preset14                      124
#define rc6S0Preset15                      125
#define rc6S0Preset16                      126
#define rc6S0Time                          127
/* define rc6S0...                         128 */
#define rc6S0Help                          129
#define rc6S0DefaultMenuSelect             130
/* define rc6S0...                         131 */
#define rc6S0FavouriteMode                 132
#define rc6S0SwivelMode                    133
#define rc6S0External3                     134
#define rc6S0External4                     135
#define rc6S0External5                     136
/* define rc6S0...                         137 */
#define rc6S0VideoVgaSelect                138
#define rc6S0NextSource                    139
#define rc6S0BacklightUp                   140
#define rc6S0BacklightDown                 141
#define rc6S0HdAtHome                      142
#define rc6S0AmbLightOnOffDim              143
#define rc6S0AmbLightMode                  144
#define rc6S0AmbilightBrightnessUp         145
#define rc6S0AmbilightBrightnessDown       146
/* define rc6S0...                         147 */
/* define rc6S0...                         148 */
/* define rc6S0...                         149 */
#define rc6S0Smart                         150
#define rc6S0SoftKey1A                     151
#define rc6S0SoftKey1B                     152
#define rc6S0SoftKey2A                     153
#define rc6S0SoftKey2B                     154
#define rc6S0SoftKey3A                     155
#define rc6S0SoftKey3B                     156
#define rc6S0Smiley                        157
#define rc6S0Frownie                       158
/* define rc6S0...                         159 */
/* define rc6S0...                         160 */
/* define rc6S0...                         161 */
/* define rc6S0...                         162 */
#define rc6S0AvMute                        163
/* define rc6S0...                         164 */
/* define rc6S0...                         165 */
/* define rc6S0...                         166 */
/* define rc6S0...                         167 */
/* define rc6S0...                         168 */
/* define rc6S0...                         169 */
/* define rc6S0...                         170 */
/* define rc6S0...                         171 */
/* define rc6S0...                         172 */
/* define rc6S0...                         173 */
/* define rc6S0...                         174 */
/* define rc6S0...                         175 */
#define rc6S0MainSubmode                   176
#define rc6S0Resume                        177
/* define rc6S0...                         178 */
/* define rc6S0...                         179 */
/* define rc6S0...                         180 */
/* define rc6S0...                         181 */
/* define rc6S0...                         182 */
/* define rc6S0...                         183 */
/* define rc6S0...                         184 */
/* define rc6S0...                         185 */
/* define rc6S0...                         186 */
/* define rc6S0...                         187 */
/* define rc6S0...                         188 */
/* define rc6S0...                         189 */
#define rc6S0DisplayBrowser                190
/* define rc6S0...                         191 */
#define rc6S0AnalogueDigital               192
#define rc6S0DigitalSetupMenu              193
#define rc6S0OneTouchHomeCinema            194
#define rc6S0BatteryLow                    195
#define rc6S0CursorUpRight                 196
#define rc6S0CursorUpLeft                  197
#define rc6S0CursorDownRight               198
#define rc6S0CursorDownLeft                199
#define rc6S0Digit100                      200
#define rc6S0RotCabClockwise               201
#define rc6S0CenterCabinet                 202
#define rc6S0RotCabAntiClockwise           203
#define rc6S0EpgGuide                      204
#define rc6S0ToggleStandby                 205
#define rc6S0PageUp                        206
#define rc6S0PageDown                      207
#define rc6S0DigitalPictureMenu            208
#define rc6S0StartPage                     209
#define rc6S0FavouritesList                210
#define rc6S0MarkListitem                  211
/* define rc6S0...                         212 */
#define rc6S0SubmodeSystemMenu             213
#define rc6S0ZoomOnOff                     214
#define rc6S0CableMode                     215
#define rc6S0WideScreen                    216
#define rc6S0Dot                           217
#define rc6S0SpeechMusic                   218
#define rc6S0Options                       219
#define rc6S0RfSwitch                      220
#define rc6S0ActuatorOnOff                 221
#define rc6S0Learn1                        222
#define rc6S0Learn2                        223
#define rc6S0CancelPicture                 224
#define rc6S0Enter                         225
#define rc6S0Exchange                      226
#define rc6S0TxtTv                         227
#define rc6S0NewsFlash                     228
#define rc6S0RowZero                       229
#define rc6S0SequenceOut                   230
#define rc6S0LargeTopBottomNormal          231
#define rc6S0StepPageDown                  232
#define rc6S0StepPageUp                    233
#define rc6S0RevealConceal                 234
#define rc6S0PageHold                      235
#define rc6S0Index                         236
#define rc6S0RadioChannelDown              237
#define rc6S0RadioChannelUp                238
#define rc6S0PayTvChannelDown              239
#define rc6S0PayTvChannelUp                240
#define rc6S0TiltForward                   241
#define rc6S0TiltBackward                  242
#define rc6S0VideoPp                       243
#define rc6S0AudioPp                       244
#define rc6S0MovieExpand                   245
#define rc6S0ZoomMinus                     246
#define rc6S0ZoomPlus                      247
#define rc6S0ShowClock                     248
#define rc6S0PictureDigitalNoiseReduction  249
#define rc6S0Crispener                     250
#define rc6S0ContrastDown                  251
#define rc6S0ContrastUp                    252
#define rc6S0TintHueDown                   253
#define rc6S0TintHueUp                     254
#define rc6S0Wysiwyr                       255



#define keySourceRc6                       3


typedef enum{
    amLib_ACT_Toggle,
    amLib_ACT_Start,
    amLib_ACT_Stop,
    amLib_ACT_StartNoFocus
} amLib_EnumActivation;

typedef enum{
    amLib_ACT_HomeScreen,
    amLib_ACT_NetTV,
    amLib_ACT_BrowseUSB,
    amLib_ACT_BrowseDLNA,
    amLib_ACT_WatchTV,
    amLib_ACT_WatchSatellite,
    amLib_ACT_WatchExt,
    amLib_ACT_MultiApp,
    amLib_ACT_VideoStore,
    amLib_ACT_Dfu,
    amLib_ACT_Teletext,
    amLib_ACT_Epg,
    amLib_ACT_Esticker,
    amLib_ACT_Mhp,
    amLib_ACT_Upgrade,
    amLib_ACT_LoadingAnimation,
    amLib_ACT_Widgets,
    amLib_ACT_RemoteApp
} amLib_EnumActivityId;


#endif

