/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:18:27 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <EventKitUI/EKEditItemViewControllerProtocol.h>

@class UITextView, NSString;

@interface EKEventDetailExtendedNotesViewController : UIViewController <EKEditItemViewControllerProtocol> {

	UITextView* _textView;

}

@property (nonatomic,copy) NSString * notes; 
@property (assign,nonatomic,__weak) id<EKEditItemViewControllerDelegate> editDelegate; 
@property (assign,nonatomic) char presentModally; 
@property (assign,nonatomic) char editItemShouldBeAskedForInjectableViewController; 
-(NSString *)notes;
-(void)setNotes:(NSString *)arg1 ;
-(id)init;
-(unsigned)supportedInterfaceOrientations;
-(void)loadView;
-(id)_textView;
@end

