/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 2:02:54 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/IAP.framework/Support/iapd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_xpc_object, OS_dispatch_queue;
#import <iapd/iapd-Structs.h>
@class NSMutableDictionary, NSString, NSObject, IAPXPCConnection;

@interface IAPServer : NSObject {

	CFRunLoopRef _serverRunLoop;
	struct {
		unsigned deathBecomesUs : 1;
		unsigned serverExiting : 1;
		unsigned reserved : 30;
	}  serverFlags;
	IPodEventSender* _accessoryEventHander;
	IPodEventSender* _accessoryEQEventHandler;
	IPodEventSender* _headsetEventHandler;
	char _hasSleepAssertion;
	unsigned _sleepAssertionId;
	CFBooleanRef _activationState;
	IONotificationPortRef _ioaccessoryNotifyPort;
	unsigned _dpServiceArrivedIterator;
	unsigned _dpServiceRemovedIterator;
	CFStringRef _deviceClass;
	CFStringRef _deviceProductType;
	CFRunLoopTimerRef _sleepAssertionTimer;
	int _disableSleepAssertions;
	NSMutableDictionary* _iapPortManagers;
	NSString* _dpFirmwareVersion;
	NSObject*<OS_xpc_object> _listener;
	IAPXPCConnection* _iaptransportd_connection;
	NSObject*<OS_dispatch_queue> _internalListenerQueue;

}

@property (nonatomic,readonly) NSMutableDictionary * iapPortManagers;                  //@synthesize iapPortManagers=_iapPortManagers - In the implementation block
@property (nonatomic,copy) NSString * dpFirmwareVersion;                               //@synthesize dpFirmwareVersion=_dpFirmwareVersion - In the implementation block
@property (nonatomic,retain) IAPXPCConnection * iaptransportd_connection;              //@synthesize iaptransportd_connection=_iaptransportd_connection - In the implementation block
+(void)sendAudioStateChangedNotification;
+(id)sharedIAPServer;
-(IAPXPCConnection *)iaptransportd_connection;
-(void)stopServer:(int)arg1 ;
-(void)stopServer:(int)arg1 forceExitingImmediately:(char)arg2 ;
-(void)_pollForDeathAfterPromptCompletes;
-(char)isServerStopping;
-(char)deviceActivated;
-(CFStringRef)deviceProductType;
-(void)preventIdleSleep:(int)arg1 ;
-(void)updateTransportListStates;
-(NSString *)dpFirmwareVersion;
-(void)setDpFirmwareVersion:(NSString *)arg1 ;
-(void)setIaptransportd_connection:(IAPXPCConnection *)arg1 ;
-(id)iapPortManagerForDevPort:(IPodTransport*)arg1 ;
-(void)addNewTransport:(IapTransport*)arg1 ;
-(void)removeTransport:(IapTransport*)arg1 ;
-(NSMutableDictionary *)iapPortManagers;
-(void)dealloc;
-(id)init;
-(void)run;
-(CFStringRef)deviceClass;
@end
