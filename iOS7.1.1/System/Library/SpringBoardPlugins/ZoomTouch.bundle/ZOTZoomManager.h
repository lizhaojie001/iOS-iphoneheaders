/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:27:09 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/SpringBoardPlugins/ZoomTouch.bundle/ZoomTouch
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <ZoomTouch/ZoomTouch-Structs.h>
@class CALayer, CAContext, NSTimer, AXTimer;

@interface ZOTZoomManager : NSObject {

	CALayer* _rootLayer;
	CAContext* _ctx;
	CGRect _zoomFrame;
	double _zoomLevel;
	double _storedZoomLevel;
	CGRect _zoomFrameStart;
	CGPoint _zoomFingerStartPosition;
	bool _isMovingWithVelocity;
	NSTimer* _movementTimer;
	double _velocity;
	CGPoint _distanceAvailable;
	CGRect _lastMovementFrame;
	bool _usingRelativePushPanning;
	double _lastUpdateVelocityTime;
	bool _careBorderX;
	bool _careBorderY;
	bool _currentlyZoomed;
	id _threadKey;
	AXTimer* _zoomLevelUpdaterTimer;
	bool _isBlockingShowNotifications;
	bool _isBlockingControlCenter;
	bool usingRelativePushPanning;

}

@property (assign,nonatomic) bool usingRelativePushPanning; 
+(CGRect)frameForZoomLevel:(double)arg1 startingFrame:(CGRect)arg2 ;
+(void)initialize;
-(double)_calculateDurationForVelocity:(double)arg1 ;
-(void)restoreZoomAtLocation:(CGPoint)arg1 duration:(double)arg2 ;
-(void)setUsingRelativePushPanning:(bool)arg1 ;
-(void)_zoomMovementHeartbeat;
-(void)_zoomListenerRegistered:(id)arg1 ;
-(CGPoint)_calculateDistanceForAngle:(double)arg1 ;
-(void)setZoomLocation:(CGPoint)arg1 duration:(double)arg2 ;
-(void)zoomToMinimumWithDuration:(double)arg1 ;
-(void)updateStoredZoomeLevel;
-(void)updateZoomMovementWithPoint:(CGPoint)arg1 ;
-(void)_zoomMovementHeartbeat:(double)arg1 ;
-(void)stopZoomMovementWithVelocity;
-(void)_initializeZoomView;
-(bool)usingRelativePushPanning;
-(void)snapZoomInDirection:(long long)arg1 ;
-(bool)isZoomMovingWithVelocity;
-(void)translateEventForZoomState:(id)arg1 ;
-(void)setZoomLevel:(double)arg1 duration:(double)arg2 ;
-(void)endZoomMovement;
-(bool)currentlyZoomed;
-(double)storedZoomLevel;
-(CGRect)zoomFrame;
-(void)blockNotificationCenterGestureIfNeeded;
-(void)blockControlCenterGestureIfNeeded;
-(bool)autopanWithEvent:(id)arg1 initialSingleFingerLocation:(CGPoint)arg2 ;
-(bool)autopanShouldStartWithEvent:(id)arg1 speedFactor:(double*)arg2 initialSingleFingerLocation:(CGPoint)arg3 ;
-(void)_setZoomLevel:(double)arg1 location:(CGPoint*)arg2 zoomed:(bool*)arg3 duration:(double)arg4 ;
-(CGRect)_constrainedFrameWithFrame:(CGRect)arg1 didHitBorderY:(bool*)arg2 didHitBorderX:(bool*)arg3 ;
-(void)_setZoomLayerPositionWithFrame:(CGRect)arg1 didHitBorderY:(bool*)arg2 didHitBorderX:(bool*)arg3 duration:(double)arg4 ;
-(bool)shouldBlockShowControlCenterGesture;
-(bool)shouldBlockShowNotificationGesture;
-(void)setZoomLevel:(double)arg1 location:(CGPoint)arg2 zoomed:(bool)arg3 duration:(double)arg4 ;
-(void)continueZoomMovementWithVelocity:(double)arg1 angle:(double)arg2 ;
-(CGPoint)zoomLocation;
-(id)init;
-(void)setZoomEnabled:(bool)arg1 ;
-(void)update;
-(double)zoomLevel;
@end

