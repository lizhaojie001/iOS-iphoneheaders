/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:55:08 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSHashTable, NSLock, NSObject;

@interface _GEOResourceManifestTileGroupObserverProxy : NSObject {

	NSHashTable* _observers;
	NSLock* _observersLock;
	NSObject<OS_dispatch_queue>* _queue;

}

@property (assign,nonatomic) NSObject<OS_dispatch_queue> * queue;              //@synthesize queue=_queue - In the implementation block
-(void)dealloc;
-(id)init;
-(id)description;
-(void)removeObserver:(id)arg1 ;
-(void)addObserver:(id)arg1 ;
-(id)queue;
-(void)setQueue:(id)arg1 ;
-(unsigned)observersCount;
-(void)forEachObserver:(/*^block*/ id)arg1 finished:(/*^block*/ id)arg2 ;
@end

