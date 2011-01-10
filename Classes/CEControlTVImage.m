//
//  CEControlTVImage.m
//  Remote_0.3
//
//  Created by Tim on 25/05/10.
//  Copyright 2010 __MyCompanyName__. All rights reserved.
//

#import "CEControlTVImage.h"

#define MAXIMAGEWIDTH  (640)
#define MAXIMAGEHEIGHT (360)

@implementation CEControlTVImage

@synthesize voodooTV;

 // The designated initializer.  Override if you create the controller programmatically and want to perform customization that is not appropriate for viewDidLoad.
- (id)initWithNibName:(NSString *)nibNameOrNil bundle:(NSBundle *)nibBundleOrNil {
    if ((self = [super initWithNibName:nibNameOrNil bundle:nibBundleOrNil])) {
        // Custom initialization
        gwindow = NULL;
        self.view.backgroundColor = [[UIColor alloc] initWithPatternImage:[UIImage imageNamed:@"brushed-metal.png"]];
        
        UIImage *tabBarImage = [UIImage imageNamed:@"tabbar_pictureframe.png"];
        self.tabBarItem = [[UITabBarItem alloc] initWithTitle:@"pictures" image:tabBarImage tag:5];
        self.title = @"pictures";
        [tabBarImage release];
    }
    return self;
}

/*
// Implement viewDidLoad to do additional setup after loading the view, typically from a nib.
- (void)viewDidLoad {
    [super viewDidLoad];
}
*/

/*
// Override to allow orientations other than the default portrait orientation.
- (BOOL)shouldAutorotateToInterfaceOrientation:(UIInterfaceOrientation)interfaceOrientation {
    // Return YES for supported orientations
    return (interfaceOrientation == UIInterfaceOrientationPortrait);
}
*/

- (IBAction)pickImage:(id)sender {
    UIImagePickerController* imagePickerController = [[UIImagePickerController alloc] init];
    imagePickerController.delegate = self;
    imagePickerController.sourceType = UIImagePickerControllerSourceTypePhotoLibrary;
    [self presentModalViewController:imagePickerController animated:YES];
    [imagePickerController release];
}

- (void)imagePickerController:(UIImagePickerController *)picker didFinishPickingImage:(UIImage *)image editingInfo:(NSDictionary *)editingInfo {
    // First get the image into your data buffer
    if (voodooTV) {
        [image retain];
        // First get the image into your data buffer        
        NSUInteger width = image.size.width;
        NSUInteger height = image.size.height;
        NSUInteger xOffset = 0;
        NSUInteger yOffset = 0;
        
        CGFloat realfactor = (CGFloat)MAXIMAGEWIDTH/MAXIMAGEHEIGHT;
        CGFloat picturefactor = (CGFloat)width/height;
        
        if (picturefactor > realfactor) {
            width = MAXIMAGEWIDTH;
            height = width/picturefactor;
            yOffset = (MAXIMAGEHEIGHT - height)/2;
        }else {
            height = MAXIMAGEHEIGHT;
            width = height*picturefactor;
            xOffset = (MAXIMAGEWIDTH-width)/2;
        }

        CGAffineTransform flipVertical = CGAffineTransformMake( 1, 0, 0, -1, 0, MAXIMAGEHEIGHT);        
        CGColorSpaceRef colorSpace = CGColorSpaceCreateDeviceRGB();
        unsigned char *rawData = malloc(MAXIMAGEWIDTH * MAXIMAGEHEIGHT * 4);
        NSUInteger bytesPerPixel = 4;
        NSUInteger bytesPerRow = bytesPerPixel * MAXIMAGEWIDTH;
        NSUInteger bitsPerComponent = 8;
        CGContextRef context = CGBitmapContextCreate(rawData, MAXIMAGEWIDTH, MAXIMAGEHEIGHT,
                                                     bitsPerComponent, bytesPerRow, colorSpace,
                                                     kCGImageAlphaPremultipliedFirst | kCGBitmapByteOrder32Little);
        
        CGContextConcatCTM(context, flipVertical);
        CGContextSetRGBFillColor(context, 0.0, 0.0, 0.0, 1);
        CGContextFillRect(context, CGRectMake(0, 0, MAXIMAGEWIDTH, MAXIMAGEHEIGHT));
        
        CGColorSpaceRelease(colorSpace);
        
        UIGraphicsPushContext(context);

        [image drawInRect:CGRectMake(xOffset, yOffset, width, height)];
        
        UIGraphicsPopContext();
        events = NULL;
        /* DirectFB init */
        
        if ( gwindow == NULL ) {
            
            /* Setup the Graphical window */
            wdesc.flags  = (DFBWindowDescriptionFlags)( DWDESC_POSX | DWDESC_POSY | DWDESC_WIDTH | DWDESC_HEIGHT 
                                                       | DWDESC_OPTIONS | DWDESC_PIXELFORMAT | DWDESC_STACKING);
            wdesc.posx   = 0;
            wdesc.posy   = 0;
            wdesc.width  = MAXIMAGEWIDTH;
            wdesc.height = MAXIMAGEHEIGHT;
            wdesc.pixelformat = DSPF_ARGB;
            wdesc.stacking  = DWSC_MIDDLE;
            wdesc.options   = DWOP_NONE;
            voodooTV.layer->CreateWindow(voodooTV.layer, &wdesc, &gwindow);
            gwindow->GetSurface(gwindow, &gsurface);
            //gsurface->Clear( gsurface, 0xff, 0x00, 0x00, 0xff );
            
            /* Create event buffer and request focus */
            gwindow->CreateEventBuffer( gwindow, &events );
            
        }

        if (gwindow != NULL && gsurface != NULL) {
            gwindow->SetOpacity( gwindow, 0xFF );
            gwindow->RequestFocus( gwindow );
            
            /* try to write the jpeg buffer */
            DFBRectangle drect = { 0, 0, MAXIMAGEWIDTH, MAXIMAGEHEIGHT };
            gsurface->Write( gsurface, &drect, rawData, MAXIMAGEWIDTH*4 );
            gsurface->Flip( gsurface, NULL, DSFLIP_NONE );
        }
        
        
        //**********************      directfb stuff done     ***************************/
        
        
        CGContextRelease(context);
        free(rawData);
        [image release];
    }
    
    [self dismissModalViewControllerAnimated:YES];
}

// go back to TVs
-(IBAction)goBack:(id)sender {
    [voodooTV disconnect];
    [self.navigationController popViewControllerAnimated:YES];
}

- (void)viewWillDisappear:(BOOL)animated {
    [self clearImage:nil];
}

- (IBAction)clearImage:(id)sender {

}

- (void)imagePickerControllerDidCancel:(UIImagePickerController *)picker {
    [self dismissModalViewControllerAnimated:YES];
}

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
    [self clearImage:nil];
    [voodooTV release];
    [super dealloc];
}


@end
