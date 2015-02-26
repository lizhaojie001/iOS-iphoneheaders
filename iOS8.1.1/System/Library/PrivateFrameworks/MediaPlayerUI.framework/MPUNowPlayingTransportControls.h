/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:32:28 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/MediaPlayerUI.framework/MediaPlayerUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MediaPlayerUI/MediaPlayerUI-Structs.h>
#import <MediaPlayer/MPTransportControls.h>

@protocol MPUNowPlayingTransportControlsDelegate;
@class MPQueueFeeder;

@interface MPUNowPlayingTransportControls : MPTransportControls {

	MPQueueFeeder* _feeder;
	id<MPUNowPlayingTransportControlsDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<MPUNowPlayingTransportControlsDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) double _innerControlMargin; 
@property (nonatomic,readonly) double _nextButtonVInset; 
@property (nonatomic,readonly) double _outterControlMargin; 
@property (nonatomic,readonly) double _playPauseBottomVInset; 
+(unsigned long long)defaultVisibleParts;
+(BOOL)buttonImagesUseBackgroundImage;
+(Class)buttonClass;
+(long long)buttonType;
-(BOOL)usesTintColorForControls;
-(id)tintColorForPart:(unsigned long long)arg1 ;
-(id)buttonImageForPart:(unsigned long long)arg1 ;
-(void)reloadForAdditions:(id)arg1 removals:(id)arg2 animate:(BOOL)arg3 ;
-(id)newButtonForPart:(unsigned long long)arg1 ;
-(void)dealloc;
-(void)setDelegate:(id<MPUNowPlayingTransportControlsDelegate>)arg1 ;
-(BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)layoutSubviews;
-(id<MPUNowPlayingTransportControlsDelegate>)delegate;
-(void)setItem:(id)arg1 ;
-(double)_innerControlMargin;
-(double)_outterControlMargin;
-(double)_playPauseBottomVInset;
-(double)_nextButtonVInset;
-(void)_skipLimitDidChangeNotification:(id)arg1 ;
-(void)_updateItemRelatedParts;
@end
