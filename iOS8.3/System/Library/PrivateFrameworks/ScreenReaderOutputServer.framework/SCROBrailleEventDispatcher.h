/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 3:29:19 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/ScreenReaderOutputServer.framework/ScreenReaderOutputServer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <ScreenReaderOutputServer/ScreenReaderOutputServer-Structs.h>
@class NSLock, NSMutableArray;

@interface SCROBrailleEventDispatcher : NSObject {

	NSLock* _queueLock;
	CFRunLoopRef _runLoop;
	CFRunLoopSourceRef _queueSource;
	CFArrayRef _queue;
	NSMutableArray* _brailleEventQueue;
	id _target;
	char _isValid;

}
-(void)dealloc;
-(void)invalidate;
-(char)isValid;
-(id)initWithTarget:(id)arg1 ;
-(void)start;
-(void)enqueueEvent:(id)arg1 ;
-(void)_processQueue;
@end
