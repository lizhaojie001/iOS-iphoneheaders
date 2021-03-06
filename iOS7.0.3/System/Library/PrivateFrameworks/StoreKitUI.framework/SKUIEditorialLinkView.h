/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:57:31 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <UIKit/UIView.h>

@protocol SKUIEditorialLinkViewDelegate;
@class NSMutableArray, UIColor, SKUIEditorialLinkLayout;

@interface SKUIEditorialLinkView : UIView {

	NSMutableArray* _buttons;
	<SKUIEditorialLinkViewDelegate>* _delegate;
	UIColor* _highlightedTextColor;
	int _horizontalAlignment;
	SKUIEditorialLinkLayout* _layout;
	UIColor* _textColor;

}

@property (assign,nonatomic,__weak) <SKUIEditorialLinkViewDelegate> * delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) int horizontalAlignment;                                        //@synthesize horizontalAlignment=_horizontalAlignment - In the implementation block
@property (nonatomic,retain) SKUIEditorialLinkLayout * linkLayout;                           //@synthesize layout=_layout - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)setBackgroundColor:(id)arg1 ;
-(void)setDelegate:(id)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id)delegate;
-(void)tintColorDidChange;
-(id)_newButton;
-(int)horizontalAlignment;
-(void)setHorizontalAlignment:(int)arg1 ;
-(void)setColoringWithColorScheme:(id)arg1 ;
-(void)_linkButtonAction:(id)arg1 ;
-(void)setLinkLayout:(id)arg1 ;
-(id)linkLayout;
-(void).cxx_destruct;
@end

