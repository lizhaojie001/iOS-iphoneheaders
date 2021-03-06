/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 4:22:24 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/WebUI.framework/WebUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableSet, NSXPCConnection;

@interface WBSSearchHelperConnectionManager : NSObject {

	NSMutableSet* _clients;
	NSXPCConnection* _searchHelperConnection;

}

@property (nonatomic,retain) NSXPCConnection * searchHelperConnection;              //@synthesize searchHelperConnection=_searchHelperConnection - In the implementation block
+(id)sharedManager;
-(id)init;
-(void)removeClient:(id)arg1 ;
-(id)searchHelperConnectionRequestedByClient:(id)arg1 ;
-(void)setSearchHelperConnection:(NSXPCConnection *)arg1 ;
-(NSXPCConnection *)searchHelperConnection;
@end

