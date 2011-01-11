//
//  CEControlReverseWindow.h
//  Wifi TV Remote
//

#import <UIKit/UIKit.h>
#import "CEVoodooTV.h"
#import <directfb.h>
#import <directfb_util.h>
#import "CEControlReverseWindowView.h"
#import "NSInvocation+CWVariableArguments.h"

#define MAX_UPDATE_REGIONS        8
#define D_ARRAY_SIZE(array)        ((int)(sizeof(array) / sizeof((array)[0])))
#define ResUIInputBufDfu          (1030)
#define ResTXTInputBuf            (1003)
#define ResUIInputBufBroadcast    (1034)
#define ResUIInputBufHome         (1028);

@interface CEControlReverseWindow : UIViewController  < CEControlReverseWindowViewActions > {
    CEVoodooTV            *voodooTV;
    IDirectFBEventBuffer  *m_events;
    IDirectFBWindow       *m_window;
    IDirectFBSurface      *m_surface;
    DFBDimension           m_size;
    DFBSurfacePixelFormat  m_format;
    DFBDimension           m_resolution;
    IDirectFBSurface      *m_scaled;
    BOOL                   m_update_stop;
    void                  *m_pixels;
    int                    m_pitch;
    NSInteger              resourceId;
}

@property (retain) CEVoodooTV *voodooTV;

- (void) updateThread;

- (void) setResourceId:(NSInteger)localResourceId;

- (void) updateWindowWithRegions:(const DFBRegion *)regions andNumRegions:(int) num_regions;

@end
