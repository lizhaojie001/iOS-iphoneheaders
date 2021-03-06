/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:21:43 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/CoreIndoor.framework/CoreIndoor
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreIndoor/CoreIndoor-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <CoreIndoor/NSCopying.h>

@interface CLLatLonPolygon : PBCodable <NSCopying> {

	SCD_Struct_CL11* _latitudes;
	SCD_Struct_CL11* _longitudes;
	double _tolerance;

}

@property (nonatomic,readonly) unsigned long long latitudesCount; 
@property (nonatomic,readonly) double* latitudes; 
@property (nonatomic,readonly) unsigned long long longitudesCount; 
@property (nonatomic,readonly) double* longitudes; 
@property (assign,nonatomic) double tolerance;                                  //@synthesize tolerance=_tolerance - In the implementation block
-(double)tolerance;
-(void)setTolerance:(double)arg1 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(unsigned long long)latitudesCount;
-(void)clearLatitudes;
-(double)latitudeAtIndex:(unsigned long long)arg1 ;
-(void)addLatitude:(double)arg1 ;
-(unsigned long long)longitudesCount;
-(void)clearLongitudes;
-(double)longitudeAtIndex:(unsigned long long)arg1 ;
-(void)addLongitude:(double)arg1 ;
-(double*)latitudes;
-(void)setLatitudes:(double*)arg1 count:(unsigned long long)arg2 ;
-(double*)longitudes;
-(void)setLongitudes:(double*)arg1 count:(unsigned long long)arg2 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
@end

