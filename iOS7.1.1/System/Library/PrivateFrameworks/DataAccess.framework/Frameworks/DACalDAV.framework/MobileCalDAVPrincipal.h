/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:23:13 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DACalDAV.framework/DACalDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <DACalDAV/DACalDAV-Structs.h>
#import <CoreDAV/CoreDAVAccountInfoProvider.h>
#import <DACalDAV/CoreDAVOAuthInfoProvider.h>
#import <DACalDAV/CalDAVPrincipal.h>

@class NSString, NSSet, NSURL, NSDictionary, NSNumber, NSDateComponents, MobileCalDAVAccount, NSMutableDictionary, NSMutableSet, CalDAVRefreshContext;

@interface MobileCalDAVPrincipal : NSObject <CoreDAVAccountInfoProvider, CoreDAVOAuthInfoProvider, CalDAVPrincipal> {

	NSString* _uid;
	MobileCalDAVAccount* _account;
	NSSet* _calendarUserAddresses;
	NSMutableDictionary* _calendarUserAddressesPerCalendar;
	NSURL* _preferredCalendarUserAddress;
	NSString* _preferredCalendarEmailAddress;
	NSString* _fullName;
	NSURL* _calendarHomeURL;
	NSString* _principalPath;
	NSURL* _defaultCalendarURL;
	NSURL* _notificationCollectionURL;
	NSString* _notificationCollectionCTag;
	NSURL* _inboxURL;
	NSString* _inboxCTag;
	NSURL* _outboxURL;
	NSURL* _dropBoxURL;
	NSString* _notificationURLString;
	NSDictionary* _pushTransports;
	NSString* _calendarHomePushKey;
	NSNumber* _quotaFreeBytes;
	NSString* _supportedCalendarComponentSets;
	NSMutableSet* _deletedCalendarURLs;
	NSMutableSet* _addedCalendars;
	NSMutableSet* _modifiedCalendars;
	bool _isDelegate;
	bool _isWritable;
	bool _canCreateCalendars;
	bool _isEnabled;
	bool _isExpandPropertyReportSupported;
	bool _supportsFreebusy;
	bool _supportsSyncToken;
	bool _supportsPush;
	bool _shouldRefreshPrincipalSearchProperties;
	bool _shouldUpdatePushDelegate;
	bool _isDirty;
	bool _calendarsAreDirty;
	int _calendarChangeIndex;
	NSURL* _legacy_principalURL;

}

