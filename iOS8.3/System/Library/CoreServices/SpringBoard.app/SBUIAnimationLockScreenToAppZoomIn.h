/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, June 24, 2015 at 10:20:27 PM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SpringBoard/SBUIMainScreenAnimationController.h>

@class SBAlert, UIView, SBDisableAppStatusBarAlphaChangesAssertion;

@interface SBUIAnimationLockScreenToAppZoomIn : SBUIMainScreenAnimationController {

	SBAlert* _fromAlert;
	UIView* _viewToAnimate;
	UIView* _contextHostView;
	UIView* _fakeStatusBarViewContainer;
	int _launchingOrientation;
	char _requiresHostView;
	char _activateBeforeHosting;
	char _fromAssistant;
	char _finishedZooming;
	char _finishedActivating;
	char _finishedCrossfadingToHostView;
	SBDisableAppStatusBarAlphaChangesAssertion* _disableStatusBarAlphaChangeAssertion;

}
-(void)_prepareAnimation;
-(id)_getTransitionWindow;
-(void)_cleanupAnimation;
-(id)_animationProgressDependency;
-(void)_applicationDependencyStateChanged;
-(void)_setupFakeStatusBarIfNecessary;
-(void)_doAnimation;
-(void)_showFakeStatusBarIfNecessary;
-(void)_finishedZooming;
-(void)_removeFakeStatusBarIfNecessary;
-(void)_maybeStartCrossfade;
-(void)_noteContextHostCrossfadeDidFinish;
-(void)_maybeReportAnimationFinished;
-(id)initWithActivatingApp:(id)arg1 fromAlert:(id)arg2 ;
-(char)_shouldDismissBanner;
-(char)_waitsForApplicationActivationIfNecessary;
-(char)isReasonableMomentToInterrupt;
-(void)_startAnimation;
-(void)dealloc;
-(void)_setHidden:(char)arg1 ;
@end

