/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:20:50 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/AssistantUI.framework/AssistantUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol SVSSiriViewControllerHosting <NSObject>
@required
-(void)setStatusBarHidden:(BOOL)arg1;
-(void)setStatusViewHidden:(BOOL)arg1;
-(void)setCarDisplaySnippetVisible:(BOOL)arg1;
-(void)setStatusViewUserInteractionEnabled:(BOOL)arg1;
-(void)setBugReportingAvailable:(BOOL)arg1;
-(void)setHelpButtonEmphasized:(BOOL)arg1;
-(void)pulseHelpButton;
-(void)serviceRequestsDismissal;
-(void)serviceStartGuidedAccess;
-(void)serviceBulletinWithIdentifier:(id)arg1 replyHandler:(/*^block*/id)arg2;
-(void)serviceDidReadBulletinWithIdentifier:(id)arg1;
-(void)serviceStartRequestWithOptions:(id)arg1;
-(void)serviceUserRelevantEventDidOccur;
-(void)serviceLaunchApplicationWithBundleIdentifier:(id)arg1 withURL:(id)arg2 replyHandler:(/*^block*/id)arg3;
-(void)notifyOnNextUserInteraction;
-(void)siriIdleAndQuietStatusDidChange:(BOOL)arg1;
-(void)setStatusViewDisabled:(BOOL)arg1;
-(void)serviceWillPresentViewControllerWithStatusBarStyle:(long long)arg1;
-(void)serviceWillDismissViewControllerWithStatusBarStyle:(long long)arg1;
-(void)serviceOpenURL:(id)arg1 delaySessionEndForTTS:(BOOL)arg2 replyHandler:(/*^block*/id)arg3;
-(void)serviceOpenURL:(id)arg1 appBundleID:(id)arg2 allowSiriDismissal:(BOOL)arg3;
-(void)getScreenshotWithReplyHandler:(/*^block*/id)arg1;
-(void)handlePasscodeUnlockWithCompletion:(/*^block*/id)arg1;
-(void)serviceDidPresentBugReporter;
-(void)serviceDidDismissBugReporter;

@end

