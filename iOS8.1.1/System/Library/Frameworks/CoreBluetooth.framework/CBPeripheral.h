/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:27:52 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/Frameworks/CoreBluetooth.framework/CoreBluetooth
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreBluetooth/CoreBluetooth-Structs.h>
#import <CoreBluetooth/CBPeer.h>

@protocol CBPeripheralDelegate;
@class NSString, NSNumber, NSMutableArray, CBCentralManager, NSMutableDictionary, NSArray;

@interface CBPeripheral : CBPeer {

	id<CBPeripheralDelegate> _delegate;
	struct {
		unsigned didUpdateName : 1;
		unsigned didModifyServices : 1;
		unsigned didInvalidateServices : 1;
		unsigned didReadRSSI : 1;
		unsigned didUpdateRSSI : 1;
		unsigned didDiscoverServices : 1;
		unsigned didDiscoverIncludedServices : 1;
		unsigned didDiscoverCharacteristics : 1;
		unsigned didUpdateCharacteristicValue : 1;
		unsigned didWriteCharacteristicValue : 1;
		unsigned didNotifyCharacteristicValue : 1;
		unsigned didDiscoverDescriptors : 1;
		unsigned didUpdateDescriptorValue : 1;
		unsigned didWriteDescriptorValue : 1;
		unsigned didReceiveTimeSync : 1;
	}  _delegateFlags;
	NSString* _name;
	NSNumber* _RSSI;
	long long _state;
	NSMutableArray* _services;
	CBCentralManager* _centralManager;
	NSMutableDictionary* _attributes;
	BOOL _isConnectedToSystem;

}

@property (assign,nonatomic,__weak) id<CBPeripheralDelegate> delegate; 
@property (retain) NSString * name;                                                 //@synthesize name=_name - In the implementation block
@property (retain) NSNumber * RSSI;                                                 //@synthesize RSSI=_RSSI - In the implementation block
@property (readonly) BOOL isConnected; 
@property (assign) long long state;                                                 //@synthesize state=_state - In the implementation block
@property (retain) NSArray * services;                                              //@synthesize services=_services - In the implementation block
@property (nonatomic,readonly) BOOL isConnectedToSystem;                            //@synthesize isConnectedToSystem=_isConnectedToSystem - In the implementation block
-(void)sendMsg:(int)arg1 args:(id)arg2 ;
-(id)sendSyncMsg:(int)arg1 args:(id)arg2 ;
-(id)initWithCentralManager:(id)arg1 dictionary:(id)arg2 ;
-(void)handleDisconnection;
-(void)setOrphan;
-(void)setAttribute:(id)arg1 forHandle:(id)arg2 ;
-(void)handleConnection:(BOOL)arg1 ;
-(void)handleConnectionStateUpdated:(BOOL)arg1 ;
-(void)handleMsg:(int)arg1 args:(id)arg2 ;
-(void)removeAttributeForHandle:(id)arg1 ;
-(id)attributeForHandle:(id)arg1 ;
-(void)sendMsg:(int)arg1 requiresConnected:(BOOL)arg2 args:(id)arg3 ;
-(void)handleNameUpdated:(id)arg1 ;
-(void)handleServicesChanged:(id)arg1 ;
-(void)handleRSSIUpdated:(id)arg1 ;
-(void)handleServicesDiscovered:(id)arg1 ;
-(void)handleWritesExecuted:(id)arg1 ;
-(void)handleTimeSyncResponse:(id)arg1 ;
-(void)handleServiceIncludedServicesDiscovered:(id)arg1 ;
-(void)handleServiceCharacteristicsDiscovered:(id)arg1 ;
-(void)handleCharacteristicValueUpdated:(id)arg1 ;
-(void)handleCharacteristicValueWritten:(id)arg1 ;
-(void)handleCharacteristicValueNotifying:(id)arg1 ;
-(void)handleCharacteristicDescriptorsDiscovered:(id)arg1 ;
-(void)handleDescriptorValueUpdated:(id)arg1 ;
-(void)handleDescriptorValueWritten:(id)arg1 ;
-(void)invalidateAllAttributes;
-(void)handleAttributeEvent:(id)arg1 args:(id)arg2 attributeSelector:(SEL)arg3 delegateSelector:(SEL)arg4 delegateFlag:(BOOL)arg5 ;
-(void)handleServiceEvent:(id)arg1 serviceSelector:(SEL)arg2 delegateSelector:(SEL)arg3 delegateFlag:(BOOL)arg4 ;
-(void)handleCharacteristicEvent:(id)arg1 characteristicSelector:(SEL)arg2 delegateSelector:(SEL)arg3 delegateFlag:(BOOL)arg4 ;
-(void)handleDescriptorEvent:(id)arg1 descriptorSelector:(SEL)arg2 delegateSelector:(SEL)arg3 delegateFlag:(BOOL)arg4 ;
-(void)readRSSI;
-(void)discoverIncludedServices:(id)arg1 forService:(id)arg2 ;
-(void)reliablyWriteValues:(id)arg1 forCharacteristics:(id)arg2 ;
-(void)setBroadcastValue:(BOOL)arg1 forCharacteristic:(id)arg2 ;
-(void)readValueForDescriptor:(id)arg1 ;
-(void)writeValue:(id)arg1 forDescriptor:(id)arg2 ;
-(void)getTimeSyncData;
-(BOOL)isConnectedToSystem;
-(void)dealloc;
-(void)setDelegate:(id<CBPeripheralDelegate>)arg1 ;
-(id)description;
-(id<CBPeripheralDelegate>)delegate;
-(long long)state;
-(void)setState:(long long)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(void)setNotifyValue:(BOOL)arg1 forCharacteristic:(id)arg2 ;
-(BOOL)hasTag:(id)arg1 ;
-(void)untag:(id)arg1 ;
-(void)tag:(id)arg1 ;
-(void)setServices:(NSArray *)arg1 ;
-(void)discoverCharacteristics:(id)arg1 forService:(id)arg2 ;
-(void)discoverDescriptorsForCharacteristic:(id)arg1 ;
-(void)discoverServices:(id)arg1 ;
-(void)readValueForCharacteristic:(id)arg1 ;
-(void)writeValue:(id)arg1 forCharacteristic:(id)arg2 type:(long long)arg3 ;
-(void)setRSSI:(NSNumber *)arg1 ;
-(NSNumber *)RSSI;
-(BOOL)isConnected;
-(NSArray *)services;
@end

