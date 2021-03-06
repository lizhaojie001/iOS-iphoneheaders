/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:19:13 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/AccessibilityBundles/GuidedAccess.axuiservice/GuidedAccess
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GuidedAccess/GuidedAccess-Structs.h>
#import <UIKit/UIView.h>
#import <UIKit/UIScrollViewDelegate.h>

@class UIView, UIScrollView, NSLayoutConstraint, NSArray, GAXStyleProvider, GAXUIServer;

@interface GAXOptionsView : UIView <UIScrollViewDelegate> {

	bool _optionsVisible;
	UIView* _backgroundDimmingView;
	UIView* _featuresContentView;
	UIScrollView* _featuresScrollView;
	UIView* _modalView;
	NSLayoutConstraint* _modalViewBottomConstraint;
	NSArray* _optionsViewPresentationConstraints;
	GAXStyleProvider* _styleProvider;
	GAXUIServer* _userInterfaceServer;

}

@property (assign,getter=isOptionsVisible,nonatomic) bool optionsVisible;                 //@synthesize optionsVisible=_optionsVisible - In the implementation block
@property (nonatomic,readonly) long long applicationInterfaceOrientation; 
@property (nonatomic,retain) UIView * backgroundDimmingView;                              //@synthesize backgroundDimmingView=_backgroundDimmingView - In the implementation block
@property (nonatomic,retain) UIView * featuresContentView;                                //@synthesize featuresContentView=_featuresContentView - In the implementation block
@property (nonatomic,retain) UIScrollView * featuresScrollView;                           //@synthesize featuresScrollView=_featuresScrollView - In the implementation block
@property (nonatomic,retain) UIView * modalView;                                          //@synthesize modalView=_modalView - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * modalViewBottomConstraint;              //@synthesize modalViewBottomConstraint=_modalViewBottomConstraint - In the implementation block
@property (nonatomic,retain) NSArray * optionsViewPresentationConstraints;                //@synthesize optionsViewPresentationConstraints=_optionsViewPresentationConstraints - In the implementation block
@property (nonatomic,retain) GAXStyleProvider * styleProvider;                            //@synthesize styleProvider=_styleProvider - In the implementation block
@property (nonatomic,retain) GAXUIServer * userInterfaceServer;                           //@synthesize userInterfaceServer=_userInterfaceServer - In the implementation block
-(void)setModalView:(id)arg1 ;
-(id)modalView;
-(long long)applicationInterfaceOrientation;
-(void)dismissOptionsAnimated:(bool)arg1 ;
-(id)initWithFeatureViews:(id)arg1 styleProvider:(id)arg2 userInterfaceServer:(id)arg3 ;
-(void)presentOptionsInView:(id)arg1 animated:(bool)arg2 ;
-(void)_handleTouchUpInside:(id)arg1 ;
-(void)setBackgroundDimmingView:(id)arg1 ;
-(void)setFeaturesContentView:(id)arg1 ;
-(void)setFeaturesScrollView:(id)arg1 ;
-(void)setModalViewBottomConstraint:(id)arg1 ;
-(void)setOptionsViewPresentationConstraints:(id)arg1 ;
-(id)_separatorViewsWithCount:(unsigned long long)arg1 styleProvider:(id)arg2 ;
-(id)featuresScrollView;
-(id)featuresContentView;
-(bool)isOptionsVisible;
-(id)backgroundDimmingView;
-(id)modalViewBottomConstraint;
-(id)optionsViewPresentationConstraints;
-(void)setOptionsVisible:(bool)arg1 ;
-(void)setUserInterfaceServer:(id)arg1 ;
-(id)userInterfaceServer;
-(id)styleProvider;
-(void)setStyleProvider:(id)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(void)scrollViewDidScroll:(id)arg1 ;
@end

