/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:55:52 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/MusicStoreUI.framework/MusicStoreUI
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <iTunesStoreUI/SUClientApplicationController.h>
#import <Foundation/SSDownloadManagerObserver.h>

@class SSDownloadManager;

@interface MSClientApplicationController : SUClientApplicationController <SSDownloadManagerObserver> {

	SSDownloadManager* _downloadManager;
	BOOL _registersForPingNotifications;

}

@property (assign,nonatomic) BOOL registersForPingNotifications;              //@synthesize registersForPingNotifications=_registersForPingNotifications - In the implementation block
+(id)sharedController;
-(void)downloadManagerDownloadsDidChange:(id)arg1 ;
-(void)becomeActive;
-(void)dealloc;
-(id)init;
-(void)_updateRemoteNotificationSettings;
-(void)_handleGeniusLookupURL:(id)arg1 ;
-(void)_handleStoreSearchURL:(id)arg1 withSourceApplication:(id)arg2 sourceURLString:(id)arg3 ;
-(void)_handleLibraryLinkURL:(id)arg1 ;
-(BOOL)registersForPingNotifications;
-(void)setRegistersForPingNotifications:(BOOL)arg1 ;
-(void)_accountStoreChangedNotification:(id)arg1 ;
-(id)initWithClientInterface:(id)arg1 ;
-(BOOL)tabBarController:(id)arg1 shouldShowSection:(id)arg2 ;
-(id)tabBarController:(id)arg1 rootViewControllerForSection:(id)arg2 ;
-(id)tabBarController:(id)arg1 viewControllerForContext:(id)arg2 ;
-(void)purchaseManagerWillBeginUpdates:(id)arg1 ;
-(void)purchaseManagerDidEndUpdates:(id)arg1 ;
-(id)purchaseManager:(id)arg1 purchaseBatchForItems:(id)arg2 ;
-(id)purchaseManager:(id)arg1 purchaseBatchForPurchases:(id)arg2 ;
-(BOOL)displayClientURL:(id)arg1 withSourceApplication:(id)arg2 sourceURLString:(id)arg3 ;
-(id)initWithClientIdentifier:(id)arg1 ;
@end

