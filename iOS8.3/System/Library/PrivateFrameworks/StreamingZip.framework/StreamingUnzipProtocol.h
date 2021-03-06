/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 3:43:36 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/StreamingZip.framework/StreamingZip
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol StreamingUnzipProtocol
@required
-(void)setupUnzipperWithOutputPath:(id)arg1 sandboxExtensionToken:(char*)arg2 options:(id)arg3 withReply:(/*^block*/id)arg4;
-(void)supplyBytes:(id)arg1 withReply:(/*^block*/id)arg2;
-(void)supplyRemappableData:(id)arg1 withReply:(/*^block*/id)arg2;
-(void)supplyDispatchData:(id)arg1 withReply:(/*^block*/id)arg2;
-(void)supplyXPCData:(id)arg1 withReply:(/*^block*/id)arg2;
-(void)suspendStreamWithReply:(/*^block*/id)arg1;
-(void)finishStreamWithReply:(/*^block*/id)arg1;

@end

