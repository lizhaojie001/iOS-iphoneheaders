/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:58:14 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


@class NSString;

@interface VKDebugSettings : NSObject {

	BOOL _paintMapTiles;
	BOOL _paintRoadBoundaries;
	BOOL _paintRoadTiles;
	BOOL _paintPointTiles;
	BOOL _paintPolygonTiles;
	BOOL _paintVertices;
	BOOL _paintJunctions;
	BOOL _paintCoastlines;
	BOOL _paintBuildingNormals;
	BOOL _disableRoute;
	BOOL _labelHighlighting;
	BOOL _labelCollisionEnabled;
	BOOL _paintRouteDebugMarkers;
	BOOL _dontMatchRouteLine;
	BOOL _dontMapMatchToSnappedRouteLine;
	BOOL _highlightUnmatchedRouteLine;
	BOOL _paintRoadSigns;
	BOOL _paintLabelBounds;
	BOOL _paintLabelRoadFeatures;
	BOOL _paintLabelCounts;
	BOOL _roadFattening;
	BOOL _hideDirectionalArrows;
	BOOL _paintTrafficSkeleton;
	BOOL _loadGreenTraffic;
	BOOL _paintRoadsStitchedByName;
	BOOL _realisticWireframeEnabled;
	BOOL _altitudePauseLoading;
	BOOL _altitudeShowTileBounds;
	BOOL _altitudeHighResSatellite;
	BOOL _altitudeMipmapSatellite;
	BOOL _altitudeMipmapFlyover;
	BOOL _altitudeShowNightLight;
	BOOL _altitudeNoTiltLimit;
	float _altitudeLodScale;
	float _altitudeAnimationSpinTime;
	float _altitudeTileQualityThreshold;
	float _altitudeForceGridTime;
	BOOL _altitudeProfilingEnabled;
	unsigned _altitudeProfilingType;
	unsigned _altitudeProfilingZones;
	NSString* _altitudeTelemetryURL;
	BOOL _dynamicMapModesEnabled;
	BOOL _isInstalledInLockScreen;
	BOOL _enableLoggingInLockScreen;
	BOOL _useBuildingShadowTexture;
	BOOL _drawContinuously;
	BOOL _layoutContinuously;
	BOOL _useOldLabels;
	BOOL _useTransactionManager;
	float _tourAnimationAltitude;
	float _tourAnimationStepDuration;
	float _tourAnimationCameraOffset;
	float _tourAnimationTilt;
	BOOL _trackingCameraAutoPitch;
	BOOL _debugStyleAnimations;
	BOOL _renderInSeparateThread;
	BOOL _forceHiResBuildings;
	BOOL _forceDepthDependentBuildings;
	BOOL _readLandmarksFromDisk;
	BOOL _paintPoiTiles;
	BOOL _useStaticTrafficFeed;
	BOOL _disableStylesheetAnimations;

}

