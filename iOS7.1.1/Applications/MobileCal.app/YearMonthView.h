/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 8:59:05 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /Applications/MobileCal.app/MobileCal
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MobileCal/MobileCal-Structs.h>
#import <UIKit/UIView.h>

@class EKCalendarDate, NSString, NSCalendar, UIFont;

@interface YearMonthView : UIView {

	EKCalendarDate* _endCalendarDate;
	NSString* _monthString;
	int _firstDayIndex;
	int _daysInWeek;
	int _todayIndex;
	NSCalendar* _calendar;
	EKCalendarDate* _calendarDate;

}

@property (nonatomic,retain) EKCalendarDate * calendarDate;                  //@synthesize calendarDate=_calendarDate - In the implementation block
@property (nonatomic,readonly) float xInset; 
@property (nonatomic,readonly) float yInset; 
@property (nonatomic,readonly) float headerXAdjust; 
@property (nonatomic,readonly) float headerFontMaxSize; 
@property (nonatomic,readonly) float headerFontMinSize; 
@property (nonatomic,readonly) UIFont * headerFont; 
@property (nonatomic,readonly) float headerFontKerning; 
@property (nonatomic,readonly) UIFont * dayNumberFont; 
@property (nonatomic,readonly) UIFont * todayNumberFont; 
@property (nonatomic,readonly) float todayNumberKerning; 
@property (nonatomic,readonly) float dayTextSize; 
@property (nonatomic,readonly) float todayTextSize; 
@property (nonatomic,readonly) float circleSize; 
@property (nonatomic,readonly) float circleSizeForDoubleDigit; 
@property (nonatomic,readonly) float daysXAdjustLeft; 
@property (nonatomic,readonly) float daysYAdjustTop; 
@property (nonatomic,readonly) float xSpacing; 
@property (nonatomic,readonly) float ySpacing; 
@property (nonatomic,readonly) BOOL showWeekDayInitials; 
@property (nonatomic,readonly) float weekDayInitialsAdjustLeft; 
@property (nonatomic,readonly) float weekDayInitialsAdjustTop; 
@property (nonatomic,readonly) UIFont * weekDayInitialsFont; 
@property (nonatomic,readonly) NSCalendar * calendar; 
@property (nonatomic,readonly) int daysInWeek; 
+(id)_defaultTextColor;
+(id)_todayTextColor;
+(float)heightForInterfaceOrientation:(int)arg1 ;
-(void)pulseTodayCircle;
-(void)updateToday;
-(CGRect)frameForTodayHighlight;
-(BOOL)containsCalendarDate:(id)arg1 ;
-(void)setCalendarDate:(id)arg1 ;
-(id)headerFont;
-(BOOL)pointIsAboveMonthNameBaseline:(CGPoint)arg1 ;
-(id)initWithCalendarDate:(id)arg1 calendar:(id)arg2 ;
-(id)dayNumberFont;
-(void)_reloadCachedValues;
-(id)_imageForMonthName:(id)arg1 ;
-(CGPoint)_monthNameOriginPoint;
-(float)yInset;
-(BOOL)showWeekDayInitials;
-(float)weekDayInitialsAdjustLeft;
-(float)weekDayInitialsAdjustTop;
-(id)_weekDayInitialsImage;
-(float)daysXAdjustLeft;
-(float)daysYAdjustTop;
-(float)xSpacing;
-(float)ySpacing;
-(id)_imageForDayNumber:(id)arg1 size:(CGSize)arg2 ;
-(void)_getTodayNumberTextFrame:(CGRect*)arg1 circleFrame:(CGRect*)arg2 ;
-(id)_todayAttributes;
-(void)_updateToday;
-(id)todayNumberFont;
-(float)circleSizeForDoubleDigit;
-(float)circleSize;
-(float)todayNumberKerning;
-(float)headerXAdjust;
-(float)headerFontMaxSize;
-(float)headerFontMinSize;
-(float)headerFontKerning;
-(id)weekDayInitialsFont;
-(CGRect)frameForGridOfDays;
-(CGPoint)headerOrigin;
-(int)daysInWeek;
-(id)monthString;
-(float)dayTextSize;
-(float)todayTextSize;
-(void)drawRect:(CGRect)arg1 ;
-(id)description;
-(void)tintColorDidChange;
-(id)calendar;
-(id)calendarDate;
-(void).cxx_destruct;
-(float)xInset;
@end
