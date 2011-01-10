//
//  CEControlTVCursor.m
//  Remote_0.3
//
//  Created by Tim on 25/04/10.
//  Copyright 2010 __MyCompanyName__. All rights reserved.
//

#import "CEControlTVCursor.h"

#define HORIZONTAL_SWIPE_MINIMUM 0.15
#define VERTICAL_SWIPE_MINIMUM 0.15


@implementation CEControlTVCursor

@synthesize cursorDelegate;

- (id)initWithFrame:(CGRect)frame {
    if ((self = [super initWithFrame:frame])) {
        // Initialization code
    }
    return self;
}

- (id)initWithCoder:(NSCoder *)aDecoder {
    if ((self = [super initWithCoder:aDecoder])) {
        // Initialization code
    }
    return self;
}


- (void)touchesBegan:(NSSet *)touches withEvent:(UIEvent *)event {
    UITouch *touch = touches.anyObject;
    startPosition = [touch locationInView:self];
}

- (void)touchesEnded:(NSSet *)touches withEvent:(UIEvent *)event {
    UITouch *touch = touches.anyObject;
    CGPoint endPosition = [touch locationInView:self];
    CGFloat horizontalMove = (startPosition.x-endPosition.x)/self.frame.size.width;
    CGFloat verticalMove = (startPosition.y-endPosition.y)/self.frame.size.height;
    if(fabsf(horizontalMove) > HORIZONTAL_SWIPE_MINIMUM){
        if(horizontalMove>0) {
            if([[self cursorDelegate] respondsToSelector:@selector(swipeLeft)]) {
                [[self cursorDelegate] swipeLeft];
            }
        }else {
            if([[self cursorDelegate] respondsToSelector:@selector(swipeRight)]) {
                [[self cursorDelegate] swipeRight];
            }
        }
    }else if (fabsf(verticalMove) > VERTICAL_SWIPE_MINIMUM) {
        if(verticalMove>0) {
            if([[self cursorDelegate] respondsToSelector:@selector(swipeUp)]) {
                [[self cursorDelegate] swipeUp];
            }
        }else {
            if([[self cursorDelegate] respondsToSelector:@selector(swipeDown)]) {
                [[self cursorDelegate] swipeDown];
            }
        }
    }else {
        if([[self cursorDelegate] respondsToSelector:@selector(tap)]) {
            [[self cursorDelegate] tap];
        }
    }

}

/*
// Only override drawRect: if you perform custom drawing.
// An empty implementation adversely affects performance during animation.
- (void)drawRect:(CGRect)rect {
    // Drawing code
}
*/

- (void)dealloc {
    [cursorDelegate release];
    [super dealloc];
}


@end
