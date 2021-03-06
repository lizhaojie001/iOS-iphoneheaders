/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 7:10:02 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /Applications/Podcasts.app/Podcasts
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UITableViewCell.h>

@class UIImageView, UILabel, UIImage;

@interface MTAVPlayerTOCCell : UITableViewCell {

	UIImageView* _unplayedView;
	char _playing;
	char _playable;
	char _showsPodcast;
	UILabel* _episodeLabel;
	UILabel* _dateDurationLabel;
	unsigned _playedState;
	UIImage* _playingImage;
	UIImage* _unplayedImage;
	UIImage* _halfPlayedImage;

}

@property (nonatomic,retain) UILabel * episodeLabel;                       //@synthesize episodeLabel=_episodeLabel - In the implementation block
@property (nonatomic,retain) UILabel * dateDurationLabel;                  //@synthesize dateDurationLabel=_dateDurationLabel - In the implementation block
@property (assign,getter=isPlaying,nonatomic) char playing;                //@synthesize playing=_playing - In the implementation block
@property (assign,getter=isPlayable,nonatomic) char playable;              //@synthesize playable=_playable - In the implementation block
@property (assign,nonatomic) char showsPodcast;                            //@synthesize showsPodcast=_showsPodcast - In the implementation block
@property (assign,nonatomic) unsigned playedState;                         //@synthesize playedState=_playedState - In the implementation block
@property (nonatomic,retain) UIImage * playingImage;                       //@synthesize playingImage=_playingImage - In the implementation block
@property (nonatomic,retain) UIImage * unplayedImage;                      //@synthesize unplayedImage=_unplayedImage - In the implementation block
@property (nonatomic,retain) UIImage * halfPlayedImage;                    //@synthesize halfPlayedImage=_halfPlayedImage - In the implementation block
+(float)rowHeight;
+(id)titleFont;
+(id)detailFont;
-(void)setPlayedState:(unsigned)arg1 ;
-(UILabel *)episodeLabel;
-(UILabel *)dateDurationLabel;
-(void)updatePlayState;
-(void)updateTextColor;
-(UIImage *)playingImage;
-(void)setPlayingImage:(UIImage *)arg1 ;
-(UIImage *)unplayedImage;
-(void)setUnplayedImage:(UIImage *)arg1 ;
-(UIImage *)halfPlayedImage;
-(void)setHalfPlayedImage:(UIImage *)arg1 ;
-(void)setEpisodeLabel:(UILabel *)arg1 ;
-(void)setDateDurationLabel:(UILabel *)arg1 ;
-(char)showsPodcast;
-(void)setShowsPodcast:(char)arg1 ;
-(unsigned)playedState;
-(void)setPlayable:(char)arg1 ;
-(void)layoutSubviews;
-(id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2 ;
-(void)prepareForReuse;
-(void)updateFonts;
-(char)isPlayable;
-(char)isPlaying;
-(void)setPlaying:(char)arg1 ;
@end

