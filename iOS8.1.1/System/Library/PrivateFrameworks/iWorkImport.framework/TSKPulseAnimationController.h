/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:35:38 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/TSKHighlightController.h>

@protocol TSKPulseAnimationControllerProtocol;
@interface TSKPulseAnimationController : TSKHighlightController {

	id<TSKPulseAnimationControllerProtocol> _delegate;
	BOOL _pulsating;
	BOOL _autohide;
	double _duration;
	double _pulseOffset;

}

@property (assign,nonatomic) BOOL pulsating;                  //@synthesize pulsating=_pulsating - In the implementation block
@property (assign,nonatomic) BOOL autohide;                   //@synthesize autohide=_autohide - In the implementation block
@property (assign,nonatomic) double duration;                 //@synthesize duration=_duration - In the implementation block
@property (assign,nonatomic) double pulseOffset;              //@synthesize pulseOffset=_pulseOffset - In the implementation block
-(BOOL)drawRoundedRect;
-(BOOL)pulsating;
-(void)setPulsating:(BOOL)arg1 ;
-(BOOL)autohide;
-(void)setAutohide:(BOOL)arg1 ;
-(double)pulseOffset;
-(void)setPulseOffset:(double)arg1 ;
-(void)dealloc;
-(double)duration;
-(void)setDuration:(double)arg1 ;
-(void)animationDidStop:(id)arg1 finished:(BOOL)arg2 ;
-(void)startAnimating;
-(void)reset;
-(void)disconnect;
-(void)stop;
-(id)initWithDelegate:(id)arg1 ;
@end

