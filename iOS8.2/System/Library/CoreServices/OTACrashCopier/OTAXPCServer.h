/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:23:16 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/CoreServices/OTACrashCopier
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_xpc_object, OS_dispatch_queue;
@class NSString, NSObject;

@interface OTAXPCServer : NSObject {

	NSString* _serviceName;
	NSString* _connectionEntitlement;
	NSObject*<OS_xpc_object> _serverConn;
	NSObject*<OS_dispatch_queue> _targetQueue;
	/*^block*/id _messageHandler;
	/*^block*/id _errorHandler;

}

@property (nonatomic,copy,readonly) NSString * serviceName;               //@synthesize serviceName=_serviceName - In the implementation block
@property (nonatomic,copy) NSString * connectionEntitlement;              //@synthesize connectionEntitlement=_connectionEntitlement - In the implementation block
@property (nonatomic,copy) id messageHandler;                             //@synthesize messageHandler=_messageHandler - In the implementation block
@property (nonatomic,copy) id errorHandler;                               //@synthesize errorHandler=_errorHandler - In the implementation block
-(id)initWithServiceName:(id)arg1 targetQueue:(id)arg2 ;
-(void)_handleConnectionEvent:(id)arg1 forConnection:(id)arg2 ;
-(void)_handleError:(id)arg1 forConnection:(id)arg2 ;
-(NSString *)connectionEntitlement;
-(void)setConnectionEntitlement:(NSString *)arg1 ;
-(void)dealloc;
-(void)start;
-(void)_handleNewConnection:(id)arg1 ;
-(NSString *)serviceName;
-(void)setErrorHandler:(id)arg1 ;
-(id)errorHandler;
-(id)messageHandler;
-(void)setMessageHandler:(id)arg1 ;
@end

