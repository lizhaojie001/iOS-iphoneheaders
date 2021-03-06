/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:26:28 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <iWorkImport/iWorkImport-Structs.h>
@class NSMutableSet, TSCH3DDictionaryOfDictionary;

@interface TSCH3DSceneRenderCache : NSObject {

	NSMutableSet* mEnabledKeys;
	TSCH3DDictionaryOfDictionary* mCache;

}
+(id)cacheFromScene:(id)arg1 ;
+(id)cache;
-(void)enableCache:(bool)arg1 forKey:(id)arg2 ;
-(bool)cacheEnabledForKey:(id)arg1 ;
-(id)cacheObjectForKey:(id)arg1 cacheID:(id)arg2 created:(bool*)arg3 ifAbsent:(/*^block*/ id)arg4 ;
-(void)setCacheObject:(id)arg1 forKey:(id)arg2 cacheID:(id)arg3 ;
-(void)dealloc;
-(id)init;
-(id)description;
-(id)copyWithZone:(NSZone)arg1 ;
@end

