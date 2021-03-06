/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 4:11:12 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/Weather.framework/Weather
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Weather/CLLocationManagerDelegate.h>
#import <Weather/WeatherValidatorDelegate.h>

@class CLLocationManager, NSString;

@interface WeatherUpdateController : NSObject <CLLocationManagerDelegate, WeatherValidatorDelegate> {

	CLLocationManager* _locationManager;
	/*^block*/id searchCompletion;
	/*^block*/id currentLocationCompletion;
	/*^block*/id weatherInfoCompletion;
	CLLocationManager* locationManager;

}

@property (nonatomic,retain) CLLocationManager * locationManager; 
@property (nonatomic,copy) id searchCompletion; 
@property (nonatomic,copy) id currentLocationCompletion; 
@property (nonatomic,copy) id weatherInfoCompletion; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedWeatherUpdateController;
-(void)dealloc;
-(void)setSearchCompletion:(id)arg1 ;
-(id)searchCompletion;
-(void)setLocationManager:(CLLocationManager *)arg1 ;
-(CLLocationManager *)locationManager;
-(void)locationManager:(id)arg1 didUpdateLocations:(id)arg2 ;
-(void)locationManager:(id)arg1 didFailWithError:(id)arg2 ;
-(void)didValidateLocation:(id)arg1 ;
-(void)didFailWithError:(id)arg1 ;
-(void)setCurrentLocationCompletion:(id)arg1 ;
-(void)setWeatherInfoCompletion:(id)arg1 ;
-(id)citiesInWeatherAppList;
-(id)currentLocationCompletion;
-(void)searchForCitiesWithName:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(int)activeCity;
-(id)addCityToWeatherAppList:(id)arg1 ;
-(char)weatherListContainsCity:(id)arg1 ;
-(void)removeAllCities;
-(void)weatherInformationForLocation:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)weatherInformationForCities:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)weatherInformationForIDs:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(id)weatherInfoCompletion;
@end

