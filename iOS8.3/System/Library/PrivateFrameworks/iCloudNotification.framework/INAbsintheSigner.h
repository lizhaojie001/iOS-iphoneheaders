/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 4:31:12 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/iCloudNotification.framework/ind
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class AASigningSession, NSDate;

@interface INAbsintheSigner : NSObject {

	AASigningSession* _signingSession;
	NSDate* _signingSessionCreationDate;

}
+(id)sharedSigner;
-(char)_didSigningSessionExpire;
-(id)signatureForData:(id)arg1 ;
-(id)_signingSession;
@end

