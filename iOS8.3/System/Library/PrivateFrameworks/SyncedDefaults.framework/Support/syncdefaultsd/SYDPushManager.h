/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 3:44:51 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/SyncedDefaults.framework/Support/syncdefaultsd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <syncdefaultsd/APSConnectionDelegate.h>

@protocol OS_dispatch_queue;
@class NSString, NSData, APSConnection, NSObject, NSMutableSet;

@interface SYDPushManager : NSObject <APSConnectionDelegate> {

	NSString* _environment;
	NSString* _user;
	double _lastUpdateOnServer;
	NSData* _lastTokenOnServer;
	NSData* _lastSeenToken;
	double _refreshInterval;
	APSConnection* _apsConnection;
	NSString* _currentAPSConnectionEnvironment;
	NSObject*<OS_dispatch_queue> _queue;
	long _peerCount;
	NSString* _pushTopicState;
	NSMutableSet* _trackedApps;

}

@property (nonatomic,readonly) NSString * environment;                  //@synthesize environment=_environment - In the implementation block
@property (nonatomic,readonly) NSString * user;                         //@synthesize user=_user - In the implementation block
@property (nonatomic,readonly) long peerCount;                          //@synthesize peerCount=_peerCount - In the implementation block
@property (nonatomic,readonly) NSString * pushTopicState;               //@synthesize pushTopicState=_pushTopicState - In the implementation block
@property (nonatomic,readonly) NSMutableSet * trackedApps;              //@synthesize trackedApps=_trackedApps - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_setupAPSConnection;
-(void)_updatePushTopic;
-(void)_cleanupAPSConnection;
-(id)initWithPersistentState:(id)arg1 ;
-(void)setEnvironment:(id)arg1 forUser:(id)arg2 refreshInterval:(double)arg3 ;
-(double)nextUpdateInterval;
-(void)resetUpdates;
-(void)didUpdateTokenOnServer:(id)arg1 ;
-(void)peerConnected:(id)arg1 ;
-(void)peerDisconnected:(id)arg1 ;
-(NSString *)pushTopicState;
-(NSMutableSet *)trackedApps;
-(void)dealloc;
-(NSString *)environment;
-(void)shutdown;
-(void)connection:(id)arg1 didReceivePublicToken:(id)arg2 ;
-(void)connection:(id)arg1 didReceiveMessageForTopic:(id)arg2 userInfo:(id)arg3 ;
-(id)publicToken;
-(NSString *)user;
-(double)refreshInterval;
-(long)peerCount;
-(char)needsUpdate;
-(id)persistentState;
@end

