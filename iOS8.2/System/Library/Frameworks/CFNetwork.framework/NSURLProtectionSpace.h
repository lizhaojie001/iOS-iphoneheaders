/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:18:15 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CFNetwork/CFNetwork-Structs.h>
#import <CFNetwork/NSSecureCoding.h>
#import <CFNetwork/NSCopying.h>

@class NSURLProtectionSpaceInternal, NSString;

@interface NSURLProtectionSpace : NSObject <NSSecureCoding, NSCopying> {

	NSURLProtectionSpaceInternal* _internal;

}

@property (copy,readonly) NSString * realm; 
@property (readonly) char receivesCredentialSecurely; 
@property (readonly) char isProxy; 
@property (copy,readonly) NSString * host; 
@property (readonly) int port; 
@property (copy,readonly) NSString * proxyType; 
@property (copy,readonly) NSString * protocol; 
@property (copy,readonly) NSString * authenticationMethod; 
+(char)supportsSecureCoding;
-(CFURLProtectionSpaceRef)_cfurlprtotectionspace;
-(id)_internalInit;
-(char)receivesCredentialSecurely;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(char)isEqual:(id)arg1 ;
-(char)isProxy;
-(unsigned)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)host;
-(NSString *)authenticationMethod;
-(NSString *)protocol;
-(int)port;
-(id)_initWithCFURLProtectionSpace:(CFURLProtectionSpaceRef)arg1 ;
-(NSString *)realm;
-(CFURLProtectionSpaceRef)_CFURLProtectionSpace;
-(id)initWithProxyHost:(id)arg1 port:(int)arg2 type:(id)arg3 realm:(id)arg4 authenticationMethod:(id)arg5 ;
-(id)initWithHost:(id)arg1 port:(int)arg2 protocol:(id)arg3 realm:(id)arg4 authenticationMethod:(id)arg5 ;
-(id)distinguishedNames;
-(SecTrustRef)serverTrust;
-(NSString *)proxyType;
@end

