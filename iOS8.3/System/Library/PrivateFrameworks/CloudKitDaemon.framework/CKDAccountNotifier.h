/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 1:05:17 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMapTable, NSOperationQueue;

@interface CKDAccountNotifier : NSObject {

	int _accountChangedToken;
	NSMapTable* _notificationObservers;
	NSOperationQueue* _notifyQueue;

}

@property (assign,nonatomic) int accountChangedToken;                         //@synthesize accountChangedToken=_accountChangedToken - In the implementation block
@property (nonatomic,retain) NSMapTable * notificationObservers;              //@synthesize notificationObservers=_notificationObservers - In the implementation block
@property (nonatomic,retain) NSOperationQueue * notifyQueue;                  //@synthesize notifyQueue=_notifyQueue - In the implementation block
+(id)sharedNotifier;
-(void)dealloc;
-(id)init;
-(void)postAccountChangedNotification:(id)arg1 ;
-(void)registerObserver:(id)arg1 forAccountChangeNotification:(/*^block*/id)arg2 ;
-(void)unregisterObserverForAccountChangeNotification:(id)arg1 ;
-(NSMapTable *)notificationObservers;
-(NSOperationQueue *)notifyQueue;
-(int)accountChangedToken;
-(void)setAccountChangedToken:(int)arg1 ;
-(void)setNotificationObservers:(NSMapTable *)arg1 ;
-(void)setNotifyQueue:(NSOperationQueue *)arg1 ;
@end

