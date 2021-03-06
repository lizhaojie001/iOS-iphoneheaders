/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 2:02:53 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/IAP.framework/Support/iap2d
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class iAP2Connection, NSMutableDictionary;

@interface iAP2HIDManager : NSObject {

	iAP2Connection* _connection;
	NSMutableDictionary* _descriptorsForConnection;

}

@property (nonatomic,readonly) iAP2Connection * connection;                                 //@synthesize connection=_connection - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * descriptorsForConnection;              //@synthesize descriptorsForConnection=_descriptorsForConnection - In the implementation block
-(BOOL)unRegisterAllDescriptors;
-(BOOL)unregisterDescriptor:(unsigned short)arg1 deleteDescriptor:(BOOL)arg2 ;
-(BOOL)registerDescriptor:(unsigned short)arg1 vid:(unsigned short)arg2 pid:(unsigned short)arg3 countryCode:(unsigned char)arg4 descriptor:(char*)arg5 descriptorLength:(unsigned)arg6 ;
-(BOOL)handleHIDReportFromAcc:(unsigned short)arg1 report:(char*)arg2 reportLength:(unsigned)arg3 ;
-(int)handleHIDGetReportResponseFromAcc:(unsigned short)arg1 reportType:(unsigned char)arg2 reportID:(unsigned char)arg3 report:(char*)arg4 reportLength:(unsigned)arg5 ;
-(NSMutableDictionary *)descriptorsForConnection;
-(void)dealloc;
-(iAP2Connection *)connection;
-(id)initWithConnection:(id)arg1 ;
@end

