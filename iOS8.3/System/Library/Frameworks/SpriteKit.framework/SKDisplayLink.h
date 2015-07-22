/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, June 24, 2015 at 11:16:21 PM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/Frameworks/SpriteKit.framework/SpriteKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSTimer, CADisplayLink, NSObject;

@interface SKDisplayLink : NSObject {

	NSTimer* _timer;
	CADisplayLink* _caDisplayLink;
	unsigned _mode;
	char _paused;
	char _asynchronous;
	int _frameInterval;
	double _previousFrameTime;
	/*^block*/id _block;
	NSObject*<OS_dispatch_queue> _queue;
	float _averageFrameTime;
	int _frameCount;
	double _frameCountBeginTime;
	int _queuedFrameCount;
	unsigned _maxQueuedFrameCount;

}

@property (assign,getter=isPaused,nonatomic) char paused; 
@property (assign,nonatomic) int frameInterval; 
@property (assign,nonatomic) unsigned mode; 
@property (assign,nonatomic) char asynchronous; 
@property (assign) unsigned maxQueuedFrameCount;                       //@synthesize maxQueuedFrameCount=_maxQueuedFrameCount - In the implementation block
+(id)displayLinkWithBlock:(/*^block*/id)arg1 queue:(id)arg2 ;
-(void)_caDisplayLinkCallback;
-(void)setMaxQueuedFrameCount:(unsigned)arg1 ;
-(void)_nsTimerCallback;
-(unsigned)maxQueuedFrameCount;
-(void)_restart;
-(void)_callbackForNextFrame:(double)arg1 ;
-(char)asynchronous;
-(void)dealloc;
-(id)init;
-(void)setFrameInterval:(int)arg1 ;
-(void)_start;
-(int)frameInterval;
-(void)setMode:(unsigned)arg1 ;
-(unsigned)mode;
-(void)setPaused:(char)arg1 ;
-(void)_setup;
-(id)initWithBlock:(/*^block*/id)arg1 queue:(id)arg2 ;
-(void)_teardown;
-(char)isPaused;
-(void)setAsynchronous:(char)arg1 ;
@end
