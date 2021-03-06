/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:21:06 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <Foundation/Foundation-Structs.h>
@class NSOperation, NSOperationQueue;

@interface __NSOperationInternal : NSObject {

	unsigned char __pad1[16];
	NSOperation* __outerOp;
	NSOperation* __prevOp;
	NSOperation* __nextOp;
	NSOperation* __nextPriOp;
	NSOperationQueue* __queue;
	id __dependencies;
	id __down_dependencies;
	long long __unfinished_deps;
	/*^block*/ id __completion;
	void* __obsInfo;
	void* __implicitObsInfo;
	long long __seqno;
	double __thread_prio;
	int __RC;
	int __state;
	BOOL __prio;
	unsigned char __cached_isReady;
	unsigned char __isCancelled;
	unsigned char __isBarrier;
	unsigned char __pad2[4];
	opaque_pthread_mutex_t __wait_mutex;
	opaque_pthread_cond_t __wait_cond;
	unsigned char __pad3[40];

}
+(void)_observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 changeKind:(unsigned long long)arg3 oldValue:(id)arg4 newValue:(id)arg5 indexes:(id)arg6 context:(void*)arg7 ;
-(bool)_isCancelled;
-(void)_cancel:(id)arg1 ;
-(bool)_isExecuting;
-(bool)_isFinished;
-(bool)_isReady;
-(long long)_queuePriority;
-(void)_setQueuePriority:(long long)arg1 outer:(id)arg2 ;
-(double)_threadPriority;
-(void)_setThreadPriority:(double)arg1 ;
-(void)_setCompletionBlock:(/*^block*/ id)arg1 ;
-(void)_waitUntilFinished:(id)arg1 ;
-(void)_waitUntilFinishedOrTimeout:(double)arg1 outer:(id)arg2 ;
-(void)_addDependency:(id)arg1 outer:(id)arg2 ;
-(void)_removeDependency:(id)arg1 outer:(id)arg2 ;
-(id)_dependencies;
-(void)_start:(id)arg1 ;
-(id)__;
-(void)dealloc;
-(id)init;
-(/*^block*/ id)_completionBlock;
-(void)_invalidate;
-(void)finalize;
@end

