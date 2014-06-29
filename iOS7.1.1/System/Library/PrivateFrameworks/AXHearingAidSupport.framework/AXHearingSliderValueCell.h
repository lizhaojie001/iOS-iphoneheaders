/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:22:37 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/AXHearingAidSupport.framework/AXHearingAidSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Preferences/PSTableCell.h>

@class UIView, UISlider, UILabel, NSNumberFormatter;

@interface AXHearingSliderValueCell : PSTableCell {

	UIView* _leftView;
	UISlider* _slider;
	UILabel* _valueLabel;
	NSNumberFormatter* _numberFormatter;
	double _sliderMargin;
	double _valueWidth;

}
-(void)dealloc;
-(void)layoutSubviews;
-(id)description;
-(void)setValue:(id)arg1 ;
-(id)value;
-(void)willMoveToSuperview:(id)arg1 ;
-(id)accessibilityLabel;
-(id)accessibilityValue;
-(id)accessibilityHint;
-(unsigned long long)accessibilityTraits;
-(bool)isAccessibilityElement;
-(void)accessibilityIncrement;
-(void)accessibilityDecrement;
-(void)sliderValueDidChange:(id)arg1 ;
-(void)updateValue;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 specifier:(id)arg3 ;
@end
