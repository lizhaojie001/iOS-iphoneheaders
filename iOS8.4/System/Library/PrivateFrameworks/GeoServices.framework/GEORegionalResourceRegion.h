/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:22:42 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <GeoServices/NSCopying.h>

@class NSMutableArray;

@interface GEORegionalResourceRegion : PBCodable <NSCopying> {

	SCD_Struct_GE72* _tileRanges;
	unsigned long long _tileRangesCount;
	unsigned long long _tileRangesSpace;
	NSMutableArray* _attributions;
	NSMutableArray* _iconChecksums;
	NSMutableArray* _icons;

}

@property (nonatomic,readonly) unsigned long long tileRangesCount; 
@property (nonatomic,readonly) SCD_Struct_GE72* tileRanges; 
@property (nonatomic,retain) NSMutableArray * icons;                            //@synthesize icons=_icons - In the implementation block
@property (nonatomic,retain) NSMutableArray * attributions;                     //@synthesize attributions=_attributions - In the implementation block
@property (nonatomic,retain) NSMutableArray * iconChecksums;                    //@synthesize iconChecksums=_iconChecksums - In the implementation block
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSMutableArray *)icons;
-(id)dictionaryRepresentation;
-(void)setIcons:(NSMutableArray *)arg1 ;
-(void)addAttribution:(id)arg1 ;
-(void)clearAttributions;
-(id)attributionAtIndex:(unsigned long long)arg1 ;
-(void)setIconChecksums:(NSMutableArray *)arg1 ;
-(void)addIcon:(id)arg1 ;
-(void)addIconChecksum:(id)arg1 ;
-(id)iconAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)iconChecksumsCount;
-(void)clearIconChecksums;
-(id)iconChecksumAtIndex:(unsigned long long)arg1 ;
-(NSMutableArray *)iconChecksums;
-(unsigned long long)tileRangesCount;
-(SCD_Struct_GE72)tileRangeAtIndex:(unsigned long long)arg1 ;
-(SCD_Struct_GE72*)tileRanges;
-(void)setTileRanges:(SCD_Struct_GE72*)arg1 count:(unsigned long long)arg2 ;
-(void)clearTileRanges;
-(void)addTileRange:(SCD_Struct_GE72)arg1 ;
-(NSMutableArray *)attributions;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(unsigned long long)iconsCount;
-(void)clearIcons;
-(unsigned long long)attributionsCount;
-(void)setAttributions:(NSMutableArray *)arg1 ;
@end

