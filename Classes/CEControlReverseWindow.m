//
//  CEControlReverseWindow.m
//  Remote_0.3
//
//  Created by Tim on 31/05/10.
//  Copyright 2010 __MyCompanyName__. All rights reserved.
//

#import "CEControlReverseWindow.h"
#import <jslibrc_supply.h>
#import <direct/messages.h>

@implementation CEControlReverseWindow

@synthesize voodooTV;

static int PackRawKey( KeySource source, KeySystem system, KeyCommand command )
{
    /* NXP has knowledge of the code for the Tact Switch (this is because NXP
     needs to know whether the Tact Switch has been pressed for controlling
     the LED). NXP uses the code rawSemiPowerOff for this key. However amApp
     (and all other applications) use the rawStandby code */
    if(
       ( source == keySourceLkb ) &&
       ( system == 0 ) &&
       ( command == rawSemiPowerOff )
       )
    {
        command = rawStandby;
    }
    
    /////////////////////
    /*  0..15  command */
    /* 23..16  system  */
    /* 31..24  source  */
    /////////////////////
    return( (int)( ( ( (unsigned int)source ) << 24 ) + 
                  ( ( (unsigned int)system ) << 16 ) + 
                  ( ( (unsigned int)command ) << 0 ) ) );
}

/* DFB FUNCTIONS */

// The designated initializer.  Override if you create the controller programmatically and want to perform customization that is not appropriate for viewDidLoad.
- (id)initWithNibName:(NSString *)nibNameOrNil bundle:(NSBundle *)nibBundleOrNil {
    if ((self = [super initWithNibName:nibNameOrNil bundle:nibBundleOrNil])) {
        // Custom initialization
        UIImage *tabBarImage = [UIImage imageNamed:@"tabbar_help.png"];
        self.tabBarItem = [[UITabBarItem alloc] initWithTitle:@"manual" image:tabBarImage tag:5];
        ((CEControlReverseWindowView *)self.view).delegate = self;
        self.view.backgroundColor = [UIColor blackColor];
        resourceId = ResUIInputBufDfu;
        [tabBarImage release];
    }
    return self;
}

- (void) updateWindow:(DFBRegion)region {
    DFBRectangle rect = DFB_RECTANGLE_INIT_FROM_REGION(&region);
    
    //NSLog(@"w:%d, h:%d, pitch:%d, %p",m_resolution.w, m_resolution.h, m_pitch, [(CEControlReverseWindowView *)self.view getRawContextData]);
    
    m_scaled->SetRenderOptions( m_scaled, DSRO_SMOOTH_DOWNSCALE );
    
    m_scaled->StretchBlit( m_scaled, m_surface, NULL, NULL );
    m_scaled->Read( m_scaled, &rect, [(CEControlReverseWindowView *)self.view getRawContextData]+m_pitch*(BUFFERHEIGHT-1), -m_pitch );
    [self.view setNeedsDisplay];
}

- (void) updateWindowWithRegions:(const DFBRegion *)regions andNumRegions:(int) num_regions {
    int  i;
    
    for (i=0; i<num_regions; i++) {
        DFBRectangle rect = DFB_RECTANGLE_INIT_FROM_REGION(&regions[i]);
        
        m_scaled->Read( m_scaled, &rect, [(CEControlReverseWindowView *)self.view getRawContextData] + (m_resolution.h - rect.y - 1) * m_pitch +
                       DFB_BYTES_PER_LINE( m_format, rect.x ), - m_pitch );
    }
    [self.view setNeedsDisplay];
}

