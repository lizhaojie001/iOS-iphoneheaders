/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:59:27 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/Contacts.app/Contacts
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UINavigationControllerDelegate.h>

@class NSDictionary, ABPeoplePickerNavigationController;

@interface ShowContactsTest : NSObject <UINavigationControllerDelegate> {

	NSDictionary* _testOptions;
	ABPeoplePickerNavigationController* _peoplePicker;
	int _nextPersonIndex;
	int _maxPersonIndex;
	double _timer;
	double _timerAccumulator;

}

@property (nonatomic,retain) NSDictionary * testOptions;                                     //@synthesize testOptions=_testOptions - In the implementation block
@property (nonatomic,retain) ABPeoplePickerNavigationController * peoplePicker;              //@synthesize peoplePicker=_peoplePicker - In the implementation block
@property (assign,nonatomic) int nextPersonIndex;                                            //@synthesize nextPersonIndex=_nextPersonIndex - In the implementation block
@property (assign,nonatomic) int maxPersonIndex;                                             //@synthesize maxPersonIndex=_maxPersonIndex - In the implementation block
@property (assign,nonatomic) double timer;                                                   //@synthesize timer=_timer - In the implementation block
@property (assign,nonatomic) double timerAccumulator;                                        //@synthesize timerAccumulator=_timerAccumulator - In the implementation block
-(BOOL)startTestWithOptions:(id)arg1 peoplePicker:(id)arg2 ;
-(void)setTestOptions:(id)arg1 ;
-(id)testOptions;
-(void)setNextPersonIndex:(int)arg1 ;
-(void)setMaxPersonIndex:(int)arg1 ;
-(void)setTimerAccumulator:(double)arg1 ;
-(void)showNextPerson;
-(int)nextPersonIndex;
-(int)maxPersonIndex;
-(double)timerAccumulator;
-(void)showMembersList;
-(void)dealloc;
-(void)navigationController:(id)arg1 willShowViewController:(id)arg2 animated:(BOOL)arg3 ;
-(void)navigationController:(id)arg1 didShowViewController:(id)arg2 animated:(BOOL)arg3 ;
-(id)peoplePicker;
-(void)setPeoplePicker:(id)arg1 ;
-(void)setTimer:(double)arg1 ;
-(double)timer;
-(void).cxx_destruct;
@end

