/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 7:09:39 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UITableViewController.h>
#import <Maps/MKSearchCompleterDelegate.h>
#import <Maps/ExtendedTableViewDelegate.h>
#import <Maps/SearchBarSearchManagerDelegate.h>

@protocol SearchCompletionsTableViewControllerDelegate, HistoryUIHold;
@class SearchBarSearchManager, MKLocalSearchCompleter, NSArray, UIView, NSString, SearchResult, SearchBarSearchResults, RTRoutineManager, SearchInfo;

@interface SearchCompletionsTableViewController : UITableViewController <MKSearchCompleterDelegate, ExtendedTableViewDelegate, SearchBarSearchManagerDelegate> {

	id<SearchCompletionsTableViewControllerDelegate> _delegate;
	SearchBarSearchManager* _searchManager;
	MKLocalSearchCompleter* _searchCompleter;
	NSArray* _systemCompletions;
	NSArray* _localCompletions;
	NSArray* _tableSafeLocalCompletions;
	NSArray* _serverCompletions;
	NSArray* _tableSafeServerCompletions;
	NSArray* _routineCompletions;
	NSArray* _tableSafeRoutineCompletions;
	UIView* _bottomLine;
	NSString* _query;
	NSString* _visibleQuery;
	SearchResult* _customSearchResult;
	char _suggestsDroppedPin;
	char _suggestsCurrentLocation;
	char _suggestsRouteCompletions;
	char _suggestsServerCompletions;
	char _stopShowingDefaultSuggestions;
	char _delegateRespondsToScrollViewDidScroll;
	char _suggestsRoutinePredictedLocations;
	int _searchMode;
	int _idiom;
	NSArray* _orderedSections;
	char _pendingReset;
	char _finishedLocalCompletions;
	char _finishedServerCompletions;
	id<HistoryUIHold> _historyUIHold;
	SearchBarSearchResults* _localSearchResults;
	RTRoutineManager* _routineManager;
	char _suggestsHistory;
	char _opaque;
	char _showsLocalSuggestionsForEmptyQuery;
	char _showsQueryAsCompletionIfNoneFound;
	char _showsQueryAsCompletionAsDisambiguation;
	char _showsCollectionsButton;
	SearchInfo* _refinementResults;
	UIView* _noContentView;

}

