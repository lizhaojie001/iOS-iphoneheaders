/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:21:18 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/GameKit.framework/Frameworks/GameCenterUI.framework/GameCenterUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GameCenterUI/GKHostedViewController.h>

@class GKUITheme, NSMutableArray, NSString, GKComposeRemoteViewController;

@interface GKComposeHostedViewController : GKHostedViewController {

	unsigned _rid;
	GKUITheme* _theme;
	NSMutableArray* _playerIDsToAddAsRecipients;
	NSMutableArray* _emailsToAddAsRecipients;

}

@property (nonatomic,retain) GKUITheme * theme;                                        //@synthesize theme=_theme - In the implementation block
@property (assign,nonatomic) unsigned rid;                                             //@synthesize rid=_rid - In the implementation block
@property (nonatomic,copy) NSString * defaultMessage; 
@property (nonatomic,retain) NSMutableArray * playerIDsToAddAsRecipients;              //@synthesize playerIDsToAddAsRecipients=_playerIDsToAddAsRecipients - In the implementation block
@property (nonatomic,retain) NSMutableArray * emailsToAddAsRecipients;                 //@synthesize emailsToAddAsRecipients=_emailsToAddAsRecipients - In the implementation block
@property (nonatomic,readonly) GKComposeRemoteViewController * _remote; 
-(void)setDefaultMessage:(id)arg1 ;
-(id)serviceSideViewControllerClassName;
-(id)hostSideViewControllerClassName;
-(id)_presentingViewController;
-(void)didGetRemoteViewController;
-(void)addRecipientsWithEmailAddresses:(id)arg1 ;
-(void)addRecipientsWithPlayerIDs:(id)arg1 ;
-(unsigned)rid;
-(void)setRid:(unsigned)arg1 ;
-(id)defaultMessage;
-(id)_remote;
-(void)setPlayerIDsToAddAsRecipients:(id)arg1 ;
-(void)setEmailsToAddAsRecipients:(id)arg1 ;
-(id)playerIDsToAddAsRecipients;
-(id)emailsToAddAsRecipients;
-(void)dealloc;
-(id)theme;
-(void)setTheme:(id)arg1 ;
@end

