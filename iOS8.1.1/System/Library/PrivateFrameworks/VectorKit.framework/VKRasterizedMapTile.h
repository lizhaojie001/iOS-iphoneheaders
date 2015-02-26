/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:34:29 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <VectorKit/VectorKit-Structs.h>
#import <VectorKit/VKRasterTile.h>

@interface VKRasterizedMapTile : VKRasterTile
-(void)buildTexture;
-(id)initWithKey:(const VKTileKey*)arg1 gglTexture:(const shared_ptr<ggl::Texture2D>*)arg2 styleManager:(id)arg3 ;
-(void)gglBuildTexture;
@end
