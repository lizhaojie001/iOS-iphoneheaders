/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:51:41 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <AddressBookUI/AddressBookUI-Structs.h>
#import <UIKit/UIView.h>

@class NSArray, UIColor;

@interface ABRepeatingGradientSeparatorView : UIView {

	NSArray* _gradientColors;
	UIColor* _startColor;
	UIColor* _endColor;
	float _step;

}

@property (nonatomic,retain) UIColor * startColor;                    //@synthesize startColor=_startColor - In the implementation block
@property (nonatomic,retain) UIColor * endColor;                      //@synthesize endColor=_endColor - In the implementation block
@property (assign,nonatomic) float step;                              //@synthesize step=_step - In the implementation block
@property (nonatomic,readonly) NSArray * gradientColors; 
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(id)gradientColors;
-(void)setStartColor:(id)arg1 ;
-(void)setEndColor:(id)arg1 ;
-(id)startColor;
-(id)endColor;
-(float)step;
-(void)setStep:(float)arg1 ;
@end

