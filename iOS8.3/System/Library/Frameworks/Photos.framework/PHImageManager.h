/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, June 24, 2015 at 11:05:55 PM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Photos/Photos-Structs.h>
#import <Photos/PHPhotoLibraryChangeObserver.h>

@class NSString;

@interface PHImageManager : NSObject <PHPhotoLibraryChangeObserver> {

	id _cachedDomain;
	unsigned _managerID;

}

@property (nonatomic,readonly) unsigned managerID;                  //@synthesize managerID=_managerID - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(char)useNewImageManager;
+(CGSize)sizeForPLFormat:(int)arg1 fallBackSize:(CGSize)arg2 contentMode:(int*)arg3 ;
+(CGSize)fullScreenSizeForScreen:(id)arg1 contentMode:(int*)arg2 ;
+(id)defaultManager;
+(void)initialize;
+(CGSize)sizeOfBestNonFullscreenThumbnailAndContentMode:(int*)arg1 ;
-(id)_domain;
-(unsigned)managerID;
-(id)requestAsynchronousImageForAsset:(id)arg1 chainedToMasterRequest:(id)arg2 targetSize:(CGSize)arg3 contentMode:(int)arg4 options:(id)arg5 resultHandler:(/*^block*/id)arg6 ;
-(id)requestAsynchronousVideoURLForAsset:(id)arg1 chainedToMasterRequest:(id)arg2 options:(id)arg3 resultHandler:(/*^block*/id)arg4 ;
-(void)registerRequest:(id)arg1 ;
-(void)unregisterRequest:(id)arg1 ;
-(id)_videoAVObjectBuilderFromVideoURL:(id)arg1 info:(id)arg2 playbackOnly:(char)arg3 ;
-(void)unloadImageFilesForAsset:(id)arg1 minimumFormat:(int)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)requestAsynchronousImageForAsset:(id)arg1 targetSize:(CGSize)arg2 contentMode:(int)arg3 options:(id)arg4 resultHandler:(/*^block*/id)arg5 ;
-(int)_requestAVAssetForVideo:(id)arg1 options:(id)arg2 resultHandler:(/*^block*/id)arg3 ;
-(CGImageRef)newResizedImageForImage:(CGImageRef)arg1 withSize:(CGSize)arg2 normalizedCropRect:(CGRect)arg3 contentMode:(int)arg4 ;
-(int)requestExportSessionForVideo:(id)arg1 options:(id)arg2 exportPreset:(id)arg3 resultHandler:(/*^block*/id)arg4 ;
-(id)requestAsynchronousVideoURLForImageLoadingAsset:(id)arg1 options:(id)arg2 resultHandler:(/*^block*/id)arg3 ;
-(id)imageForAsset:(id)arg1 targetSize:(CGSize)arg2 contentMode:(int)arg3 options:(id)arg4 outInfo:(id*)arg5 ;
-(int)requestImageForAsset:(id)arg1 targetSize:(CGSize)arg2 contentMode:(int)arg3 options:(id)arg4 resultHandler:(/*^block*/id)arg5 ;
-(void)cancelImageRequest:(int)arg1 ;
-(int)requestImageDataForAsset:(id)arg1 options:(id)arg2 resultHandler:(/*^block*/id)arg3 ;
-(int)requestAVAssetForVideo:(id)arg1 options:(id)arg2 resultHandler:(/*^block*/id)arg3 ;
-(id)thumbnailDataForAsset:(id)arg1 targetSize:(CGSize)arg2 ;
-(void)photoLibraryDidChange:(id)arg1 ;
-(id)requestAsynchronousVideoURLForAsset:(id)arg1 options:(id)arg2 resultHandler:(/*^block*/id)arg3 ;
-(void)requestSynchronousImageForAsset:(id)arg1 targetSize:(CGSize)arg2 contentMode:(int)arg3 options:(id)arg4 completionHandler:(/*^block*/id)arg5 ;
-(id)requestAsynchronousImageForImageLoadingAsset:(id)arg1 targetSize:(CGSize)arg2 contentMode:(int)arg3 options:(id)arg4 resultHandler:(/*^block*/id)arg5 ;
-(void)requestSynchronousImageForImageLoadingAsset:(id)arg1 targetSize:(CGSize)arg2 contentMode:(int)arg3 options:(id)arg4 completionHandler:(/*^block*/id)arg5 ;
-(void)dealloc;
-(id)init;
-(unsigned)hash;
-(NSString *)description;
-(int)requestPlayerItemForVideo:(id)arg1 options:(id)arg2 resultHandler:(/*^block*/id)arg3 ;
@end
