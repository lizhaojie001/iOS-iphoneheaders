/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:36:00 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/ProceduralWallpaper/ProceduralWallpapers.bundle/ProceduralWallpapers
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface WKInfiniteImpulseResponseFilter : NSObject {

	unsigned long long _count;
	double* _ffC;
	double* _fbC;
	double* _inputHistory;
	double* _outputHistory;
	double _zeroGradientThreshold;

}

@property (assign,nonatomic) double zeroGradientThreshold;              //@synthesize zeroGradientThreshold=_zeroGradientThreshold - In the implementation block
+(id)lowpassFilterWithCoefficient:(double)arg1 ;
+(id)lowpassInertiaFilterWithCoefficient:(double)arg1 ;
-(double)output;
-(void)dealloc;
-(id)initWithCount:(unsigned long long)arg1 feedforwardCoefficients:(double*)arg2 feedbackCoefficients:(double*)arg3 ;
-(double)outputGradient;
-(void)setLowpassInertiaFilterCoefficient:(double)arg1 ;
-(double)filterWithInput:(double)arg1 ;
-(BOOL)zeroGradient;
-(void)resetToValue:(double)arg1 ;
-(double)zeroGradientThreshold;
-(void)setZeroGradientThreshold:(double)arg1 ;
@end
