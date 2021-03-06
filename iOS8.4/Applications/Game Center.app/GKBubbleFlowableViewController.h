/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 7:09:32 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /Applications/Game Center.app/Game Center
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol GKBubbleFlowableViewController <NSObject>
@optional
-(void)viewWillAppearAnimated:(char)arg1 bubbleFlow:(char)arg2;
-(char)readyToAppearWithBubbleFlow;
-(char)shouldUseSlidingDoorWhenTransitioningFrom;
-(char)shouldUseSlidingDoorWhenTransitioningTo;
-(double)bubbleFlowAnimateOutDuration;
-(double)bubbleFlowAnimateInDuration;
-(void)viewDidAppearAnimated:(char)arg1 bubbleFlow:(char)arg2;
-(void)delayAppearingWithBubbleFlowUntil:(/*^block*/id)arg1;
-(void)willAnimateKeyframesForAppearingWithBubbleFlowFromRelativeStartTime:(double)arg1 relativeDuration:(double)arg2 absoluteTransitionDuration:(double)arg3 fromViewController:(id)arg4;
-(void)willAnimateKeyframesForDisappearingWithBubbleFlowFromRelativeStartTime:(double)arg1 relativeDuration:(double)arg2 absoluteTransitionDuration:(double)arg3 toViewController:(id)arg4;
-(void)viewDidDisappearAnimated:(char)arg1 bubbleFlow:(char)arg2;
-(id)bubbleAnimatorForTransitionFromViewController:(id)arg1;
-(id)bubbleAnimatorForTransitionToViewController:(id)arg1;
-(id)bubbleAnimatorForRotation;
-(CGRect*)finalScreenFrameInViewCoordinatesForBubbleOfType:(int)arg1;
-(id)containerViewForBubbleOfType:(int)arg1;
-(id)bubbleContainerView;
-(id)bubblesUsedForAnyTransition;
-(void)configureControlForBubble:(id)arg1;
-(double)bubbleFlowSubviewFadeOutDuration;
-(double)bubbleFlowSubviewFadeOutDelay;
-(double)bubbleFlowSubviewFadeInDuration;
-(double)bubbleFlowSubviewFadeInDelay;
-(void)viewWillDisappearAnimated:(char)arg1 bubbleFlow:(char)arg2;
-(id)viewsToAnimateInWhileAppearingWithBubbleFlow;
-(id)viewsToAnimateOutWhileDisappearingWithBubbleFlow;
-(void)willAnimateAppearingWithBubbleFlow;
-(void)willAnimateDisappearingWithBubbleFlow;
-(char)updateBubbleTextImmediatelyForTransitionFromViewController:(id)arg1;
-(char)readyToDisappearWithBubbleFlow;
-(void)delayDisappearingWithBubbleFlowUntil:(/*^block*/id)arg1;

@end

