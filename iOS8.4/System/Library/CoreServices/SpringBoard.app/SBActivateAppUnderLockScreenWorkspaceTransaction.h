/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:16:31 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <SpringBoard/SBToAppWorkspaceTransaction.h>

@class SBLockScreenViewControllerBase, SBDisableActiveInterfaceOrientationChangeAssertion;

@interface SBActivateAppUnderLockScreenWorkspaceTransaction : SBToAppWorkspaceTransaction {

	SBLockScreenViewControllerBase* _lockScreenController;
	SBDisableActiveInterfaceOrientationChangeAssertion* _disableActiveOrientationChangeAssertion;
	BOOL _waitingForSceneDestruction;

}
-(id)initWithAlertManager:(id)arg1 application:(id)arg2 lockScreenController:(id)arg3 forRelaunch:(BOOL)arg4 withResult:(/*^block*/id)arg5 ;
-(void)_alertDidActivate;
-(BOOL)shouldToggleSpringBoardStatusBarOnCleanup;
-(BOOL)shouldPerformToAppStateCleanupOnCompletion;
-(void)_kickoffAlertActivation;
-(void)_setupAndActivate;
-(id)initWithAlertManager:(id)arg1 application:(id)arg2 lockScreenController:(id)arg3 ;
-(BOOL)shouldPlaceOutgoingScenesUnderLockOnCompletion;
-(void)dealloc;
-(void)_childTransactionDidComplete:(id)arg1 ;
-(void)_didComplete;
-(void)_begin;
@end
