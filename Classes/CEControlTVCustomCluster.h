//
//  CEControlTVCustomCluster.h
//  Remote_0.3
//
//  Created by Tim on 13/05/10.
//  Copyright 2010 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "CEVoodooTV.h"

@interface CEControlTVCustomCluster : UIViewController {
    CEVoodooTV *voodooTV;
    IBOutlet UITextField *rcCodeTxtField;
}

@property (retain) CEVoodooTV *voodooTV;

-(IBAction)sendCustomKey:(id)sender;

@end
