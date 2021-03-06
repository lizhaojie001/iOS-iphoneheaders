/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:26:42 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class VKRasterMapTileCache, NSMutableDictionary, NSMutableSet, NSObject;

@interface VKRasterMapTileServer : NSObject {

	VKRasterMapTileCache* _superTileCache;
	NSMutableDictionary* _activeTileCreators;
	NSMutableDictionary* _pendingRequests;
	NSMutableSet* _tileCreators;
	unsigned _superTileSize;
	char _softwareRendering;
	NSObject*<OS_dispatch_queue> _homeQueue;

}

@property (nonatomic,readonly) unsigned superTileSize;              //@synthesize superTileSize=_superTileSize - In the implementation block
-(void)dealloc;
-(id)init;
-(id)detailedDescription;
-(unsigned)superTileSize;
-(void)renderRequest:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_renderRequest:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)initWithSuperTileSize:(unsigned)arg1 cache:(id)arg2 softwareRendering:(char)arg3 homeQueue:(id)arg4 ;
@end

