/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:16:09 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Assistant/UIPlugins/WeatherAssistantUI.siriUIBundle/WeatherAssistantUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <WeatherAssistantUI/WeatherAssistantUI-Structs.h>
#import <SiriUI/SiriUIReusableHeaderView.h>

@class UILabel;

@interface WeatherAssistantCurrentlyHeader : SiriUIReusableHeaderView {

	BOOL _dataIsCelsius;
	UILabel* _detail;
	UILabel* _temperature;
	UILabel* _dayName;
	UILabel* _dayDescription;
	UILabel* _highTemperature;
	UILabel* _lowTemperature;

}

@property (assign,nonatomic) BOOL dataIsCelsius;                       //@synthesize dataIsCelsius=_dataIsCelsius - In the implementation block
@property (nonatomic,readonly) UILabel * detail;                       //@synthesize detail=_detail - In the implementation block
@property (nonatomic,readonly) UILabel * temperature;                  //@synthesize temperature=_temperature - In the implementation block
@property (nonatomic,readonly) UILabel * dayName;                      //@synthesize dayName=_dayName - In the implementation block
@property (nonatomic,readonly) UILabel * dayDescription;               //@synthesize dayDescription=_dayDescription - In the implementation block
@property (nonatomic,readonly) UILabel * highTemperature;              //@synthesize highTemperature=_highTemperature - In the implementation block
@property (nonatomic,readonly) UILabel * lowTemperature;               //@synthesize lowTemperature=_lowTemperature - In the implementation block
-(void)setDataIsCelsius:(BOOL)arg1 ;
-(UILabel *)dayName;
-(UILabel *)dayDescription;
-(BOOL)dataIsCelsius;
-(void)setupWeather:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(UILabel *)temperature;
-(UILabel *)highTemperature;
-(UILabel *)lowTemperature;
-(UILabel *)detail;
@end

