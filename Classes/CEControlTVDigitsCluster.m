//
//  CEControlTVDigitsCluster.m
//  Wifi TV Remote
//

#import "CEControlTVDigitsCluster.h"
#import <jslibrc_client.h>


@implementation CEControlTVDigitsCluster

@synthesize voodooTV;

 // The designated initializer.  Override if you create the controller programmatically and want to perform customization that is not appropriate for viewDidLoad.
- (id)initWithNibName:(NSString *)nibNameOrNil bundle:(NSBundle *)nibBundleOrNil {
    if ((self = [super initWithNibName:nibNameOrNil bundle:nibBundleOrNil])) {
        // Custom initialization
        self.view.backgroundColor = [[UIColor alloc] initWithPatternImage:[UIImage imageNamed:@"brushed-metal.png"]];
        
        UIImage *tabBarImage = [UIImage imageNamed:@"tabbar_digits.png"];
        self.tabBarItem = [[UITabBarItem alloc] initWithTitle:@"digits" image:tabBarImage tag:3];
        self.title = @"digits";
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

-(IBAction)pressDigit1Key:(id)sender {
    [voodooTV sendKey:rc6S0Digit1];    
}

-(IBAction)pressDigit2Key:(id)sender {
    [voodooTV sendKey:rc6S0Digit2];    
}

-(IBAction)pressDigit3Key:(id)sender {
    [voodooTV sendKey:rc6S0Digit3];    
}

-(IBAction)pressDigit4Key:(id)sender {
    [voodooTV sendKey:rc6S0Digit4];    
}

-(IBAction)pressDigit5Key:(id)sender {
    [voodooTV sendKey:rc6S0Digit5];    
}

-(IBAction)pressDigit6Key:(id)sender {
    [voodooTV sendKey:rc6S0Digit6];    
}

-(IBAction)pressDigit7Key:(id)sender {
    [voodooTV sendKey:rc6S0Digit7];    
}

-(IBAction)pressDigit8Key:(id)sender {
    [voodooTV sendKey:rc6S0Digit8];    
}

-(IBAction)pressDigit9Key:(id)sender {
    [voodooTV sendKey:rc6S0Digit9];    
}

-(IBAction)pressDigit0Key:(id)sender {
    [voodooTV sendKey:rc6S0Digit0];    
}

-(IBAction)pressRedKey:(id)sender {
    [voodooTV sendKey:rc6S0Red];    
}

-(IBAction)pressYellowKey:(id)sender {
    [voodooTV sendKey:rc6S0Yellow];    
}

-(IBAction)pressCyanKey:(id)sender {
    [voodooTV sendKey:rc6S0Cyan];    
}

-(IBAction)pressGreenKey:(id)sender {
    [voodooTV sendKey:rc6S0Green];    
}

-(IBAction)pressDotKey:(id)sender {
    [voodooTV sendKey:rc6S0Dot];
}

-(IBAction)pressTextKey:(id)sender {
    [voodooTV sendKey:rc6S0TxtSubmode];
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
