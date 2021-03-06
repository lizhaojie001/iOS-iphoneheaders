/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:20:31 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/NanoMailKitServer.framework/NanoMailKitServer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <NanoMailKitServer/NanoMailKitServer-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <NanoMailKitServer/NSCopying.h>

@class NSMutableArray;

@interface NNMKProtoMessagesFilteredOutWarning : PBCodable <NSCopying> {

	unsigned _fullSyncVersion;
	NSMutableArray* _removedMessageIds;
	SCD_Struct_NN1 _has;

}

@property (assign,nonatomic) char hasFullSyncVersion; 
@property (assign,nonatomic) unsigned fullSyncVersion;                        //@synthesize fullSyncVersion=_fullSyncVersion - In the implementation block
@property (nonatomic,retain) NSMutableArray * removedMessageIds;              //@synthesize removedMessageIds=_removedMessageIds - In the implementation block
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)setFullSyncVersion:(unsigned)arg1 ;
-(void)setHasFullSyncVersion:(char)arg1 ;
-(char)hasFullSyncVersion;
-(unsigned)fullSyncVersion;
-(void)addRemovedMessageId:(id)arg1 ;
-(unsigned)removedMessageIdsCount;
-(void)clearRemovedMessageIds;
-(id)removedMessageIdAtIndex:(unsigned)arg1 ;
-(NSMutableArray *)removedMessageIds;
-(void)setRemovedMessageIds:(NSMutableArray *)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
@end

