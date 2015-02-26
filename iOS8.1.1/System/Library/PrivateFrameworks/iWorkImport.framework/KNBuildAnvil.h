/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:35:47 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/KNAnimationEffect.h>
#import <iWorkImport/KNFrameBuildAnimator.h>
#import <iWorkImport/KNAnimationPluginArchiving.h>

@class TSDGLParticleSystem, TSDGLShader, TSDGLTextureInfo, TSDGLDataBuffer, NSString;

@interface KNBuildAnvil : KNAnimationEffect <KNFrameBuildAnimator, KNAnimationPluginArchiving> {

	TSDGLParticleSystem* _smokeSystem;
	TSDGLShader* _smokeShader;
	TSDGLTextureInfo* _smokeTexture;
	TSDGLParticleSystem* _specksSystem;
	TSDGLShader* _specksShader;
	TSDGLTextureInfo* _specksTexture;
	CGPoint* _cameraShakePoints;
	CATransform3D _baseTransform;
	TSDGLShader* _objectShader;
	TSDGLShader* _objectBlurShader;
	TSDGLDataBuffer* _objectDataBuffer;
	TSDGLDataBuffer* _objectBlurDataBuffer;
	CGRect _drawableFrame;
	CGRect _frameRect;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)animationFilter;
+(int)animationCategory;
+(id)supportedTypes;
+(id)localizedMenuString:(int)arg1 ;
+(unsigned long long)directionType;
+(void)fillLocalizedDirectionMenu:(id)arg1 forType:(int)arg2 ;
+(id)thumbnailImageNameForType:(int)arg1 ;
+(void)upgradeAttributes:(id*)arg1 animationName:(id)arg2 warning:(id*)arg3 type:(int)arg4 isFromClassic:(BOOL)arg5 version:(unsigned long long)arg6 ;
+(void)downgradeAttributes:(id*)arg1 animationName:(id*)arg2 warning:(id*)arg3 type:(int)arg4 isToClassic:(BOOL)arg5 version:(unsigned long long)arg6 ;
+(BOOL)requiresSingleTexturePerStage;
+(id)defaultAttributes;
+(id)animationName;
-(void)animationWillBeginWithContext:(id)arg1 ;
-(void)animationDidEndWithContext:(id)arg1 ;
-(void)renderFrameWithContext:(id)arg1 ;
-(CGRect)frameOfEffectWithFrame:(CGRect)arg1 context:(id)arg2 ;
-(id)p_smokeSystemForTR:(id)arg1 build:(id)arg2 ;
-(id)p_specksSystemForTR:(id)arg1 build:(id)arg2 ;
-(CGPoint*)p_cameraShakePoints;
-(CGPoint)p_objectTranslationAtPercent:(double)arg1 duration:(double)arg2 objectSmashDuration:(double)arg3 objectFrame:(CGRect)arg4 ;
-(void)dealloc;
@end
