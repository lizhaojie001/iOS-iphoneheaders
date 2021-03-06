/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:55:08 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <CoreFoundation/NSCopying.h>

@class NSString;

@interface GEOClientCapabilities : PBCodable <NSCopying> {

	NSString* _appMajorVersion;
	NSString* _appMinorVersion;
	NSString* _hardwareModel;
	int _maxManeuverTypeSupported;
	SCD_Struct_GE52 _has;

}

@property (nonatomic,readonly) BOOL hasAppMajorVersion; 
@property (nonatomic,retain) NSString * appMajorVersion;                    //@synthesize appMajorVersion=_appMajorVersion - In the implementation block
@property (nonatomic,readonly) BOOL hasAppMinorVersion; 
@property (nonatomic,retain) NSString * appMinorVersion;                    //@synthesize appMinorVersion=_appMinorVersion - In the implementation block
@property (nonatomic,readonly) BOOL hasHardwareModel; 
@property (nonatomic,retain) NSString * hardwareModel;                      //@synthesize hardwareModel=_hardwareModel - In the implementation block
@property (assign,nonatomic) BOOL hasMaxManeuverTypeSupported; 
@property (assign,nonatomic) int maxManeuverTypeSupported;                  //@synthesize maxManeuverTypeSupported=_maxManeuverTypeSupported - In the implementation block
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)copyWithZone:(NSZoneRef)arg1 ;
-(id)dictionaryRepresentation;
-(void)setAppMajorVersion:(id)arg1 ;
-(void)setAppMinorVersion:(id)arg1 ;
-(void)setHardwareModel:(id)arg1 ;
-(BOOL)hasAppMajorVersion;
-(id)appMajorVersion;
-(BOOL)hasAppMinorVersion;
-(id)appMinorVersion;
-(BOOL)hasHardwareModel;
-(id)hardwareModel;
-(BOOL)hasMaxManeuverTypeSupported;
-(int)maxManeuverTypeSupported;
-(void)setMaxManeuverTypeSupported:(int)arg1 ;
-(void)setHasMaxManeuverTypeSupported:(BOOL)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
@end

