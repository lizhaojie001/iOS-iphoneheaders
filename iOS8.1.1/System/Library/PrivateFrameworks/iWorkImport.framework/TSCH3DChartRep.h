/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:35:28 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSCHChartRep.h>
#import <iWorkImport/TSCH3DChartAnimationRendering.h>
#import <iWorkImport/TSCH3DGLLayerProvider.h>

@class TSCH3DChartRenderer, TSCH3DChartRepRenderQueue, TSCH3DChartRendererState, TSCH3DChartRepCachedTexture, TSCH3DChartAnimationEngine, TSCH3DScene, TSCH3DChartRepFPSCounter, NSDictionary, TSCH3DGLContext, NSNumber, NSMutableIndexSet, CALayer, NSMutableArray;

@interface TSCH3DChartRep : TSCHChartRep <TSCH3DChartAnimationRendering, TSCH3DGLLayerProvider> {

	TSCH3DChartRenderer* mRenderer3D;
	TSCH3DChartRepRenderQueue* mRenderQueue;
	TSCH3DChartRendererState* mRendererState;
	unsigned long long mChunkCount;
	TSCH3DChartRepCachedTexture* mCachedTexture;
	BOOL mHasSkippedInitialTexture;
	BOOL mTextureForHiding;
	TSCH3DChartAnimationEngine* mEngine;
	Class mAnimationClass;
	long long mAnimationStage;
	long long mAnimationFrameCount;
	int mAnimationBuildType;
	TSCH3DScene* mAnimationLayerScene;
	TSCH3DChartRepFPSCounter* mFPSCounter;
	NSDictionary* mBuildAttributes;
	TSCH3DGLContext* mAnimationGLContext;
	NSNumber* mCustomAnimationContentsScale;
	int mRenderMode;
	BOOL mIsInInteractiveMode;
	NSMutableIndexSet* mInteractiveFlags;
	BOOL mMaybeBeginDragging;
	BOOL mMaybeBeginScrolling;
	BOOL mDidChangeDepth;
	CGSize mMinimumInteractiveSize;
	CGRect mCurrentVisibleBoundsInLayerRelativeSpace;
	BOOL mWillChangeAppearance;
	CGRect mBeginScaleChartBodyLayoutRect;
	BOOL mHasEverRendered;
	int mCGContextDrawingMode;
	BOOL mShouldDelayDestroyFramebuffer;
	CALayer* mRootLayer;
	unsigned long long mNumberOfInteractiveRotations;
	NSMutableArray* mSelectionKnobsLayers;
	BOOL mDocumentWillClose;
	BOOL mAllowLowResolutionTextures;
	BOOL mIsBackgroundLayoutAndRendering;
	float mOverrideRenderingSamples;
	BOOL mHasInterestInSharegroup;
	BOOL mWillBeRemoved;
	BOOL mAnimationHasEnded;
	BOOL mLayerPositionIsInvalidated;

}

