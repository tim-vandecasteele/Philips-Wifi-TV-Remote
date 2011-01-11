//
//  CEVoodooTV.m
//  Wifi TV Remote
//

#import "CEVoodooTV.h"
#import <jslibrc_supply.h>
#import <hotkeys.h>

@implementation CEVoodooTV

extern IDirectFB *idirectfb_singleton;

@synthesize uuid;
@synthesize name;
@synthesize vendor;
@synthesize model;
@synthesize ipaddress;
@synthesize dfb;
@synthesize layer;

-(id)initWithDictionary:(NSDictionary *)dictionary {
    // allow superclass to initialize its state first
	if (self = [super init]) { 
        for (NSString *key in dictionary) {
            if ([key isEqualToString:@"uuid"]) {
                uuid = [[NSString stringWithString:(NSString *)[dictionary objectForKey:key]] retain];
            }else if ([key isEqualToString:@"name"]) {
                name = [[NSString stringWithString:(NSString *)[dictionary objectForKey:key]] retain];
            }else if ([key isEqualToString:@"vendor"]) {
                vendor = [[NSString stringWithString:(NSString *)[dictionary objectForKey:key]] retain];
            }else if ([key isEqualToString:@"model"]) {
                model = [[NSString stringWithString:(NSString *)[dictionary objectForKey:key]] retain];
            }else if ([key isEqualToString:@"ipaddress"]) {
                ipaddress = [[NSString stringWithString:(NSString *)[dictionary objectForKey:key]] retain];
            }
        }
        lifePings = INITIALLIFEPINGS;
        layer = NULL;
	}
	
	return self;
}

-(IDirectFBDisplayLayer* ) layer{
    if (layer == NULL) {
        DFBResult ret;
        ret = DirectFBCreate( &dfb );
        if (ret) {
            DirectFBErrorFatal( "DirectFBCreate failed!\n", ret );
        }
        
        self.dfb->GetDisplayLayer( self.dfb, DLID_PRIMARY, &layer );        
    }
    return layer;
}

- (void)connect {
    DFBResult ret;
    
    ret = DirectFBSetOption( "remote", [ipaddress UTF8String] );

    if (ret) {
        DirectFBErrorFatal( "DirectFBSetOption failed!\n", ret );
    }
    
    jslibrc_Init( NULL, NULL, NULL );
}

- (void)disconnect {
    layer = NULL;
    jslibrc_Exit();
    if(dfb != NULL){
        dfb->Release(dfb);
    }
}

- (void)resetPings {
    lifePings = INITIALLIFEPINGS;
}

-(NSInteger)lifePings {
    return lifePings;
}

-(void)decreaseLifePings {
    //lifePings = lifePings - 1;
}

- (void)sendKey:(int)command {
    jslibrc_KeyDown( keySourceRc6, 0, command );
    jslibrc_KeyUp( keySourceRc6, 0, command );
}

- (void) dealloc {
    layer = NULL;
    jslibrc_Exit();
    if(dfb != NULL){
        dfb->Release(dfb);
    }
    [uuid release];
    [name release];
    [vendor release];
    [model release];
    [ipaddress release];
    [super dealloc];
}

@end
