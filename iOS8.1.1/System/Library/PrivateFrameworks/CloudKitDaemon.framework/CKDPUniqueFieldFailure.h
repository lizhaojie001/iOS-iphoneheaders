/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:31:03 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CloudKitDaemon/CloudKitDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <CloudKitDaemon/NSCopying.h>

@class CKDPIdentifier;

@interface CKDPUniqueFieldFailure : PBCodable <NSCopying> {

	CKDPIdentifier* _identifierForConstraintFailure;

}

@property (nonatomic,readonly) BOOL hasIdentifierForConstraintFailure; 
@property (nonatomic,retain) CKDPIdentifier * identifierForConstraintFailure;              //@synthesize identifierForConstraintFailure=_identifierForConstraintFailure - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)setIdentifierForConstraintFailure:(CKDPIdentifier *)arg1 ;
-(BOOL)hasIdentifierForConstraintFailure;
-(CKDPIdentifier *)identifierForConstraintFailure;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
@end

