/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 3:08:42 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Preferences/Preferences-Structs.h>
#import <UIKit/UIView.h>

@class PSSpecifier, UIViewController;

@interface PSEditingPane : UIView {

	PSSpecifier* _specifier;
	id _delegate;
	unsigned _requiresKeyboard : 1;
	UIViewController* _viewController;

}

@property (assign,nonatomic) UIViewController * viewController;              //@synthesize viewController=_viewController - In the implementation block
+(float)preferredHeight;
+(id)defaultBackgroundColor;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(void)setViewController:(UIViewController *)arg1 ;
-(UIViewController *)viewController;
-(void)willRotateToInterfaceOrientation:(int)arg1 duration:(double)arg2 ;
-(void)willAnimateRotationToInterfaceOrientation:(int)arg1 duration:(double)arg2 ;
-(void)didRotateFromInterfaceOrientation:(int)arg1 ;
-(CGRect)contentRect;
-(char)changed;
-(id)childViewControllerForHostingViewController;
-(char)shouldInsetContent;
-(void)insetContent;
-(char)requiresKeyboard;
-(void)layoutInsetContent:(CGRect)arg1 ;
-(void)setPreferenceSpecifier:(id)arg1 ;
-(void)setPreferenceValue:(id)arg1 ;
-(void)viewDidBecomeVisible;
-(id)preferenceSpecifier;
-(id)preferenceValue;
-(char)handlesDoneButton;
-(id)scrollViewToBeInsetted;
-(id)specifierLabel;
-(char)wantsNewButton;
-(void)addNewValue;
-(void)editMode;
-(void)doneEditing;
@end

