/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:22:01 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UITableViewController.h>

@class PKJob, NSDateFormatter;

@interface UIPrintStatusTableViewController : UITableViewController {

	PKJob* _printJob;
	NSDateFormatter* _sentFormatter;

}
-(void)dealloc;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(void)loadView;
-(bool)shouldAutorotateToInterfaceOrientation:(long long)arg1 ;
-(void)viewWillAppear:(bool)arg1 ;
-(void)viewWillDisappear:(bool)arg1 ;
-(void)cancelPrinting;
-(void)updateCancelButton;
-(void)popToJobsView;
-(void)updateJobInfo;
-(id)initWithJob:(id)arg1 ;
@end

