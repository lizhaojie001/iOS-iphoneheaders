/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:27:05 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


#import <SpringBoard/SpringBoard-Structs.h>
@class SBPolygon;

@interface SBTouchTemplate : NSObject {

	SBPolygon* m_template;
	SBPolygon* m_candidate;
	unsigned long long m_transformType;
	float m_acceptFactor;

}

@property (assign,nonatomic) unsigned long long transformType; 
@property (assign,nonatomic) float acceptFactor; 
@property (nonatomic,readonly) unsigned long long pointCount; 
-(BOOL)acceptPoints:(CGPoint*)arg1 count:(unsigned long long)arg2 ;
-(id)initWithPoints:(CGPoint*)arg1 count:(unsigned long long)arg2 ;
-(BOOL)acceptPolygon:(id)arg1 ;
-(unsigned long long)transformType;
-(void)setTransformType:(unsigned long long)arg1 ;
-(float)acceptFactor;
-(void)setAcceptFactor:(float)arg1 ;
-(void)dealloc;
-(unsigned long long)pointCount;
@end
