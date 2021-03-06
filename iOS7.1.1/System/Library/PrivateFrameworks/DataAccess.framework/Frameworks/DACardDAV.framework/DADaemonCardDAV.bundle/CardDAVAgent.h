/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:23:14 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DACardDAV.framework/DADaemonCardDAV.bundle/DADaemonCardDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <DADaemonCardDAV/DADaemonCardDAV-Structs.h>
#import <DADaemonSupport/DACoreDAVAgent.h>
#import <DADaemonCardDAV/CardDAVAddressBookURLsConsumer.h>
#import <DADaemonCardDAV/DAContactsUpdateConsumer.h>
#import <DADaemonCardDAV/DADataclassLockWatcher.h>
#import <DADaemonCardDAV/DAActionConsumer.h>
#import <DADaemonCardDAV/DAValidityCheckConsumer.h>
#import <BulletinBoard/ABPredicateDelegate.h>
#import <DADaemonCardDAV/DARefreshManagerDelegate.h>
#import <DADaemonCardDAV/CardDAVFinishInitialSyncConsumer.h>
#import <DADaemonCardDAV/CardDAVMeCardUpdateConsumer.h>
#import <DADaemonCardDAV/DABabysittable.h>

@class NSMutableSet, NSMutableArray, NSLock, NSMutableDictionary, NSURL;

@interface CardDAVAgent : DACoreDAVAgent <CardDAVAddressBookURLsConsumer, DAContactsUpdateConsumer, DADataclassLockWatcher, DAActionConsumer, DAValidityCheckConsumer, ABPredicateDelegate, DARefreshManagerDelegate, CardDAVFinishInitialSyncConsumer, CardDAVMeCardUpdateConsumer, DABabysittable> {

	NSMutableSet* _currentlySyncingFolderURLs;
	NSMutableArray* _outstandingFolderRequests;
	NSLock* _folderItemSyncRequestLock;
	bool _isSyncingHierarchy;
	NSMutableDictionary* _folderURLToHeldAsideGroups;
	int _matchMode;
	void* _testRecord;
	void* _matchedRecord;
	NSURL* _serverTokenRegistrationURL;
	NSMutableSet* _containerPushKeys;
	NSMutableDictionary* _folderURLToSyncInfo;
	NSMutableSet* _bulkUploadUUIDBlacklist;
	NSMutableSet* _bulkUploadHREFBlacklist;

}
-(bool)predicateShouldContinue:(id)arg1 ;
-(bool)predicateShouldContinue:(id)arg1 afterFindingRecord:(void*)arg2 ;
-(id)password;
-(void)startMonitoring;
-(void)dealloc;
-(id)waiterID;
-(id)scheduleIdentifier;
-(void)_validateAndSync:(bool)arg1 ;
-(void)_appendSyncRequestsForFolders:(id)arg1 remoteChanges:(bool)arg2 ;
-(int)_localIdForExternalURL:(id)arg1 inContainer:(void*)arg2 withFolderURL:(id)arg3 ;
-(void*)_copyExistingABRecordForContact:(id)arg1 inStore:(void*)arg2 ;
-(void)_handlePotential503Error:(id)arg1 ;
-(bool)_updateMeCard;
-(bool)_fillOutExternalUUIDForRecordType:(unsigned)arg1 localId:(int)arg2 changeType:(int)arg3 outTouchedDB:(bool*)arg4 ;
-(void)_successfullyFinishedInitialSyncForFolderWithID:(id)arg1 ;
-(void)_pushInitialSyncActionsForFolderWithURL:(id)arg1 ;
-(bool)_clearChangeHistoriesWithChangeIdContext:(void*)arg1 pushedActions:(id)arg2 inStore:(void*)arg3 ;
-(bool)_handleAction:(id)arg1 inStore:(void*)arg2 withFolderURL:(id)arg3 isInitialSync:(bool)arg4 arePartialResults:(bool)arg5 ;
-(void)_finishInitialSyncForFolderWithURL:(id)arg1 ;
-(bool)_syncResultForFolderWithURL:(id)arg1 newTag:(id)arg2 newSyncToken:(id)arg3 actions:(id)arg4 changeIdContext:(void*)arg5 isInitialSync:(bool)arg6 arePartialResults:(bool)arg7 ;
-(void)_addressBookSyncTask:(id)arg1 failedWithErrorCode:(int)arg2 ;
-(void)_addChangeForType:(int)arg1 changedItemId:(id)arg2 changeId:(id)arg3 addedIdsToChangeId:(id)arg4 modifiedIdsToChangeId:(id)arg5 deletedIdsToChangeId:(id)arg6 changeIdsToClear:(id)arg7 ;
-(id)_copyABActionsOfType:(unsigned)arg1 inContainer:(void*)arg2 existingActions:(id)arg3 maxImageSize:(long long)arg4 maxResourceSize:(long long)arg5 outHighestChangeId:(int*)arg6 outTouchedDB:(bool*)arg7 ;
-(id)_copyCoalescedChangesInContainer:(void*)arg1 existingActions:(id)arg2 maxImageSize:(long long)arg3 maxResourceSize:(long long)arg4 outChangeContext:(/*function pointer*/ void**)arg5 outTouchedDB:(bool*)arg6 ;
-(bool)APSTopicHasValidPrefix:(id)arg1 ;
-(void)successfullyRetrievedAddressBookURLs;
-(void)failedToRetrieveAddressBookURLsWithError:(id)arg1 ;
-(void)successfullyFinishedInitalUploadForFolderWithID:(id)arg1 blacklistedUUIDs:(id)arg2 blacklistedHREFs:(id)arg3 ;
-(void)failedToFinishInitialSync:(id)arg1 error:(id)arg2 ;
-(void)successfullyUpdatedServerMeCardWithURL:(id)arg1 ;
-(void)failedToUpdateServerMeCardWithError:(id)arg1 ;
-(id)watchedCollections;
-(void)refreshCollections:(id)arg1 withReason:(int)arg2 ;
-(id)serverTokenRegistrationURL;
-(void)_tearDownABNotifications;
-(void)_syncAllContactFoldersWithRemoteChanges:(bool)arg1 ;
-(void)refreshFolderListRequireChangedFolders:(bool)arg1 isUserRequested:(bool)arg2 ;
-(void)_setUpABNotifications;
-(void)syncFolderIDs:(id)arg1 forDataclasses:(int)arg2 isUserRequested:(bool)arg3 ;
-(void)requestAgentStopMonitoringWithCompletionBlock:(/*^block*/ id)arg1 ;
-(void)_appendSyncRequest:(id)arg1 ;
-(void)_fireWaitingFolderItemSyncRequests;
-(void)_reallySyncRequest:(id)arg1 ;
-(void)_syncRequest:(id)arg1 ;
-(void)contactsFolderWithId:(id)arg1 successfullyPushedActions:(id)arg2 ;
-(void)account:(id)arg1 isValid:(bool)arg2 validationError:(id)arg3 ;
-(void)syncResultForContactsFolder:(id)arg1 newTag:(id)arg2 previousTag:(id)arg3 newSyncToken:(id)arg4 actions:(id)arg5 results:(id)arg6 changeIdContext:(SCD_Struct_Ca0*)arg7 isInitialSync:(bool)arg8 moreAvailable:(bool)arg9 pushedActions:(id)arg10 ;
-(id)onBehalfOfBundleIdentifier;
-(id)initWithAccount:(id)arg1 ;
-(void)actionFailed:(int)arg1 forTask:(id)arg2 error:(id)arg3 ;
-(id)username;
@end

