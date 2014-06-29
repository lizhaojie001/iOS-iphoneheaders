/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:20:49 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreData/_PFUbiquityRecordImportOperationDelegate.h>
#import <CoreData/NSManagedObjectContextFaultingDelegate.h>
#import <CoreData/PFUbiquityBaselineRollOperationDelegate.h>
#import <CoreData/PFUbiquityBaselineRecoveryOperationDelegate.h>
#import <CoreData/PFUbiquityBaselineRollResponseOperationDelegate.h>

@protocol OS_dispatch_queue, OS_dispatch_source;
@class NSOperationQueue, NSObject, NSString, PFUbiquityLocation, NSPersistentStoreCoordinator, NSSQLCore, PFUbiquityRecordsImporterSchedulingContext, PFUbiquitySwitchboardCacheWrapper, NSRecursiveLock, NSMutableDictionary, NSPersistentStore;

@interface _PFUbiquityRecordsImporter : NSObject <_PFUbiquityRecordImportOperationDelegate, NSManagedObjectContextFaultingDelegate, PFUbiquityBaselineRollOperationDelegate, PFUbiquityBaselineRecoveryOperationDelegate, PFUbiquityBaselineRollResponseOperationDelegate> {

	NSOperationQueue* _importQueue;
	NSObject<OS_dispatch_queue>* _privateQueue;
	bool _isMonitoring;
	NSString* _localPeerID;
	PFUbiquityLocation* _ubiquityRootLocation;
	NSString* _storeName;
	NSString* _modelVersionHash;
	NSPersistentStoreCoordinator* _privatePSC;
	NSSQLCore* _privateStore;
	PFUbiquityRecordsImporterSchedulingContext* _schedulingContext;
	PFUbiquitySwitchboardCacheWrapper* _sideLoadCacheWrapper;
	NSObject<OS_dispatch_source>* _logRestartTimer;
	NSRecursiveLock* _schedulingLock;
	bool _importOnlyActiveStores;
	bool _throttleNotifications;
	unsigned long long _numPendingNotifications;
	NSMutableDictionary* _pendingNotificationUserInfo;
	bool _allowBaselineRoll;
	unsigned long long _pendingImportOperationsCount;

}

