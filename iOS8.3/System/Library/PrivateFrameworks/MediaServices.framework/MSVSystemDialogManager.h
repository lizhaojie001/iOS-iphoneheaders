/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 2:27:22 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/MediaServices.framework/MediaServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <MediaServices/MediaServices-Structs.h>
@class NSObject;

@interface MSVSystemDialogManager : NSObject {

	CFDictionaryRef _registeredSystemDialogs;
	NSObject*<OS_dispatch_queue> _serialQueue;

}
+(id)sharedManager;
-(void)dealloc;
-(id)init;
-(void)registerSystemDialog:(id)arg1 forUserNotification:(CFUserNotificationRef)arg2 ;
-(id)systemDialogForUserNotification:(CFUserNotificationRef)arg1 ;
-(void)unregisterSystemDialogWithUserNotification:(CFUserNotificationRef)arg1 ;
@end

