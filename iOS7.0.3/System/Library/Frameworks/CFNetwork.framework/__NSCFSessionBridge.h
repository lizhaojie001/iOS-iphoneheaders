/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:51:45 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


#import <CFNetwork/CFNetwork-Structs.h>
@interface __NSCFSessionBridge : NSObject
+(id)bridgeForConfiguration:(id)arg1 session:(id)arg2 queue:(id)arg3 ;
-(id)copyTasks;
-(id)initWithConfiguration:(id)arg1 session:(id)arg2 queue:(id)arg3 ;
-(void)invalidateSession:(BOOL)arg1 withQueue:(id)arg2 completion:(/*^block*/ id)arg3 ;
-(id)dataTaskForRequest:(id)arg1 completion:(/*^block*/ id)arg2 ;
-(id)uploadTaskForRequest:(id)arg1 uploadFile:(id)arg2 bodyData:(id)arg3 completion:(/*^block*/ id)arg4 ;
-(id)downloadTaskForRequest:(id)arg1 resumeData:(id)arg2 completion:(/*^block*/ id)arg3 ;
-(void)flushStorageWithCompletionHandler:(/*^block*/ id)arg1 ;
-(void)resetStorageWithCompletionHandler:(/*^block*/ id)arg1 ;
-(const ClassicConnectionSessionRef)classicConnectionSession;
@end

