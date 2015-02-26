/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:32:28 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/MediaPlayerUI.framework/MediaPlayerUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MediaPlayerUI/MediaPlayerUI-Structs.h>
#import <UIKit/UIView.h>

@protocol MPUTransportButton, MPUTransportControlsViewDelegate;
@class UIButton, MPUTransportButtonAttributes, NSMutableDictionary, NSArray, UIFont;

@interface MPUTransportControlsView : UIView {

	UIButton*<MPUTransportButton> _leftButton;
	UIButton*<MPUTransportButton> _middleButton;
	UIButton*<MPUTransportButton> _rightButton;
	MPUTransportButtonAttributes* _leftButtonAttributes;
	MPUTransportButtonAttributes* _middleButtonAttributes;
	MPUTransportButtonAttributes* _rightButtonAttributes;
	NSMutableDictionary* _availableControlsByGroup;
	UIButton* _shuffleButton;
	UIButton* _repeatButton;
	UIEdgeInsets _insetsForExpandingButtons;
	BOOL _useCustomHighlightAppearance;
	BOOL _alwaysLive;
	BOOL _showAccessoryButtons;
	BOOL _showIsPlaying;
	NSArray* _availableControls;
	double _displayedSkipForwardInterval;
	double _displayedSkipBackwardInterval;
	UIFont* _displayedSkipIntervalFont;
	unsigned long long _repeatType;
	unsigned long long _shuffleType;
	Class _transportButtonClass;
	id<MPUTransportControlsViewDelegate> _delegate;

}

@property (nonatomic,copy) NSArray * availableControls;                                                                  //@synthesize availableControls=_availableControls - In the implementation block
@property (assign,getter=isAlwaysLive,nonatomic) BOOL alwaysLive;                                                        //@synthesize alwaysLive=_alwaysLive - In the implementation block
@property (assign,nonatomic) double displayedSkipForwardInterval;                                                        //@synthesize displayedSkipForwardInterval=_displayedSkipForwardInterval - In the implementation block
@property (assign,nonatomic) double displayedSkipBackwardInterval;                                                       //@synthesize displayedSkipBackwardInterval=_displayedSkipBackwardInterval - In the implementation block
@property (nonatomic,retain) UIFont * displayedSkipIntervalFont;                                                         //@synthesize displayedSkipIntervalFont=_displayedSkipIntervalFont - In the implementation block
@property (assign,nonatomic) BOOL showAccessoryButtons;                                                                  //@synthesize showAccessoryButtons=_showAccessoryButtons - In the implementation block
@property (assign,nonatomic) unsigned long long repeatType;                                                              //@synthesize repeatType=_repeatType - In the implementation block
@property (assign,nonatomic) unsigned long long shuffleType;                                                             //@synthesize shuffleType=_shuffleType - In the implementation block
@property (assign,nonatomic) BOOL showIsPlaying;                                                                         //@synthesize showIsPlaying=_showIsPlaying - In the implementation block
@property (nonatomic,retain) Class transportButtonClass;                                                                 //@synthesize transportButtonClass=_transportButtonClass - In the implementation block
@property (assign,nonatomic,__weak) id<MPUTransportControlsViewDelegate> delegate;                                       //@synthesize delegate=_delegate - In the implementation block
@property (assign,setter=_setInsetsForExpandingButtons:,nonatomic) UIEdgeInsets _insetsForExpandingButtons; 
+(id)defaultTransportControls;
+(id)_skipIntervalButtonImageForInterval:(double)arg1 baseImage:(id)arg2 font:(id)arg3 scale:(double)arg4 ;
+(id)_stringForDisplayedSkipInterval:(double)arg1 ;
-(BOOL)isAlwaysLive;
-(unsigned long long)repeatType;
-(unsigned long long)shuffleType;
-(void)setRepeatType:(unsigned long long)arg1 ;
-(void)setShuffleType:(unsigned long long)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)setDelegate:(id<MPUTransportControlsViewDelegate>)arg1 ;
-(void)layoutSubviews;
-(void)reload;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id<MPUTransportControlsViewDelegate>)delegate;
-(void)setAvailableControls:(NSArray *)arg1 ;
-(void)setShowAccessoryButtons:(BOOL)arg1 ;
-(void)_clearTransportButtonWeakReferencesToSelf;
-(void)_updateTransportControlButtonsAndDeferApplyingAttributes:(BOOL)arg1 ;
-(CGSize)_transportControlButtonSize;
-(CGRect)_adjustedFrameForButton:(id)arg1 proposedFrame:(CGRect)arg2 ;
-(void)_layoutButton:(id)arg1 withAttributes:(id)arg2 frame:(CGRect)arg3 inExpandedTouchRect:(CGRect)arg4 ;
-(void)_reloadTransportButtons;
-(void)_updateTransportControlButtons;
-(id)_createAccessoryButton;
-(id)availableTransportControlWithType:(long long)arg1 ;
-(void)_transportControlLongPressBegin:(id)arg1 ;
-(void)_transportControlLongPressEnd:(id)arg1 ;
-(void)_transportControlTap:(id)arg1 ;
-(void)_transportControlTouchEntered:(id)arg1 ;
-(void)_transportControlTouchExited:(id)arg1 ;
-(void)_accessoryControlTap:(id)arg1 ;
-(id)_createTransportButton;
-(id)_availableControlForGroup:(int)arg1 ;
-(void)_configureButton:(id)arg1 withAttributes:(id)arg2 forTransportControl:(id)arg3 deferApplyingAttributes:(BOOL)arg4 ;
-(id)_accessoryButtonTextAttributes;
-(id)_accessoryButtonEmphasizedTextAttributes;
-(void)setAlwaysLive:(BOOL)arg1 ;
-(void)setDisplayedSkipBackwardInterval:(double)arg1 ;
-(void)setDisplayedSkipForwardInterval:(double)arg1 ;
-(void)setShowIsPlaying:(BOOL)arg1 ;
-(void)setTransportButtonClass:(Class)arg1 ;
-(UIEdgeInsets)_insetsForExpandingButtons;
-(void)_setInsetsForExpandingButtons:(UIEdgeInsets)arg1 ;
-(id)_transportButtonForControlType:(long long)arg1 ;
-(void)_restoreButtonHighlightAfterTouchUpForButton:(id)arg1 ;
-(NSArray *)availableControls;
-(double)displayedSkipForwardInterval;
-(double)displayedSkipBackwardInterval;
-(UIFont *)displayedSkipIntervalFont;
-(void)setDisplayedSkipIntervalFont:(UIFont *)arg1 ;
-(BOOL)showAccessoryButtons;
-(BOOL)showIsPlaying;
-(Class)transportButtonClass;
@end
