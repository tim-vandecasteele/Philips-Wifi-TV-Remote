//
//  CEVoodooTVPool.h
//  Wifi TV Remote
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
