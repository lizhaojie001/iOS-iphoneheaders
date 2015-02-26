/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:32:03 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <HomeKitDaemon/HMDTrigger.h>

@class NSDate, NSTimeZone, NSDateComponents, NSString, NSTimer;

@interface HMDTimerTrigger : HMDTrigger {

	NSDate* _fireDate;
	NSTimeZone* _fireDateTimeZone;
	NSDateComponents* _fireRepeatInterval;
	NSString* _timerID;
	NSDate* _currentFireDate;
	NSTimer* _timer;

}

@property (nonatomic,copy) NSDate * fireDate;                                  //@synthesize fireDate=_fireDate - In the implementation block
@property (nonatomic,copy) NSTimeZone * fireDateTimeZone;                      //@synthesize fireDateTimeZone=_fireDateTimeZone - In the implementation block
@property (nonatomic,copy) NSDateComponents * fireRepeatInterval;              //@synthesize fireRepeatInterval=_fireRepeatInterval - In the implementation block
@property (nonatomic,retain) NSString * timerID;                               //@synthesize timerID=_timerID - In the implementation block
@property (nonatomic,retain) NSDate * currentFireDate;                         //@synthesize currentFireDate=_currentFireDate - In the implementation block
@property (nonatomic,retain) NSTimer * timer;                                  //@synthesize timer=_timer - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)validateWholeMinuteDate:(id)arg1 onCalendar:(id)arg2 ;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)invalidate;
-(void)setFireDate:(NSDate *)arg1 ;
-(NSDate *)fireDate;
-(void)_stopTimer;
-(void)setTimer:(NSTimer *)arg1 ;
-(NSTimer *)timer;
-(id)_activate:(BOOL)arg1 ;
-(void)_registerForMessages;
-(void)configure:(id)arg1 messageDispatcher:(id)arg2 queue:(id)arg3 ;
-(void)completeConfiguration;
-(NSString *)timerID;
-(void)timerTriggered;
-(id)initWithName:(id)arg1 fireDate:(id)arg2 timeZone:(id)arg3 recurrence:(id)arg4 ;
-(id)validateRecurrence:(id)arg1 ;
-(void)setTimerID:(NSString *)arg1 ;
-(NSTimeZone *)fireDateTimeZone;
-(void)_timerTriggered;
-(id)getCalendar;
-(NSDate *)currentFireDate;
-(NSDateComponents *)fireRepeatInterval;
-(void)setCurrentFireDate:(NSDate *)arg1 ;
-(void)_handleUpdateTimerTriggerPropertiesRequest:(id)arg1 ;
-(void)setFireDateTimeZone:(NSTimeZone *)arg1 ;
-(void)setFireRepeatInterval:(NSDateComponents *)arg1 ;
-(id)_nextFireDate;
-(void)_startTimerWithFireDate:(id)arg1 ;
-(void)_closestDatesForStartDate:(id)arg1 earliestDate:(id)arg2 timeZone:(id)arg3 deliveryRepeatInterval:(id)arg4 returnDateBefore:(id*)arg5 returnDateAfter:(id*)arg6 ;
-(void)nsTimerTriggered:(id)arg1 ;
@end
