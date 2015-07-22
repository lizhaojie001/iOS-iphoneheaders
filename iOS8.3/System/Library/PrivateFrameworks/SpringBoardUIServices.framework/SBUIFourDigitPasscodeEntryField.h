/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 3:35:46 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardUIServices.framework/SpringBoardUIServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SpringBoardUIServices/SpringBoardUIServices-Structs.h>
#import <SpringBoardUIServices/SBUINumericPasscodeEntryFieldBase.h>

@class UIView, NSMutableArray;

@interface SBUIFourDigitPasscodeEntryField : SBUINumericPasscodeEntryFieldBase {

	UIView* _leftPaddingView;
	UIView* _rightPaddingView;
	UIView* _characterIndicatorsContainerView;
	NSMutableArray* _characterIndicators;
	float _backgroundAlpha;
	UIView* _springView;
	UIView* _springViewParent;

}
-(void)dealloc;
-(void)layoutSubviews;
-(void)reset;
-(void)setBackgroundAlpha:(float)arg1 ;
-(void)setCustomBackgroundColor:(id)arg1 ;
-(void)_autofillForMesaWithCompletion:(/*^block*/id)arg1 ;
-(void)_setLuminosityBoost:(float)arg1 ;
-(void)_resetForFailedPasscode:(char)arg1 playUnlockFailedSound:(char)arg2 ;
-(id)initWithDefaultSizeAndLightStyle:(char)arg1 ;
-(CGRect)_entryFieldBoundsWithXOffset:(float)arg1 ;
-(UIEdgeInsets)_entryFieldPaddingOutsideRing;
-(void)_appendString:(id)arg1 ;
-(void)_deleteLastCharacter;
-(char)_hasAnyCharacters;
-(CGSize)_viewSize;
@end
