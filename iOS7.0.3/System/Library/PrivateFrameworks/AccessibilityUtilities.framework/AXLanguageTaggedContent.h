/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:54:08 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


#import <AccessibilityUtilities/AccessibilityUtilities-Structs.h>
@class NSArray, NSMutableArray, NSLinguisticTagger, NSMutableOrderedSet, NSString;

@interface AXLanguageTaggedContent : NSObject {

	NSArray* _currentDialects;
	NSRange _currentChunk;
	BOOL _predictedByTagger;
	BOOL _tagged;
	NSMutableArray* _tags;
	NSLinguisticTagger* _linguisticTagger;
	NSMutableOrderedSet* _unpredictedAmbiguousLangMaps;
	NSString* _userPreferredLangID;

}

@property (nonatomic,readonly) NSString * content; 
@property (assign,getter=isTagged,nonatomic) BOOL tagged;                                     //@synthesize tagged=_tagged - In the implementation block
@property (nonatomic,retain) NSMutableArray * tags;                                           //@synthesize tags=_tags - In the implementation block
@property (nonatomic,retain) NSMutableOrderedSet * unpredictedAmbiguousLangMaps;              //@synthesize unpredictedAmbiguousLangMaps=_unpredictedAmbiguousLangMaps - In the implementation block
@property (nonatomic,copy) NSString * userPreferredLangID;                                    //@synthesize userPreferredLangID=_userPreferredLangID - In the implementation block
@property (nonatomic,retain) NSLinguisticTagger * linguisticTagger;                           //@synthesize linguisticTagger=_linguisticTagger - In the implementation block
@property (nonatomic,retain) NSArray * currentDialects;                                       //@synthesize currentDialects=_currentDialects - In the implementation block
-(void)dealloc;
-(id)description;
-(id)content;
-(void)setLinguisticTagger:(id)arg1 ;
-(void)setTags:(id)arg1 ;
-(void)setUnpredictedAmbiguousLangMaps:(id)arg1 ;
-(void)setUserPreferredLangID:(id)arg1 ;
-(id)tags;
-(id)linguisticTagger;
-(BOOL)isTagged;
-(void)setTagged:(BOOL)arg1 ;
-(void)setCurrentDialects:(id)arg1 ;
-(void)_manuallyProcessContentWithRange:(NSRange)arg1 ;
-(void)_addTag;
-(id)ambiguousLangMaps;
-(id)currentDialects;
-(id)unambiguousLangMaps;
-(void)enumerateUnpredictedTags:(/*^block*/ id)arg1 ;
-(void)enumeratePredictedTags:(/*^block*/ id)arg1 ;
-(void)tagContent;
-(BOOL)langMapIsSignificant:(id)arg1 ;
-(id)significantAmbiguousLangMaps;
-(id)significantAmbiguousLangMapsForUserKeyboards;
-(BOOL)hasOnlyWesternLangMaps;
-(BOOL)hasOnlyNonWesternLangMaps;
-(id)primaryAmbiguousDialect;
-(id)primaryUnambiguousDialect;
-(void)updateTagsForLocalePrefChange;
-(id)unpredictedAmbiguousLangMaps;
-(id)userPreferredLangID;
-(id)initWithContent:(id)arg1 ;
@end

