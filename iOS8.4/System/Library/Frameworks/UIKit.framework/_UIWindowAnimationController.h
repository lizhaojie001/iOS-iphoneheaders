/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:19:08 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIViewControllerAnimatedTransitioning.h>

@class UIWindow, NSString;

@interface _UIWindowAnimationController : NSObject <UIViewControllerAnimatedTransitioning> {

	BOOL _shouldCrossfade;
	UIWindow* _window;

}

@property (assign,nonatomic) UIWindow * window;                     //@synthesize window=_window - In the implementation block
@property (assign,nonatomic) BOOL shouldCrossfade;                  //@synthesize shouldCrossfade=_shouldCrossfade - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)animationControllerWithWindow:(id)arg1 ;
-(UIWindow *)window;
-(double)transitionDuration:(id)arg1 ;
-(void)animateTransition:(id)arg1 ;
-(void)setWindow:(UIWindow *)arg1 ;
-(id)initWithWindow:(id)arg1 ;
-(BOOL)shouldCrossfade;
-(void)_performCrossfadeAnimationWithContext:(id)arg1 windowGeometryUpdatingBlock:(/*^block*/id)arg2 ;
-(void)_performLayoutAnimationWithContext:(id)arg1 windowGeometryUpdatingBlock:(/*^block*/id)arg2 ;
-(void)setShouldCrossfade:(BOOL)arg1 ;
@end

