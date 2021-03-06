/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:28:45 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/Frameworks/PassKit.framework/PassKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PassKit/PassKit-Structs.h>
#import <UIKit/UIView.h>

@class _UIBackdropView;

@interface PKPaymentAuthorizationNavigationBarBackgroundView : UIView {

	_UIBackdropView* _backdropView;

}
-(void)_createSubviews;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setAppearanceStorage:(id)arg1 ;
-(id)appearanceStorage;
-(void)updateBackgroundImage;
-(void)setBarStyle:(long long)arg1 ;
-(void)setBarWantsAdaptiveBackdrop:(BOOL)arg1 ;
-(void)setTranslucent:(BOOL)arg1 ;
-(void)setBarTintColor:(id)arg1 ;
-(void)_setIsContainedInPopover:(BOOL)arg1 ;
-(void)_setFrame:(CGRect)arg1 forceUpdateBackgroundImage:(BOOL)arg2 ;
@end

