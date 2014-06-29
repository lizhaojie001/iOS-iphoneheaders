/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:21:01 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSTimer;

@interface TodayInvalidationTimerWrapper : NSObject {

	NSTimer* _tzSupportDayRolloverTimer;

}
-(bool)todayChangedAfterInvalidation;
-(void)_setupTimeZoneTimer;
-(void)_killTimeZoneTimer;
-(void)invalidateTodayAndNotifyIfChanged;
-(void)dealloc;
-(id)init;
-(void).cxx_destruct;
@end
