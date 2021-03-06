/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:21:04 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/ExternalAccessory.framework/ExternalAccessory
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <ExternalAccessory/ExternalAccessory-Structs.h>
@class NSMutableArray, NSLock;

@interface EANotificationCenter : NSObject {

	/*function pointer*/ void* _callback;
	void* _context;
	CFRunLoopRef _runLoopForNotifications;
	CFRunLoopSourceRef _runLoopSource;
	NSMutableArray* _notifications;
	NSLock* _notificationsLock;

}
-(void)_notificationHandler:(id)arg1 ;
-(void)setCallback:(/*function pointer*/ void*)arg1 andContext:(void*)arg2 andRunLoop:(CFRunLoopRef)arg3 ;
-(void)notificationCallback;
-(void)dealloc;
-(id)init;
@end

