/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:34:44 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/VoiceTrigger.framework/VoiceTrigger
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <VoiceTrigger/_VTStatePolicy.h>

@interface _VTSiriEnabledPolicy : _VTStatePolicy {

	BOOL _enabled;

}
-(BOOL)isEnabled;
-(id)initWithCallback:(/*^block*/id)arg1 queue:(id)arg2 ;
-(void)_registerForSiriEnabledUpdates;
-(void)_siriEnabledStateUpdated;
@end

