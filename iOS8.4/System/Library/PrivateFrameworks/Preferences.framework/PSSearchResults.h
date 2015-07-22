/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:24:47 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Preferences/Preferences-Structs.h>
#import <Preferences/NSCopying.h>

@class NSMutableArray, NSMutableSet, NSMutableDictionary;

@interface PSSearchResults : NSObject <NSCopying> {

	NSMutableArray* _sectionEntries;
	NSMutableSet* _explicitlyAddedSectionEntries;
	NSMutableDictionary* _entriesBySection;
	BOOL _needsSorting;
	BOOL _treatSectionEntriesAsRegularEntries;
	/*^block*/id _sectionComparator;
	/*^block*/id _entryComparator;

}

@property (nonatomic,copy) id sectionComparator;                                    //@synthesize sectionComparator=_sectionComparator - In the implementation block
@property (nonatomic,copy) id entryComparator;                                      //@synthesize entryComparator=_entryComparator - In the implementation block
@property (assign,nonatomic) BOOL treatSectionEntriesAsRegularEntries;              //@synthesize treatSectionEntriesAsRegularEntries=_treatSectionEntriesAsRegularEntries - In the implementation block
-(void)dealloc;
-(id)init;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)addEntry:(id)arg1 ;
-(unsigned long long)removeEntries:(id)arg1 ;
-(void)sortResults;
-(id)resultsByMergingWithResults:(id)arg1 ;
-(void)mergeWithResults:(id)arg1 ;
-(BOOL)removeEntry:(id)arg1 ;
-(void)setSectionComparator:(id)arg1 ;
-(id)_initForCopyWithSectionEntries:(id)arg1 entriesBySection:(id)arg2 explicitlyAddedSectionEntries:(id)arg3 ;
-(id)entriesInSectionAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)numberOfSectionEntries;
-(unsigned long long)numberOfEntriesInSectionAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)totalNumberOfEntries;
-(id)sectionEntryAtIndex:(unsigned long long)arg1 ;
-(id)entryAtIndexPath:(id)arg1 ;
-(id)allSectionEntries;
-(void)setEntryComparator:(id)arg1 ;
-(id)sectionComparator;
-(id)entryComparator;
-(BOOL)treatSectionEntriesAsRegularEntries;
-(void)setTreatSectionEntriesAsRegularEntries:(BOOL)arg1 ;
-(void)addEntries:(id)arg1 ;
@end
