/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 2:50:44 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/NanoRegistry.framework/NanoRegistry
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <NanoRegistry/NanoRegistry-Structs.h>
#import <ProtocolBuffer/PBRequest.h>
#import <NanoRegistry/NSCopying.h>

@interface NRPBPairingModeRequest : PBRequest <NSCopying> {

	int _pairingMode;

}

@property (assign,nonatomic) int pairingMode;              //@synthesize pairingMode=_pairingMode - In the implementation block
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(int)pairingMode;
-(void)setPairingMode:(int)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
@end

