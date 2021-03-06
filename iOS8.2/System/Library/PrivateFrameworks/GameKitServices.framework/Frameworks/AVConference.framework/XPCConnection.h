/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:25:22 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/GameKitServices.framework/Frameworks/AVConference.framework/AVConference
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_xpc_object;
@class NSObject, NSData;

@interface XPCConnection : NSObject {

	NSObject*<OS_xpc_object> connection;
	int pid;
	id context;
	NSData* tokenData;

}

@property (assign) NSObject*<OS_xpc_object> connection; 
@property (assign) int pid; 
@property (nonatomic,retain) id context; 
@property (nonatomic,retain) NSData * tokenData; 
-(void)dealloc;
-(id)init;
-(id)description;
-(id)context;
-(void)setContext:(id)arg1 ;
-(NSObject*<OS_xpc_object>)connection;
-(void)setConnection:(NSObject*<OS_xpc_object>)arg1 ;
-(void)setTokenData:(NSData *)arg1 ;
-(int)pid;
-(void)setPid:(int)arg1 ;
-(NSData *)tokenData;
@end

