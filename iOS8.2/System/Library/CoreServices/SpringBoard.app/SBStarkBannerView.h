/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:23:26 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <UIKit/UIView.h>
#import <SpringBoard/SBStarkBannerItemObserver.h>
#import <SpringBoard/SBDateLabelDelegate.h>
#import <SpringBoard/SBUIBannerView.h>

@protocol SBBulletinDateLabel;
@class SBUIBannerContext, SBStarkBannerItem, UIImageView, UILabel, SBStarkBannerViewButton, NSString;

@interface SBStarkBannerView : UIView <SBStarkBannerItemObserver, SBDateLabelDelegate, SBUIBannerView> {

	SBUIBannerContext* _context;
	SBStarkBannerItem* _bannerItem;
	UIImageView* _categoryImageView;
	UILabel* _titleLabel;
	float _titleAscender;
	UILabel* _subTitleLabel;
	float _subTitleAscender;
	SBStarkBannerViewButton* _okButton;
	SBStarkBannerViewButton* _actionButton;
	UIEdgeInsets _contentInsets;
	UILabel*<SBBulletinDateLabel> _relevanceDateLabel;
	unsigned _interactionAffordances;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)bannerContext;
-(void)dateLabelDidChange:(id)arg1 ;
-(char)shouldBorrowScreen;
-(void)starkBannerItemDidReloadDisplayProperties:(id)arg1 ;
-(id)_defaultRelevanceDateFont;
-(void)_setRelevanceDate:(id)arg1 ;
-(char)_hasSubtitle;
-(char)_shouldShowOKButton;
-(void)_layoutForButton:(id)arg1 contentFrame:(CGRect)arg2 ;
-(char)_hasKnob;
-(UIEdgeInsets)_categoryImageInsets;
-(UIEdgeInsets)_contentInsetsForActionType:(int)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)didMoveToWindow;
-(void)layoutSubviews;
-(char)canBecomeFirstResponder;
-(id)initWithContext:(id)arg1 ;
-(void)_selectControl;
-(id)_titleFont;
@end