@property (assign,nonatomic,__weak) id<SearchCompletionsTableViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) char showsQueryAsCompletionIfNoneFound;                                        //@synthesize showsQueryAsCompletionIfNoneFound=_showsQueryAsCompletionIfNoneFound - In the implementation block
@property (assign,nonatomic) char showsQueryAsCompletionAsDisambiguation;                                   //@synthesize showsQueryAsCompletionAsDisambiguation=_showsQueryAsCompletionAsDisambiguation - In the implementation block
@property (nonatomic,retain) UIView * bottomLine;                                                           //@synthesize bottomLine=_bottomLine - In the implementation block
@property (nonatomic,retain) NSString * query;                                                              //@synthesize query=_query - In the implementation block
@property (nonatomic,retain) SearchResult * customSearchResult;                                             //@synthesize customSearchResult=_customSearchResult - In the implementation block
@property (assign,nonatomic) char showsCollectionsButton;                                                   //@synthesize showsCollectionsButton=_showsCollectionsButton - In the implementation block
@property (assign,nonatomic) char suggestsDroppedPin;                                                       //@synthesize suggestsDroppedPin=_suggestsDroppedPin - In the implementation block
@property (assign,nonatomic) char suggestsCurrentLocation;                                                  //@synthesize suggestsCurrentLocation=_suggestsCurrentLocation - In the implementation block
@property (assign,nonatomic) char suggestsServerCompletions;                                                //@synthesize suggestsServerCompletions=_suggestsServerCompletions - In the implementation block
@property (assign,nonatomic) char suggestsHistory;                                                          //@synthesize suggestsHistory=_suggestsHistory - In the implementation block
@property (assign,nonatomic) char stopShowingDefaultSuggestions;                                            //@synthesize stopShowingDefaultSuggestions=_stopShowingDefaultSuggestions - In the implementation block
@property (assign,nonatomic) char showsLocalSuggestionsForEmptyQuery;                                       //@synthesize showsLocalSuggestionsForEmptyQuery=_showsLocalSuggestionsForEmptyQuery - In the implementation block
@property (assign,nonatomic) char suggestsRouteCompletions;                                                 //@synthesize suggestsRouteCompletions=_suggestsRouteCompletions - In the implementation block
@property (assign,nonatomic) char suggestsRoutinePredictedLocations;                                        //@synthesize suggestsRoutinePredictedLocations=_suggestsRoutinePredictedLocations - In the implementation block
@property (getter=isShowingSuggestions,nonatomic,readonly) char showingSuggestions; 
@property (nonatomic,retain) UIView * noContentView;                                                        //@synthesize noContentView=_noContentView - In the implementation block
@property (nonatomic,retain) SearchInfo * refinementResults;                                                //@synthesize refinementResults=_refinementResults - In the implementation block
@property (assign,getter=isOpaque,nonatomic) char opaque;                                                   //@synthesize opaque=_opaque - In the implementation block
@property (nonatomic,retain) NSString * visibleQuery;                                                       //@synthesize visibleQuery=_visibleQuery - In the implementation block
@property (nonatomic,retain) NSArray * systemCompletions;                                                   //@synthesize systemCompletions=_systemCompletions - In the implementation block
@property (nonatomic,retain) NSArray * localCompletions;                                                    //@synthesize localCompletions=_localCompletions - In the implementation block
@property (nonatomic,retain) NSArray * serverCompletions;                                                   //@synthesize serverCompletions=_serverCompletions - In the implementation block
@property (nonatomic,retain) NSArray * routineCompletions;                                                  //@synthesize routineCompletions=_routineCompletions - In the implementation block
@property (nonatomic,retain) NSArray * orderedSections;                                                     //@synthesize orderedSections=_orderedSections - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_locationManagerApprovalDidChange:(id)arg1 ;
-(SearchResult *)customSearchResult;
-(void)setCustomSearchResult:(SearchResult *)arg1 ;
-(void)extendedTableViewDataSourceContentDidChange:(id)arg1 ;
-(id)_directionsHomeHistoryItem;
-(void)receivedSearchResults:(id)arg1 forSearchString:(id)arg2 ;
-(char)showsCollectionsButton;
-(void)setShowsCollectionsButton:(char)arg1 ;
-(void)setStopShowingDefaultSuggestions:(char)arg1 ;
-(char)isShowingSuggestions;
-(id)firstSuggestionCell;
-(void)setShowsLocalSuggestionsForEmptyQuery:(char)arg1 ;
-(void)setSuggestsServerCompletions:(char)arg1 ;
-(void)setSuggestsHistory:(char)arg1 ;
-(void)setSuggestsRoutinePredictedLocations:(char)arg1 ;
-(void)setShowsQueryAsCompletionAsDisambiguation:(char)arg1 ;
-(void)queryString:(id)arg1 traits:(id)arg2 forSearchMode:(int)arg3 withSource:(int)arg4 ;
-(id)_initWithStyle:(int)arg1 idiom:(int)arg2 ;
-(id)_sectionsForIdiom:(int)arg1 ;
-(void)setOrderedSections:(NSArray *)arg1 ;
-(void)_setTableViewBackgroundColor;
-(void)_recentsChanged;
-(char)_shouldShowDefaultCompletions;
-(id)_defaultCompletionsForSearchMode:(int)arg1 ;
-(NSArray *)orderedSections;
-(void)setLocalCompletions:(NSArray *)arg1 ;
-(void)reloadTableViewData;
-(void)_defaultRoutineCompletionsForSearchMode:(int)arg1 ;
-(void)setVisibleQuery:(NSString *)arg1 ;
-(char)showsLocalSuggestionsForEmptyQuery;
-(char)suggestsRouteCompletions;
-(NSArray *)localCompletions;
-(void)setRoutineCompletions:(NSArray *)arg1 ;
-(id)_filterPredictedLocationsOfInterest:(id)arg1 ;
-(void)setServerCompletions:(NSArray *)arg1 ;
-(char)stopShowingDefaultSuggestions;
-(SearchInfo *)refinementResults;
-(NSArray *)serverCompletions;
-(void)updateLocalResultsForSearchString:(id)arg1 ;
-(void)updateDelegateAfterCompletionResults;
-(NSArray *)routineCompletions;
-(int)_sectionAtIndex:(int)arg1 ;
-(int)numberOfCustomInitialItemCells;
-(char)showsQueryAsCompletionIfNoneFound;
-(char)showsQueryAsCompletionAsDisambiguation;
-(id)cellWithMainScreenClass:(Class)arg1 starkClass:(Class)arg2 ;
-(id)cellForCustomInitialItemAtIndex:(int)arg1 ;
-(void)didSelectCustomInitialItemAtIndex:(int)arg1 ;
-(char)_isDisplayingAnyRows;
-(char)hasCompletionsForQuery:(id)arg1 ;
-(void)reloadCustomInitialItemsWithAnimation:(int)arg1 ;
-(void)reloadCustomInitialItemAtIndex:(int)arg1 animation:(int)arg2 ;
-(int)indexOfCustomInitialItemForIndexPath:(id)arg1 ;
-(void)setShowsQueryAsCompletionIfNoneFound:(char)arg1 ;
-(void)setRefinementResults:(SearchInfo *)arg1 ;
-(NSArray *)systemCompletions;
-(void)setSystemCompletions:(NSArray *)arg1 ;
-(NSString *)visibleQuery;
-(char)suggestsDroppedPin;
-(void)setSuggestsDroppedPin:(char)arg1 ;
-(char)suggestsCurrentLocation;
-(void)setSuggestsCurrentLocation:(char)arg1 ;
-(char)suggestsServerCompletions;
-(char)suggestsHistory;
-(void)setSuggestsRouteCompletions:(char)arg1 ;
-(char)suggestsRoutinePredictedLocations;
-(UIView *)bottomLine;
-(void)setBottomLine:(UIView *)arg1 ;
-(void)completerDidUpdateResults:(id)arg1 finished:(char)arg2 ;
-(void)_contentSizeCategoryDidChange;
-(unsigned)_indexOfSection:(int)arg1 ;
-(void)setOpaque:(char)arg1 ;
-(void)dealloc;
-(void)setDelegate:(id<SearchCompletionsTableViewControllerDelegate>)arg1 ;
-(id)init;
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(void)scrollViewDidScroll:(id)arg1 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(int)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 titleForHeaderInSection:(int)arg2 ;
-(id<SearchCompletionsTableViewControllerDelegate>)delegate;
-(NSString *)query;
-(char)isOpaque;
-(void)viewWillLayoutSubviews;
-(void)viewDidLayoutSubviews;
-(void)loadView;
-(void)setQuery:(NSString *)arg1 ;
-(id)initWithStyle:(int)arg1 ;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidAppear:(char)arg1 ;
-(void)viewDidDisappear:(char)arg1 ;
-(void)setNoContentView:(UIView *)arg1 ;
-(UIView *)noContentView;
-(id)initWithIdiom:(int)arg1 ;
-(void)_resetTableView;
@end

