//
//  CEControlTVKeyboardCluster.h
//  Remote_0.3
//
//  Created by Tim on 16/05/10.
//  Copyright 2010 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "CEVoodooTV.h"
#import "CEControlTVCursor.h"

@interface CEControlTVKeyboardCluster : UIViewController  < CEControlTVCursorActions, UITextFieldDelegate >{
    CEVoodooTV *voodooTV;
    IBOutlet UITextField *nettvTextField;
    IBOutlet CEControlTVCursor *tvCursor;
    IBOutlet UIButton *keyboardToggleButton;
    NSString *oldString;
}

@property (retain) CEVoodooTV *voodooTV;

- (BOOL)textFieldShouldReturn:(UITextField *)textField;
- (void)updateFromTextField:(id)sender;
- (void)sendString:(NSString *)theString;
- (void)sendStringCharacter:(NSString *)character;
- (IBAction)toggleTextField:(id)sender;
- (IBAction)setTextFieldKeyboardLayoutToURL:(id)sender;
- (IBAction)setTextFieldKeyboardLayoutToDefault:(id)sender;
- (IBAction)setTextFieldKeyboardLayoutToEmail:(id)sender;
- (IBAction)pressBackKey:(id)sender;

@end
