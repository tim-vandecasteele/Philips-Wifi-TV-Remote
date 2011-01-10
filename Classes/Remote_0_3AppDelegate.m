//
//  Remote_0_3AppDelegate.m
//  Remote_0.3
//
//  Created by Tim on 5/04/10.
//  Copyright __MyCompanyName__ 2010. All rights reserved.
//

#import "Remote_0_3AppDelegate.h"

@implementation Remote_0_3AppDelegate

@synthesize window;

- (BOOL)application:(UIApplication *)application didFinishLaunchingWithOptions:(NSDictionary *)launchOptions {  
    
    DFBResult ret;
    
    /* Initialize DirectFB. */
    ret = DirectFBInit( NULL, NULL );
    if (ret) {
        D_DERROR( ret, "DirectFBInit() failed!\n" );
    }
    
    searchTVsController = [[CESearchTVsController alloc] init];
    
    navigationController = [[UINavigationController alloc] init];
    navigationController.navigationBarHidden = YES;
    [navigationController pushViewController:searchTVsController animated:YES];
    
    [window addSubview:navigationController.view];
    
    [window makeKeyAndVisible];
    
    // Everything is inited, start the scanning
    [searchTVsController startScanning];
    
    
	return YES;
}


- (void)dealloc {
    [searchTVsController release];
    [navigationController release];
    [window release];
    [super dealloc];
}


@end
