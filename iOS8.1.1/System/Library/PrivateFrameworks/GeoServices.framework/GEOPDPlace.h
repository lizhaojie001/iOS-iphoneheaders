/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:31:57 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <GeoServices/NSCopying.h>

@class NSMutableArray;

@interface GEOPDPlace : PBCodable <NSCopying> {

	unsigned long long _muid;
	unsigned long long _preferredMuid;
	NSMutableArray* _components;
	int _resultProviderId;
	int _status;
	SCD_Struct_GE50 _has;

}

@property (assign,nonatomic) BOOL hasMuid; 
@property (assign,nonatomic) unsigned long long muid;                       //@synthesize muid=_muid - In the implementation block
@property (assign,nonatomic) BOOL hasStatus; 
@property (assign,nonatomic) int status;                                    //@synthesize status=_status - In the implementation block
@property (assign,nonatomic) BOOL hasPreferredMuid; 
@property (assign,nonatomic) unsigned long long preferredMuid;              //@synthesize preferredMuid=_preferredMuid - In the implementation block
@property (nonatomic,retain) NSMutableArray * components;                   //@synthesize components=_components - In the implementation block
@property (assign,nonatomic) BOOL hasResultProviderId; 
@property (assign,nonatomic) int resultProviderId;                          //@synthesize resultProviderId=_resultProviderId - In the implementation block
+(id)failedPlaceDataForMuid:(unsigned long long)arg1 ;
+(id)failedPlaceData;
+(id)attributionForPlaceData:(id)arg1 type:(int)arg2 ;
-(id)bestName;
-(id)phoneNumbers;
-(BOOL)isDisputed;
-(id)spokenNameForLocale:(id)arg1 ;
-(id)copyWithoutETAComponents;
-(void)setFirstSeenTimestamp:(double)arg1 ;
-(id)_cleanedPhoneNumberForPhoneNumberRepresentation:(id)arg1 ;
-(id)_entityName;
-(void)_removeETAComponents;
-(BOOL)hasExpiredComponentsAsOf:(double)arg1 ;
-(id)businessURL;
-(id)copyWithStrippedOptionalData;
-(id)geoMapItem;
-(BOOL)isCacheable;
-(id)compactDebugDescription;
-(void)setComponents:(NSMutableArray *)arg1 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(NSMutableArray *)components;
-(int)status;
-(void)setStatus:(int)arg1 ;
-(void)setHasStatus:(BOOL)arg1 ;
-(BOOL)hasStatus;
-(unsigned long long)muid;
-(void)setResultProviderId:(int)arg1 ;
-(void)setHasResultProviderId:(BOOL)arg1 ;
-(BOOL)hasResultProviderId;
-(int)resultProviderId;
-(void)setMuid:(unsigned long long)arg1 ;
-(void)setHasMuid:(BOOL)arg1 ;
-(BOOL)hasMuid;
-(BOOL)hasPreferredMuid;
-(unsigned long long)preferredMuid;
-(void)addComponent:(id)arg1 ;
-(unsigned long long)componentsCount;
-(void)clearComponents;
-(id)componentAtIndex:(unsigned long long)arg1 ;
-(void)setPreferredMuid:(unsigned long long)arg1 ;
-(void)setHasPreferredMuid:(BOOL)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
@end

