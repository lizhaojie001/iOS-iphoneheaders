/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 7:09:27 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /Applications/Diagnostics.app/Diagnostics
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol IDSServiceDelegate <NSObject>
@optional
-(void)service:(id)arg1 account:(id)arg2 incomingMessage:(id)arg3 fromID:(id)arg4 context:(id)arg5;
-(void)service:(id)arg1 account:(id)arg2 incomingData:(id)arg3 fromID:(id)arg4 context:(id)arg5;
-(void)service:(id)arg1 account:(id)arg2 incomingUnhandledProtobuf:(id)arg3 fromID:(id)arg4 context:(id)arg5;
-(void)service:(id)arg1 account:(id)arg2 incomingResourceAtURL:(id)arg3 fromID:(id)arg4 context:(id)arg5;
-(void)service:(id)arg1 account:(id)arg2 incomingResourceAtURL:(id)arg3 metadata:(id)arg4 fromID:(id)arg5 context:(id)arg6;
-(void)service:(id)arg1 activeAccountsChanged:(id)arg2;
-(void)service:(id)arg1 devicesChanged:(id)arg2;
-(void)service:(id)arg1 nearbyDevicesChanged:(id)arg2;
-(void)service:(id)arg1 account:(id)arg2 identifier:(id)arg3 didSendWithSuccess:(char)arg4 error:(id)arg5;
-(void)service:(id)arg1 account:(id)arg2 identifier:(id)arg3 hasBeenDeliveredWithContext:(id)arg4;
-(void)service:(id)arg1 account:(id)arg2 inviteReceivedForSession:(id)arg3 fromID:(id)arg4;
-(void)service:(id)arg1 account:(id)arg2 inviteReceivedForSession:(id)arg3 fromID:(id)arg4 withOptions:(id)arg5;
-(void)service:(id)arg1 account:(id)arg2 inviteReceivedForSession:(id)arg3 fromID:(id)arg4 withContext:(id)arg5;
-(void)serviceSpaceDidBecomeAvailable:(id)arg1;
-(void)serviceAllowedTrafficClassifiersDidReset:(id)arg1;

@end

