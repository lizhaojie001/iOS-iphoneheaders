/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:35:19 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/TSPComponentWriteChannel.h>

@protocol OS_dispatch_queue;
@class NSObject, TSUFileIOChannel, NSError, NSString;

@interface TSPComponentWriteChannelAdapter : NSObject <TSPComponentWriteChannel> {

	NSObject*<OS_dispatch_queue> _queue;
	TSUFileIOChannel* _channel;
	/*^block*/id _handler;
	NSError* _error;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithQueue:(id)arg1 channel:(id)arg2 handler:(/*^block*/id)arg3 ;
-(void)close;
-(void)writeData:(id)arg1 ;
-(void)setError:(id)arg1 ;
@end

