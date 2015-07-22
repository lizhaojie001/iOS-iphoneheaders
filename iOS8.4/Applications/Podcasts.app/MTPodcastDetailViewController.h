/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 7:10:02 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /Applications/Podcasts.app/Podcasts
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Podcasts/MTDetailViewController.h>
#import <Podcasts/MTPodcastSettingsViewControllerDelegate.h>
#import <Podcasts/MTGoneDarkViewDelegate.h>
#import <UIKit/UIViewControllerRestoration.h>

@class UIButton, UIToolbar, MTGoneDarkView, MTAllPropertyChangesQueryObserver, UIRefreshControl, NSDictionary, UIPopoverController, MTEpisode, MTPodcastDetailListController, NSString;

@interface MTPodcastDetailViewController : MTDetailViewController <MTPodcastSettingsViewControllerDelegate, MTGoneDarkViewDelegate, UIViewControllerRestoration> {

	UIButton* _shareButton;
	UIToolbar* _shareToolbar;
	MTGoneDarkView* _darkView;
	MTAllPropertyChangesQueryObserver* _darkQuery;
	UIRefreshControl* _refreshControl;
	char _inStateRestoration;
	char _showDetailPopoverAfterRotation;
	char _supressDarkQueryChanges;
	float _detailHeaderHeight;
	char _showShareItem;
	char _switchToFeedTabOnLoad;
	NSDictionary* _podcastInfo;
	UIPopoverController* _detailsPopover;
	MTEpisode* _episodeToHighlight;

}

@property (nonatomic,readonly) MTPodcastDetailListController * detailListViewController; 
@property (assign,nonatomic) char showShareItem;                                                      //@synthesize showShareItem=_showShareItem - In the implementation block
@property (nonatomic,retain) NSDictionary * podcastInfo;                                              //@synthesize podcastInfo=_podcastInfo - In the implementation block
@property (nonatomic,retain) UIPopoverController * detailsPopover;                                    //@synthesize detailsPopover=_detailsPopover - In the implementation block
@property (nonatomic,retain) MTEpisode * episodeToHighlight;                                          //@synthesize episodeToHighlight=_episodeToHighlight - In the implementation block
@property (assign,nonatomic) char switchToFeedTabOnLoad;                                              //@synthesize switchToFeedTabOnLoad=_switchToFeedTabOnLoad - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)viewControllerWithRestorationIdentifierPath:(id)arg1 coder:(id)arg2 ;
-(void)setEpisodeToHighlight:(MTEpisode *)arg1 ;
-(void)switchToFeedTab;
-(void)unhighlightAllEpisodes;
-(int)detailHeaderMode;
-(id)newListController;
-(char)stealsHeaderBar;
-(void)detailHeaderHeightDidChangetoHeight:(float)arg1 ;
-(void)detailListController:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(void)detailListController:(id)arg1 didChangeEditing:(char)arg2 animated:(char)arg3 ;
-(UIPopoverController *)detailsPopover;
-(void)setDetailsPopover:(UIPopoverController *)arg1 ;
-(void)setPodcastInfo:(NSDictionary *)arg1 ;
-(NSDictionary *)podcastInfo;
-(MTEpisode *)episodeToHighlight;
-(void)showDark:(char)arg1 animated:(char)arg2 completion:(/*^block*/id)arg3 ;
-(void)showDarkViewIfNeededForPodcast:(id)arg1 animated:(char)arg2 ;
-(void)showShare:(id)arg1 ;
-(void)didFinishUpdatingFeed:(id)arg1 ;
-(void)refreshFeedIfNeeded;
-(id)shareToolbar;
-(char)switchToFeedTabOnLoad;
-(void)setSwitchToFeedTabOnLoad:(char)arg1 ;
-(char)shouldShowPlacardForRemovePlayedEpisodes:(id)arg1 ;
-(char)shouldShowPlacardForSavedEpisodes:(id)arg1 ;
-(void)showDark:(char)arg1 animated:(char)arg2 ;
-(void)updateRefreshControlMessage;
-(void)updatePodcast:(char)arg1 ;
-(void)updatePodcast:(char)arg1 withRefreshControl:(id)arg2 ;
-(void)showSettings:(id)arg1 ;
-(void)refreshControlDidFinish:(id)arg1 ;
-(void)settingsDidChange;
-(void)didTapPlacardForOrphanedFromCloudPodcast;
-(void)didTapPlacardForRemovePlayedEpisodes;
-(void)didTapPlacardForSavedEpisodes;
-(void)setShowShareItem:(char)arg1 ;
-(char)showShareItem;
-(void)podcastSettings:(id)arg1 changedSortAscending:(char)arg2 ;
-(void)podcastSettings:(id)arg1 changedPlaybackOrderAscending:(char)arg2 ;
-(void)podcastSettings:(id)arg1 changedSubscribed:(char)arg2 ;
-(void)podcastSettings:(id)arg1 changedEpisodeLimit:(long long)arg2 ;
-(void)podcastSettings:(id)arg1 changedDeletedPlayedEpisodes:(long long)arg2 ;
-(void)goneDarkViewTapped;
-(id)messageForGoneDarkView:(id)arg1 ;
-(void)finishSettings:(id)arg1 ;
-(void)dismissViewController;
-(void)dealloc;
-(id)init;
-(void)encodeRestorableStateWithCoder:(id)arg1 ;
-(void)decodeRestorableStateWithCoder:(id)arg1 ;
-(void)viewDidLayoutSubviews;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidLoad;
-(void)viewDidAppear:(char)arg1 ;
-(void)viewWillDisappear:(char)arg1 ;
-(void)willRotateToInterfaceOrientation:(int)arg1 duration:(double)arg2 ;
-(void)didRotateFromInterfaceOrientation:(int)arg1 ;
-(id)shareButton;
@end
