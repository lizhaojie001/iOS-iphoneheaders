/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:21:56 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <DataAccess/NSCoding.h>

@interface DAMailMessage : NSObject <NSCoding>
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)date;
-(id)body;
-(id)attachments;
-(id)subject;
-(id)messageClass;
-(id)from;
-(int)importance;
-(int)bodyTruncated;
-(id)replyTo;
-(id)displayTo;
-(id)threadTopic;
-(id)conversationIndex;
-(id)to;
-(id)remoteID;
-(id)cc;
-(id)folderID;
-(int)bodySize;
-(id)meetingRequestUUID;
-(id)longID;
-(BOOL)readIsSet;
-(BOOL)flaggedIsSet;
-(BOOL)flagged;
-(BOOL)verbIsSet;
-(int)lastVerb;
-(int)smimeType;
-(id)meetingRequestMetaData;
-(BOOL)meetingRequestIsActionable;
-(id)conversationId;
-(id)rfc822Data;
-(BOOL)read;
@end

