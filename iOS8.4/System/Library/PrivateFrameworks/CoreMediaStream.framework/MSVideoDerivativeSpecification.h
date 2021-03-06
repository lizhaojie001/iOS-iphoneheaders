/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:21:44 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString;

@interface MSVideoDerivativeSpecification : NSObject {

	BOOL _useCellular;
	BOOL _powerRequired;
	double _bitRate;
	NSString* _videoType;
	unsigned long long _mediaAssetType;

}

@property (nonatomic,readonly) BOOL useCellular;                               //@synthesize useCellular=_useCellular - In the implementation block
@property (nonatomic,readonly) BOOL powerRequired;                             //@synthesize powerRequired=_powerRequired - In the implementation block
@property (nonatomic,readonly) double bitRate;                                 //@synthesize bitRate=_bitRate - In the implementation block
@property (nonatomic,readonly) NSString * videoType;                           //@synthesize videoType=_videoType - In the implementation block
@property (nonatomic,readonly) unsigned long long mediaAssetType;              //@synthesize mediaAssetType=_mediaAssetType - In the implementation block
+(id)videoDerivativeSpecificationsWithDictionaryArray:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(BOOL)useCellular;
-(BOOL)powerRequired;
-(NSString *)videoType;
-(double)bitRate;
-(unsigned long long)mediaAssetType;
@end

