/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 3:41:12 AM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/CertUI.framework/certui_relay
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableDictionary, NSTimer;

@interface CertUIRelay : NSObject {

	NSMutableDictionary* _promptsForDigest;
	BOOL _waitingOnPrompt;
	int _outstandingRequestCount;
	NSTimer* _killTimer;

}
-(id)_relayCenter;
-(void)_shutdown;
-(void)_killTimerFired;
-(void)_registerReply;
-(void)_showNextPrompt;
-(void)_registerNewRequest;
-(id)_uniqueDigest;
-(void)_trustInfoMessageReceived:(id)arg1 userInfo:(id)arg2 ;
-(void)_centerDiedWithNotification:(id)arg1 ;
-(void)dealloc;
-(id)init;
@end