@property (readonly) NSOperationQueue * importQueue;                                                        //@synthesize importQueue=_importQueue - In the implementation block
@property (readonly) NSString * localPeerID;                                                                //@synthesize localPeerID=_localPeerID - In the implementation block
@property (readonly) NSString * storeName;                                                                  //@synthesize storeName=_storeName - In the implementation block
@property (nonatomic,retain) PFUbiquityLocation * ubiquityRootLocation;                                     //@synthesize ubiquityRootLocation=_ubiquityRootLocation - In the implementation block
@property (readonly) bool isMonitoring;                                                                     //@synthesize isMonitoring=_isMonitoring - In the implementation block
@property (assign) NSObject<OS_dispatch_source> * logRestartTimer;                                          //@synthesize logRestartTimer=_logRestartTimer - In the implementation block
@property (nonatomic,readonly) NSRecursiveLock * schedulingLock;                                            //@synthesize schedulingLock=_schedulingLock - In the implementation block
@property (assign) bool importOnlyActiveStores;                                                             //@synthesize importOnlyActiveStores=_importOnlyActiveStores - In the implementation block
@property (assign) bool throttleNotifications;                                                              //@synthesize throttleNotifications=_throttleNotifications - In the implementation block
@property (assign) bool allowBaselineRoll;                                                                  //@synthesize allowBaselineRoll=_allowBaselineRoll - In the implementation block
@property (nonatomic,readonly) PFUbiquityRecordsImporterSchedulingContext * schedulingContext;              //@synthesize schedulingContext=_schedulingContext - In the implementation block
@property (nonatomic,retain) PFUbiquitySwitchboardCacheWrapper * sideLoadCacheWrapper;                      //@synthesize sideLoadCacheWrapper=_sideLoadCacheWrapper - In the implementation block
@property (nonatomic,readonly) NSPersistentStore * privateStore;                                            //@synthesize privateStore=_privateStore - In the implementation block
@property (nonatomic,readonly) NSPersistentStoreCoordinator * privatePSC;                                   //@synthesize privatePSC=_privatePSC - In the implementation block
+(id)createPrivateCoordinatorForStore:(id)arg1 error:(id*)arg2 ;
+(id)addPrivateStore:(id)arg1 toCoordinator:(id)arg2 atURL:(id)arg3 error:(id*)arg4 ;
+(bool)canProcessContentsOfUbiquityRootPath:(id)arg1 ;
+(id)createPrivateCoordinatorAndStoreForStore:(id)arg1 atURL:(id)arg2 error:(id*)arg3 ;
+(void)executeBlockOnRootQueue:(/*^block*/ id)arg1 ;
+(void)afterDelay:(double)arg1 executeBlockOnRootQueue:(/*^block*/ id)arg2 ;
+(void)initialize;
-(id)privateStore;
-(id)localPeerID;
-(id)storeName;
-(id)ubiquityRootLocation;
-(void)operation:(id)arg1 failedWithError:(id)arg2 ;
-(void)operationDidFinish:(id)arg1 ;
-(void)requestBaselineRollForStore:(id)arg1 ;
-(void)operationWasInterruptedDuringImport:(id)arg1 ;
-(void)metadataInconsistencyDetectedForStore:(id)arg1 ;
-(id)initWithLocalPeerID:(id)arg1 andUbiquityRootLocation:(id)arg2 ;
-(void)setUbiquityRootLocation:(id)arg1 ;
-(id)importQueue;
-(void)tearDown;
-(bool)canProcessTransactionLogWithScore:(id)arg1 afterLogWithScore:(id)arg2 ;
-(bool)isMonitoring;
-(void)setAllowBaselineRoll:(bool)arg1 ;
-(id)schedulingLock;
-(id)createSortedOperationsArrayWithMetadata:(id)arg1 isFirstImport:(bool)arg2 ;
-(bool)checkSchedulingContextForMissingLocalPeerOperations:(id)arg1 error:(id*)arg2 ;
-(bool)scheduleTransactionLogOperations:(id)arg1 synchronous:(bool)arg2 error:(id*)arg3 ;
-(bool)batchDownloadTransactionLogsAtLocations:(id)arg1 error:(id*)arg2 ;
-(bool)schedulePendingLogs:(bool)arg1 error:(id*)arg2 ;
-(id)createNewSetOfObjectIDsForCoordinator:(id)arg1 fromObjectIDs:(id)arg2 ;
-(bool)shouldThrottleNotificationsWithOperation:(id)arg1 ;
-(void)postImportNotificationForStoreName:(id)arg1 andLocalPeerID:(id)arg2 withUserInfo:(id)arg3 ;
-(void)scheduleRecoveryTimer;
-(bool)discoverAndImportAllAvailableLogs:(bool)arg1 error:(id*)arg2 ;
-(id)logRestartTimer;
-(void)setLogRestartTimer:(id)arg1 ;
-(bool)allowBaselineRoll;
-(void)executeBlockOnPrivateQueue:(/*^block*/ id)arg1 ;
-(void)scheduleBaselineRecoveryOperationWithActiveBaselineOperation:(id)arg1 ;
-(void)baselineRollOperationEncounteredAnInconsistentBaselineState:(id)arg1 ;
-(void)baselineRollOperationWasUnableToLockPersistentStore:(id)arg1 ;
-(void)recoveryOperation:(id)arg1 didReplaceLocalStoreFileWithBaseline:(id)arg2 ;
-(void)recoveryOperation:(id)arg1 encounteredAnError:(id)arg2 duringRecoveryOfBaseline:(id)arg3 ;
-(void)rollResponseOperation:(id)arg1 successfullyAdoptedBaseline:(id)arg2 ;
-(void)rollResponseOperation:(id)arg1 encounteredAnError:(id)arg2 whileTryingToAdoptBaseline:(id)arg3 ;
-(id)initWithLocalPeerID:(id)arg1 ubiquityRootLocation:(id)arg2 storeName:(id)arg3 andPrivateStore:(id)arg4 ;
-(bool)startMonitor:(id*)arg1 ;
-(long long)compareScoreKnowledgeVector:(id)arg1 withScoreDictionary:(id)arg2 ;
-(void)scheduleBaselineRollResponseOperationForBaselineAtLocation:(id)arg1 ;
-(bool)throttleNotifications;
-(void)setThrottleNotifications:(bool)arg1 ;
-(bool)importOnlyActiveStores;
-(void)setImportOnlyActiveStores:(bool)arg1 ;
-(id)schedulingContext;
-(id)sideLoadCacheWrapper;
-(void)setSideLoadCacheWrapper:(id)arg1 ;
-(id)privatePSC;
-(void)dealloc;
-(id)init;
-(id)description;
-(long long)context:(id)arg1 shouldHandleInaccessibleFault:(id)arg2 forObjectID:(id)arg3 andTrigger:(id)arg4 ;
@end
