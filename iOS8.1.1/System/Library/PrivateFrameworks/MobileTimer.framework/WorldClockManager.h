/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:32:40 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableArray, NSTimer, NSDate, NSArray;

@interface WorldClockManager : NSObject {

	BOOL _dirty;
	NSMutableArray* _cities;
	NSTimer* _weatherUpdateTimer;
	NSDate* lastModified;

}

@property (nonatomic,retain,readonly) NSArray * cities;              //@synthesize cities=_cities - In the implementation block
@property (nonatomic,retain) NSDate * lastModified; 
+(id)sharedManager;
-(void)setLastModified:(NSDate *)arg1 ;
-(NSArray *)cities;
-(void)dealloc;
-(void)saveCities;
-(BOOL)canAddCity;
-(void)updateWeatherDataForCities:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)loadCities;
-(BOOL)checkIfCitiesModified;
-(id)cityWithIdUrl:(id)arg1 ;
-(unsigned long long)addCity:(id)arg1 ;
-(void)removeCity:(id)arg1 ;
-(void)removeCityAtIndex:(unsigned long long)arg1 ;
-(void)moveCityFromIndex:(unsigned long long)arg1 toIndex:(unsigned long long)arg2 ;
-(void)updateWeatherDataWithCompletion:(/*^block*/id)arg1 ;
-(id)weatherReachabilityURL;
-(void)removeAllCities;
-(NSDate *)lastModified;
@end

