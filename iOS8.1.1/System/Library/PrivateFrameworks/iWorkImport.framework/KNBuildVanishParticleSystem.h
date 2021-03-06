/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:35:46 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSDGLParticleSystem.h>

@interface KNBuildVanishParticleSystem : TSDGLParticleSystem {

	double _randomParticleSpeedMax;
	SCD_Struct_TS471 _lifeSpan;
	double _maxSpeed;
	double _maxScale;
	double _minScale;

}

@property (assign,nonatomic) double randomParticleSpeedMax;              //@synthesize randomParticleSpeedMax=_randomParticleSpeedMax - In the implementation block
@property (assign,nonatomic) SCD_Struct_TS471 lifeSpan;                  //@synthesize lifeSpan=_lifeSpan - In the implementation block
@property (assign,nonatomic) double maxSpeed;                            //@synthesize maxSpeed=_maxSpeed - In the implementation block
@property (assign,nonatomic) double maxScale;                            //@synthesize maxScale=_maxScale - In the implementation block
@property (assign,nonatomic) double minScale;                            //@synthesize minScale=_minScale - In the implementation block
-(double)minScale;
-(double)speedMax;
-(SCD_Struct_TS475)speedAtIndexPoint:(CGPoint)arg1 ;
-(double)scaleAtIndexPoint:(CGPoint)arg1 ;
-(SCD_Struct_TS471)lifeSpanAtIndexPoint:(CGPoint)arg1 ;
-(void)setMinScale:(double)arg1 ;
-(void)setRandomParticleSpeedMax:(double)arg1 ;
-(void)setMaxSpeed:(double)arg1 ;
-(double)randomParticleSpeedMax;
-(double)maxSpeed;
-(SCD_Struct_TS471)lifeSpan;
-(void)setLifeSpan:(SCD_Struct_TS471)arg1 ;
-(double)maxScale;
-(void)setMaxScale:(double)arg1 ;
@end