@property (readonly) NSString * uid;                                         //@synthesize uid=_uid - In the implementation block
@property (readonly) <CalDAVAccount> * account; 
@property (retain) NSSet * calendarUserAddresses; 
@property (readonly) NSURL * preferredCalendarUserAddress; 
@property (readonly) NSString * preferredCalendarEmailAddress; 
@property (retain) NSString * fullName; 
@property (retain) NSURL * calendarHomeURL; 
@property (retain) NSString * calendarHomeSyncToken; 
@property (retain) NSString * principalPath; 
@property (retain) NSURL * principalURL; 
@property (retain) NSURL * defaultCalendarURL; 
@property (retain) NSURL * notificationCollectionURL; 
@property (retain) NSString * notificationCollectionCTag; 
@property (retain) NSURL * inboxURL; 
@property (retain) NSString * inboxCTag; 
@property (retain) NSURL * outboxURL; 
@property (retain) NSURL * dropBoxURL; 
@property (retain) NSString * notificationURLString; 
@property (retain) NSDictionary * pushTransports; 
@property (retain) NSString * calendarHomePushKey; 
@property (retain) NSNumber * quotaFreeBytes; 
@property (retain) NSString * supportedCalendarComponentSets; 
@property (assign) bool isDelegate; 
@property (assign) bool isWritable; 
@property (assign) bool isEnabled; 
@property (assign) bool isExpandPropertyReportSupported; 
@property (assign) bool supportsFreebusy; 
@property (assign) bool supportsSyncToken; 
@property (readonly) bool supportsExtendedCalendarQuery; 
@property (readonly) CalDAVRefreshContext * refreshContext; 
@property (readonly) NSSet * calendars; 
@property (readonly) NSString * APSTopic; 
@property (readonly) NSURL * APSSubscriptionURL; 
@property (readonly) NSString * APSEnv; 
@property (assign) bool supportsPush; 
@property (assign) bool shouldRefreshPrincipalSearchProperties;              //@synthesize shouldRefreshPrincipalSearchProperties=_shouldRefreshPrincipalSearchProperties - In the implementation block
@property (assign) bool shouldUpdatePushDelegate;                            //@synthesize shouldUpdatePushDelegate=_shouldUpdatePushDelegate - In the implementation block
@property (assign) bool isDirty; 
@property (assign) bool calendarsAreDirty; 
@property (nonatomic,readonly) NSURL * legacy_principalURL;                  //@synthesize legacy_principalURL=_legacy_principalURL - In the implementation block
@property (readonly) <CoreDAVTaskManager> * taskManager; 
@property (assign) bool canCreateCalendars; 
@property (readonly) bool isMergeSync; 
@property (readonly) bool isEnabledForEvents; 
@property (readonly) bool isEnabledForTodos; 
@property (readonly) NSDateComponents * eventFilterStartDate; 
@property (readonly) NSDateComponents * eventFilterEndDate; 
@property (readonly) NSDateComponents * todoFilterStartDate; 
@property (readonly) NSDateComponents * todoFilterEndDate; 
@property (readonly) NSSet * addedCalendars;                                 //@synthesize addedCalendars=_addedCalendars - In the implementation block
@property (readonly) NSSet * modifiedCalendars;                              //@synthesize modifiedCalendars=_modifiedCalendars - In the implementation block
@property (readonly) NSSet * deletedCalendarURLs;                            //@synthesize deletedCalendarURLs=_deletedCalendarURLs - In the implementation block
+(bool)compareAddressURL:(id)arg1 localString:(id)arg2 ;
-(id)user;
-(id)password;
-(id)calendars;
-(void)removeCalendar:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(id)scheme;
-(bool)isEnabled;
-(void)setIsEnabled:(bool)arg1 ;
-(id)host;
-(id)uid;
-(id)configuration;
-(id)pushTransports;
-(void)setPushTransports:(id)arg1 ;
-(void)noteHomeSetOnDifferentHost:(id)arg1 ;
-(id)additionalHeaderValues;
-(id)serverRoot;
-(id)userAgentHeader;
-(id)serverComplianceClasses;
-(void)clientTokenRequestedByServer;
-(id)clientToken;
-(id)oauthInfoProvider;
-(bool)handleCertificateError:(id)arg1 ;
-(bool)shouldHandleHTTPCookiesForURL:(id)arg1 ;
-(bool)shouldSendClientInfoHeaderForURL:(id)arg1 ;
-(void)promptUserForNewCoreDAVPasswordWithCompletionBlock:(/*^block*/ id)arg1 ;
-(bool)shouldCompressRequests;
-(void)webLoginRequestedAtURL:(id)arg1 reasonString:(id)arg2 completionBlock:(/*^block*/ id)arg3 ;
-(void)setPrincipalURL:(id)arg1 ;
-(bool)isExpandPropertyReportSupported;
-(id)oauth2Token;
-(id)principalPath;
-(void)setPrincipalPath:(id)arg1 ;
-(id)initWithConfiguration:(id)arg1 account:(id)arg2 ;
-(void)setIsWritable:(bool)arg1 ;
-(id)legacy_principalURL;
-(id)calendarHomeURL;
-(id)supportedCalendarComponentSets;
-(id)calendarHomeSyncToken;
-(bool)canCreateCalendars;
-(id)APSTopic;
-(bool)supportsPush;
-(void)setSupportsPush:(bool)arg1 ;
-(bool)shouldUpdatePushDelegate;
-(void)setShouldUpdatePushDelegate:(bool)arg1 ;
-(id)refreshContext;
-(void)setIsDirty:(bool)arg1 ;
-(void)setCalendarsAreDirty:(bool)arg1 ;
-(void)setCalendarHomeSyncToken:(id)arg1 ;
-(id)calendarUserAddresses;
-(id)defaultCalendarURL;
-(id)notificationCollectionURL;
-(id)notificationCollectionCTag;
-(id)inboxURL;
-(id)inboxCTag;
-(id)outboxURL;
-(id)dropBoxURL;
-(id)notificationURLString;
-(id)calendarHomePushKey;
-(bool)isDelegate;
-(bool)supportsFreebusy;
-(bool)supportsSyncToken;
-(id)quotaFreeBytes;
-(bool)_userAddressSet:(id)arg1 isEqualToSet:(id)arg2 ;
-(bool)supportsExtendedCalendarQuery;
-(id)_startDateFromDaysToSync:(int)arg1 ;
-(id)_sharedSyncEndDate;
-(id)calendarOfType:(int)arg1 atURL:(id)arg2 withOptions:(id)arg3 ;
-(void)removecalendarWithURL:(id)arg1 ;
-(void)prepareCalendarsForSyncWithCompletionBlock:(/*^block*/ id)arg1 ;
-(id)defaultEventCalendarTitle;
-(id)defaultTodoCalendarTitle;
-(void)setCalendarUserAddresses:(id)arg1 ;
-(void)setCalendarHomeURL:(id)arg1 ;
-(void)setDefaultCalendarURL:(id)arg1 ;
-(void)setNotificationCollectionURL:(id)arg1 ;
-(void)setNotificationCollectionCTag:(id)arg1 ;
-(void)setInboxURL:(id)arg1 ;
-(void)setInboxCTag:(id)arg1 ;
-(void)setOutboxURL:(id)arg1 ;
-(void)setDropBoxURL:(id)arg1 ;
-(void)setNotificationURLString:(id)arg1 ;
-(void)setCalendarHomePushKey:(id)arg1 ;
-(void)setQuotaFreeBytes:(id)arg1 ;
-(void)setSupportedCalendarComponentSets:(id)arg1 ;
-(void)setIsDelegate:(bool)arg1 ;
-(void)setCanCreateCalendars:(bool)arg1 ;
-(bool)isMergeSync;
-(bool)isEnabledForEvents;
-(bool)isEnabledForTodos;
-(id)eventFilterStartDate;
-(id)eventFilterEndDate;
-(id)todoFilterStartDate;
-(id)todoFilterEndDate;
-(void)setIsExpandPropertyReportSupported:(bool)arg1 ;
-(void)setSupportsFreebusy:(bool)arg1 ;
-(id)addedCalendars;
-(id)modifiedCalendars;
-(id)deletedCalendarURLs;
-(void)setSupportsSyncToken:(bool)arg1 ;
-(bool)clearCalendarChanges;
-(id)calendarUserAddressesForCalendar:(id)arg1 ;
-(void)setCalendarUserAddresses:(id)arg1 forCalendar:(id)arg2 ;
-(bool)calendarsAreDirty;
-(id)APSSubscriptionURL;
-(id)APSEnv;
-(id)preferredCalendarUserAddress;
-(id)preferredCalendarEmailAddress;
-(bool)hasCalendarUserAddress:(id)arg1 ;
-(bool)calendarUserAddressIsEquivalentToURL:(id)arg1 ;
-(bool)shouldRefreshPrincipalSearchProperties;
-(void)setShouldRefreshPrincipalSearchProperties:(bool)arg1 ;
-(id)taskManager;
-(bool)useSSL;
-(id)identityPersist;
-(CFURLStorageSessionRef)copyStorageSession;
-(id)customConnectionProperties;
-(bool)shouldFailAllTasks;
-(bool)shouldUseOpportunisticSockets;
-(void)noteTimeSpentInNetworking:(double)arg1 ;
-(bool)handleTrustChallenge:(id)arg1 ;
-(void)noteSuccessfulRequestWithNumDownloadedElements:(long long)arg1 ;
-(void)noteFailedProtocolRequest;
-(void)noteFailedNetworkRequest;
-(id)principalURL;
-(id)account;
-(id)accountID;
-(void)setAccount:(id)arg1 ;
-(bool)isWritable;
-(id)fullName;
-(void)setFullName:(id)arg1 ;
-(bool)isDirty;
-(long long)port;
@end

