/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:18:12 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface MPServerObjectProxy : NSObject {

	unsigned _didPrepareForRemoteSelectorInvocation : 1;
	unsigned _lastPrepareForRemoteSelectorInvocationTimedOut : 1;
	double _lastPrepareAttemptTime;

}
+(id)_center;
-(BOOL)prepareForRemoteSelectorInvocation;
-(void)didPrepareForRemoteSelectorInvocation;
-(void)serverConnectionDied;
-(void)_messagingCenterDied:(id)arg1 ;
-(BOOL)_performRemoteSelector:(SEL)arg1 userInfo:(id)arg2 timeout:(double)arg3 ;
-(id)_performRemoteSelectorAndReceiveReply:(SEL)arg1 userInfo:(id)arg2 timeout:(double)arg3 ;
-(void)_serverConnectionDied;
-(BOOL)prepareForRemoteSelectorInvocationWithTimeout:(double*)arg1 ;
-(void)dealloc;
-(id)init;
-(void)forwardInvocation:(id)arg1 ;
@end

