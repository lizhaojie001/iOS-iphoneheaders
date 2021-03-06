/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:57:25 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardUIServices.framework/SpringBoardUIServices
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <SpringBoardUIServices/SpringBoardUIServices-Structs.h>
#import <UIKit/UIView.h>
#import <SpringBoardUIServices/SBNumberPadDelegate.h>

@protocol SBUIPasscodeLockNumberPadDelegate, SBUIPasscodeNumberPadButton;
@class SBNumberPadWithDelegate, UIView, SBUIButton, UIControl, UIColor, NSArray;

@interface SBUIPasscodeLockNumberPad : UIView <SBNumberPadDelegate> {

	SBNumberPadWithDelegate* _numberPad;
	<SBUIPasscodeLockNumberPadDelegate>* _delegate;
	UIView* _leftPaddingView;
	UIView* _rightPaddingView;
	UIView* _bottomPaddingView;
	SBUIButton* _emergencyCallButton;
	SBUIButton* _backspaceButton;
	SBUIButton* _cancelButton;
	UIControl<SBUIPasscodeNumberPadButton>* _downButton;
	BOOL _showsBackspaceButton;
	BOOL _showsEmergencyCallButton;
	BOOL _showsCancelButton;
	UIColor* _customBackgroundColor;

}

@property (assign,nonatomic) <SBUIPasscodeLockNumberPadDelegate> * delegate;                   //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL showsBackspaceButton;                                        //@synthesize showsBackspaceButton=_showsBackspaceButton - In the implementation block
@property (assign,nonatomic) BOOL showsEmergencyCallButton;                                    //@synthesize showsEmergencyCallButton=_showsEmergencyCallButton - In the implementation block
@property (assign,nonatomic) BOOL showsCancelButton;                                           //@synthesize showsCancelButton=_showsCancelButton - In the implementation block
@property (nonatomic,readonly) NSArray * buttons; 
@property (nonatomic,retain) UIControl<SBUIPasscodeNumberPadButton> * downButton;              //@synthesize downButton=_downButton - In the implementation block
+(id)_buttonForCharacter:(unsigned)arg1 ;
+(CGSize)_inputButtonCircleSize;
+(UIEdgeInsets)_inputButtonCircleSpacing;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(id)delegate;
-(id)initWithDefaultSize;
-(void)setShowsCancelButton:(BOOL)arg1 ;
-(BOOL)showsCancelButton;
-(void)setBackgroundAlpha:(float)arg1 ;
-(id)buttons;
-(void)setCustomBackgroundColor:(id)arg1 ;
-(BOOL)showsEmergencyCallButton;
-(void)setShowsEmergencyCallButton:(BOOL)arg1 ;
-(void)_setLuminosityBoost:(float)arg1 ;
-(id)_fontForAncillaryButton;
-(void)_cancelButtonHit;
-(void)_backspaceButtonHit;
-(void)_emergencyCallButtonHit;
-(void)_configureAdditionalButtons;
-(void)_numberPadTouchDown:(id)arg1 forEvent:(id)arg2 ;
-(void)_numberPadTouchUp:(id)arg1 forEvent:(id)arg2 ;
-(void)_numberPadTouchCancelled:(id)arg1 forEvent:(id)arg2 ;
-(void)_numberPadTouchDrag:(id)arg1 forEvent:(id)arg2 ;
-(void)setDownButton:(id)arg1 ;
-(void)setShowsBackspaceButton:(BOOL)arg1 ;
-(float)_distanceToTopOfFirstButton;
-(BOOL)showsBackspaceButton;
-(id)downButton;
@end