@property (assign,nonatomic) BOOL paintMapTiles;                               //@synthesize paintMapTiles=_paintMapTiles - In the implementation block
@property (assign,nonatomic) BOOL paintRoadBoundaries;                         //@synthesize paintRoadBoundaries=_paintRoadBoundaries - In the implementation block
@property (assign,nonatomic) BOOL paintRoadTiles;                              //@synthesize paintRoadTiles=_paintRoadTiles - In the implementation block
@property (assign,nonatomic) BOOL paintPoiTiles;                               //@synthesize paintPoiTiles=_paintPoiTiles - In the implementation block
@property (assign,nonatomic) BOOL paintPointTiles;                             //@synthesize paintPointTiles=_paintPointTiles - In the implementation block
@property (assign,nonatomic) BOOL paintPolygonTiles;                           //@synthesize paintPolygonTiles=_paintPolygonTiles - In the implementation block
@property (assign,nonatomic) BOOL paintVertices;                               //@synthesize paintVertices=_paintVertices - In the implementation block
@property (assign,nonatomic) BOOL paintJunctions;                              //@synthesize paintJunctions=_paintJunctions - In the implementation block
@property (assign,nonatomic) BOOL paintCoastlines;                             //@synthesize paintCoastlines=_paintCoastlines - In the implementation block
@property (assign,nonatomic) BOOL paintBuildingNormals;                        //@synthesize paintBuildingNormals=_paintBuildingNormals - In the implementation block
@property (assign,nonatomic) BOOL disableRoute;                                //@synthesize disableRoute=_disableRoute - In the implementation block
@property (assign,nonatomic) BOOL labelHighlighting;                           //@synthesize labelHighlighting=_labelHighlighting - In the implementation block
@property (assign,nonatomic) BOOL labelCollisionEnabled;                       //@synthesize labelCollisionEnabled=_labelCollisionEnabled - In the implementation block
@property (assign,nonatomic) BOOL paintRouteDebugMarkers;                      //@synthesize paintRouteDebugMarkers=_paintRouteDebugMarkers - In the implementation block
@property (assign,nonatomic) BOOL dontMatchRouteLine;                          //@synthesize dontMatchRouteLine=_dontMatchRouteLine - In the implementation block
@property (assign,nonatomic) BOOL dontMapMatchToSnappedRouteLine;              //@synthesize dontMapMatchToSnappedRouteLine=_dontMapMatchToSnappedRouteLine - In the implementation block
@property (assign,nonatomic) BOOL highlightUnmatchedRouteLine;                 //@synthesize highlightUnmatchedRouteLine=_highlightUnmatchedRouteLine - In the implementation block
@property (assign,nonatomic) BOOL paintRoadSigns;                              //@synthesize paintRoadSigns=_paintRoadSigns - In the implementation block
@property (assign,nonatomic) BOOL paintLabelBounds;                            //@synthesize paintLabelBounds=_paintLabelBounds - In the implementation block
@property (assign,nonatomic) BOOL paintLabelRoadFeatures;                      //@synthesize paintLabelRoadFeatures=_paintLabelRoadFeatures - In the implementation block
@property (assign,nonatomic) BOOL paintLabelCounts;                            //@synthesize paintLabelCounts=_paintLabelCounts - In the implementation block
@property (assign,nonatomic) BOOL roadFattening;                               //@synthesize roadFattening=_roadFattening - In the implementation block
@property (assign,nonatomic) BOOL hideDirectionalArrows;                       //@synthesize hideDirectionalArrows=_hideDirectionalArrows - In the implementation block
@property (assign,nonatomic) BOOL paintTrafficSkeleton;                        //@synthesize paintTrafficSkeleton=_paintTrafficSkeleton - In the implementation block
@property (assign,nonatomic) BOOL loadGreenTraffic;                            //@synthesize loadGreenTraffic=_loadGreenTraffic - In the implementation block
@property (assign,nonatomic) BOOL useStaticTrafficFeed;                        //@synthesize useStaticTrafficFeed=_useStaticTrafficFeed - In the implementation block
@property (assign,nonatomic) BOOL paintRoadsStitchedByName;                    //@synthesize paintRoadsStitchedByName=_paintRoadsStitchedByName - In the implementation block
@property (assign,nonatomic) BOOL realisticWireframeEnabled;                   //@synthesize realisticWireframeEnabled=_realisticWireframeEnabled - In the implementation block
@property (assign,nonatomic) BOOL altitudePauseLoading;                        //@synthesize altitudePauseLoading=_altitudePauseLoading - In the implementation block
@property (assign,nonatomic) BOOL altitudeShowTileBounds;                      //@synthesize altitudeShowTileBounds=_altitudeShowTileBounds - In the implementation block
@property (assign,nonatomic) BOOL altitudeHighResSatellite;                    //@synthesize altitudeHighResSatellite=_altitudeHighResSatellite - In the implementation block
@property (assign,nonatomic) BOOL altitudeMipmapSatellite;                     //@synthesize altitudeMipmapSatellite=_altitudeMipmapSatellite - In the implementation block
@property (assign,nonatomic) BOOL altitudeMipmapFlyover;                       //@synthesize altitudeMipmapFlyover=_altitudeMipmapFlyover - In the implementation block
@property (assign,nonatomic) BOOL altitudeShowNightLight;                      //@synthesize altitudeShowNightLight=_altitudeShowNightLight - In the implementation block
@property (assign,nonatomic) BOOL altitudeNoTiltLimit;                         //@synthesize altitudeNoTiltLimit=_altitudeNoTiltLimit - In the implementation block
@property (assign,nonatomic) BOOL altitudeProfilingEnabled;                    //@synthesize altitudeProfilingEnabled=_altitudeProfilingEnabled - In the implementation block
@property (assign,nonatomic) unsigned altitudeProfilingType;                   //@synthesize altitudeProfilingType=_altitudeProfilingType - In the implementation block
@property (assign,nonatomic) unsigned altitudeProfilingZones;                  //@synthesize altitudeProfilingZones=_altitudeProfilingZones - In the implementation block
@property (assign,nonatomic) float altitudeLodScale;                           //@synthesize altitudeLodScale=_altitudeLodScale - In the implementation block
@property (assign,nonatomic) float altitudeAnimationSpinTime;                  //@synthesize altitudeAnimationSpinTime=_altitudeAnimationSpinTime - In the implementation block
@property (assign,nonatomic) float altitudeTileQualityThreshold;               //@synthesize altitudeTileQualityThreshold=_altitudeTileQualityThreshold - In the implementation block
@property (assign,nonatomic) float altitudeForceGridTime;                      //@synthesize altitudeForceGridTime=_altitudeForceGridTime - In the implementation block
@property (nonatomic,retain) NSString * altitudeTelemetryURL;                  //@synthesize altitudeTelemetryURL=_altitudeTelemetryURL - In the implementation block
@property (assign,nonatomic) BOOL dynamicMapModesEnabled;                      //@synthesize dynamicMapModesEnabled=_dynamicMapModesEnabled - In the implementation block
@property (assign,nonatomic) BOOL isInstalledInLockScreen;                     //@synthesize isInstalledInLockScreen=_isInstalledInLockScreen - In the implementation block
@property (assign,nonatomic) BOOL enableLoggingInLockScreen;                   //@synthesize enableLoggingInLockScreen=_enableLoggingInLockScreen - In the implementation block
@property (assign,nonatomic) BOOL useBuildingShadowTexture;                    //@synthesize useBuildingShadowTexture=_useBuildingShadowTexture - In the implementation block
@property (assign,nonatomic) BOOL drawContinuously;                            //@synthesize drawContinuously=_drawContinuously - In the implementation block
@property (assign,nonatomic) BOOL layoutContinuously;                          //@synthesize layoutContinuously=_layoutContinuously - In the implementation block
@property (assign,nonatomic) BOOL useOldLabels;                                //@synthesize useOldLabels=_useOldLabels - In the implementation block
@property (assign,nonatomic) BOOL useTransactionManager;                       //@synthesize useTransactionManager=_useTransactionManager - In the implementation block
@property (assign,nonatomic) float tourAnimationAltitude;                      //@synthesize tourAnimationAltitude=_tourAnimationAltitude - In the implementation block
@property (assign,nonatomic) float tourAnimationStepDuration;                  //@synthesize tourAnimationStepDuration=_tourAnimationStepDuration - In the implementation block
@property (assign,nonatomic) float tourAnimationCameraOffset;                  //@synthesize tourAnimationCameraOffset=_tourAnimationCameraOffset - In the implementation block
@property (assign,nonatomic) float tourAnimationTilt;                          //@synthesize tourAnimationTilt=_tourAnimationTilt - In the implementation block
@property (assign,nonatomic) BOOL trackingCameraAutoPitch;                     //@synthesize trackingCameraAutoPitch=_trackingCameraAutoPitch - In the implementation block
@property (assign,nonatomic) BOOL debugStyleAnimations;                        //@synthesize debugStyleAnimations=_debugStyleAnimations - In the implementation block
@property (assign,nonatomic) BOOL disableStylesheetAnimations;                 //@synthesize disableStylesheetAnimations=_disableStylesheetAnimations - In the implementation block
@property (assign,nonatomic) BOOL renderInSeparateThread;                      //@synthesize renderInSeparateThread=_renderInSeparateThread - In the implementation block
@property (assign,nonatomic) BOOL forceHiResBuildings;                         //@synthesize forceHiResBuildings=_forceHiResBuildings - In the implementation block
@property (assign,nonatomic) BOOL forceDepthDependentBuildings;                //@synthesize forceDepthDependentBuildings=_forceDepthDependentBuildings - In the implementation block
@property (assign,nonatomic) BOOL readLandmarksFromDisk;                       //@synthesize readLandmarksFromDisk=_readLandmarksFromDisk - In the implementation block
+(id)sharedSettings;
-(id)init;
-(BOOL)drawContinuously;
-(void)setDrawContinuously:(BOOL)arg1 ;
-(BOOL)layoutContinuously;
-(void)setLayoutContinuously:(BOOL)arg1 ;
-(BOOL)labelHighlighting;
-(BOOL)dynamicMapModesEnabled;
-(void)setDynamicMapModesEnabled:(BOOL)arg1 ;
-(BOOL)disableStylesheetAnimations;
-(BOOL)renderInSeparateThread;
-(BOOL)shouldDrawDebug;
-(BOOL)trackingCameraAutoPitch;
-(BOOL)paintBuildingNormals;
-(BOOL)forceDepthDependentBuildings;
-(BOOL)paintCoastlines;
-(BOOL)forceHiResBuildings;
-(BOOL)readLandmarksFromDisk;
-(BOOL)dontMapMatchToSnappedRouteLine;
-(BOOL)loadGreenTraffic;
-(BOOL)overlaysShouldDrawDebug;
-(BOOL)disableRoute;
-(BOOL)paintRouteDebugMarkers;
-(BOOL)highlightUnmatchedRouteLine;
-(BOOL)labelCollisionEnabled;
-(BOOL)paintLabelRoadFeatures;
-(BOOL)paintMapTiles;
-(BOOL)paintLabelCounts;
-(BOOL)paintTrafficSkeleton;
-(BOOL)dontMatchRouteLine;
-(void)setAltitudeLodScale:(float)arg1 ;
-(void)setAltitudePauseLoading:(BOOL)arg1 ;
-(void)setAltitudeShowTileBounds:(BOOL)arg1 ;
-(void)setAltitudeAnimationSpinTime:(float)arg1 ;
-(void)setAltitudeTileQualityThreshold:(float)arg1 ;
-(void)setAltitudeForceGridTime:(float)arg1 ;
-(void)setTourAnimationAltitude:(float)arg1 ;
-(void)setTourAnimationCameraOffset:(float)arg1 ;
-(void)setTourAnimationStepDuration:(float)arg1 ;
-(void)setTourAnimationTilt:(float)arg1 ;
-(BOOL)altitudePauseLoading;
-(BOOL)altitudeShowTileBounds;
-(BOOL)altitudeHighResSatellite;
-(BOOL)altitudeMipmapSatellite;
-(BOOL)altitudeMipmapFlyover;
-(BOOL)altitudeShowNightLight;
-(float)altitudeLodScale;
-(float)altitudeAnimationSpinTime;
-(BOOL)useStaticTrafficFeed;
-(float)altitudeTileQualityThreshold;
-(float)altitudeForceGridTime;
-(BOOL)enableLoggingInLockScreen;
-(BOOL)isInstalledInLockScreen;
-(void)setHideDirectionalArrows:(BOOL)arg1 ;
-(void)setIsInstalledInLockScreen:(BOOL)arg1 ;
-(void)setUseOldLabels:(BOOL)arg1 ;
-(void)setAltitudeTelemetryURL:(id)arg1 ;
-(void)setAltitudeProfilingEnabled:(BOOL)arg1 ;
-(void)setHighlightUnmatchedRouteLine:(BOOL)arg1 ;
-(void)setPaintMapTiles:(BOOL)arg1 ;
-(BOOL)paintRoadBoundaries;
-(void)setPaintRoadBoundaries:(BOOL)arg1 ;
-(BOOL)paintRoadTiles;
-(void)setPaintRoadTiles:(BOOL)arg1 ;
-(BOOL)paintPoiTiles;
-(void)setPaintPoiTiles:(BOOL)arg1 ;
-(BOOL)paintPointTiles;
-(void)setPaintPointTiles:(BOOL)arg1 ;
-(BOOL)paintPolygonTiles;
-(void)setPaintPolygonTiles:(BOOL)arg1 ;
-(BOOL)paintVertices;
-(void)setPaintVertices:(BOOL)arg1 ;
-(BOOL)paintJunctions;
-(void)setPaintJunctions:(BOOL)arg1 ;
-(void)setPaintCoastlines:(BOOL)arg1 ;
-(void)setPaintBuildingNormals:(BOOL)arg1 ;
-(void)setDisableRoute:(BOOL)arg1 ;
-(void)setLabelHighlighting:(BOOL)arg1 ;
-(void)setLabelCollisionEnabled:(BOOL)arg1 ;
-(void)setPaintRouteDebugMarkers:(BOOL)arg1 ;
-(void)setDontMatchRouteLine:(BOOL)arg1 ;
-(void)setDontMapMatchToSnappedRouteLine:(BOOL)arg1 ;
-(BOOL)paintRoadSigns;
-(void)setPaintRoadSigns:(BOOL)arg1 ;
-(BOOL)paintLabelBounds;
-(void)setPaintLabelBounds:(BOOL)arg1 ;
-(void)setPaintLabelRoadFeatures:(BOOL)arg1 ;
-(void)setPaintLabelCounts:(BOOL)arg1 ;
-(BOOL)roadFattening;
-(void)setRoadFattening:(BOOL)arg1 ;
-(BOOL)hideDirectionalArrows;
-(void)setPaintTrafficSkeleton:(BOOL)arg1 ;
-(void)setLoadGreenTraffic:(BOOL)arg1 ;
-(void)setUseStaticTrafficFeed:(BOOL)arg1 ;
-(BOOL)paintRoadsStitchedByName;
-(void)setPaintRoadsStitchedByName:(BOOL)arg1 ;
-(BOOL)realisticWireframeEnabled;
-(void)setRealisticWireframeEnabled:(BOOL)arg1 ;
-(void)setAltitudeMipmapSatellite:(BOOL)arg1 ;
-(void)setAltitudeMipmapFlyover:(BOOL)arg1 ;
-(void)setAltitudeShowNightLight:(BOOL)arg1 ;
-(BOOL)altitudeNoTiltLimit;
-(void)setAltitudeNoTiltLimit:(BOOL)arg1 ;
-(void)setAltitudeHighResSatellite:(BOOL)arg1 ;
-(BOOL)altitudeProfilingEnabled;
-(unsigned)altitudeProfilingType;
-(void)setAltitudeProfilingType:(unsigned)arg1 ;
-(unsigned)altitudeProfilingZones;
-(void)setAltitudeProfilingZones:(unsigned)arg1 ;
-(id)altitudeTelemetryURL;
-(void)setEnableLoggingInLockScreen:(BOOL)arg1 ;
-(BOOL)useBuildingShadowTexture;
-(void)setUseBuildingShadowTexture:(BOOL)arg1 ;
-(BOOL)useOldLabels;
-(BOOL)useTransactionManager;
-(void)setUseTransactionManager:(BOOL)arg1 ;
-(float)tourAnimationAltitude;
-(float)tourAnimationStepDuration;
-(float)tourAnimationCameraOffset;
-(float)tourAnimationTilt;
-(void)setTrackingCameraAutoPitch:(BOOL)arg1 ;
-(BOOL)debugStyleAnimations;
-(void)setDebugStyleAnimations:(BOOL)arg1 ;
-(void)setDisableStylesheetAnimations:(BOOL)arg1 ;
-(void)setRenderInSeparateThread:(BOOL)arg1 ;
-(void)setForceHiResBuildings:(BOOL)arg1 ;
-(void)setForceDepthDependentBuildings:(BOOL)arg1 ;
-(void)setReadLandmarksFromDisk:(BOOL)arg1 ;
@end

