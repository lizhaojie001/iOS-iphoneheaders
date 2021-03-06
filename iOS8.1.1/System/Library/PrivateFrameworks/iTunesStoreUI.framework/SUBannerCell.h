/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:35:08 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iTunesStoreUI/SUTableCell.h>
#import <iTunesStoreUI/SUCellConfigurationView.h>

@class UIButton, NSString;

@interface SUBannerCell : SUTableCell <SUCellConfigurationView> {

	UIButton* _leftButton;
	UIButton* _rightButton;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)reloadView;
-(void)dealloc;
-(void)layoutSubviews;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)setHighlighted:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)_reloadButtons;
-(id)_newButton;
-(void)setConfiguration:(id)arg1 ;
-(void)_buttonAction:(id)arg1 ;
@end

