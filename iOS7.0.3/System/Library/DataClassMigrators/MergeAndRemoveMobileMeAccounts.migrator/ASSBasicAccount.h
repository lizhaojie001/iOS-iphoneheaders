/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:04:22 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/DataClassMigrators/MergeAndRemoveMobileMeAccounts.migrator/MergeAndRemoveMobileMeAccounts
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <AccountSettings/AccountFullAccountProtocol.h>

@protocol AccountFullAccountProtocol, AccountRefreshProtocol;
@class NSDictionary, NSMutableDictionary;

@interface ASSBasicAccount : NSObject <AccountFullAccountProtocol> {

	NSDictionary* _originalProperties;
	NSMutableDictionary* _properties;
	<AccountFullAccountProtocol>* _fullAccount;
	<AccountRefreshProtocol>* _syncAccount;
	ASSBasicAccount* _parentAccount;

}

@property (nonatomic,retain) NSDictionary * originalProperties;              //@synthesize originalProperties=_originalProperties - In the implementation block
+(id)supportedDataclassesForAccountType:(id)arg1 ;
+(void)initialize;
+(BOOL)isMultitaskingEnabled;
+(BOOL)multipleStoresSupportedByDataclass:(id)arg1 ;
+(id)removeActionsIncompatibleWithSingleStoreDataclass:(id)arg1 ;
+(BOOL)_isValidAccountType:(id)arg1 ;
+(id)createNewAccountUID;
+(id)accountWithType:(id)arg1 class:(id)arg2 ;
+(id)allSupportedDataclasses;
+(id)userActionsToEnableDataclass:(id)arg1 forAccountType:(id)arg2 ;
+(id)userActionsToDisableDataclass:(id)arg1 forAccountType:(id)arg2 ;
+(id)deleteAccountActionsForAccountType:(id)arg1 ;
+(BOOL)showRemindersSeparatelyForAccountType:(id)arg1 ;
+(BOOL)displayToggleForDataclass:(id)arg1 ;
+(BOOL)userConfirmationIsRequiredByDataclass:(id)arg1 ;
+(id)_creatorsInfo;
+(id)_dataclassesProperties;
+(id)_accountCreationMap;
+(id)accountWithProperties:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(id)type;
-(id)identifier;
-(id)displayName;
-(id)properties;
-(id)initWithProperties:(id)arg1 ;
-(id)_initWithType:(id)arg1 class:(id)arg2 ;
-(void)setOriginalProperties:(id)arg1 ;
-(void)_forcedSetAccountProperty:(id)arg1 forKey:(id)arg2 ;
-(id)_orderedDataclasses:(id)arg1 ;
-(id)_profileRestrictedDataclasses;
-(id)fullAccountCreatorClassNameForAccountType:(id)arg1 loader:(id)arg2 ;
-(void)setFullAccount:(id)arg1 ;
-(id)_cachedSyncAccount;
-(BOOL)refreshContainerWithIdentifier:(id)arg1 forDataclass:(id)arg2 isUserRequested:(BOOL)arg3 ;
-(BOOL)refreshContainerListForDataclass:(id)arg1 isUserRequested:(BOOL)arg2 ;
-(BOOL)refreshContainersForDataclass:(id)arg1 isUserRequested:(BOOL)arg2 ;
-(void)renewAccountCredentialsWithHandler:(/*^block*/ id)arg1 ;
-(id)propertiesToSave;
-(void)setAccountClass:(id)arg1 ;
-(id)typeString;
-(id)shortTypeString;
-(void)setEnabledForDataclasses:(id)arg1 ;
-(id)fullAccountUsingLoader:(id)arg1 ;
-(BOOL)refreshContainerWithIdentifier:(id)arg1 forDataclass:(id)arg2 ;
-(BOOL)refreshContainerListForDataclass:(id)arg1 ;
-(BOOL)refreshContainersForDataclass:(id)arg1 ;
-(id)originalProperties;
-(id)syncAccountCreatorClassNameForAccountType:(id)arg1 ;
-(id)_creatorClassNameForAccountType:(id)arg1 creatorType:(id)arg2 loader:(id)arg3 ;
-(void)_forcedSetEnabled:(BOOL)arg1 forDataclass:(id)arg2 ;
-(void)setParentAccount:(id)arg1 ;
-(id)provisionedDataclasses;
-(void)setEnabled:(BOOL)arg1 forDataclass:(id)arg2 ;
-(id)accountPropertyForKey:(id)arg1 ;
-(id)parentAccount;
-(id)parentAccountIdentifier;
-(void)setAccountProperty:(id)arg1 forKey:(id)arg2 ;
-(void)removeAccountPropertyForKey:(id)arg1 ;
-(id)enabledDataclasses;
-(id)supportedDataclasses;
-(id)accountClass;
-(id)syncStoreIdentifier;
-(void)setDisplayName:(id)arg1 ;
-(BOOL)isEnabledForDataclass:(id)arg1 ;
@end
