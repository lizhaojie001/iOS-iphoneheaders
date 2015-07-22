/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:23:54 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/NanoMailKitServer.framework/NanoMailKitServer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <NanoMailKitServer/NanoMailKitServer-Structs.h>
#import <ProtocolBuffer/PBRequest.h>
#import <NanoMailKitServer/NSCopying.h>

@class NSString, NSMutableArray;

@interface NNMKProtoSendMessageRequest : PBRequest <NSCopying> {

	NSString* _body;
	NSMutableArray* _ccs;
	NSString* _subject;
	NSMutableArray* _tos;

}

@property (nonatomic,retain) NSMutableArray * tos;              //@synthesize tos=_tos - In the implementation block
@property (nonatomic,retain) NSMutableArray * ccs;              //@synthesize ccs=_ccs - In the implementation block
@property (nonatomic,readonly) BOOL hasSubject; 
@property (nonatomic,retain) NSString * subject;                //@synthesize subject=_subject - In the implementation block
@property (nonatomic,readonly) BOOL hasBody; 
@property (nonatomic,retain) NSString * body;                   //@synthesize body=_body - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)body;
-(id)dictionaryRepresentation;
-(void)setSubject:(NSString *)arg1 ;
-(NSString *)subject;
-(void)setBody:(NSString *)arg1 ;
-(void)addTo:(id)arg1 ;
-(void)addCc:(id)arg1 ;
-(unsigned long long)tosCount;
-(void)clearTos;
-(id)toAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)ccsCount;
-(void)clearCcs;
-(id)ccAtIndex:(unsigned long long)arg1 ;
-(BOOL)hasSubject;
-(BOOL)hasBody;
-(NSMutableArray *)tos;
-(void)setTos:(NSMutableArray *)arg1 ;
-(NSMutableArray *)ccs;
-(void)setCcs:(NSMutableArray *)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
@end
