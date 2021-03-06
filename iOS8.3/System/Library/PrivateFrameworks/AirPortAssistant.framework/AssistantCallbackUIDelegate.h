/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 12:34:26 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/AirPortAssistant.framework/AirPortAssistant
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol AssistantCallbackUIDelegate
@optional
-(long)callbackAskUserAQuestion:(int)arg1 paramDict:(id)arg2 forController:(id)arg3;
-(long)callbackAskUserToChooseFromStringList:(id)arg1 context:(int)arg2 forController:(id)arg3;
-(long)callbackAskUserForPassword:(int)arg1 param:(id)arg2 forController:(id)arg3;
-(long)callbackAskUserForSetupCode:(int)arg1 isRetry:(char)arg2 forController:(id)arg3;
-(long)callbackAskUserForUncertifiedForController:(id)arg1;

@required
-(void)callbackAskCancel;

@end

