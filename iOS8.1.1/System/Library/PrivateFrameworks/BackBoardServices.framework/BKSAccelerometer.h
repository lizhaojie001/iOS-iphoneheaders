/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:30:36 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/BackBoardServices.framework/BackBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol BKSAccelerometerDelegate;
#import <BackBoardServices/BackBoardServices-Structs.h>
@class NSLock, NSThread;

@interface BKSAccelerometer : NSObject {

	id<BKSAccelerometerDelegate> _delegate;
	CFRunLoopSourceRef _accelerometerEventsSource;
	CFRunLoopRef _accelerometerEventsRunLoop;
	double _interval;
	NSLock* _lock;
	int _orientationCheckToken;
	int _orientationNotificationsToken;
	NSThread* _orientationEventsThread;
	unsigned _orientationPort;
	BOOL _passiveOrientationEvents;
	BOOL _orientationEventsEnabled;
	float _xThreshold;
	float _yThreshold;
	float _zThreshold;
	double _updateInterval;

}

@property (assign,nonatomic) BOOL accelerometerEventsEnabled; 
@property (assign,nonatomic) double updateInterval;                              //@synthesize updateInterval=_updateInterval - In the implementation block
@property (assign,nonatomic) float xThreshold;                                   //@synthesize xThreshold=_xThreshold - In the implementation block
@property (assign,nonatomic) float yThreshold;                                   //@synthesize yThreshold=_yThreshold - In the implementation block
@property (assign,nonatomic) float zThreshold;                                   //@synthesize zThreshold=_zThreshold - In the implementation block
@property (assign,nonatomic) BOOL passiveOrientationEvents;                      //@synthesize passiveOrientationEvents=_passiveOrientationEvents - In the implementation block
@property (assign,nonatomic) BOOL orientationEventsEnabled;                      //@synthesize orientationEventsEnabled=_orientationEventsEnabled - In the implementation block
@property (assign,nonatomic) id<BKSAccelerometerDelegate> delegate; 
-(void)dealloc;
-(void)setDelegate:(id<BKSAccelerometerDelegate>)arg1 ;
-(id)init;
-(id<BKSAccelerometerDelegate>)delegate;
-(void)setAccelerometerEventsEnabled:(BOOL)arg1 ;
-(BOOL)accelerometerEventsEnabled;
-(double)updateInterval;
-(void)setUpdateInterval:(double)arg1 ;
-(void)setXThreshold:(float)arg1 ;
-(void)setYThreshold:(float)arg1 ;
-(void)setZThreshold:(float)arg1 ;
-(void)_checkIn;
-(void)_checkOut;
-(void)_updateOrientationServer;
-(void)_orientationDidChange;
-(void)_serverWasRestarted;
-(void)setPassiveOrientationEvents:(BOOL)arg1 ;
-(id)_orientationEventsThread;
-(BOOL)passiveOrientationEvents;
-(void)setOrientationEventsEnabled:(BOOL)arg1 ;
-(int)currentDeviceOrientation;
-(float)xThreshold;
-(float)yThreshold;
-(float)zThreshold;
-(BOOL)orientationEventsEnabled;
@end

