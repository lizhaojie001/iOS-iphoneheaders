/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:25:31 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/IAP.framework/Support/iapd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <iapd/iapd-Structs.h>
@class NSMutableDictionary, NSLock;

@interface EAManager : NSObject {

	NSMutableDictionary* _connectedAccessories;
	map<unsigned int, NSNumber *, std::__1::less<unsigned int>, std::__1::allocator<std::__1::pair<const unsigned int, NSNumber *> > >* _connectionIDMap;
	NSLock* _connectedAccessoriesLock;
	char _fakedLocationDeviceEnabled;
	char _fakedLocationDeviceFilteringSupport;
	NSMutableDictionary* _clients;
	NSLock* _clientLock;

}

@property (assign,nonatomic) char fakedLocationDeviceFilteringSupport;              //@synthesize fakedLocationDeviceFilteringSupport=_fakedLocationDeviceFilteringSupport - In the implementation block
+(id)newPlistForAccessory:(id)arg1 ;
+(unsigned)generateClientID;
+(id)stringForClientID:(unsigned)arg1 ;
+(void)_updatePlistWithAccessoryProtocolsInternal:(id)arg1 ;
+(id)sharedManager;
-(void)detachAccessory:(unsigned)arg1 ;
-(void)notifyOfAccessoryConnectionEvent:(BOOL)arg1 ;
-(char)sessionsOpenForDisplayIdentifer:(const char*)arg1 ;
-(void)removeClientForXPCConnection:(id)arg1 ;
-(void)_dpServiceWithFirmwareVersionFound:(id)arg1 ;
-(void)_shouldPostNoAppAlert:(id)arg1 ;
-(void)_takeClientAssertionsForAccessoryConnection;
-(void)logAccessoryAttach:(id)arg1 reason:(id)arg2 ;
-(void)_takeClientAssertionsForAccessoryDisconnection;
-(void)logAccessoryDetach:(id)arg1 reason:(id)arg2 ;
-(char)_isProtocolContainedInWhitelist:(id)arg1 ;
-(void)_unregisteredClientAssertionTimerFired:(id)arg1 ;
-(id)connectionIDObjectForConnectionID:(unsigned)arg1 ;
-(void)updateValueFromApp:(id)arg1 ;
-(void)takeProcessAssertionForBundleID:(id)arg1 ;
-(char)closeSessionForConnectionID:(unsigned)arg1 sessionID:(unsigned short)arg2 notifyApp:(char)arg3 ;
-(void)_notifyiap2dOfAccessoryConnectionEvent:(BOOL)arg1 ;
-(void)updateValueFromIap:(id)arg1 forPort:(id)arg2 andPortPorperty:(id)arg3 forAccessory:(unsigned)arg4 updateApp:(char)arg5 ;
-(id)accessoryForConnectionID:(id)arg1 ;
-(unsigned)addClient:(unsigned)arg1 withAuditToken:(SCD_Struct_EA0)arg2 currentClientID:(unsigned)arg3 xpcConnection:(id)arg4 andBundleId:(id)arg5 ;
-(unsigned)clientIDForDisplayIdentifier:(const char*)arg1 ;
-(void)attachAccessory:(const IPodAccessoryDetails*)arg1 forTransport:(IPodTransport*)arg2 ;
-(void)updateAccessoryProtocols:(const IPodAccessoryDetails*)arg1 ;
-(void)updateAccessoryInfo:(const IPodAccessoryDetails*)arg1 ;
-(void)updateSpeakerMenu:(unsigned)arg1 withEqNames:(id)arg2 andSelection:(unsigned)arg3 ;
-(void)updateSpeakerEqIndex:(unsigned)arg1 eqIndex:(unsigned)arg2 ;
-(void)updateLocationSupport:(unsigned)arg1 isReady:(char)arg2 ;
-(void)updateValueFromIap:(id)arg1 forPort:(id)arg2 andPortPorperty:(id)arg3 forAccessory:(unsigned)arg4 ;
-(id)valueForProperty:(id)arg1 forAccessory:(unsigned)arg2 ;
-(id)sessionForAccessoryWithConnectionID:(unsigned)arg1 andSessionID:(unsigned short)arg2 ;
-(char)openSessionForClientID:(unsigned)arg1 connetionID:(unsigned)arg2 protocolID:(unsigned char)arg3 sessionID:(unsigned short*)arg4 ;
-(void)openCompleteForSessionWithConnectionID:(unsigned)arg1 sessionID:(unsigned short)arg2 ;
-(void)fakedLocationDeviceNMEAAvailable;
-(void)fakedLocationDevicePointDataAvailable;
-(void)fakedLocationDeviceEphemerisURLAvailable;
-(void)fakedLocationDeviceEphemerisMaxIntervalAvailable;
-(void)fakedLocationDeviceEphemerisRefreshIntervalAvailable;
-(void)fakedLocationRequestGPSTime;
-(void)fakedLocationDeviceSetFilter:(id)arg1 ;
-(void)fakedLocationDeviceFilteringSupport:(char)arg1 ;
-(char)isFakedLocationDeviceEnabled;
-(void)setFakedLocationDeviceEnabled:(char)arg1 forClientID:(unsigned)arg2 ;
-(void)updatePlistWithProtocolsForAccessory:(id)arg1 ;
-(char)fakedLocationDeviceFilteringSupport;
-(void)setFakedLocationDeviceFilteringSupport:(char)arg1 ;
-(id)connectedAccessories;
-(void)dealloc;
-(id)init;
-(void)reset;
-(void)_applicationStateChanged:(id)arg1 ;
@end

