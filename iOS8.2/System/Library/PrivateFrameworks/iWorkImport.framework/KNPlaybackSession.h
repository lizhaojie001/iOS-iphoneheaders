/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:27:22 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/TSDAnimationSession.h>

@protocol TSDCanvasDelegate;
@class TSULRUCache, KNSlideNode, NSMutableArray, KNShow, KNAnimationContext, NSObject, KNAnimatedSlideView, NSString;

@interface KNPlaybackSession : NSObject <TSDAnimationSession> {

	/*^block*/id mEndShowHandler;
	char mHasEndShowHandlerBeenCancelled;
	id<TSDCanvasDelegate> mCanvasDelegate;
	TSULRUCache* mASVCache;
	KNSlideNode* mCurrentSlideNode;
	KNSlideNode* mAlternateNextSlideNode;
	NSMutableArray* mBreadCrumbTrail;
	KNSlideNode* mLastVisitedSlideNode;
	KNShow* mShow;
	KNAnimationContext* mAnimationContext;
	int mPlayMode;
	NSObject* mCurrentRenderingTicket;
	char mSkipSlides;
	char mShouldAnimateTransitionOnLastSlide;
	char mShouldAnimateNullTransitions;
	char mShouldUseContentlessLayers;
	char mSkipBuilds;
	char mShouldPreferCARenderer;
	char mDisableAutoAnimationRemoval;
	char mShouldAutomaticallyPlayMovies;
	char mShouldShowVideoReflectionsAndMasks;
	char mShouldForceTextureGeneration;
	char mShouldDrawTexturesAsynchronously;
	char mShouldAlwaysSetCurrentGLContextWhenDrawing;
	char mShouldUseSourceImage;
	char _isExitingShow;

}

