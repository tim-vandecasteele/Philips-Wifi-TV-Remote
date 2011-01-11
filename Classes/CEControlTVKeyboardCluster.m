//
//  CEControlTVKeyboardCluster.m
//  Wifi TV Remote
//

#import "CEControlTVKeyboardCluster.h"
#import <jslibrc_supply.h>

#define DELAYBETWEENKEYPRESSES 10000 // 100000 = 100ms

static NSDictionary *translationTable2k9 = nil;
static NSDictionary *translationTable2k10 = nil;

@implementation CEControlTVKeyboardCluster

@synthesize voodooTV;

+ (void) initialize {
    // translationTable is a class constant
    if (!translationTable2k10) {
        translationTable2k10 = [NSDictionary dictionaryWithObjectsAndKeys:
                            @"2",          @"a", 
                            @"22",         @"b", 
                            @"222",        @"c", 
                            @"2222",       @"2", 
                            @"22222",      @"A", 
                            @"222222",     @"B", 
                            @"2222222",    @"C",
                            @"3",          @"d",
                            @"33",         @"e",
                            @"333",        @"f",
                            @"3333",       @"3",
                            @"33333",      @"D",
                            @"333333",     @"E",
                            @"3333333",    @"F",
                            @"4",          @"g",
                            @"44",         @"h",
                            @"444",        @"i",
                            @"4444",       @"4",
                            @"44444",      @"G",
                            @"444444",     @"H",
                            @"4444444",    @"I",
                            @"5",          @"j",
                            @"55",         @"k",
                            @"555",        @"l",
                            @"5555",       @"5",
                            @"55555",      @"J",
                            @"555555",     @"K",
                            @"5555555",    @"L",
                            @"6",          @"m",
                            @"66",         @"n",
                            @"666",        @"o",
                            @"6666",       @"6",
                            @"66666",      @"M",
                            @"666666",     @"N",
                            @"6666666",    @"O",
                            @"7",          @"p",
                            @"77",         @"q",
                            @"777",        @"r",
                            @"7777",       @"s",
                            @"77777",      @"7",
                            @"777777",     @"P",
                            @"7777777",    @"Q",
                            @"77777777",   @"R",
                            @"777777777",  @"S",
                            @"8",          @"t",
                            @"88",         @"u",
                            @"888",        @"v",
                            @"8888",       @"8",
                            @"88888",      @"T",
                            @"888888",     @"U",
                            @"8888888",    @"V",
                            @"9",          @"w",
                            @"99",         @"x",
                            @"999",        @"y",
                            @"9999",       @"z",
                            @"99999",      @"9",
                            @"999999",     @"W",
                            @"9999999",    @"X",
                            @"99999999",   @"Y",
                            @"999999999",  @"Z",
                            @"0",          @" ",
                            //@"00",         @"", //this is the enter key
                            @"000",         @"0",
                            @"1",                                  @".",
                            @"11",                                 @"-",
                            @"111",                                @"/",
                            @"1111",                               @"@",
                            @"11111",                              @"1",
                            @"111111",                             @",",
                            @"1111111",                            @"'",
                            @"11111111",                           @"?",
                            @"111111111",                          @"!",
                            @"1111111111",                         @"\"",
                            @"11111111111",                        @"(",
                            @"111111111111",                       @")",
                            @"1111111111111",                      @":",
                            @"11111111111111",                     @"_",
                            @"111111111111111",                    @";",
                            @"1111111111111111",                   @"+",
                            @"11111111111111111",                  @"&",
                            @"111111111111111111",                 @"%",
                            @"1111111111111111111",                @"*",
                            @"11111111111111111111",               @"=",
                            @"111111111111111111111",              @"<",
                            @"1111111111111111111111",             @">",
                            @"11111111111111111111111",            @"€",
                            @"111111111111111111111111",           @"£",
                            @"1111111111111111111111111",          @"$",
                            @"11111111111111111111111111",         @"[",
                            @"111111111111111111111111111",        @"]",
                            @"1111111111111111111111111111",       @"{",
                            @"11111111111111111111111111111",      @"}",
                            @"111111111111111111111111111111",     @"\\",
                            @"1111111111111111111111111111111",    @"~",
                            @"11111111111111111111111111111111",   @"^",
                            //@"111111111111111111111111111111111",   @"'",
                            @"1111111111111111111111111111111111",   @"#",
                            @"11111111111111111111111111111111111",   @"|",
                            
                            nil];
        [translationTable2k10 retain];
        if (!translationTable2k9) {
            translationTable2k9 = [NSDictionary dictionaryWithObjectsAndKeys:
                                @"2",          @"a", 
                                @"22",         @"b", 
                                @"222",        @"c", 
                                @"2222",       @"2", 
                                @"22222",      @"A", 
                                @"222222",     @"B", 
                                @"2222222",    @"C",
                                @"22222222",   @"\"",
                                @"222222222",  @"'",
                                @"2222222222", @"~",
                                @"3",          @"d",
                                @"33",         @"e",
                                @"333",        @"f",
                                @"3333",       @"3",
                                @"33333",      @"D",
                                @"333333",     @"E",
                                @"3333333",    @"F",
                                @"33333333",   @"#",
                                @"333333333",  @"$",
                                @"3333333333", @"%",
                                @"4",          @"g",
                                @"44",         @"h",
                                @"444",        @"i",
                                @"4444",       @"4",
                                @"44444",      @"G",
                                @"444444",     @"H",
                                @"4444444",    @"I",
                                @"44444444",   @"[",
                                @"444444444",  @"]",
                                @"5",          @"j",
                                @"55",         @"k",
                                @"555",        @"l",
                                @"5555",       @"5",
                                @"55555",      @"J",
                                @"555555",     @"K",
                                @"5555555",    @"L",
                                @"55555555",   @"{",
                                @"555555555",  @"}",
                                @"6",          @"m",
                                @"66",         @"n",
                                @"666",        @"o",
                                @"6666",       @"6",
                                @"66666",      @"M",
                                @"666666",     @"N",
                                @"6666666",    @"O",
                                @"66666666",   @"|",
                                @"666666666",  @"\\",
                                @"7",          @"p",
                                @"77",         @"q",
                                @"777",        @"r",
                                @"7777",       @"s",
                                @"77777",      @"7",
                                @"777777",     @"P",
                                @"7777777",    @"Q",
                                @"77777777",   @"R",
                                @"777777777",  @"S",
                                @"8",          @"t",
                                @"88",         @"u",
                                @"888",        @"v",
                                @"8888",       @"8",
                                @"88888",      @"T",
                                @"888888",     @"U",
                                @"8888888",    @"V",
                                @"9",          @"w",
                                @"99",         @"x",
                                @"999",        @"y",
                                @"9999",       @"z",
                                @"99999",      @"9",
                                @"999999",     @"W",
                                @"9999999",    @"X",
                                @"99999999",   @"Y",
                                @"999999999",  @"Z",
                                @"0",          @".",
                                @"00",         @"@",
                                @"000",        @",",
                                @"0000",       @"0",
                                @"00000",      @"?",
                                @"000000",     @"!",
                                @"0000000",    @":",
                                @"00000000",   @";",
                                @"000000000",  @"<",
                                @"0000000000", @"=",
                                @"00000000000",@">",
                                @"1",          @" ",
                                @"11",         @"_",
                                @"111",        @"-",
                                @"1111",       @"1",
                                @"11111",      @"/",
                                @"111111",     @"+",
                                @"1111111",    @"*",
                                @"11111111",   @"(",
                                @"111111111",  @")",
                                @"1111111111",  @"&",
                                nil];
            [translationTable2k9 retain];
        }
    }
}

