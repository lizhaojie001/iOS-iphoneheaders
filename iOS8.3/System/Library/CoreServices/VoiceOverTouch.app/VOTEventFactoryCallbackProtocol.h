/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, June 24, 2015 at 10:22:03 PM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/CoreServices/VoiceOverTouch.app/vot
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol VOTEventFactoryCallbackProtocol
@required
-(void)handleSystemWideServerDied;
-(void)handleRingerSwitchSwitched:(id)arg1;
-(void)handleKeyboardKeyEvent:(id)arg1 eventOrigin:(int)arg2;
-(void)handleVolumeButtonPress:(id)arg1;
-(void)handleMenuButtonPress:(id)arg1;
-(void)handleMediaKeyPress:(id)arg1;
-(void)handleLockButtonPress:(id)arg1;
-(void)handlePlayPauseKeyPress:(id)arg1;
-(void)handleProximityEvent:(id)arg1;
-(void)handleOrientationChanged;
-(void)handleReturnToSpringBoard;
-(void)handleSetForcedOrientation:(int)arg1 shouldAnnounce:(char)arg2;
-(void)handleUnsetForcedOrientationAndAnnounce:(char)arg1;

@end

