//
//  CEControlTVPlayCluster.m
//  Wifi TV Remote
//

#import "CEControlTVPlayCluster.h"
#import <jslibrc_supply.h>


@implementation CEControlTVPlayCluster

@synthesize voodooTV;

// The designated initializer.  Override if you create the controller programmatically and want to perform customization that is not appropriate for viewDidLoad.
- (id)initWithNibName:(NSString *)nibNameOrNil bundle:(NSBundle *)nibBundleOrNil {
    if ((self = [super initWithNibName:nibNameOrNil bundle:nibBundleOrNil])) {
        // Custom initialization
        self.view.backgroundColor = [[UIColor alloc] initWithPatternImage:[UIImage imageNamed:@"brushed-metal.png"]];
        
        UIImage *tabBarImage = [UIImage imageNamed:@"tabbar_play.png"];
        self.tabBarItem = [[UITabBarItem alloc] initWithTitle:@"play" image:tabBarImage tag:3];
        self.title = @"play";
        [tabBarImage release];     
    }
    return self;
}

// Implement viewDidLoad to do additional setup after loading the view, typically from a nib.
- (void)viewDidLoad {
    [super viewDidLoad];
    tvCursor.backgroundColor = [UIColor clearColor];
    tvCursor.opaque = NO;
    tvCursor.cursorDelegate = self;
}

/*
// Override to allow orientations other than the default portrait orientation.
- (BOOL)shouldAutorotateToInterfaceOrientation:(UIInterfaceOrientation)interfaceOrientation {
    // Return YES for supported orientations
    return (interfaceOrientation == UIInterfaceOrientationPortrait);
}
*/

-(IBAction)pressNetTVKey:(id)sender {
    [voodooTV sendKey:rc6S0DisplayBrowser];
}

-(IBAction)pressNextKey:(id)sender {
    [voodooTV sendKey:rc6S0Next];
}

-(IBAction)pressPrevKey:(id)sender {
    [voodooTV sendKey:rc6S0Previous];
}

-(IBAction)pressFastBackwardKey:(id)sender {
    [voodooTV sendKey:rc6S0ScanReverse];
}

-(IBAction)pressFastForwardKey:(id)sender {
    [voodooTV sendKey:rc6S0FastForward];
}

-(IBAction)pressStopKey:(id)sender {
    [voodooTV sendKey:rc6S0Stop];
}

-(IBAction)pressPlayPauseKey:(id)sender {
    [voodooTV sendKey:44];    
}

-(IBAction)pressPowerKey:(id)sender {
    [voodooTV sendKey:rc6S0Standby];
}

/* Cursor Protocol */

- (void)swipeRight {
    [voodooTV sendKey:rc6S0StepRight];
}

- (void)swipeLeft {
    [voodooTV sendKey:rc6S0StepLeft];
}

- (void)swipeUp {
    [voodooTV sendKey:rc6S0StepUp];
}

- (void)swipeDown {
    [voodooTV sendKey:rc6S0StepDown];
}

- (void)tap {
    [voodooTV sendKey:rc6S0Acknowledge];
}

/* End Cursor Protocol */

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
    [tvCursor release];
    [voodooTV release];
    [super dealloc];
}


@end
