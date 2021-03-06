/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 7:10:01 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /Applications/Podcasts.app/Podcasts
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Podcasts/Podcasts-Structs.h>
#import <Podcasts/NSCopying.h>

@class NSString;

@interface IMUniversalPlaybackPositionMetadata : NSObject <NSCopying> {

	char _hasBeenPlayed;
	char _isNew;
	NSString* _itemIdentifier;
	unsigned _playCount;
	double _timestamp;
	double _bookmarkTime;

}

@property (nonatomic,copy) NSString * itemIdentifier;              //@synthesize itemIdentifier=_itemIdentifier - In the implementation block
@property (assign,nonatomic) double timestamp;                     //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) double bookmarkTime;                  //@synthesize bookmarkTime=_bookmarkTime - In the implementation block
@property (assign,nonatomic) char hasBeenPlayed;                   //@synthesize hasBeenPlayed=_hasBeenPlayed - In the implementation block
@property (assign,nonatomic) unsigned playCount;                   //@synthesize playCount=_playCount - In the implementation block
@property (assign,nonatomic) char isNew;                           //@synthesize isNew=_isNew - In the implementation block
+(id)metadataWithValuesItemIdentifier:(id)arg1 keyValueStorePayload:(id)arg2 ;
+(id)keyValueStoreItemIdentifierForItem:(id)arg1 ;
+(id)metadataWithValuesFromDataSourceItem:(id)arg1 ;
-(char)isNew;
-(double)bookmarkTime;
-(char)hasBeenPlayed;
-(void)setHasBeenPlayed:(char)arg1 ;
-(void)setItemIdentifier:(NSString *)arg1 ;
-(void)dealloc;
-(id)init;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(double)timestamp;
-(void)setTimestamp:(double)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setBookmarkTime:(double)arg1 ;
-(void)setPlayCount:(unsigned)arg1 ;
-(unsigned)playCount;
-(NSString *)itemIdentifier;
-(void)setIsNew:(char)arg1 ;
-(id)keyValueStorePayload;
@end

