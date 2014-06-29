/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:26:28 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableArray;

@interface TSCH3DSceneRenderCacheObject : NSObject {

	bool mCachingEnabled;
	NSMutableArray* mDynamicResources;
	NSMutableArray* mChildCacheObjects;

}

@property (assign,nonatomic) bool cachingEnabled; 
+(id)cacheObject;
-(void)allocateDynamicResourcesIntoArray:(id)arg1 ;
-(int)p_resourceUpdateFlag;
-(void)p_updateResourceUpdateFlags:(int)arg1 ;
-(id)resourceAtIndex:(unsigned long long)arg1 created:(bool*)arg2 ifAbsent:(/*^block*/ id)arg3 ;
-(id)childCacheObjectAtIndex:(unsigned long long)arg1 ;
-(void)dealloc;
-(id)init;
-(void)flushCache;
-(id)resourceAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)resourceCount;
-(void)setCachingEnabled:(bool)arg1 ;
-(bool)cachingEnabled;
@end
