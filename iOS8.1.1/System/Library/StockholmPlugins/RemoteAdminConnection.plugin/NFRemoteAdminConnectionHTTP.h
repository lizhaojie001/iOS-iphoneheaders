/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:36:09 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/StockholmPlugins/RemoteAdminConnection.plugin/RemoteAdminConnection
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <RemoteAdminConnection/RemoteAdminConnection-Structs.h>
#import <RemoteAdminConnection/NFRemoteAdminConnection.h>

@protocol OS_dispatch_semaphore;
@class NSURL, NSUserDefaults, NSObject, NSURLSession, NSString;

@interface NFRemoteAdminConnectionHTTP : NSObject <NFRemoteAdminConnection> {

	NSURL* _url;
	NSUserDefaults* _ud;
	NSObject*<OS_dispatch_semaphore> _sem;
	NSURLSession* _netSession;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(SCNetworkReachabilityRef)_availabilityRef;
+(unsigned)registerForAvailabilityChanges:(id)arg1 callbackQueue:(id)arg2 ;
+(unsigned)unregisterForAvailabilityChanges:(id)arg1 ;
+(BOOL)isAvailable;
-(id)initWithURL:(id)arg1 SEID:(id)arg2 ;
-(unsigned)performRequest:(id)arg1 info:(id)arg2 response:(id*)arg3 ;
-(void)dealloc;
-(unsigned)connect;
-(unsigned)disconnect;
@end

