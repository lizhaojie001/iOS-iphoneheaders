/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:23:53 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <MusicLibrary/MusicLibrary-Structs.h>
@class ML3MusicLibrary;

@interface ML3Entity : NSObject {

	ML3MusicLibrary* _library;
	long long _persistentID;

}

@property (__weak) ML3MusicLibrary * library;              //@synthesize library=_library - In the implementation block
@property (readonly) long long persistentID;               //@synthesize persistentID=_persistentID - In the implementation block
@property (readonly) bool existsInLibrary; 
+(id)propertyForMPMediaEntityProperty:(id)arg1 ;
+(id)spotlightPropertyForMPMediaEntityProperty:(id)arg1 ;
+(id)replacerWithProperties:(id)arg1 library:(id)arg2 ;
+(id)aggregateQueryWithUnitQuery:(id)arg1 foreignPersistentIDProperty:(id)arg2 ;
+(id)anyInLibrary:(id)arg1 predicate:(id)arg2 ;
+(id)queryWithLibrary:(id)arg1 predicate:(id)arg2 orderingProperties:(id)arg3 ;
+(id)queryWithLibrary:(id)arg1 predicate:(id)arg2 ;
+(id)queryWithLibrary:(id)arg1 predicate:(id)arg2 orderingTerms:(id)arg3 ;
+(id)queryWithLibrary:(id)arg1 predicate:(id)arg2 orderingProperties:(id)arg3 usingSections:(bool)arg4 ;
+(id)queryWithLibrary:(id)arg1 predicate:(id)arg2 usingSections:(bool)arg3 ;
+(id)queryWithLibrary:(id)arg1 predicate:(id)arg2 orderingProperties:(id)arg3 orderingDirectionMappings:(id)arg4 usingSections:(bool)arg5 ;
+(id)directCollectionQueryWithAggregateQuery:(id)arg1 predicate:(id)arg2 usingSections:(bool)arg3 ;
+(id)queryWithLibrary:(id)arg1 predicate:(id)arg2 orderingTerms:(id)arg3 propertyToCount:(id)arg4 ;
+(id)queryWithLibrary:(id)arg1 predicate:(id)arg2 orderingTerms:(id)arg3 usingSections:(bool)arg4 ;
+(id)predicateIncludingSystemwidePredicatesWithPredicate:(id)arg1 library:(id)arg2 ;
+(id)defaultOrderingProperties;
+(bool)insertValues:(id)arg1 intoTable:(id)arg2 persistentID:(long long)arg3 connection:(id)arg4 ;
+(id)persistentIDColumnForTable:(id)arg1 ;
+(long long)revisionTrackingCode;
+(bool)_shouldIncrementRevisionForType:(int)arg1 persistentID:(long long)arg2 usingConnection:(id)arg3 ;
+(bool)incrementRevisionForRevisionTypeContentWithLibrary:(id)arg1 deletionType:(int)arg2 persistentIDs:(id)arg3 ;
+(bool)incrementRevisionWithLibrary:(id)arg1 persistentID:(long long)arg2 deletionType:(int)arg3 revisionType:(int)arg4 usingConnection:(id)arg5 ;
+(id)unsettableProperties;
+(id)joinClausesForProperty:(id)arg1 ;
+(id)foreignDatabaseTableForProperty:(id)arg1 ;
+(id)foreignColumnForProperty:(id)arg1 ;
+(bool)insertValues:(id)arg1 intoTable:(id)arg2 persistentID:(long long)arg3 library:(id)arg4 ;
+(id)extraTablesToInsert;
+(bool)insertionChangesLibraryContents;
+(bool)incrementRevisionWithLibrary:(id)arg1 persistentID:(long long)arg2 deletionType:(int)arg3 revisionType:(int)arg4 ;
+(id)allProperties;
+(id)newSelectSQLForProperties:(const id*)arg1 count:(unsigned long long)arg2 predicate:(id)arg3 ;
+(id)disambiguatedSelectSQLForProperty:(id)arg1 ;
+(id)predicateByOptimizingComparisonPredicate:(id)arg1 ;
+(bool)propertyIsCountProperty:(id)arg1 ;
+(id)countingQueryForBaseQuery:(id)arg1 countProperty:(id)arg2 forIdentifier:(long long)arg3 ;
+(bool)libraryContentsChangeForProperty:(id)arg1 ;
+(bool)libraryDynamicChangeForProperty:(id)arg1 ;
+(id)collectionClassesToUpdateBeforeDelete;
+(bool)_deleteRowForPersistentIDs:(const long long*)arg1 count:(unsigned long long)arg2 library:(id)arg3 table:(id)arg4 usingColumn:(id)arg5 ;
+(id)extraTablesToDelete;
+(bool)incrementRevisionForRevisionTypeContentWithLibrary:(id)arg1 deletionType:(int)arg2 persistentIDs:(const long long*)arg3 count:(unsigned long long)arg4 ;
+(bool)deleteFromLibrary:(id)arg1 deletionType:(int)arg2 persistentIDs:(const long long*)arg3 count:(unsigned long long)arg4 ;
+(id)disambiguatedSQLForProperty:(id)arg1 ;
+(id)predisambiguatedProperties;
+(void)enumeratePersistentIDsInLibrary:(id)arg1 matchingPredicate:(id)arg2 orderingTerms:(id)arg3 persistentIDs:(const long long*)arg4 count:(unsigned long long)arg5 usingBlock:(/*^block*/ id)arg6 ;
+(id)subselectStatementForProperty:(id)arg1 ;
+(id)subselectPropertyForProperty:(id)arg1 ;
+(id)newSelectAllEntitiesSQLForProperties:(const id*)arg1 count:(unsigned long long)arg2 predicate:(id)arg3 ;
+(id)defaultFilterPredicates;
+(id)predicateByOptimizingPredicate:(id)arg1 ;
+(id)newWithPersistentID:(long long)arg1 inLibrary:(id)arg2 ;
+(id)newWithDictionary:(id)arg1 inLibrary:(id)arg2 ;
+(id)newWithDictionary:(id)arg1 inLibrary:(id)arg2 cachedNameOrders:(id)arg3 ;
+(id)sectionPropertyForProperty:(id)arg1 ;
+(id)foreignPropertyForProperty:(id)arg1 entityClass:(Class)arg2 ;
+(void)predisambiguateProperties:(id)arg1 toDictionary:(id)arg2 ;
+(id)indexableSQLForProperties:(id)arg1 ;
+(id)orderingSQLForProperties:(id)arg1 directionality:(id)arg2 ;
+(void)enumeratePersistentIDsInLibrary:(id)arg1 afterRevision:(long long)arg2 usingBlock:(/*^block*/ id)arg3 ;
-(bool)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone)arg1 ;
-(void).cxx_destruct;
-(id)valueForProperty:(id)arg1 ;
-(id)library;
-(void)setLibrary:(id)arg1 ;
-(bool)setValue:(id)arg1 forProperty:(id)arg2 ;
-(long long)persistentID;
-(id)initWithPersistentID:(long long)arg1 inLibrary:(id)arg2 ;
-(void)getValues:(id*)arg1 forProperties:(const id*)arg2 count:(unsigned long long)arg3 ;
-(id)initWithDictionary:(id)arg1 inLibrary:(id)arg2 cachedNameOrders:(id)arg3 ;
-(bool)setValues:(id)arg1 forProperties:(id)arg2 ;
-(void)didChangeValueForProperties:(id)arg1 ;
-(id)copyInLibrary:(id)arg1 ;
-(bool)existsInLibrary;
-(bool)matchesPredicate:(id)arg1 ;
-(bool)setValues:(const id*)arg1 forProperties:(const id*)arg2 count:(unsigned long long)arg3 ;
-(void)setValues:(id)arg1 forProperties:(id)arg2 async:(bool)arg3 withCompletionBlock:(/*^block*/ id)arg4 ;
-(bool)setValuesForPropertiesWithDictionary:(id)arg1 ;
-(bool)deleteFromLibrary;
-(void)incrementRevision;
@end

