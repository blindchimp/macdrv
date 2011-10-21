/*
 *  MacDwycoVideoSourceDelegate.h
 *  DwycoVideoTest
 *
 *  Copyright 2009 Dwyco, Inc. All rights reserved.
 *
 */

/**
 * Video source delegate protocol, for object that is
 * furnishing video to the library.
 */
@protocol MacDwycoVideoSourceDelegate
- (BOOL)		hasCaptureData;
- (void)		startCapture;
- (void)		stopCapture;
- (NSData *)	getLatestCapturedRGBFrameBytes96x128;
- (NSData *)	getLatestCapturedRGBFrameBytes: (int *)width height:(int *)height;
- (CVImageBufferRef) getLatestCapturedRGBImageBuffer: (int *)width height:(int *)height;
- (QTTime)		lastCaptureTime;
- (void)		showSourceDialog;
- (void)		previewOn;
- (void)		previewOff;
- (BOOL)		flipImageVertically; /* does the user want the image flipped? */
- (void)		setCaptureSize: (int) width height:(int) height;
- (int)			isCapturing;
@end
