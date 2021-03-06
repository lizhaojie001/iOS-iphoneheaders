/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, June 24, 2015 at 10:56:25 PM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <MapKit/MapKit-Structs.h>
@class NSHashTable;

@interface MKAmbientLightMonitor : NSObject {

	NSHashTable* _observers;
	char _monitoring;
	int _ambientLightLevel;
	char _debugLogLux;
	IOHIDEventSystemClientRef _client;
	deque<float, std::__1::allocator<float> >* _runningStatBuffer;
	float _runningStatSum;
	float _lightLevelNoneThreshold;
	float _lightLevelLowThreshold;
	float _lightLevelMediumThreshold;
	unsigned _runningStatSize;

}

@property (getter=isMonitoring,nonatomic,readonly) char monitoring;              //@synthesize monitoring=_monitoring - In the implementation block
@property (nonatomic,readonly) int ambientLightLevel;                            //@synthesize ambientLightLevel=_ambientLightLevel - In the implementation block
@property (assign,nonatomic) char debugLogLux;                                   //@synthesize debugLogLux=_debugLogLux - In the implementation block
+(id)sharedAmbientLightMonitor;
-(char)isMonitoring;
-(void)handleIOHIDEvent:(IOHIDEventRef)arg1 ;
-(void)_updateThresholds;
-(void)_startMonitoring;
-(void)_stopMonitoring;
-(float)_addSampleAndComputeMean:(const float*)arg1 ;
-(void)startMonitoringWithObserver:(id)arg1 ;
-(void)stopMonitoringWithObserver:(id)arg1 ;
-(int)ambientLightLevel;
-(char)debugLogLux;
-(void)setDebugLogLux:(char)arg1 ;
-(void)dealloc;
-(id)init;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
@end

