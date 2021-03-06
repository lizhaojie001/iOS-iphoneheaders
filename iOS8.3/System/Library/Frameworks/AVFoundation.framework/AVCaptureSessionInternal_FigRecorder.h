/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, June 24, 2015 at 10:31:37 PM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <AVFoundation/AVFoundation-Structs.h>
@class AVWeakReference, NSString, NSMutableDictionary, AVCaptureFigAudioDevice_FigRecorder, AVCaptureFigVideoDevice_FigRecorder, NSMutableArray, AVCaptureVideoPreviewLayer_FigRecorder, NSError, AVRunLoopCondition;

@interface AVCaptureSessionInternal_FigRecorder : NSObject {

	AVWeakReference* weakReference;
	NSString* sessionPreset;
	char adjustingDeviceActiveFormat;
	int sessionPresetChangeSeed;
	int resolvedSessionPresetChangeSeed;
	int videoDeviceChangeSeed;
	int resolvedVideoDeviceChangeSeed;
	int beginConfigRefCount;
	NSMutableDictionary* captureOptions;
	NSMutableDictionary* figRecorderOptions;
	AVCaptureFigAudioDevice_FigRecorder* audioDevice;
	AVCaptureFigVideoDevice_FigRecorder* videoDevice;
	OpaqueFigRecorderRef recorder;
	NSMutableArray* inputs;
	NSMutableArray* outputs;
	NSMutableArray* connections;
	NSMutableArray* liveConnections;
	AVCaptureVideoPreviewLayer_FigRecorder* videoPreviewLayer;
	NSError* stopError;
	char running;
	char interrupted;
	char recording;
	char usesApplicationAudioSession;
	char automaticallyConfiguresApplicationAudioSession;
	AVRunLoopCondition* runLoopCondition;
	char waitingForRecorderDidStartPreviewing;
	char waitingForRecorderDidStartRecording;
	char waitingForRecorderDidStopSource;
	char waitingForRecorderDidStopPreviewing;
	char waitingForRecorderDidStopRecording;
	OpaqueCMClockRef masterClock;

}
-(void)dealloc;
-(id)init;
@end

