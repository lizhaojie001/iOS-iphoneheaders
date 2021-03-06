/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, June 24, 2015 at 9:45:06 PM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/AccessibilityBundles/SpeakThis.axuiservice/SpeakThis
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SpeakThis/SpeakThis-Structs.h>
#import <UIKit/UIViewController.h>
#import <SpeakThis/AXUINubbitDelegate.h>
#import <SpeakThis/AXSpeakOverlayControlBarDelegate.h>

@protocol AXSpeakOverlayViewControllerDelegate;
@class _UIBackdropView, AXTimer, NSArray, AXSpeakOverlayControlBar, QSSelectionHighlightView, NSString;

@interface AXSpeakOverlayViewController : UIViewController <AXUINubbitDelegate, AXSpeakOverlayControlBarDelegate> {

	char _inTabMode;
	_UIBackdropView* _containingView;
	AXTimer* _collapseTimer;
	char _nubbitMovedOutsideOfTabMode;
	id<AXSpeakOverlayViewControllerDelegate> _delegate;
	NSArray* _highlightSelectionRects;
	AXSpeakOverlayControlBar* _bar;
	QSSelectionHighlightView* _highlightView;
	NSString* _currentAppBundleIdentifier;
	CGPoint _nubbitMoveStartPosition;
	CGPoint _gestureMoveStartPosition;

}

@property (assign,nonatomic,__weak) id<AXSpeakOverlayViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSArray * highlightSelectionRects;                                     //@synthesize highlightSelectionRects=_highlightSelectionRects - In the implementation block
@property (nonatomic,retain) AXSpeakOverlayControlBar * bar;                                        //@synthesize bar=_bar - In the implementation block
@property (nonatomic,retain) QSSelectionHighlightView * highlightView;                              //@synthesize highlightView=_highlightView - In the implementation block
@property (assign,nonatomic) CGPoint nubbitMoveStartPosition;                                       //@synthesize nubbitMoveStartPosition=_nubbitMoveStartPosition - In the implementation block
@property (assign,nonatomic) CGPoint gestureMoveStartPosition;                                      //@synthesize gestureMoveStartPosition=_gestureMoveStartPosition - In the implementation block
@property (nonatomic,retain) NSString * currentAppBundleIdentifier;                                 //@synthesize currentAppBundleIdentifier=_currentAppBundleIdentifier - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(char)_shouldForwardViewWillTransitionToSize;
-(void)setNubbitMoveStartPosition:(CGPoint)arg1 ;
-(CGPoint)gestureMoveStartPosition;
-(void)stopButtonPressed;
-(void)showWithPosition:(CGPoint)arg1 forApplication:(id)arg2 ;
-(void)controlBarDragged:(CGPoint)arg1 ;
-(void)slowDownButtonPressed;
-(void)rewindButtonPressed;
-(void)fastForwardButtonPressed;
-(void)speedUpButtonPressed;
-(void)tabModeButtonPressed;
-(void)_unregisterNubbit;
-(CGPoint)_denormalizedNubbitPositionForViewSize:(CGSize)arg1 ;
-(void)_updateForTabMode;
-(void)setCurrentAppBundleIdentifier:(NSString *)arg1 ;
-(void)_enqueueCollapseTimer;
-(NSString *)currentAppBundleIdentifier;
-(void)_saveNubbitPosition;
-(CGPoint)nubbitMoveStartPosition;
-(AXSpeakOverlayControlBar *)bar;
-(void)didPause;
-(void)headerTapped;
-(void)didResume;
-(void)didStop;
-(void)_registerNubbit;
-(void)setBar:(AXSpeakOverlayControlBar *)arg1 ;
-(void)setGestureMoveStartPosition:(CGPoint)arg1 ;
-(void)hide;
-(void)dealloc;
-(void)setDelegate:(id<AXSpeakOverlayViewControllerDelegate>)arg1 ;
-(id<AXSpeakOverlayViewControllerDelegate>)delegate;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)loadView;
-(QSSelectionHighlightView *)highlightView;
-(void)setHighlightView:(QSSelectionHighlightView *)arg1 ;
-(void)playButtonPressed;
-(void)pauseButtonPressed;
-(void)nubbitDidUpdatePosition:(id)arg1 ;
-(char)isSpeaking;
-(NSArray *)highlightSelectionRects;
-(void)setHighlightSelectionRects:(NSArray *)arg1 ;
@end