@property (assign,nonatomic) KNSlideNode * alternateNextSlideNode; 
@property (nonatomic,readonly) KNAnimationContext * animationContext; 
@property (nonatomic,retain) NSMutableArray * breadCrumbTrail; 
@property (assign,nonatomic) id<TSDCanvasDelegate> canvasDelegate; 
@property (nonatomic,readonly) KNAnimatedSlideView * currentCachedAnimatedSlideView; 
@property (nonatomic,copy) id endShowHandler; 
@property (nonatomic,readonly) char isPreview; 
@property (assign,nonatomic) int playMode; 
@property (assign,nonatomic) char shouldAnimateTransitionOnLastSlide; 
@property (nonatomic,readonly) KNShow * show; 
@property (assign,nonatomic) char skipSlides; 
@property (assign,nonatomic) char shouldAnimateNullTransitions; 
@property (assign,nonatomic) char shouldUseContentlessLayers; 
@property (assign,nonatomic) char skipBuilds; 
@property (assign,nonatomic) char shouldPreferCARenderer; 
@property (assign,nonatomic) char disableAutoAnimationRemoval; 
@property (assign,nonatomic) char shouldAutomaticallyPlayMovies; 
@property (assign,nonatomic) char shouldShowVideoReflectionsAndMasks; 
@property (nonatomic,readonly) char shouldShowInstructionalText; 
@property (assign,nonatomic) char shouldForceTextureGeneration; 
@property (assign,nonatomic) char shouldDrawTexturesAsynchronously; 
@property (assign,nonatomic) char isExitingShow;                                                  //@synthesize isExitingShow=_isExitingShow - In the implementation block
@property (assign,nonatomic) char shouldUseSourceImage; 
@property (assign,nonatomic) char shouldAlwaysSetCurrentGLContextWhenDrawing; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(char)isOffscreenPlayback;
-(char)shouldForceTextureGeneration;
-(char)shouldShowInstructionalText;
-(char)shouldUseSourceImage;
-(void)setShouldForceTextureGeneration:(char)arg1 ;
-(unsigned)slideNumberForSlideNode:(id)arg1 ;
-(id)textureSetForRep:(id)arg1 context:(id)arg2 shouldRender:(char)arg3 ;
-(id)repForInfo:(id)arg1 onCanvas:(id)arg2 ;
-(int)playMode;
-(id)nextSlideNodeAfterCurrent;
-(id)animatedSlideViewFor:(id)arg1 setupTransition:(char)arg2 ;
-(void)invalidateSlideNumberLayoutsOnCanvas:(id)arg1 ;
-(char)shouldPreferCARenderer;
-(char)shouldAnimateNullTransitions;
-(id)newFinalTextureForOutgoingSlide;
-(id)newInitialTextureForIncomingSlide;
-(void)renderConcurrentlyOutgoingSlideTexture:(id)arg1 andIncomingSlideTexture:(id)arg2 ;
-(char)disableAutoAnimationRemoval;
-(id)initWithShow:(id)arg1 viewScale:(float)arg2 baseLayer:(id)arg3 isBaseLayerVisible:(char)arg4 canvasDelegate:(id)arg5 endShowHandler:(/*^block*/id)arg6 ;
-(void)setSkipSlides:(char)arg1 ;
-(void)setDisableAutoAnimationRemoval:(char)arg1 ;
-(void)setShouldAlwaysSetCurrentGLContextWhenDrawing:(char)arg1 ;
-(id)currentSlideNode;
-(void)gotoSlideNode:(id)arg1 ;
-(id)firstSlideNode;
-(void)setPlayMode:(int)arg1 ;
-(id)gotoFirstSlide;
-(id)gotoLastSlide;
-(id<TSDCanvasDelegate>)canvasDelegate;
-(id)newTransitionTo:(id)arg1 ;
-(void)invalidateAnimatedSlideViewCache;
-(void)p_setCurrentSlideNode:(id)arg1 ;
-(void)dropABreadCrumb;
-(id)nextSlideNodeAfterSlideNode:(id)arg1 ;
-(id)previousSlideNodeBeforeCurrent;
-(id)lastSlideNode;
-(id)breadCrumb;
-(KNAnimatedSlideView *)currentCachedAnimatedSlideView;
-(float)showScale;
-(void)p_executeEndShowHandler;
-(char)shouldDrawTexturesAsynchronously;
-(void)setShouldDrawTexturesAsynchronously:(char)arg1 ;
-(void)setShouldUseSourceImage:(char)arg1 ;
-(id)nextSlideAfterCurrent;
-(char)atBegginingOfDeck;
-(id)newCanvas;
-(id)textureSetForRep:(id)arg1 shouldRender:(char)arg2 ;
-(void)renderTextureContentsIfNeeded:(id)arg1 ;
-(void)renderTextureSetContentsIfNeeded:(id)arg1 ;
-(void)executeEndShowHandlerAfterDelay:(double)arg1 ;
-(void)cancelEndShowHandler;
-(KNSlideNode *)alternateNextSlideNode;
-(void)setAlternateNextSlideNode:(KNSlideNode *)arg1 ;
-(NSMutableArray *)breadCrumbTrail;
-(void)setBreadCrumbTrail:(NSMutableArray *)arg1 ;
-(void)setCanvasDelegate:(id<TSDCanvasDelegate>)arg1 ;
-(id)endShowHandler;
-(void)setEndShowHandler:(id)arg1 ;
-(char)shouldAnimateTransitionOnLastSlide;
-(void)setShouldAnimateTransitionOnLastSlide:(char)arg1 ;
-(void)setShouldAnimateNullTransitions:(char)arg1 ;
-(char)shouldUseContentlessLayers;
-(void)setShouldUseContentlessLayers:(char)arg1 ;
-(char)skipSlides;
-(char)skipBuilds;
-(void)setSkipBuilds:(char)arg1 ;
-(void)setShouldPreferCARenderer:(char)arg1 ;
-(char)shouldAutomaticallyPlayMovies;
-(void)setShouldAutomaticallyPlayMovies:(char)arg1 ;
-(char)shouldShowVideoReflectionsAndMasks;
-(void)setShouldShowVideoReflectionsAndMasks:(char)arg1 ;
-(char)shouldAlwaysSetCurrentGLContextWhenDrawing;
-(char)isExitingShow;
-(void)setIsExitingShow:(char)arg1 ;
-(id)currentSlide;
-(KNShow *)show;
-(void)dealloc;
-(KNAnimationContext *)animationContext;
-(id)gotoNextSlide;
-(id)gotoPreviousSlide;
-(char)isPreview;
@end
