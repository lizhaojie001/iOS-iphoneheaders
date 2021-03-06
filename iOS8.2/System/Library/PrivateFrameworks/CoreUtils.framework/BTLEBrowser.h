/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:19:55 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/CoreUtils.framework/CoreUtils
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreUtils/CoreUtils-Structs.h>
#import <CoreUtils/CBCentralManagerDelegate.h>

@protocol OS_dispatch_queue, OS_dispatch_source;
@class NSObject, NSSet, CBCentralManager, NSMutableDictionary, NSString;

@interface BTLEBrowser : NSObject <CBCentralManagerDelegate> {

	LogCategory* _ucat;
	NSObject*<OS_dispatch_queue> _queue;
	NSSet* _serviceUUIDs;
	/*^block*/id _foundHandler;
	/*^block*/id _lostHandler;
	/*^block*/id _updateHandler;
	/*^block*/id _stoppedHandler;
	CBCentralManager* _centralManager;
	char _started;
	NSMutableDictionary* _accessories;
	NSObject*<OS_dispatch_source> _lostTimer;

}

@property (retain) NSObject*<OS_dispatch_queue> dispatchQueue;              //@synthesize queue=_queue - In the implementation block
@property (assign) LogCategory* logCategory;                                //@synthesize ucat=_ucat - In the implementation block
@property (copy) NSSet * serviceUUIDs;                                      //@synthesize serviceUUIDs=_serviceUUIDs - In the implementation block
@property (copy) id foundHandler;                                           //@synthesize foundHandler=_foundHandler - In the implementation block
@property (copy) id lostHandler;                                            //@synthesize lostHandler=_lostHandler - In the implementation block
@property (copy) id updateHandler;                                          //@synthesize updateHandler=_updateHandler - In the implementation block
@property (copy) id stoppedHandler;                                         //@synthesize stoppedHandler=_stoppedHandler - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setUpdateHandler:(id)arg1 ;
-(id)updateHandler;
-(void)dealloc;
-(id)init;
-(void)_start;
-(void)start;
-(void)stop;
-(NSObject*<OS_dispatch_queue>)dispatchQueue;
-(void)setDispatchQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)centralManagerDidUpdateState:(id)arg1 ;
-(void)centralManager:(id)arg1 didDiscoverPeripheral:(id)arg2 advertisementData:(id)arg3 RSSI:(id)arg4 ;
-(void)_stop:(long)arg1 ;
-(id)stoppedHandler;
-(void)setStoppedHandler:(id)arg1 ;
-(void)_lostTimer;
-(LogCategory*)logCategory;
-(void)setLogCategory:(LogCategory*)arg1 ;
-(NSSet *)serviceUUIDs;
-(void)setServiceUUIDs:(NSSet *)arg1 ;
-(id)foundHandler;
-(void)setFoundHandler:(id)arg1 ;
-(id)lostHandler;
-(void)setLostHandler:(id)arg1 ;
@end

