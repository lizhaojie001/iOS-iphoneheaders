/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 7:09:48 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /Applications/MobileMail.app/MobileMail
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MobileMail/SlidableMasterSplitViewController.h>
#import <MobileMail/MFMailPopoverManagerDelegate.h>

@class DimmingView, UIViewController, NSString;

@interface MasterDetailViewController : SlidableMasterSplitViewController <MFMailPopoverManagerDelegate> {

	DimmingView* _detailDimmingView;
	int _dimmedInterfaceOrientation;
	char _dimmingDetailView;
	char _dismissingModalViewController;

}

@property (nonatomic,readonly) UIViewController * masterViewController; 
@property (nonatomic,readonly) UIViewController * detailViewController; 
@property (assign,nonatomic) char dimDetailView; 
@property (nonatomic,retain,readonly) DimmingView * detailDimmingView; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(char)shouldSnapshot;
-(void)setDimDetailView:(char)arg1 animated:(char)arg2 ;
-(void)_setDimDetailView:(char)arg1 transparently:(char)arg2 animated:(char)arg3 ;
-(DimmingView *)detailDimmingView;
-(void)_animationWillStart:(id)arg1 animated:(char)arg2 ;
-(void)_animationDidStop:(id)arg1 animated:(char)arg2 ;
-(char)dimDetailView;
-(void)_willDimDetailView:(char)arg1 ;
-(void)_willUndimDetailView:(char)arg1 ;
-(void)_didDimDetailView:(char)arg1 ;
-(void)_didUndimDetailView:(char)arg1 ;
-(void)setDimDetailView:(char)arg1 ;
-(void)showPopoverViewController:(id)arg1 fromBarButtonItem:(id)arg2 animated:(char)arg3 ;
-(void)setUserInteractionAllowed:(char)arg1 withChildViewController:(id)arg2 ;
-(void)focusViewController:(id)arg1 animated:(char)arg2 ;
-(void)unfocusViewController:(id)arg1 animated:(char)arg2 ;
-(void)popoverControllerDidDismissPopover:(id)arg1 isUserAction:(char)arg2 ;
-(void)dealloc;
-(char)shouldAutorotate;
-(void)animationDidStop:(id)arg1 finished:(id)arg2 context:(void*)arg3 ;
-(void)viewDidUnload;
-(UIViewController *)detailViewController;
-(UIViewController *)masterViewController;
@end