- (void) updateThread {
    NSAutoreleasePool	 *autoreleasepool = [[NSAutoreleasePool alloc] init];
    
    DFBRegion region = { 0, 0, m_resolution.w - 1, m_resolution.h - 1 };
    [[NSInvocation invocationWithTarget:self 
                   selector:@selector(updateWindow:)     
                   retainArguments:NO, region]
                   invokeOnMainThreadWaitUntilDone:YES];
    
    while (!m_update_stop) {
        DFBWindowEvent event;
        DFBUpdates     updates;
        DFBRegion      update_regions[MAX_UPDATE_REGIONS];
        unsigned int   i;
        
        m_events->WaitForEvent( m_events );
        
        dfb_updates_init( &updates, update_regions, D_ARRAY_SIZE(update_regions) );
        
        while (m_events->GetEvent( m_events, DFB_EVENT(&event) ) == DFB_OK) {
            if (event.type == DWET_UPDATE) {
                dfb_updates_add_rect( &updates, event.x, event.y, event.w, event.h );
            }
        }
        
        for (i=0; i<updates.num_regions; i++) {
            updates.regions[i] = (DFBRegion) {
                updates.regions[i].x1 * m_resolution.w / m_size.w,
                updates.regions[i].y1 * m_resolution.h / m_size.h,
                updates.regions[i].x2 * m_resolution.w / m_size.w,
                updates.regions[i].y2 * m_resolution.h / m_size.h
            };
            
            if (updates.regions[i].x1 > 0)
                updates.regions[i].x1--;
            
            if (updates.regions[i].y1 > 0)
                updates.regions[i].y1--;
            
            if (updates.regions[i].x2 < m_resolution.w - 1)
                updates.regions[i].x2++;
            
            if (updates.regions[i].y2 < m_resolution.h - 1)
                updates.regions[i].y2++;
            
            m_scaled->SetClip( m_scaled, &updates.regions[i] );
            
            m_scaled->StretchBlit( m_scaled, m_surface, NULL, NULL );
        }
        
        [[NSInvocation invocationWithTarget:self 
                                   selector:@selector(updateWindowWithRegions:andNumRegions:)     
                            retainArguments:NO, updates.regions, updates.num_regions]
         invokeOnMainThreadWaitUntilDone:YES];
        
        dfb_updates_deinit( &updates );
    }
    
    [autoreleasepool release];
    
}

/* END DFB FUNCTIONS */

- (void)viewDidAppear:(BOOL)animated {
    IDirectFBDisplayLayer *layer;
    DFBResult              ret;
    DFBSurfaceDescription  desc;
    
    voodooTV.dfb->GetDisplayLayer( voodooTV.dfb, DLID_PRIMARY, &layer );
    
    ret = layer->GetWindowByResourceID( layer, resourceId,  &m_window);
    if (ret) {
        D_DERROR( ret, "Window/View: IDirectFBDisplayLayer::GetWindowByResourceID() failed!\n" );
        return;
    }
    
    ret = m_window->GetSurface( m_window, &m_surface );
    if (ret) {
        D_DERROR( ret, "Window/View: IDirectFBWindow::GetSurface() failed!\n" );
    }
    
    m_surface->GetSize( m_surface, &m_size.w, &m_size.h );
    m_surface->GetPixelFormat( m_surface, &m_format );
    
    m_pitch = BUFFERWIDTH*4;
    
    if (m_format != DSPF_ARGB) { // normal UI buffer
        /* 32 bit  ARGB (4 byte, alpha 8@24, red 8@16, green 8@8, blue 8@0) */
        D_DERROR( ret, "Format is not the expected DSPF_ARGB!\n" );
    }
    if (m_format != DSPF_RGB16) { // teletext
        /* 16 bit   RGB (2 byte, red 5@11, green 6@5, blue 5@0) */
        D_DERROR( ret, "Format is DSPF_RGB16!\n" );
        
    }
    m_resolution.w = BUFFERWIDTH;
    //m_resolution.h = BUFFERHEIGHT;
    
    if (!m_resolution.w) {
        if (!m_resolution.h) {
            m_resolution.w = m_size.w;
            m_resolution.h = m_size.h;
        }
        else {
            m_resolution.w = m_resolution.h * m_size.w / m_size.h;
        }
    }
    else if (!m_resolution.h)
        m_resolution.h = m_resolution.w * m_size.h / m_size.w;
    
    desc.flags       = DSDESC_WIDTH | DSDESC_HEIGHT | DSDESC_PIXELFORMAT;
    desc.width       = m_resolution.w;
    desc.height      = m_resolution.h;
    desc.pixelformat = m_format;
    
    ret = voodooTV.dfb->CreateSurface( voodooTV.dfb, &desc, &m_scaled );
    if (ret) {
        D_DERROR( ret, "SaWMan/Updates: IDirectFB::CreateSurface() failed!\n" );
    }
    
    m_window->CreateEventBuffer( m_window, &m_events );
    [NSThread detachNewThreadSelector:@selector(updateThread) toTarget:self withObject:nil];
}

