/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 2:04:14 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/identityservicesd.app/identityservicesd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

@class NSString;


@protocol IDSLink <NSObject>
@property (retain) NSString * deviceID; 
@property (getter=linkTypeString,readonly) NSString * linkTypeString; 
@property (readonly) unsigned state; 
@property (readonly) unsigned headerOverhead; 
@property (assign) id<IDSLinkDelegate> delegate; 
@required
-(id)copyLinkStatsDict;
-(unsigned)sendPacketBuffer:(/*function pointer*/void**)arg1 toDeviceID:(id)arg2;
-(id)generateLinkReport:(double)arg1 isCurrentLink:(char)arg2;
-(NSString *)linkTypeString;
-(unsigned)headerOverhead;
-(void)setDelegate:(id)arg1;
-(id<IDSLinkDelegate>)delegate;
-(unsigned)state;
-(NSString *)deviceID;
-(void)setDeviceID:(id)arg1;

@end

