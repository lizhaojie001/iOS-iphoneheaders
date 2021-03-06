/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:34:44 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/VoiceTrigger.framework/VoiceTrigger
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSArray, NSString;

@interface VTAsset : NSObject {

	BOOL _isInstalled;
	NSArray* _languages;
	NSString* _version;

}

@property (nonatomic,retain) NSArray * languages;              //@synthesize languages=_languages - In the implementation block
@property (assign,nonatomic) BOOL isInstalled;                 //@synthesize isInstalled=_isInstalled - In the implementation block
@property (nonatomic,retain) NSString * version;               //@synthesize version=_version - In the implementation block
-(id)init;
-(id)dictionaryRepresentation;
-(void)setVersion:(NSString *)arg1 ;
-(NSString *)version;
-(NSArray *)languages;
-(void)setLanguages:(NSArray *)arg1 ;
-(id)initWithDictionaryRepresentation:(id)arg1 ;
-(id)initWithLanguages:(id)arg1 isInstalled:(BOOL)arg2 ;
-(void)setIsInstalled:(BOOL)arg1 ;
-(BOOL)isInstalled;
@end

