/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:18:52 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /usr/libexec/backboardd
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <backboardd/backboardd-Structs.h>
@class NSObject;

@interface BKHIDServiceNotificationManager : NSObject {

	IOHIDEventSystemRef _hidEventSystem;
	NSObject<OS_dispatch_queue>* _queue;
	CFDictionaryRef _matchingDictionaryToActionMapping;
	CFDictionaryRef _serviceToRemovalNotificationMapping;
	CFDictionaryRef _serviceToRemovalActionsMapping;

}
-(id)initWithHIDEventSystem:(IOHIDEventSystemRef)arg1 ;
-(void)watchServicesMatching:(id)arg1 additionBlock:(/*^block*/ id)arg2 removalBlock:(/*^block*/ id)arg3 ;
-(void)watchServiceForRemoval:(IOHIDServiceRef)arg1 removalBlock:(/*^block*/ id)arg2 ;
-(void)_servicesAdded:(id)arg1 matchingActions:(id)arg2 ;
-(void)_servicesAdded:(id)arg1 matchingDictionary:(id)arg2 ;
-(void)_serviceRemoved:(IOHIDServiceRef)arg1 ;
-(void)dealloc;
@end