@property (nonatomic,readonly) TSCH3DScene * layoutScene; 
@property (nonatomic,readonly) TSCH3DScene * renderingScene; 
@property (nonatomic,readonly) Class renderCycleClass; 
@property (nonatomic,readonly) NSDictionary * buildAttributes; 
@property (nonatomic,readonly) int animationBuildType; 
@property (assign,nonatomic) BOOL textureForHiding; 
@property (nonatomic,retain) TSCH3DGLContext * animationGLContext; 
@property (nonatomic,readonly) TSCH3DChartAnimationEngine * engine; 
@property (nonatomic,readonly) TSCH3DChartRenderer * renderer3D; 
@property (nonatomic,readonly) Class animationClass; 
@property (nonatomic,retain) TSCH3DChartRepCachedTexture * cachedTexture; 
@property (nonatomic,retain) NSNumber * customAnimationContentsScale; 
+(id)chartRep3DFromLayer:(id)arg1 ;
+(id)sharegroupTokensOfInterest;
+(BOOL)canRenderUsingOpenGL;
+(id)p_allFillProperties;
+(BOOL)hasDelegateInLayer:(id)arg1 ;
-(id)deliveryTimeSlice;
-(TSCH3DScene *)layoutScene;
-(Class)animationClass;
-(id)animationFilter;
-(NSDictionary *)buildAttributes;
-(int)animationBuildType;
-(BOOL)isLastChunkStageForFinalElements:(BOOL)arg1 ;
-(id)GLLayer;
-(id)GLLayerWithFrame:(CGRect)arg1 ;
-(CGRect)pixelAlignBodyCanvasBounds:(const CGRect*)arg1 ;
-(id)update3DRendererWithSceneAreaLayoutItem:(id)arg1 ;
-(void)processChanges:(id)arg1 ;
-(void)addRepToRenderQueueInFront:(BOOL)arg1 ;
-(CGPoint)offsetFromLayerRelativeToBodyCanvas;
-(id)rendererState;
-(float)renderingSamples;
-(TSCH3DScene *)renderingScene;
-(void)invalidateLayerCache;
-(BOOL)processMultipassRendering;
-(void)renderIntoContext:(CGContextRef)arg1 visible:(CGRect)arg2 ;
-(void)cancelMultipassRendering;
-(id)initWithLayout:(id)arg1 canvas:(id)arg2 ;
-(TSCH3DChartRepCachedTexture *)cachedTexture;
-(void)p_addInterestForSharegroups;
-(void)p_removeInterestForSharegroupsIfNecessary;
-(id)p_sharegroupTokensOfInterest;
-(BOOL)p_hasInteractiveFlag:(unsigned long long)arg1 ;
-(id)p_renderQueue;
-(void)clearRenderers;
-(id)p_repSharegroupToken;
-(ChartProjectedBoundsConverter*)p_chart3DLayoutBoundsConverterUpdatingLayoutIfNecessary:(BOOL)arg1 ;
-(tvec2<float>)normalizedPointFromNaturalPoint:(CGPoint)arg1 ;
-(tvec2<float>)normalizedPointFromUnscaledPoint:(CGPoint)arg1 ;
-(id)GLLayerNoCreate;
-(void)p_clearInteractiveFlag:(unsigned long long)arg1 ;
-(void)p_clearInteractiveFlagsBeforeRemoval;
-(BOOL)p_threadSafeExitInteractiveMode;
-(void)p_clearCachedTexture;
-(BOOL)p_isBackgroundLayoutThread;
-(BOOL)p_shouldDelayDestroyFramebuffer;
-(void)willBeRemoved;
-(void)p_cancelEndInteractiveModeCallback;
-(void)chartWillChangeAppearance;
-(BOOL)p_needInteractiveMode;
-(BOOL)p_canEndInteractiveMode;
-(void)p_endInteractiveMode;
-(void)chartDidChangeAppearance;
-(CGRect)canvasBoundsFromBodyCanvasBounds:(const CGRect*)arg1 ;
-(CGRect)bodyCanvasBoundsFromCanvasBounds:(const CGRect*)arg1 ;
-(BOOL)renderLegendIntoSeparateLayer;
-(CGRect)p_visibleRectInRepLayer;
-(CGRect)p_validateVisibleRect:(CGRect)arg1 ;
-(void)p_setInteractiveFlag:(unsigned long long)arg1 ;
-(void)p_beginInteractiveMode;
-(void)p_createBackgroundLayoutLayer;
-(void)willUpdateLayer:(id)arg1 ;
-(NSNumber *)customAnimationContentsScale;
-(id)p_pixelAlignmentLayer;
-(void)didUpdateLayer:(id)arg1 ;
-(void)p_calculateGLLayerFrame;
-(CGRect)layerFrameInScaledCanvas;
-(void)setNeedsDisplayIfNecessaryUpdateGLLayerPixelAlignment:(BOOL)arg1 ;
-(void)p_pixelAlignLegendLayer:(id)arg1 basedOnUnalignedParentLayer:(id)arg2 ;
-(BOOL)p_isDrawingInCGContext;
-(id)p_lazyRenderer3D;
-(void)p_setupForRendering;
-(void)p_updateLayerTree;
-(double)p_layerContentsScale;
-(BOOL)p_shouldUpdateRendererLayoutForCurrentLayer;
-(void)p_updateRendererLayoutForCurrentLayer;
-(void)p_recreateGLLayer;
-(void)recursivelyDrawInContext:(CGContextRef)arg1 ;
-(void)didDrawInLayer:(id)arg1 context:(CGContextRef)arg2 ;
-(id)p_animationScene;
-(BOOL)p_isThumbnailOrInsertionIconCanvas:(id)arg1 ;
-(void)p_updateVisibleBoundsRect;
-(BOOL)p_canRender;
-(BOOL)p_shouldRender;
-(void)p_lowQualityRenderWithGLContext:(id)arg1 bodyCanvasVisibleRect:(CGRect)arg2 renderer:(id)arg3 ;
-(id)p_chart3DLayout;
-(void)p_updateElementSceneObjectPropertiesForScene:(id)arg1 ;
-(void)becameSelected;
-(void)becameNotSelected;
-(void)p_endInteractiveModeAfterDelay:(double)arg1 ;
-(BOOL)shouldShowSelectionHighlight;
-(BOOL)shouldShowLegendHighlight;
-(BOOL)shouldShowKnobs;
-(void)editor:(id)arg1 isSelectingInfos:(id)arg2 ;
-(BOOL)p_shouldShowRotate3DKnobWithInfoCount:(unsigned long long)arg1 ;
-(void)p_set3DRotateKnobVisible:(BOOL)arg1 ;
-(void)editor:(id)arg1 isDeselectingInfos:(id)arg2 ;
-(void)clearDragHighlightAndPreviewState;
-(void)showHitFeedbackForSelectionPath:(id)arg1 ;
-(void)p_removeRepFromRenderQueue;
-(void)dynamicDragDidBegin;
-(void)dynamicDragDidEnd;
-(void)beginDragInsertFromPalette;
-(void)endDragInsertFromPalette;
-(id)dynamicResizeDidBegin;
-(void)dynamicResizeDidEndWithTracker:(id)arg1 ;
-(void)willBeginZooming;
-(void)didEndZooming;
-(void)viewScaleDidChange;
-(void)viewScrollDidChange;
-(void)viewScrollingEnded;
-(CGRect)boundsForStandardKnobs;
-(void)setCachedTexture:(TSCH3DChartRepCachedTexture *)arg1 ;
-(void)p_setupForAnimationRendering;
-(void)p_animationFlushResources;
-(void)setTextureStage:(unsigned long long)arg1 ;
-(void)p_setChartChunkStage:(long long)arg1 ;
-(void)p_updateChunkCount;
-(id)p_animationLayoutScene;
-(id)layoutItem;
-(id)p_renderSeparateAnimationLayers:(id)arg1 intersectedBodyCanvasBounds:(const CGRect*)arg2 ;
-(void)setCustomAnimationContentsScale:(NSNumber *)arg1 ;
-(CGRect)p_adjustedAnimationDrawableFrameWithFrame:(CGRect)arg1 untransformedFrame:(CGRect)arg2 ;
-(void)p_addSeparateRenderedLayersToAnimationLayer:(id)arg1 intersectedBodyCanvasBounds:(const CGRect*)arg2 ;
-(void)p_addLegendLayerToAnimationLayer:(id)arg1 ;
-(void)p_updateChunkCountIfNecessary;
-(long long)p_effectiveStageFromTextureStage:(long long)arg1 isFinalElements:(BOOL)arg2 ;
-(long long)p_lastTextureStage;
-(BOOL)isLastChunkStageForFinalElements:(BOOL)arg1 chunkStage:(long long)arg2 ;
-(BOOL)isLastAbsoluteChunkStageForFinalElements:(BOOL)arg1 chunkStage:(long long)arg2 ;
-(long long)p_absoluteStageFromTextureStage:(long long)arg1 isFinalElements:(BOOL)arg2 ;
-(BOOL)p_shouldRenderAnimationTextureAsSingleImage;
-(void)p_setAnimationLevelOfDetailGeometryForScene:(id)arg1 ;
-(CGPoint)p_scaledIntegralOffsetFromFractionInFrame:(CGPoint*)arg1 ;
-(void)markTextureDirty;
-(CGRect)scaledVisibleCanvasBounds;
-(id)p_renderLegendTextureWithBounds:(const CGRect*)arg1 returningBodyCanvasBounds:(CGRect*)arg2 ;
-(void)p_renderTextureWithBounds:(const CGRect*)arg1 finalTexture:(BOOL)arg2 enumerationBlock:(/*^block*/id)arg3 ;
-(id)p_generateCachedAnimationTextureForFinalElements:(BOOL)arg1 includesChart:(BOOL)arg2 ;
-(BOOL)p_hasCachedTextureForFinalElements:(BOOL)arg1 ;
-(void)p_calculateOverrideRenderingSamplesForPrintingOrPdfRendering;
-(void)p_checkPresenterDisplayForAnimationSession:(id)arg1 ;
-(BOOL)p_isValidTextureStageForFinalElements:(BOOL)arg1 ;
-(void)p_cacheRenderAnimationTextureForFinalElements:(BOOL)arg1 ;
-(void)p_invalidateSubselectinoKnobsLayers;
-(void)p_updateGLLayerPixelAlignment;
-(void)updatePositionsOfKnobs:(id)arg1 ;
-(id)newTrackerForKnob:(id)arg1 ;
-(void)knobTrackingDidBegin:(id)arg1 ;
-(void)invalidateSubselectionKnobs;
-(void)tswpTextEditingDidEndEditing:(id)arg1 ;
-(void)dynamicallyUpdatingLegendFrameWithTracker:(id)arg1 ;
-(void)p_invalidateLayoutLabelsBoundsClass:(Class)arg1 ;
-(void)willAnimateIntoCDE;
-(void)didAnimateFromCDE;
-(void)protected_dynamicStyleChangeWillBegin:(id)arg1 ;
-(void)protected_dynamicStyleChangeDidEnd:(id)arg1 ;
-(void)animationWillBeginForChunkStage:(long long)arg1 ;
-(void)animationDidEndForChunkStage:(long long)arg1 ;
-(void)setAnimationType:(int)arg1 chunkStage:(long long)arg2 buildType:(int)arg3 textureDeliveryStyle:(unsigned long long)arg4 attributes:(id)arg5 ;
-(id)animationLayerWithFrame:(CGRect)arg1 untransformedFrame:(CGRect)arg2 scale:(double)arg3 colorSpace:(CGColorSpaceRef)arg4 returningDrawingFrame:(CGRect*)arg5 TSDGLLayer:(id*)arg6 ;
-(void)renderAnimationFrame:(float)arg1 drawingFrame:(CGRect)arg2 chunkStage:(long long)arg3 ;
-(tvec2<float>)normalizedPointFromTouchPoint:(const tvec2<float>*)arg1 ;
-(void)p_applicationWillResignActive:(id)arg1 ;
-(void)p_documentWillClose:(id)arg1 ;
-(void)p_applicationDidBecomeActive:(id)arg1 ;
-(BOOL)shouldApplyFractionalTranslationInRootForLegendLayer;
-(BOOL)shouldUseLegendLayerForLayerBasedRep;
-(BOOL)directlyManagesLayerContent;
-(BOOL)frameInUnscaledCanvasNeedsPaddingForShadows;
-(void)willLayoutAndRenderInBackground;
-(void)addAdditionalChildLayersToArray:(id)arg1 ;
-(BOOL)mustDrawOnMainThreadForInteractiveCanvas;
-(Class)renderCycleClass;
-(BOOL)canRenderIntoGLLayer;
-(void)renderIntoGLLayerWithGLContext:(id)arg1 ;
-(BOOL)canDrawInParallel;
-(BOOL)shouldShowSizesInRulers;
-(BOOL)shouldShowDragHUD;
-(void)animationFrameDidEndForGLLayer;
-(BOOL)isLastAbsoluteChunkStageForFinalElements:(BOOL)arg1 ;
-(void)setTextureAnimationInfo:(id)arg1 ;
-(BOOL)p_shouldSkipInitialTextureRequestForFinalElements:(BOOL)arg1 ;
-(id)textureForContext:(id)arg1 ;
-(id)knobForDynamicStyleChangeKey:(id)arg1 ;
-(void)addChartKnobsToArray:(id)arg1 ;
-(id)p_wedgeExplosionTracker;
-(void)knobTrackingDidEnd:(id)arg1 ;
-(void)p_calculateSelectionKnobsLayersForSelectionPaths:(id)arg1 ;
-(BOOL)rotationKnobHitByNaturalPoint:(CGPoint)arg1 ;
-(id)hitChartElements:(CGPoint)arg1 passingTest:(/*^block*/id)arg2 ;
-(void)dynamically3DRotatingWithTracker:(id)arg1 ;
-(void)dynamicChange3DDepthDidBegin;
-(id)dynamicChange3DDepthDidEndOutInfoGeometryRect:(CGRect*)arg1 ;
-(void)dynamically3DSetNewDepth:(double)arg1 ;
-(TSCH3DChartRenderer *)renderer3D;
-(BOOL)textureForHiding;
-(void)setTextureForHiding:(BOOL)arg1 ;
-(TSCH3DGLContext *)animationGLContext;
-(void)setAnimationGLContext:(TSCH3DGLContext *)arg1 ;
-(CGRect)clipRect;
-(void)invalidateLayoutCache;
-(void)dealloc;
-(void)setNeedsDisplay;
-(BOOL)isOpaque;
-(Class)layerClass;
-(TSCH3DChartAnimationEngine *)engine;
-(int)tilingMode;
@end
