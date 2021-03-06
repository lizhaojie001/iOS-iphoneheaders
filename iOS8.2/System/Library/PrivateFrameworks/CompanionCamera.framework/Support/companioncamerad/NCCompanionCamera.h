/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:25:09 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/CompanionCamera.framework/Support/companioncamerad
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <companioncamerad/NMSMessageCenterDelegate.h>
#import <companioncamerad/CCCameraServerProtocol.h>
#import <companioncamerad/NSXPCListenerDelegate.h>

@class NMSMessageCenter, NSXPCListener, NSXPCConnection, NSString;

@interface NCCompanionCamera : NSObject <NMSMessageCenterDelegate, CCCameraServerProtocol, NSXPCListenerDelegate> {

	NMSMessageCenter* _messageCenter;
	NSXPCListener* _cameraListener;
	NSXPCConnection* _activeCamera;
	double _shutterLastPressed;
	double _lastCloseMessageTime;
	char _shouldForceMode;
	char _didOpenFromLockScreen;
	int _lastMode;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)openCamera:(id)arg1 ;
-(void)pressShutter:(id)arg1 ;
-(void)closeCamera:(id)arg1 ;
-(void)beginVideo:(id)arg1 ;
-(void)endVideo:(id)arg1 ;
-(void)setFocusPoint:(id)arg1 ;
-(void)cancelCountdown:(id)arg1 ;
-(void)_sendMode:(int)arg1 ;
-(void)_sendOrientationMirroringUpdates;
-(id)makeRequest:(unsigned short)arg1 ;
-(void)connectionDidTearDown:(id)arg1 ;
-(void)messageCenter:(id)arg1 isConnectedDidChange:(char)arg2 ;
-(void)_sendStateChange:(int)arg1 ;
-(void)dealloc;
-(id)init;
-(char)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(void)checkin;
-(void)setCameraMode:(id)arg1 ;
-(void)photoTaken:(id)arg1 ;
-(oneway void)xpc_modeSelected:(int)arg1 ;
-(oneway void)xpc_orientationChanged:(int)arg1 ;
-(oneway void)xpc_mirroringChanged:(char)arg1 ;
-(oneway void)xpc_countdownCanceled;
@end