// The designated initializer.  Override if you create the controller programmatically and want to perform customization that is not appropriate for viewDidLoad.
- (id)initWithNibName:(NSString *)nibNameOrNil bundle:(NSBundle *)nibBundleOrNil {
    if ((self = [super initWithNibName:nibNameOrNil bundle:nibBundleOrNil])) {
        // Custom initialization
        self.view.backgroundColor = [[UIColor alloc] initWithPatternImage:[UIImage imageNamed:@"brushed-metal.png"]];
        
        UIImage *tabBarImage = [UIImage imageNamed:@"tabbar_keyboard.png"];
        self.tabBarItem = [[UITabBarItem alloc] initWithTitle:@"keyboard" image:tabBarImage tag:5];
        self.title = @"keyboard";
        [tabBarImage release];
    }
    return self;
}

// Implement viewDidLoad to do additional setup after loading the view, typically from a nib.
- (void)viewDidLoad {
    [super viewDidLoad];
    nettvTextField.autocorrectionType = UITextAutocorrectionTypeNo;
    [nettvTextField addTarget:self action:@selector(updateFromTextField:) forControlEvents:UIControlEventEditingChanged];
    tvCursor.cursorDelegate = self;
}

- (void)viewDidAppear:(BOOL)animated {
    // do stuff here
    nettvTextField.text = @"";
    [nettvTextField becomeFirstResponder];
    oldString = @"";
}

/*
// Override to allow orientations other than the default portrait orientation.
- (BOOL)shouldAutorotateToInterfaceOrientation:(UIInterfaceOrientation)interfaceOrientation {
    // Return YES for supported orientations
    return (interfaceOrientation == UIInterfaceOrientationPortrait);
}
*/

