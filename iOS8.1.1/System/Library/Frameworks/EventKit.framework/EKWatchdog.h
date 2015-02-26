/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:28:06 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/Frameworks/EventKit.framework/EventKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_source;
@class NSString, NSObject;

@interface EKWatchdog : NSObject {

	double _timeout;
	NSString* _identifier;
	NSObject*<OS_dispatch_source> _timer;

}
+(void)executeWithTimeout:(double)arg1 identifier:(id)arg2 block:(/*^block*/id)arg3 ;
-(id)initWithTimeout:(double)arg1 identifier:(id)arg2 ;
-(id)initWithTimeout:(double)arg1 identifier:(id)arg2 block:(/*^block*/id)arg3 ;
-(void)dealloc;
-(void)invalidate;
-(void)start;
@end
