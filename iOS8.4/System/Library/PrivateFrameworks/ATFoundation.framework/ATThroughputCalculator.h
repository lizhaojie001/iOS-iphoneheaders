/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:20:24 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/ATFoundation.framework/ATFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class ATMovingAverage;

@interface ATThroughputCalculator : NSObject {

	BOOL _suspended;
	double _lastUpdate;
	double _startTime;
	double _currentValue;
	ATMovingAverage* _average;

}

@property (nonatomic,readonly) double throughput; 
-(id)init;
-(void)suspend;
-(void)resume;
-(BOOL)update:(double)arg1 ;
-(double)throughput;
@end

