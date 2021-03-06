/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:22:26 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PreferenceBundles/FacebookSettings.bundle/FacebookSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <FacebookSettings/SLFacebookRegistrationInfoPromptDelegate.h>

@protocol SLFacebookRegistrationBuddyDelegate;
@class SLFacebookRegistrationInfo, NSMutableArray, PSListController, PSSetupController;

@interface SLFacebookRegistrationBuddy : NSObject <SLFacebookRegistrationInfoPromptDelegate> {

	SLFacebookRegistrationInfo* _registrationInfo;
	NSMutableArray* _registrationInfoPrompts;
	long long _currentPromptIndex;
	PSListController* _presentingViewController;
	PSSetupController* _setupController;
	<SLFacebookRegistrationBuddyDelegate>* _delegate;

}
-(bool)_isCorrectableError:(int)arg1 ;
-(void)_returnToPromptOfClass:(Class)arg1 ;
-(id)_alertForError:(int)arg1 ;
-(void)registrationInfoPrompt:(id)arg1 didUpdateRegistrationInfo:(id)arg2 ;
-(void)registrationInfoPromptDidCancel:(id)arg1 ;
-(void)_presentNextPrompt;
-(void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2 ;
-(void)start;
-(void).cxx_destruct;
-(id)initWithDelegate:(id)arg1 ;
@end

