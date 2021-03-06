/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:24:31 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSManagedObjectID, NSString, NSArray, GEOBatchReverseGeocodeRequest, PLRevGeoLocationInfo;

@interface PLMomentAnalyzerGeoRequestInfo : NSObject {

	unsigned long long _requestType;
	NSManagedObjectID* _momentId;
	NSString* _momentUuid;
	NSArray* _assetIds;
	GEOBatchReverseGeocodeRequest* _reverseGeocodeRequest;
	unsigned long long _failureCount;
	NSArray* _extraAssetIds;
	NSArray* _extraLocations;
	PLRevGeoLocationInfo* _revGeoLocationInfo;

}

@property (assign,nonatomic) unsigned long long requestType;                                     //@synthesize requestType=_requestType - In the implementation block
@property (nonatomic,retain) NSManagedObjectID * momentId;                                       //@synthesize momentId=_momentId - In the implementation block
@property (nonatomic,copy) NSString * momentUuid;                                                //@synthesize momentUuid=_momentUuid - In the implementation block
@property (nonatomic,copy) NSArray * assetIds;                                                   //@synthesize assetIds=_assetIds - In the implementation block
@property (nonatomic,retain) GEOBatchReverseGeocodeRequest * reverseGeocodeRequest;              //@synthesize reverseGeocodeRequest=_reverseGeocodeRequest - In the implementation block
@property (assign,nonatomic) unsigned long long failureCount;                                    //@synthesize failureCount=_failureCount - In the implementation block
@property (nonatomic,copy) NSArray * extraAssetIds;                                              //@synthesize extraAssetIds=_extraAssetIds - In the implementation block
@property (nonatomic,copy) NSArray * extraLocations;                                             //@synthesize extraLocations=_extraLocations - In the implementation block
@property (getter=hasExtraData,nonatomic,readonly) bool extraData; 
@property (nonatomic,retain) PLRevGeoLocationInfo * revGeoLocationInfo;                          //@synthesize revGeoLocationInfo=_revGeoLocationInfo - In the implementation block
-(void)dealloc;
-(bool)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)setRequestType:(unsigned long long)arg1 ;
-(void)setMomentId:(id)arg1 ;
-(void)setMomentUuid:(id)arg1 ;
-(void)setAssetIds:(id)arg1 ;
-(void)setReverseGeocodeRequest:(id)arg1 ;
-(id)momentUuid;
-(id)initWithRequestType:(unsigned long long)arg1 momentId:(id)arg2 momentUuid:(id)arg3 assetIds:(id)arg4 reverseGeocodeRequest:(id)arg5 ;
-(bool)hasExtraData;
-(unsigned long long)requestType;
-(id)momentId;
-(id)assetIds;
-(id)reverseGeocodeRequest;
-(unsigned long long)failureCount;
-(void)setFailureCount:(unsigned long long)arg1 ;
-(id)extraAssetIds;
-(void)setExtraAssetIds:(id)arg1 ;
-(id)extraLocations;
-(void)setExtraLocations:(id)arg1 ;
-(id)revGeoLocationInfo;
-(void)setRevGeoLocationInfo:(id)arg1 ;
@end

