/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:23:01 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/identityservicesd.app/identityservicesd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@class NSDictionary, NSMutableArray, NSString, NSArray, NSSet;

@interface IDSDService : NSObject {

	NSDictionary* _serviceProperties;
	NSMutableArray* _adHocServices;
	unsigned _dataProtectionClass;
	BOOL _adHocServicesLoaded;

}

@property (nonatomic,retain,readonly) NSString * displayName; 
@property (nonatomic,retain,readonly) NSString * identifier; 
@property (nonatomic,retain,readonly) NSString * pushTopic; 
@property (nonatomic,retain,readonly) NSString * serviceName; 
@property (nonatomic,retain,readonly) NSString * queryService; 
@property (nonatomic,retain,readonly) NSString * protocolName; 
@property (nonatomic,retain,readonly) NSString * launchDarwinNotification; 
@property (nonatomic,retain,readonly) NSString * launchMachServiceNotification; 
@property (nonatomic,readonly) BOOL allowLocalDelivery; 
@property (nonatomic,readonly) BOOL allowWiProxDelivery; 
@property (nonatomic,readonly) BOOL allowMagnetDelivery; 
@property (nonatomic,readonly) BOOL shouldShowUsageNotifications; 
@property (nonatomic,readonly) BOOL allowPartialSendsToSucceed; 
@property (nonatomic,readonly) BOOL canUseLargePayload; 
@property (nonatomic,readonly) BOOL sendOnePerToken; 
@property (nonatomic,readonly) BOOL wantsPhoneNumberAccount; 
@property (nonatomic,readonly) BOOL iCloudBasedService; 
@property (nonatomic,readonly) BOOL tunnelService; 
@property (nonatomic,readonly) BOOL holdsMessagesUntilFirstUnlock; 
@property (nonatomic,readonly) BOOL shouldAutoRegisterAllHandles; 
@property (nonatomic,readonly) BOOL shouldRegisterUsingDSHandle; 
@property (nonatomic,readonly) BOOL shouldSyncAccounts; 
@property (nonatomic,readonly) BOOL shouldAllowProxyDelivery; 
@property (nonatomic,readonly) BOOL wantsLocalReflectedSend; 
@property (nonatomic,readonly) BOOL watchOnlyService; 
@property (nonatomic,readonly) BOOL allowsDuplicates; 
@property (nonatomic,readonly) BOOL useiMessageCallerID; 
@property (nonatomic,retain,readonly) NSDictionary * properties;                             //@synthesize serviceProperties=_serviceProperties - In the implementation block
@property (nonatomic,retain,readonly) NSString * preferencesDomain; 
@property (nonatomic,retain,readonly) NSString * legacyIdentifier; 
@property (nonatomic,retain,readonly) NSString * legacyPreferencesDomain; 
@property (nonatomic,retain,readonly) NSArray * linkedServices; 
@property (nonatomic,retain,readonly) NSArray * adHocServices; 
@property (nonatomic,readonly) unsigned adHocServiceType; 
@property (nonatomic,retain,readonly) NSArray * duetIdentifiers; 
@property (nonatomic,retain,readonly) NSSet * allowedTrafficClasses; 
@property (nonatomic,readonly) unsigned dataProtectionClass; 
-(BOOL)shouldRegisterUsingDSHandle;
-(BOOL)useiMessageCallerID;
-(NSArray *)linkedServices;
-(NSString *)launchDarwinNotification;
-(NSString *)launchMachServiceNotification;
-(unsigned)adHocServiceType;
-(BOOL)wantsPhoneNumberAccount;
-(NSArray *)adHocServices;
-(NSString *)preferencesDomain;
-(NSString *)legacyPreferencesDomain;
-(BOOL)iCloudBasedService;
-(BOOL)shouldSyncAccounts;
-(NSString *)queryService;
-(BOOL)shouldAutoRegisterAllHandles;
-(NSSet *)allowedTrafficClasses;
-(BOOL)shouldShowUsageNotifications;
-(BOOL)tunnelService;
-(NSArray *)duetIdentifiers;
-(BOOL)shouldAllowProxyDelivery;
-(BOOL)allowLocalDelivery;
-(BOOL)allowWiProxDelivery;
-(BOOL)wantsLocalReflectedSend;
-(BOOL)canUseLargePayload;
-(BOOL)sendOnePerToken;
-(BOOL)allowPartialSendsToSucceed;
-(BOOL)watchOnlyService;
-(BOOL)allowsDuplicates;
-(BOOL)allowMagnetDelivery;
-(NSString *)legacyIdentifier;
-(NSString *)protocolName;
-(BOOL)holdsMessagesUntilFirstUnlock;
-(void)dealloc;
-(id)description;
-(NSString *)identifier;
-(NSString *)displayName;
-(NSDictionary *)properties;
-(NSString *)serviceName;
-(unsigned)dataProtectionClass;
-(id)initWithServiceDictionary:(id)arg1 ;
-(NSString *)pushTopic;
@end

