/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:19:15 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/NSXPCConnectionDelegate.h>

@class NSError, _UIAsyncInvocation, NSString, _UIRemoteViewService, BKSProcessAssertion, NSXPCConnection;

@interface _UIViewServiceInterface : NSObject <NSXPCConnectionDelegate> {

	int _terminationStateLock;
	NSError* _terminationError;
	/*^block*/id _terminationHandler;
	BOOL _isTerminated;
	_UIAsyncInvocation* _terminateInvocation;
	NSString* _serviceBundleIdentifier;
	_UIRemoteViewService* _service;
	BKSProcessAssertion* _serviceProcessAssertion;
	NSXPCConnection* _serviceConnection;
	int __automatic_invalidation_retainCount;
	BOOL __automatic_invalidation_invalidated;

}

@property (nonatomic,readonly) int servicePID; 
@property (nonatomic,readonly) SCD_Struct_UI28 serviceAuditToken; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)connectToViewServiceWithBundleIdentifier:(id)arg1 deputyInterfaces:(id)arg2 connectionHandler:(/*^block*/id)arg3 ;
+(id)connectToViewService:(id)arg1 deputyInterfaces:(id)arg2 connectionHandler:(/*^block*/id)arg3 ;
-(id)retain;
-(void)dealloc;
-(unsigned long long)retainCount;
-(BOOL)_tryRetain;
-(BOOL)_isDeallocating;
-(id)disconnect;
-(int)__automatic_invalidation_logic;
-(id)connectToDeputyWithInterface:(id)arg1 fromExportedHostingObject:(id)arg2 connectionHandler:(/*^block*/id)arg3 ;
-(id)_terminateWithError:(id)arg1 ;
-(void)setTerminationHandler:(/*^block*/id)arg1 ;
-(void)_terminateUnconditionallyThen:(/*^block*/id)arg1 ;
-(int)servicePID;
-(SCD_Struct_UI28)serviceAuditToken;
-(void)connection:(id)arg1 handleInvocation:(id)arg2 isReply:(BOOL)arg3 ;
-(id)_initWithConnectionInfo:(SCD_Struct_UI52)arg1 serviceBundleIdentifier:(id)arg2 deputyInterfaces:(id)arg3 ;
-(id)_initWithConnectionInfo:(SCD_Struct_UI52)arg1 service:(id)arg2 deputyInterfaces:(id)arg3 ;
-(id)_initWithConnectionInfo:(SCD_Struct_UI52)arg1 serviceBundleIdentifier:(id)arg2 service:(id)arg3 deputyInterfaces:(id)arg4 ;
-(oneway void)release;
@end
