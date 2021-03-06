/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 2:30:45 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Message/MFAttachmentDataProvider.h>

@class MFMailMessage, NSString;

@interface MFDecryptedAttachmentDataProvider : NSObject <MFAttachmentDataProvider> {

	MFMailMessage* _message;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(char)fetchDataForAttachment:(id)arg1 withDataConsumer:(id)arg2 error:(id*)arg3 ;
-(id)initWithDecryptedMessage:(id)arg1 ;
-(id)messageForAttachment:(id)arg1 ;
-(id)fetchLocalDataForAttachment:(id)arg1 ;
@end