/* cursor movements */
/* Cursor Protocol */

- (void)swipeRight {
    DFBWindowEvent evt;
    
    evt.type       = DWET_KEYDOWN;
    evt.flags      = DWEF_NONE;
    evt.key_code   = PackRawKey( keySourceRc6, 0, rc6S0StepDown );
    evt.key_symbol = DIKS_NULL;
    
    m_window->SendEvent( m_window, &evt );
    
    evt.type       = DWET_KEYUP;
    evt.flags      = DWEF_NONE;
    evt.key_code   = PackRawKey( keySourceRc6, 0, rc6S0StepDown );
    evt.key_symbol = DIKS_NULL;
    
    m_window->SendEvent( m_window, &evt );
}

- (void)swipeLeft {
    DFBWindowEvent evt;
    
    evt.type       = DWET_KEYDOWN;
    evt.flags      = DWEF_NONE;
    evt.key_code   = PackRawKey( keySourceRc6, 0, rc6S0StepUp );
    evt.key_symbol = DIKS_NULL;
    
    m_window->SendEvent( m_window, &evt );
    
    evt.type       = DWET_KEYUP;
    evt.flags      = DWEF_NONE;
    evt.key_code   = PackRawKey( keySourceRc6, 0, rc6S0StepUp );
    evt.key_symbol = DIKS_NULL;
    
    m_window->SendEvent( m_window, &evt );
}

- (void)swipeUp {
    DFBWindowEvent evt;
    
    evt.type       = DWET_KEYDOWN;
    evt.flags      = DWEF_NONE;
    evt.key_code   = PackRawKey( keySourceRc6, 0, rc6S0StepRight );
    evt.key_symbol = DIKS_NULL;
    
    m_window->SendEvent( m_window, &evt );
    
    evt.type       = DWET_KEYUP;
    evt.flags      = DWEF_NONE;
    evt.key_code   = PackRawKey( keySourceRc6, 0, rc6S0StepRight );
    evt.key_symbol = DIKS_NULL;
    
    m_window->SendEvent( m_window, &evt );
}

- (void)swipeDown {
    DFBWindowEvent evt;
    
    evt.type       = DWET_KEYDOWN;
    evt.flags      = DWEF_NONE;
    evt.key_code   = PackRawKey( keySourceRc6, 0, rc6S0StepLeft );
    evt.key_symbol = DIKS_NULL;
    
    m_window->SendEvent( m_window, &evt );
    
    evt.type       = DWET_KEYUP;
    evt.flags      = DWEF_NONE;
    evt.key_code   = PackRawKey( keySourceRc6, 0, rc6S0StepLeft );
    evt.key_symbol = DIKS_NULL;
    
    m_window->SendEvent( m_window, &evt );
}

- (void)tap {
    DFBWindowEvent evt;
    
    evt.type       = DWET_KEYDOWN;
    evt.flags      = DWEF_NONE;
    evt.key_code   = PackRawKey( keySourceRc6, 0, rc6S0Acknowledge );
    evt.key_symbol = DIKS_NULL;
    
    m_window->SendEvent( m_window, &evt );
    
    evt.type       = DWET_KEYUP;
    evt.flags      = DWEF_NONE;
    evt.key_code   = PackRawKey( keySourceRc6, 0, rc6S0Acknowledge );
    evt.key_symbol = DIKS_NULL;
    
    m_window->SendEvent( m_window, &evt );
}

- (void) setResourceId:(NSInteger)localResourceId {
    resourceId = localResourceId;
}

- (void)didReceiveMemoryWarning {
    // Releases the view if it doesn't have a superview.
    [super didReceiveMemoryWarning];
    
    // Release any cached data, images, etc that aren't in use.
}

- (void)viewDidUnload {
    [super viewDidUnload];
    // Release any retained subviews of the main view.
    // e.g. self.myOutlet = nil;
}


- (void)dealloc {
    [super dealloc];
}


@end
