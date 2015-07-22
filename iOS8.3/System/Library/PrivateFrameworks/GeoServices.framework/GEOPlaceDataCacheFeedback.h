/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 1:52:09 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <GeoServices/NSCopying.h>

@class NSString, GEOPDPlaceRequest;

@interface GEOPlaceDataCacheFeedback : PBCodable <NSCopying> {

	NSString* _bundleIdentifier;
	GEOPDPlaceRequest* _request;

}

@property (nonatomic,readonly) char hasRequest; 
@property (nonatomic,retain) GEOPDPlaceRequest * request;              //@synthesize request=_request - In the implementation block
@property (nonatomic,readonly) char hasBundleIdentifier; 
@property (nonatomic,retain) NSString * bundleIdentifier;              //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(NSString *)bundleIdentifier;
-(GEOPDPlaceRequest *)request;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)setBundleIdentifier:(NSString *)arg1 ;
-(char)hasRequest;
-(char)hasBundleIdentifier;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setRequest:(GEOPDPlaceRequest *)arg1 ;
@end
