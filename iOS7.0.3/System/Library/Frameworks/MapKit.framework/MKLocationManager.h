/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:52:41 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <MapKit/MapKit-Structs.h>
#import <MapKit/_MKWiFiObserverDelegate.h>
#import <MapKit/MKLocationProviderDelegate.h>

@protocol MKLocationProvider, MKLocationRecorder;
@class NSHashTable, CLLocation, NSTimer, GEOLocationShifter, CLHeading, _MKWiFiObserver, GEOLocation, NSBundle, NSString;

@interface MKLocationManager : NSObject <_MKWiFiObserverDelegate, MKLocationProviderDelegate> {

	<MKLocationProvider>* _locationProvider;
	NSHashTable* _locationObservers;
	NSHashTable* _locationListeners;
	NSHashTable* _regionMonitors;
	NSHashTable* _headingObservers;
	CLLocation* _lastLocation;
	double _lastLocationUpdateTime;
	BOOL _isLastLocationStale;
	BOOL _lastLocationPushed;
	BOOL _trackingLocation;
	BOOL _trackingHeading;
	<MKLocationRecorder>* _locationRecorder;
	double _applicationResumeTime;
	double _applicationSuspendTime;
	double _headingUpdateTime;
	double _locationAccuracyUpdateTime;
	BOOL _allowUpdateCoalescing;
	NSTimer* _coalesceTimer;
	double _lastLocationReportTime;
	GEOLocationShifter* _locationShifter;
	CLHeading* _throttledHeading;
	CLHeading* _heading;
	/*^block*/ id _networkActivity;
	BOOL _enabled;
	BOOL _useCourseForHeading;
	BOOL _logStartStopLocationUpdates;
	int _consecutiveOutOfCourseCount;
	double _navCourse;
	/*^block*/ id _locationCorrector;
	SCPreferencesRef _airplaneModePrefs;
	BOOL _airplaneModeEnabledIsValid;
	BOOL _airplaneModeEnabled;
	BOOL _continuedAfterBecomingInactive;
	BOOL _suspended;
	_MKWiFiObserver* _wifiObserver;
	BOOL _continuesWhileInactive;

}

