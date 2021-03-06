/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:23:19 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <UIKit/UIButton.h>

@class UIButton;

@interface SBNotificationVibrantButton : UIButton {

	UIButton* _vibrantButton;
	UIButton* _overlayButton;

}
-(id)initWithColorSettings:(id)arg1 ;
-(void)_configureVibrantViewWithSettings:(id)arg1 ;
-(void)_configureOverlayViewWithSettings:(id)arg1 ;
-(id)_buttonFont;
-(void)_configureButton:(id*)arg1 withSettings:(id)arg2 ;
-(id)_buttonImageForColor:(id)arg1 selected:(char)arg2 ;
-(id)_newButtonWithBackgroundImage:(id)arg1 selectedImage:(id)arg2 titleColor:(id)arg3 selectedTitleColor:(id)arg4 ;
-(void)_buttonStateChanged:(id)arg1 ;
-(void)_buttonPushed:(id)arg1 ;
-(void)updateForContenteCategorySizeChange;
-(void)setTitle:(id)arg1 forState:(unsigned)arg2 ;
-(void)dealloc;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setHighlighted:(char)arg1 ;
-(id)titleLabel;
@end

