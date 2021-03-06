/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:23:25 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <SpringBoard/SBControlCenterSectionViewControllerDelegate.h>
#import <SpringBoard/_UISettingsKeyObserver.h>
#import <SpringBoard/_UIBackdropViewObserver.h>
#import <SpringBoard/SBControlCenterObserver.h>

@protocol SBControlCenterViewControllerDelegate;
@class SBControlCenterContainerView, SBControlCenterContentView, UIPanGestureRecognizer, UITapGestureRecognizer, NSMutableArray, SBControlCenterSettings, NSString;

@interface SBControlCenterViewController : UIViewController <UIGestureRecognizerDelegate, SBControlCenterSectionViewControllerDelegate, _UISettingsKeyObserver, _UIBackdropViewObserver, SBControlCenterObserver> {

	SBControlCenterContainerView* _containerView;
	SBControlCenterContentView* _contentView;
	UIPanGestureRecognizer* _panGesture;
	UITapGestureRecognizer* _tapGesture;
	NSMutableArray* _sectionList;
	SBControlCenterSettings* _settings;
	char _presented;
	char _transitioning;
	id<SBControlCenterViewControllerDelegate> _delegate;

}

@property (assign,nonatomic) id<SBControlCenterViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) float revealPercentage; 
@property (assign,getter=isPresented,nonatomic) char presented;                               //@synthesize presented=_presented - In the implementation block
@property (assign,getter=isTransitioning,nonatomic) char transitioning;                       //@synthesize transitioning=_transitioning - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setTransitioning:(char)arg1 ;
-(void)controlCenterWillPresent;
-(void)controlCenterDidDismiss;
-(void)noteSectionEnabledStateDidChange:(id)arg1 ;
-(id)chevronView;
-(void)section:(id)arg1 publishStatusUpdate:(id)arg2 ;
-(void)abortAnimatedTransition;
-(void)controlCenterWillBeginTransition;
-(void)controlCenterDidFinishTransition;
-(void)controlCenterWillFinishTransitionOpen:(char)arg1 withDuration:(double)arg2 ;
-(void)trackChevronView:(id)arg1 ;
-(float)contentHeightForOrientation:(int)arg1 ;
-(void)setRevealPercentage:(float)arg1 ;
-(float)revealPercentage;
-(void)_noteControlCenterControlDidActivate:(id)arg1 ;
-(void)_noteControlCenterControlDidDeactivate:(id)arg1 ;
-(void)sectionWantsControlCenterDismissal:(id)arg1 ;
-(void)_handleTap:(id)arg1 ;
-(void)_handlePan:(id)arg1 ;
-(void)dealloc;
-(void)setDelegate:(id<SBControlCenterViewControllerDelegate>)arg1 ;
-(id)init;
-(id<SBControlCenterViewControllerDelegate>)delegate;
-(id)view;
-(char)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2 ;
-(char)isTransitioning;
-(void)loadView;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidLoad;
-(void)settings:(id)arg1 changedValueForKey:(id)arg2 ;
-(char)isPresented;
-(void)backdropViewDidChange:(id)arg1 ;
-(void)setPresented:(char)arg1 ;
@end

