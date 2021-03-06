/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:23:16 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/LatteRTC.framework/LatteRTC
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <LatteRTC/LatteRTC-Structs.h>
@interface LTERTCPPacket : NSObject {

	unsigned char _packetType;
	unsigned _SSRC;

}

@property (assign,nonatomic) unsigned char packetType;              //@synthesize packetType=_packetType - In the implementation block
@property (assign,setter=SRC,nonatomic) unsigned SSRC;              //@synthesize SSRC=_SSRC - In the implementation block
+(id)createWithRTCPPacket:(tagRTCPPACKET*)arg1 ;
-(id)description;
-(void)setPacketType:(unsigned char)arg1 ;
-(unsigned char)packetType;
-(unsigned)SSRC;
-(id)initWithRTCPPacket:(tagRTCPPACKET*)arg1 ;
-(void)setSSRC:(unsigned)arg1 ;
@end

