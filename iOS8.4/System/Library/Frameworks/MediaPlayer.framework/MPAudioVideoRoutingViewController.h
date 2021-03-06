/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:18:14 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>

@protocol MPAudioVideoRoutingViewControllerDelegate;
@class UINavigationController, MPAudioVideoRoutingTableViewController;

@interface MPAudioVideoRoutingViewController : UIViewController {

	UINavigationController* _navigationController;
	MPAudioVideoRoutingTableViewController* _tableViewController;
	id<MPAudioVideoRoutingViewControllerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<MPAudioVideoRoutingViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(BOOL)hasWirelessDisplayRoutes;
-(void)_doneAction:(id)arg1 ;
-(void)setDelegate:(id<MPAudioVideoRoutingViewControllerDelegate>)arg1 ;
-(id)init;
-(id<MPAudioVideoRoutingViewControllerDelegate>)delegate;
-(void)viewDidLoad;
@end

