//
//  CEControlReverseWindowView.m
//  Wifi TV Remote
//

#import "CEControlReverseWindowView.h"

#define HORIZONTAL_SWIPE_MINIMUM 0.15
#define VERTICAL_SWIPE_MINIMUM 0.15

@implementation CEControlReverseWindowView

@synthesize delegate;

- (id)initWithFrame:(CGRect)frame {
    if ((self = [super initWithFrame:frame])) {
        // Initialization code
    }
    return self;
}

- (id)initWithCoder:(NSCoder *)aDecoder {
    if ((self = [super initWithCoder:aDecoder])) {
        // Initialization code
        CGColorSpaceRef colorSpace = CGColorSpaceCreateDeviceRGB();
        rawContextData = malloc(BUFFERWIDTH * BUFFERHEIGHT * 4);
        NSUInteger bytesPerPixel = 4;
        NSUInteger bytesPerRow = bytesPerPixel * BUFFERWIDTH;
        NSUInteger bitsPerComponent = 8;
        drawingContext = CGBitmapContextCreate(rawContextData, BUFFERWIDTH, BUFFERHEIGHT,
                                               bitsPerComponent, bytesPerRow, colorSpace,
                                               kCGImageAlphaPremultipliedFirst | kCGBitmapByteOrder32Little);
        
        CGColorSpaceRelease(colorSpace);
    }
    return self;
}

- (unsigned char *) getRawContextData {
    return rawContextData;
}

/*
// Only override drawRect: if you perform custom drawing.
// An empty implementation adversely affects performance during animation.
- (void)drawRect:(CGRect)rect {
    // Drawing code
}
*/

- (void)drawRect:(CGRect) rect {    
    CGContextRef context = UIGraphicsGetCurrentContext();
    CGImageRef cgImage = CGBitmapContextCreateImage(drawingContext);
    CGContextTranslateCTM (context, 30,BUFFERWIDTH);
    CGContextRotateCTM (context, radians(-90.));
    CGContextDrawImage(context, CGRectMake(0,0,BUFFERWIDTH,BUFFERHEIGHT), cgImage);
    CGImageRelease(cgImage);
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
            if([[self delegate] respondsToSelector:@selector(swipeLeft)]) {
                [[self delegate] swipeLeft];
            }
        }else {
            if([[self delegate] respondsToSelector:@selector(swipeRight)]) {
                [[self delegate] swipeRight];
            }
        }
    }else if (fabsf(verticalMove) > VERTICAL_SWIPE_MINIMUM) {
        if(verticalMove>0) {
            if([[self delegate] respondsToSelector:@selector(swipeUp)]) {
                [[self delegate] swipeUp];
            }
        }else {
            if([[self delegate] respondsToSelector:@selector(swipeDown)]) {
                [[self delegate] swipeDown];
            }
        }
    }else {
        if([[self delegate] respondsToSelector:@selector(tap)]) {
            [[self delegate] tap];
        }
    }
    
}


- (void)dealloc {
    free(rawContextData);
    CGContextRelease(drawingContext);
    [super dealloc];
}


@end
