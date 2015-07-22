/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:27:10 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class UIViewController, SUOverlayTransition;

@interface SUOverlayAction : NSObject {

	long long _animationCount;
	UIViewController* _otherViewController;
	SUOverlayTransition* _transition;
	int _type;
	UIViewController* _viewController;

}

@property (assign,nonatomic) int actionType;                                      //@synthesize type=_type - In the implementation block
@property (assign,nonatomic) long long animationCount;                            //@synthesize animationCount=_animationCount - In the implementation block
@property (nonatomic,retain) UIViewController * otherViewController;              //@synthesize otherViewController=_otherViewController - In the implementation block
@property (nonatomic,retain) SUOverlayTransition * transition;                    //@synthesize transition=_transition - In the implementation block
@property (nonatomic,retain) UIViewController * viewController;                   //@synthesize viewController=_viewController - In the implementation block
-(void)dealloc;
-(long long)animationCount;
-(void)setAnimationCount:(long long)arg1 ;
-(void)setViewController:(UIViewController *)arg1 ;
-(void)setTransition:(SUOverlayTransition *)arg1 ;
-(SUOverlayTransition *)transition;
-(UIViewController *)viewController;
-(void)setActionType:(int)arg1 ;
-(int)actionType;
-(UIViewController *)otherViewController;
-(void)setOtherViewController:(UIViewController *)arg1 ;
@end
