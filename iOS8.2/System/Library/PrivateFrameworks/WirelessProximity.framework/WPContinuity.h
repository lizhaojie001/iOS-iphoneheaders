/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:21:27 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/WirelessProximity.framework/WirelessProximity
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <WirelessProximity/XPCClientDelegate.h>

@protocol WPContinuityDelegate;
@class XPCClient, NSString;

@interface WPContinuity : NSObject <XPCClientDelegate> {

	int _state;
	int _btBandwidthState;
	id<WPContinuityDelegate> _delegate;
	XPCClient* _connection;

}

@property (assign) int state;                                                       //@synthesize state=_state - In the implementation block
@property (assign) int btBandwidthState;                                            //@synthesize btBandwidthState=_btBandwidthState - In the implementation block
@property (assign,nonatomic,__weak) id<WPContinuityDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) XPCClient * connection;                                //@synthesize connection=_connection - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)updateState:(int)arg1 ;
-(void)connectionInterrupted;
-(void)dealloc;
-(void)setDelegate:(id<WPContinuityDelegate>)arg1 ;
-(id<WPContinuityDelegate>)delegate;
-(int)state;
-(void)setState:(int)arg1 ;
-(XPCClient *)connection;
-(void)setConnection:(XPCClient *)arg1 ;
-(id)initWithDelegate:(id)arg1 queue:(id)arg2 ;
-(void)stopAdvertisingOfType:(int)arg1 ;
-(void)stopScanningForType:(int)arg1 ;
-(void)connectToPeer:(id)arg1 ;
-(void)disconnectFromPeer:(id)arg1 ;
-(void)startTrackingPeer:(id)arg1 ;
-(void)stopTrackingPeer:(id)arg1 ;
-(void)messageArrived:(id)arg1 ;
-(void)connectionDied;
-(void)startScanningForType:(int)arg1 withData:(id)arg2 peers:(id)arg3 ;
-(void)updateBluetoothBandwidthState:(int)arg1 ;
-(int)btBandwidthState;
-(void)setBtBandwidthState:(int)arg1 ;
-(void)startAdvertisingOfType:(int)arg1 withData:(id)arg2 ;
-(void)startScanningForType:(int)arg1 withData:(id)arg2 ;
-(void)sendData:(id)arg1 toPeer:(id)arg2 ;
@end

