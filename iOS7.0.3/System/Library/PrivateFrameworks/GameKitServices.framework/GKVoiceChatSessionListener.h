/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:55:04 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/GameKitServices.framework/GameKitServices
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableArray, GKSessionInternal, GKRWLock;

@interface GKVoiceChatSessionListener : NSObject {

	NSMutableArray* _conferenceList;
	GKSessionInternal* _gkSession;
	GKRWLock* _rwlock;

}
-(id)initWithSession:(id)arg1 ;
-(void)dealloc;
-(void)session:(id)arg1 peer:(id)arg2 didChangeState:(int)arg3 ;
-(void)receivedNewVoiceChatOOBMessage:(id)arg1 fromPeerID:(id)arg2 ;
-(void)registerNewGKVoiceChatSession:(id)arg1 ;
-(void)removeSession:(id)arg1 ;
-(id)currentSessions;
@end

