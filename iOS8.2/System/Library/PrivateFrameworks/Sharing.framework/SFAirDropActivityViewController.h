/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:21:04 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Sharing/Sharing-Structs.h>
#import <UIKit/UIViewController.h>
#import <UIKit/UICollectionViewDataSource.h>
#import <UIKit/UICollectionViewDelegate.h>
#import <Sharing/SFAirDropBrowserDelegate.h>
#import <Sharing/SFPersonCollectionViewCellDelegate.h>
#import <Sharing/SFWirelessSettingsControllerDelegate.h>

@protocol SFAirDropActivityViewControllerDelegate;
@class NSString, UILabel, SFAirDropIconView, NSLayoutConstraint, SFAirDropActiveIconView, UICollectionView, SFCollectionViewFlowLayout, SFAirDropBrowser, NSMutableDictionary, SFWirelessSettingsController, NSMutableSet, NSOperationQueue, NSMutableArray, ALAssetsLibrary, NSObject;

@interface SFAirDropActivityViewController : UIViewController <UICollectionViewDataSource, UICollectionViewDelegate, SFAirDropBrowserDelegate, SFPersonCollectionViewCellDelegate, SFWirelessSettingsControllerDelegate> {

	int _attachmentCount;
	NSString* _sessionID;
	int _sharedItemsRequestID;
	UILabel* _titleLabel;
	SFAirDropIconView* _airDropIconView;
	NSLayoutConstraint* _airDropIconLeftConstraint;
	SFAirDropActiveIconView* _airDropActiveIconView;
	NSLayoutConstraint* _airDropActiveIconLeftConstraint;
	UILabel* _noWifiLabel;
	NSLayoutConstraint* _noWifiRightConstraint;
	UILabel* _instructionsLabel;
	NSLayoutConstraint* _instructionsRightConstraint;
	UICollectionView* _collectionView;
	SFCollectionViewFlowLayout* _flowLayout;
	SFAirDropBrowser* _browser;
	id _progressToken;
	NSMutableDictionary* _personToProgress;
	NSMutableDictionary* _personToStoredTransferFinalState;
	NSMutableDictionary* _personToSharedItemsRequestID;
	NSMutableDictionary* _sharedItemsRequestIDToPreviewPhoto;
	SFWirelessSettingsController* _wirelessSettings;
	NSMutableSet* _cachedSharedItems;
	char _itemsRequested;
	char _itemsReady;
	NSOperationQueue* _operationQueue;
	NSMutableArray* _objectChanges;
	ALAssetsLibrary* _assetsLibrary;
	int _generatedPreviews;
	char _sharedItemsAvailable;
	char _otherActivityViewPresented;
	char _darkStyleOnLegacyApp;
	NSObject*<SFAirDropActivityViewControllerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) NSObject*<SFAirDropActivityViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) CGSize suggestedThumbnailSize; 
@property (assign,nonatomic) char sharedItemsAvailable;                                                       //@synthesize sharedItemsAvailable=_sharedItemsAvailable - In the implementation block
@property (assign,nonatomic) char otherActivityViewPresented;                                                 //@synthesize otherActivityViewPresented=_otherActivityViewPresented - In the implementation block
@property (assign,nonatomic) char darkStyleOnLegacyApp;                                                       //@synthesize darkStyleOnLegacyApp=_darkStyleOnLegacyApp - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(char)isAirDropAvailable;
+(char)airDropActivityCanPerformActivityWithItems:(id)arg1 ;
+(id)classesForItem:(id)arg1 ;
-(char)isWifiEnabled;
-(void)dealloc;
-(void)setDelegate:(NSObject*<SFAirDropActivityViewControllerDelegate>)arg1 ;
-(NSObject*<SFAirDropActivityViewControllerDelegate>)delegate;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(char)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg1 didDeselectItemAtIndexPath:(id)arg2 ;
-(int)collectionView:(id)arg1 numberOfItemsInSection:(int)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(int)numberOfSectionsInCollectionView:(id)arg1 ;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidLoad;
-(void)viewDidDisappear:(char)arg1 ;
-(void)willRotateToInterfaceOrientation:(int)arg1 duration:(double)arg2 ;
-(UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(int)arg3 ;
-(float)collectionView:(id)arg1 layout:(id)arg2 minimumLineSpacingForSectionAtIndex:(int)arg3 ;
-(char)darkStyleOnLegacyApp;
-(void)setDarkStyleOnLegacyApp:(char)arg1 ;
-(void)didEnterBackground:(id)arg1 ;
-(char)addString:(id)arg1 withAttachmentName:(id)arg2 description:(id)arg3 previewImage:(id)arg4 ;
-(char)addAttributedString:(id)arg1 withAttachmentName:(id)arg2 description:(id)arg3 previewImage:(id)arg4 ;
-(char)addURL:(id)arg1 withAttachmentName:(id)arg2 description:(id)arg3 previewImage:(id)arg4 ;
-(char)addImage:(id)arg1 withAttachmentName:(id)arg2 description:(id)arg3 previewImage:(id)arg4 ;
-(char)addData:(id)arg1 ofType:(id)arg2 withAttachmentName:(id)arg3 description:(id)arg4 previewImage:(id)arg5 ;
-(CGSize)suggestedThumbnailSize;
-(void)setNeedsRequestingSharedItems;
-(void)setSharedItemsAvailable:(char)arg1 ;
-(void)setOtherActivityViewPresented:(char)arg1 ;
-(void)stopBrowsing;
-(void)browserWillChangePeople:(id)arg1 ;
-(void)browser:(id)arg1 didDeletePersonAtIndex:(unsigned)arg2 ;
-(void)browser:(id)arg1 didInsertPersonAtIndex:(unsigned)arg2 ;
-(void)browserDidChangePeople:(id)arg1 ;
-(void)wirelessSettingsDidChange:(id)arg1 ;
-(char)isBluetoothEnabled;
-(void)personCollectionViewCellDidStartTransfer:(id)arg1 ;
-(void)personCollectionViewCellDidTerminateTransfer:(id)arg1 ;
-(void)personCollectionViewCellDidFinishTransfer:(id)arg1 ;
-(void)subscribeToProgresses;
-(void)unsubscribeToProgresses;
-(void)startBrowsing;
-(void)willEnterForeground:(id)arg1 ;
-(void)updateContentAreaAnimated:(char)arg1 ;
-(void)adjustViewsToInterfaceOrientation:(int)arg1 ;
-(void)enableAirDropRequiredFeatures;
-(id)wifiBtHelpTextLocalizedStringKey;
-(id)attributedStringWithTitle:(id)arg1 content:(id)arg2 ;
-(char)isTetheredModeEnabled;
-(void)startTransferForPeople:(id)arg1 ;
-(void)generateSpecialPreviewPhotoForRequestID:(int)arg1 ;
-(void)subscribedProgress:(id)arg1 forPersonWithRealName:(id)arg2 ;
-(void)unpublishedProgressForPersonWithRealName:(id)arg1 ;
-(char)isValidPayload:(id)arg1 toPerson:(id)arg2 invalidMessage:(id*)arg3 ;
-(id)cellForPerson:(id)arg1 ;
-(char)createURLPayloadForData:(id)arg1 ofType:(id)arg2 withAttachmentName:(id)arg3 description:(id)arg4 previewImage:(id)arg5 completion:(/*^block*/id)arg6 ;
-(char)sharedItemsAvailable;
-(char)otherActivityViewPresented;
@end

