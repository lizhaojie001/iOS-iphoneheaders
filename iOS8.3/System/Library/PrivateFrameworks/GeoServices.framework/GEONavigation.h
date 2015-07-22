/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 1:51:53 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_xpc_object, GEONavigationDelegate;
@class GEONavigationDetails, NSObject, NSXPCConnection, NSLock, NSData, GEOComposedRoute, NSString, GEOLocation, GEORouteMatch;

@interface GEONavigation : NSObject {

	GEONavigationDetails* _details;
	NSObject*<OS_xpc_object> _geodConnection;
	NSXPCConnection* _nanomapscdConnection;
	NSLock* _connectionLock;
	int _navigationStartedToken;
	char _hasNavigationStartedToken;
	char _shouldSendRouteWithStatus;
	NSData* _lastSentRouteContext;
	id<GEONavigationDelegate> _delegate;

}

@property (nonatomic,readonly) GEOComposedRoute * route; 
@property (nonatomic,readonly) NSString * destinationName; 
@property (nonatomic,readonly) GEOLocation * location; 
@property (nonatomic,readonly) GEORouteMatch * routeMatch; 
@property (nonatomic,readonly) double distanceToManeuverStart; 
@property (nonatomic,readonly) double distanceToManeuverEnd; 
@property (nonatomic,readonly) double distanceToRoute; 
@property (nonatomic,readonly) double distanceRemainingOnRoute; 
@property (nonatomic,readonly) double remainingTime; 
@property (nonatomic,readonly) char isNavigating; 
@property (nonatomic,readonly) char locationUnreliable; 
@property (assign,nonatomic) int navigationTransportType; 
@property (assign,nonatomic) int navigationState; 
@property (assign,nonatomic) unsigned announcementStage; 
@property (nonatomic,readonly) unsigned nextAnnouncementStage; 
@property (nonatomic,readonly) double timeUntilNextAnnouncement; 
@property (assign,nonatomic) id<GEONavigationDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(id)sharedInstance;
-(NSString *)destinationName;
-(void)dealloc;
-(void)setDelegate:(id<GEONavigationDelegate>)arg1 ;
-(id)init;
-(id<GEONavigationDelegate>)delegate;
-(GEOLocation *)location;
-(void)_closeGeodConnection;
-(void)_closeNanomapscdConnection;
-(void)_updateNavigationRouteStatus;
-(void)_updateNavigationRouteDetails:(id)arg1 routeStatus:(id)arg2 routeContext:(id)arg3 ;
-(void)_createGeodConnection;
-(void)_sendMessage:(id)arg1 data:(id)arg2 ;
-(void)_createNanomapscdConnection;
-(void)_invalidateNavigationSessionWithRouteContext:(id)arg1 ;
-(void)updateLocation:(id)arg1 routeMatch:(id)arg2 etaRoute:(id)arg3 locationUnreliable:(char)arg4 ;
-(void)setRoute:(id)arg1 toDestinationName:(id)arg2 ;
-(double)distanceToManeuverStart;
-(double)distanceToManeuverEnd;
-(double)distanceToRoute;
-(double)distanceRemainingOnRoute;
-(double)remainingTime;
-(int)navigationState;
-(char)locationUnreliable;
-(void)setNavigationState:(int)arg1 ;
-(int)navigationTransportType;
-(unsigned)announcementStage;
-(void)setAnnouncementStage:(unsigned)arg1 ;
-(void)_setNeedsNavigationStatusUpdate;
-(unsigned)nextAnnouncementStage;
-(void)setNextAnnouncementStage:(unsigned)arg1 andTime:(double)arg2 ;
-(double)timeUntilNextAnnouncement;
-(void)recalculatedToRoute:(id)arg1 location:(id)arg2 routeMatch:(id)arg3 ;
-(void)updatedETA:(id)arg1 ;
-(void)clearRoute;
-(char)isNavigating;
-(void)setNavigationTransportType:(int)arg1 ;
-(void)startNavigationForTransportType:(int)arg1 state:(int)arg2 ;
-(void)endNavigation;
-(GEOComposedRoute *)route;
-(GEORouteMatch *)routeMatch;
@end
