//
//  Remote_0_3AppDelegate.h
//  Wifi TV Remote
//

#import <UIKit/UIKit.h>
#import "CESearchTVsController.h"
#import "CEVoodooTVPool.h"
#import <directfb.h>

@interface Remote_0_3AppDelegate : NSObject <UIApplicationDelegate, UITabBarControllerDelegate> {
    UIWindow *window;
    UINavigationController     *navigationController;
    CESearchTVsController      *searchTVsController;
}

@property (nonatomic, retain) IBOutlet UIWindow *window;


@end

