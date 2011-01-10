//
//  CESearchTVsController.m
//  Remote_0.3
//
//  Created by Tim on 11/04/10.
//  Copyright 2010 __MyCompanyName__. All rights reserved.
//

#import "CESearchTVsController.h"
#import "CEShowInfoController.h"


@implementation CESearchTVsController

 // The designated initializer.  Override if you create the controller programmatically and want to perform customization that is not appropriate for viewDidLoad.
- (id)initWithNibName:(NSString *)nibNameOrNil bundle:(NSBundle *)nibBundleOrNil {
    if ((self = [super initWithNibName:nibNameOrNil bundle:nibBundleOrNil])) {
        // Custom initialization
        self.title = @"search";
        voodooTVPool = [[CEVoodooTVPool alloc] init];
    }
    return self;
}

// Implement viewDidLoad to do additional setup after loading the view, typically from a nib.
- (void)viewDidLoad {
    [super viewDidLoad];
    TVsTable.delegate = self;
    TVsTable.dataSource = self;
    TVsInTable   = 0;
    
    tabBarController = [[UITabBarController alloc] init];
    tabBarController.delegate = self;
    
    cursorCluster   = [[CEControlTVCursorCluster alloc] init];
    digitsCluster   = [[CEControlTVDigitsCluster alloc] init];
    playCluster     = [[CEControlTVPlayCluster alloc] init];
    simpleCluster   = [[CEControlTVSimpleCluster alloc] init];
    customCluster   = [[CEControlTVCustomCluster alloc] init];
    tvImage         = [[CEControlTVImage alloc] init];
    keyboardCluster = [[CEControlTVKeyboardCluster alloc] init];
    //tvDrawing       = [[CEControlTVDraw alloc] init];
    //reverseWindow   = [[CEControlReverseWindow alloc] init];
    
    NSArray* controllers = [NSArray arrayWithObjects:simpleCluster, cursorCluster, playCluster, keyboardCluster, digitsCluster, tvImage, nil];
    tabBarController.viewControllers = controllers;
    
    [self setTabOrderIfSaved];
}

- (void)startScanning {
    timeoutShowInfoTimer = [NSTimer scheduledTimerWithTimeInterval: SHOWINFOTIMEOUT
                                                            target: self
                                                          selector: @selector(showInfo)
                                                          userInfo: nil
                                                           repeats: NO];
    [timeoutShowInfoTimer retain];
    
    [[NSNotificationCenter defaultCenter] addObserver:self selector:@selector(OnCEVoodooTVFound:) name:@"CEVoodooTVFound" object:voodooTVPool];
    [[NSNotificationCenter defaultCenter] addObserver:self selector:@selector(OnCEVoodooTVLost:) name:@"CEVoodooTVLost" object:voodooTVPool];
    [voodooTVPool startScanning];
}

- (void)OnCEVoodooTVFound:(NSNotification*)notification {
    if (timeoutShowInfoTimer != nil) {
        [timeoutShowInfoTimer invalidate];
        [timeoutShowInfoTimer release];
        timeoutShowInfoTimer = nil;
    }
    

    [self performSelectorOnMainThread:@selector(addTVToTableView) withObject:nil waitUntilDone:YES];
}

- (void)OnCEVoodooTVLost:(NSNotification*)notification {
    NSLog(@"Position %d removed\n",[[[notification userInfo] objectForKey:@"index"] intValue]);
    [self performSelectorOnMainThread:@selector(removeTVAtPosition:) withObject:[[notification userInfo] objectForKey:@"index"] waitUntilDone:YES];
}

- (void)addTVToTableView {
    NSMutableArray * updatedPaths = [[NSMutableArray alloc] initWithCapacity:1];
    //beginUpdates because we will change the amount of TVs in our table only after we add it
    [TVsTable beginUpdates];
        if (TVsInTable == 0) {
            [TVsTable insertSections:[NSIndexSet indexSetWithIndex:1] withRowAnimation:UITableViewRowAnimationNone];
        }
        // possible race condition here, best actually to put more info in the notification info
        [updatedPaths addObject:[NSIndexPath indexPathForRow:TVsInTable inSection:1]];
        [TVsTable insertRowsAtIndexPaths:updatedPaths withRowAnimation:UITableViewRowAnimationFade];
        TVsInTable++;
    [TVsTable endUpdates];
    [updatedPaths release];
    
    NSUserDefaults *myDefaultOptions = [NSUserDefaults standardUserDefaults];
    
    NSString *lastConnectedIpaddress = [myDefaultOptions stringForKey:@"lastConnectedIpaddress"];
    if ([lastConnectedIpaddress isEqual:[voodooTVPool TVAtPosition:(TVsInTable-1)].ipaddress]) {
        [self connectToTVAtPosition:(TVsInTable-1)];
    }

}

- (void)removeTVAtPosition:(NSNumber *)position {
    NSMutableArray * updatedPaths = [[NSMutableArray alloc] initWithCapacity:1];
    [position retain];
    
    //beginUpdates because we will change the amount of TVs in our table only after we add it
    [TVsTable beginUpdates];
        NSLog(@"Position %d removed\n",[position intValue]);
        [updatedPaths addObject:[NSIndexPath indexPathForRow:[position intValue] inSection:1]];
        [TVsTable deleteRowsAtIndexPaths:updatedPaths withRowAnimation:UITableViewRowAnimationNone];
        TVsInTable--;
        if (TVsInTable == 0) {
            [TVsTable deleteSections:[NSIndexSet indexSetWithIndex:1] withRowAnimation:UITableViewRowAnimationNone];
        }
    [TVsTable endUpdates];
    [updatedPaths release];
    [position release];
}

