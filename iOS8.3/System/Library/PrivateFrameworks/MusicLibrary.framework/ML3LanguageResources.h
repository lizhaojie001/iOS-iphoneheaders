/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 2:43:40 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MusicLibrary/NSSecureCoding.h>

@class NSDictionary, NSString;

@interface ML3LanguageResources : NSObject <NSSecureCoding> {

	NSDictionary* _sectionsInfo;
	NSDictionary* _sortingDetails;
	NSString* _canonicalLanguageIdentifier;

}

@property (nonatomic,readonly) NSDictionary * sectionsInfo;                         //@synthesize sectionsInfo=_sectionsInfo - In the implementation block
@property (nonatomic,readonly) NSDictionary * sortingDetails;                       //@synthesize sortingDetails=_sortingDetails - In the implementation block
@property (nonatomic,readonly) NSString * canonicalLanguageIdentifier;              //@synthesize canonicalLanguageIdentifier=_canonicalLanguageIdentifier - In the implementation block
+(char)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)canonicalLanguageIdentifier;
-(NSDictionary *)sectionsInfo;
-(NSDictionary *)sortingDetails;
-(id)initWithSectionsInfo:(id)arg1 sortingDetails:(id)arg2 canonicalLanguageIdentifier:(id)arg3 ;
@end

