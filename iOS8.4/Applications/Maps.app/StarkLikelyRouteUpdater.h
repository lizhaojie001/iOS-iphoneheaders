/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 7:09:39 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Maps/GEORouteHypothesizerDelegate.h>

@class NSHashTable, StarkSuggestion, GEORouteHypothesizer, GEORouteHypothesis, GEOURLRouteHandle, GEOComposedWaypoint, GEOETARoute, NSMutableArray, MNTraceRecorder, StarkRouteGeniusTestLogger, GEOComposedRoute, NSString, NSDate, NSArray;

@interface StarkLikelyRouteUpdater : NSObject <GEORouteHypothesizerDelegate> {

	NSHashTable* _observers;
	StarkSuggestion* _suggestion;
	GEORouteHypothesizer* _routeHypothesizer;
	GEORouteHypothesis* _lastHypothesis;
	GEOURLRouteHandle* _routeHandle;
	GEOComposedWaypoint* _source;
	GEOComposedWaypoint* _destination;
	double _remainingDistance;
	double _remainingTime;
	GEOETARoute* _etaRoute;
	NSMutableArray* _trafficIncidents;
	MNTraceRecorder* _traceRecorder;
	char _recordedInitialRoute;
	StarkRouteGeniusTestLogger* _testLogger;
	char _isForegroundRoute;
	char _isHighThermalPressureLevel;

}

@property (nonatomic,readonly) double score; 
@property (nonatomic,readonly) GEOComposedRoute * route; 
@property (nonatomic,readonly) StarkSuggestion * suggestion;                       //@synthesize suggestion=_suggestion - In the implementation block
@property (nonatomic,readonly) GEOURLRouteHandle * routeHandle;                    //@synthesize routeHandle=_routeHandle - In the implementation block
@property (nonatomic,readonly) NSString * name; 
@property (nonatomic,readonly) NSString * address; 
@property (nonatomic,readonly) double remainingDistance;                           //@synthesize remainingDistance=_remainingDistance - In the implementation block
@property (nonatomic,readonly) double remainingTime;                               //@synthesize remainingTime=_remainingTime - In the implementation block
@property (nonatomic,readonly) NSDate * etaFromLastLocation; 
@property (nonatomic,readonly) NSArray * trafficIncidents; 
@property (nonatomic,readonly) char isUsingUsualRoute; 
@property (nonatomic,retain) StarkRouteGeniusTestLogger * testLogger;              //@synthesize testLogger=_testLogger - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(double)remainingDistance;
-(StarkSuggestion *)suggestion;
-(id)initWithSuggestion:(id)arg1 traceRecorder:(id)arg2 ;
-(void)setIsForegroundRoute:(char)arg1 ;
-(void)updateThermalPressureLevel:(char)arg1 ;
-(StarkRouteGeniusTestLogger *)testLogger;
-(void)setTestLogger:(StarkRouteGeniusTestLogger *)arg1 ;
-(void)_updateETAUpdateFrequency;
-(void)_updateRemainingTimeAndDistanceWithRouteMatch:(id)arg1 ;
-(NSDate *)etaFromLastLocation;
-(char)isUsingUsualRoute;
-(NSString *)address;
-(NSString *)name;
-(void)removeObserver:(id)arg1 ;
-(void)addObserver:(id)arg1 ;
-(double)remainingTime;
-(GEOURLRouteHandle *)routeHandle;
-(void)routeHypothesizerArrived:(id)arg1 ;
-(void)routeHypothesizer:(id)arg1 matchedToRoute:(id)arg2 ;
-(void)routeHypothesizer:(id)arg1 willRequestNewRoute:(id)arg2 ;
-(void)routeHypothesizerRerouted:(id)arg1 request:(id)arg2 response:(id)arg3 ;
-(void)routeHypothesizer:(id)arg1 willSendETARequest:(id)arg2 ;
-(void)routeHypothesizer:(id)arg1 receivedETAResponse:(id)arg2 ;
-(void)routeHypothesizer:(id)arg1 receivedETAError:(id)arg2 ;
-(void)routeHypothesizerUpdatedETA:(id)arg1 etaRoute:(id)arg2 ;
-(double)score;
-(GEOComposedRoute *)route;
-(NSArray *)trafficIncidents;
-(void)updateLocation:(id)arg1 ;
@end

