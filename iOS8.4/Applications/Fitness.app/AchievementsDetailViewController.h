/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 7:09:31 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /Applications/Fitness.app/Fitness
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Fitness/Fitness-Structs.h>
#import <UIKit/UIViewController.h>
#import <Fitness/FUCrossFadeZoomTransitionAnimatorSupport.h>

@class UIScrollView, _AchievementView, HKAchievement, NSString;

@interface AchievementsDetailViewController : UIViewController <FUCrossFadeZoomTransitionAnimatorSupport> {

	UIScrollView* _scrollView;
	_AchievementView* _achievementView;
	HKAchievement* _achievement;
	unsigned _numberOfTimesEarned;

}

@property (nonatomic,retain) HKAchievement * achievement;               //@synthesize achievement=_achievement - In the implementation block
@property (assign,nonatomic) unsigned numberOfTimesEarned;              //@synthesize numberOfTimesEarned=_numberOfTimesEarned - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(CGRect)endingFrameForDetailMovieTransition;
-(unsigned)numberOfTimesEarned;
-(void)setNumberOfTimesEarned:(unsigned)arg1 ;
-(char)shouldAutorotate;
-(unsigned)supportedInterfaceOrientations;
-(void)viewWillLayoutSubviews;
-(void)loadView;
-(void)viewWillAppear:(char)arg1 ;
-(void)setUpForZoomTransitionAnimator:(id)arg1 ;
-(void)setAchievement:(HKAchievement *)arg1 ;
-(HKAchievement *)achievement;
@end

