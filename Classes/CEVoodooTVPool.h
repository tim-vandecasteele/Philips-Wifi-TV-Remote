//
//  CEVoodooTVPool.h
//  Remote_0.3
//
//  Created by Tim on 10/04/10.
//  Copyright 2010 __MyCompanyName__. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <voodoo/play.h>
#import "CEVoodooTV.h"
#import <directfb.h>

@interface CEVoodooTVPool : NSObject {
    VoodooPlayer *player;
    NSMutableDictionary *tvPool;
    NSMutableArray *tvPoolAddresses;
}

- (id) init;
- (void) startScanning;
- (void) scan;
- (void) TVFoundWithOptions:(NSDictionary *)dictionary;
- (void) TVLostWithAddress:(NSString *)ipaddress;
- (BOOL) containsTVWithAddress:(const char *)ipaddress;
- (NSUInteger) amountOfTVsInPool;
- (CEVoodooTV *) TVWithAddress:(const char *)ipaddress;
- (CEVoodooTV *) TVAtPosition:(NSInteger)position;

@end
