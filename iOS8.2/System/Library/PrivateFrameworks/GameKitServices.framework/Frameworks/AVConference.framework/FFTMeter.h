/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:25:22 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/GameKitServices.framework/Frameworks/AVConference.framework/AVConference
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <AVConference/AVConference-Structs.h>
@interface FFTMeter : NSObject {

	vDSP_DFT_SetupStructRef fftSetup;
	DSPSplitComplex* dspSplitComplex;
	float sampleHistory[3840];
	float magnitudeBuffer[1920];
	float fftBuffer[3840];
	float windowBuffer[3840];
	float windowHistory[3840];
	float octaveDbOld[54];
	float octaveDb[54];
	float octaveDbFilt[55];
	float lerpIdxs[66];
	float fftNormFactor;
	float adjust0DB;

}
-(void)dealloc;
-(id)init;
-(id)computeWithSampleBuffer:(char*)arg1 numSamples:(unsigned)arg2 voiceActive:(char)arg3 ;
@end

