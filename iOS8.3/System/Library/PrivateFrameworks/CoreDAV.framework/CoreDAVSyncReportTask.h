/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 1:10:28 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreDAV/CoreDAVPropertyFindBaseTask.h>

@class NSString;

@interface CoreDAVSyncReportTask : CoreDAVPropertyFindBaseTask {

	NSString* _previousSyncToken;
	NSString* _nextSyncToken;
	char _moreToSync;
	char _wasInvalidSyncToken;

}

@property (nonatomic,readonly) NSString * nextSyncToken;              //@synthesize nextSyncToken=_nextSyncToken - In the implementation block
@property (nonatomic,readonly) char moreToSync;                       //@synthesize moreToSync=_moreToSync - In the implementation block
@property (nonatomic,readonly) char wasInvalidSyncToken;              //@synthesize wasInvalidSyncToken=_wasInvalidSyncToken - In the implementation block
-(void)dealloc;
-(id)description;
-(id)httpMethod;
-(void)finishCoreDAVTaskWithError:(id)arg1 ;
-(id)copyDefaultParserForContentType:(id)arg1 ;
-(id)initWithPropertiesToFind:(id)arg1 atURL:(id)arg2 withDepth:(int)arg3 previousSyncToken:(id)arg4 ;
-(char)wasInvalidSyncToken;
-(id)notFoundHREFs;
-(char)moreToSync;
-(NSString *)nextSyncToken;
-(id)requestBody;
@end

