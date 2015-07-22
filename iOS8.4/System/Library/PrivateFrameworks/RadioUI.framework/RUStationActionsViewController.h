/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:24:59 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/RadioUI.framework/RadioUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <RadioUI/RadioUI-Structs.h>
#import <UIKit/UIViewController.h>
#import <RadioUI/RUStationTrackInfoViewDelegate.h>
#import <RadioUI/MCProfileConnectionObserver.h>
#import <RadioUI/SKStoreProductViewControllerDelegate.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>

@protocol RUStationActionsViewControllerDelegate;
@class UILabel, UISwitch, NSArray, RadioStation, NSMutableArray, UITableViewCell, RUStationTuningView, UITableView, RUInnerShadowHeaderFooterView, RUStationTrackInfoView, MPAVItem, NSString;

@interface RUStationActionsViewController : UIViewController <RUStationTrackInfoViewDelegate, MCProfileConnectionObserver, SKStoreProductViewControllerDelegate, UITableViewDataSource, UITableViewDelegate> {

	BOOL _bagShowsExplicitToggle;
	UILabel* _copyrightLabel;
	long long _currentAction;
	BOOL _isProfileExplicitContentRestricted;
	UILabel* _navigationTitleLabel;
	BOOL _needsTrackInfoViewHeightReset;
	UISwitch* _playExplicitTracksSwitch;
	NSArray* _playbackQueue;
	RadioStation* _station;
	NSMutableArray* _stationActionGroups;
	UITableViewCell* _stationTuningCell;
	RUStationTuningView* _stationTuningView;
	UITableView* _tableView;
	RUInnerShadowHeaderFooterView* _topShadowView;
	RUStationTrackInfoView* _trackInfoView;
	BOOL _showsDoneButton;
	MPAVItem* _item;
	id<RUStationActionsViewControllerDelegate> _delegate;

}

@property (nonatomic,readonly) RadioStation * station;                                                //@synthesize station=_station - In the implementation block
@property (nonatomic,readonly) MPAVItem * item;                                                       //@synthesize item=_item - In the implementation block
@property (assign,nonatomic,__weak) id<RUStationActionsViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL showsDoneButton;                                                    //@synthesize showsDoneButton=_showsDoneButton - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(RadioStation *)station;
-(void)profileConnectionDidReceiveRestrictionChangedNotification:(id)arg1 userInfo:(id)arg2 ;
-(void)profileConnectionDidReceiveEffectiveSettingsChangedNotification:(id)arg1 userInfo:(id)arg2 ;
-(void)_radioModelDidChangeNotification:(id)arg1 ;
-(void)_doneAction:(id)arg1 ;
-(void)dealloc;
-(void)setDelegate:(id<RUStationActionsViewControllerDelegate>)arg1 ;
-(id)init;
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(void)tableView:(id)arg1 willDisplayFooterView:(id)arg2 forSection:(long long)arg3 ;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2 ;
-(double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(void)scrollViewDidScroll:(id)arg1 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id<RUStationActionsViewControllerDelegate>)delegate;
-(MPAVItem *)item;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)viewDidLayoutSubviews;
-(void)tableViewDidFinishReload:(id)arg1 ;
-(void)loadView;
-(void)viewWillAppear:(BOOL)arg1 ;
-(id)contentScrollView;
-(void)viewDidLoad;
-(void)_contentSizeCategoryDidChangeNotification:(id)arg1 ;
-(void)setShowsDoneButton:(BOOL)arg1 ;
-(void)_avItemStoreIDDidChangeNotification:(id)arg1 ;
-(BOOL)showsDoneButton;
-(void)trackInfoViewDidTapArtwork:(id)arg1 ;
-(void)trackInfoViewDidTapStoreButton:(id)arg1 ;
-(void)_updateViewForHorizontalSizeClassChangeAllowingTableReload:(BOOL)arg1 ;
-(double)_sectionHeaderHeight;
-(id)_newShadowViewWithFrame:(CGRect)arg1 ;
-(id)_newSectionHeaderWithFrame:(CGRect)arg1 title:(id)arg2 ;
-(id)_sectionHeaderTitleLabelFont;
-(void)_didReceiveRadioAccountDidDeauthenticateNotification:(id)arg1 ;
-(void)_updateForLoadedStoreBag:(id)arg1 ;
-(void)_storeBagDidLoadNotification:(id)arg1 ;
-(void)_updateAvailableActions;
-(void)_userDefaultExplicitTracksEnabledDidChangeNotification:(id)arg1 ;
-(void)_layoutTopShadowView;
-(void)_updateTableFooterView;
-(void)_showStoreSheetAction:(id)arg1 ;
-(void)_updateIsProfileExplicitContentRestrictedForProfileConnection:(id)arg1 ;
-(long long)_stationActionForIndexPath:(id)arg1 ;
-(void)_playExplicitToggleAction:(id)arg1 ;
-(void)_addDerivedStationUsingArtist:(BOOL)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(id)initWithStation:(id)arg1 item:(id)arg2 playbackQueue:(id)arg3 ;
-(id)_indexPathForStationAction:(long long)arg1 ;
-(void)productViewControllerDidFinish:(id)arg1 ;
@end
