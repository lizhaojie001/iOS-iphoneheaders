/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:18:23 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/Frameworks/CoreLocation.framework/CoreLocation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreLocation/CoreLocation-Structs.h>
#import <CoreLocation/NSCopying.h>
#import <CoreLocation/NSSecureCoding.h>

@class NSUUID, NSNumber;

@interface CLBeacon : NSObject <NSCopying, NSSecureCoding> {

	NSUUID* _proximityUUID;
	NSNumber* _major;
	NSNumber* _minor;
	int _proximity;
	int _rssi;
	double _accuracy;

}

@property (nonatomic,readonly) NSUUID * proximityUUID;              //@synthesize proximityUUID=_proximityUUID - In the implementation block
@property (nonatomic,readonly) NSNumber * major;                    //@synthesize major=_major - In the implementation block
@property (nonatomic,readonly) NSNumber * minor;                    //@synthesize minor=_minor - In the implementation block
@property (nonatomic,readonly) int proximity;                       //@synthesize proximity=_proximity - In the implementation block
@property (nonatomic,readonly) double accuracy;                     //@synthesize accuracy=_accuracy - In the implementation block
@property (nonatomic,readonly) int rssi;                            //@synthesize rssi=_rssi - In the implementation block
+(char)supportsSecureCoding;
-(id)initWithProximityUUID:(id)arg1 major:(id)arg2 minor:(id)arg3 proximity:(int)arg4 accuracy:(double)arg5 rssi:(int)arg6 ;
-(int)proximity;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSUUID *)proximityUUID;
-(NSNumber *)major;
-(NSNumber *)minor;
-(double)accuracy;
-(int)rssi;
@end

