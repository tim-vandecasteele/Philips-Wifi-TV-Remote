//
//  CEControlTVImage.h
//  Remote_0.3
//
//  Created by Tim on 25/05/10.
//  Copyright 2010 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "CEVoodooTV.h"
#import <directfb.h>

@interface CEControlTVImage : UIViewController <UINavigationControllerDelegate, UIImagePickerControllerDelegate> {
    CEVoodooTV *voodooTV;
    IDirectFBDisplayLayer         *layer;
	DFBWindowDescription          wdesc;
	IDirectFBWindow               *gwindow;
    IDirectFBSurface              *gsurface;
    IDirectFBEventBuffer          *events;
}

@property (retain) CEVoodooTV *voodooTV;

- (IBAction)pickImage:(id)sender;
- (IBAction)clearImage:(id)sender;
- (IBAction)goBack:(id)sender;

@end
