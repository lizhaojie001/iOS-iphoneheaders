/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:18:47 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/SpriteKit.framework/SpriteKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class SKUniform;

@interface SKUniformInfo : NSObject {

	unsigned long long seed;
	unsigned long long textureTarget;
	SKUniform* uniform;

}

@property (assign) unsigned long long seed; 
@property (assign) unsigned long long textureTarget; 
@property (retain) SKUniform * uniform; 
-(void)setSeed:(unsigned long long)arg1 ;
-(unsigned long long)textureTarget;
-(void)setTextureTarget:(unsigned long long)arg1 ;
-(SKUniform *)uniform;
-(void)setUniform:(SKUniform *)arg1 ;
-(id)init;
-(unsigned long long)seed;
@end

