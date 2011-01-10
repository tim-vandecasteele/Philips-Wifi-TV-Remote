//
//  CEControlTVPlayCluster.h
//  Remote_0.3
//
//  Created by Tim on 6/05/10.
//  Copyright 2010 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "CEControlTVCursor.h"
#import "CEVoodooTV.h"

@interface CEControlTVPlayCluster : UIViewController  < CEControlTVCursorActions >{
    CEVoodooTV *voodooTV;
    IBOutlet CEControlTVCursor *tvCursor;
}

@property (retain) CEVoodooTV *voodooTV;

-(IBAction)pressNetTVKey:(id)sender;
-(IBAction)pressNextKey:(id)sender;
-(IBAction)pressPrevKey:(id)sender;
-(IBAction)pressFastBackwardKey:(id)sender;
-(IBAction)pressFastForwardKey:(id)sender;
-(IBAction)pressStopKey:(id)sender;
-(IBAction)pressPlayPauseKey:(id)sender;
-(IBAction)pressPowerKey:(id)sender;

@end