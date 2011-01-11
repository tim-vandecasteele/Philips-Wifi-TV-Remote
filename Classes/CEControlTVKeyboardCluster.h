//
//  CEControlTVKeyboardCluster.h
//  Wifi TV Remote
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
