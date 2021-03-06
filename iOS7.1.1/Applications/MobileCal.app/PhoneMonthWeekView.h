/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 8:59:05 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /Applications/MobileCal.app/MobileCal
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MobileCal/MobileCal-Structs.h>
#import <UIKit/UIView.h>
#import <MobileCal/InfiniteScrollViewSubview.h>

@protocol PhoneMonthViewInteractionDelegate;
@class EKCalendarDate, NSCalendar, UIView, UILabel, NSArray, PhoneMonthWeekDayNumber, TodayCirclePulseView, NSObject;

@interface PhoneMonthWeekView : UIView <InfiniteScrollViewSubview> {

	EKCalendarDate* _startCalendarDate;
	EKCalendarDate* _endCalendarDate;
	NSCalendar* _calendar;
	int _cellToStartDrawingIn;
	BOOL _containsFirstDayOfMonth;
	UIView* _grayLine;
	UILabel* _monthNameLabel;
	NSArray* _dayNumbers;
	NSArray* _eventMarkers;
	PhoneMonthWeekDayNumber* _todayDayNumber;
	CGSize _monthNameLabelFittingSize;
	PhoneMonthWeekDayNumber* _selectedWeekNumber;
	TodayCirclePulseView* _todayPulse;
	BOOL _compressedMode;
	BOOL _enableLayerAnimationsDuringLayout;
	BOOL _disableTodayPulse;
	NSObject<PhoneMonthViewInteractionDelegate>* _interactionDelegate;
	NSArray* _eventCounts;

}

@property (assign,nonatomic,__weak) NSObject<PhoneMonthViewInteractionDelegate> * interactionDelegate;              //@synthesize interactionDelegate=_interactionDelegate - In the implementation block
@property (nonatomic,retain) NSArray * eventCounts;                                                                 //@synthesize eventCounts=_eventCounts - In the implementation block
@property (assign,nonatomic) BOOL compressedMode;                                                                   //@synthesize compressedMode=_compressedMode - In the implementation block
@property (assign,nonatomic) BOOL enableLayerAnimationsDuringLayout;                                                //@synthesize enableLayerAnimationsDuringLayout=_enableLayerAnimationsDuringLayout - In the implementation block
@property (assign,nonatomic) BOOL disableTodayPulse;                                                                //@synthesize disableTodayPulse=_disableTodayPulse - In the implementation block
@property (nonatomic,readonly) BOOL containsFirstDayOfMonth; 
+(float)heightForViewWithCalendarDate:(id)arg1 compressed:(BOOL)arg2 ;
+(float)topInsetForViewWithCalendarDate:(id)arg1 calendar:(id)arg2 ;
+(float)cellHeight:(BOOL)arg1 ;
+(float)heightForViewThatContainsFirstDayOfMonth:(BOOL)arg1 compressed:(BOOL)arg2 ;
+(float)circleDiameter;
+(float)circleDiameterLarge;
+(float)eventMarkerDiameter:(BOOL)arg1 ;
+(id)_monthNameFont;
+(float)_topOfMonthNameLabelToGrayLineDistance;
+(float)_grayLineHeight;
+(float)_dayNumberBaselineToGrayLineDistance:(BOOL)arg1 ;
+(CGPoint)eventMarkerPositionForIndex:(int)arg1 compressed:(BOOL)arg2 ;
+(float)_topInsetForViewThatContainsFirstDayOfMonth:(BOOL)arg1 cellToStartDrawingIn:(int)arg2 ;
+(BOOL)_viewForCalendarDateContainsFirstDayOfMonth:(id)arg1 ;
+(int)_cellToStartDrawingInForViewWithCalendarDate:(id)arg1 calendar:(id)arg2 ;
+(float)_spaceBelowGrayLineHeight:(BOOL)arg1 ;
+(id)eventMarkerColor;
+(float)_monthNameLabelBaselineToGrayLineDistance;
+(float)headerHeight;
-(void)pulseTodayCircle;
-(CGRect)frameForTodayHighlight;
-(void)setCalendarDate:(id)arg1 ;
-(id)initWithCalendarDate:(id)arg1 calendar:(id)arg2 compressed:(BOOL)arg3 ;
-(void)setCompressedMode:(BOOL)arg1 ;
-(void)setEventCounts:(id)arg1 ;
-(void)setEventCounts:(id)arg1 animated:(BOOL)arg2 ;
-(void)setGrayLineAlpha:(float)arg1 ;
-(id)dayNumberCellWidths;
-(CGRect)rectForCells;
-(id)eventCounts;
-(void)resetTodayBits;
-(void)haltTodayPulse;
-(id)dayForPoint:(CGPoint)arg1 ;
-(CGRect)frameForButton:(id)arg1 forDay:(id)arg2 ;
-(void)adjustHighlight:(id)arg1 forDay:(id)arg2 ;
-(void)setSelectedDay:(id)arg1 animated:(BOOL)arg2 ;
-(void)setDisableTodayPulse:(BOOL)arg1 ;
-(void)setEnableLayerAnimationsDuringLayout:(BOOL)arg1 ;
-(BOOL)containsFirstDayOfMonth;
-(void)_initializeGrayLine;
-(void)_initializeDayNumbers;
-(unsigned)_daysInAWeek;
-(BOOL)compressedMode;
-(BOOL)enableLayerAnimationsDuringLayout;
-(CGPoint)_positionOfCircleInCellWithWidth:(float)arg1 circleSize:(CGSize)arg2 ;
-(BOOL)disableTodayPulse;
-(float)_circleYOffsetFromTop;
-(void)_clearTodayHighlight;
-(void)_reloadMonthNameLabel;
-(void)_initializeEventMarkers;
-(void)_initializeMonthNameLabel;
-(unsigned)_monthLabelColumnIndex;
-(id)monthNameLabel;
-(id)endCalendarDate;
-(int)daysInMonth;
-(void)layoutSubviews;
-(id)description;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)setInteractionDelegate:(id)arg1 ;
-(id)interactionDelegate;
-(id)calendarDate;
-(void).cxx_destruct;
-(float)topInset;
@end

