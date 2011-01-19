//
//  CEControlTVCursorCluster.m
//  Wifi TV Remote
//

#import "CEControlTVCursorCluster.h"
#import <jslibrc_client.h>


@implementation CEControlTVCursorCluster

@synthesize voodooTV;

 // The designated initializer.  Override if you create the controller programmatically and want to perform customization that is not appropriate for viewDidLoad.
- (id)initWithNibName:(NSString *)nibNameOrNil bundle:(NSBundle *)nibBundleOrNil {
    if ((self = [super initWithNibName:nibNameOrNil bundle:nibBundleOrNil])) {
        // Custom initialization
        self.view.backgroundColor = [[UIColor alloc] initWithPatternImage:[UIImage imageNamed:@"brushed-metal.png"]];
        
        UIImage *tabBarImage = [UIImage imageNamed:@"tabbar_menu.png"];
        self.tabBarItem = [[UITabBarItem alloc] initWithTitle:@"menu" image:tabBarImage tag:3];
        self.title = @"menu";
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

-(IBAction)pressHomeKey:(id)sender {
    [voodooTV sendKey:rc6S0MenuOn];
}

-(IBAction)pressPowerKey:(id)sender {
    [voodooTV sendKey:rc6S0Standby];    
}
-(IBAction)pressNextKey:(id)sender {
    [voodooTV sendKey:rc6S0Next];
}

-(IBAction)pressPrevKey:(id)sender {
    [voodooTV sendKey:rc6S0Previous];
}

-(IBAction)pressBackKey:(id)sender {
    [voodooTV sendKey:rc6S0PreviousProgram];
}

-(IBAction)pressOptionsKey:(id)sender {
    [voodooTV sendKey:64];
}

-(IBAction)pressBrowseKey:(id)sender {
    [voodooTV sendKey:rc6S0EpgGuide];
}

-(IBAction)pressExperienceKey:(id)sender {
    [voodooTV sendKey:144];
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
