#import <Cocoa/Cocoa.h>

#include <AudioToolbox/AudioQueue.h>
#include <CoreAudio/CoreAudioTypes.h>

@interface MacAudioOutputBase : NSObject {
	AudioQueueRef					audioQueue;
	AudioStreamBasicDescription		audioStreamDesc;
	
	id								delegate;
	
	BOOL							queueRunning;
}
- (id) init; // Init with default audio output device
- (void) dealloc;

- (void) setDelegate:(id) delegate;

- (OSStatus) startQueue;
- (OSStatus) flushQueue;
- (OSStatus) pauseQueue;
- (OSStatus) stopQueue;

- (BOOL) isQueueRunning;

- (AudioQueueRef) audioQueue;

// Supply audio data to queue in callback.
//
// If this object has no delegate, this method will simply log.
//
// To actually provide data to the output queue, implement a method with this exact
// signature another class and set an instance of that class as a delegate
// to an instance of this class.
//
// Alternately, this class may be subclassed and this method overridden.

- (void) outputCallback:(AudioQueueRef)inAQ buffer:(AudioQueueBufferRef) inCompleteAQBuffer;
@end
