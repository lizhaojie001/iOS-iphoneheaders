/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:25:32 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/TelephonyUI.framework/TelephonyUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <TelephonyUI/TelephonyUI-Structs.h>
#import <UIKit/UIButton.h>

@class UIView, TPRingView, UIColor;

@interface TPSuperBottomBarButton : UIButton {

	UIView* _overlayView;
	TPRingView* _ringView;
	bool _usesSmallerFontSize;
	int _action;
	long long _orientation;
	UIColor* _originalBackgroundColor;

}

@property (assign,nonatomic) long long orientation;                          //@synthesize orientation=_orientation - In the implementation block
@property (assign,nonatomic) bool usesSmallerFontSize;                       //@synthesize usesSmallerFontSize=_usesSmallerFontSize - In the implementation block
@property (assign,nonatomic) int action;                                     //@synthesize action=_action - In the implementation block
@property (nonatomic,retain) UIColor * originalBackgroundColor;              //@synthesize originalBackgroundColor=_originalBackgroundColor - In the implementation block
+(double)defaultHeight;
-(id)initWithAction:(int)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(long long)orientation;
-(int)action;
-(void)setEnabled:(bool)arg1 ;
-(CGSize)intrinsicContentSize;
-(void)setHighlighted:(bool)arg1 ;
-(void)setSelected:(bool)arg1 ;
-(void)setAction:(int)arg1 ;
-(void)setOrientation:(long long)arg1 ;
-(CGRect)titleRectForContentRect:(CGRect)arg1 ;
-(CGRect)imageRectForContentRect:(CGRect)arg1 ;
-(void)setUsesSmallerFontSize:(bool)arg1 ;
-(id)initWithTitle:(id)arg1 icon:(id)arg2 color:(id)arg3 ;
-(void)configureForCancelAction;
-(bool)usesSmallerFontSize;
-(id)newOverlayView;
-(void)setOriginalBackgroundColor:(id)arg1 ;
-(id)originalBackgroundColor;
@end

