/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:19:27 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AssistantServices/NSSecureCoding.h>

@class NSString, NSNumber;

@interface AFCity : NSObject <NSSecureCoding> {

	NSString* _name;
	NSString* _unlocalizedName;
	NSString* _countryName;
	NSString* _unlocalizedCountryName;
	NSString* _timeZone;
	NSNumber* _latitude;
	NSNumber* _longitude;
	NSNumber* _alCityID;

}
+(char)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)_initWithName:(id)arg1 unlocalizedName:(id)arg2 countryName:(id)arg3 unlocalizedCountryName:(id)arg4 timeZone:(id)arg5 latitude:(id)arg6 longitude:(id)arg7 alCityID:(id)arg8 ;
-(id)alCityValue;
@end

