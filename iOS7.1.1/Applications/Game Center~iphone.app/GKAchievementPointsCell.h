/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 8:58:58 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /Applications/Game Center~iphone.app/Game Center~iphone
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Game Center~iphone/Game Center~iphone-Structs.h>
#import <GameCenterUI/GKCollectionViewCell.h>

@class GKPlayerPhotoView, GKLabel, GKScore;

@interface GKAchievementPointsCell : GKCollectionViewCell {

	GKPlayerPhotoView* _iconView;
	GKLabel* _nameLabel;
	GKLabel* _rankLabel;
	GKLabel* _pointsLabel;
	GKLabel* _achievementsLabel;

}

@property (nonatomic,retain) GKScore * score; 
@property (nonatomic,retain) GKPlayerPhotoView * iconView;              //@synthesize iconView=_iconView - In the implementation block
@property (nonatomic,retain) GKLabel * nameLabel;                       //@synthesize nameLabel=_nameLabel - In the implementation block
@property (nonatomic,retain) GKLabel * rankLabel;                       //@synthesize rankLabel=_rankLabel - In the implementation block
@property (nonatomic,retain) GKLabel * pointsLabel;                     //@synthesize pointsLabel=_pointsLabel - In the implementation block
@property (nonatomic,retain) GKLabel * achievementsLabel;               //@synthesize achievementsLabel=_achievementsLabel - In the implementation block
+(float)defaultShowcaseRowHeight;
+(float)defaultRowHeight;
-(id)rankLabel;
-(id)achievementsLabel;
-(void)setRankLabel:(id)arg1 ;
-(void)setAchievementsLabel:(id)arg1 ;
-(id)score;
-(void)setRepresentedItem:(id)arg1 ;
-(id)iconView;
-(void)didUpdateModel;
-(BOOL)canRemoveItem;
-(id)nameLabel;
-(void)setNameLabel:(id)arg1 ;
-(void)setIconView:(id)arg1 ;
-(id)pointsLabel;
-(void)setPointsLabel:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)prepareForReuse;
-(void)setScore:(id)arg1 ;
@end

