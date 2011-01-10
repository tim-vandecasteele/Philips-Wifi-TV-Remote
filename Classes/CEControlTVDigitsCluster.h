//
//  CEControlTVDigitsCluster.h
//  Remote_0.3
//
//  Created by Tim on 28/04/10.
//  Copyright 2010 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "CEVoodooTV.h"


@interface CEControlTVDigitsCluster : UIViewController {
    CEVoodooTV *voodooTV;
}

@property (retain) CEVoodooTV *voodooTV;

-(IBAction)pressDigit1Key:(id)sender;
-(IBAction)pressDigit2Key:(id)sender;
-(IBAction)pressDigit3Key:(id)sender;
-(IBAction)pressDigit4Key:(id)sender;
-(IBAction)pressDigit5Key:(id)sender;
-(IBAction)pressDigit6Key:(id)sender;
-(IBAction)pressDigit7Key:(id)sender;
-(IBAction)pressDigit8Key:(id)sender;
-(IBAction)pressDigit9Key:(id)sender;
-(IBAction)pressDigit0Key:(id)sender;
-(IBAction)pressRedKey:(id)sender;
-(IBAction)pressYellowKey:(id)sender;
-(IBAction)pressCyanKey:(id)sender;
-(IBAction)pressGreenKey:(id)sender;
-(IBAction)pressDotKey:(id)sender;
-(IBAction)pressTextKey:(id)sender;

@end
