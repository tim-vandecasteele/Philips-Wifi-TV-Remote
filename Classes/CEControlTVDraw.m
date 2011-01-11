//
//  CEControlTVDraw.m
//  Wifi TV Remote
//

#import "CEControlTVDraw.h"

@implementation CEControlTVDraw

@synthesize voodooTV;

// The designated initializer.  Override if you create the controller programmatically and want to perform customization that is not appropriate for viewDidLoad.
- (id)initWithNibName:(NSString *)nibNameOrNil bundle:(NSBundle *)nibBundleOrNil {
    if ((self = [super initWithNibName:nibNameOrNil bundle:nibBundleOrNil])) {
        // Custom initialization
        self.title = @"draw";
    }
    return self;
}

// Implement viewDidLoad to do additional setup after loading the view, typically from a nib.
- (void)viewDidLoad {
    [super viewDidLoad];
    PaintingView *myPaintingView = (PaintingView *)self.view;
    myPaintingView.paintingDelegate = self;
    // allocate array and read pixels into it.
    //CGAffineTransform transform = CGAffineTransformMakeScale(1.0, -1.0);
    
    // Do the transformation
}

- (void)viewDidAppear:(BOOL)animated {
    if (voodooTV) {
        events = NULL;
        /* DirectFB init */
        
        /* Obtain the layer */
        voodooTV.dfb->GetDisplayLayer(voodooTV.dfb, DLID_PRIMARY, &layer);
        
        /* Setup the Graphical window */
        wdesc.flags  = (DFBWindowDescriptionFlags)( DWDESC_POSX | DWDESC_POSY | DWDESC_WIDTH | DWDESC_HEIGHT 
                                                   | DWDESC_OPTIONS | DWDESC_PIXELFORMAT | DWDESC_STACKING);
        wdesc.posx   = 0;
        wdesc.posy   = 0;
        wdesc.width  = (int)self.view.frame.size.width;
        wdesc.height = (int)self.view.frame.size.height;
        wdesc.pixelformat = DSPF_ARGB;
        wdesc.stacking  = DWSC_MIDDLE;
        wdesc.options   = DWOP_NONE;
        layer->CreateWindow(layer, &wdesc, &gwindow);
        gwindow->GetSurface(gwindow, &gsurface);
        //gsurface->Clear( gsurface, 0xff, 0x00, 0x00, 0xff );
        
        /* Create event buffer and request focus */
        gwindow->CreateEventBuffer( gwindow, &events );
        gwindow->SetOpacity( gwindow, 0xFF );
        gwindow->RequestFocus( gwindow );
    }
}

- (void) writeInBuffer:(void*) buffer {
    if (buffer!=NULL) {
        DFBRectangle drect = { 0, 0, wdesc.width, wdesc.height };
        gsurface->Write( gsurface, &drect, buffer+wdesc.width*4*(wdesc.height-1), -wdesc.width*4 );
        gsurface->Flip( gsurface, NULL, DSFLIP_NONE );
    }
}

/*
// Override to allow orientations other than the default portrait orientation.
- (BOOL)shouldAutorotateToInterfaceOrientation:(UIInterfaceOrientation)interfaceOrientation {
    // Return YES for supported orientations
    return (interfaceOrientation == UIInterfaceOrientationPortrait);
}
*/

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
    [voodooTV release];
    [super dealloc];
}


@end
