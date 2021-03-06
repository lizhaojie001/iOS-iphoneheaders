/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 4:39:41 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iTunesStoreUI/iTunesStoreUI-Structs.h>
#import <iTunesStoreUI/SUViewController.h>

@class NSMutableArray, UIViewController, SUOverlayTransition, SUScriptWindowContext, SUScriptFunction, SUMaskedView, SUTouchCaptureView, SUMaskProvider;

@interface SUOverlayViewController : SUViewController {

	NSMutableArray* _actionQueue;
	UIViewController* _activeViewController;
	UIViewController* _backViewController;
	char _canSwipeToDismiss;
	UIViewController* _frontViewController;
	SUOverlayTransition* _lastFlipTransition;
	CGSize _overlaySize;
	SUOverlayTransition* _presentationTransition;
	SUScriptWindowContext* _scriptWindowContext;
	float _shadowOpacity;
	float _shadowRadius;
	SUScriptFunction* _shouldDismissFunction;
	int _state;
	SUMaskedView* _subviewContainerView;
	SUTouchCaptureView* _touchCaptureView;

}

@property (nonatomic,readonly) UIViewController * activeViewController; 
@property (nonatomic,retain) UIViewController * backViewController;                     //@synthesize backViewController=_backViewController - In the implementation block
@property (nonatomic,retain) UIViewController * frontViewController;                    //@synthesize frontViewController=_frontViewController - In the implementation block
@property (assign,nonatomic) CGSize overlaySize;                                        //@synthesize overlaySize=_overlaySize - In the implementation block
@property (nonatomic,retain) SUMaskProvider * maskProvider; 
@property (assign,nonatomic) float shadowOpacity;                                       //@synthesize shadowOpacity=_shadowOpacity - In the implementation block
@property (assign,nonatomic) float shadowRadius;                                        //@synthesize shadowRadius=_shadowRadius - In the implementation block
@property (assign,nonatomic) char canSwipeToDismiss;                                    //@synthesize canSwipeToDismiss=_canSwipeToDismiss - In the implementation block
@property (nonatomic,retain) SUScriptFunction * shouldDismissFunction;                  //@synthesize shouldDismissFunction=_shouldDismissFunction - In the implementation block
@property (getter=isActiveOverlay,nonatomic,readonly) char activeOverlay; 
@property (getter=isOnFront,nonatomic,readonly) char onFront; 
@property (nonatomic,retain) SUOverlayTransition * presentationTransition;              //@synthesize presentationTransition=_presentationTransition - In the implementation block
+(CGSize)defaultOverlaySize;
-(float)shadowOpacity;
-(void)dealloc;
-(id)init;
-(char)canPerformAction:(SEL)arg1 withSender:(id)arg2 ;
-(void)animationDidStop:(id)arg1 finished:(char)arg2 ;
-(void)loadView;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidAppear:(char)arg1 ;
-(void)viewDidDisappear:(char)arg1 ;
-(void)setShadowOpacity:(float)arg1 ;
-(void)setShadowRadius:(float)arg1 ;
-(float)shadowRadius;
-(void)storePage:(id)arg1 finishedWithSuccess:(char)arg2 ;
-(id)copyArchivableContext;
-(void)restoreArchivableContext:(id)arg1 ;
-(id)scriptWindowContext;
-(void)setScriptWindowContext:(id)arg1 ;
-(char)isActiveOverlay;
-(char)shouldExcludeFromNavigationHistory;
-(void)invalidateForMemoryPurge;
-(void)setBackViewController:(UIViewController *)arg1 ;
-(void)_performNextAction;
-(UIViewController *)activeViewController;
-(void)flipWithTransition:(id)arg1 ;
-(void)setCanSwipeToDismiss:(char)arg1 ;
-(void)setFrontViewController:(UIViewController *)arg1 ;
-(void)setShouldDismissFunction:(SUScriptFunction *)arg1 ;
-(void)setMaskProvider:(SUMaskProvider *)arg1 ;
-(void)setOverlaySize:(CGSize)arg1 ;
-(UIViewController *)backViewController;
-(char)canSwipeToDismiss;
-(UIViewController *)frontViewController;
-(CGSize)overlaySize;
-(SUScriptFunction *)shouldDismissFunction;
-(void)imagePageViewTapped:(id)arg1 ;
-(SUOverlayTransition *)presentationTransition;
-(void)_enqueueAction:(id)arg1 ;
-(void)setPresentationTransition:(SUOverlayTransition *)arg1 ;
-(void)_overlayAnimationDidFinish;
-(char)isOnFront;
-(void)_overlayActionDidFinish;
-(void)viewWillDismissWithTransition:(id)arg1 ;
-(id)initWithOverlayConfiguration:(id)arg1 ;
-(void)_applyOverlayConfiguration:(id)arg1 ;
-(void)_setActiveViewController:(id)arg1 updateInterface:(char)arg2 ;
-(void)_tearDownTouchCaptureView;
-(id)_activeViewController;
-(SUMaskProvider *)maskProvider;
-(id)_subviewContainerView;
-(void)_applyDisplayProperties;
-(void)_setShadowVisible:(char)arg1 ;
-(void)_touchCaptureAction:(id)arg1 ;
-(id)_flipTransition;
-(void)_finishFlipAction:(id)arg1 ;
-(void)_performFlipTransitionAction:(id)arg1 ;
-(char)_isControllerLoaded:(id)arg1 ;
-(void)_performFlipAction:(id)arg1 ;
@end

