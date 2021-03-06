/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:59:46 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <Maps/StarkTableViewController.h>
#import <Maps/DirectionsManagerObserver.h>

@class NSArray, UIBarButtonItem;

@interface StarkDirectionsListViewController : StarkTableViewController <DirectionsManagerObserver> {

	/*^block*/ id _completion;
	NSArray* _steps;
	UIBarButtonItem* _doneBarButtonItem;

}

@property (nonatomic,readonly) UIBarButtonItem * doneBarButtonItem;              //@synthesize doneBarButtonItem=_doneBarButtonItem - In the implementation block
-(void)directionsManagerDidSwitchToNewRoute:(id)arg1 route:(id)arg2 ;
-(void)_updateSteps;
-(void)_done;
-(void)directionsManager:(id)arg1 didReplaceRoute:(id)arg2 withRoute:(id)arg3 ;
-(id)doneBarButtonItem;
-(void)dealloc;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(int)numberOfSectionsInTableView:(id)arg1 ;
-(void)viewDidLoad;
-(void)viewDidAppear:(BOOL)arg1 ;
-(id)initWithCompletion:(/*^block*/ id)arg1 ;
@end

