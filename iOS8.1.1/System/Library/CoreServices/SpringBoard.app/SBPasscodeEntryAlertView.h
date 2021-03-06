/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:27:06 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <SpringBoard/SBAlertView.h>

@protocol SBPasscodeEntryAlertViewDelegate;
@class SBUIPasscodeViewWithLockScreenStyle;

@interface SBPasscodeEntryAlertView : SBAlertView {

	SBUIPasscodeViewWithLockScreenStyle* _passcodeView;
	BOOL _dismissing;
	id<SBPasscodeEntryAlertViewDelegate> _delegate;

}

@property (assign,nonatomic) id<SBPasscodeEntryAlertViewDelegate> delegate;                 //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) UIView*<SBUIPasscodeLockView> passcodeLockView; 
-(void)layoutForInterfaceOrientation:(long long)arg1 ;
-(void)alertDisplayWillBecomeVisible;
-(void)alertDisplayBecameVisible;
-(BOOL)isReadyToBeRemovedFromView;
-(UIView*<SBUIPasscodeLockView>)passcodeLockView;
-(/*^block*/id)_passcodeViewGenerator;
-(void)_animatePasscodeViewsToVisible:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(void)_dismissAnimationCompleted;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)setDelegate:(id<SBPasscodeEntryAlertViewDelegate>)arg1 ;
-(id<SBPasscodeEntryAlertViewDelegate>)delegate;
@end

