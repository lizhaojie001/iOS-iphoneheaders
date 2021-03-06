/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:25:43 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <VectorKit/VectorKit-Structs.h>
@class VKPolylineOverlay, VKPolylineOverlaySection;

@interface VKPolylinePath : NSObject {

	VKPolylineOverlay* _overlay;
	VKPolylineOverlaySection* _section;
	Vec2Imp<float>* _points;
	unsigned _pointCount;
	bool _ownsPoints;
	PolylineCoordinate _routeStart;
	PolylineCoordinate _routeEnd;
	BOOL _trafficSpeed;

}

@property (nonatomic,readonly) Vec2Imp<float>* points;                          //@synthesize points=_points - In the implementation block
@property (nonatomic,readonly) unsigned pointCount;                             //@synthesize pointCount=_pointCount - In the implementation block
@property (assign,nonatomic) PolylineCoordinate routeStart;                     //@synthesize routeStart=_routeStart - In the implementation block
@property (assign,nonatomic) PolylineCoordinate routeEnd;                       //@synthesize routeEnd=_routeEnd - In the implementation block
@property (readonly) bool hasCompletedMapMatching; 
@property (readonly) bool isMapMatched; 
@property (nonatomic,readonly) VKPolylineOverlaySection * section;              //@synthesize section=_section - In the implementation block
@property (assign,nonatomic) BOOL trafficSpeed;                                 //@synthesize trafficSpeed=_trafficSpeed - In the implementation block
-(void)dealloc;
-(id)description;
-(id)section;
-(id).cxx_construct;
-(unsigned)pointCount;
-(Vec2Imp<float>*)points;
-(BOOL)trafficSpeed;
-(void)setTrafficSpeed:(BOOL)arg1 ;
-(id)initWithOverlay:(id)arg1 section:(id)arg2 ;
-(void)assignTo:(id)arg1 withSegment:(const TrafficSegment*)arg2 ;
-(void)setRouteStart:(PolylineCoordinate)arg1 ;
-(void)setRouteEnd:(PolylineCoordinate)arg1 ;
-(PolylineCoordinate)pathIndexFromRouteIndex:(PolylineCoordinate)arg1 ;
-(Vec2Imp<float>)interpolateAt:(const PolylineCoordinate*)arg1 ;
-(void)assignPoints:(Vec2Imp<float>*)arg1 count:(unsigned)arg2 ;
-(id)initWithOverlay:(id)arg1 section:(id)arg2 routeStartIndex:(unsigned)arg3 routeEndIndex:(unsigned)arg4 ;
-(bool)hasCompletedMapMatching;
-(bool)isMapMatched;
-(void)splitTrafficSegmentationAndAddTo:(id)arg1 with:(id)arg2 ;
-(PolylineCoordinate)routeStart;
-(PolylineCoordinate)routeEnd;
@end

