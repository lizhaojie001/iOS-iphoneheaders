/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, June 24, 2015 at 10:57:40 PM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MediaPlayer/MediaPlayer-Structs.h>
#import <UIKit/UIView.h>

@class MPAVItem, MPAVController, NSMutableIndexSet, MPButton, NSString;

@interface MPTransportControls : UIView {

	id _target;
	MPAVItem* _item;
	MPAVController* _player;
	unsigned long long _desiredParts;
	unsigned long long _disabledParts;
	NSMutableIndexSet* _heldParts;
	unsigned long long _visibleParts;
	unsigned _playing : 1;
	char _allowsWirelessPlayback;
	char _registeredForPlayerNotifications;
	MPButton* _alternatesButton;
	MPButton* _bookmarkButton;
	MPButton* _chaptersButton;
	MPButton* _emailButton;
	MPButton* _fastForward15SecondsButton;
	MPButton* _likeOrBanButton;
	MPButton* _nextButton;
	MPButton* _playButton;
	MPButton* _previousButton;
	MPButton* _rewind15SecondsButton;
	MPButton* _rewind30SecondsButton;
	MPButton* _scaleButton;
	MPButton* _toggleFullscreenButton;
	id _volumeSlider;

}

@property (assign,nonatomic) unsigned long long desiredParts;                    //@synthesize desiredParts=_desiredParts - In the implementation block
@property (assign,nonatomic) unsigned long long disabledParts;                   //@synthesize disabledParts=_disabledParts - In the implementation block
@property (nonatomic,retain) MPAVItem * item;                                    //@synthesize item=_item - In the implementation block
@property (nonatomic,retain) MPAVController * player;                            //@synthesize player=_player - In the implementation block
@property (assign,nonatomic) char registeredForPlayerNotifications;              //@synthesize registeredForPlayerNotifications=_registeredForPlayerNotifications - In the implementation block
@property (assign,nonatomic,__weak) id target;                                   //@synthesize target=_target - In the implementation block
@property (assign,nonatomic) unsigned long long visibleParts;                    //@synthesize visibleParts=_visibleParts - In the implementation block
@property (assign,nonatomic) char allowsWirelessPlayback;                        //@synthesize allowsWirelessPlayback=_allowsWirelessPlayback - In the implementation block
@property (nonatomic,readonly) NSString * playButtonImage; 
@property (nonatomic,readonly) NSString * pauseButtonImage; 
@property (nonatomic,readonly) NSString * playPauseButtonImage; 
+(unsigned long long)defaultVisibleParts;
+(char)buttonImagesUseBackgroundImage;
+(Class)buttonClass;
+(int)buttonType;
-(void)_isExternalPlaybackActiveDidChangeNotification:(id)arg1 ;
-(void)setAllowsWirelessPlayback:(char)arg1 ;
-(char)allowsWirelessPlayback;
-(unsigned long long)visibleParts;
-(unsigned long long)desiredParts;
-(void)setDesiredParts:(unsigned long long)arg1 ;
-(void)setVisibleParts:(unsigned long long)arg1 ;
-(void)setDisabledParts:(unsigned long long)arg1 ;
-(void)_itemChangedNotification:(id)arg1 ;
-(void)_validityChangedNotification:(id)arg1 ;
-(void)registerForPlayerNotifications;
-(void)unregisterForPlayerNotifications;
-(unsigned long long)disabledParts;
-(void)setRegisteredForPlayerNotifications:(char)arg1 ;
-(char)registeredForPlayerNotifications;
-(void)_alternateTypesChangedNotification:(id)arg1 ;
-(void)_itemDurationDidChangeNotification:(id)arg1 ;
-(void)_timeMarkersAvailableNotification:(id)arg1 ;
-(void)_availableRoutesChangedNotification:(id)arg1 ;
-(void)_playbackStateChangedNotification:(id)arg1 ;
-(void)_reloadViewWithAnimation:(char)arg1 ;
-(char)usesTintColorForControls;
-(id)buttonForPart:(unsigned long long)arg1 ;
-(id)tintColorForPart:(unsigned long long)arg1 ;
-(void)_applyDesiredPartsWithAnimation:(char)arg1 ;
-(void)setDesiredParts:(unsigned long long)arg1 animated:(char)arg2 ;
-(void)_updateEnabledStates:(char)arg1 ;
-(void)_updatePlayButtonImage;
-(void)_updateTintColorForPart:(unsigned long long)arg1 ;
-(void)setVisibleParts:(unsigned long long)arg1 animated:(char)arg2 ;
-(unsigned long long)_applyPossibleVisiblePartsToParts:(unsigned long long)arg1 ;
-(NSString *)pauseButtonImage;
-(NSString *)playButtonImage;
-(id)buttonImageForPart:(unsigned long long)arg1 ;
-(id)highlightedButtonImageForPart:(unsigned long long)arg1 ;
-(char)_handleHoldForPart:(unsigned long long)arg1 ;
-(char)_handleReleaseForPart:(unsigned long long)arg1 ;
-(char)_handleTapForPart:(unsigned long long)arg1 ;
-(void)buttonDown:(id)arg1 ;
-(void)buttonUp:(id)arg1 ;
-(id)disabledButtonImageForPart:(unsigned long long)arg1 ;
-(NSString *)playPauseButtonImage;
-(char)showsVolumeSliderWhenNoVolumeControlAvailable;
-(id)_updateAdditions:(id)arg1 removals:(id)arg2 forPart:(unsigned long long)arg3 ;
-(void)buttonHeld:(id)arg1 ;
-(void)buttonHoldReleased:(id)arg1 ;
-(id)newVolumeSlider;
-(void)reloadForAdditions:(id)arg1 removals:(id)arg2 animate:(char)arg3 ;
-(id)newButtonForPart:(unsigned long long)arg1 ;
-(char)allowsWirelessPlaybackForCurrentItem;
-(char)alwaysHidesSystemVolumeHUD;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)setHidden:(char)arg1 ;
-(void)setAlpha:(float)arg1 ;
-(void)didMoveToWindow;
-(id)init;
-(void)setFrame:(CGRect)arg1 ;
-(MPAVItem *)item;
-(void)setTarget:(id)arg1 ;
-(id)target;
-(void)tintColorDidChange;
-(void)didMoveToSuperview;
-(void)setItem:(MPAVItem *)arg1 ;
-(void)setPlayer:(MPAVController *)arg1 ;
-(MPAVController *)player;
@end

