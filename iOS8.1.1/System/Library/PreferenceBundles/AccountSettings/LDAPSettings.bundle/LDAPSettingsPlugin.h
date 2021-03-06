/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:29:49 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PreferenceBundles/AccountSettings/LDAPSettings.bundle/LDAPSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <LDAPSettings/ACUIAccountViewsProviderProtocol.h>

@class NSString;

@interface LDAPSettingsPlugin : NSObject <ACUIAccountViewsProviderProtocol>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(Class)viewControllerClassForCreatingAccountWithType:(id)arg1 ;
-(id)configurationInfoForCreatingAccountWithType:(id)arg1 ;
-(Class)viewControllerClassForViewingAccount:(id)arg1 ;
-(id)configurationInfoForViewingAccount:(id)arg1 ;
-(id)supportedAccountTypeIdentifiers;
@end

