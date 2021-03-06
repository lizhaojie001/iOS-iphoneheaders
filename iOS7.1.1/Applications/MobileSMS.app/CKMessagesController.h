/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 8:59:09 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /Applications/MobileSMS.app/MobileSMS
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <UIKit/UISplitViewControllerDelegate.h>
#import <DataDetectorsUI/MFMailComposeViewControllerDelegate.h>
#import <UIKit/UIActionSheetDelegate.h>
#import <ChatKit/CKTranscriptComposeDelegate.h>
#import <UIKit/UINavigationControllerDelegate.h>
#import <UIKit/UIAlertViewDelegate.h>

@protocol OS_dispatch_group;
@class UIViewController, UINavigationController, CKConversationListController, CKTranscriptController, UIView, UISplitViewController, MFMailComposeViewController, CKConversation, NSMutableArray, NSObject, NSSet;

@interface CKMessagesController : UIViewController <UISplitViewControllerDelegate, MFMailComposeViewControllerDelegate, UIActionSheetDelegate, CKTranscriptComposeDelegate, UINavigationControllerDelegate, UIAlertViewDelegate> {

	UIViewController* _rightController;
	UINavigationController* _blankNavController;
	UINavigationController* _primaryNavigationController;
	CKConversationListController* _conversationListController;
	CKTranscriptController* _transcriptController;
	UIView* _transcriptDimmingView;
	UISplitViewController* _messagesSplitViewController;
	MFMailComposeViewController* _mailComposeController;
	UIViewController* _mainController;
	CKConversation* _currentConversation;
	NSMutableArray* _conversationCache;
	BOOL _ignoreConversationsBecomingStale;
	BOOL _transcriptDimmed;
	NSObject<OS_dispatch_group>* _modalPresentationGroup;
	/*^block*/ id _alertViewHandler;

}

