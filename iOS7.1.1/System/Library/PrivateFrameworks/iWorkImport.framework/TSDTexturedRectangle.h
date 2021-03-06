/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:26:40 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <CoreFoundation/NSCopying.h>

@class CALayer, TSDTextureSet, NSMutableDictionary, NSMutableArray;

@interface TSDTexturedRectangle : NSObject <NSCopying> {

	CGPoint mOffset;
	CGPoint mOriginalPosition;
	CGSize mSize;
	CGRect mContentRect;
	CGRect mOriginalFrame;
	CALayer* mLayer;
	/*^block*/ id mRenderBlock;
	CGImageRef mSourceImage;
	CGImageRef mBakedImage;
	TSDTextureSet* mParent;
	int mTextureType;
	double mTextureOpacity;
	unsigned mSingleTextureName;
	bool mSingleTextureContainsMipmaps;
	bool mIsFlattened;
	NSMutableDictionary* mAttributes;
	NSMutableArray* mTags;
	CGColorSpaceRef mColorSpace;

}

@property (nonatomic,readonly) unsigned singleTextureName; 
@property (nonatomic,readonly) unsigned singleTextureTarget; 
@property (assign,nonatomic) CGPoint originalPosition; 
@property (assign,nonatomic) CGPoint offset; 
@property (nonatomic,readonly) CGSize size; 
@property (nonatomic,readonly) CGRect frame; 
@property (assign,nonatomic) CGRect contentRect; 
@property (assign,nonatomic) TSDTextureSet * parent; 
@property (nonatomic,readonly) CALayer * layer; 
@property (nonatomic,readonly) CGImageRef image; 
@property (nonatomic,readonly) float opacityFromAttributes; 
@property (nonatomic,readonly) CATransform3D transformFromAttributes; 
@property (nonatomic,retain) NSMutableDictionary * attributes; 
@property (nonatomic,retain) NSMutableArray * tags; 
@property (assign,nonatomic) int textureType; 
@property (assign,nonatomic) double textureOpacity; 
@property (nonatomic,readonly) double singleTextureOpacity; 
@property (assign,nonatomic) bool isFlattened; 
@property (assign,nonatomic) CGColorSpaceRef colorSpace; 
-(void)renderIntoContext:(CGContextRef)arg1 ;
-(id)initWithSize:(CGSize)arg1 offset:(CGPoint)arg2 renderBlock:(/*^block*/ id)arg3 ;
-(void)resetToSourceImage;
-(void)setTextureType:(int)arg1 ;
-(void)setTextureOpacity:(double)arg1 ;
-(void)releaseSingleTexture;
-(int)textureType;
-(CGColorSpaceRef)p_colorSpace;
-(CGImageRef)p_newImageAndBufferWithAngle:(double)arg1 scale:(double)arg2 offset:(CGPoint)arg3 ;
-(unsigned)singleTextureTarget;
-(void)setupSingleTextureAndGenerateMipMaps:(bool)arg1 ;
-(void)setupSingleTexture;
-(float)opacityFromAttributes;
-(CATransform3D)transformFromAttributes;
-(void)adjustAnchorRelativeToParentsCenterOfRotation:(CGPoint)arg1 isMagicMove:(bool)arg2 ;
-(void)resetAnchorPoint;
-(void)renderLayerContentsIfNeeded;
-(unsigned)singleTextureName;
-(double)singleTextureOpacity;
-(void)bakeLayerWithAngle:(double)arg1 scale:(double)arg2 ;
-(bool)isFlattened;
-(void)setIsFlattened:(bool)arg1 ;
-(CGPoint)originalPosition;
-(void)setOriginalPosition:(CGPoint)arg1 ;
-(double)textureOpacity;
-(void)dealloc;
-(CGSize)size;
-(id)layer;
-(CGRect)frame;
-(id)description;
-(id)copyWithZone:(NSZone)arg1 ;
-(id)initWithCGImage:(CGImageRef)arg1 ;
-(CGImageRef)image;
-(CGRect)contentRect;
-(void)setOffset:(CGPoint)arg1 ;
-(CGPoint)offset;
-(void)setContentRect:(CGRect)arg1 ;
-(id)initWithLayer:(id)arg1 ;
-(id)attributes;
-(void)setAttributes:(id)arg1 ;
-(void)setTags:(id)arg1 ;
-(id)tags;
-(void)teardown;
-(void)setColorSpace:(CGColorSpaceRef)arg1 ;
-(CGColorSpaceRef)colorSpace;
-(void)setParent:(id)arg1 ;
-(id)parent;
@end

