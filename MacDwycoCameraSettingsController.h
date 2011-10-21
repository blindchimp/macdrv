//
//  MacDwycoCameraSettingsController.h
//  DwycoVideoTest
//
//  Created by Christopher Corbell on 9/1/09.
//  Copyright 2009 Dwyco Inc. All rights reserved.
//

#import <Cocoa/Cocoa.h>
@class MacDwycoVideoSource;

@interface MacDwycoCameraSettingsController : NSObject {
	IBOutlet NSPanel *		cameraSettingsPanel;
	IBOutlet NSSlider *		brightnessSlider;
	IBOutlet NSSlider *		contrastSlider;
	IBOutlet NSSlider *		saturationSlider;
	IBOutlet NSSlider *		gammaSlider;
	IBOutlet NSButton *     flipImageVerticallyCheckbox;
	
	MacDwycoVideoSource * videoSource;
}
+ (void) showPanelForSource:(MacDwycoVideoSource *) source;
+ (void) releaseSharedController;

- (id) initWithVideoSource:(MacDwycoVideoSource *) source;
- (void) dealloc;

- (void) awakeFromNib;

- (void) loadSettingsFromSource;

- (void) showPanel;

- (IBAction) adjustBrightness:(id) sender;
- (IBAction) adjustContrast:(id) sender;
- (IBAction) adjustSaturation:(id) sender;
- (IBAction) adjustGamma:(id) sender;
- (IBAction) flipImageVertically:(id) sender;
- (IBAction) restoreDefaults:(id) sender;
- (IBAction) saveSettings:(id) sender;
@end
