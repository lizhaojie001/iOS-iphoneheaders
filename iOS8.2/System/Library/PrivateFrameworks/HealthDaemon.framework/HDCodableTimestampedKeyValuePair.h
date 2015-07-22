/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:20:13 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <HealthDaemon/HealthDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <HealthDaemon/NSCopying.h>

@class NSData, NSString;

@interface HDCodableTimestampedKeyValuePair : PBCodable <NSCopying> {

	double _numberDoubleValue;
	long long _numberIntValue;
	double _timestamp;
	NSData* _bytesValue;
	NSString* _key;
	NSString* _stringValue;
	SCD_Struct_HD8 _has;

}

@property (nonatomic,readonly) char hasKey; 
@property (nonatomic,retain) NSString * key;                         //@synthesize key=_key - In the implementation block
@property (assign,nonatomic) char hasTimestamp; 
@property (assign,nonatomic) double timestamp;                       //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) char hasNumberIntValue; 
@property (assign,nonatomic) long long numberIntValue;               //@synthesize numberIntValue=_numberIntValue - In the implementation block
@property (assign,nonatomic) char hasNumberDoubleValue; 
@property (assign,nonatomic) double numberDoubleValue;               //@synthesize numberDoubleValue=_numberDoubleValue - In the implementation block
@property (nonatomic,readonly) char hasStringValue; 
@property (nonatomic,retain) NSString * stringValue;                 //@synthesize stringValue=_stringValue - In the implementation block
@property (nonatomic,readonly) char hasBytesValue; 
@property (nonatomic,retain) NSData * bytesValue;                    //@synthesize bytesValue=_bytesValue - In the implementation block
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(double)timestamp;
-(void)setTimestamp:(double)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setValue:(id)arg1 ;
-(NSString *)stringValue;
-(void)setStringValue:(NSString *)arg1 ;
-(id)dictionaryRepresentation;
-(NSString *)key;
-(void)setKey:(NSString *)arg1 ;
-(char)hasKey;
-(void)setBytesValue:(NSData *)arg1 ;
-(char)hasBytesValue;
-(char)hasStringValue;
-(NSData *)bytesValue;
-(char)hasTimestamp;
-(void)setHasTimestamp:(char)arg1 ;
-(id)decodedValue;
-(id)decodedTimestamp;
-(void)setTimestampWithDate:(id)arg1 ;
-(id)initWithKey:(id)arg1 value:(id)arg2 timestamp:(id)arg3 ;
-(void)setNumberDoubleValue:(double)arg1 ;
-(void)setNumberIntValue:(long long)arg1 ;
-(char)hasNumberDoubleValue;
-(double)numberDoubleValue;
-(char)hasNumberIntValue;
-(long long)numberIntValue;
-(void)setHasNumberIntValue:(char)arg1 ;
-(void)setHasNumberDoubleValue:(char)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
@end
