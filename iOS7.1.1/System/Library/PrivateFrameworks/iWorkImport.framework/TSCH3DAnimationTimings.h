/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:26:25 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSCH3DAnimationTiming.h>

@class NSMutableArray;

@interface TSCH3DAnimationTimings : TSCH3DAnimationTiming {

	NSMutableArray* mTimings;

}
+(id)timings;
-(void)addTiming:(id)arg1 ;
-(void)evaluate:(float)arg1 context:(id)arg2 ;
-(void)addTiming:(id)arg1 range:(const box<glm::detail::tvec1<float> >*)arg2 ;
-(void)dealloc;
-(id)init;
-(id)description;
-(void)clear;
@end

