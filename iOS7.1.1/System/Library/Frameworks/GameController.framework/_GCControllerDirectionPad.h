/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:21:13 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/GameController.framework/GameController
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GameController/GameController-Structs.h>
#import <GameController/GCControllerDirectionPad.h>

@class _GCControllerAxisInput;

@interface _GCControllerDirectionPad : GCControllerDirectionPad {

	/*^block*/ id _valueChangedHandler;
	_GCControllerAxisInput* _xAxis;
	_GCControllerAxisInput* _yAxis;

}
-(bool)setHIDValue:(IOHIDValueRef)arg1 ;
-(/*^block*/ id)valueChangedHandler;
-(void)setValueChangedHandler:(/*^block*/ id)arg1 ;
-(id)initWithFlippedY:(bool)arg1 digital:(bool)arg2 ;
-(id)xAxis;
-(id)yAxis;
-(void)_fireValueChanged;
-(id)description;
-(void).cxx_destruct;
-(id)down;
-(id)up;
-(id)left;
-(id)right;
@end

