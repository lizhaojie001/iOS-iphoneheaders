/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:23:13 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/CoreServices/AssistiveTouch.app/assistivetouchd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <assistivetouchd/assistivetouchd-Structs.h>
@class SCRCThread, NSMutableArray, NSLock, NSString, NSThread, AXAssertion;

@interface HNDEventManager : NSObject {

	SCRCThread* _eventDispatchThread;
	NSMutableArray* _eventsToDispatch;
	NSMutableArray* _eventsToMatch;
	CFRunLoopSourceRef _source;
	CFRunLoopRef _runLoop;
	NSLock* _eventLock;
	char _isCapturingEvents;
	char _nubbitMoving;
	NSString* _axSpringBoardCallbackIdentifier;
	NSThread* _ioFilterThread;
	IOHIDEventSystemClientRef _ioSystemFilterClient;
	IOHIDEventSystemClientRef _ioSystemPostBackClient;
	AXAssertion* _disableSystemGesturesAssertion;
	IOHIDEventSystemClientRef _ioSystemClient;

}

@property (nonatomic,retain) AXAssertion * disableSystemGesturesAssertion;              //@synthesize disableSystemGesturesAssertion=_disableSystemGesturesAssertion - In the implementation block
@property (nonatomic,readonly) char isCapturingEvents;                                  //@synthesize isCapturingEvents=_isCapturingEvents - In the implementation block
@property (nonatomic,readonly) IOHIDEventSystemClientRef ioSystemClient;                //@synthesize ioSystemClient=_ioSystemClient - In the implementation block
+(void)initialize;
+(id)sharedManager;
-(void)resetEventManager;
-(void)setCaptureEvents:(char)arg1 ;
-(void)setNubbitMoving:(char)arg1 ;
-(void)performCancel;
-(void)systemServerRestarted;
-(void)performDownWithFingers:(id)arg1 ;
-(void)performUpWithFingers:(id)arg1 ;
-(void)performMoveWithFingers:(id)arg1 ;
-(void)notifyUserEventOccurred;
-(void)performHardwareButton:(int)arg1 state:(int)arg2 ;
-(char)isCapturingEvents;
-(void)wakeDeviceFromSleepIfNecessary;
-(void)manipulateDimTimer:(char)arg1 ;
-(void)ringerSwitchChanged;
-(void)substantialTransitionOccurred;
-(void)_startThread;
-(void)_initializeASTNotificationCenter;
-(void)_initializeSystemWideServerPort;
-(void)_initializeSpringBoardItems;
-(void)_resetEventManager;
-(void)_unregisterIOFilter;
-(void)keyboardStatusChanged:(id)arg1 userInfo:(id)arg2 ;
-(void)mediaControlsChanged:(id)arg1 userInfo:(id)arg2 ;
-(void)_disableIOFilter;
-(void)_startIOThread;
-(void)_registerIOHIDUsage;
-(void)_sendEventRepresentation:(id)arg1 ;
-(void)_sendHandEvent:(unsigned)arg1 location:(id)arg2 ;
-(void)_sendButtonEvent:(unsigned)arg1 ;
-(void)_sendDeviceOrientationChange:(int)arg1 ;
-(void)_takeScreenshot;
-(void)_toggleAppSwitcher;
-(void)_toggleSiri;
-(void)_toggleVoiceControl;
-(void)_tripleClick;
-(void)_restartConnectionToSystemServer;
-(void)_handleIOHIDEvent:(IOHIDEventRef)arg1 ;
-(char)sideSwitchUsedForOrientation;
-(char)orientationLocked;
-(void)openCreateCustomGestureForAST;
-(void)openCreateCustomGestureForSCAT;
-(void)openCommonTasks;
-(void)_performPressAndHoldMenu:(float)arg1 ;
-(IOHIDEventSystemClientRef)ioSystemClient;
-(id)init;
-(int)deviceOrientation;
-(void)setMenuVisible:(char)arg1 ;
-(AXAssertion *)disableSystemGesturesAssertion;
-(void)setDisableSystemGesturesAssertion:(AXAssertion *)arg1 ;
-(void)setOrientationLocked:(char)arg1 ;
-(float)volumeLevel;
-(char)isVoiceControlRunning;
-(void)_processQueue;
@end

