/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 7:10:02 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /Applications/Podcasts.app/Podcasts
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Podcasts/MZUniversalPlaybackPositionTransactionContext.h>

@class NSMutableDictionary, NSString;

@interface MTUniversalPlaybackPositionTransactionContext : NSObject <MZUniversalPlaybackPositionTransactionContext> {

	NSMutableDictionary* _mediaItems;

}

@property (nonatomic,retain) NSMutableDictionary * mediaItems;              //@synthesize mediaItems=_mediaItems - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)setUPPDomainVersion:(id)arg1 ;
+(id)UPPDomainVersion;
-(NSMutableDictionary *)mediaItems;
-(void)setMediaItems:(NSMutableDictionary *)arg1 ;
-(id)lastSyncedDomainVersion;
@end

