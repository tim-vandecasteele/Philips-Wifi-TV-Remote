//
//  CEControlTVCursorCluster.h
//  Remote_0.3
//
//  Created by Tim on 25/04/10.
//  Copyright 2010 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "CEControlTVCursor.h"
#import "CEVoodooTV.h"


@interface CEControlTVCursorCluster : UIViewController < CEControlTVCursorActions >{
    CEVoodooTV *voodooTV;
    IBOutlet CEControlTVCursor *tvCursor;
}

@property (retain) CEVoodooTV *voodooTV;

-(IBAction)pressPowerKey:(id)sender;
-(IBAction)pressHomeKey:(id)sender;
-(IBAction)pressBackKey:(id)sender;
-(IBAction)pressNextKey:(id)sender;
-(IBAction)pressPrevKey:(id)sender;
-(IBAction)pressHomeKey:(id)sender;
-(IBAction)pressOptionsKey:(id)sender;
-(IBAction)pressBrowseKey:(id)sender;
-(IBAction)pressExperienceKey:(id)sender;

@end
