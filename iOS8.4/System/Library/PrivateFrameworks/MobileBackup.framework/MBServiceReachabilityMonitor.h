/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:23:41 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/MobileBackup.framework/backupd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@protocol MBServiceReachabilityMonitorDelegate, OS_dispatch_queue;
#import <backupd/backupd-Structs.h>
@class NSObject;

@interface MBServiceReachabilityMonitor : NSObject {

	id<MBServiceReachabilityMonitorDelegate> _delegate;
	BOOL _isMonitoring;
	BOOL _isInternetReachableViaWiFi;
	SCNetworkReachabilityRef _reachability;
	NSObject*<OS_dispatch_queue> _callbackQueue;

}

@property (assign) id<MBServiceReachabilityMonitorDelegate> delegate;                                //@synthesize delegate=_delegate - In the implementation block
@property (assign,setter=setMonitoring:,getter=isMonitoring,nonatomic) BOOL monitoring; 
-(BOOL)isMonitoring;
-(void)_startMonitoring;
-(void)_stopMonitoring;
-(void)dealloc;
-(void)setDelegate:(id<MBServiceReachabilityMonitorDelegate>)arg1 ;
-(id)init;
-(id<MBServiceReachabilityMonitorDelegate>)delegate;
-(void)setMonitoring:(BOOL)arg1 ;
-(BOOL)isInternetReachableViaWiFi;
-(void)_reachabilityCallback:(unsigned)arg1 ;
@end

