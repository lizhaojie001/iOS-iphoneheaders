/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 7:10:12 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /Applications/Setup.app/Setup
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Setup/BuddyTableViewController.h>
#import <UIKit/UITextFieldDelegate.h>

@class BuddyTableViewCell, NSString, UIAlertView;

@interface BuddyEmailSetupPage : BuddyTableViewController <UITextFieldDelegate> {

	BuddyTableViewCell* _username;
	BuddyTableViewCell* _password;
	NSString* _email;
	UIAlertView* _skipSetupAlert;
	id _delegate;

}

@property (nonatomic,copy) NSString * email;                        //@synthesize email=_email - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)tryAgain;
-(void)setEmail:(NSString *)arg1 ;
-(void)setDelegate:(id)arg1 ;
-(id)init;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(int)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 titleForFooterInSection:(int)arg2 ;
-(void)alertView:(id)arg1 didDismissWithButtonIndex:(int)arg2 ;
-(void)setEnabled:(char)arg1 ;
-(char)textFieldShouldReturn:(id)arg1 ;
-(void)viewWillAppear:(char)arg1 ;
-(void)done;
-(NSString *)email;
@end

