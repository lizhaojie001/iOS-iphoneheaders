/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:35:01 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/iCloudNotification.framework/ind
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <ind/APSConnectionDelegate.h>
#import <ind/FAFamilyNotificationDelegate.h>
#import <ind/INDaemonProtocol.h>
#import <ind/NSXPCListenerDelegate.h>

@class NSXPCListener, NSMutableArray, ACAccountStore, INRegistrationDigestCache, INHeartbeatActivity, NSString, INRegistrar, APSConnection, FAFamilyNotifier, NSDictionary;

@interface INDaemon : NSObject <APSConnectionDelegate, FAFamilyNotificationDelegate, INDaemonProtocol, NSXPCListenerDelegate> {

	BOOL _isRunning;
	NSXPCListener* _listener;
	NSMutableArray* _clientConnections;
	ACAccountStore* _accountStore;
	BOOL _isFirstLaunchAfterBoot;
	BOOL _hasCheckedForFirstLaunch;
	INRegistrationDigestCache* _registrationDigestCache;
	INHeartbeatActivity* _hearbeatActivity;
	NSString* _activeAPSEnvironment;
	INRegistrar* _registrar;
	APSConnection* _apsConnection;
	FAFamilyNotifier* _familyNotifier;
	NSDictionary* _pushNotificationHandlersByEventType;

}

@property (nonatomic,readonly) FAFamilyNotifier * familyNotifier;              //@synthesize familyNotifier=_familyNotifier - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(void)_registrationDigestCacheDidBecomeAvailable:(id)arg1 ;
-(void)_loadPushNotificationHandlers;
-(void)_performHeartbeatRegistration;
-(void)_configureXPCEventStreamHandler;
-(void)_validateEnabledTopics;
-(void)_validateRegistrationStateIfFirstLaunch;
-(void)_handleDeviceNameChangeEvent;
-(void)_registerForPushNotificationsWithAccount:(id)arg1 reason:(unsigned long long)arg2 completion:(/*^block*/id)arg3 ;
-(void)_ensureDesiredAPSEnvironmentIsInUse;
-(void)_enablePushTopics;
-(void)_planForRegistrationTTL:(unsigned long long)arg1 account:(id)arg2 ;
-(void)_cleanUpIfNoAccountsAreLeftOtherThanAccount:(id)arg1 ;
-(void)_disablePushTopics;
-(BOOL)_isFirstLaunchAfterBoot;
-(FAFamilyNotifier *)familyNotifier;
-(void)dealloc;
-(id)init;
-(void)start;
-(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(void)connection:(id)arg1 didReceivePublicToken:(id)arg2 ;
-(void)connection:(id)arg1 didReceiveIncomingMessage:(id)arg2 ;
-(void)didActivateFamilyNotification:(id)arg1 ;
-(void)didDismissFamilyNotification:(id)arg1 ;
-(void)didClearFamilyNotification:(id)arg1 ;
-(void)registerAccountWithID:(id)arg1 foriCloudNotificationsWithReason:(unsigned long long)arg2 completion:(/*^block*/id)arg3 ;
-(void)unregisterAccountWithID:(id)arg1 fromiCloudNotificationsWithCompletion:(/*^block*/id)arg2 ;
-(void)clearAllRegistrationDigestsWithCompletion:(/*^block*/id)arg1 ;
-(void)diagnosticReportWithCompletion:(/*^block*/id)arg1 ;
@end

