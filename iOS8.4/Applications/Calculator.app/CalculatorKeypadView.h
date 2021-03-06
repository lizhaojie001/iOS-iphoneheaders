/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 7:09:23 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /Applications/Calculator.app/Calculator
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Calculator/Calculator-Structs.h>
#import <UIKit/UIView.h>

@protocol CalculatorKeypadViewDelegate;
@class NSArray, NSMutableDictionary, UIView, UIFont;

@interface CalculatorKeypadView : UIView {

	int _keypadType;
	NSArray* _buttons;
	float _activeBorderWidth;
	unsigned _rows;
	unsigned _columns;
	CGPoint _previousLocation;
	NSMutableDictionary* _activeButtonViews;
	UIView* _pressedView;
	UIFont* _defaultFont;
	UIFont* _smallTextFont;
	id<CalculatorKeypadViewDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<CalculatorKeypadViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id)initWithFrame:(CGRect)arg1 keypadType:(int)arg2 ;
-(void)setShowingAlternate:(char)arg1 forButton:(unsigned)arg2 ;
-(void)setShowingActive:(char)arg1 forButton:(unsigned)arg2 ;
-(id)_smallTextFont;
-(CGRect)_frameForRow:(unsigned)arg1 column:(unsigned)arg2 ;
-(CGRect)_ringFrameForButtonFrame:(CGRect)arg1 row:(unsigned)arg2 column:(unsigned)arg3 ;
-(void)_animateToSelectedState:(char)arg1 forView:(id)arg2 borderWidth:(float)arg3 completion:(/*^block*/id)arg4 ;
-(void)_addActiveRingToButton:(id)arg1 row:(unsigned)arg2 column:(unsigned)arg3 ;
-(void)_removeActiveRingFromButton:(id)arg1 ;
-(void)_setFontsIfNeeded;
-(id)_buttonAtPoint:(CGPoint)arg1 ;
-(void)_removePressedView;
-(CGRect)_pressedFrameForButton:(id)arg1 ;
-(void)_drawGradientWithComponents:(float*)arg1 inRect:(CGRect)arg2 ;
-(void)drawRect:(CGRect)arg1 ;
-(void)setDelegate:(id<CalculatorKeypadViewDelegate>)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(id<CalculatorKeypadViewDelegate>)delegate;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(id)_defaultFont;
@end

