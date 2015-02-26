/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:32:41 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/MusicCarDisplayUI.framework/MusicCarDisplayUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MPUFoundation/MPUTableViewController.h>

@class NSIndexPath;

@interface MCDTableViewController : MPUTableViewController {

	NSIndexPath* _previouslySelectedIndexPath;
	BOOL _shouldHideIndexTitles;

}

@property (assign,nonatomic) BOOL shouldHideIndexTitles;              //@synthesize shouldHideIndexTitles=_shouldHideIndexTitles - In the implementation block
+(Class)_tableViewClass;
-(void)dealloc;
-(void)reloadData;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(id)sectionIndexTitlesForTableView:(id)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(BOOL)_viewControllerWasSelected;
-(BOOL)shouldScrollToFirstDataSourceSectionOnInitialAppearance;
-(id)MPU_createNowPlayingButton;
-(id)initWithDataSource:(id)arg1 cellConfigurationClass:(Class)arg2 ;
-(void)_MCD_nowPlayingButtonAction:(id)arg1 ;
-(BOOL)shouldHideIndexTitles;
-(void)setShouldHideIndexTitles:(BOOL)arg1 ;
-(id)_createTableView;
@end
