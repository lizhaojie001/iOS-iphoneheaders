/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 12:31:41 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/Accessibility.framework/Frameworks/ZoomServices.framework/ZoomServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol AXUIClientDelegate <NSObject>
@optional
-(id)userInterfaceClient:(id)arg1 processMessageFromServer:(id)arg2 withIdentifier:(unsigned)arg3 error:(id*)arg4;
-(char)userInterfaceClient:(id)arg1 messageFromServerForWithIdentifierShouldBeProcessedAsynchronously:(unsigned)arg2;
-(void)userInterfaceClient:(id)arg1 processMessageFromServerAsynchronously:(id)arg2 withIdentifier:(unsigned)arg3 completion:(/*^block*/id)arg4;
-(id)userInterfaceClient:(id)arg1 accessQueueForProcessingMessageWithIdentifier:(unsigned)arg2;
-(char)userInterfaceClient:(id)arg1 messageWithIdentifierRequiresWritingBlock:(unsigned)arg2;
-(void)userInterfaceClient:(id)arg1 willActivateUserInterfaceServiceWithInitializationMessage:(id)arg2;
-(void)connectionWithServiceWasInterruptedForUserInterfaceClient:(id)arg1;

@end

