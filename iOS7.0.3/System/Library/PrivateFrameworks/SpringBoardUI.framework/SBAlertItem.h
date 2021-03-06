/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:57:24 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardUI.framework/SpringBoardUI
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIAlertViewDelegate.h>

@class UIAlertView, NSArray;

@interface SBAlertItem : NSObject <UIAlertViewDelegate> {

	UIAlertView* _alertSheet;
	BOOL _orderOverSBAlert;
	BOOL _preventLockOver;
	BOOL _didEverActivate;
	BOOL _ignoreIfAlreadyDisplaying;
	BOOL _didPlayPresentationSound;
	BOOL _allowInSetup;
	BOOL _pendInSetupIfNotAllowed;
	BOOL _pendWhileKeyBagLocked;
	NSArray* _allowedBundleIDs;
	BOOL _allowInStark;

}

@property (assign,nonatomic) BOOL ignoreIfAlreadyDisplaying;              //@synthesize ignoreIfAlreadyDisplaying=_ignoreIfAlreadyDisplaying - In the implementation block
@property (assign,nonatomic) BOOL allowInSetup;                           //@synthesize allowInSetup=_allowInSetup - In the implementation block
@property (assign,nonatomic) BOOL pendInSetupIfNotAllowed;                //@synthesize pendInSetupIfNotAllowed=_pendInSetupIfNotAllowed - In the implementation block
@property (assign,nonatomic) BOOL pendWhileKeyBagLocked;                  //@synthesize pendWhileKeyBagLocked=_pendWhileKeyBagLocked - In the implementation block
@property (nonatomic,retain) NSArray * allowedBundleIDs;                  //@synthesize allowedBundleIDs=_allowedBundleIDs - In the implementation block
@property (assign,nonatomic) BOOL allowInStark;                           //@synthesize allowInStark=_allowInStark - In the implementation block
+(void)activateAlertItem:(id)arg1 ;
+(id)_alertItemsController;
-(id)alertSheet;
-(void)setAllowInSetup:(BOOL)arg1 ;
-(BOOL)shouldShowInLockScreen;
-(BOOL)shouldShowInEmergencyCall;
-(BOOL)allowMenuButtonDismissal;
-(BOOL)unlocksScreen;
-(BOOL)forcesModalAlertAppearance;
-(BOOL)allowInSetup;
-(BOOL)ignoreIfAlreadyDisplaying;
-(void)configure:(BOOL)arg1 requirePasscodeForActions:(BOOL)arg2 ;
-(void)dealloc;
-(id)init;
-(void)alertView:(id)arg1 clickedButtonAtIndex:(int)arg2 ;
-(void)dismiss;
-(id)sound;
-(Class)alertSheetClass;
-(void)setPendInSetupIfNotAllowed:(BOOL)arg1 ;
-(BOOL)didPlayPresentationSound;
-(void)_playPresentationSound;
-(BOOL)hasActiveKeyboardOnScreen;
-(void)buttonDismissed;
-(void)cleanPreviousConfiguration;
-(BOOL)allowAutoUnlock;
-(BOOL)undimsScreen;
-(int)unlockSource;
-(BOOL)togglesMediaControls;
-(BOOL)dismissOnModalDisplayActivation;
-(BOOL)isCriticalAlert;
-(void)playPresentationSound;
-(id)lockLabel;
-(id)shortLockLabel;
-(double)autoDismissInterval;
-(void)performUnlockAction;
-(void)setOrderOverSBAlert:(BOOL)arg1 ;
-(BOOL)preventLockOver;
-(void)setPreventLockOver:(BOOL)arg1 ;
-(BOOL)_didEverActivate;
-(void)willActivate;
-(void)didActivate;
-(void)willRelockForButtonPress:(BOOL)arg1 ;
-(void)screenWillUndim;
-(void)didFailToActivate;
-(void)willDeactivateForReason:(int)arg1 ;
-(void)didDeactivateForReason:(int)arg1 ;
-(void)noteVolumeOrLockPressed;
-(int)alertItemNotificationType;
-(id)alertItemNotificationDate;
-(id)alertItemNotificationSender;
-(BOOL)behavesSuperModally;
-(BOOL)reappearsAfterLock;
-(BOOL)reappearsAfterUnlock;
-(BOOL)preventInterruption;
-(int)alertPriority;
-(BOOL)displayActionButtonOnLockScreen;
-(id)prepareNewAlertSheetWithLockedState:(BOOL)arg1 requirePasscodeForActions:(BOOL)arg2 ;
-(void)setIgnoreIfAlreadyDisplaying:(BOOL)arg1 ;
-(BOOL)pendInSetupIfNotAllowed;
-(BOOL)pendWhileKeyBagLocked;
-(void)setPendWhileKeyBagLocked:(BOOL)arg1 ;
-(id)allowedBundleIDs;
-(void)setAllowedBundleIDs:(id)arg1 ;
-(BOOL)allowInStark;
-(void)setAllowInStark:(BOOL)arg1 ;
-(BOOL)dismissOnLock;
-(void)dismiss:(int)arg1 ;
@end

