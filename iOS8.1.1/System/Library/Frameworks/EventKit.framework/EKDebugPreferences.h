/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:28:07 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/Frameworks/EventKit.framework/EventKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class CalPreferences;

@interface EKDebugPreferences : NSObject {

	CalPreferences* _preferences;

}

@property (assign,nonatomic) double travelLookaheadInterval; 
@property (assign,nonatomic) double availabilityFreshnessWindow; 
+(id)shared;
-(double)availabilityFreshnessWindow;
-(double)travelLookaheadInterval;
-(void)setTravelLookaheadInterval:(double)arg1 ;
-(void)setAvailabilityFreshnessWindow:(double)arg1 ;
-(id)init;
@end

