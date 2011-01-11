//
//  CEControlTVSimpleCluster.h
//  Wifi TV Remote
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
