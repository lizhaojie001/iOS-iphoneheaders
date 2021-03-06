/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 1:57:53 AM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class ATConnection;

@interface SBModelessSyncController : NSObject {

	BOOL _isAppSyncing;
	BOOL _isSyncing;
	int _syncRegistrationToken;
	int _iCloudRestoreToken;
	BOOL _restoringFromICloud;
	BOOL _isAutoSyncing;
	BOOL _isWirelessSyncing;
	ATConnection* _airTrafficConnection;

}

@property (nonatomic,readonly) BOOL isAppSyncing;                       //@synthesize isAppSyncing=_isAppSyncing - In the implementation block
@property (nonatomic,readonly) BOOL isSyncing;                          //@synthesize isSyncing=_isSyncing - In the implementation block
@property (nonatomic,readonly) BOOL isRestoringFromICloud; 
@property (nonatomic,readonly) BOOL isAutoSyncing;                      //@synthesize isAutoSyncing=_isAutoSyncing - In the implementation block
@property (nonatomic,readonly) BOOL isWirelessSyncing;                  //@synthesize isWirelessSyncing=_isWirelessSyncing - In the implementation block
+(id)sharedInstance;
-(BOOL)isSyncing;
-(void)gotLowBatteryWarning;
-(BOOL)isWirelessSyncing;
-(BOOL)isAutoSyncing;
-(BOOL)isAppSyncing;
-(void)_appSyncStateChanged;
-(void)setIsSyncing:(BOOL)arg1 ;
-(void)_beginObservingICloudRestoreStatus;
-(void)_endObservingICloudRestoreStatus;
-(void)_setAppSyncState:(BOOL)arg1 ;
-(void)_updateIconsForStateChange;
-(void)_iCloudStatusChanged;
-(BOOL)isRestoringFromICloud;
-(void)connection:(id)arg1 updatedProgress:(id)arg2 ;
-(void)endMonitoring;
-(void)beginMonitoring;
-(void)dealloc;
-(id)init;
-(void)connectionWasInterrupted:(id)arg1 ;
@end

