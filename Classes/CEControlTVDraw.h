//
//  CEControlTVDraw.h
//  Remote_0.3
//
//  Created by Tim on 20/05/10.
//  Copyright 2010 __MyCompanyName__. All rights reserved.
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
