/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:20:15 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/HomeSharing.framework/HomeSharing
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class SSURLConnectionRequest, NSObject, NSString;

@interface HSAccountStore : NSObject {

	int _defaultsDidChangeToken;
	SSURLConnectionRequest* _groupIDRequest;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (nonatomic,copy) NSString * appleID; 
@property (nonatomic,copy) NSString * password; 
@property (nonatomic,copy) NSString * groupID; 
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                   //@synthesize queue=_queue - In the implementation block
@property (nonatomic,retain) SSURLConnectionRequest * groupIDRequest;              //@synthesize groupIDRequest=_groupIDRequest - In the implementation block
+(id)defaultStore;
-(void)determineGroupIDWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)dealloc;
-(id)init;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(NSString *)password;
-(void)setPassword:(NSString *)arg1 ;
-(void)clearGroupID;
-(void)_onBackgroundQueue_determineGroupIDWithCompletionHandler:(/*^block*/id)arg1 ;
-(char)canDetermineGroupID;
-(void)clearAllCredentials;
-(SSURLConnectionRequest *)groupIDRequest;
-(void)setGroupIDRequest:(SSURLConnectionRequest *)arg1 ;
-(NSString *)groupID;
-(void)setGroupID:(NSString *)arg1 ;
-(void)setAppleID:(NSString *)arg1 ;
-(NSString *)appleID;
-(void)clearCaches;
@end

