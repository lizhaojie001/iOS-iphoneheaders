/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:28:37 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/Frameworks/MessageUI.framework/MessageUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MessageUI/MFContactsSearchOperation.h>

@class NSString, NSSet;

@interface MFCorecipientSearchOperation : MFContactsSearchOperation {

	NSString* _bundleIdentifier;
	NSSet* _otherRecipients;
	unsigned long long _implicitGroupThreshold;

}
+(id)operationWithAddressBook:(void*)arg1 owner:(id)arg2 otherRecipients:(id)arg3 taskID:(id)arg4 properties:(id)arg5 bundleIdentifier:(id)arg6 implicitGroupThreshold:(unsigned long long)arg7 ;
-(void)dealloc;
-(void)main;
@end

