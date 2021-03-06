/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 4:21:07 AM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/MobileBackup.framework/backupd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <backupd/backupd-Structs.h>
#import <ProtocolBuffer/PBCodable.h>

@class NSData;

@interface MBSKey : PBCodable {

	NSData* _keyData;
	unsigned _keyID;
	SCD_Struct_MB4 _has;

}

@property (assign,nonatomic) BOOL hasKeyID; 
@property (assign,nonatomic) unsigned keyID;                 //@synthesize keyID=_keyID - In the implementation block
@property (nonatomic,readonly) BOOL hasKeyData; 
@property (nonatomic,retain) NSData * keyData;               //@synthesize keyData=_keyData - In the implementation block
-(unsigned)keyID;
-(void)setKeyData:(id)arg1 ;
-(BOOL)hasKeyID;
-(void)setKeyID:(unsigned)arg1 ;
-(BOOL)hasKeyData;
-(void)setHasKeyID:(BOOL)arg1 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(id)keyData;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
@end

