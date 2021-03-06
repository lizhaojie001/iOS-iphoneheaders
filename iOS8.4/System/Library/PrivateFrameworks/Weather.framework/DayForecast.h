/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:26:41 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/Weather.framework/Weather
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString;

@interface DayForecast : NSObject {

	NSString* _high;
	NSString* _low;
	unsigned long long _icon;
	unsigned long long _dayOfWeek;
	unsigned long long _dayNumber;

}

@property (nonatomic,copy) NSString * high;                             //@synthesize high=_high - In the implementation block
@property (nonatomic,copy) NSString * low;                              //@synthesize low=_low - In the implementation block
@property (assign,nonatomic) unsigned long long icon;                   //@synthesize icon=_icon - In the implementation block
@property (assign,nonatomic) unsigned long long dayOfWeek;              //@synthesize dayOfWeek=_dayOfWeek - In the implementation block
@property (assign,nonatomic) unsigned long long dayNumber;              //@synthesize dayNumber=_dayNumber - In the implementation block
-(unsigned long long)dayOfWeek;
-(unsigned long long)icon;
-(void)dealloc;
-(id)description;
-(void)setIcon:(unsigned long long)arg1 ;
-(void)setDayOfWeek:(unsigned long long)arg1 ;
-(NSString *)high;
-(void)setHigh:(NSString *)arg1 ;
-(NSString *)low;
-(void)setLow:(NSString *)arg1 ;
-(unsigned long long)dayNumber;
-(long long)compareDayNumberToDayForecast:(id)arg1 ;
-(void)setDayNumber:(unsigned long long)arg1 ;
@end