@property (nonatomic,@dynamic,retain) <NSCoding> * autosaveIdentifier; 
@property (nonatomic,retain) CKConversationListController * conversationListController;              //@synthesize conversationListController=_conversationListController - In the implementation block
@property (nonatomic,retain) CKTranscriptController * transcriptController;                          //@synthesize transcriptController=_transcriptController - In the implementation block
@property (nonatomic,retain) UINavigationController * primaryNavigationController;                   //@synthesize primaryNavigationController=_primaryNavigationController - In the implementation block
@property (nonatomic,readonly) NSSet * alertSuppressionContexts; 
@property (nonatomic,retain) CKConversation * currentConversation;                                   //@synthesize currentConversation=_currentConversation - In the implementation block
@property (nonatomic,readonly) BOOL isShowingConversationListController; 
@property (getter=isTranscriptDimmed,nonatomic,readonly) BOOL transcriptDimmed;                      //@synthesize transcriptDimmed=_transcriptDimmed - In the implementation block
@property (nonatomic,copy) id alertViewHandler;                                                      //@synthesize alertViewHandler=_alertViewHandler - In the implementation block
-(void)showConversationList:(BOOL)arg1 ;
-(id)conversationListController;
-(void)showMailComposeSheetForAutosavedMessage;
-(void)setDefaultPNGConfiguration;
-(id)primaryNavigationController;
-(void)showNewMessageCompositionPanelWithRecipients:(id)arg1 composition:(id)arg2 animated:(BOOL)arg3 ;
-(void)showMessagesForAddress:(id)arg1 animate:(BOOL)arg2 ;
-(void)showMailComposeSheetForAddress:(id)arg1 ;
-(BOOL)isShowingTranscriptWithUnsentText;
-(void)showConversationAndMessageForSearchURL:(id)arg1 ;
-(BOOL)currentCompositionHasContent;
-(BOOL)isShowingDirtyModalView;
-(BOOL)resumeToConversation:(id)arg1 ;
-(BOOL)showUnreadConversationsWithLastConversation:(id)arg1 ignoringMessages:(id)arg2 ;
-(void)autosaveMailComposition;
-(void)cancelNewMessageComposition;
-(BOOL)hasUnreadFilteredConversationsIgnoringMessages:(id)arg1 ;
-(void)hideNewMessageCompositionPanel;
-(BOOL)isShowingConversationListController;
-(BOOL)isShowingTranscriptController;
-(void)_conversationLeft:(id)arg1 ;
-(void)_handleConversationBecameStale:(id)arg1 ;
-(BOOL)isTranscriptDimmed;
-(void)_pruneConversationCache;
-(void)_updateAlertSuppressionContext;
-(void)setCurrentConversation:(id)arg1 ;
-(BOOL)_isShowingModalTranscript;
-(void)setAlertViewHandler:(/*^block*/ id)arg1 ;
-(void)_addConversationToCache:(id)arg1 ;
-(BOOL)_canDumpConversationFromCache:(id)arg1 ;
-(void)_prepareToDumpCachedConversation:(id)arg1 ;
-(void)_showTranscriptController:(BOOL)arg1 ;
-(void)_presentNewMessageCompositionPanel:(id)arg1 animated:(BOOL)arg2 ;
-(void)_popToConversationListAndPerformBlockAnimated:(BOOL)arg1 block:(/*^block*/ id)arg2 ;
-(void)_showNewMessageCompositionPanelWithRecipients:(id)arg1 composition:(id)arg2 animated:(BOOL)arg3 ;
-(void)_updateTranscriptDimmingView;
-(void)_showTranscriptController:(BOOL)arg1 animated:(BOOL)arg2 ;
-(BOOL)_isShowingFullscreenController;
-(void)__updateAlertSuppressionContext;
-(void)_confirmReadReceiptSettings;
-(void)showConversation:(id)arg1 animate:(BOOL)arg2 forceToTranscript:(BOOL)arg3 ;
-(void)_showMailComposeSheet;
-(/*^block*/ id)alertViewHandler;
-(void)_clearConversationCache;
-(void)setConversationListController:(id)arg1 ;
-(void)setTranscriptController:(id)arg1 ;
-(void)setPrimaryNavigationController:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(void)didReceiveMemoryWarning;
-(BOOL)becomeFirstResponder;
-(BOOL)shouldAutorotate;
-(void)alertView:(id)arg1 didDismissWithButtonIndex:(int)arg2 ;
-(void)viewWillLayoutSubviews;
-(void)setEditing:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)loadView;
-(BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidUnload;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(id)rotatingHeaderView;
-(void)willRotateToInterfaceOrientation:(int)arg1 duration:(double)arg2 ;
-(void)willAnimateRotationToInterfaceOrientation:(int)arg1 duration:(double)arg2 ;
-(void)navigationController:(id)arg1 willShowViewController:(id)arg2 animated:(BOOL)arg3 ;
-(void)navigationController:(id)arg1 didShowViewController:(id)arg2 animated:(BOOL)arg3 ;
-(void)splitViewController:(id)arg1 willShowViewController:(id)arg2 invalidatingBarButtonItem:(id)arg3 ;
-(void)splitViewController:(id)arg1 willHideViewController:(id)arg2 withBarButtonItem:(id)arg3 forPopoverController:(id)arg4 ;
-(void)setAutosaveIdentifier:(id)arg1 ;
-(id)autosaveIdentifier;
-(void)mailComposeController:(id)arg1 didFinishWithResult:(int)arg2 error:(id)arg3 ;
-(id)alertSuppressionContexts;
-(void)parentControllerDidResume:(BOOL)arg1 animating:(BOOL)arg2 ;
-(void)performResumeDeferredSetup;
-(void)didCancelComposition:(id)arg1 ;
-(void)showForwardedMessageParts:(id)arg1 ;
-(void)transcriptController:(id)arg1 didSendMessageInConversation:(id)arg2 ;
-(void)transcriptController:(id)arg1 willSendComposition:(id)arg2 inConversation:(id)arg3 ;
-(void)showNewMessageCompositionForMessageParts:(id)arg1 ;
-(void)transcriptController:(id)arg1 didSelectNewConversation:(id)arg2 ;
-(BOOL)supportsAttachments;
-(void)parentControllerDidBecomeActive;
-(void)prepareForResume;
-(id)currentConversation;
-(id)transcriptController;
-(BOOL)isShowingBlankTranscript;
-(BOOL)isComposingMessage;
-(void)resetNewMessageCompositionRecipients;
-(void)showNewMessageCompositionPanelAnimated:(BOOL)arg1 ;
-(void)showConversation:(id)arg1 animate:(BOOL)arg2 ;
-(void)showConversationAndMessageForChatGUID:(id)arg1 messageGUID:(id)arg2 animate:(BOOL)arg3 ;
-(void)setTranscriptDimmed:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)prepareForSuspend;
@end

