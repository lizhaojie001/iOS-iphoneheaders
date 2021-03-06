/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:11:45 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Watchdog/ThermalMonitor.bundle/ThermalMonitor
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <ThermalMonitor/BaseCCDisplayAndPower.h>

@class RadioPassthroughCC, CameraTS, DieControlLoop;

@interface tm60ebe335d9a55c5e521f51bf0dadbce6 : BaseCCDisplayAndPower {

	RadioPassthroughCC* radioCC;
	CameraTS* camSensor;
	DieControlLoop* dieControlLoop;
	unsigned char dieControlLoopMaxLoadIndexTableCPU[256];
	unsigned char dieControlLoopMaxLoadIndexTableGPU[256];

}
-(int)totalSensors;
-(bool)useTcalAdjust:(int)arg1 ;
-(void)createConnectionToCT:(long)arg1 ;
-(id)initProduct:(id)arg1 ;
-(unsigned long long)getPotentialForcedThermalLevel:(unsigned long long)arg1 ;
-(void)updateDecayStatus;
-(void)updateAllThermalLoad;
-(void)dealloc;
@end

