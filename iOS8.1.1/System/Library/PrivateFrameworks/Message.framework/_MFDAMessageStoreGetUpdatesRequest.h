/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:32:33 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <DataAccess/DAMailboxGetUpdatesRequest.h>
#import <Message/MFDAMailAccountRequest.h>

@interface _MFDAMessageStoreGetUpdatesRequest : DAMailboxGetUpdatesRequest <MFDAMailAccountRequest> {

	BOOL _isUserRequested;

}

@property (nonatomic,readonly) BOOL shouldSend; 
@property (nonatomic,readonly) BOOL isUserRequested; 
-(BOOL)isUserRequested;
-(unsigned long long)generationNumber;
-(id)deferredOperation;
-(BOOL)shouldSend;
-(id)initRequestForBodyFormat:(int)arg1 withBodySizeLimit:(int)arg2 isUserRequested:(BOOL)arg3 ;
-(BOOL)mf_alwaysReportFailures;
@end