@property (nonatomic,retain) <MKLocationProvider> * locationProvider; 
@property (nonatomic,copy) id locationCorrector;                                                                                           //@synthesize locationCorrector=_locationCorrector - In the implementation block
@property (assign,nonatomic) BOOL logStartStopLocationUpdates;                                                                             //@synthesize logStartStopLocationUpdates=_logStartStopLocationUpdates - In the implementation block
@property (assign,getter=isEnabled,nonatomic) BOOL enabled;                                                                                //@synthesize enabled=_enabled - In the implementation block
@property (getter=isLocationServicesAuthorizationNeeded,nonatomic,readonly) BOOL locationServicesAuthorizationNeeded; 
@property (nonatomic,readonly) BOOL isLocationServicesAvailable; 
@property (nonatomic,readonly) BOOL isLocationServicesPossiblyAvailable; 
@property (nonatomic,readonly) BOOL isLocationServicesEnabled; 
@property (nonatomic,readonly) BOOL isLocationServicesApproved; 
@property (nonatomic,readonly) BOOL isLocationServicesDenied; 
@property (nonatomic,readonly) BOOL isLocationServicesRestricted; 
@property (nonatomic,readonly) BOOL isHeadingServicesAvailable; 
@property (nonatomic,readonly) BOOL isAirplaneModeBlockingLocation; 
@property (nonatomic,readonly) BOOL isWiFiEnabled; 
@property (assign,getter=isLocationServicesPreferencesDialogEnabled,nonatomic) BOOL locationServicesPreferencesDialogEnabled; 
@property (nonatomic,readonly) double headingUpdateTimeInterval; 
@property (nonatomic,readonly) GEOLocation * currentLocation; 
@property (nonatomic,readonly) GEOLocation * gridSnappedCurrentLocation; 
@property (nonatomic,readonly) GEOLocation * courseCorrectedLocation; 
@property (assign,nonatomic) int headingOrientation; 
@property (nonatomic,readonly) BOOL locationShiftEnabled; 
@property (nonatomic,readonly) BOOL hasLocation; 
@property (nonatomic,readonly) CLLocation * lastLocation; 
@property (nonatomic,readonly) BOOL isLastLocationStale;                                                                                   //@synthesize isLastLocationStale=_isLastLocationStale - In the implementation block
@property (nonatomic,readonly) int lastLocationSource; 
@property (assign,nonatomic) double desiredAccuracy; 
@property (assign,nonatomic) double distanceFilter; 
@property (assign,nonatomic) int activityType; 
@property (nonatomic,readonly) double expectedGpsUpdateInterval; 
@property (nonatomic,retain) NSBundle * effectiveBundle; 
@property (nonatomic,copy) NSString * effectiveBundleIdentifier; 
@property (assign,nonatomic) BOOL allowUpdateCoalescing;                                                                                   //@synthesize allowUpdateCoalescing=_allowUpdateCoalescing - In the implementation block
@property (assign,nonatomic) BOOL useCourseForHeading;                                                                                     //@synthesize useCourseForHeading=_useCourseForHeading - In the implementation block
@property (nonatomic,readonly) CLHeading * heading;                                                                                        //@synthesize heading=_heading - In the implementation block
@property (nonatomic,retain) CLHeading * throttledHeading;                                                                                 //@synthesize throttledHeading=_throttledHeading - In the implementation block
@property (nonatomic,copy) id networkActivity;                                                                                             //@synthesize networkActivity=_networkActivity - In the implementation block
@property (nonatomic,retain) <MKLocationRecorder> * locationRecorder;                                                                      //@synthesize locationRecorder=_locationRecorder - In the implementation block
@property (nonatomic,readonly) double navigationCourse;                                                                                    //@synthesize navCourse=_navCourse - In the implementation block
@property (assign,nonatomic) BOOL continuesWhileInactive;                                                                                  //@synthesize continuesWhileInactive=_continuesWhileInactive - In the implementation block
@property (getter=wasLastLocationPushed,nonatomic,readonly) BOOL lastLocationPushed;                                                       //@synthesize lastLocationPushed=_lastLocationPushed - In the implementation block
+(void)setCanMonitorWiFiStatus:(BOOL)arg1 ;
+(id)sharedLocationManager;
-(id)currentLocation;
-(double)distanceFilter;
-(double)desiredAccuracy;
-(double)expectedGpsUpdateInterval;
-(int)headingOrientation;
-(void)dismissHeadingCalibrationDisplay;
-(BOOL)isLocationServicesPreferencesDialogEnabled;
-(void)setLocationServicesPreferencesDialogEnabled:(BOOL)arg1 ;
-(void)stopHeadingUpdateWithObserver:(id)arg1 ;
-(void)stopLocationUpdateWithObserver:(id)arg1 ;
-(BOOL)isHeadingServicesAvailable;
-(void)startLocationUpdateWithObserver:(id)arg1 ;
-(BOOL)useCourseForHeading;
-(int)lastLocationSource;
-(void)startHeadingUpdateWithObserver:(id)arg1 ;
-(double)headingUpdateTimeInterval;
-(id)throttledHeading;
-(void)setThrottledHeading:(id)arg1 ;
-(void)locationProvider:(id)arg1 didUpdateLocation:(id)arg2 ;
-(void)locationProvider:(id)arg1 didUpdateHeading:(id)arg2 ;
-(void)locationProvider:(id)arg1 didReceiveError:(id)arg2 ;
-(void)locationProviderDidChangeAuthorizationStatus:(id)arg1 ;
-(BOOL)locationProviderShouldPauseLocationUpdates:(id)arg1 ;
-(void)locationProviderDidPauseLocationUpdates:(id)arg1 ;
-(void)locationProviderDidResumeLocationUpdates:(id)arg1 ;
-(void)locationProvider:(id)arg1 didEnterRegion:(id)arg2 ;
-(void)locationProvider:(id)arg1 didExitRegion:(id)arg2 ;
-(void)locationProvider:(id)arg1 didReceiveError:(id)arg2 monitoringRegion:(id)arg3 ;
-(id)effectiveBundleIdentifier;
-(void)setEffectiveBundleIdentifier:(id)arg1 ;
-(BOOL)isMonitoringRegionsAvailable;
-(void)setLocationProvider:(id)arg1 ;
-(void)_useCoreLocationProvider;
-(void)_refreshAirplaneMode;
-(void)setLocationRecorder:(id)arg1 ;
-(id)locationProvider;
-(BOOL)isLocationServicesApproved;
-(BOOL)isAirplaneModeBlockingLocation;
-(BOOL)isLocationServicesDenied;
-(BOOL)isLocationServicesRestricted;
-(BOOL)isLocationServicesAvailable;
-(void)_syncLocationProviderWithTracking;
-(void)_reportHeadingSuccess;
-(BOOL)_isTimeToResetOnResume;
-(void)resetAfterResumeIfNecessary;
-(void)_suspend;
-(BOOL)continuesWhileInactive;
-(void)_reportLocationStatus:(SEL)arg1 ;
-(void)_reportLocationReset;
-(BOOL)isLocationServicesPossiblyAvailable;
-(BOOL)isLocationServicesEnabled;
-(BOOL)shouldCoalesceUpdates;
-(void)reportCoalescedUpdated;
-(void)setCoalesceTimer:(id)arg1 ;
-(void)_stopCoalescingUpdates;
-(void)_reportLocationSuccess;
-(void)locationProvider:(id)arg1 didUpdateLocation:(id)arg2 lastKnownNavCourse:(double)arg3 ;
-(void)_locationProvider:(id)arg1 didUpdateLocation:(id)arg2 lastKnownNavCourse:(double)arg3 ;
-(BOOL)shouldStartCoalescingLocation:(id)arg1 ;
-(void)_startCoalescingUpdates:(int)arg1 ;
-(BOOL)shouldStopCoalescingLocation:(id)arg1 ;
-(void)dampenGPSLocationAccuracy:(id*)arg1 oldLocationSource:(int)arg2 ;
-(id)locationRecorder;
-(void)_reportLocationFailureWithError:(id)arg1 ;
-(void)_setTrackingLocation:(BOOL)arg1 ;
-(BOOL)isLocationServicesPossiblyAvailable:(id*)arg1 ;
-(void)_setTrackingHeading:(BOOL)arg1 ;
-(void)wiFiObserverDidChangeEnabled:(id)arg1 ;
-(void)setLocationCorrector:(/*^block*/ id)arg1 ;
-(BOOL)isLocationServicesAuthorizationNeeded;
-(void)_airplaneModeChanged;
-(id)gridSnappedCurrentLocation;
-(id)courseCorrectedLocation;
-(void)setContinuesWhileInactive:(BOOL)arg1 ;
-(void)_reportHeadingFailureWithError:(id)arg1 ;
-(void)setAllowUpdateCoalescing:(BOOL)arg1 ;
-(void)pushLocation:(id)arg1 ;
-(void)listenForLocationUpdates:(id)arg1 ;
-(void)startMonitoringRegion:(id)arg1 observer:(id)arg2 ;
-(void)stopMonitoringRegion:(id)arg1 observer:(id)arg2 ;
-(id)singleLocationUpdateWithHandler:(/*^block*/ id)arg1 ;
-(BOOL)isLastLocationStale;
-(/*^block*/ id)networkActivity;
-(void)setNetworkActivity:(/*^block*/ id)arg1 ;
-(void)setUseCourseForHeading:(BOOL)arg1 ;
-(double)navigationCourse;
-(/*^block*/ id)locationCorrector;
-(BOOL)wasLastLocationPushed;
-(BOOL)allowUpdateCoalescing;
-(BOOL)logStartStopLocationUpdates;
-(void)setLogStartStopLocationUpdates:(BOOL)arg1 ;
-(void)setEffectiveBundle:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(void)applicationDidBecomeActive:(id)arg1 ;
-(void)applicationWillResignActive:(id)arg1 ;
-(BOOL)isEnabled;
-(void)setEnabled:(BOOL)arg1 ;
-(id)effectiveBundle;
-(void)reset;
-(int)activityType;
-(BOOL)isWiFiEnabled;
-(void)setHeading:(id)arg1 ;
-(BOOL)locationShiftEnabled;
-(void)setDistanceFilter:(double)arg1 ;
-(void)setDesiredAccuracy:(double)arg1 ;
-(void)setHeadingOrientation:(int)arg1 ;
-(void)setLastLocation:(id)arg1 ;
-(id)lastLocation;
-(BOOL)hasLocation;
-(id)heading;
-(void)setActivityType:(int)arg1 ;
@end

