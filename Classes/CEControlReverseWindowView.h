//
//  CEControlReverseWindowView.h
//  Wifi TV Remote
//

#import <UIKit/UIKit.h>
#include <math.h>

static inline double radians (double degrees) {return degrees * M_PI/180;}
#define BUFFERWIDTH  (420)
#define BUFFERHEIGHT (BUFFERWIDTH*9/16)

@protocol CEControlReverseWindowViewActions
@optional
- (void)swipeRight;
- (void)swipeLeft;
- (void)swipeUp;
- (void)swipeDown;
- (void)tap;
@end


@interface CEControlReverseWindowView : UIView {
    CGPoint startPosition;
    CGContextRef           drawingContext;
    unsigned char         *rawContextData;
    NSObject < CEControlReverseWindowViewActions > *delegate;
}

- (unsigned char *) getRawContextData;

@property (retain) NSObject < CEControlReverseWindowViewActions > *delegate;

@end