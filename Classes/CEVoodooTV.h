//
//  CEVoodooTV.h
//  Wifi TV Remote
//

#import <Foundation/Foundation.h>
#import <directfb.h>
#import <hotkeys.h>
#define INITIALLIFEPINGS 4

@interface CEVoodooTV : NSObject {
    NSString  *uuid;
    NSString  *name;    /* "My Philips TV" */
    NSString  *vendor;  /* "Philips Consumer Lifestyle" */
    NSString  *model;   /* "32PFL9604H/10" */
    NSString  *ipaddress;   /* "32PFL9604H/10" */
    NSInteger  lifePings;
    IDirectFB *dfb;
    IDirectFBDisplayLayer *layer;
}

@property (readonly) NSString* uuid;
@property (readonly) NSString* name;
@property (readonly) NSString* vendor;
@property (readonly) NSString* model;
@property (readonly) NSString* ipaddress;
@property (readonly) IDirectFB* dfb;
@property (readonly) IDirectFBDisplayLayer* layer;

-(id)initWithDictionary:(NSDictionary *)dictionary;
-(void)connect;
-(void)disconnect;
-(void)sendKey:(int)command;
-(void)resetPings;
-(NSInteger)lifePings;
-(void)decreaseLifePings;

@end