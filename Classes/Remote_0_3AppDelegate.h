//
//  Remote_0_3AppDelegate.h
//  Remote_0.3
//
//  Created by Tim on 5/04/10.
//  Copyright __MyCompanyName__ 2010. All rights reserved.
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

