/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:20:35 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AVFoundation/AVFoundation-Structs.h>
#import <CoreFoundation/NSCopying.h>

@class AVMediaSelectionOptionInternal, NSString, NSArray, NSLocale;

@interface AVMediaSelectionOption : NSObject <NSCopying> {

	AVMediaSelectionOptionInternal* _mediaSelectionOption;

}

@property (nonatomic,readonly) bool mpIsAC3; 
@property (nonatomic,readonly) bool mpIsSDH; 
@property (nonatomic,readonly) NSString * mediaType; 
@property (nonatomic,readonly) NSArray * mediaSubTypes; 
@property (getter=isPlayable,nonatomic,readonly) bool playable; 
@property (nonatomic,readonly) NSString * extendedLanguageTag; 
@property (nonatomic,readonly) NSLocale * locale; 
@property (nonatomic,readonly) NSArray * commonMetadata; 
@property (nonatomic,readonly) NSArray * availableMetadataFormats; 
@property (nonatomic,readonly) NSString * displayName; 
+(id)mediaSelectionOptionForAsset:(id)arg1 group:(id)arg2 dictionary:(id)arg3 hasUnderlyingTrack:(bool)arg4 ;
-(bool)mpIsAC3;
-(bool)mpIsSDH;
-(id)availableMetadataFormats;
-(id)metadataForFormat:(id)arg1 ;
-(id)extendedLanguageTag;
-(id)_groupMediaType;
-(id)_groupID;
-(id)optionID;
-(bool)displaysNonForcedSubtitles;
-(id)_ancillaryDescription;
-(bool)_isDesignatedDefault;
-(id)displayNameWithLocale:(id)arg1 ;
-(id)associatedExtendedLanguageTag;
-(id)associatedPersistentIDs;
-(id)propertyList;
-(bool)hasMediaCharacteristic:(id)arg1 ;
-(id)associatedMediaSelectionOptionInMediaSelectionGroup:(id)arg1 ;
-(id)mediaSubTypes;
-(bool)isPlayable;
-(void)dealloc;
-(id)init;
-(id)description;
-(id)dictionary;
-(id)copyWithZone:(NSZone)arg1 ;
-(id)_title;
-(id)locale;
-(id)displayName;
-(id)group;
-(id)commonMetadata;
-(id)mediaType;
@end
