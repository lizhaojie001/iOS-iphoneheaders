/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:24:58 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/RadioUI.framework/RadioUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <RadioUI/RadioUI-Structs.h>
#import <UIKit/UIViewController.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>

@protocol RUCreateStationViewControllerDelegateRUEditStationsViewControllerDelegate;
@class _UIBackdropView, RUParallelScrollView, RUCreateStationViewController, UIAlertView, NSIndexPath, MPUBorderDrawingCache, NSArray, RUProxyTableView, NSString;

@interface RUEditStationsViewController : UIViewController <UITableViewDataSource, UITableViewDelegate> {

	_UIBackdropView* _backdropView;
	RUParallelScrollView* _containerScrollView;
	UIEdgeInsets _containerScrollViewContentInsetAdditions;
	RUCreateStationViewController* _createStationViewController;
	UIAlertView* _deletionAlertView;
	unsigned long long _ignoreReloadDataCount;
	NSIndexPath* _indexPathToDelete;
	BOOL _isEditing;
	BOOL _needsReloadAfterEndIgnoring;
	MPUBorderDrawingCache* _stackItemBorderDrawingCache;
	NSArray* _stations;
	RUProxyTableView* _tableView;
	id<RUCreateStationViewControllerDelegate><RUEditStationsViewControllerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<RUCreateStationViewControllerDelegate><RUEditStationsViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)_shouldForwardViewWillTransitionToSize;
-(void)_radioModelDidChangeNotification:(id)arg1 ;
-(void)_doneAction:(id)arg1 ;
-(void)dealloc;
-(void)setDelegate:(id<RUCreateStationViewControllerDelegate><RUEditStationsViewControllerDelegate>)arg1 ;
-(void)reloadData;
-(id)init;
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 targetIndexPathForMoveFromRowAtIndexPath:(id)arg2 toProposedIndexPath:(id)arg3 ;
-(void)scrollViewDidScroll:(id)arg1 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(BOOL)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2 ;
-(BOOL)tableView:(id)arg1 canMoveRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3 ;
-(void)tableView:(id)arg1 moveRowAtIndexPath:(id)arg2 toIndexPath:(id)arg3 ;
-(id<RUCreateStationViewControllerDelegate><RUEditStationsViewControllerDelegate>)delegate;
-(unsigned long long)supportedInterfaceOrientations;
-(void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)loadView;
-(void)viewWillAppear:(BOOL)arg1 ;
-(id)contentScrollView;
-(void)viewDidLoad;
-(void)_contentSizeCategoryDidChangeNotification:(id)arg1 ;
-(void)_updateViewForHorizontalSizeClassChange;
-(void)_updateViewForTraitCollectionChange;
-(void)_updateTableViewRowHeight;
-(void)_didReceiveRadioAccountDidDeauthenticateNotification:(id)arg1 ;
-(void)_endIgnoringReloadData;
-(void)_commitDeletingStationWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)_beginIgnoringReloadData;
-(void)_updateBarButtonItemsAnimated:(BOOL)arg1 ;
-(void)_editAction:(id)arg1 ;
@end
