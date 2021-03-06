/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 8:59:03 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Maps/Maps-Structs.h>
#import <UIKit/UIViewController.h>
#import <MapKit/MKMapViewDelegate.h>
#import <Maps/MKMapViewDelegatePrivate.h>
#import <Maps/MapsChromeViews.h>
#import <MapKit/MKMapViewDelegate.h>
#import <Maps/MKMapViewDelegatePrivate.h>

@class MKMapView, UIView, NSMutableArray, UserLocationView, DirectionsAnnotationsManager, SearchPinsManager, NSMutableSet, MapsChromeViewItem, NSArray;

@interface ChromeViewController : UIViewController <MKMapViewDelegate, MKMapViewDelegatePrivate, MapsChromeViews, MKMapViewDelegate, MKMapViewDelegatePrivate> {

	NSMutableArray* _itemsStack;
	UserLocationView* _userLocationView;
	DirectionsAnnotationsManager* _directionsAnnotationsManager;
	SearchPinsManager* _searchPinsManager;
	MKMapView* _mapView;
	BOOL _isViewLoading;
	UIView* _mapViewReplacement;
	BOOL _topModeWasSentViewWillDidAppear;
	BOOL _chromeDidReceiveViewWillAppear;
	BOOL _chromeDidReceiveViewDidAppear;
	BOOL _isAnyModeCurrent;
	BOOL _isMapViewDisownedByPrepareMethods;
	BOOL _animatingMapInsets;
	int _currentlyRunningLabelEdgeInsetsAnimationsCount;
	NSMutableSet* _modesBeingRemoved;
	unsigned _clientsAllowingInsetsAnimation;
	UIView* _containingView;
	BOOL _suppressed;
	BOOL _forceAccessoryAnimationForNextPush;

}

