/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 4:22:04 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/WebUI.framework/WebUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class CAMediaTimingFunction;

@interface WBSFluidProgressAnimation : NSObject {

	CAMediaTimingFunction* _timingFunction;
	float _initialPosition;
	float _destinationPosition;
	double _animationDuration;

}

@property (nonatomic,retain) CAMediaTimingFunction * timingFunction;              //@synthesize timingFunction=_timingFunction - In the implementation block
@property (assign,nonatomic) float initialPosition;                               //@synthesize initialPosition=_initialPosition - In the implementation block
@property (assign,nonatomic) float destinationPosition;                           //@synthesize destinationPosition=_destinationPosition - In the implementation block
@property (assign,nonatomic) double animationDuration;                            //@synthesize animationDuration=_animationDuration - In the implementation block
-(void)setAnimationDuration:(double)arg1 ;
-(void)setTimingFunction:(CAMediaTimingFunction *)arg1 ;
-(CAMediaTimingFunction *)timingFunction;
-(double)animationDuration;
-(float)initialPosition;
-(void)setInitialPosition:(float)arg1 ;
-(float)destinationPosition;
-(void)setDestinationPosition:(float)arg1 ;
@end
