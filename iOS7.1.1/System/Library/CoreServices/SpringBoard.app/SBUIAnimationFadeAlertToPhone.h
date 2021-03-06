/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 1:58:02 AM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SpringBoard/SBUIAnimationAlertToPhoneBase.h>

@class SBDisableAppStatusBarAlphaChangesAssertion, UIView;

@interface SBUIAnimationFadeAlertToPhone : SBUIAnimationAlertToPhoneBase {

	SBDisableAppStatusBarAlphaChangesAssertion* _disableStatusBarAlphaChangeAssertion;
	int _launchingOrientation;
	UIView* _fakeStatusBarViewContainer;
	BOOL _appIsTranslucent;

}
-(void)_prepareAnimation;
-(void)_cleanupAnimation;
-(void)_setupFakeStatusBarIfNecessary;
-(void)_showFakeStatusBarIfNecessary;
-(void)_removeFakeStatusBarIfNecessary;
-(void)dealloc;
-(void)_startAnimation;
@end

