/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 7:09:48 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /Applications/MobileMail.app/MobileMail
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MobileMail/MCSMailboxOperation.h>

@class MFMailboxUid, NSString;

@interface MCSRenameMailboxOperation : MCSMailboxOperation {

	MFMailboxUid* _mailboxToRename;
	NSString* _pendingName;
	NSString* _reasonForFailure;

}

@property (nonatomic,copy) NSString * reasonForFailure;              //@synthesize reasonForFailure=_reasonForFailure - In the implementation block
-(id)localizedErrorDescription;
-(id)localizedErrorTitle;
-(id)modifiedMailboxName;
-(id)mailboxToMoveOrRename;
-(id)mailboxParentForMove;
-(id)accountForErrorHandling;
-(void)setReasonForFailure:(NSString *)arg1 ;
-(NSString *)reasonForFailure;
-(id)initWithMailboxToRename:(id)arg1 toName:(id)arg2 ;
-(char)revert;
-(void)dealloc;
-(char)commit;
@end

