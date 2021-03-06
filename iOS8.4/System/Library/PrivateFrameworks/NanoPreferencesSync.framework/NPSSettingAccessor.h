/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:23:58 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/NanoPreferencesSync.framework/NanoPreferencesSync
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString, NPSDomainAccessor;

@interface NPSSettingAccessor : NSObject {

	BOOL _hasChangesToWrite;
	NSString* _domain;
	long long _type;
	NSString* _container;
	NSString* _containerPath;
	NPSDomainAccessor* _nanoDomainAccessor;

}

@property (nonatomic,retain) NSString * domain;                                   //@synthesize domain=_domain - In the implementation block
@property (assign,nonatomic) long long type;                                      //@synthesize type=_type - In the implementation block
@property (nonatomic,retain) NSString * container;                                //@synthesize container=_container - In the implementation block
@property (nonatomic,retain) NSString * containerPath;                            //@synthesize containerPath=_containerPath - In the implementation block
@property (nonatomic,retain) NPSDomainAccessor * nanoDomainAccessor;              //@synthesize nanoDomainAccessor=_nanoDomainAccessor - In the implementation block
@property (assign,nonatomic) BOOL hasChangesToWrite;                              //@synthesize hasChangesToWrite=_hasChangesToWrite - In the implementation block
+(id)serializeObject:(id)arg1 error:(id*)arg2 ;
+(id)unserializeObject:(id)arg1 error:(id*)arg2 ;
-(id)copyKeyList;
-(BOOL)synchronize;
-(void)setType:(long long)arg1 ;
-(long long)type;
-(NSString *)domain;
-(void)setContainer:(NSString *)arg1 ;
-(NSString *)container;
-(NPSDomainAccessor *)nanoDomainAccessor;
-(void)setNanoDomainAccessor:(NPSDomainAccessor *)arg1 ;
-(void)setDomain:(NSString *)arg1 ;
-(id)initWithUserDefaultsDomain:(id)arg1 containerPath:(id)arg2 ;
-(id)initWithUserDefaultsDomain:(id)arg1 container:(id)arg2 ;
-(id)initWithNanoDomain:(id)arg1 ;
-(BOOL)synchronizeForReading;
-(BOOL)synchronizeForWriting;
-(id)serializedObjectForKey:(id)arg1 error:(id*)arg2 ;
-(BOOL)hasChangesToWrite;
-(void)setHasChangesToWrite:(BOOL)arg1 ;
-(id)objectForKey:(id)arg1 ;
-(void)setObject:(id)arg1 forKey:(id)arg2 ;
-(void)setContainerPath:(NSString *)arg1 ;
-(NSString *)containerPath;
@end

