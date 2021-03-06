/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, June 24, 2015 at 10:31:36 PM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <AVFoundation/AVFoundation-Structs.h>
@class NSObject;

@interface AVCallbackRegistry : NSObject {

	CFBagRef _observers;
	NSObject*<OS_dispatch_queue> _readWriteQueue;

}
+(id)sharedCallbackRegistry;
+(void)initialize;
-(void)registerCallbackObserver:(id)arg1 ;
-(void)unregisterCallbackObserver:(id)arg1 ;
-(id)callbackObserver:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(void)finalize;
@end

