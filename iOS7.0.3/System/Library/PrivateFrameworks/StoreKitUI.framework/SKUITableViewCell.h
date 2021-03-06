/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:57:31 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <UIKit/UITableViewCell.h>

@class SKUIBorderView, UIColor;

@interface SKUITableViewCell : UITableViewCell {

	SKUIBorderView* _bottomBorderView;
	SKUIBorderView* _topBorderView;
	float _titlePaddingLeft;
	UIEdgeInsets _textLabelInsets;
	float _borderPaddingLeft;

}

@property (nonatomic,copy) UIColor * bottomBorderColor; 
@property (nonatomic,copy) UIColor * topBorderColor; 
@property (assign,nonatomic) float borderPaddingLeft;                   //@synthesize borderPaddingLeft=_borderPaddingLeft - In the implementation block
@property (assign,nonatomic) UIEdgeInsets textLabelInsets;              //@synthesize textLabelInsets=_textLabelInsets - In the implementation block
-(void)layoutSubviews;
-(id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2 ;
-(void)setHighlighted:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)setSelected:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)prepareForReuse;
-(void)setBorderPaddingLeft:(float)arg1 ;
-(void)setTextLabelInsets:(UIEdgeInsets)arg1 ;
-(void)_reloadBorderVisibility;
-(float)borderPaddingLeft;
-(UIEdgeInsets)textLabelInsets;
-(void).cxx_destruct;
-(void)setBottomBorderColor:(id)arg1 ;
-(void)setTopBorderColor:(id)arg1 ;
-(id)bottomBorderColor;
-(id)topBorderColor;
@end

