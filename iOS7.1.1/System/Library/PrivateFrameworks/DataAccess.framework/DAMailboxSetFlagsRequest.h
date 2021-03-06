/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:23:12 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <DataAccess/DAMailboxRequest.h>

@class NSString;

@interface DAMailboxSetFlagsRequest : DAMailboxRequest {

	unsigned long long _onFlags;
	unsigned long long _offFlags;
	NSString* _messageID;

}
-(void)dealloc;
-(bool)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)messageID;
-(id)initRequestWithSetFlags:(unsigned long long)arg1 unsetFlags:(unsigned long long)arg2 message:(id)arg3 ;
-(unsigned long long)onFlags;
-(unsigned long long)offFlags;
@end

