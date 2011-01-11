//
//  CEControlTVCustomCluster.h
//  Wifi TV Remote
//

#import <UIKit/UIKit.h>
#import "CEVoodooTV.h"

@interface CEControlTVCustomCluster : UIViewController {
    CEVoodooTV *voodooTV;
    IBOutlet UITextField *rcCodeTxtField;
}

@property (retain) CEVoodooTV *voodooTV;

-(IBAction)sendCustomKey:(id)sender;

@end
