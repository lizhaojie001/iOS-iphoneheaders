/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:20:56 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/RadioUI.framework/RadioUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSOperationQueue, RadioRequestContext, NSObject;

@interface RURadioOperationQueue : NSObject {

	NSOperationQueue* _operationQueue;
	RadioRequestContext* _requestContext;
	NSObject*<OS_dispatch_queue> _serialQueue;

}
+(id)sharedQueue;
-(void)addStationWithRequest:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(id)init;
-(void)addGetTracksOperation:(id)arg1 ;
-(void)getHistoryWithRequest:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)loadRadioConfigurationWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)warmOperationQueue;
-(void)cancelPlaybackPreparation;
-(void)preparePlaybackForStation:(id)arg1 withCompletionBlock:(/*^block*/id)arg2 ;
-(void)_addOperation:(id)arg1 ;
-(void)_cancelPlaybackPreparation;
-(void)sendPlayEventCollection:(id)arg1 withCompletionBlock:(/*^block*/id)arg2 ;
@end

