/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:04:02 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <SpringBoard/SBNotificationCell.h>

@protocol SBAwayListCellButtonHandler, UIScrollViewDelegate;
@class UIView, SBLockScreenNotificationScrollView, SBUnlockActionContext, UILabel, UIButton;

@interface SBLockScreenNotificationCell : SBNotificationCell {

	BOOL _isTopCell;
	BOOL _drawsSeparators;
	float _currentContentAlpha;
	UIView* _topSeparatorView;
	UIView* _bottomSeparatorView;
	<SBAwayListCellButtonHandler>* _actionButtonHandler;
	SBLockScreenNotificationScrollView* _contentScrollView;
	SBUnlockActionContext* _unlockActionContext;
	UILabel* _unlockTextLabel;
	<UIScrollViewDelegate>* _delegate;
	BOOL _resetsScrollOnPluginWillDisable;
	float _contentScrollViewWidth;

}

@property (assign,nonatomic) <UIScrollViewDelegate> * delegate;                        //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL isTopCell;                                           //@synthesize isTopCell=_isTopCell - In the implementation block
@property (assign,nonatomic) BOOL drawsSeparators;                                     //@synthesize drawsSeparators=_drawsSeparators - In the implementation block
@property (assign,nonatomic) float contentScrollViewWidth;                             //@synthesize contentScrollViewWidth=_contentScrollViewWidth - In the implementation block
@property (nonatomic,retain) SBUnlockActionContext * unlockActionContext;              //@synthesize unlockActionContext=_unlockActionContext - In the implementation block
@property (assign,nonatomic) BOOL resetsScrollOnPluginWillDisable;                     //@synthesize resetsScrollOnPluginWillDisable=_resetsScrollOnPluginWillDisable - In the implementation block
@property (nonatomic,retain) UIButton * actionButton; 
+(id)defaultColorForRelevanceDate;
+(id)defaultFontForRelevanceDate;
+(id)defaultColorForEventDate;
+(id)defaultFontForEventDate;
+(float)primaryPaddingLeft;
+(id)defaultFontForPrimaryText;
+(id)defaultColorForPrimaryText;
+(id)defaultFontForSubtitleText;
+(id)defaultColorForSubtitleText;
+(id)defaultFontForSecondaryText;
+(id)defaultColorForSecondaryText;
+(float)rowHeightForTitle:(id)arg1 subtitle:(id)arg2 body:(id)arg3 maxLines:(unsigned)arg4 attachmentSize:(CGSize)arg5 datesVisible:(BOOL)arg6 rowWidth:(float)arg7 includeUnlockActionText:(BOOL)arg8 ;
+(BOOL)wantsUnlockActionText;
-(void)setRelevanceDateLabel:(id)arg1 ;
-(id)unlockActionContext;
-(void)setUnlockActionContext:(id)arg1 ;
-(void)setContentScrollViewWidth:(float)arg1 ;
-(void)setButtonLabel:(id)arg1 handler:(id)arg2 ;
-(void)setDrawsSeparators:(BOOL)arg1 ;
-(void)setIsTopCell:(BOOL)arg1 ;
-(void)resetScrollView;
-(void)setResetsScrollOnPluginWillDisable:(BOOL)arg1 ;
-(void)_notePluginWillDisable:(id)arg1 ;
-(void)scrollToOriginAnimated:(BOOL)arg1 ;
-(id)_vibrantTextColor;
-(void)_updateUnlockText:(id)arg1 ;
-(id)_buttonWithLabel:(id)arg1 ;
-(void)_handleActionButtonPress:(id)arg1 ;
-(BOOL)drawsSeparators;
-(float)contentScrollViewWidth;
-(BOOL)resetsScrollOnPluginWillDisable;
-(BOOL)isTopCell;
-(void)setContentAlpha:(float)arg1 ;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(void)layoutSubviews;
-(id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2 ;
-(id)delegate;
-(void)prepareForReuse;
-(int)_separatorBackdropOverlayBlendMode;
-(void)_setSeparatorBackdropOverlayBlendMode:(int)arg1 ;
-(id)_separatorColor;
@end

