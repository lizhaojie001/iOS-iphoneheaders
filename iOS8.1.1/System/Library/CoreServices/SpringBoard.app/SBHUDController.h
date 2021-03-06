/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:27:05 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@class UIWindow, UIView, SBHUDView;

@interface SBHUDController : NSObject {

	UIWindow* _hudWindow;
	UIView* _hudContentView;
	UIView* _hudParallaxCorrectionView;
	UIView* _hudParallaxView;
	SBHUDView* _hudView;
	long long _orientation;
	BOOL _hudVisibleOrFading;

}
+(id)sharedHUDController;
-(void)_orderWindowOut:(id)arg1 ;
-(id)visibleHUDView;
-(void)hideHUDView;
-(id)visibleOrFadingHUDView;
-(void)_recenterHUDView;
-(void)_createUI;
-(void)presentHUDView:(id)arg1 ;
-(void)_tearDown;
-(void)dealloc;
-(void)reorientHUDIfNeeded:(BOOL)arg1 ;
-(void)presentHUDView:(id)arg1 autoDismissWithDelay:(double)arg2 ;
@end

