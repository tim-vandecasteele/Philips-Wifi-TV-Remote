//
//  CEControlTVSimpleCluster.h
//  Remote_0.3
//
//  Created by Tim on 28/04/10.
//  Copyright 2010 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "CEVoodooTV.h"


@interface CEControlTVSimpleCluster : UIViewController {
    CEVoodooTV *voodooTV;
}

@property (retain) CEVoodooTV *voodooTV;

-(IBAction)pressVolumeUp:(id)sender;
-(IBAction)pressVolumeDown:(id)sender;
-(IBAction)pressChannelUp:(id)sender;
-(IBAction)pressChannelDown:(id)sender;
-(IBAction)pressPowerKey:(id)sender;
-(IBAction)pressMuteKey:(id)sender;
-(IBAction)goBack:(id)sender;

@end
