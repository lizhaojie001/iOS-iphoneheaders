/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:27:54 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreData/CoreData-Structs.h>
#import <CoreData/NSLocking.h>

@class NSManagedObjectModel, NSArray, NSString;

@interface NSPersistentStoreCoordinator : NSObject <NSLocking> {

	id _queueOwner;
	void* _dispatchQueue;
	struct {
		unsigned _isRegistered : 1;
		unsigned _reservedFlags : 31;
	}  _flags;
	unsigned _reserved32;
	long long _miniLock;
	id* _additionalPrivateIvars;
	NSManagedObjectModel* _managedObjectModel;
	NSArray* _persistentStores;

}

@property (readonly) NSManagedObjectModel * managedObjectModel; 
@property (readonly) NSArray * persistentStores; 
@property (copy) NSString * name; 
+(id)metadataForPersistentStoreOfType:(id)arg1 URL:(id)arg2 options:(id)arg3 error:(id*)arg4 ;
+(BOOL)setMetadata:(id)arg1 forPersistentStoreOfType:(id)arg2 URL:(id)arg3 options:(id)arg4 error:(id*)arg5 ;
+(id)_beginPowerAssertionWithAssert:(unsigned long long*)arg1 ;
+(void)_endPowerAssertionWithAssert:(unsigned long long)arg1 andApp:(id)arg2 ;
+(void)_registerDefaultStoreClassesAndTypes;
+(Class)_storeClassForStoreType:(id)arg1 ;
+(id)_storeTypeForStore:(id)arg1 ;
+(id)ubiquityStoreURLForStoreURL:(id)arg1 ubiquityIdentityToken:(id)arg2 localPeerID:(id)arg3 ubiquityName:(id)arg4 ;
+(id)ubiquityStoreURLForStoreURL:(id)arg1 ubiquityIdentityToken:(id)arg2 ubiquityName:(id)arg3 ;
+(void)__Multithreading_Violation_AllThatIsLeftToUsIsHonor__;
+(id)registeredStoreTypes;
+(Class)_classForPersistentStoreAtURL:(id)arg1 ;
+(void)_registerCoreDataStoreClass:(Class)arg1 forStoreType:(id)arg2 ;
+(void)registerStoreClass:(Class)arg1 forStoreType:(id)arg2 ;
+(BOOL)removeUbiquitousContentAndPersistentStoreAtURL:(id)arg1 options:(id)arg2 error:(id*)arg3 ;
+(BOOL)accessInstanceVariablesDirectly;
+(void)initialize;
+(id)metadataForPersistentStoreOfType:(id)arg1 URL:(id)arg2 error:(id*)arg3 ;
+(BOOL)setMetadata:(id)arg1 forPersistentStoreOfType:(id)arg2 URL:(id)arg3 error:(id*)arg4 ;
-(BOOL)_deleteAllRowsNoRelationshipIntegrityForStore:(id)arg1 andEntityWithAllSubentities:(id)arg2 error:(id*)arg3 ;
-(id)persistentStoreForIdentifier:(id)arg1 ;
-(id)managedObjectIDFromUTF8String:(const char*)arg1 length:(unsigned long long)arg2 ;
-(BOOL)_removePersistentStore:(id)arg1 ;
-(id)managedObjectIDFromUTF8String:(const char*)arg1 length:(unsigned long long)arg2 error:(id*)arg3 ;
-(BOOL)_destroyPersistentStoreAtURL:(id)arg1 withType:(id)arg2 error:(id*)arg3 ;
-(BOOL)_replacePersistentStoreAtURL:(id)arg1 destinationOptions:(id)arg2 withPersistentStoreFromURL:(id)arg3 sourceOptions:(id)arg4 storeType:(id)arg5 error:(id*)arg6 ;
-(BOOL)_destroyPersistentStoreAtURL:(id)arg1 withType:(id)arg2 options:(id)arg3 error:(id*)arg4 ;
-(id)newValuesForObjectWithID:(id)arg1 withContext:(id)arg2 error:(id*)arg3 ;
-(id)newValueForRelationship:(id)arg1 forObjectWithID:(id)arg2 withContext:(id)arg3 error:(id*)arg4 ;
-(void)managedObjectContextDidRegisterObjectsWithIDs:(id)arg1 ;
-(void)managedObjectContextDidUnregisterObjectsWithIDs:(id)arg1 ;
-(id*)knownKeyValuesForObjectID:(id)arg1 withContext:(id)arg2 ;
-(id)_persistentStoreForIdentifier:(id)arg1 ;
-(void)_copyMetadataFromStore:(id)arg1 toStore:(id)arg2 migrationManager:(id)arg3 ;
-(BOOL)_isRegisteredWithUbiquity;
-(BOOL)_checkForPostLionWriter:(id)arg1 ;
-(id)_realStoreTypeForStoreWithType:(id)arg1 URL:(id)arg2 error:(id*)arg3 ;
-(void)_addPersistentStore:(id)arg1 identifier:(id)arg2 ;
-(void)_postStoresChangedNotificationsForStores:(id)arg1 changeKey:(id)arg2 options:(id)arg3 ;
-(id)_retainedAllMigratedObjectsInStore:(id)arg1 toStore:(id)arg2 ;
-(id)_checkRequestForStore:(id)arg1 withContext:(id)arg2 originalRequest:(id)arg3 andOptimisticLocking:(id)arg4 ;
-(void)_doPreSaveAssignmentsForObjects:(id)arg1 ;
-(id)_saveRequestForStore:(id)arg1 withContext:(id)arg2 originalRequest:(id)arg3 andOptimisticLocking:(id)arg4 ;
-(void)_informAffectedStoresOfInterestByChildContextInObjectsWithObjectIDs:(id)arg1 withSelector:(SEL)arg2 ;
-(BOOL)_canSaveGraphRootedAtObject:(id)arg1 intoStore:(id)arg2 withPreviouslyChecked:(CFSetRef)arg3 withAcceptableEntities:(CFSetRef)arg4 ;
-(void)_assignObjects:(id)arg1 toStore:(id)arg2 ;
-(id)_newObjectGraphStyleRecordForRow:(id)arg1 andObject:(id)arg2 withContext:(id)arg3 ;
-(id)_newConflictRecordForObject:(id)arg1 andOriginalRow:(id)arg2 withContext:(id)arg3 ;
-(id)_conflictsWithRowCacheForObject:(id)arg1 withContext:(id)arg2 andStore:(id)arg3 ;
-(void)_assignObject:(id)arg1 toPersistentStore:(id)arg2 forConfiguration:(id)arg3 ;
-(id)_fetchAllInstancesFromStore:(id)arg1 intoContext:(id)arg2 underlyingException:(id*)arg3 ;
-(void)_assignObject:(id)arg1 toPersistentStore:(id)arg2 ;
-(void)_setIsRegisteredWithUbiquity:(BOOL)arg1 ;
-(id)persistentStoreCoordinator;
-(BOOL)obtainPermanentIDsForObjects:(id)arg1 error:(id*)arg2 ;
-(BOOL)setURL:(id)arg1 forPersistentStore:(id)arg2 ;
-(BOOL)tryLock;
-(id)executeRequest:(id)arg1 withContext:(id)arg2 error:(id*)arg3 ;
-(id)managedObjectIDForURIRepresentation:(id)arg1 error:(id*)arg2 ;
-(BOOL)_checkForSkewedEntityHashes:(id)arg1 metadata:(id)arg2 ;
-(id)_retainedPersistentStores;
-(id)_processStoreResults:(id)arg1 forRequest:(id)arg2 ;
-(id)URLForPersistentStore:(id)arg1 ;
-(id)migratePersistentStore:(id)arg1 toURL:(id)arg2 options:(id)arg3 withType:(id)arg4 error:(id*)arg5 ;
-(void)dealloc;
-(id)init;
-(void)lock;
-(void)unlock;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(NSManagedObjectModel *)managedObjectModel;
-(id)initWithManagedObjectModel:(id)arg1 ;
-(void)performBlockAndWait:(/*^block*/id)arg1 ;
-(void)performBlock:(/*^block*/id)arg1 ;
-(id)addPersistentStoreWithType:(id)arg1 configuration:(id)arg2 URL:(id)arg3 options:(id)arg4 error:(id*)arg5 ;
-(id)persistentStoreForURL:(id)arg1 ;
-(BOOL)removePersistentStore:(id)arg1 error:(id*)arg2 ;
-(id)managedObjectIDForURIRepresentation:(id)arg1 ;
-(NSArray *)persistentStores;
-(id)metadataForPersistentStore:(id)arg1 ;
-(void)setMetadata:(id)arg1 forPersistentStore:(id)arg2 ;
-(void)finalize;
@end

