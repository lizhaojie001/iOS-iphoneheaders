/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:19:03 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIViewController.h>
#import <UIKit/UITableViewDelegate.h>
#import <UIKit/UITableViewDataSource.h>

@class _UIFilteredDataSource, UITableViewDataSource, UITableView, UIRefreshControl, NSString;

@interface UITableViewController : UIViewController <UITableViewDelegate, UITableViewDataSource> {

	int _tableViewStyle;
	id _keyboardSupport;
	id _staticDataSource;
	struct {
		unsigned clearsSelectionOnViewWillAppear : 1;
		unsigned insetsApplied : 1;
		unsigned adjustingInsets : 1;
	}  _tableViewControllerFlags;
	_UIFilteredDataSource* _filteredDataSource;
	int _filteredDataType;

}

@property (setter=_setStaticDataSource:,getter=_staticDataSource,nonatomic,retain) UITableViewDataSource * staticDataSource; 
@property (nonatomic,retain) UITableView * tableView; 
@property (assign,nonatomic) char clearsSelectionOnViewWillAppear; 
@property (nonatomic,retain) UIRefreshControl * refreshControl; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(char)respondsToSelector:(SEL)arg1 ;
-(id)init;
-(float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(float)tableView:(id)arg1 heightForHeaderInSection:(int)arg2 ;
-(float)tableView:(id)arg1 heightForFooterInSection:(int)arg2 ;
-(id)tableView:(id)arg1 viewForHeaderInSection:(int)arg2 ;
-(id)tableView:(id)arg1 viewForFooterInSection:(int)arg2 ;
-(void)tableView:(id)arg1 willBeginEditingRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didEndEditingRowAtIndexPath:(id)arg2 ;
-(int)tableView:(id)arg1 indentationLevelForRowAtIndexPath:(id)arg2 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(int)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 titleForHeaderInSection:(int)arg2 ;
-(id)tableView:(id)arg1 titleForFooterInSection:(int)arg2 ;
-(void)_willChangeToIdiom:(int)arg1 onScreen:(id)arg2 ;
-(void)setTableView:(UITableView *)arg1 ;
-(void)setEditing:(char)arg1 animated:(char)arg2 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)loadView;
-(id)initWithStyle:(int)arg1 ;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidAppear:(char)arg1 ;
-(void)viewWillDisappear:(char)arg1 ;
-(char)_viewControllerWasSelected;
-(UITableView *)tableView;
-(void)_adjustTableForKeyboardInfo:(id)arg1 ;
-(void)setClearsSelectionOnViewWillAppear:(char)arg1 ;
-(id)_existingTableView;
-(void)_applyDefaultDataSourceToTable:(id)arg1 ;
-(void)_refreshFilteredDataSourceFilterTypeForScreen:(id)arg1 ;
-(int)_resolvedDataSourceFilterTypeForScreen:(id)arg1 ;
-(char)clearsSelectionOnViewWillAppear;
-(void)setRefreshControl:(UIRefreshControl *)arg1 ;
-(UIRefreshControl *)refreshControl;
-(int)_filteredDataType;
-(void)_setFilteredDataType:(int)arg1 ;
-(id)_staticDataSource;
-(void)_setStaticDataSource:(id)arg1 ;
@end

