/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:21:35 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/CompanionCamera.framework/Support/companioncamerad
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <companioncamerad/companioncamerad-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <companioncamerad/NSCopying.h>

@interface NCSetCameraModeResponse : PBCodable <NSCopying> {

	int _mode;
	SCD_Struct_NC3 _has;

}

@property (assign,nonatomic) BOOL hasMode; 
@property (assign,nonatomic) int mode;                  //@synthesize mode=_mode - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setMode:(int)arg1 ;
-(int)mode;
-(id)dictionaryRepresentation;
-(void)setHasMode:(BOOL)arg1 ;
-(BOOL)hasMode;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
@end

