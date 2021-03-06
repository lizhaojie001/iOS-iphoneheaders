/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:18:46 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/SpriteKit.framework/SpriteKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SpriteKit/SpriteKit-Structs.h>
#import <SpriteKit/SKNode.h>

@class UIColor;

@interface SKLightNode : SKNode {

	BOOL _enabled;
	unsigned _categoryBitMask;
	UIColor* _lightColor;
	UIColor* _ambientColor;
	UIColor* _shadowColor;
	double _falloff;

}

@property (assign,getter=isEnabled,nonatomic) BOOL enabled;              //@synthesize enabled=_enabled - In the implementation block
@property (nonatomic,retain) UIColor * lightColor;                       //@synthesize lightColor=_lightColor - In the implementation block
@property (nonatomic,retain) UIColor * ambientColor;                     //@synthesize ambientColor=_ambientColor - In the implementation block
@property (nonatomic,retain) UIColor * shadowColor;                      //@synthesize shadowColor=_shadowColor - In the implementation block
@property (assign,nonatomic) double falloff;                             //@synthesize falloff=_falloff - In the implementation block
@property (assign,nonatomic) unsigned categoryBitMask;                   //@synthesize categoryBitMask=_categoryBitMask - In the implementation block
-(double)falloff;
-(void)setFalloff:(double)arg1 ;
-(BOOL)isEqualToNode:(id)arg1 ;
-(void)setLightColor:(UIColor *)arg1 ;
-(void)setAmbientColor:(UIColor *)arg1 ;
-(void)setLightCategoryBitMask:(unsigned)arg1 ;
-(void)setLightDecay:(double)arg1 ;
-(UIColor *)ambientColor;
-(UIColor *)lightColor;
-(double)lightDecay;
-(unsigned)lightCategoryBitMask;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(void)setEnabled:(BOOL)arg1 ;
-(BOOL)isEnabled;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setShadowColor:(UIColor *)arg1 ;
-(UIColor *)shadowColor;
-(unsigned)categoryBitMask;
-(void)setCategoryBitMask:(unsigned)arg1 ;
@end

