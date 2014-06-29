/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:26:26 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSCH3DSceneRenderPipeline.h>

@interface TSCH3DGetBoundsPipeline : TSCH3DSceneRenderPipeline

@property (nonatomic,readonly) const ObjectBounds* bounds; 
+(id)pipelineWithScene:(id)arg1 renderProcessor:(id)arg2 ;
+(id)pipelineWithScene:(id)arg1 ;
-(Class)labelsMeshRendererClassForLabelsRenderer:(id)arg1 ;
-(bool)shouldSkipLabelsIfHidden;
-(void)getBounds:(id)arg1 ;
-(void)setObjectRenderMode:(int)arg1 ;
-(void)extend2DProjectedBounds:(const box<glm::detail::tvec3<float> >*)arg1 ;
-(void)resetBounds;
-(id)initWithScene:(id)arg1 renderProcessor:(id)arg2 ;
-(id)boundsProcessor;
-(bool)useIndividualBounds;
-(void)set2DProjectedRenderingMode:(bool)arg1 ;
-(void)runScene:(id)arg1 selector:(SEL)arg2 ;
-(void)get3DBounds:(id)arg1 ;
-(void)getProjectedBounds:(id)arg1 ;
-(id)initWithScene:(id)arg1 ;
-(const ObjectBounds*)bounds;
-(bool)run;
@end
