/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, June 24, 2015 at 10:08:11 PM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/Assistant/UIPlugins/Sports.siriUIBundle/Sports
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Sports/Sports-Structs.h>
#import <Sports/ACSportsEntityView.h>

@class ACSportsLoadingImageView, UILabel, UIImageView, SASportsAthlete;

@interface ACSportsTeamAthleteView : ACSportsEntityView {

	ACSportsLoadingImageView* _athleteImage;
	UILabel* _numberLabel;
	UILabel* _nameLabel;
	UILabel* _positionLabel;
	UILabel* _heightLabel;
	UILabel* _weightLabel;
	UIImageView* _chevronView;
	char _hidePlayerImage;
	char _alwaysUseFullName;

}

@property (nonatomic,retain) SASportsAthlete * entity; 
@property (assign,nonatomic) char hidePlayerImage;                  //@synthesize hidePlayerImage=_hidePlayerImage - In the implementation block
@property (assign,nonatomic) char alwaysUseFullName;                //@synthesize alwaysUseFullName=_alwaysUseFullName - In the implementation block
-(char)hidePlayerImage;
-(char)supportsDisplayOfDomainObject:(id)arg1 league:(id)arg2 ;
-(char)alwaysUseFullName;
-(void)setHidePlayerImage:(char)arg1 ;
-(void)setAlwaysUseFullName:(char)arg1 ;
-(void)didChangeEntityFromEntity:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(char)isSelectable;
-(float)contentHeight;
@end

