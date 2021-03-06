/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:24:46 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/Radio.framework/Radio
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Radio/Radio-Structs.h>
#import <CoreFoundation/NSCopying.h>
#import <CoreFoundation/NSMutableCopying.h>

@class RadioArtworkCollection, RadioSeedMetadata;

@interface RadioLikeBanItem : NSObject <NSCopying, NSMutableCopying> {

	long long _albumID;
	RadioArtworkCollection* _artworkCollection;
	bool _isSeed;
	RadioSeedMetadata* _seedMetadata;
	long long _storeID;
	long long _type;

}

@property (nonatomic,readonly) long long albumID;                                       //@synthesize albumID=_albumID - In the implementation block
@property (nonatomic,readonly) RadioArtworkCollection * artworkCollection;              //@synthesize artworkCollection=_artworkCollection - In the implementation block
@property (nonatomic,readonly) bool isSeed;                                             //@synthesize isSeed=_isSeed - In the implementation block
@property (nonatomic,readonly) RadioSeedMetadata * seedMetadata;                        //@synthesize seedMetadata=_seedMetadata - In the implementation block
@property (nonatomic,readonly) long long storeID;                                       //@synthesize storeID=_storeID - In the implementation block
@property (nonatomic,readonly) long long type;                                          //@synthesize type=_type - In the implementation block
-(long long)storeID;
-(id)artworkCollection;
-(long long)albumID;
-(id)init;
-(id)description;
-(long long)type;
-(id)copyWithZone:(NSZone)arg1 ;
-(id)mutableCopyWithZone:(NSZone)arg1 ;
-(void).cxx_destruct;
-(id)seedMetadata;
-(bool)isSeed;
-(id)initWithItemDictionary:(id)arg1 ;
@end

