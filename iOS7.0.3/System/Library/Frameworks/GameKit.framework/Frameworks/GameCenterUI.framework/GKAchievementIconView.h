/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:52:32 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/GameKit.framework/Frameworks/GameCenterUI.framework/GameCenterUI
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <GameCenterUI/GameCenterUI-Structs.h>
#import <UIKit/UIImageView.h>

@class GKAchievement;

@interface GKAchievementIconView : UIImageView {

	GKAchievement* _achievement;
	GKAchievement* _localAchievement;

}

@property (nonatomic,retain) GKAchievement * achievement;                   //@synthesize achievement=_achievement - In the implementation block
@property (nonatomic,retain) GKAchievement * localAchievement;              //@synthesize localAchievement=_localAchievement - In the implementation block
+(id)progressSource;
-(void)setAchievement:(id)arg1 ;
-(void)setLocalAchievement:(id)arg1 ;
-(void)configureImage;
-(id)processProgressImageForAchievementImage:(id)arg1 ;
-(id)progressIdentifierForAchievement:(id)arg1 ;
-(void)loadAndProcessAchievementProgressImageForAchievement:(id)arg1 withHandler:(/*^block*/ id)arg2 ;
-(void)setupForAchievement:(id)arg1 localAchievement:(id)arg2 ;
-(id)achievement;
-(id)localAchievement;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)invalidateIntrinsicContentSize;
@end

