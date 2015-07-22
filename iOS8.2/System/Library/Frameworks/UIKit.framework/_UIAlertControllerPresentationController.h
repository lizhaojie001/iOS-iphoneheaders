/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:19:01 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIPresentationController.h>
#import <UIKit/UIAdaptivePresentationControllerDelegate.h>

@class UIView, _UIKeyboardLayoutAlignmentView, NSString;

@interface _UIAlertControllerPresentationController : UIPresentationController <UIAdaptivePresentationControllerDelegate> {

	UIView* _dimmingView;
	_UIKeyboardLayoutAlignmentView* keyboardLayoutAlignmentView;
	UIView* keyboardLayoutAlignmentAvailableSpaceView;
	char constraintsPrepared;
	char __isCurrentContext;
	char __shouldRespectNearestCurrentContextPresenter;

}

@property (readonly) UIView * _dimmingView;                                                                                         //@synthesize dimmingView=_dimmingView - In the implementation block
@property (setter=_setIsCurrentContext:) char _isCurrentContext;                                                                    //@synthesize _isCurrentContext=__isCurrentContext - In the implementation block
@property (setter=_setShouldRespectNearestCurrentContextPresenter:) char _shouldRespectNearestCurrentContextPresenter;              //@synthesize _shouldRespectNearestCurrentContextPresenter=__shouldRespectNearestCurrentContextPresenter - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(CGRect)frameOfPresentedViewInContainerView;
-(void)containerViewDidLayoutSubviews;
-(char)shouldRemovePresentersView;
-(char)shouldPresentInFullscreen;
-(char)_shouldRespectDefinesPresentationContext;
-(id)presentedView;
-(void)presentationTransitionDidEnd:(char)arg1 ;
-(void)dismissalTransitionDidEnd:(char)arg1 ;
-(void)presentationTransitionWillBegin;
-(void)dismissalTransitionWillBegin;
-(void)containerViewWillLayoutSubviews;
-(int)adaptivePresentationStyleForPresentationController:(id)arg1 ;
-(int)adaptivePresentationStyle;
-(id)initWithPresentedViewController:(id)arg1 presentingViewController:(id)arg2 ;
-(id)presentationController:(id)arg1 viewControllerForAdaptivePresentationStyle:(int)arg2 ;
-(char)_preserveResponderAcrossWindows;
-(UIView *)_dimmingView;
-(void)_prepareConstraintsIfNecessary;
-(char)_isCurrentContext;
-(char)_shouldRespectNearestCurrentContextPresenter;
-(id)_presentedAlertController;
-(void)_occludePresentingWindow:(char)arg1 ;
-(int)attributeToAlignAlertControllerViewBy;
-(float)constantForAligningAlertControllerToAvailableSpace;
-(void)_setIsCurrentContext:(char)arg1 ;
-(void)_setShouldRespectNearestCurrentContextPresenter:(char)arg1 ;
@end
