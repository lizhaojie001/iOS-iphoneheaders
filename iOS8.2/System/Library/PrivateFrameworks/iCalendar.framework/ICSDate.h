/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:21:28 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/iCalendar.framework/iCalendar
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iCalendar/ICSProperty.h>

@class NSString;

@interface ICSDate : ICSProperty

@property (nonatomic,retain) NSString * tzid; 
-(id)initWithValue:(id)arg1 ;
-(char)hasFloatingTimeZone;
-(id)initWithYear:(int)arg1 month:(int)arg2 day:(int)arg3 hour:(int)arg4 minute:(int)arg5 second:(int)arg6 ;
-(NSString *)tzid;
-(id)initWithYear:(int)arg1 month:(int)arg2 day:(int)arg3 ;
-(id)initWithYear:(int)arg1 month:(int)arg2 day:(int)arg3 hour:(int)arg4 minute:(int)arg5 second:(int)arg6 timeZone:(id)arg7 ;
-(char)hasTimeComponent;
-(id)description;
-(id)components;
-(id)parametersToIncludeForChecksumVersion:(int)arg1 ;
-(void)setTzid:(NSString *)arg1 ;
@end

