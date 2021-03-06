/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, June 24, 2015 at 10:20:20 PM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <SpringBoard/_UISettingsKeyObserver.h>
#import <SpringBoard/SBVolumePressBandit.h>
#import <SpringBoard/SBAssertionDelegate.h>
#import <SpringBoard/BBObserverDelegate.h>

@class NSMutableArray, NSTimer, CPDistributedNotificationCenter, NSMutableSet, BBObserver, NSHashTable, SBAlertItemsSettings, SBAlertItem, NSArray, NSString;

@interface SBAlertItemsController : NSObject <_UISettingsKeyObserver, SBVolumePressBandit, SBAssertionDelegate, BBObserverDelegate> {

	NSMutableArray* _lockedAlertItems;
	NSMutableArray* _unlockedAlertItems;
	NSMutableArray* _pendingAlertItems;
	NSMutableArray* _superModalAlertItems;
	NSTimer* _autoDismissTimer;
	CPDistributedNotificationCenter* _notificationCenter;
	unsigned _notificationClientCount;
	char _systemShuttingDown;
	char _lockedButNotSetupYet;
	NSMutableSet* _forceAlertsToPendReasons;
	BBObserver* _bbObserver;
	NSHashTable* _observers;
	SBAlertItemsSettings* _settings;
	SBAlertItem* _testItem;
	NSMutableSet* _suppressionAssertions;

}

@property (nonatomic,readonly) NSArray * lockedAlertItems;              //@synthesize lockedAlertItems=_lockedAlertItems - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(char)hasVisibleAlert;
-(void)noteSystemShuttingDown;
-(void)noteVolumeOrLockPressedOverLockedAlerts;
-(char)deactivateAlertItemsOfClass:(Class)arg1 ;
-(void)handleVolumeIncrease;
-(void)handleVolumeDecrease;
-(char)hasAlerts;
-(char)canDeactivateAlertForMenuClickOrSystemGesture;
-(char)deactivateAlertForMenuClickOrSystemGestureWithAnimation:(char)arg1 ;
-(void)deactivateAlertItemsForFullscreenAlertActivationAndPendMiniAlerts:(char)arg1 ;
-(void)stopPendingAlertItemsForFullscreenAlert;
-(void)setForceAlertsToPend:(char)arg1 forReason:(id)arg2 ;
-(void)moveActiveAlertsToPendingWithAnimation:(char)arg1 ;
-(id)alertItemsOfClass:(Class)arg1 ;
-(id)visibleAlertItem;
-(char)captureSuppressionAssertionWithPort:(unsigned)arg1 reason:(id)arg2 ;
-(char)hasAlertOfClass:(Class)arg1 ;
-(void)deactivateAlertItem:(id)arg1 reason:(int)arg2 animated:(char)arg3 ;
-(void)activateAlertItem:(id)arg1 animated:(char)arg2 ;
-(void)_notificationClientStarted:(id)arg1 ;
-(void)_notificationClientEnded:(id)arg1 ;
-(void)_buddyDidExit;
-(void)_lockedButNotSetupYetChanged;
-(void)autoDismissAlertItem:(id)arg1 ;
-(void)_activateSuperModalAlertsIfNecessary;
-(void)activatePendedAlertsIfNecessary;
-(char)deactivateAlertItemsOfClass:(Class)arg1 reason:(int)arg2 ;
-(char)deactivateAlertItemsOfClass:(Class)arg1 reason:(int)arg2 animated:(char)arg3 ;
-(void)_postAlertPresentedNotificationForType:(int)arg1 sender:(id)arg2 date:(id)arg3 ;
-(void)assertionExpired:(id)arg1 ;
-(char)hasVisibleSuperModalAlert;
-(void)convertUnlockedAlertsToLockedAlerts;
-(void)resetAutoDismissTimer;
-(char)dontLockOverAlertItems;
-(NSArray *)lockedAlertItems;
-(void)deactivateAlertItem:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(NSString *)description;
-(void)removeObserver:(id)arg1 ;
-(void)settings:(id)arg1 changedValueForKey:(id)arg2 ;
-(void)addObserver:(id)arg1 ;
-(void)observer:(id)arg1 addBulletin:(id)arg2 forFeed:(unsigned)arg3 ;
-(void)notifySystemOfAlertItemActivation:(id)arg1 ;
-(void)deactivateAlertItem:(id)arg1 reason:(int)arg2 ;
-(void)_notifyObservers:(/*^block*/id)arg1 ;
-(void)activateAlertItem:(id)arg1 ;
@end

