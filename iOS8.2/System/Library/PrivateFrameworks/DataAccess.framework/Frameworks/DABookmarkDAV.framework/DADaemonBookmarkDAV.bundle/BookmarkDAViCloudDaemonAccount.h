/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:19:55 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DABookmarkDAV.framework/DADaemonBookmarkDAV.bundle/DADaemonBookmarkDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <DADaemonBookmarkDAV/BookmarkDAVDaemonAccount.h>

@class NSString;

@interface BookmarkDAViCloudDaemonAccount : BookmarkDAVDaemonAccount {

	NSString* _host;
	int _useSSL;
	int _port;

}
-(id)host;
-(int)port;
-(void)setHost:(id)arg1 ;
-(void)noteHomeSetOnDifferentHost:(id)arg1 ;
-(char)shouldHandleHTTPCookiesForURL:(id)arg1 ;
-(char)shouldSendClientInfoHeaderForURL:(id)arg1 ;
-(char)shouldCompressRequests;
-(char)useSSL;
-(id)initWithBackingAccountInfo:(id)arg1 ;
@end

