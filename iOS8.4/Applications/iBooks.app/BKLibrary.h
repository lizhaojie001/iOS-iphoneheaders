/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 7:10:21 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /Applications/iBooks.app/iBooks
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iBooks/AELibraryMgr.h>
#import <iBooks/IMOperationDelegate.h>

@protocol OS_dispatch_queue;
@class BKLibraryPlist, NSOperationQueue, NSObject, BKSortOrderMigrator, NSDictionary, NSString;

@interface BKLibrary : NSObject <AELibraryMgr, IMOperationDelegate> {

	BKLibraryPlist* _booksPlist;
	BKLibraryPlist* _purchasesPlist;
	BKLibraryPlist* _managedBooksPlist;
	NSOperationQueue* _reloadOperationQueue;
	NSObject*<OS_dispatch_queue> _clearDiskCacheQueue;
	NSObject*<OS_dispatch_queue> _clearImageCacheQueue;
	NSObject*<OS_dispatch_queue> _deleteObjectsQueue;
	BKSortOrderMigrator* _sortOrderMigrator;
	NSObject*<OS_dispatch_queue> _reloadFlagsQueue;
	unsigned _reloadFlags;
	unsigned _libraryLoadDeleteDetectionBlockLevel;
	NSDictionary* _prefetchedDatabaseKeySortKeys;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)bookWithAssetURL:(id)arg1 moc:(id)arg2 ;
+(id)managedBooksChangedNotification;
+(id)PurchasesDirectory;
+(char)isDirectoryFileName:(id)arg1 ;
+(id)bookWithDatabaseKey:(id)arg1 contentType:(int)arg2 moc:(id)arg3 ;
+(id)removeUnauthorizedFamilyContentNotification;
+(id)BooksDirectory;
+(id)ManagedBooksDirectory;
+(id)libraryCollectionsChangedNotification;
+(id)bookWithPath:(id)arg1 uniqueId:(id)arg2 storeId:(id)arg3 moc:(id)arg4 ;
+(id)bookSyncBeganNotification;
+(id)bookSyncFinishedNotification;
+(id)localLibrary;
+(void)setLocalLibrary:(id)arg1 ;
-(void)forceUpdateBookUpdateCount;
-(void)forceUpdateSeriesData;
-(void)successPurchase:(id)arg1 ;
-(id)valueForKey:(id)arg1 forAssetAtURL:(id)arg2 ;
-(void)addDownload:(id)arg1 notifyPurchaseAnimator:(id)arg2 ;
-(void)failPurchase:(id)arg1 ;
-(void)significantCollectionChange;
-(void)deleteBooksByObjectID:(id)arg1 removeFromCloud:(char)arg2 ;
-(void)resetIsNew:(id)arg1 ;
-(void)resetHighwaterMarks:(id)arg1 ;
-(void)resetSeriesFlags:(id)arg1 ;
-(id)objectIdFromStoreId:(id)arg1 ;
-(id)reloadOperationQueue;
-(void)triggerLibraryReloadWithContext:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)updateBookEpubIdFieldStoppingAfter:(id)arg1 ;
-(id)objectIdFromStoreId:(id)arg1 moc:(id)arg2 ;
-(id)objectIdFromTemporaryItemIdentifier:(id)arg1 moc:(id)arg2 ;
-(void)appendBooksToPurchases:(id)arg1 ;
-(void)prefetchPreExistingSortKeyForDatabaseKeys:(id)arg1 moc:(id)arg2 ;
-(void)patchBookWithPreExistingSortKey:(id)arg1 ;
-(void)airTrafficControllerDidChangeUpdates:(id)arg1 ;
-(void)airTrafficControllerSyncDidFinish:(id)arg1 ;
-(void)downloadQueueControllerNeedsReload:(id)arg1 ;
-(void)atcSyncFinished:(id)arg1 ;
-(void)mediaLibraryChanged:(id)arg1 ;
-(void)jaliscoStatusChanged:(id)arg1 ;
-(void)managedBooksChanged:(id)arg1 ;
-(void)removeUnauthorizedFamilyContent:(id)arg1 ;
-(void)_mocSaved:(id)arg1 ;
-(void)jaliscoItemsChanged:(id)arg1 ;
-(void)seriesItemsChanged:(id)arg1 ;
-(id)initWithBooksPlist:(id)arg1 purchasesPlist:(id)arg2 managedBooksPlist:(id)arg3 ;
-(void)scheduleLibraryReload:(unsigned)arg1 ;
-(unsigned)cancelLibraryReload;
-(void)cancelReprocessingByClass:(Class)arg1 ;
-(void)deleteBooksByObjectID:(id)arg1 removeFromCloud:(char)arg2 completion:(/*^block*/id)arg3 ;
-(id)existingReloadOperationQueue;
-(id)purchasesPlist;
-(id)booksPlist;
-(id)managedBooksPlist;
-(void)resetSeriesContainers;
-(void)kickSeriesManager;
-(void)triggerCloudSync:(char)arg1 ;
-(void)postReloadCleanup;
-(void)moveFileURLsToTrash:(id)arg1 destroyCloudDocuments:(char)arg2 ;
-(id)trashRepository;
-(id)metadataForAssetAtURL:(id)arg1 ;
-(void)moveFileURLsToTrash:(id)arg1 ;
-(void)airTrafficControllerDidStart:(id)arg1 ;
-(id)purchasesPlistPath;
-(id)booksPlistPath;
-(id)managedBooksPlistPath;
-(id)objectIdFromTemporaryItemIdentifier:(id)arg1 ;
-(void)reducePreExistingSortKeyCache;
-(void)updateBookUpdateCount;
-(void)updateSeriesData;
-(void)setValue:(id)arg1 forKey:(id)arg2 forAssetAtURL:(id)arg3 ;
-(void)dealloc;
-(id)init;
-(void)emptyTrash;
-(void)addDownload:(id)arg1 ;
-(char)isProcessing;
-(void)operationFinished:(id)arg1 ;
@end

