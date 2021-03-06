/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:52:04 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/EventKit.framework/EventKit
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_source;
@class NSString, NSObject;

@interface EKWatchdog : NSObject {

	double _timeout;
	NSString* _identifier;
	NSObject<OS_dispatch_source>* _timer;

}
+(void)executeWithTimeout:(double)arg1 identifier:(id)arg2 block:(/*^block*/ id)arg3 ;
-(id)initWithTimeout:(double)arg1 identifier:(id)arg2 ;
-(id)initWithTimeout:(double)arg1 identifier:(id)arg2 block:(/*^block*/ id)arg3 ;
-(void)dealloc;
-(void)invalidate;
-(void)start;
@end

