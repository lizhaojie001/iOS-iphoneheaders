/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:21:14 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <StoreServices/StoreServices-Structs.h>
#import <StoreServices/SSXPCCoding.h>
#import <StoreServices/NSCopying.h>

@protocol OS_dispatch_queue;
@class NSObject, NSMutableArray, NSString;

@interface SSOperationProgress : NSObject <SSXPCCoding, NSCopying> {

	char _canPause;
	double _changeRate;
	long long _currentValue;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	double _estimatedTimeRemaining;
	long long _maxValue;
	long long _normalizedCurrentValue;
	long long _normalizedMaxValue;
	int _operationType;
	NSMutableArray* _snapshotTimes;
	NSMutableArray* _snapshotValues;
	int _units;

}

@property (assign) char canPause; 
@property (assign) int operationType; 
@property (assign) double changeRate; 
@property (assign) long long currentValue; 
@property (assign) double estimatedTimeRemaining; 
@property (assign) long long maxValue; 
@property (assign) int units; 
@property (assign) long long normalizedCurrentValue; 
@property (assign) long long normalizedMaxValue; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setCurrentValue:(long long)arg1 ;
-(long long)maxValue;
-(void)dealloc;
-(id)init;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)snapshot;
-(void)setMaxValue:(long long)arg1 ;
-(id)initWithXPCEncoding:(id)arg1 ;
-(id)copyXPCEncoding;
-(int)units;
-(void)setUnits:(int)arg1 ;
-(void)setOperationType:(int)arg1 ;
-(int)operationType;
-(void)setNormalizedCurrentValue:(long long)arg1 ;
-(void)setNormalizedMaxValue:(long long)arg1 ;
-(long long)normalizedCurrentValue;
-(long long)normalizedMaxValue;
-(double)estimatedTimeRemaining;
-(double)changeRate;
-(void)_updateStatisticsFromSnapshots;
-(void)resetSnapshots;
-(void)setChangeRate:(double)arg1 ;
-(void)setEstimatedTimeRemaining:(double)arg1 ;
-(long long)currentValue;
-(char)canPause;
-(void)setCanPause:(char)arg1 ;
@end

