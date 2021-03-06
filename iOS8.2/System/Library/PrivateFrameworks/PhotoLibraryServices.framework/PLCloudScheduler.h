/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:20:48 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PhotoLibraryServices/PLCloudScenarioConsumer.h>

@protocol OS_dispatch_queue;
@class NSObject, NSMutableOrderedSet, NSMutableDictionary, NSString;

@interface PLCloudScheduler : NSObject <PLCloudScenarioConsumer> {

	NSObject*<OS_dispatch_queue> _backlogSync;
	NSObject*<OS_dispatch_queue> _operationsQueue;
	int _concurrencyLevel;
	NSMutableOrderedSet* _pendingOperations;
	NSMutableDictionary* _pendingScenarios;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)consumeScenario:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)reporioritizeBacklogOperations;
-(void)completeOperation:(id)arg1 withError:(id)arg2 ;
-(void)runNextOperation;
-(id)initWithConfiguration:(id)arg1 ;
-(unsigned)operationsBacklogLimit;
@end

