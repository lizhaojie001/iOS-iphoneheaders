/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:21:05 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/SportsWorkout.framework/SportsWorkout
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SportsWorkout/SportsWorkout-Structs.h>
#import <SportsWorkout/SWFakeRunSensorDelegate.h>

@class NSTimer, NSString;

@interface SWBasicFakeRunSensorDelegate : NSObject <SWFakeRunSensorDelegate> {

	NSTimer* _packetTimer;
	char _firstPacketDelivered;
	unsigned char _payload[28];
	SDARunState _runState;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id)init;
-(void)_schedulePacketTimerForFakeSensor:(id)arg1 ;
-(void)_fakeNextPacketForTimer:(id)arg1 ;
-(void)_updatePayload;
-(unsigned)remainingBatteryLifetimeInHoursForFakeSensor:(id)arg1 ;
-(void)beginLinkingForFakeSensor:(id)arg1 ;
-(void)cancelLinkingForFakeSensor:(id)arg1 ;
-(void)beginSearchingForFakeSensor:(id)arg1 ;
-(void)cancelSearchingForFakeSensor:(id)arg1 ;
@end
