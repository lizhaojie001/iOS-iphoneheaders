/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:09:00 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/Support/itunesstored
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <itunesstored/itunesstored-Structs.h>
#import <CoreFoundation/NSCopying.h>

@class NSMutableDictionary, DownloadsChangeset, NSError, NSDictionary;

@interface DownloadResults : NSObject <NSCopying> {

	long long _assetID;
	NSMutableDictionary* _assetProperties;
	NSMutableDictionary* _assetExternalProperties;
	DownloadsChangeset* _changeset;
	long long _downloadID;
	NSMutableDictionary* _downloadProperties;
	NSMutableDictionary* _downloadExternalProperties;
	NSError* _error;
	int _resultType;

}

@property (nonatomic,readonly) long long assetIdentifier;                          //@synthesize assetID=_assetID - In the implementation block
@property (nonatomic,readonly) long long downloadIdentifier;                       //@synthesize downloadID=_downloadID - In the implementation block
@property (assign,nonatomic) int resultType;                                       //@synthesize resultType=_resultType - In the implementation block
@property (nonatomic,retain) NSError * error;                                      //@synthesize error=_error - In the implementation block
@property (nonatomic,copy) DownloadsChangeset * changeset;                         //@synthesize changeset=_changeset - In the implementation block
@property (nonatomic,copy) NSDictionary * assetProperties; 
@property (nonatomic,copy) NSDictionary * assetExternalProperties; 
@property (nonatomic,copy) NSDictionary * downloadProperties;                      //@synthesize downloadProperties=_downloadProperties - In the implementation block
@property (nonatomic,copy) NSDictionary * downloadExternalProperties;              //@synthesize downloadExternalProperties=_downloadExternalProperties - In the implementation block
-(id)changeset;
-(long long)assetIdentifier;
-(id)assetProperties;
-(id)assetExternalProperties;
-(void)unionChangeset:(id)arg1 ;
-(void)unionDownloadResults:(id)arg1 ;
-(void)setAssetContentLength:(id)arg1 ;
-(id)initWithDownloadIdentifier:(long long)arg1 assetIdentifier:(long long)arg2 ;
-(void)setValue:(id)arg1 forDownloadExternalProperty:(id)arg2 ;
-(void)setAssetPropertiesUsingHeadResponse:(id)arg1 ;
-(id)_initDownloadResults;
-(void)setChangeset:(id)arg1 ;
-(void)setAssetProperties:(id)arg1 ;
-(void)setAssetExternalProperties:(id)arg1 ;
-(void)setDownloadExternalProperties:(id)arg1 ;
-(void)addAssetPropertiesFromDictionary:(id)arg1 ;
-(void)setValue:(id)arg1 forAssetExternalProperty:(id)arg2 ;
-(void)setValuesForDownloadProperties:(id)arg1 ;
-(void)setError:(id)arg1 ;
-(long long)downloadIdentifier;
-(id)downloadProperties;
-(void)setDownloadProperties:(id)arg1 ;
-(void)setValue:(id)arg1 forDownloadProperty:(id)arg2 ;
-(void)dealloc;
-(id)init;
-(id)copyWithZone:(NSZoneRef)arg1 ;
-(void)setResultType:(int)arg1 ;
-(id)error;
-(void)setValue:(id)arg1 forAssetProperty:(id)arg2 ;
-(int)resultType;
-(id)downloadExternalProperties;
@end

