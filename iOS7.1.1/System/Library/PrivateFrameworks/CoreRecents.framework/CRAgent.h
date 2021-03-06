/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 3:49:38 AM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/CoreRecents.framework/recentsd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_xpc_object;
@class NSObject, _CRRecentsLibrary;

@interface CRAgent : NSObject {

	NSObject<OS_xpc_object>* _listener;
	_CRRecentsLibrary* _library;

}
-(void)_lockStateChanged:(id)arg1 ;
-(void)peerEventHandler:(id)arg1 event:(id)arg2 ;
-(void)startListeningForXPCServiceRequests;
-(void)eventHandler:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(void)start;
-(void)stop;
@end

