/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:19:32 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/CameraKit.framework/CameraKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CameraKit/CAMExpandableMenuButton.h>

@protocol CAMTimerButtonDelegate;
@class UIImageView;

@interface CAMTimerButton : CAMExpandableMenuButton {

	char _hideOffWhenCollapsed;
	id<CAMTimerButtonDelegate> _delegate;
	UIImageView* __glyphView;

}

@property (assign,nonatomic,__weak) id<CAMTimerButtonDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) int duration; 
@property (assign,nonatomic) char hideOffWhenCollapsed;                               //@synthesize hideOffWhenCollapsed=_hideOffWhenCollapsed - In the implementation block
@property (nonatomic,readonly) UIImageView * _glyphView;                              //@synthesize _glyphView=__glyphView - In the implementation block
-(void)setDelegate:(id<CAMTimerButtonDelegate>)arg1 ;
-(id<CAMTimerButtonDelegate>)delegate;
-(int)duration;
-(void)setDuration:(int)arg1 ;
-(id)headerView;
-(id)initWithExpansionOrientation:(int)arg1 ;
-(void)_commonCAMTimerButtonInitialization;
-(void)setDuration:(int)arg1 animated:(char)arg2 ;
-(UIImageView *)_glyphView;
-(char)hideOffWhenCollapsed;
-(id)titleForMenuItemAtIndex:(int)arg1 ;
-(id)hiddenIndexesWhileCollapsed;
-(void)setHideOffWhenCollapsed:(char)arg1 ;
-(int)numberOfMenuItems;
@end

