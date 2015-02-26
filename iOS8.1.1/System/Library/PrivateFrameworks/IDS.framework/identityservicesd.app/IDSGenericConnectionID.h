/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:32:08 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/identityservicesd.app/identityservicesd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <identityservicesd/identityservicesd-Structs.h>
#import <identityservicesd/NSCopying.h>

@class NSString;

@interface IDSGenericConnectionID : NSObject <NSCopying> {

	NSString* _account;
	NSString* _service;
	NSString* _domain;
	unsigned long long _hash;

}

@property (nonatomic,copy,readonly) NSString * account;              //@synthesize account=_account - In the implementation block
@property (nonatomic,copy,readonly) NSString * service;              //@synthesize service=_service - In the implementation block
@property (nonatomic,copy,readonly) NSString * domain;               //@synthesize domain=_domain - In the implementation block
+(id)idWithAccount:(id)arg1 service:(id)arg2 domain:(id)arg3 ;
-(id)initWithAccount:(id)arg1 service:(id)arg2 domain:(id)arg3 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSString *)domain;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)account;
-(NSString *)service;
@end
