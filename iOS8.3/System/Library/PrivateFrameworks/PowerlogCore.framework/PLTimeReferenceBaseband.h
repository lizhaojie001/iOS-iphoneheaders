/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 3:08:22 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/PowerlogCore.framework/PowerlogCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PowerlogCore/PLTimeReferenceDynamic.h>

@class PLNSNotificationOperatorComposition;

@interface PLTimeReferenceBaseband : PLTimeReferenceDynamic {

	char _followupCurrentTimeRunning;
	PLNSNotificationOperatorComposition* _basebandTimeNotification;

}

@property (retain) PLNSNotificationOperatorComposition * basebandTimeNotification;              //@synthesize basebandTimeNotification=_basebandTimeNotification - In the implementation block
@property (assign) char followupCurrentTimeRunning;                                             //@synthesize followupCurrentTimeRunning=_followupCurrentTimeRunning - In the implementation block
-(void)dealloc;
-(id)initWithTimeManager:(id)arg1 entryDefinitionKey:(id)arg2 timeReferenceType:(int)arg3 ;
-(void)timeChangedNotificationReceived:(id)arg1 ;
-(id)currentBasebandTimeAndLatency;
-(char)followupCurrentTimeRunning;
-(void)setFollowupCurrentTimeRunning:(char)arg1 ;
-(void)registerForTimeChangedNotification;
-(PLNSNotificationOperatorComposition *)basebandTimeNotification;
-(void)setBasebandTimeNotification:(PLNSNotificationOperatorComposition *)arg1 ;
-(id)currentTime;
@end
