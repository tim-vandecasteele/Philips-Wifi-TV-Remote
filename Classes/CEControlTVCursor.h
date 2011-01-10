//
//  CEControlTVCursor.h
//  Remote_0.3
//
//  Created by Tim on 25/04/10.
//  Copyright 2010 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>

@protocol CEControlTVCursorActions
@optional
- (void)swipeRight;
- (void)swipeLeft;
- (void)swipeUp;
- (void)swipeDown;
- (void)tap;
@end

@interface CEControlTVCursor : UIView {
    CGPoint startPosition;
    NSObject < CEControlTVCursorActions > *cursorDelegate;
}

@property (retain) NSObject < CEControlTVCursorActions > *cursorDelegate;

@end
