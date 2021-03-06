/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, June 24, 2015 at 10:41:05 PM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <CoreData/CoreData-Structs.h>
@class NSSQLAdapter, NSSQLStatement, NSArray;

@interface NSSQLConnection : NSObject {

	NSSQLAdapter* _adapter;
	char _transactionIsOpen;
	char _useSyntaxColoredLogging;
	NSSQLStatement* _sqlStatement;
	NSArray* _columnsToFetch;
	NSArray* _metadataColumns;

}
+(void)initialize;
-(id)columnsToFetch;
-(id)cachedStatementForRequestWithIdentifier:(id)arg1 ;
-(void)endFetch;
-(char)isFetchInProgress;
-(void)bindTempTableForBindIntarray:(id)arg1 ;
-(id)adapter;
-(void)prepareSQLStatement:(id)arg1 ;
-(void)resetSQLStatement;
-(void)releaseSQLStatement;
-(void)prepareAndExecuteSQLStatement:(id)arg1 ;
-(void)createTableForEntity:(id)arg1 ;
-(void)createIndexesForEntity:(id)arg1 ;
-(void)createManyToManyTablesForEntity:(id)arg1 ;
-(void)willCreateSchema;
-(char)hasMetadataTable;
-(void)didCreateSchema;
-(void)createTablesForEntities:(id)arg1 ;
-(void)createPrimaryKeyTableForModel:(id)arg1 knownEmpty:(char)arg2 ;
-(void)createMetadata;
-(void)saveMetadata:(id)arg1 ;
-(void)rollbackTransaction;
-(id)metadataColumns;
-(void)setColumnsToFetch:(id)arg1 ;
-(id)newFetchedArray;
-(void)_raiseOptimisticLockingExceptionWithReason:(id)arg1 ;
-(id)initWithAdapter:(id)arg1 ;
-(void)awake;
-(void)sleep;
-(char)hasOpenTransaction;
-(void)forceTransactionClosed;
-(void)_forceDisconnectOnError;
-(void)transactionDidBegin;
-(void)transactionDidCommit;
-(void)transactionDidRollback;
-(char)canConnect;
-(char)databaseIsEmpty;
-(void)writeCorrelationChangesFromTracker:(id)arg1 ;
-(void)updateRow:(id)arg1 ;
-(void)selectAttributes:(id)arg1 fetchRequest:(id)arg2 lock:(char)arg3 entity:(id)arg4 ;
-(id)sqlStatement;
-(void)setExclusiveLockingMode:(char)arg1 ;
-(id)describeResults;
-(int)fetchResultSet:(void*)arg1 usingFetchPlan:(id)arg2 ;
-(void)createSchema;
-(CFArrayRef)rawIntegerRowsForSQL:(id)arg1 ;
-(long long)fetchMaxPrimaryKeyForEntity:(id)arg1 ;
-(id)fetchTableNames;
-(id)fetchTableCreationSQL;
-(id)newFetchUUIDSForSubentitiesRootedAt:(id)arg1 ;
-(id)fetchMetadata;
-(long long)generatePrimaryKeysForEntity:(id)arg1 batch:(unsigned)arg2 ;
-(void)prepareForPrimaryKeyGeneration;
-(void)endPrimaryKeyGeneration;
-(char)hasPrimaryKeyTable;
-(void)_performPostSaveTasks;
-(id)fetchUbiquityKnowledgeVector;
-(void)updateUbiquityKnowledgeVector:(id)arg1 ;
-(id)deleteTransactionEntriesAfterPeerState:(id)arg1 forStoreName:(id)arg2 ;
-(void)updateUbiquityKnowledgeForPeerWithID:(id)arg1 andTransactionNumber:(id)arg2 ;
-(void)addPeerRange:(id)arg1 ;
-(void)addPeerRangeForPeerID:(id)arg1 entityName:(id)arg2 rangeStart:(id)arg3 rangeEnd:(id)arg4 peerRangeStart:(id)arg5 peerRangeEnd:(id)arg6 ;
-(id)allPeerRanges;
-(id)createMapOfEntityNameToPKMaxForEntitiesFromUBRangeTable:(id)arg1 ;
-(id)createMapOfEntityNameToPKMaxForEntitiesFromPKTable:(id)arg1 ;
-(id)createMapOfEntityNameToPKMaxForEntities:(id)arg1 ;
-(void)setUbiquityTableValue:(id)arg1 forKey:(id)arg2 ;
-(id)ubiquityTableKeysAndValues;
-(id)ubiquityTableValueForKey:(id)arg1 ;
-(void)dropUbiquityTables;
-(void)cacheStatement:(id)arg1 forRequestWithIdentifier:(id)arg2 ;
-(void)clearCachedStatementForRequestWithIdentifier:(id)arg1 ;
-(void)dealloc;
-(void)commitTransaction;
-(void)connect;
-(void)disconnect;
-(void)beginTransaction;
-(char)isOpen;
-(void)execute;
-(void)finalize;
-(void)insertRow:(id)arg1 ;
-(void)deleteRow:(id)arg1 ;
@end

