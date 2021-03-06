/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 2:41:36 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/MusicCarDisplayUI.framework/MusicCarDisplayUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol MPUNowPlayingDelegate <NSObject>
@optional
-(void)nowPlayingControllerDidBeginListeningForNotifications:(id)arg1;
-(void)nowPlayingControllerDidStopListeningForNotifications:(id)arg1;
-(void)nowPlayingController:(id)arg1 nowPlayingInfoDidChange:(id)arg2;
-(void)nowPlayingController:(id)arg1 playbackStateDidChange:(char)arg2;
-(void)nowPlayingController:(id)arg1 nowPlayingApplicationDidChange:(id)arg2;
-(void)nowPlayingController:(id)arg1 elapsedTimeDidChange:(double)arg2;

@end

