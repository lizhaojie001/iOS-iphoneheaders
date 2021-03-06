/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:53:35 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UILongPressGestureRecognizer.h>

@protocol UITextInput;
@class UIResponder, UIDelayedAction;

@interface UIPhraseBoundaryGestureRecognizer : UILongPressGestureRecognizer {

	UIResponder<UITextInput>* _textInput;
	UIDelayedAction* _secondDelayTimer;
	double _secondDelay;
	BOOL _secondDelayElapsed;
	id _userData;

}

@property (assign,nonatomic) UIResponder<UITextInput> * textInput;              //@synthesize textInput=_textInput - In the implementation block
@property (assign,nonatomic) double secondDelay;                                //@synthesize secondDelay=_secondDelay - In the implementation block
@property (nonatomic,readonly) BOOL secondDelayElapsed;                         //@synthesize secondDelayElapsed=_secondDelayElapsed - In the implementation block
@property (assign,nonatomic) id userData;                                       //@synthesize userData=_userData - In the implementation block
-(void)setState:(int)arg1 ;
-(void)_resetGestureRecognizer;
-(void)clearTimer;
-(void)startTimer;
-(void)secondDelayElapsed:(id)arg1 ;
-(double)secondDelay;
-(id)textInput;
-(void)setTextInput:(id)arg1 ;
-(void)setSecondDelay:(double)arg1 ;
-(BOOL)secondDelayElapsed;
-(id)userData;
-(void)setUserData:(id)arg1 ;
@end

