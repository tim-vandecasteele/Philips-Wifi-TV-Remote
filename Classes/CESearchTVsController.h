//
//  CESearchTVsController.h
//  Remote_0.3
//
//  Created by Tim on 11/04/10.
//  Copyright 2010 __MyCompanyName__. All rights reserved.
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

#define SHOWINFOTIMEOUT (30.0)

@interface CESearchTVsController : UIViewController < UITableViewDelegate, UITableViewDataSource, UITabBarControllerDelegate > {
    CEVoodooTVPool *voodooTVPool;
    IBOutlet UITableView *TVsTable;
    IBOutlet UILabel *labelTVsFound;
    
    UITabBarController         *tabBarController;
    CEControlTVCursorCluster   *cursorCluster;
    CEControlTVDigitsCluster   *digitsCluster;
    CEControlTVPlayCluster     *playCluster;
    CEControlTVSimpleCluster   *simpleCluster;
    CEControlTVCustomCluster   *customCluster;
    CEControlTVImage           *tvImage;
    CEControlTVKeyboardCluster *keyboardCluster;
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

