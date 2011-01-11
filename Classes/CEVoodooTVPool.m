//
//  CEVoodooTV.m
//  Wifi TV Remote
//

#import "CEVoodooTVPool.h"
#import <unistd.h>

NSLock *tvPoolLock;

@implementation CEVoodooTVPool

static DirectEnumerationResult
player_callback( void                   *ctx,
                const VoodooPlayInfo    *info,
                const VoodooPlayVersion *version,
                const char              *address )
{   
    if( strcmp(info->name,"PhilipsTV") == 0 ) {
        if ( ![(CEVoodooTVPool *)ctx containsTVWithAddress:address] ){
            NSArray *objects = [NSArray arrayWithObjects:[NSString stringWithUTF8String:info->name],
                                                         [NSString stringWithUTF8String:info->vendor],
                                                         [NSString stringWithUTF8String:info->model],
                                                         [NSString stringWithUTF8String:address],nil];
            
            NSArray *keys = [NSArray arrayWithObjects:@"name", @"vendor", @"model", @"ipaddress", nil];
            NSDictionary *dictionary = [NSDictionary dictionaryWithObjects:objects forKeys:keys];
    
            [(CEVoodooTVPool *)ctx TVFoundWithOptions:(NSDictionary *)dictionary ];
        } else {
            [[(CEVoodooTVPool *)ctx TVWithAddress:address] resetPings];
        }

    }

    return DENUM_OK;
}

- (id)init 
{
	// allow superclass to initialize its state first
	if (self = [super init]) { 
        tvPool = [[NSMutableDictionary alloc] init];
        tvPoolAddresses = [[NSMutableArray alloc] init];
	}
	
	return self;
}

- (void) startScanning{
    [NSThread detachNewThreadSelector:@selector(scan) toTarget:self withObject:nil];
}

- (void) scan{
    do {
        NSAutoreleasePool	 *autoreleasepool = [[NSAutoreleasePool alloc] init];
        DFBResult ret;
        // I have to destroy the player because he remembers all the TVs he found, also the ones
        // that are not responding (have to consider to fix this in the player).
		
        ret = voodoo_player_create( NULL, &player );
        if (ret) {
            D_ERROR( "Voodoo/Play: Could not create the player (%s)!\n", DirectFBErrorString(ret) );
        }
        
        voodoo_player_broadcast( player );
        
        usleep( 1000000 );       
        voodoo_player_enumerate( player, (VoodooPlayerCallback) player_callback, (void*) self );
        [tvPoolLock lock];
            NSEnumerator *enumerator = [tvPool keyEnumerator];
            for(NSString *anipaddress in enumerator){
                [[tvPool valueForKey:anipaddress] decreaseLifePings];
                if([[tvPool valueForKey:anipaddress] lifePings] == 0){
                    [NSThread detachNewThreadSelector:@selector(TVLostWithAddress:) toTarget:self withObject:anipaddress];
                }
            }
        [tvPoolLock unlock];
        [autoreleasepool release];
        voodoo_player_destroy( player );
    } while (true);
}

- (void) TVFoundWithOptions:(NSDictionary *)dictionary{
    [dictionary retain];
    
    CEVoodooTV *voodooTV = [[CEVoodooTV alloc] initWithDictionary:dictionary];
    [tvPool setObject:voodooTV forKey:[dictionary objectForKey:@"ipaddress"]];
    [tvPoolAddresses addObject:[dictionary objectForKey:@"ipaddress"]];
    
    [[NSNotificationCenter defaultCenter] postNotificationName:@"CEVoodooTVFound" object:self];
    
    [dictionary release];
}

- (void) TVLostWithAddress:(NSString *)ipaddress{
    NSAutoreleasePool	 *autoreleasepool = [[NSAutoreleasePool alloc] init];
    
    [tvPoolLock lock];
        NSNumber *position = [NSNumber numberWithInt:[tvPoolAddresses indexOfObject:[[tvPool objectForKey:ipaddress] ipaddress]]];
        NSDictionary* dict = [NSDictionary dictionaryWithObject:position forKey:@"index"];
    
        [[NSNotificationCenter defaultCenter] postNotificationName:@"CEVoodooTVLost" object:self userInfo: dict];
    
        [tvPoolAddresses removeObject:[[tvPool objectForKey:ipaddress] ipaddress]]; 
        [tvPool removeObjectForKey:ipaddress];
    [tvPoolLock unlock];
    [autoreleasepool release];
}

- (BOOL) containsTVWithAddress:(const char *)ipaddress{
    return [tvPool objectForKey:[NSString stringWithUTF8String:ipaddress]]!=nil ;
}

- (CEVoodooTV *) TVWithAddress:(const char *)ipaddress{
    return [tvPool objectForKey:[NSString stringWithUTF8String:ipaddress]];    
}

- (CEVoodooTV *) TVAtPosition:(NSInteger)position{
    if (position < [self amountOfTVsInPool] && position >= 0) {
        return [tvPool objectForKey:[tvPoolAddresses objectAtIndex:position]];
    }else {
        return  nil;
    }
}

- (NSUInteger) amountOfTVsInPool{
    return [tvPool count]; 
}

- (void) dealloc
{
    voodoo_player_destroy(player);
    for (id key in tvPool) {
        [[tvPool objectForKey:key] release];
    }
    [tvPool release];
    [tvPoolAddresses release];
    [super dealloc];
}

@end
