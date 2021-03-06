/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:21:16 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <StoreServices/StoreServices-Structs.h>
#import <StoreServices/SSMetricsEvent.h>
#import <StoreServices/NSMutableCopying.h>

@class NSMutableDictionary, NSDictionary;

@interface SSMetricsMutableEvent : SSMetricsEvent <NSMutableCopying> {

	NSMutableDictionary* _mutableBody;

}

@property (nonatomic,copy,readonly) NSDictionary * bodyDictionary;              //@synthesize mutableBody=_mutableBody - In the implementation block
-(void)dealloc;
-(id)init;
-(id)debugDescription;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(void)setProperty:(id)arg1 forBodyKey:(id)arg2 ;
-(id)propertyForBodyKey:(id)arg1 ;
-(id)initWithBodyDictionary:(id)arg1 ;
-(NSDictionary *)bodyDictionary;
-(void)appendPropertiesToBody:(id)arg1 ;
-(void)addPropertiesWithDictionary:(id)arg1 ;
@end

