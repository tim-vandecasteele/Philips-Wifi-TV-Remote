//
//  CEControlTVCursor.h
//  Wifi TV Remote
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
