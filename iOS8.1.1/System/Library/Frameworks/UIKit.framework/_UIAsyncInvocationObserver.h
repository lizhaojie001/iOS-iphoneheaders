/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:29:26 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject;

@interface _UIAsyncInvocationObserver : NSObject {

	NSObject*<OS_dispatch_queue> _postCompletionQueue;

}
+(void)whenInvocationsCompleteForObservers:(id)arg1 do:(/*^block*/id)arg2 ;
-(void)dealloc;
-(id)init;
-(void)whenCompleteDo:(/*^block*/id)arg1 ;
-(void)_didCompleteInvocation;
@end

