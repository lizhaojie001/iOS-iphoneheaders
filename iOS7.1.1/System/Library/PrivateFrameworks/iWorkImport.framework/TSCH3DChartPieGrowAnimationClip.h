/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:26:25 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSCH3DChartSeparateCapGrowAnimationClip.h>

@interface TSCH3DChartPieGrowAnimationClip : TSCH3DChartSeparateCapGrowAnimationClip {

	bool mUseDiscard;

}

@property (assign,nonatomic) bool useDiscard; 
-(bool)useDiscard;
-(void)setUseDiscard:(bool)arg1 ;
-(id)clipPlaneEffect;
-(void)setupElementBodyForGrowState:(ChartGrowAnimationState*)arg1 info:(const ChartAnimationElementInfo*)arg2 ;
-(bool)setupElementCapForGrowState:(ChartGrowAnimationState*)arg1 info:(const ChartAnimationElementInfo*)arg2 ;
@end
