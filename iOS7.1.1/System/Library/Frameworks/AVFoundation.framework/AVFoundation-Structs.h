/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:20:36 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

typedef struct CGPoint {
	double x;
	double y;
} CGPoint;

typedef struct CGSize {
	double width;
	double height;
} CGSize;

typedef struct CGRect {
	CGPoint origin;
	CGSize size;
} CGRect;

typedef struct OpaqueFigSimpleMutex* OpaqueFigSimpleMutexRef;

typedef struct {
	long long value;
	int timescale;
	unsigned flags;
	long long epoch;
} SCD_Struct_CM4;

typedef struct {
	SCD_Struct_CM4 start;
	SCD_Struct_CM4 duration;
} SCD_Struct_CM5;

typedef struct {
	SCD_Struct_CM5 source;
	SCD_Struct_CM5 target;
} SCD_Struct_CM6;

typedef struct OpaqueFigMetadataReader* OpaqueFigMetadataReaderRef;

typedef struct _NSZone* NSZoneRef;

typedef struct CGImage* CGImageRef;

typedef struct OpaqueFigAsset* OpaqueFigAssetRef;

typedef struct OpaqueFigPlaybackItem* OpaqueFigPlaybackItemRef;

typedef struct OpaqueFigFormatReader* OpaqueFigFormatReaderRef;

typedef struct __CFDictionary* CFDictionaryRef;

typedef struct __CFString* CFStringRef;

typedef struct OpaqueFigAssetImageGenerator* OpaqueFigAssetImageGeneratorRef;

typedef struct OpaqueFigPlayer* OpaqueFigPlayerRef;

typedef struct OpaqueCMClock* OpaqueCMClockRef;

typedef struct OpaqueCMTimebase* OpaqueCMTimebaseRef;

typedef struct OpaqueFigCPEProtector* OpaqueFigCPEProtectorRef;

typedef struct opaqueMTAudioProcessingTap* opaqueMTAudioProcessingTapRef;

typedef struct __CFNumber* CFNumberRef;

typedef struct OpaqueFigMutableComposition* OpaqueFigMutableCompositionRef;

typedef struct OpaqueFigAssetReader* OpaqueFigAssetReaderRef;

typedef struct opaqueCMSampleBuffer* opaqueCMSampleBufferRef;

typedef struct CGAffineTransform {
	double a;
	double b;
	double c;
	double d;
	double tx;
	double ty;
} CGAffineTransform;

typedef struct OpaqueFigAssetWriter* OpaqueFigAssetWriterRef;

typedef struct opaqueCMFormatDescription* opaqueCMFormatDescriptionRef;

typedef struct __CVPixelBufferPool* CVPixelBufferPoolRef;

typedef struct __CVBuffer* CVBufferRef;

typedef struct CGColor* CGColorRef;

typedef struct OpaqueFigRemaker* OpaqueFigRemakerRef;

typedef struct OpaqueFigRecorder* OpaqueFigRecorderRef;

typedef struct __IOSurface* IOSurfaceRef;

typedef struct __CFRunLoop* CFRunLoopRef;

typedef struct __CFRunLoopSource* CFRunLoopSourceRef;

typedef struct OpaqueFigSemaphore* OpaqueFigSemaphoreRef;

typedef struct OpaqueFigTrackReader* OpaqueFigTrackReaderRef;

typedef struct OpaqueFigAssetTrack* OpaqueFigAssetTrackRef;

typedef struct __CFBag* CFBagRef;

typedef struct opaqueCMNotificationCenter* opaqueCMNotificationCenterRef;

typedef struct OpaqueFigSubtitleRenderer* OpaqueFigSubtitleRendererRef;

typedef struct CGContext* CGContextRef;

typedef struct AudioStreamBasicDescription {
	double mSampleRate;
	unsigned mFormatID;
	unsigned mFormatFlags;
	unsigned mBytesPerPacket;
	unsigned mFramesPerPacket;
	unsigned mBytesPerFrame;
	unsigned mChannelsPerFrame;
	unsigned mBitsPerChannel;
	unsigned mReserved;
} AudioStreamBasicDescription;

typedef struct OpaqueAudioConverter* OpaqueAudioConverterRef;

typedef struct OpaqueFigVisualContext* OpaqueFigVisualContextRef;

typedef struct OpaqueVTPixelBufferConformer* OpaqueVTPixelBufferConformerRef;

typedef struct {
	int field1;
	int field2;
} SCD_Struct_AV47;

typedef struct OpaqueFigVideoQueue* OpaqueFigVideoQueueRef;

typedef struct OpaqueVTPixelBufferAttributesMediator* OpaqueVTPixelBufferAttributesMediatorRef;

typedef struct OpaqueFigRawImageReprocessor* OpaqueFigRawImageReprocessorRef;

typedef struct OpaqueFigEndpoint* OpaqueFigEndpointRef;

typedef struct OpaqueFigVideoCompositor* OpaqueFigVideoCompositorRef;

typedef struct OpaqueFigVideoCompositorFrame* OpaqueFigVideoCompositorFrameRef;

typedef struct {
	long long horizontalSpacing;
	long long verticalSpacing;
} SCD_Struct_AV54;

typedef struct {
	double left;
	double top;
	double right;
	double bottom;
} SCD_Struct_AV55;

typedef struct {
	int width;
	int height;
} SCD_Struct_AV56;
