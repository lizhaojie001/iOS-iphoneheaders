/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:32:05 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/HomeSharing.framework/HomeSharing
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol HSMediaLibraryImportObserverDelegate;
@class NSTimer;

@interface HSMediaLibraryImportObserver : NSObject {

	NSTimer* _updateTimer;
	unsigned long long _consecutiveUpdateFailures;
	BOOL _stopped;
	BOOL _updating;
	id<HSMediaLibraryImportObserverDelegate> _delegate;
	double _updateInterval;

}

@property (assign,nonatomic) id<HSMediaLibraryImportObserverDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (getter=isUpdating,nonatomic,readonly) BOOL updating;                              //@synthesize updating=_updating - In the implementation block
@property (assign,nonatomic) double updateInterval;                                          //@synthesize updateInterval=_updateInterval - In the implementation block
-(BOOL)isUpdating;
-(void)dealloc;
-(void)setDelegate:(id<HSMediaLibraryImportObserverDelegate>)arg1 ;
-(id)init;
-(id<HSMediaLibraryImportObserverDelegate>)delegate;
-(double)updateInterval;
-(void)setUpdateInterval:(double)arg1 ;
-(void)_updateImportStatus:(id)arg1 ;
-(void)beginUpdating;
-(void)stopUpdating;
@end

