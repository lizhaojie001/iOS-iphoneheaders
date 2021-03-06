/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 7:10:00 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /Applications/Podcasts.app/Podcasts
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Podcasts/MTToolbarHeaderViewController.h>
#import <Podcasts/MTSearchDisplayControllerDelegate.h>
#import <Podcasts/MTTableViewDataSource.h>

@protocol MTSourceListDelegate, MTRefreshControlDelegate;
@class NSString, NSAttributedString;

@interface MTSourceListController : MTToolbarHeaderViewController <MTSearchDisplayControllerDelegate, MTTableViewDataSource> {

	char _endRefreshWhenDraggingEnds;
	char _refreshing;
	id<MTSourceListDelegate> _delegate;
	id<MTRefreshControlDelegate> _refreshDelegate;
	NSString* _selectedUuid;
	NSAttributedString* _attributedTitleForRefreshControl;
	SEL _selectorForRefreshControl;
	id _targetForRefreshControl;

}

@property (assign,nonatomic,__weak) id<MTRefreshControlDelegate> refreshDelegate;                //@synthesize refreshDelegate=_refreshDelegate - In the implementation block
@property (assign,nonatomic,__weak) id<MTSourceListDelegate> delegate;                           //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSString * selectedUuid;                                            //@synthesize selectedUuid=_selectedUuid - In the implementation block
@property (assign,getter=isRefreshing,nonatomic) char refreshing;                                //@synthesize refreshing=_refreshing - In the implementation block
@property (nonatomic,retain) NSAttributedString * attributedTitleForRefreshControl;              //@synthesize attributedTitleForRefreshControl=_attributedTitleForRefreshControl - In the implementation block
@property (assign,nonatomic) SEL selectorForRefreshControl;                                      //@synthesize selectorForRefreshControl=_selectorForRefreshControl - In the implementation block
@property (assign,nonatomic,__weak) id targetForRefreshControl;                                  //@synthesize targetForRefreshControl=_targetForRefreshControl - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)defaultsKey;
-(id)_selectItemWithUuid:(id)arg1 ;
-(id)storedUuid;
-(void)setSelectedUuid:(NSString *)arg1 ;
-(NSString *)selectedUuid;
-(void)selectItemWithUuid:(id)arg1 forceScroll:(char)arg2 ;
-(void)didEndDraggingScrollView;
-(void)restoreSelection;
-(void)updatedDefaults:(id)arg1 ;
-(NSAttributedString *)attributedTitleForRefreshControl;
-(id)targetForRefreshControl;
-(SEL)selectorForRefreshControl;
-(void)configureRowHeight;
-(void)endRefreshingWhenDraggingCompletes;
-(id<MTRefreshControlDelegate>)refreshDelegate;
-(void)getObjectId:(id*)arg1 andIndexPath:(id*)arg2 forItemWithUuid:(id)arg3 ;
-(id)firstValidIndexPath;
-(id)newCellInstanceWithReuseIdentifier:(id)arg1 ;
-(void)configureCell:(id)arg1 withObject:(id)arg2 atIndexPath:(id)arg3 ;
-(void)setAttributedTitleForRefreshControl:(NSAttributedString *)arg1 ;
-(int)flattenedCellIndexForIndexPath:(id)arg1 ;
-(void)setRefreshDelegate:(id<MTRefreshControlDelegate>)arg1 ;
-(void)setSelectorForRefreshControl:(SEL)arg1 ;
-(void)setTargetForRefreshControl:(id)arg1 ;
-(void)controller:(id)arg1 didChangeObject:(id)arg2 atIndexPath:(id)arg3 forChangeType:(unsigned)arg4 newIndexPath:(id)arg5 ;
-(void)controllerDidChangeContent:(id)arg1 ;
-(void)dealloc;
-(void)setDelegate:(id<MTSourceListDelegate>)arg1 ;
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(int)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 targetIndexPathForMoveFromRowAtIndexPath:(id)arg2 toProposedIndexPath:(id)arg3 ;
-(void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(char)arg2 ;
-(void)scrollViewDidEndDecelerating:(id)arg1 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(int)numberOfSectionsInTableView:(id)arg1 ;
-(char)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2 ;
-(char)tableView:(id)arg1 canMoveRowAtIndexPath:(id)arg2 ;
-(id<MTSourceListDelegate>)delegate;
-(void)didReceiveMemoryWarning;
-(unsigned)supportedInterfaceOrientations;
-(void)setEditing:(char)arg1 animated:(char)arg2 ;
-(void)loadView;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidLoad;
-(void)viewDidAppear:(char)arg1 ;
-(void)viewWillDisappear:(char)arg1 ;
-(void)viewDidDisappear:(char)arg1 ;
-(id)tableView;
-(char)isRefreshing;
-(void)contentSizeCategoryDidChange:(id)arg1 ;
-(void)setRefreshing:(char)arg1 ;
-(id)reuseIdentifierForRow:(id)arg1 ;
@end

