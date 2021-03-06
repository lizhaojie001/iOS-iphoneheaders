/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 7:09:31 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /Applications/Fitness.app/Fitness
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIView.h>

@class _UINavigationControllerPalette, UIFont, UIView, CATextLayer, NSMutableArray, WeekPaletteTappableDay;

@interface PaletteWeekdayHeaderView : UIView {

	_UINavigationControllerPalette* _containingPalette;
	UIFont* _weekdaysFont;
	float _leftPanelWidth;
	UIView* _weekdayView;
	CATextLayer* _goalsLabel;
	NSMutableArray* _weekdayLabels;
	WeekPaletteTappableDay* _highlightedDay;
	WeekPaletteTappableDay* _markedAsTodayDay;
	UIView* _bottomBorder;
	char _isExpanded;
	char _minimized;
	float _transitionPercent;

}

@property (assign,nonatomic) char isExpanded;                      //@synthesize isExpanded=_isExpanded - In the implementation block
@property (assign,nonatomic) char minimized;                       //@synthesize minimized=_minimized - In the implementation block
@property (assign,nonatomic) float transitionPercent;              //@synthesize transitionPercent=_transitionPercent - In the implementation block
-(void)pulseToday;
-(void)highlightWeekdayLabelForDateAndSetDay:(id)arg1 ;
-(float)normalOriginX:(int)arg1 ;
-(void)_animateSizeInTransition;
-(id)initWithNavigationPalette:(id)arg1 ;
-(float)minimizedOriginX:(int)arg1 ;
-(void)setTransitionPercent:(float)arg1 ;
-(char)minimized;
-(float)transitionPercent;
-(void)layoutSubviews;
-(char)isExpanded;
-(void)setIsExpanded:(char)arg1 ;
-(void)setMinimized:(char)arg1 ;
-(float)leftInset;
@end

