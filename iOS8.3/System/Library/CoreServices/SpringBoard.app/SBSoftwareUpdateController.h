/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, June 24, 2015 at 10:20:30 PM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SpringBoard/SUManagerClientDelegate.h>
#import <SpringBoard/SUNetworkObserver.h>

@class SUManagerClient, SUDownload, NSString;

@interface SBSoftwareUpdateController : NSObject <SUManagerClientDelegate, SUNetworkObserver> {

	SUManagerClient* _client;
	SUDownload* _updateToInstall;
	int _currentNetworkType;
	int _iCloudRestoreToken;
	char _showOrScheduleForcedInstallAlertAfterNextUnlock;
	char _scheduleForcedInstallAlertAfterNextUnlock;
	char _scheduleForcedInstallAlertWhenAble;
	char _settingsResetPrefsBadgedFlag;
	char _downloadWasQueuedRemotely;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)stringFromReasons:(int)arg1 ;
+(id)sharedInstance;
-(void)_prepareMigrationForSettingsReset;
-(void)_completeMigrationForSettingsReset;
-(void)_lockStateChanged:(id)arg1 ;
-(void)_iCloudStatusChanged;
-(void)_migrateForNewOSVersionIfNecessary;
-(void)_registerForInstallRelatedNotifications;
-(void)_setUpdateToInstall:(id)arg1 ;
-(char)_forceInstallAfterDownload;
-(void)_showOrScheduleNextForcedInstallAlert;
-(void)_unregisterForInstallRelatedNotifications;
-(void)_resetAndCancelExistingScheduledForcedInstallAlerts;
-(void)_handleInstallError:(id)arg1 ;
-(void)_scheduleForcedInstallRepeatAlert:(double)arg1 ;
-(char)_isSettingsBadgedForSoftwareUpdate;
-(void)_savePreferencesBadgeFlag:(id)arg1 ;
-(id)_stringForCurrentVersionPreference;
-(void)_saveLastKnownVersionPreference:(id)arg1 ;
-(void)delayForcedInstallUntilAble;
-(void)_autoDownloadUnknownToUserFailedForDescriptor:(id)arg1 error:(id)arg2 ;
-(void)_postDownloadStateChangeNotification:(char)arg1 ;
-(void)_showSUAvailableAlertForDescriptor:(id)arg1 ;
-(void)_showOrScheduleNextForcedInstallAlertWithReasons:(int)arg1 ;
-(void)_toggleSettingsBadge:(char)arg1 ;
-(void)_isUpdateInstallable:(/*^block*/id)arg1 ;
-(void)_passcodeLockStateChanged:(id)arg1 ;
-(void)_callCountChanged:(id)arg1 ;
-(void)_syncWillStart:(id)arg1 ;
-(void)_syncDidEnd:(id)arg1 ;
-(void)_iTunesRestoreStateChanged:(id)arg1 ;
-(void)_showForcedInstallAlertRequiringInstallationKeybag:(char)arg1 ;
-(void)_clearLegacyBadgeIfNecessary:(id)arg1 ;
-(void)installUpdate;
-(void)delayForcedInstallWithDefaultDurationFromNow;
-(void)delayForcedInstallWithDefaultDurationAfterNextUnlock;
-(char)_isSettingsActive;
-(void)dealloc;
-(id)init;
-(void)_resetState;
-(void)isDownloading:(/*^block*/id)arg1 ;
-(void)client:(id)arg1 automaticDownloadDidFailToStartForNewUpdateAvailable:(id)arg2 withError:(id)arg3 ;
-(void)client:(id)arg1 downloadDidStart:(id)arg2 ;
-(void)client:(id)arg1 downloadProgressDidChange:(id)arg2 ;
-(void)client:(id)arg1 downloadDidFail:(id)arg2 withError:(id)arg3 ;
-(void)client:(id)arg1 downloadDidFinish:(id)arg2 ;
-(void)client:(id)arg1 downloadWasInvalidatedForNewUpdateAvailable:(id)arg2 ;
-(void)client:(id)arg1 installDidStart:(id)arg2 ;
-(void)client:(id)arg1 installDidFail:(id)arg2 withError:(id)arg3 ;
-(void)client:(id)arg1 installDidFinish:(id)arg2 ;
@end

