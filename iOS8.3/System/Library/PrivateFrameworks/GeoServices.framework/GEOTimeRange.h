/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 1:52:25 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <GeoServices/NSCopying.h>

@interface GEOTimeRange : PBCodable <NSCopying> {

	unsigned _from;
	unsigned _to;
	char _allDay;
	SCD_Struct_GE4 _has;

}

@property (assign,nonatomic) char hasFrom; 
@property (assign,nonatomic) unsigned from;               //@synthesize from=_from - In the implementation block
@property (assign,nonatomic) char hasTo; 
@property (assign,nonatomic) unsigned to;                 //@synthesize to=_to - In the implementation block
@property (assign,nonatomic) char hasAllDay; 
@property (assign,nonatomic) char allDay;                 //@synthesize allDay=_allDay - In the implementation block
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)setFrom:(unsigned)arg1 ;
-(char)hasFrom;
-(unsigned)from;
-(void)setTo:(unsigned)arg1 ;
-(void)setAllDay:(char)arg1 ;
-(id)initWithPlaceDataTimeRange:(SCD_Struct_GE144*)arg1 ;
-(unsigned)to;
-(char)isAdjacentToTimeRange:(id)arg1 ;
-(void)setHasFrom:(char)arg1 ;
-(void)setHasTo:(char)arg1 ;
-(char)hasTo;
-(void)setHasAllDay:(char)arg1 ;
-(char)hasAllDay;
-(char)allDay;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
@end

