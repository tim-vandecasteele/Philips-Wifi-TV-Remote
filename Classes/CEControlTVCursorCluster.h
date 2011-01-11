//
//  CEControlTVCursorCluster.h
//  Wifi TV Remote
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
