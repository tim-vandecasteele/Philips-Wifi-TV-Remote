//
//  CEControlTVDraw.h
//  Wifi TV Remote
//

#import <UIKit/UIKit.h>
#import "CEVoodooTV.h"
#import <OpenGLES/ES1/gl.h>
#import <directfb.h>
#import "PaintingView.h"


@interface CEControlTVDraw : UIViewController < CEPaintingViewDelegateActions > {
    CEVoodooTV *voodooTV;
    IDirectFBDisplayLayer         *layer;
	DFBWindowDescription          wdesc;
	IDirectFBWindow               *gwindow;
    IDirectFBSurface              *gsurface;
    IDirectFBEventBuffer          *events;
}

@property (retain) CEVoodooTV *voodooTV;

- (void) writeInBuffer:(void*) buffer;

@end
