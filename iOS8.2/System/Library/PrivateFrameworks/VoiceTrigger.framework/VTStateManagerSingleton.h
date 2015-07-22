/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:21:23 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/VoiceTrigger.framework/VoiceTrigger
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <VoiceTrigger/VoiceTrigger-Structs.h>
@class NSMutableSet, NSObject, _VTSiriEnabledPolicy, _VTVoiceTriggerEnabledPolicy, _VTSpringBoardStartedPolicy, _VTSiriUIPolicy, _VTBatteryPolicy, _VTFacedownGesturePolicy, _VTLockscreenPolicy;

@interface VTStateManagerSingleton : NSObject {

	NSMutableSet* _instances;
	NSObject*<OS_dispatch_queue> _queue;
	_VTSiriEnabledPolicy* _siriEnabledPolicy;
	_VTVoiceTriggerEnabledPolicy* _vtEnabledPolicy;
	_VTSpringBoardStartedPolicy* _springboardPolicy;
	_VTSiriUIPolicy* _siriUIPolicy;
	_VTBatteryPolicy* _batteryPolicy;
	_VTFacedownGesturePolicy* _facedownPolicy;
	_VTLockscreenPolicy* _lockscreenPolicy;
	char _voiceTriggerIsEnabled;

}
+(void)initialize;
+(id)singleton;
-(void)dealloc;
-(id)_init;
-(void)_handlePolicyUpdate:(id)arg1 ;
-(void)_sbsEventObserved:(CFStringRef)arg1 ;
-(void)_stateTransitionDidOccur:(char)arg1 ;
-(void)_powerlog:(id)arg1 ;
-(void)register:(id)arg1 ;
-(void)unregister:(id)arg1 ;
@end
