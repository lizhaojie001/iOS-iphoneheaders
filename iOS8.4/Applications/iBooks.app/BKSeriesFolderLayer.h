/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 7:10:25 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /Applications/iBooks.app/iBooks
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iBooks/iBooks-Structs.h>
#import <QuartzCore/CALayer.h>
#import <iBooks/BKSeriesFolderFrameProvider.h>

@protocol BKSeriesFolderLayerConfiguring;
@class CALayer;

@interface BKSeriesFolderLayer : CALayer <BKSeriesFolderFrameProvider> {

	char _shouldFadeInMasks;
	CALayer* _backgroundLayer;
	int _type;
	unsigned _numCoverImages;
	CGPathRef _selectionMaskPath;
	id<BKSeriesFolderLayerConfiguring> _configuration;
	CALayer* _container;
	CGRect _selectionRect;
	CGRect _frontCoverRect;

}

@property (assign,nonatomic,__weak) CALayer * backgroundLayer;                                     //@synthesize backgroundLayer=_backgroundLayer - In the implementation block
@property (nonatomic,readonly) int type;                                                           //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) unsigned numCoverImages;                                            //@synthesize numCoverImages=_numCoverImages - In the implementation block
@property (nonatomic,readonly) CGRect selectionRect;                                               //@synthesize selectionRect=_selectionRect - In the implementation block
@property (nonatomic,readonly) CGPathRef selectionMaskPath;                                        //@synthesize selectionMaskPath=_selectionMaskPath - In the implementation block
@property (nonatomic,readonly) CGRect frontCoverRect;                                              //@synthesize frontCoverRect=_frontCoverRect - In the implementation block
@property (assign,nonatomic) char shouldFadeInMasks;                                               //@synthesize shouldFadeInMasks=_shouldFadeInMasks - In the implementation block
@property (assign,nonatomic,__weak) id<BKSeriesFolderLayerConfiguring> configuration;              //@synthesize configuration=_configuration - In the implementation block
@property (assign,nonatomic,__weak) CALayer * container;                                           //@synthesize container=_container - In the implementation block
@property (nonatomic,readonly) CGRect frameForSeries; 
-(id)initWithType:(int)arg1 configuration:(id)arg2 ;
-(CGPathRef)selectionMaskPath;
-(CGRect)frontCoverRect;
-(CGRect)folderRect;
-(id)layoutRectsWithCount:(unsigned)arg1 ;
-(void)setShouldFadeInMasks:(char)arg1 ;
-(char)shouldFadeInMasks;
-(unsigned)numCoverImages;
-(CGRect)frameForSeries;
-(void)setBackgroundLayer:(CALayer *)arg1 ;
-(void)_setupMaskLayersAndOpacity;
-(CALayer *)backgroundLayer;
-(id)layoutRects;
-(id)_addRects:(id)arg1 toMaskLayer:(id)arg2 maskIn:(char)arg3 ;
-(CGRect)_rectForImageAtPosition:(unsigned)arg1 frontRect:(CGRect)arg2 ;
-(id)init;
-(void)setFrame:(CGRect)arg1 ;
-(int)type;
-(id)animationKeys;
-(void)setContainer:(CALayer *)arg1 ;
-(void)removeAllAnimations;
-(CALayer *)container;
-(void)setConfiguration:(id<BKSeriesFolderLayerConfiguring>)arg1 ;
-(void)setImages:(CFArrayRef)arg1 ;
-(void)layoutSublayers;
-(CGRect)selectionRect;
-(id<BKSeriesFolderLayerConfiguring>)configuration;
@end

