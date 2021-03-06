/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:09:25 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSCH3DTileImageSceneRenderPipelineImageGenerator.h>

@class TSCH3DPixelBuffer;

@interface TSCH3DTileImageSceneRenderPipelineSingleImageGenerator : TSCH3DTileImageSceneRenderPipelineImageGenerator {

	TSCH3DPixelBuffer* mBuffer;

}
+(id)generatorWithFullViewportSize:(const tvec2<int>*)arg1 ;
-(id)initWithFullViewportSize:(const tvec2<int>*)arg1 ;
-(void)processSourceRegion:(const box<glm::detail::tvec2<int> >*)arg1 targetRegion:(const box<glm::detail::tvec2<int> >*)arg2 ;
-(void)dealloc;
-(id)images;
@end

