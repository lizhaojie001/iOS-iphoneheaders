/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:21:38 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <QuartzCore/QuartzCore-Structs.h>
#import <QuartzCore/CAContext.h>

@interface CAContextImpl : CAContext {

	Context* _impl;

}
-(ContextRef)renderContext;
-(id)initWithOptions:(id)arg1 localContext:(bool)arg2 ;
-(id)initRemoteWithOptions:(id)arg1 ;
-(void)orderBelow:(unsigned)arg1 ;
-(void)dealloc;
-(id)layer;
-(void)invalidate;
-(unsigned)contextId;
-(void)orderAbove:(unsigned)arg1 ;
-(void)setLayer:(id)arg1 ;
-(void)setLevel:(float)arg1 ;
-(void)setFencePort:(unsigned)arg1 commitHandler:(/*^block*/ id)arg2 ;
-(void)setFencePort:(unsigned)arg1 ;
-(void)setFence:(unsigned)arg1 count:(unsigned)arg2 ;
-(float)level;
-(unsigned)createFencePort;
-(unsigned)createImageSlot:(CGSize)arg1 hasAlpha:(bool)arg2 ;
-(void)deleteSlot:(unsigned)arg1 ;
-(id)options;
-(bool)valid;
-(unsigned)createSlot;
-(void)setObject:(id)arg1 forSlot:(unsigned)arg2 ;
-(void)setColorSpace:(CGColorSpaceRef)arg1 ;
-(CGColorSpaceRef)colorSpace;
@end

