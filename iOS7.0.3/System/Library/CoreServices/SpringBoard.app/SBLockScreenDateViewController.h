/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:03:51 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>

@class NSTimer, _UILegibilitySettings;

@interface SBLockScreenDateViewController : UIViewController {

	NSTimer* _updateTimer;
	BOOL _disablesUpdates;
	_UILegibilitySettings* _legibilitySettings;

}

@property (assign,getter=isDateHidden,nonatomic) BOOL dateHidden; 
@property (assign,nonatomic) BOOL disablesUpdates;                                    //@synthesize disablesUpdates=_disablesUpdates - In the implementation block
@property (nonatomic,retain) _UILegibilitySettings * legibilitySettings;              //@synthesize legibilitySettings=_legibilitySettings - In the implementation block
-(void)_addObservers;
-(id)dateViewIfExists;
-(void)_updateFormat;
-(void)_backlightChanged;
-(void)setDisablesUpdates:(BOOL)arg1 ;
-(BOOL)disablesUpdates;
-(void)dealloc;
-(void)setView:(id)arg1 ;
-(void)_updateView;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)loadView;
-(void)willMoveToParentViewController:(id)arg1 ;
-(id)legibilitySettings;
-(void)setLegibilitySettings:(id)arg1 ;
-(id)dateView;
-(void)_stopUpdateTimer;
-(void)_startUpdateTimer;
-(BOOL)isDateHidden;
-(void)setDateHidden:(BOOL)arg1 ;
-(void)setContentAlpha:(float)arg1 withDateVisible:(BOOL)arg2 ;
@end