- (void)updateFromTextField:(id)sender {
    UITextField *textfield = (UITextField *)sender;
    if ([oldString length] < [textfield.text length]) {
        NSInteger startRange;
        if ([oldString length]-1 >= 0) {
            startRange = [oldString length];
        }else {
            startRange = 0;
        }
        NSInteger lengthRange = [textfield.text length] - [oldString length];
        [self sendString:[textfield.text substringWithRange:NSMakeRange(startRange,lengthRange)]];
    }else if ([oldString length] > [textfield.text length]) {
        [voodooTV sendKey:rc6S0PreviousProgram];
    }else {
        [voodooTV sendKey:rc6S0PreviousProgram];
    }

    [oldString release];
    oldString = [textfield.text retain];
}

- (void)sendString:(NSString *)theString {
    [theString retain];
    
    NSInteger i;
    
    for (i=0; i < [theString length]; i++) {
        [self sendStringCharacter:[theString substringWithRange:NSMakeRange(i,1)]];
    }
    
    [theString release];
}

- (void)sendStringCharacter:(NSString *)character{
    NSInteger i;
    int keyToEnd = 0;
    NSDictionary *translationTable = nil;
    
    
    if ([voodooTV.model isEqualToString:@"2k9"]) {
        [translationTable2k9 retain];
        translationTable = translationTable2k9;
        keyToEnd = rc6S0StepUp;
    }else {
        [translationTable2k10 retain];
        translationTable = translationTable2k10;
        keyToEnd = rc6S0Acknowledge;
    }

    NSString *stringToSend = [translationTable objectForKey:character];
    
    if (stringToSend) {
        for (i=0; i < [stringToSend length]; i++) {
            switch ([stringToSend characterAtIndex:i]) {
                case '0':
                    [voodooTV sendKey:rc6S0Digit0];
                    break;
                case '1':
                    [voodooTV sendKey:rc6S0Digit1];
                    break;
                case '2':
                    [voodooTV sendKey:rc6S0Digit2];
                    break;
                case '3':
                    [voodooTV sendKey:rc6S0Digit3];
                    break;
                case '4':
                    [voodooTV sendKey:rc6S0Digit4];
                    break;
                case '5':
                    [voodooTV sendKey:rc6S0Digit5];
                    break;
                case '6':
                    [voodooTV sendKey:rc6S0Digit6];
                    break;
                case '7':
                    [voodooTV sendKey:rc6S0Digit7];
                    break;
                case '8':
                    [voodooTV sendKey:rc6S0Digit8];
                    break;
                case '9':
                    [voodooTV sendKey:rc6S0Digit9];
                    break;    
                default:
                    break;
            }
            NSLog(@"sleep for 1 second after pressing");
            usleep( DELAYBETWEENKEYPRESSES );
        }
        [voodooTV sendKey:keyToEnd];
    }
    [translationTable release];
}

- (BOOL)textFieldShouldReturn:(UITextField *)textField {
    [textField resignFirstResponder];
    [keyboardToggleButton setImage:[UIImage imageNamed:@"knoppen_keyboard_up.png"] forState:UIControlStateNormal];
    return NO;
}

- (IBAction)setTextFieldKeyboardLayoutToURL:(id)sender {
    [nettvTextField resignFirstResponder];
    nettvTextField.keyboardType = UIKeyboardTypeURL;
    [nettvTextField becomeFirstResponder];
    // nettvTextField.keyboardType = UIKeyboardTypeDefault;
}

- (IBAction)setTextFieldKeyboardLayoutToDefault:(id)sender {
    [nettvTextField resignFirstResponder];
    nettvTextField.keyboardType = UIKeyboardTypeDefault;
    [nettvTextField becomeFirstResponder];
    // nettvTextField.keyboardType = UIKeyboardTypeDefault;
}

- (IBAction)setTextFieldKeyboardLayoutToEmail:(id)sender {
    [nettvTextField resignFirstResponder];
    nettvTextField.keyboardType = UIKeyboardTypeEmailAddress;
    [nettvTextField becomeFirstResponder];
    // nettvTextField.keyboardType = UIKeyboardTypeDefault;
}

- (IBAction)toggleTextField:(id)sender {
    if ([nettvTextField isFirstResponder]) {
        [nettvTextField resignFirstResponder];
        [keyboardToggleButton setImage:[UIImage imageNamed:@"knoppen_keyboard_up.png"] forState:UIControlStateNormal];
    }else {
        [nettvTextField becomeFirstResponder];
        [keyboardToggleButton setImage:[UIImage imageNamed:@"knoppen_keyboard_down.png"] forState:UIControlStateNormal];
    }

}

-(IBAction)pressBackKey:(id)sender {
    if ([nettvTextField.text length]>0) {
        nettvTextField.text = [[nettvTextField.text substringToIndex:[nettvTextField.text length]-1] retain];
        oldString = [nettvTextField.text retain];
    }else {
        [voodooTV sendKey:rc6S0PreviousProgram];
    }

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
    [oldString release];
    [translationTable2k9 release];
    [translationTable2k10 release];
    [voodooTV release];
    [nettvTextField release];
    [super dealloc];
}


@end
