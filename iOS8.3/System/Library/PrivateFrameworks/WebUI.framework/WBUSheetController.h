/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 4:21:26 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/WebUI.framework/WebUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UITableViewDelegate.h>
#import <UIKit/UITableViewDataSource.h>

@class UIAlertController, WebUIAlert, NSMutableArray, UITableView, NSString;

@interface WBUSheetController : NSObject <UITableViewDelegate, UITableViewDataSource> {

	UIAlertController* _alertController;
	WebUIAlert* _alert;
	NSMutableArray* _alertInvocationQueue;
	UITableView* _tableView;
	id _delegate;
	char _isDismissed;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setDelegate:(id)arg1 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(id)initWithDelegate:(id)arg1 ;
-(void)_alertDidDismissWithAction:(int)arg1 ;
-(void)showSheetForAlert:(id)arg1 ;
-(void)_showSheetForAlert:(id)arg1 inView:(id)arg2 withClass:(Class)arg3 ;
-(void)showSheetForAlert:(id)arg1 inView:(id)arg2 ;
-(void)hideSheet;
@end