@property (nonatomic,readonly) <MapsChromeModeController> * currentMode; 
@property (nonatomic,readonly) <MapsChromeModeController> * topMode; 
@property (nonatomic,readonly) CGRect unobscuredBoundsInContainingView; 
@property (nonatomic,readonly) UserLocationView * userLocationView; 
@property (nonatomic,readonly) UserLocationView * userLocationViewIfExists; 
@property (nonatomic,readonly) DirectionsAnnotationsManager * directionsAnnotationsManager; 
@property (nonatomic,readonly) SearchPinsManager * searchPinsManager; 
@property (assign,getter=isSuppressed,nonatomic) BOOL suppressed;                                        //@synthesize suppressed=_suppressed - In the implementation block
@property (nonatomic,readonly) BOOL supportsSuppression; 
@property (assign,nonatomic) BOOL forceAccessoryAnimationForNextPush;                                    //@synthesize forceAccessoryAnimationForNextPush=_forceAccessoryAnimationForNextPush - In the implementation block
@property (nonatomic,readonly) MapsChromeViewItem * topItem; 
@property (nonatomic,readonly) NSArray * itemsStack; 
@property (nonatomic,retain) MKMapView * mapView; 
@property (nonatomic,retain) UIView * containingView;                                                    //@synthesize containingView=_containingView - In the implementation block
@property (nonatomic,retain) UIView * mapViewReplacement;                                                //@synthesize mapViewReplacement=_mapViewReplacement - In the implementation block
+(id)mapReplacementColor;
+(Class)chromeViewItemClass;
+(Class)containingViewClass;
+(Class)userLocationViewClass;
-(id)mapViewDelegateForSelector:(SEL)arg1 ;
-(void)mapView:(id)arg1 willChangeRotation:(double)arg2 ;
-(BOOL)mapViewShouldScrollToUserLocation:(id)arg1 ;
-(id)topMode;
-(BOOL)supportsSuppression;
-(id)searchPinsManager;
-(BOOL)isCurrentMode:(id)arg1 ;
-(void)reinsertMapViewInViewHierarchy;
-(void)layoutForUnobscuredBoundsChange;
-(void)prepareRemovingMapViewFromViewHierarchyWithReplacement:(id)arg1 ;
-(id)directionsAnnotationsManager;
-(void)setMapEdgeInsets:(UIEdgeInsets)arg1 forContainer:(id)arg2 ;
-(id)mapViewDelegate;
-(/*^block*/ id)presentInterruptionOfKind:(int)arg1 userInfo:(id)arg2 completionHandler:(/*^block*/ id)arg3 ;
-(/*^block*/ id)presentUnhandledInterruptionOfKind:(int)arg1 userInfo:(id)arg2 completionHandler:(/*^block*/ id)arg3 ;
-(void)replaceMode:(id)arg1 withMode:(id)arg2 animated:(BOOL)arg3 ;
-(void)insertMode:(id)arg1 aboveMode:(id)arg2 animated:(BOOL)arg3 ;
-(void)removeMode:(id)arg1 animated:(BOOL)arg2 ;
-(void)popToMode:(id)arg1 animated:(BOOL)arg2 ;
-(void)popModeAnimated:(BOOL)arg1 ;
-(void)pushMode:(id)arg1 animated:(BOOL)arg2 ;
-(void)replaceTopModeWithMode:(id)arg1 animated:(BOOL)arg2 ;
-(CGRect)unobscuredBoundsInContainingViewWithOptions:(int)arg1 ;
-(void)setSuppressed:(BOOL)arg1 ;
-(BOOL)isSuppressed;
-(id)userLocationViewIfExists;
-(BOOL)isTopMode:(id)arg1 ;
-(void)whenModeNextBecomesCurrent:(id)arg1 performActionWithKey:(id)arg2 block:(/*^block*/ id)arg3 ;
-(BOOL)getPreferredUserInterfaceIdiom:(out int*)arg1 ;
-(id)itemsStack;
-(void)willLoadView;
-(void)setContainingView:(id)arg1 ;
-(void)pushTopItemOnTopOfStackAfterViewLoadIfNeeded;
-(void)didLoadView;
-(void)invalidateLabelEdgeInsetsWithAnimation:(id)arg1 ;
-(id)chromeViewItemForMode:(id)arg1 ;
-(void)moveToMapDisplayStyle:(int)arg1 forChangeToLightLevel:(int)arg2 animation:(id)arg3 ;
-(UIEdgeInsets)mapInsetsIncludingBarsWithNonopaqueParts:(BOOL)arg1 ;
-(id)mapViewReplacement;
-(CGRect)unobscuredBoundsInContainingView;
-(void)performAllowingInsetsAnimation:(/*^block*/ id)arg1 ;
-(void)addReplacementViewToViewHierarchy:(id)arg1 ;
-(void)currentModeDidChangeByMovingToItem:(id)arg1 fromItem:(id)arg2 animated:(BOOL)arg3 ;
-(void)currentModeWillChangeByMovingToItem:(id)arg1 fromItem:(id)arg2 animated:(BOOL)arg3 ;
-(CGSize)attributionAnchorOffset;
-(void)performInitialConfigurationOnSearchPinsManager:(id)arg1 ;
-(void)performInitialConfigurationOnDirectionsAnnotationsManager:(id)arg1 ;
-(void)setMapViewReplacement:(id)arg1 ;
-(void)stackWillChangeByMovingToItem:(id)arg1 fromItem:(id)arg2 ;
-(void)_performTransitionWithAnimation:(BOOL)arg1 toItem:(id)arg2 fromItem:(id)arg3 itemsLeavingTheStack:(id)arg4 byChangingStackInBlock:(/*^block*/ id)arg5 ;
-(void)stackDidChangeByMovingToItem:(id)arg1 fromItem:(id)arg2 ;
-(void)_popToItem:(id)arg1 atIndex:(unsigned)arg2 animated:(BOOL)arg3 ;
-(id)_newChromeItemForMode:(id)arg1 ;
-(BOOL)forceAccessoryAnimationForNextPush;
-(void)moveToAccessoryViewsForMode:(id)arg1 animation:(id)arg2 ;
-(void)setForceAccessoryAnimationForNextPush:(BOOL)arg1 ;
-(void)_invokeWhenNextCurrentBlocksForMode:(id)arg1 animated:(BOOL)arg2 ;
-(id)_whenNextCurrentBlocksDictionaryForMode:(id)arg1 creatingIfMissing:(BOOL)arg2 ;
-(void)_removeWhenNextCurrentBlocksDictionaryFromMode:(id)arg1 ;
-(void)_lightLevelChanged:(id)arg1 ;
-(void)updateLightLevelAnimated:(BOOL)arg1 lightLevel:(int)arg2 ;
-(void)_loadMapViewIfNeeded;
-(void)performInitialConfigurationOnMapView:(id)arg1 ;
-(UIEdgeInsets)obscuredInsetsForBoundsOptions:(int)arg1 ;
-(void)_scheduleAnimationForUpdatingEdgeInsetsForCurrentMode;
-(void)invalidateLabelEdgeInsetsWithAnimation:(id)arg1 animationShouldHideLabelsAtStart:(BOOL)arg2 ;
-(BOOL)isViewLoadedOrLoading;
-(void)popToRootModeAnimated:(BOOL)arg1 ;
-(BOOL)isWhenNextCurrentActionScheduledWithKey:(id)arg1 forMode:(id)arg2 ;
-(void)cancelWhenNextCurrentActionWithKey:(id)arg1 forMode:(id)arg2 ;
-(void)invalidateMapInsets;
-(void)prepareRemovingMapViewFromViewHierarchyWithReplacement:(id)arg1 retainOwnershipOfMapView:(BOOL)arg2 ;
-(void)reinsertMapViewInViewHierarchy:(id)arg1 userLocationView:(id)arg2 ;
-(void)mapView:(id)arg1 didChangeMapType:(unsigned)arg2 ;
-(id)userLocationView;
-(void)mapView:(id)arg1 didChangeUserTrackingMode:(int)arg2 animated:(BOOL)arg3 fromTrackingButton:(BOOL)arg4 ;
-(BOOL)mapView:(id)arg1 shouldSelectLabelMarker:(id)arg2 ;
-(BOOL)mapView:(id)arg1 shouldReceiveTouch:(id)arg2 ;
-(double)mapView:(id)arg1 shouldDelayTapResponse:(id)arg2 onAnnotationView:(id)arg3 forDuration:(double)arg4 ;
-(void)mapViewDidStartUserInteraction:(id)arg1 ;
-(void)mapViewDidStopUserInteraction:(id)arg1 ;
-(id)mapViewCurrentRouteMatch:(id)arg1 ;
-(id)mapView:(id)arg1 painterForVectorOverlay:(id)arg2 ;
-(void)mapView:(id)arg1 willStartRespondingToGesture:(int)arg2 animated:(BOOL)arg3 ;
-(void)mapView:(id)arg1 didStopRespondingToGesture:(int)arg2 zoomDirection:(int)arg3 didDecelerate:(BOOL)arg4 ;
-(void)mapView:(id)arg1 didBecomePitched:(BOOL)arg2 ;
-(void)mapView:(id)arg1 canZoomInDidChange:(BOOL)arg2 ;
-(void)mapView:(id)arg1 canZoomOutDidChange:(BOOL)arg2 ;
-(void)mapView:(id)arg1 canEnter3DModeDidChange:(BOOL)arg2 ;
-(void)mapView:(id)arg1 canShowFlyoverDidChange:(BOOL)arg2 ;
-(void)mapView:(id)arg1 showingFlyoverDidChange:(BOOL)arg2 ;
-(void)mapViewDidFinishCalloutExpansion:(id)arg1 ;
-(void)mapViewWillAnimateInAnnotationViews:(id)arg1 ;
-(void)mapViewDidAnimateInAnnotationViews:(id)arg1 ;
-(void)mapView:(id)arg1 labelMarker:(id)arg2 calloutAccessoryControlTapped:(id)arg3 ;
-(void)_updateInsets;
-(void)mapView:(id)arg1 didSelectLabelMarker:(id)arg2 ;
-(void)mapView:(id)arg1 didDeselectLabelMarker:(id)arg2 ;
-(void)_setLabelEdgeInsets:(UIEdgeInsets)arg1 ;
-(id)containingView;
-(void)dealloc;
-(id)init;
-(void)viewDidLayoutSubviews;
-(id)topItem;
-(id)currentMode;
-(void)loadView;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void).cxx_destruct;
-(void)setMapView:(id)arg1 ;
-(void)mapView:(id)arg1 didAddAnnotationViews:(id)arg2 ;
-(void)mapView:(id)arg1 regionWillChangeAnimated:(BOOL)arg2 ;
-(void)mapView:(id)arg1 regionDidChangeAnimated:(BOOL)arg2 ;
-(void)mapViewWillStartLoadingMap:(id)arg1 ;
-(void)mapViewDidFinishLoadingMap:(id)arg1 ;
-(void)mapViewDidFailLoadingMap:(id)arg1 withError:(id)arg2 ;
-(void)mapViewWillStartRenderingMap:(id)arg1 ;
-(void)mapViewDidFinishRenderingMap:(id)arg1 fullyRendered:(BOOL)arg2 ;
-(id)mapView:(id)arg1 viewForAnnotation:(id)arg2 ;
-(void)mapView:(id)arg1 annotationView:(id)arg2 calloutAccessoryControlTapped:(id)arg3 ;
-(void)mapView:(id)arg1 didSelectAnnotationView:(id)arg2 ;
-(void)mapView:(id)arg1 didDeselectAnnotationView:(id)arg2 ;
-(void)mapViewWillStartLocatingUser:(id)arg1 ;
-(void)mapViewDidStopLocatingUser:(id)arg1 ;
-(void)mapView:(id)arg1 didUpdateUserLocation:(id)arg2 ;
-(void)mapView:(id)arg1 didFailToLocateUserWithError:(id)arg2 ;
-(void)mapView:(id)arg1 annotationView:(id)arg2 didChangeDragState:(unsigned)arg3 fromOldState:(unsigned)arg4 ;
-(void)mapView:(id)arg1 didChangeUserTrackingMode:(int)arg2 animated:(BOOL)arg3 ;
-(id)mapView:(id)arg1 rendererForOverlay:(id)arg2 ;
-(void)mapView:(id)arg1 didAddOverlayRenderers:(id)arg2 ;
-(id)mapView;
-(UIEdgeInsets)labelEdgeInsets;
@end

