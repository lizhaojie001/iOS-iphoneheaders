/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:55:16 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <CoreFoundation/NSCopying.h>

@class GEOMapRegion, NSMutableArray;

@interface GEORPResolution : PBCodable <NSCopying> {

	double _resolutionDate;
	GEOMapRegion* _displayRegion;
	NSMutableArray* _localizedChangeLists;
	NSMutableArray* _updatedPlaces;
	SCD_Struct_GE52 _has;

}

@property (assign,nonatomic) BOOL hasResolutionDate; 
@property (assign,nonatomic) double resolutionDate;                              //@synthesize resolutionDate=_resolutionDate - In the implementation block
@property (nonatomic,retain) NSMutableArray * updatedPlaces;                     //@synthesize updatedPlaces=_updatedPlaces - In the implementation block
@property (nonatomic,readonly) BOOL hasDisplayRegion; 
@property (nonatomic,retain) GEOMapRegion * displayRegion;                       //@synthesize displayRegion=_displayRegion - In the implementation block
@property (nonatomic,retain) NSMutableArray * localizedChangeLists;              //@synthesize localizedChangeLists=_localizedChangeLists - In the implementation block
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)copyWithZone:(NSZoneRef)arg1 ;
-(id)dictionaryRepresentation;
-(void)setUpdatedPlaces:(id)arg1 ;
-(void)setDisplayRegion:(id)arg1 ;
-(void)setLocalizedChangeLists:(id)arg1 ;
-(void)addUpdatedPlace:(id)arg1 ;
-(void)addLocalizedChangeList:(id)arg1 ;
-(BOOL)hasResolutionDate;
-(double)resolutionDate;
-(void)setResolutionDate:(double)arg1 ;
-(unsigned)updatedPlacesCount;
-(void)clearUpdatedPlaces;
-(id)updatedPlaceAtIndex:(unsigned)arg1 ;
-(BOOL)hasDisplayRegion;
-(id)displayRegion;
-(unsigned)localizedChangeListsCount;
-(void)clearLocalizedChangeLists;
-(id)localizedChangeListAtIndex:(unsigned)arg1 ;
-(void)setHasResolutionDate:(BOOL)arg1 ;
-(id)updatedPlaces;
-(id)localizedChangeLists;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
@end

