/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:20:42 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PassKitCore/NSSecureCoding.h>

@class PKPaymentToken, PKShippingMethod;

@interface PKPayment : NSObject <NSSecureCoding> {

	PKPaymentToken* _token;
	void* _billingAddress;
	void* _shippingAddress;
	PKShippingMethod* _shippingMethod;

}

@property (nonatomic,retain) PKPaymentToken * token;                         //@synthesize token=_token - In the implementation block
@property (assign,nonatomic) void* billingAddress;                           //@synthesize billingAddress=_billingAddress - In the implementation block
@property (assign,nonatomic) void* shippingAddress;                          //@synthesize shippingAddress=_shippingAddress - In the implementation block
@property (nonatomic,retain) PKShippingMethod * shippingMethod;              //@synthesize shippingMethod=_shippingMethod - In the implementation block
+(char)supportsSecureCoding;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(PKPaymentToken *)token;
-(void)setToken:(PKPaymentToken *)arg1 ;
-(id)initWithToken:(id)arg1 ;
-(void)setShippingAddress:(void*)arg1 ;
-(void)setBillingAddress:(void*)arg1 ;
-(void)setShippingMethod:(PKShippingMethod *)arg1 ;
-(void*)shippingAddress;
-(void*)billingAddress;
-(PKShippingMethod *)shippingMethod;
@end

