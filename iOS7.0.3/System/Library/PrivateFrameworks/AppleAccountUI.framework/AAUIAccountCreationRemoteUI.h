/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:54:17 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/AppleAccountUI.framework/AppleAccountUI
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <CommunicationsSetupUI/RUIObjectModelDelegate.h>

@protocol AAUIAccountCreationDelegate;
@class RUILoader, NSMutableArray, UINavigationController, UIAlertView, AASetupAssistantService, AAAutoAccountVerifier;

@interface AAUIAccountCreationRemoteUI : NSObject <RUIObjectModelDelegate> {

	BOOL _isModal;
	RUILoader* _loader;
	NSMutableArray* _objectModels;
	<AAUIAccountCreationDelegate>* _delegate;
	UINavigationController* _parentNavController;
	UINavigationController* _createAccountNavController;
	UIAlertView* _tcConfirmationAlert;
	UIAlertView* _failedToCreateAccountAlert;
	BOOL _over13;
	AASetupAssistantService* _aaService;
	AAAutoAccountVerifier* _verifier;

}
-(void)loader:(id)arg1 didFailWithError:(id)arg2 ;
-(void)loader:(id)arg1 receivedObjectModel:(id)arg2 actionSignal:(int)arg3 ;
-(id)parentViewControllerForObjectModel:(id)arg1 ;
-(void)objectModelPressedBack:(id)arg1 ;
-(void)objectModel:(id)arg1 pressedButton:(id)arg2 attributes:(id)arg3 ;
-(void)objectModel:(id)arg1 pressedLink:(id)arg2 httpMethod:(id)arg3 ;
-(void)objectModelDidChange:(id)arg1 ;
-(unsigned)supportedInterfaceOrientationsForObjectModel:(id)arg1 page:(id)arg2 ;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(void)alertView:(id)arg1 didDismissWithButtonIndex:(int)arg2 ;
-(void)_addHeadersToRequest:(id)arg1 ;
-(void)_displayConnectionErrorAndDismiss;
-(void)_createAppleAccount;
-(void)_cleanupCreateAppleID:(id)arg1 ;
-(void)_userAgreedToTCs:(BOOL)arg1 ;
-(id)initWithNavController:(id)arg1 isModal:(BOOL)arg2 ;
-(void)_cleanupLoader;
-(void)_popObjectModelAnimated:(BOOL)arg1 ;
-(void).cxx_destruct;
-(void)loadURLRequest:(id)arg1 ;
@end

