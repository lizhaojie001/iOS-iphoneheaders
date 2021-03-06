/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:19:19 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PreferenceBundles/MobileSafariSettings.bundle/MobileSafariSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <WebUI/WBSFrequentlyVisitedSitesController.h>

@class NSMutableArray, WebBookmarkCollection;

@interface FrequentlyVisitedSitesController : WBSFrequentlyVisitedSitesController {

	NSMutableArray* _cachedFrequentlyVisitedBookmarks;
	WebBookmarkCollection* _bookmarkCollection;
	BOOL _bookmarksNeedToSave;
	char _ignoreBookmarksFolderChangeNotifications;

}
+(id)sharedController;
-(void)dealloc;
-(id)initWithBookmarkCollection:(id)arg1 ;
-(void)_receivedBookmarksFolderContentChangedNotification:(id)arg1 ;
-(void)_clearFrequentlyVisitedSitesInBookmarksDB;
-(void)promoteFrequentlyVisitedSite:(id)arg1 toFavoriteAtIndex:(unsigned)arg2 ;
-(void)banFrequentlyVisitedSite:(id)arg1 ;
-(void)saveFrequentlyVisitedSitesToBookmarksDB;
-(id)_canonicalizedFavoritesURLStringSet;
-(id)frequentlyVisitedSites;
-(void)clearFrequentlyVisitedSites;
@end

