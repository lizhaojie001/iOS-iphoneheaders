/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:58:09 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <VectorKit/VectorKit-Structs.h>
#import <GeoServices/GEOResourceManifestTileGroupObserver.h>

@class NSMapTable, _VKLocalIconAtlas;

@interface VKIconManager : NSObject <GEOResourceManifestTileGroupObserver> {

	NSMapTable* _defaultAtlases;
	NSMapTable* _regionalAtlases;
	_VKLocalIconAtlas* _localAtlas;

}
+(id)sharedManager;
-(void)dealloc;
-(id)init;
-(void)_didReceiveMemoryWarning:(id)arg1 ;
-(void)purge;
-(void)resourceManifestManagerWillChangeActiveTileGroup:(id)arg1 ;
-(void)resourceManifestManagerDidChangeActiveTileGroup:(id)arg1 ;
-(id)artworkForName:(id)arg1 withResourceNames:(id)arg2 style:(SCD_Struct_VK122*)arg3 contentScale:(float)arg4 styleAttributes:(id)arg5 ;
-(id)artworkForFeatureID:(unsigned long long)arg1 withResourceNames:(id)arg2 style:(SCD_Struct_VK122*)arg3 contentScale:(float)arg4 ;
-(id)_atlasForName:(id)arg1 ;
-(id)_defaultAtlasForScale:(float)arg1 ;
@end
