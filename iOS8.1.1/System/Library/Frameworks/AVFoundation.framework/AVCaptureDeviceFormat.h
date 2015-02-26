/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:27:36 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <AVFoundation/AVFoundation-Structs.h>
@class AVCaptureDeviceFormatInternal, NSString, NSArray;

@interface AVCaptureDeviceFormat : NSObject {

	AVCaptureDeviceFormatInternal* _internal;

}

@property (nonatomic,readonly) NSString * mediaType; 
@property (nonatomic,readonly) opaqueCMFormatDescriptionRef formatDescription; 
@property (nonatomic,readonly) NSArray * videoSupportedFrameRateRanges; 
@property (nonatomic,readonly) float videoFieldOfView; 
@property (getter=isVideoBinned,nonatomic,readonly) BOOL videoBinned; 
@property (getter=isVideoStabilizationSupported,nonatomic,readonly) BOOL videoStabilizationSupported; 
@property (nonatomic,readonly) double videoMaxZoomFactor; 
@property (nonatomic,readonly) double videoZoomFactorUpscaleThreshold; 
@property (nonatomic,readonly) SCD_Struct_CM4 minExposureDuration; 
@property (nonatomic,readonly) SCD_Struct_CM4 maxExposureDuration; 
@property (nonatomic,readonly) float minISO; 
@property (nonatomic,readonly) float maxISO; 
@property (getter=isVideoHDRSupported,nonatomic,readonly) BOOL videoHDRSupported; 
@property (nonatomic,readonly) SCD_Struct_AV38 highResolutionStillImageDimensions; 
@property (nonatomic,readonly) long long autoFocusSystem; 
+(void)initialize;
-(opaqueCMFormatDescriptionRef)formatDescription;
-(double)videoMaxZoomFactor;
-(BOOL)isVideoStabilizationSupported;
-(BOOL)isVideoStabilizationModeSupported:(long long)arg1 ;
-(SCD_Struct_CM4)lowestSupportedVideoFrameDuration;
-(SCD_Struct_CM4)highestSupportedVideoFrameDuration;
-(SCD_Struct_CM4)defaultActiveMinFrameDuration;
-(SCD_Struct_CM4)defaultActiveMaxFrameDuration;
-(BOOL)isPhotoFormat;
-(NSArray *)videoSupportedFrameRateRanges;
-(BOOL)isDefaultActiveFormat;
-(id)AVCaptureSessionPresets;
-(SCD_Struct_CM4)minExposureDuration;
-(SCD_Struct_CM4)maxExposureDuration;
-(float)minISO;
-(float)maxISO;
-(BOOL)isVideoHDRSupported;
-(id)initWithFigCaptureSourceFormat:(id)arg1 ;
-(BOOL)isSISSupported;
-(id)figCaptureSourceFormat;
-(SCD_Struct_AV38)sensorDimensions;
-(id)vtScalingMode;
-(BOOL)supportsHighProfileH264;
-(BOOL)prefersVideoHDREnabledForSessionPreset:(id)arg1 ;
-(BOOL)supportsHighResolutionStillImageOutput;
-(SCD_Struct_AV38)highResolutionStillImageDimensions;
-(SCD_Struct_AV38)previewDimensions;
-(float)videoFieldOfView;
-(BOOL)isVideoBinned;
-(int)supportedStabilizationMethod;
-(double)videoZoomFactorUpscaleThreshold;
-(BOOL)isExperimental;
-(id)_stringForFormatDescription:(opaqueCMFormatDescriptionRef)arg1 frameRateRanges:(id)arg2 ;
-(BOOL)supportsLowLightBoost;
-(BOOL)supportsDynamicCrop;
-(int)rawBitDepth;
-(id)videoZoomSupportedDownscaleStages;
-(id)videoZoomSupportedUpscaleStages;
-(BOOL)isHighResPhotoFormat;
-(BOOL)needsPhotoPreviewDPCC;
-(int)supportedFormatsArrayIndex;
-(long long)autoFocusSystem;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(NSString *)mediaType;
@end
