/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:21:15 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <StoreServices/StoreServices-Structs.h>
#import <StoreServices/NSCoding.h>
#import <StoreServices/SSXPCCoding.h>
#import <StoreServices/NSCopying.h>

@protocol OS_dispatch_queue;
@class NSObject, NSMutableDictionary, NSString;

@interface SSNetworkConstraints : NSObject <NSCoding, SSXPCCoding, NSCopying> {

	NSObject*<OS_dispatch_queue> _dispatchQueue;
	NSMutableDictionary* _sizeLimits;

}

@property (getter=isAnyNetworkTypeEnabled,readonly) char anyNetworkTypeEnabled; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)newNetworkConstraintsByDownloadKindFromURLBag:(id)arg1 ;
+(id)_newModernNetworkConstraintsWithArray:(id)arg1 ;
+(id)_newLegacyNetworkConstraintsWithDictionary:(id)arg1 ;
+(void)_addNetworkConstraintsToDictionary:(id)arg1 forNetworkType:(int)arg2 legacyDictionary:(id)arg3 ;
-(long long)sizeLimitForNetworkType:(int)arg1 ;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(char)isEqual:(id)arg1 ;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithXPCEncoding:(id)arg1 ;
-(id)copyXPCEncoding;
-(void)setSizeLimit:(long long)arg1 forNetworkType:(int)arg2 ;
-(void)_setSizeLimit:(long long)arg1 forNetworkType:(int)arg2 ;
-(long long)_sizeLimitForNetworkType:(int)arg1 ;
-(void)_disableAllNetworkTypes;
-(id)_copySizeLimits;
-(void)setAllNetworkTypesDisabled;
-(void)disableCellularNetworkTypes;
-(char)hasSizeLimitForNetworkType:(int)arg1 ;
-(void)setSizeLimitsWithStoreConstraintDictionary:(id)arg1 ;
-(char)isAnyNetworkTypeEnabled;
@end
