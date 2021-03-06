/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:35:30 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSCHChartValueAxis.h>

@interface TSCHChartStackedValueAxis : TSCHChartValueAxis
-(double)interceptForAxis:(id)arg1 ;
-(double)doubleModelToAxisValue:(double)arg1 forSeries:(id)arg2 ;
-(void)updateGridValueTypeInterceptInAnalysis:(id)arg1 ;
-(double)doubleAxisToModelValue:(double)arg1 ;
-(void)updateModelMinMaxInAnalysis:(id)arg1 ;
-(double)unitSpaceValueForSeries:(id)arg1 index:(unsigned long long)arg2 min:(double)arg3 max:(double)arg4 ;
-(double*)unitSpaceValuesForSeries:(id)arg1 indexes:(NSRange)arg2 min:(double)arg3 max:(double)arg4 ;
-(id)p_orthogonalAxisForSeries:(id)arg1 ;
@end