- (void)connectToTVAtPosition:(NSInteger)position {
    // connecting to the TV
    [[voodooTVPool TVAtPosition:position] connect];
    
    // saving the TV in the settings
    NSUserDefaults *myDefaultOptions = [NSUserDefaults standardUserDefaults];
    [myDefaultOptions setObject:[voodooTVPool TVAtPosition:position].ipaddress forKey:@"lastConnectedIpaddress"];
    [myDefaultOptions synchronize];
    
    // connecting all clusters to the TV
    cursorCluster.voodooTV   = [voodooTVPool TVAtPosition:position];
    digitsCluster.voodooTV   = [voodooTVPool TVAtPosition:position];
    playCluster.voodooTV     = [voodooTVPool TVAtPosition:position];
    simpleCluster.voodooTV   = [voodooTVPool TVAtPosition:position];
    customCluster.voodooTV   = [voodooTVPool TVAtPosition:position];
    tvImage.voodooTV         = [voodooTVPool TVAtPosition:position];
    keyboardCluster.voodooTV = [voodooTVPool TVAtPosition:position];
    //tvDrawing.voodooTV       = [voodooTVPool TVAtPosition:position];
    //reverseWindow.voodooTV   = [voodooTVPool TVAtPosition:position];
    tabBarController.selectedViewController = simpleCluster;
    
    
    [self.navigationController pushViewController:tabBarController animated:YES];
    [TVsTable deselectRowAtIndexPath:[NSIndexPath indexPathForRow:position inSection:1] animated:NO];    
    
}

/* START OF TABLE DELEGATE STUFF */

// DATASOURCE

- (NSInteger)tableView:(UITableView *)tableView numberOfRowsInSection:(NSInteger)section {
    if (section == 1) {
        return TVsInTable;
    }else {
        return 0;
    }
}

- (UITableViewCell *)tableView:(UITableView *)tableView cellForRowAtIndexPath:(NSIndexPath *)indexPath {
    
    static NSString *CellIdentifier = @"voodooTVCell";
    
    UITableViewCell *cell = [tableView dequeueReusableCellWithIdentifier:CellIdentifier];
    if (cell == nil) {
        cell = [[[UITableViewCell alloc] initWithStyle:UITableViewCellStyleDefault reuseIdentifier:CellIdentifier] autorelease];
    }
    
    // Set up the cell...
	cell.textLabel.text = [[voodooTVPool TVAtPosition:indexPath.row] ipaddress];
	
    return cell;
}

- (NSInteger)numberOfSectionsInTableView:(UITableView *)tableView {
    if (TVsInTable > 0) {
        return 2;
    }else {
        return 1;
    }
}

- (BOOL)setTabOrderIfSaved {
	NSUserDefaults *defaults = [NSUserDefaults standardUserDefaults];
	NSArray *savedOrder = [defaults arrayForKey:@"savedTabOrder"];
	NSMutableArray *orderedTabs = [NSMutableArray arrayWithCapacity:6];
    
	if ([savedOrder count] > 0 ) {
		for (int i = 0; i < [savedOrder count]; i++){
			for (UIViewController *aController in tabBarController.viewControllers) {
				if ([aController.title isEqualToString:[savedOrder objectAtIndex:i]]) {
					[orderedTabs addObject:aController];
				}
			}
		}
		tabBarController.viewControllers = orderedTabs;
        return true;
	}
    return false;
}

// TABLEVIEW

- (void)tableView:(UITableView *)tableView didSelectRowAtIndexPath:(NSIndexPath *)indexPath {
    [self connectToTVAtPosition:indexPath.row];
}

/* END OF TABLE DELEGATE STUFF */

- (IBAction)showInfo {
    CEShowInfoController *infoc = [[CEShowInfoController alloc] initWithNibName:@"CEShowInfoController" bundle:nil];
    
    //infoc.modalTransitionStyle = UIModalTransitionStyleFlipHorizontal;
    
    [self presentModalViewController:infoc animated:YES];
    
    [infoc release];
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

- (void)tabBarController:(UITabBarController *)tabBarController didEndCustomizingViewControllers:(NSArray *)viewControllers changed:(BOOL)changed {
    NSMutableArray *savedOrder = [NSMutableArray arrayWithCapacity:6];
    for (UIViewController *aViewController in viewControllers) {
        [savedOrder addObject:aViewController.title];
    }
    
    [[NSUserDefaults standardUserDefaults] setObject:savedOrder forKey:@"savedTabOrder"];
}


- (void)dealloc {    
    [tvImage release];
    [customCluster release];
    [simpleCluster release];
    [cursorCluster release];
    [digitsCluster release];
    [playCluster release];
    [keyboardCluster release];
    //[tvDrawing release];
    //[reverseWindow release];
    [tabBarController release];
    
    [voodooTVPool release];
    [super dealloc];
}


@end
