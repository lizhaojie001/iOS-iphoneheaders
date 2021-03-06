/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:55:07 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <GeoServices/GEOResourceManifestTileGroupObserver.h>

@class NSString, NSDictionary;

@interface GEOCountryConfiguration : NSObject <GEOResourceManifestTileGroupObserver> {

	NSString* _countryCode;
	NSDictionary* _oldProvidersInfo;
	NSString* _oldCountryCode;
	BOOL _isObservingReachability;
	BOOL _isUpdating;
	BOOL _currentCountrySupportsTraffic;
	BOOL _currentCountrySupportsDirections;

}

@property (nonatomic,copy) NSString * countryCode;                                 //@synthesize countryCode=_countryCode - In the implementation block
@property (nonatomic,readonly) BOOL currentCountrySupportsTraffic;                 //@synthesize currentCountrySupportsTraffic=_currentCountrySupportsTraffic - In the implementation block
@property (nonatomic,readonly) BOOL currentCountrySupportsDirections;              //@synthesize currentCountrySupportsDirections=_currentCountrySupportsDirections - In the implementation block
@property (nonatomic,readonly) BOOL currentCountrySupportsNavigation; 
+(id)sharedConfiguration;
-(void)dealloc;
-(id)init;
-(id)countryDefaultForKey:(id)arg1 ;
-(void)setCountryCode:(id)arg1 ;
-(void)_updatedSupportedFeatures;
-(void)_useCountryCodeProvider:(id)arg1 ;
-(void)_checkCountryCode;
-(void)_checkCountryProviders;
-(void)_registerNetworkDefaults;
-(id)countryDefaultForKey:(id)arg1 sourcePtr:(int*)arg2 ;
-(id)defaultForKey:(id)arg1 defaultValue:(id)arg2 sourcePtr:(int*)arg3 ;
-(BOOL)currentCountrySupportsNavigation;
-(BOOL)currentCountrySupportsDirections;
-(BOOL)currentCountrySupportsTraffic;
-(void)_reachabilityChanged:(id)arg1 ;
-(id)countryCode;
-(id)defaultForKey:(id)arg1 defaultValue:(id)arg2 ;
-(void)updateProvidersForCurrentCountry;
-(void)resourceManifestManagerWillChangeActiveTileGroup:(id)arg1 ;
-(void)resourceManifestManagerDidChangeActiveTileGroup:(id)arg1 ;
@end

