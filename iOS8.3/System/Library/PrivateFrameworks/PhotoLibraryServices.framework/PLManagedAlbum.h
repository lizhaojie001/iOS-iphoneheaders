/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 3:03:50 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PhotoLibraryServices/PhotoLibraryServices-Structs.h>
#import <PhotoLibraryServices/_PLManagedAlbum.h>
#import <PhotoLibraryServices/PLUserEditableAlbumProtocol.h>

@class NSMutableOrderedSet, NSOrderedSet, NSSet, NSString, PLManagedAsset, NSArray, NSDate, NSNumber, UIImage, NSDictionary, NSURL;

@interface PLManagedAlbum : _PLManagedAlbum <PLUserEditableAlbumProtocol> {

	char _resolvingConflicts;
	char _albumShouldBeAutomaticallyDeleted;
	char _needsPersistenceUpdate;

}

@property (nonatomic,retain) NSOrderedSet * assets; 
@property (nonatomic,retain) NSSet * assetOrders; 
@property (assign,nonatomic) char resolvingConflicts;                                        //@synthesize resolvingConflicts=_resolvingConflicts - In the implementation block
@property (assign,nonatomic) char albumShouldBeAutomaticallyDeleted;                         //@synthesize albumShouldBeAutomaticallyDeleted=_albumShouldBeAutomaticallyDeleted - In the implementation block
@property (assign,nonatomic) char needsPersistenceUpdate;                                    //@synthesize needsPersistenceUpdate=_needsPersistenceUpdate - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain,readonly) NSString * uuid; 
@property (nonatomic,retain,readonly) NSString * title; 
@property (nonatomic,copy,readonly) NSString * localizedTitle; 
@property (nonatomic,readonly) unsigned approximateCount; 
@property (nonatomic,readonly) unsigned assetsCount; 
@property (nonatomic,readonly) unsigned photosCount; 
@property (nonatomic,readonly) unsigned videosCount; 
@property (nonatomic,readonly) char isEmpty; 
@property (nonatomic,retain) PLManagedAsset * keyAsset; 
@property (nonatomic,retain) PLManagedAsset * secondaryKeyAsset; 
@property (nonatomic,retain) PLManagedAsset * tertiaryKeyAsset; 
@property (nonatomic,readonly) char canShowComments; 
@property (nonatomic,readonly) char canShowAvalancheStacks; 
@property (nonatomic,copy,readonly) NSArray * localizedLocationNames; 
@property (nonatomic,retain,readonly) NSDate * startDate; 
@property (nonatomic,retain,readonly) NSDate * endDate; 
@property (nonatomic,retain,readonly) NSNumber * kind; 
@property (nonatomic,readonly) int kindValue; 
@property (nonatomic,retain,readonly) NSMutableOrderedSet * mutableAssets; 
@property (assign,nonatomic) char hasUnseenContentBoolValue; 
@property (nonatomic,copy,readonly) NSString * name; 
@property (nonatomic,retain,readonly) UIImage * posterImage; 
@property (nonatomic,readonly) char isLibrary; 
@property (nonatomic,readonly) char isCameraAlbum; 
@property (nonatomic,readonly) char isPanoramasAlbum; 
@property (nonatomic,readonly) char isWallpaperAlbum; 
@property (nonatomic,readonly) char isPhotoStreamAlbum; 
@property (nonatomic,readonly) char isCloudSharedAlbum; 
@property (nonatomic,readonly) char isPendingPhotoStreamAlbum; 
@property (nonatomic,readonly) char isStandInAlbum; 
@property (nonatomic,readonly) char isFolder; 
@property (nonatomic,readonly) char isInTrash; 
@property (nonatomic,readonly) char isOwnedCloudSharedAlbum; 
@property (nonatomic,readonly) char isFamilyCloudSharedAlbum; 
@property (nonatomic,readonly) char isMultipleContributorCloudSharedAlbum; 
@property (nonatomic,readonly) char isRecentlyAddedAlbum; 
@property (nonatomic,readonly) char isUserLibraryAlbum; 
@property (nonatomic,readonly) char canContributeToCloudSharedAlbum; 
@property (nonatomic,readonly) char shouldDeleteWhenEmpty; 
@property (nonatomic,retain) NSDictionary * slideshowSettings; 
@property (nonatomic,retain) NSString * importSessionID; 
@property (nonatomic,retain,readonly) NSURL * groupURL; 
@property (nonatomic,copy,readonly) id sortingComparator; 
@property (assign,nonatomic) int pendingItemsCount; 
@property (assign,nonatomic) int pendingItemsType; 
@property (assign,nonatomic) unsigned batchSize; 
@property (nonatomic,retain,readonly) NSMutableOrderedSet * userEditableAssets; 
+(void)clearAssetOrderByAbumUUIDs;
+(id)baseSearchIndexPredicate;
+(id)pathToAssetAlbumOrderStructure;
+(id)assetOrderByAbumUUIDs;
+(id)albumSupportsAssetOrderKeysPredicate;
+(id)childKeyForOrdering;
+(id)keyPathsForValuesAffectingApproximateCount;
+(id)keyPathsForValuesAffectingPhotosCount;
+(id)keyPathsForValuesAffectingVideosCount;
-(char)isEmpty;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(id)filteredIndexesForPredicate:(id)arg1 ;
-(NSMutableOrderedSet *)mutableAssets;
-(char)canPerformEditOperation:(unsigned)arg1 ;
-(unsigned)approximateCount;
-(unsigned)assetsCount;
-(unsigned)photosCount;
-(unsigned)videosCount;
-(void)addAssetUsingiTunesAlbumOrder:(id)arg1 ;
-(void)refreshAssets;
-(void)persistMetadataToFileSystem;
-(id)searchIndexContents;
-(id)descriptionOfAssetOrderValues;
-(void)_updateKeyAssetsAndCountsIfNeeded;
-(void)prepareForDeletion;
-(char)isValidKindForPersistence;
-(void)removePersistedFileSystemData;
-(void)willSave;
-(void)setNeedsPersistenceUpdate:(char)arg1 ;
-(void)didSave;
-(char)albumShouldBeAutomaticallyDeleted;
-(void)setAlbumShouldBeAutomaticallyDeleted:(char)arg1 ;
-(char)needsPersistenceUpdate;
-(void)insertInternalUserEditableAssets:(id)arg1 atIndexes:(id)arg2 trimmedVideoPathInfo:(id)arg3 commentText:(id)arg4 ;
-(char)_shouldCopyAssetToCameraRollBeforeAdding:(id)arg1 ;
-(void)_updateKeyAssetsIfNeeded:(id)arg1 ;
-(void)_updateCountsIfNeeded:(id)arg1 ;
-(id)_expectedKeyAssets:(id)arg1 ;
-(id)_keysToBeObserved;
-(void)registerForChanges;
-(void)unregisterForChanges;
-(unsigned)_albumStandInCount;
-(id)_assetOrderByAssetUUID;
-(id)_orderComparisonValueForAsset:(id)arg1 iTunesLookupOrder:(id)arg2 ;
-(id)childKeyForOrdering;
-(NSMutableOrderedSet *)userEditableAssets;
-(char)supportsAssetOrderKeys;
-(unsigned)countOfInternalUserEditableAssets;
-(unsigned)indexInInternalUserEditableAssetsOfObject:(id)arg1 ;
-(id)objectInInternalUserEditableAssetsAtIndex:(unsigned)arg1 ;
-(void)getInternalUserEditableAssets:(id*)arg1 range:(NSRange)arg2 ;
-(id)internalUserEditableAssetsAtIndexes:(id)arg1 ;
-(void)insertInternalUserEditableAssets:(id)arg1 atIndexes:(id)arg2 ;
-(void)removeInternalUserEditableAssetsAtIndexes:(id)arg1 ;
-(unsigned)_cachedCountForMigration;
-(void)insertAssets:(id)arg1 atIndexes:(id)arg2 ;
-(void)removeAssetsAtIndexes:(id)arg1 ;
-(void)replaceAssetsAtIndexes:(id)arg1 withAssets:(id)arg2 ;
-(void)_recalculateCachedCounts;
-(void)sortAssetsUsingiTunesAlbumOrder;
-(char)resolvingConflicts;
-(void)setResolvingConflicts:(char)arg1 ;
-(id)migration_sortedOrderKeysForChildrenUsingMap:(id)arg1 ;
-(id)migration_newOrderKeyChild:(id)arg1 ;
@end

