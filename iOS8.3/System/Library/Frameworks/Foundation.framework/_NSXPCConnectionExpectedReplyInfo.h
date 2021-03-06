/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, June 24, 2015 at 10:50:43 PM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSBlock, NSXPCInterface, NSDictionary;

@interface _NSXPCConnectionExpectedReplyInfo : NSObject {

	NSBlock* _replyBlock;
	/*^block*/id _errorBlock;
	/*^block*/id _cleanupBlock;
	SEL _selector;
	NSXPCInterface* _interface;
	NSDictionary* _userInfo;
	unsigned long long _proxyNumber;

}

@property (assign) SEL selector;                                //@synthesize selector=_selector - In the implementation block
@property (copy) NSBlock * replyBlock;                          //@synthesize replyBlock=_replyBlock - In the implementation block
@property (copy) id errorBlock;                                 //@synthesize errorBlock=_errorBlock - In the implementation block
@property (copy) id cleanupBlock;                               //@synthesize cleanupBlock=_cleanupBlock - In the implementation block
@property (retain) NSXPCInterface * interface;                  //@synthesize interface=_interface - In the implementation block
@property (retain) NSDictionary * userInfo;                     //@synthesize userInfo=_userInfo - In the implementation block
@property (assign) unsigned long long proxyNumber;              //@synthesize proxyNumber=_proxyNumber - In the implementation block
-(NSBlock *)replyBlock;
-(unsigned long long)proxyNumber;
-(id)cleanupBlock;
-(id)errorBlock;
-(void)setProxyNumber:(unsigned long long)arg1 ;
-(void)setReplyBlock:(NSBlock *)arg1 ;
-(void)setErrorBlock:(id)arg1 ;
-(void)setCleanupBlock:(id)arg1 ;
-(void)dealloc;
-(void)setSelector:(SEL)arg1 ;
-(void)setUserInfo:(NSDictionary *)arg1 ;
-(SEL)selector;
-(NSDictionary *)userInfo;
-(NSXPCInterface *)interface;
-(void)setInterface:(NSXPCInterface *)arg1 ;
@end

