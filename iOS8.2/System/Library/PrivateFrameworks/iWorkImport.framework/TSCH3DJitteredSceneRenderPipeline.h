/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:27:06 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/TSCH3DSceneRenderPipeline.h>
#import <iWorkImport/TSCH3DMultipassRenderPipeline.h>

@class TSCH3DGLFramebuffer, TSCH3DFramebufferAccumulationPipeline;

@interface TSCH3DJitteredSceneRenderPipeline : TSCH3DSceneRenderPipeline <TSCH3DMultipassRenderPipeline> {

	TSCH3DGLFramebuffer* mRenderingFBO;
	TSCH3DFramebufferAccumulationPipeline* mAccumulationPipeline;
	int mJitter;
	int mTotalJitters;
	int mRefinementJitters;

}

@property (nonatomic,retain) TSCH3DGLFramebuffer * renderingFBO; 
@property (nonatomic,retain) TSCH3DFramebufferAccumulationPipeline * accumulationPipeline; 
-(void)setFramebuffer:(id)arg1 ;
-(id)initWithProcessor:(id)arg1 session:(id)arg2 scene:(id)arg3 ;
-(id)renderingFBOResource;
-(void)resetMultipassRendering;
-(char)multipassRenderingIsDone;
-(void)skipLowQualityPass;
-(char)updatesTargetFramebuffer;
-(char)isActivePass;
-(void)setRenderingFBO:(TSCH3DGLFramebuffer *)arg1 ;
-(TSCH3DGLFramebuffer *)renderingFBO;
-(void)setAccumulationPipeline:(TSCH3DFramebufferAccumulationPipeline *)arg1 ;
-(char)refinementIsReady;
-(id)jitterCamera:(id)arg1 ;
-(TSCH3DFramebufferAccumulationPipeline *)accumulationPipeline;
-(char)render;
-(void)dealloc;
-(void)releaseResources;
@end

