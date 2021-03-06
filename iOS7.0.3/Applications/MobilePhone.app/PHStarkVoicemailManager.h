/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:00:21 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/MobilePhone.app/MobilePhone
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


@interface PHStarkVoicemailManager : NSObject
+(BOOL)isVisualVoicemailAvailable;
+(id)sharedVoicemailManager;
-(id)voicemails;
-(id)badgeString;
-(id)voicemailWithID:(long long)arg1 ;
-(void)voicemailsAddedNotification:(id)arg1 ;
-(void)onlineStateChangedNotification:(id)arg1 ;
-(void)voicemailFlagsChangedNotification:(id)arg1 ;
-(void)voicemailStoreContentsRemovedNotification:(id)arg1 ;
-(id)trashedVoicemails;
-(void)dealloc;
-(id)init;
@end

