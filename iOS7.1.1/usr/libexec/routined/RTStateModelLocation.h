/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 7:34:29 AM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /usr/libexec/routined
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreFoundation/NSSecureCoding.h>

@interface RTStateModelLocation : NSObject <NSSecureCoding> {

	double _Latitude_deg;
	double _Longitude_deg;
	double _uncertainty_m;
	double _confidence;
	double _timestamp_s;

}

@property (assign,nonatomic) double Latitude_deg;               //@synthesize Latitude_deg=_Latitude_deg - In the implementation block
@property (assign,nonatomic) double Longitude_deg;              //@synthesize Longitude_deg=_Longitude_deg - In the implementation block
@property (assign,nonatomic) double uncertainty_m;              //@synthesize uncertainty_m=_uncertainty_m - In the implementation block
@property (assign,nonatomic) double confidence;                 //@synthesize confidence=_confidence - In the implementation block
@property (assign,nonatomic) double timestamp_s;                //@synthesize timestamp_s=_timestamp_s - In the implementation block
+(BOOL)supportsSecureCoding;
-(double)Latitude_deg;
-(double)Longitude_deg;
-(double)uncertainty_m;
-(void)setLatitude_deg:(double)arg1 ;
-(void)setLongitude_deg:(double)arg1 ;
-(void)setUncertainty_m:(double)arg1 ;
-(id)initWithLat:(double)arg1 Lon:(double)arg2 Uncertainty:(double)arg3 confidence:(double)arg4 andTimestamp_s:(double)arg5 ;
-(double)timestamp_s;
-(void)setTimestamp_s:(double)arg1 ;
-(id)initWithLocation:(id)arg1 ;
-(double)confidence;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(void)setConfidence:(double)arg1 ;
@end
