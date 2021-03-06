/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:21:31 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/MediaToolbox.framework/MediaToolbox
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class CMNetworkActivityMonitor;

@interface CMNetworkActivityObserver : NSObject {

	bool _valid;
	bool _registered;
	int _cmActivityToken;
	int _cmActivityPollingToken;
	CMNetworkActivityMonitor* _activityMonitor;

}

@property (nonatomic,readonly) CMNetworkActivityMonitor * activityMonitor; 
+(id)registeredObserverForActivityMonitor:(id)arg1 ;
-(void)unregisterObservations;
-(id)activityMonitor;
-(void)_pollWithInterval:(double)arg1 networkActivityDidCompleteBlock:(/*^block*/ id)arg2 ;
-(void)registerObservations;
-(id)initForActivityMonitor:(id)arg1 ;
-(void)dealloc;
-(void)invalidate;
@end

