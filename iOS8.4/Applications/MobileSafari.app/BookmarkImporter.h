/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 7:09:56 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /Applications/MobileSafari.app/MobileSafari
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class WebBookmarkCollection, NSDictionary, NSArray;

@interface BookmarkImporter : NSObject {

	WebBookmarkCollection* _collection;
	NSDictionary* _carrierBookmarkInfo;
	NSArray* _oldDeletedStaticBookmarks;

}
-(void)migrateYouTubeBookmarks;
-(void)importBuiltinBookmarks;
-(id)_builtInBookmarkItemWithPath:(id)arg1 forLocale:(id)arg2 ;
-(void)_getCarrierBundleBuiltinBookmarkInfoWithCompletion:(/*^block*/id)arg1 ;
-(id)_carrierBundleBuiltinBookmarkInfo;
-(id)_myAccountBookmarkInfo;
-(void)_appendBuiltinBookmarkWithInfo:(id)arg1 toParent:(unsigned)arg2 asCarrierBookmark:(char)arg3 ;
-(void)_setLastImportedCarrierBookmarkInfo:(id)arg1 ;
-(void)_appendBookmarksFromSource:(id)arg1 toParent:(unsigned)arg2 ;
-(id)_builtinBookmarkWithInfo:(id)arg1 asCarrierBookmark:(char)arg2 ;
-(id)_oldDeletedStaticBookmarks;
-(id)_lastImportedCarrierBookmarkInfo;
-(void)_importCarrierBookmarksIfNecessary;
-(id)_builtinFavoritesForLocale:(id)arg1 ;
-(void)_importCarrierBookmarksIfNecessaryAsync;
-(void)_importRootFolderBuiltinBookmarks;
-(void)_importFavoritesFolderBuiltinBookmarks;
-(void)_clearOldDeletedStaticBookmarks;
-(id)_uniqueYouTubeBookmarkFolderName;
-(id)initWithBookmarkCollection:(id)arg1 ;
@end

