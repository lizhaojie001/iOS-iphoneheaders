/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:22:48 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <HealthDaemon/HealthDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <HealthDaemon/NSCopying.h>

@class NSData;

@interface HDCodableAchievement : PBCodable <NSCopying> {

	long long _achievementType;
	double _completedDate;
	double _doubleValue;
	long long _intValue;
	NSData* _extraData;
	NSData* _uuid;
	SCD_Struct_HD7 _has;

}

@property (nonatomic,readonly) BOOL hasUuid; 
@property (nonatomic,retain) NSData * uuid;                          //@synthesize uuid=_uuid - In the implementation block
@property (assign,nonatomic) BOOL hasAchievementType; 
@property (assign,nonatomic) long long achievementType;              //@synthesize achievementType=_achievementType - In the implementation block
@property (assign,nonatomic) BOOL hasCompletedDate; 
@property (assign,nonatomic) double completedDate;                   //@synthesize completedDate=_completedDate - In the implementation block
@property (assign,nonatomic) BOOL hasDoubleValue; 
@property (assign,nonatomic) double doubleValue;                     //@synthesize doubleValue=_doubleValue - In the implementation block
@property (assign,nonatomic) BOOL hasIntValue; 
@property (assign,nonatomic) long long intValue;                     //@synthesize intValue=_intValue - In the implementation block
@property (nonatomic,readonly) BOOL hasExtraData; 
@property (nonatomic,retain) NSData * extraData;                     //@synthesize extraData=_extraData - In the implementation block
-(id)decodedValue;
-(id)decodedUUID;
-(id)decodedCreatedDate;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(double)doubleValue;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(NSData *)uuid;
-(void)setDoubleValue:(double)arg1 ;
-(void)setHasDoubleValue:(BOOL)arg1 ;
-(BOOL)hasDoubleValue;
-(BOOL)hasUuid;
-(void)setIntValue:(long long)arg1 ;
-(void)setHasIntValue:(BOOL)arg1 ;
-(BOOL)hasIntValue;
-(void)setAchievementType:(long long)arg1 ;
-(void)setCompletedDate:(double)arg1 ;
-(void)setExtraData:(NSData *)arg1 ;
-(long long)achievementType;
-(double)completedDate;
-(void)setHasAchievementType:(BOOL)arg1 ;
-(BOOL)hasAchievementType;
-(void)setHasCompletedDate:(BOOL)arg1 ;
-(BOOL)hasCompletedDate;
-(NSData *)extraData;
-(void)setUuid:(NSData *)arg1 ;
-(BOOL)hasExtraData;
-(long long)intValue;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
@end
