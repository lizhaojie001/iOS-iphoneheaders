/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 7:10:00 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /Applications/Podcasts.app/Podcasts
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UITableViewController.h>
#import <Podcasts/MTLibraryViewControllerProtocol.h>
#import <Podcasts/NSFetchedResultsControllerDelegate.h>

@class MTLibrary, NSString, NSPredicate, NSArray, NSFetchedResultsController;

@interface MTFetchedTableViewController : UITableViewController <MTLibraryViewControllerProtocol, NSFetchedResultsControllerDelegate> {

	int _userDrivenCounter;
	char _inSwipeToDeleteMode;
	MTLibrary* _library;
	NSString* _fetchEntityName;
	NSPredicate* _fetchPredicate;
	NSArray* _sortDescriptors;
	NSString* _sectionName;
	int _rowAnimation;
	NSFetchedResultsController* _frc;
	NSString* _sectionNameKeyPath;

}

@property (nonatomic,retain) NSFetchedResultsController * frc;              //@synthesize frc=_frc - In the implementation block
@property (nonatomic,retain) NSString * fetchEntityName;                    //@synthesize fetchEntityName=_fetchEntityName - In the implementation block
@property (nonatomic,retain) NSString * sectionName;                        //@synthesize sectionName=_sectionName - In the implementation block
@property (nonatomic,retain) NSPredicate * fetchPredicate;                  //@synthesize fetchPredicate=_fetchPredicate - In the implementation block
@property (nonatomic,retain) NSArray * sortDescriptors;                     //@synthesize sortDescriptors=_sortDescriptors - In the implementation block
@property (assign,nonatomic) char changeIsUserDriven; 
@property (assign,nonatomic) int rowAnimation;                              //@synthesize rowAnimation=_rowAnimation - In the implementation block
@property (assign,nonatomic) char inSwipeToDeleteMode;                      //@synthesize inSwipeToDeleteMode=_inSwipeToDeleteMode - In the implementation block
@property (nonatomic,retain) NSString * sectionNameKeyPath;                 //@synthesize sectionNameKeyPath=_sectionNameKeyPath - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) MTLibrary * library;                           //@synthesize library=_library - In the implementation block
-(NSFetchedResultsController *)frc;
-(char)changeIsUserDriven;
-(void)setChangeIsUserDriven:(char)arg1 ;
-(id)newCellInstanceWithReuseIdentifier:(id)arg1 ;
-(void)configureCell:(id)arg1 withObject:(id)arg2 atIndexPath:(id)arg3 ;
-(char)inSwipeToDeleteMode;
-(void)setInSwipeToDeleteMode:(char)arg1 ;
-(id)initWithEntityName:(id)arg1 predicate:(id)arg2 sortDescriptors:(id)arg3 ;
-(id)fetchRequestInManagedObjectContext:(id)arg1 ;
-(void)setFrc:(NSFetchedResultsController *)arg1 ;
-(void)initializeFrc;
-(void)_updateTableAnimated:(char)arg1 ;
-(void)setFetchPredicate:(NSPredicate *)arg1 ;
-(NSString *)fetchEntityName;
-(NSPredicate *)fetchPredicate;
-(char)hasSectionNameKeyPathChanged;
-(int)rowAnimation;
-(void)refetchWithSortDescriptors:(id)arg1 animated:(char)arg2 ;
-(void)refetchWithPredicate:(id)arg1 ;
-(void)refetchWithPredicate:(id)arg1 sortDescriptors:(id)arg2 animated:(char)arg3 ;
-(void)reloadVisibleCellsWithAnimation:(int)arg1 ;
-(void)setFetchEntityName:(NSString *)arg1 ;
-(NSString *)sectionName;
-(void)setSectionName:(NSString *)arg1 ;
-(void)setRowAnimation:(int)arg1 ;
-(void)setSectionNameKeyPath:(NSString *)arg1 ;
-(void)controller:(id)arg1 didChangeObject:(id)arg2 atIndexPath:(id)arg3 forChangeType:(unsigned)arg4 newIndexPath:(id)arg5 ;
-(void)controller:(id)arg1 didChangeSection:(id)arg2 atIndex:(unsigned)arg3 forChangeType:(unsigned)arg4 ;
-(void)controllerDidChangeContent:(id)arg1 ;
-(void)controllerWillChangeContent:(id)arg1 ;
-(NSString *)sectionNameKeyPath;
-(void)dealloc;
-(void)tableView:(id)arg1 willBeginEditingRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didEndEditingRowAtIndexPath:(id)arg2 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(int)numberOfSectionsInTableView:(id)arg1 ;
-(void)tableView:(id)arg1 commitEditingStyle:(int)arg2 forRowAtIndexPath:(id)arg3 ;
-(void)didReceiveMemoryWarning;
-(unsigned)supportedInterfaceOrientations;
-(void)encodeRestorableStateWithCoder:(id)arg1 ;
-(void)decodeRestorableStateWithCoder:(id)arg1 ;
-(void)setEditing:(char)arg1 animated:(char)arg2 ;
-(void)setSortDescriptors:(NSArray *)arg1 ;
-(NSArray *)sortDescriptors;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidLoad;
-(void)viewWillDisappear:(char)arg1 ;
-(void)setRefreshControl:(id)arg1 ;
-(MTLibrary *)library;
-(void)setLibrary:(MTLibrary *)arg1 ;
-(id)initWithEntityName:(id)arg1 ;
-(id)reuseIdentifierForRow:(id)arg1 ;
@end

