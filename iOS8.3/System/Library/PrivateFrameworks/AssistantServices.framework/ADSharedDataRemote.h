/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 12:46:37 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/assistantd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <assistantd/ADPeerRemoteConnectionDelegate.h>

@protocol OS_dispatch_queue;
@class NSObject, ADPeerRemoteConnection, ADSharedData, NSString;

@interface ADSharedDataRemote : NSObject <ADPeerRemoteConnectionDelegate> {

	NSObject*<OS_dispatch_queue> _queue;
	ADPeerRemoteConnection* _peerConnection;
	ADSharedData* _data;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)pushSharedDataToPeer:(/*^block*/id)arg1 ;
-(void)remoteConnection:(id)arg1 handlePBSubclass:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_sharedDataDidChange:(id)arg1 ;
-(void)_getDataWithCompletion:(/*^block*/id)arg1 ;
-(id)_setDataFromSharedData:(id)arg1 ;
-(void)_getDataWithPBCompletion:(/*^block*/id)arg1 ;
-(void)dealloc;
-(id)init;
-(void)_sendData:(id)arg1 ;
@end
