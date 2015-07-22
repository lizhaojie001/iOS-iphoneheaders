/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:18:39 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>

@protocol MPAudioAndSubtitlesControllerDelegate;
@class MPAVItem, UITableView, MPAlternateTrack, NSString;

@interface MPAudioAndSubtitlesController : UIViewController <UITableViewDataSource, UITableViewDelegate> {

	MPAVItem* _avItem;
	id<MPAudioAndSubtitlesControllerDelegate> _delegate;
	UITableView* _tableView;
	char _hasAudio;
	char _hasSubtitles;
	MPAlternateTrack* _originalAudioTrack;
	MPAlternateTrack* _originalSubtitleTrack;
	MPAlternateTrack* _newAudioTrack;
	MPAlternateTrack* _newSubtitleTrack;

}

@property (assign,nonatomic,__weak) id<MPAudioAndSubtitlesControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_doneButtonTapped:(id)arg1 ;
-(id)initWithAVItem:(id)arg1 ;
-(id)_trackAtIndexPath:(id)arg1 ;
-(void)_applyChanges;
-(void)dealloc;
-(void)setDelegate:(id<MPAudioAndSubtitlesControllerDelegate>)arg1 ;
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(void)tableView:(id)arg1 willDisplayHeaderView:(id)arg2 forSection:(int)arg3 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(int)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 titleForHeaderInSection:(int)arg2 ;
-(id<MPAudioAndSubtitlesControllerDelegate>)delegate;
-(void)loadView;
@end
