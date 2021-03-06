/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:31:14 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/CoreIndoor.framework/CoreIndoor
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreIndoor/CoreIndoor-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <CoreIndoor/NSCopying.h>

@interface MotionTruthParameters : PBCodable <NSCopying> {

	float _bias;
	float _errorPeriodSeconds;
	float _scale;
	SCD_Struct_In2 _has;

}

@property (assign,nonatomic) BOOL hasErrorPeriodSeconds; 
@property (assign,nonatomic) float errorPeriodSeconds;                //@synthesize errorPeriodSeconds=_errorPeriodSeconds - In the implementation block
@property (assign,nonatomic) BOOL hasBias; 
@property (assign,nonatomic) float bias;                              //@synthesize bias=_bias - In the implementation block
@property (assign,nonatomic) BOOL hasScale; 
@property (assign,nonatomic) float scale;                             //@synthesize scale=_scale - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(float)scale;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setScale:(float)arg1 ;
-(float)bias;
-(id)dictionaryRepresentation;
-(void)setErrorPeriodSeconds:(float)arg1 ;
-(void)setHasErrorPeriodSeconds:(BOOL)arg1 ;
-(BOOL)hasErrorPeriodSeconds;
-(void)setBias:(float)arg1 ;
-(void)setHasBias:(BOOL)arg1 ;
-(BOOL)hasBias;
-(void)setHasScale:(BOOL)arg1 ;
-(BOOL)hasScale;
-(float)errorPeriodSeconds;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
@end

