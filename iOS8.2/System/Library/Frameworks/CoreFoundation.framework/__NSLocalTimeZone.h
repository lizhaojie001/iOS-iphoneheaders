/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:18:21 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreFoundation/CoreFoundation-Structs.h>
#import <CoreFoundation/NSTimeZone.h>

@interface __NSLocalTimeZone : NSTimeZone
+(char)supportsSecureCoding;
-(double)daylightSavingTimeOffsetForDate:(id)arg1 ;
-(id)abbreviationForDate:(id)arg1 ;
-(char)isDaylightSavingTimeForDate:(id)arg1 ;
-(id)localizedName:(int)arg1 locale:(id)arg2 ;
-(id)replacementObjectForPortCoder:(id)arg1 ;
-(id)retain;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned)retainCount;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(Class)classForCoder;
-(id)data;
-(id)name;
-(id)nextDaylightSavingTimeTransitionAfterDate:(id)arg1 ;
-(int)secondsFromGMTForDate:(id)arg1 ;
-(oneway void)release;
@end

