/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:25:45 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <VectorKit/VectorKit-Structs.h>
@interface VKAnchorContext : NSObject {

	shared_ptr<vk::AnchorContext>* _anchorContext;
	shared_ptr<vk::AnchorFactory>* _anchorFactory;

}
-(id)init;
-(id).cxx_construct;
-(void).cxx_destruct;
-(shared_ptr<vk::AnchorContext>*)anchorContext;
-(void)setMercatorTerrainHeightCache:(id)arg1 ;
-(id)initMercator;
-(bool)isMercator;
-(id)newAnchorAtCoordinate:(CGPoint)arg1 followsTerrain:(bool)arg2 ;
-(id)initWithAnchorContext:(AnchorContext*)arg1 ;
-(shared_ptr<vk::AnchorFactory>*)anchorFactory;
-(id)initGeocentricWithCache:(id)arg1 ;
@end

