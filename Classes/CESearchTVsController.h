//
//  CESearchTVsController.h
//  Wifi TV Remote
//

#import <UIKit/UIKit.h>
#import "CEVoodooTVPool.h"

#import "CEControlTVCursorCluster.h"
#import "CEControlTVDigitsCluster.h"
#import "CEControlTVPlayCluster.h"
#import "CEControlTVSimpleCluster.h"
#import "CEControlTVCustomCluster.h"
#import "CEControlTVKeyboardCluster.h"
#import "CEControlTVDraw.h"
#import "CEControlTVImage.h"
#import "CEControlReverseWindow.h"
#import "CEControlTViPadCluster.h"

#define SHOWINFOTIMEOUT (30.0)

@interface CESearchTVsController : UIViewController < UITableViewDelegate, UITableViewDataSource, UITabBarControllerDelegate > {
    CEVoodooTVPool *voodooTVPool;
    IBOutlet UITableView *TVsTable;
    IBOutlet UIButton *explanationButton;
    
    UITabBarController         *tabBarController;
    CEControlTVCursorCluster   *cursorCluster;
    CEControlTVDigitsCluster   *digitsCluster;
    CEControlTVPlayCluster     *playCluster;
    CEControlTVSimpleCluster   *simpleCluster;
    CEControlTVCustomCluster   *customCluster;
    CEControlTVImage           *tvImage;
    CEControlTVKeyboardCluster *keyboardCluster;
    
    CEControlTViPadCluster     *ipadCluster;
    NSInteger                   TVsInTable;
    NSTimer                    *timeoutShowInfoTimer;
    //CEControlTVDraw            *tvDrawing;
    //CEControlReverseWindow     *reverseWindow;
}

- (void)OnCEVoodooTVFound:(NSNotification*)notification;
- (void)OnCEVoodooTVLost:(NSNotification*)notification;
- (void)connectToTVAtPosition:(NSInteger)position;
- (void)startScanning;
- (void)addTVToTableView;
- (BOOL)setTabOrderIfSaved;
- (IBAction)showInfo;

@end

