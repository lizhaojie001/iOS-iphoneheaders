/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:53:13 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/StoreKit.framework/StoreKit
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <StoreKit/SKRequest.h>

@class NSDictionary;

@interface SKReceiptRefreshRequest : SKRequest {

	NSDictionary* _properties;

}

@property (nonatomic,readonly) NSDictionary * receiptProperties;              //@synthesize properties=_properties - In the implementation block
-(void)_handleReply:(id)arg1 ;
-(void)_sendXPCMessage;
-(BOOL)_wantsExpired;
-(BOOL)_wantsRevoked;
-(BOOL)_wantsVPP;
-(id)initWithReceiptProperties:(id)arg1 ;
-(id)receiptProperties;
-(void)dealloc;
@end

