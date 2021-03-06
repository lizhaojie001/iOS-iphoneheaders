/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:51:26 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


#import <AVFoundation/AVFoundation-Structs.h>
@class AVPlayerItemTrackInternal, AVAssetTrack;

@interface AVPlayerItemTrack : NSObject {

	AVPlayerItemTrackInternal* _playerItemTrack;

}

@property (nonatomic,readonly) AVAssetTrack * assetTrack; 
@property (assign,getter=isEnabled,nonatomic) BOOL enabled; 
@property (nonatomic,readonly) float currentVideoFrameRate; 
+(id)playerItemTrackWithFigPlaybackItem:(OpaqueFigPlaybackItemRef)arg1 trackID:(int)arg2 asset:(id)arg3 playerItem:(id)arg4 ;
-(void)_addLayer:(id)arg1 ;
-(void)_removeLayer:(id)arg1 ;
-(OpaqueFigPlaybackItemRef)_figPlaybackItem;
-(id)_audioVolumeCurve;
-(void)_setAudioVolumeCurve:(id)arg1 ;
-(void)_setAudioTapProcessor:(opaqueMTAudioProcessingTapRef)arg1 ;
-(void)_setAudioTimePitchAlgorithm:(id)arg1 ;
-(id)_playerItem;
-(id)_initWithFigPlaybackItem:(OpaqueFigPlaybackItemRef)arg1 trackID:(int)arg2 asset:(id)arg3 playerItem:(id)arg4 ;
-(id)fallbackTrack;
-(float)currentVideoFrameRate;
-(int)trackID;
-(id)assetTrack;
-(void)setLoudnessInfo:(id)arg1 ;
-(id)loudnessInfo;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(BOOL)isEnabled;
-(void)setEnabled:(BOOL)arg1 ;
-(void)finalize;
@end

