/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 1:46:19 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GameCenterFoundation/GKCache.h>

@class NSMutableDictionary, GKLinkedList, NSString;

@interface GKCache : NSObject <GKCache> {

	NSMutableDictionary* _dictionary;
	GKLinkedList* _cacheList;
	unsigned _maxCount;
	unsigned _count;

}

@property (nonatomic,retain) NSMutableDictionary * dictionary;              //@synthesize dictionary=_dictionary - In the implementation block
@property (nonatomic,retain) GKLinkedList * cacheList;                      //@synthesize cacheList=_cacheList - In the implementation block
@property (assign,nonatomic) unsigned maxCount;                             //@synthesize maxCount=_maxCount - In the implementation block
@property (assign,nonatomic) unsigned count;                                //@synthesize count=_count - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setMaxCount:(unsigned)arg1 ;
-(void)dealloc;
-(unsigned)count;
-(void)removeAllObjects;
-(id)objectForKeyedSubscript:(id)arg1 ;
-(void)setObject:(id)arg1 forKeyedSubscript:(id)arg2 ;
-(NSMutableDictionary *)dictionary;
-(void)removeObjectForKey:(id)arg1 ;
-(void)setCount:(unsigned)arg1 ;
-(GKLinkedList *)cacheList;
-(void)setCacheList:(GKLinkedList *)arg1 ;
-(id)initWithMaxCount:(unsigned)arg1 ;
-(unsigned)maxCount;
-(void)setDictionary:(NSMutableDictionary *)arg1 ;
-(id)objectForKey:(id)arg1 ;
-(void)setObject:(id)arg1 forKey:(id)arg2 ;
@end

