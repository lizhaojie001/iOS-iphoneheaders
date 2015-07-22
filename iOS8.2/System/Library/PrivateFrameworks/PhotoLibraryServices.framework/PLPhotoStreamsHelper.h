/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:20:46 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <PhotoLibraryServices/PhotoLibraryServices-Structs.h>
@interface PLPhotoStreamsHelper : NSObject {

	char _appHasPolledOnceThisForegroundSession;

}
+(id)sharedPhotoStreamsHelper;
+(char)photoStreamsEnabled;
+(id)iCloudServiceAccount;
+(id)_acaccountStore;
+(id)publishBreadcrumbsPath;
+(char)writeBreadcrumbContent:(id)arg1 forHashString:(id)arg2 ;
+(char)canInitiateDistributedPhotoStreamDeletionForAssetUUID:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(void)initiateDeletionOfPhotoStreamAssets:(id)arg1 ;
-(void)clearCachedAccountState;
-(id)photoStreamsPublishStreamID;
-(void)savePhotoStreamMetadata:(id)arg1 forAsset:(id)arg2 ;
-(char)enqueueAssetForPSPublishing:(id)arg1 assetHash:(id)arg2 fullPath:(id)arg3 fileSize:(id)arg4 type:(id)arg5 reenqueueCount:(id)arg6 publicGlobalUUID:(id*)arg7 ;
-(void)resetMstreamdStateForPersonID:(id)arg1 ;
-(void)cleanupPhotoStreamMetadataForAssetsWithUUIDs:(id)arg1 forStreamID:(id)arg2 ;
-(void)pollForNewSubscriptionContent;
-(char)shouldUploadVideos;
-(void)_appDidEnterBackground:(id)arg1 ;
-(id)imageLimitsByAssetType;
-(char)isValidUploadAsset:(id)arg1 type:(id)arg2 fileSize:(id)arg3 ;
-(int)_serverIntegerLimitForKey:(id)arg1 debugDefaultKey:(id)arg2 ;
-(id)psHashAsString:(id)arg1 ;
-(int)maxPixelSizeForDerivative;
-(id)pathToSavedMetadataForAssetHash:(id)arg1 streamID:(id)arg2 createIntermediateDirs:(char)arg3 ;
-(char)dequeueAssetsForPSPublishing:(id)arg1 ;
-(id)psHashForData:(id)arg1 ;
-(id)lastPhotoStreamUpdateDate;
-(char)removeBreadcrumbsForHashString:(id)arg1 ;
-(void)writeWillEnqueueBreadcrumbForHash:(id)arg1 imagePath:(id)arg2 ;
-(void)writeDidEnqueueBreadcrumbForHash:(id)arg1 imagePath:(id)arg2 ;
-(void)writeDidPublishBreadcrumbforHash:(id)arg1 imagePath:(id)arg2 ;
-(void)pollForNewSubscriptionContentOncePerAppForegroundSession;
-(char)shouldPublishScreenShots;
-(int)imageLimitForOwnStream;
-(int)imageLimitForFriendStream;
-(int)friendsLimit;
-(id)temporaryPathForRecentlyUploadedAsset:(id)arg1 ;
-(CGSize)derivedAssetSizeForMasterSizeWidth:(float)arg1 height:(float)arg2 ;
-(id)derivedAssetForMasterAsset:(id)arg1 ;
-(void)resetServerState;
-(id)pause_mstreamd;
-(void)resume_mstreamd:(id)arg1 ;
-(void)initiateDeletionOfOriginalAssets:(id)arg1 ;
-(void)enumerateMasterHashesAndPublicGlobalUUIDsForAssets:(id)arg1 withBlock:(/*^block*/id)arg2 ;
@end
