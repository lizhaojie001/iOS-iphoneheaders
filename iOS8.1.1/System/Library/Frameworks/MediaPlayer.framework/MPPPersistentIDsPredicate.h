/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:28:34 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MediaPlayer/MediaPlayer-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <MediaPlayer/NSCopying.h>

@interface MPPPersistentIDsPredicate : PBCodable <NSCopying> {

	SCD_Struct_MP26* _persistentIDs;
	BOOL _shouldContain;
	SCD_Struct_MP23 _has;

}

@property (assign,nonatomic) BOOL hasShouldContain; 
@property (assign,nonatomic) BOOL shouldContain;                                   //@synthesize shouldContain=_shouldContain - In the implementation block
@property (nonatomic,readonly) unsigned long long persistentIDsCount; 
@property (nonatomic,readonly) long long* persistentIDs; 
-(unsigned long long)persistentIDsCount;
-(long long*)persistentIDs;
-(void)setShouldContain:(BOOL)arg1 ;
-(void)addPersistentIDs:(long long)arg1 ;
-(BOOL)hasShouldContain;
-(void)clearPersistentIDs;
-(long long)persistentIDsAtIndex:(unsigned long long)arg1 ;
-(void)setHasShouldContain:(BOOL)arg1 ;
-(void)setPersistentIDs:(long long*)arg1 count:(unsigned long long)arg2 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)shouldContain;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
@end

