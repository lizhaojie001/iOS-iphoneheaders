/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 7:09:45 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /Applications/MobileCal.app/MobileCal
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MobileCal/MobileCal-Structs.h>
#import <UIKit/UIView.h>
#import <UIKit/UIScrollViewDelegate.h>
#import <MobileCal/DayNavigationWeekScrollViewDelegate.h>

@protocol DayNavigationViewDelegate;
@class NSCalendar, NSTimeZone, NSDate, ScrollSpringFactory, DayNavigationWeekScrollView, DayTwoPartLabel, UILabel, UIView, NSString;

@interface DayNavigationView : UIView <UIScrollViewDelegate, DayNavigationWeekScrollViewDelegate> {

	NSCalendar* _calendar;
	NSTimeZone* _timeZone;
	NSDate* _selectedDate;
	NSDate* _currentWeekDayLabelDate;
	ScrollSpringFactory* _springFactory;
	DayNavigationWeekScrollView* _weekScrollView;
	DayTwoPartLabel* _weekDayLabel;
	DayTwoPartLabel* _fadingWeekDayLabel;
	UILabel* _weekNumberLabel;
	UILabel* _fadingWeekNumberLabel;
	UIView* _weekNumberLabelBackgroundView;
	char _smallWeekdayLabelFontNeeded;
	char _showWeekNumber;
	char _showOverlayCalendar;
	id<DayNavigationViewDelegate> _delegate;
	float _sideMargin;

}

@property (assign,nonatomic,__weak) id<DayNavigationViewDelegate> delegate;               //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) DayNavigationWeekScrollView * weekScrollView; 
@property (nonatomic,readonly) DayTwoPartLabel * weekDayLabel; 
@property (nonatomic,readonly) UILabel * weekNumberLabel; 
@property (assign,nonatomic) char showWeekNumber;                                         //@synthesize showWeekNumber=_showWeekNumber - In the implementation block
@property (assign,nonatomic) char showOverlayCalendar;                                    //@synthesize showOverlayCalendar=_showOverlayCalendar - In the implementation block
@property (assign,nonatomic) float sideMargin;                                            //@synthesize sideMargin=_sideMargin - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_weekdayFont;
+(id)_smallWeekdayFont;
+(id)_normalWeekdayFont;
+(id)_weekNumberFont;
-(void)pulseToday;
-(char)showOverlayCalendar;
-(DayTwoPartLabel *)weekDayLabel;
-(UILabel *)weekNumberLabel;
-(id)_animateView:(id)arg1 toPosition:(CGPoint)arg2 setDelegate:(char)arg3 ;
-(void)setSelectedDate:(id)arg1 animated:(char)arg2 ;
-(void)setShowOverlayCalendar:(char)arg1 ;
-(void)_dayTimeViewHourWidthChanged;
-(float)_weekNumberRightEdge;
-(float)sideMargin;
-(CGRect)_frameForWeekDayLabel:(id)arg1 ;
-(void)_updateFontSizes;
-(void)_updateLabelsWithDate:(id)arg1 animated:(char)arg2 ;
-(void)_stopPulsingToday;
-(char)canAnimateToDate:(id)arg1 ;
-(void)_animateView:(id)arg1 toAlpha:(float)arg2 ;
-(char)dayNavigationWeekScrollViewAllowedToChangeSelectedDate;
-(void)dayNavigationWeekScrollViewFailedToSelectDate;
-(void)dayNavigationWeekScrollView:(id)arg1 selectedDateChanged:(id)arg2 ;
-(id)initWithCalendar:(id)arg1 selectedDate:(id)arg2 cellFactory:(id)arg3 showWeekdayLabel:(char)arg4 ;
-(DayNavigationWeekScrollView *)weekScrollView;
-(void)setSideMargin:(float)arg1 ;
-(void)significantTimeChangeOccurred;
-(void)setShowWeekNumber:(char)arg1 ;
-(char)showWeekNumber;
-(void)dealloc;
-(void)setBackgroundColor:(id)arg1 ;
-(void)setDelegate:(id<DayNavigationViewDelegate>)arg1 ;
-(void)layoutSubviews;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)scrollViewWillBeginDragging:(id)arg1 ;
-(void)scrollViewWillEndDragging:(id)arg1 withVelocity:(CGPoint)arg2 targetContentOffset:(inout CGPoint*)arg3 ;
-(void)scrollViewWillBeginDecelerating:(id)arg1 ;
-(void)scrollViewDidEndDecelerating:(id)arg1 ;
-(void)scrollViewDidEndScrollingAnimation:(id)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id<DayNavigationViewDelegate>)delegate;
-(void)animationDidStop:(id)arg1 finished:(char)arg2 ;
-(void)animationDidStart:(id)arg1 ;
-(void)setCalendar:(id)arg1 ;
-(void)_updateLabels:(int)arg1 ;
@end

