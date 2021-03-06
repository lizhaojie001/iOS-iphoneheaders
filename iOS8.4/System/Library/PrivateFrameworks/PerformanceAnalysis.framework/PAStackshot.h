/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:24:29 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/PerformanceAnalysis.framework/PerformanceAnalysis
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSData, PAMicrostackshotData;

@interface PAStackshot : NSObject {

	NSData* _traceBufData;
	double _machTimestamp;
	double _wallTimestamp;
	PAMicrostackshotData* _microstackshotData;

}

@property (readonly) double machTimestamp;                                   //@synthesize machTimestamp=_machTimestamp - In the implementation block
@property (readonly) double wallTimestamp;                                   //@synthesize wallTimestamp=_wallTimestamp - In the implementation block
@property (readonly) PAMicrostackshotData * microstackshotData;              //@synthesize microstackshotData=_microstackshotData - In the implementation block
@property (readonly) BOOL isMicrostackshot; 
-(void)dealloc;
-(id)initWithPid:(int)arg1 ;
-(PAMicrostackshotData *)microstackshotData;
-(BOOL)isMicrostackshot;
-(id)initWithTraceData:(id)arg1 machTimestamp:(double)arg2 wallTimestamp:(double)arg3 ;
-(void)iterateTasks:(/*^block*/id)arg1 ;
-(id)initWithGlobalTrace;
-(double)machTimestamp;
-(double)wallTimestamp;
@end

