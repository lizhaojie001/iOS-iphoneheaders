/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 3:09:51 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Preferences/Preferences-Structs.h>
#import <UIKit/UIView.h>

@class UIImageView;

@interface PSSoftwareUpdateAnimatedIcon : UIView {

	UIImageView* _innerGearView;
	UIImageView* _outerGearShadowView;
	UIImageView* _outerGearView;
	char _animating;

}

@property (nonatomic,readonly) UIImageView * innerGearView; 
@property (nonatomic,readonly) UIImageView * outerGearShadowView; 
@property (nonatomic,readonly) UIImageView * outerGearView; 
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(void)setAnimating:(char)arg1 ;
-(UIImageView *)innerGearView;
-(UIImageView *)outerGearShadowView;
-(UIImageView *)outerGearView;
@end

