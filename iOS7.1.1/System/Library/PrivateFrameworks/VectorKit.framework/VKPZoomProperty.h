/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:25:42 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <VectorKit/VectorKit-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <CoreFoundation/NSCopying.h>

@class VKPStyleProperties;

@interface VKPZoomProperty : PBCodable <NSCopying> {

	float _maxZ;
	float _minZ;
	VKPStyleProperties* _properties;

}

@property (assign,nonatomic) float minZ;                                   //@synthesize minZ=_minZ - In the implementation block
@property (assign,nonatomic) float maxZ;                                   //@synthesize maxZ=_maxZ - In the implementation block
@property (nonatomic,retain) VKPStyleProperties * properties;              //@synthesize properties=_properties - In the implementation block
-(void)applyTo:(id)arg1 zoom:(float)arg2 ;
-(void)dealloc;
-(bool)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone)arg1 ;
-(id)dictionaryRepresentation;
-(id)properties;
-(void)setProperties:(id)arg1 ;
-(bool)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(float)minZ;
-(void)setMinZ:(float)arg1 ;
-(float)maxZ;
-(void)setMaxZ:(float)arg1 ;
@end

