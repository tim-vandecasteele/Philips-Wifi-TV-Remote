//
//  CEControlTVSimpleCluster.m
//  Wifi TV Remote
//

#import "CEControlTVSimpleCluster.h"
#import <jslibrc_supply.h>


@implementation CEControlTVSimpleCluster

@synthesize voodooTV;

 // The designated initializer.  Override if you create the controller programmatically and want to perform customization that is not appropriate for viewDidLoad.
- (id)initWithNibName:(NSString *)nibNameOrNil bundle:(NSBundle *)nibBundleOrNil {
    if ((self = [super initWithNibName:nibNameOrNil bundle:nibBundleOrNil])) {
        // Custom initialization
        self.view.backgroundColor = [[UIColor alloc] initWithPatternImage:[UIImage imageNamed:@"brushed-metal.png"]];
        
        UIImage *tabBarImage = [UIImage imageNamed:@"tabbar_basic.png"];
        self.tabBarItem = [[UITabBarItem alloc] initWithTitle:@"basic" image:tabBarImage tag:1];
        self.title = @"basic";
        [tabBarImage release];     
    }
    return self;
}

/*
// Implement viewDidLoad to do additional setup after loading the view, typically from a nib.
- (void)viewDidLoad {
    [super viewDidLoad];
}
*/

/*
// Override to allow orientations other than the default portrait orientation.
- (BOOL)shouldAutorotateToInterfaceOrientation:(UIInterfaceOrientation)interfaceOrientation {
    // Return YES for supported orientations
    return (interfaceOrientation == UIInterfaceOrientationPortrait);
}
*/

-(IBAction)pressVolumeUp:(id)sender {
    [voodooTV sendKey:rc6S0VolumeUp]; 
}

-(IBAction)pressVolumeDown:(id)sender {
    [voodooTV sendKey:rc6S0VolumeDown]; 
}

-(IBAction)pressChannelUp:(id)sender {
    [voodooTV sendKey:rc6S0Next]; 
}

-(IBAction)pressChannelDown:(id)sender {
    [voodooTV sendKey:rc6S0Previous]; 
}

-(IBAction)pressPowerKey:(id)sender {
    [voodooTV sendKey:rc6S0Standby]; 
}

-(IBAction)pressMuteKey:(id)sender {
    [voodooTV sendKey:rc6S0MuteDemute]; 
}

// go back to TVs
-(IBAction)goBack:(id)sender {
    [voodooTV disconnect];
    [self.navigationController popViewControllerAnimated:YES];
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
    [voodooTV release];
    [super dealloc];
}


@end
