/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 2:43:22 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MusicLibrary/MusicLibrary-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <MusicLibrary/NSCopying.h>

@class MIPArtist, NSString, NSData;

@interface MIPMovie : PBCodable <NSCopying> {

	long long _rentalDuration;
	long long _rentalPlaybackDuration;
	long long _rentalPlaybackStartedDateTime;
	long long _rentalStartedDateTime;
	MIPArtist* _artist;
	int _audioLanguage;
	int _audioTrackId;
	int _audioTrackIndex;
	NSString* _extendedContentName;
	NSData* _flattenedChapterData;
	NSString* _movieInfo;
	int _subtitleLanguage;
	int _subtitleTrackIndex;
	int _videoQuality;
	char _hasAlternateAudio;
	char _hasChapterData;
	char _hasSubtitles;
	char _rental;
	SCD_Struct_MI15 _has;

}

@property (nonatomic,readonly) char hasArtist; 
@property (nonatomic,retain) MIPArtist * artist;                                   //@synthesize artist=_artist - In the implementation block
@property (assign,nonatomic) char hasVideoQuality; 
@property (assign,nonatomic) int videoQuality;                                     //@synthesize videoQuality=_videoQuality - In the implementation block
@property (assign,nonatomic) char hasRental; 
@property (assign,nonatomic) char rental;                                          //@synthesize rental=_rental - In the implementation block
@property (assign,nonatomic) char hasHasChapterData; 
@property (assign,nonatomic) char hasChapterData;                                  //@synthesize hasChapterData=_hasChapterData - In the implementation block
@property (nonatomic,readonly) char hasExtendedContentName; 
@property (nonatomic,retain) NSString * extendedContentName;                       //@synthesize extendedContentName=_extendedContentName - In the implementation block
@property (nonatomic,readonly) char hasMovieInfo; 
@property (nonatomic,retain) NSString * movieInfo;                                 //@synthesize movieInfo=_movieInfo - In the implementation block
@property (assign,nonatomic) char hasHasAlternateAudio; 
@property (assign,nonatomic) char hasAlternateAudio;                               //@synthesize hasAlternateAudio=_hasAlternateAudio - In the implementation block
@property (assign,nonatomic) char hasHasSubtitles; 
@property (assign,nonatomic) char hasSubtitles;                                    //@synthesize hasSubtitles=_hasSubtitles - In the implementation block
@property (assign,nonatomic) char hasAudioLanguage; 
@property (assign,nonatomic) int audioLanguage;                                    //@synthesize audioLanguage=_audioLanguage - In the implementation block
@property (assign,nonatomic) char hasAudioTrackIndex; 
@property (assign,nonatomic) int audioTrackIndex;                                  //@synthesize audioTrackIndex=_audioTrackIndex - In the implementation block
@property (assign,nonatomic) char hasAudioTrackId; 
@property (assign,nonatomic) int audioTrackId;                                     //@synthesize audioTrackId=_audioTrackId - In the implementation block
@property (assign,nonatomic) char hasSubtitleLanguage; 
@property (assign,nonatomic) int subtitleLanguage;                                 //@synthesize subtitleLanguage=_subtitleLanguage - In the implementation block
@property (assign,nonatomic) char hasSubtitleTrackIndex; 
@property (assign,nonatomic) int subtitleTrackIndex;                               //@synthesize subtitleTrackIndex=_subtitleTrackIndex - In the implementation block
@property (assign,nonatomic) char hasRentalDuration; 
@property (assign,nonatomic) long long rentalDuration;                             //@synthesize rentalDuration=_rentalDuration - In the implementation block
@property (assign,nonatomic) char hasRentalPlaybackDuration; 
@property (assign,nonatomic) long long rentalPlaybackDuration;                     //@synthesize rentalPlaybackDuration=_rentalPlaybackDuration - In the implementation block
@property (assign,nonatomic) char hasRentalPlaybackStartedDateTime; 
@property (assign,nonatomic) long long rentalPlaybackStartedDateTime;              //@synthesize rentalPlaybackStartedDateTime=_rentalPlaybackStartedDateTime - In the implementation block
@property (assign,nonatomic) char hasRentalStartedDateTime; 
@property (assign,nonatomic) long long rentalStartedDateTime;                      //@synthesize rentalStartedDateTime=_rentalStartedDateTime - In the implementation block
@property (nonatomic,readonly) char hasFlattenedChapterData; 
@property (nonatomic,retain) NSData * flattenedChapterData;                        //@synthesize flattenedChapterData=_flattenedChapterData - In the implementation block
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(int)videoQuality;
-(void)setVideoQuality:(int)arg1 ;
-(void)setArtist:(MIPArtist *)arg1 ;
-(char)hasArtist;
-(void)setHasVideoQuality:(char)arg1 ;
-(char)hasVideoQuality;
-(MIPArtist *)artist;
-(void)setExtendedContentName:(NSString *)arg1 ;
-(void)setMovieInfo:(NSString *)arg1 ;
-(void)setFlattenedChapterData:(NSData *)arg1 ;
-(void)setRental:(char)arg1 ;
-(void)setHasRental:(char)arg1 ;
-(char)hasRental;
-(void)setHasChapterData:(char)arg1 ;
-(void)setHasHasChapterData:(char)arg1 ;
-(char)hasHasChapterData;
-(char)hasExtendedContentName;
-(char)hasMovieInfo;
-(void)setHasAlternateAudio:(char)arg1 ;
-(void)setHasHasAlternateAudio:(char)arg1 ;
-(char)hasHasAlternateAudio;
-(void)setHasSubtitles:(char)arg1 ;
-(void)setHasHasSubtitles:(char)arg1 ;
-(char)hasHasSubtitles;
-(void)setAudioLanguage:(int)arg1 ;
-(void)setHasAudioLanguage:(char)arg1 ;
-(char)hasAudioLanguage;
-(void)setAudioTrackIndex:(int)arg1 ;
-(void)setHasAudioTrackIndex:(char)arg1 ;
-(char)hasAudioTrackIndex;
-(void)setAudioTrackId:(int)arg1 ;
-(void)setHasAudioTrackId:(char)arg1 ;
-(char)hasAudioTrackId;
-(void)setSubtitleLanguage:(int)arg1 ;
-(void)setHasSubtitleLanguage:(char)arg1 ;
-(char)hasSubtitleLanguage;
-(void)setSubtitleTrackIndex:(int)arg1 ;
-(void)setHasSubtitleTrackIndex:(char)arg1 ;
-(char)hasSubtitleTrackIndex;
-(void)setRentalDuration:(long long)arg1 ;
-(void)setHasRentalDuration:(char)arg1 ;
-(char)hasRentalDuration;
-(void)setRentalPlaybackDuration:(long long)arg1 ;
-(void)setHasRentalPlaybackDuration:(char)arg1 ;
-(char)hasRentalPlaybackDuration;
-(void)setRentalPlaybackStartedDateTime:(long long)arg1 ;
-(void)setHasRentalPlaybackStartedDateTime:(char)arg1 ;
-(char)hasRentalPlaybackStartedDateTime;
-(void)setRentalStartedDateTime:(long long)arg1 ;
-(void)setHasRentalStartedDateTime:(char)arg1 ;
-(char)hasRentalStartedDateTime;
-(char)hasFlattenedChapterData;
-(char)rental;
-(char)hasChapterData;
-(NSString *)extendedContentName;
-(NSString *)movieInfo;
-(char)hasAlternateAudio;
-(char)hasSubtitles;
-(int)audioLanguage;
-(int)audioTrackIndex;
-(int)audioTrackId;
-(int)subtitleLanguage;
-(int)subtitleTrackIndex;
-(long long)rentalDuration;
-(long long)rentalPlaybackDuration;
-(long long)rentalPlaybackStartedDateTime;
-(long long)rentalStartedDateTime;
-(NSData *)flattenedChapterData;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
@end

