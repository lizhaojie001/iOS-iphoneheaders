/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 2:47:46 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/MusicUI.framework/MusicUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString;

@interface _MusicViewControllerNotificationObserver : NSObject {

	NSString* _notificationName;
	id _object;
	SEL _selector;
	id _target;

}

@property (nonatomic,readonly) NSString * notificationName;              //@synthesize notificationName=_notificationName - In the implementation block
@property (nonatomic,__weak,readonly) id object;                         //@synthesize object=_object - In the implementation block
@property (nonatomic,readonly) SEL selector;                             //@synthesize selector=_selector - In the implementation block
@property (nonatomic,__weak,readonly) id target;                         //@synthesize target=_target - In the implementation block
-(void)dealloc;
-(id)target;
-(SEL)selector;
-(id)object;
-(id)initWithTarget:(id)arg1 selector:(SEL)arg2 notificationName:(id)arg3 object:(id)arg4 ;
-(void)_didReceiveNotification:(id)arg1 ;
-(NSString *)notificationName;
@end
