/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:03:57 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <SpringBoard/SBUIMainScreenAnimationController.h>

@class SBUIAnimationWindow, UIView;

@interface SBUIAnimationDosidoTransitionController : SBUIMainScreenAnimationController {

	SBUIAnimationWindow* _transitionWindow;
	UIView* _transformContainerParent;
	UIView* _transformContainer;
	UIView* _fromAppContextHostView;
	UIView* _fromView;
	UIView* _toView;
	int _fromOrientation;
	BOOL _fromNC;
	BOOL _fromCC;
	BOOL _fromAssistant;
	BOOL _requiresHostView;

}
-(void)_prepareAnimation;
-(id)initWithActivatingApp:(id)arg1 deactivatingApp:(id)arg2 ;
-(id)_getTransitionWindow;
-(void)_cleanupAnimation;
-(BOOL)_animationShouldStart;
-(id)_animationProgressDependency;
-(void)hideRealFromView;
-(void)captureFlagsForActivatingDisplay:(id)arg1 ;
-(int)orientationAtLaunch;
-(void)_kickOffAnimation;
-(void)_setFromView:(id)arg1 ;
-(void)_rotateViewIfNecessary:(id)arg1 inverted:(BOOL)arg2 ;
-(void)dealloc;
-(void)setToView:(id)arg1 ;
-(void)_startAnimation;
-(void)_setHidden:(BOOL)arg1 ;
@end

