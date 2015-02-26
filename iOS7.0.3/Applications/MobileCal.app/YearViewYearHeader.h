/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:00:03 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/MobileCal.app/MobileCal
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <MobileCal/MobileCal-Structs.h>
#import <UIKit/UIView.h>

@class UILabel, UIView, EKCalendarDate, UIFont;

@interface YearViewYearHeader : UIView {

	UILabel* _yearNumber;
	UIView* _thinLine;
	EKCalendarDate* _calendarDate;
	UIFont* _yearNumberFont;
	float _yearNumberKerning;

}

@property (nonatomic,retain) EKCalendarDate * calendarDate;                   //@synthesize calendarDate=_calendarDate - In the implementation block
@property (nonatomic,readonly) float headerXInset; 
@property (nonatomic,readonly) UIFont * yearNumberFont;                       //@synthesize yearNumberFont=_yearNumberFont - In the implementation block
@property (nonatomic,readonly) float yearNumberKerning;                       //@synthesize yearNumberKerning=_yearNumberKerning - In the implementation block
@property (nonatomic,readonly) float heightBetweenLineAndNumber; 
+(id)_headerBackgroundColor;
+(float)headerYInset;
+(float)middleHeight;
+(float)headerDaySpacing;
+(float)height;
-(void)setCalendarDate:(id)arg1 ;
-(void)_reloadYearNumberLabel;
-(void)_initializeThinLine;
-(void)_layoutYearNumber;
-(void)_layoutThinLine;
-(id)_thinLineColor;
-(id)yearNumberFont;
-(float)yearNumberKerning;
-(float)headerXInset;
-(float)heightBetweenLineAndNumber;
-(id)initWithCalendarDate:(id)arg1 ;
-(float)yearNumberHeaderFontSize;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id)calendarDate;
-(void).cxx_destruct;
@end
