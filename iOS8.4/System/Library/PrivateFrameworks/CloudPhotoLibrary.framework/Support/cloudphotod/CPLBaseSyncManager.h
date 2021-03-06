/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:21:30 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/Support/cloudphotod
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <CloudPhotoLibrary/CPLPlatformObject.h>
#import <cloudphotod/CPLEngineSyncManagerImplementation.h>

@protocol OS_dispatch_queue;
@class NSCountedSet, NSObject, NSProgress, NSString;

@interface CPLBaseSyncManager : CPLPlatformObject <CPLEngineSyncManagerImplementation> {

	NSCountedSet* _activities;
	unsigned long long _indicatorAge;
	double _startShowingIndicatorTime;
	NSObject*<OS_dispatch_queue> _indicatorQueue;
	BOOL _foreground;
	NSProgress* _progress;
	unsigned long long _currentState;
	BOOL _closed;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)_shouldShowIndicator;
-(void)_actuallyStartShowingIndicatorLocked;
-(void)_emitActivityStateLog;
-(void)_actuallyStopShowingIndicatorLocked;
-(void)_startShowingIndicator:(id)arg1 ;
-(long long)_baseProgressForState:(unsigned long long)arg1 totalUnits:(long long*)arg2 ;
-(void)_stopShowingIndicator:(id)arg1 ;
-(void)setSyncSessionShouldBeForeground:(BOOL)arg1 ;
-(void)syncSessionDidFailWithError:(id)arg1 ;
-(void)syncSessionDidSucceed;
-(void)didFinishSyncSession;
-(void)didMoveToState:(unsigned long long)arg1 ;
-(void)willStartSyncSession;
-(void)didProgress:(float)arg1 userInfo:(id)arg2 forState:(unsigned long long)arg3 ;
-(void)prepareForClose;
-(void)beginClientWork:(id)arg1 ;
-(void)endClientWork:(id)arg1 ;
-(id)initWithAbstractObject:(id)arg1 ;
@end

