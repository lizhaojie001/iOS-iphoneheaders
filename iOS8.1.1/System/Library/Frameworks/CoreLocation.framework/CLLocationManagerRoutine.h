/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:28:01 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/Frameworks/CoreLocation.framework/CoreLocation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class _CLLocationManagerRoutineProxy;

@interface CLLocationManagerRoutine : NSObject {

	_CLLocationManagerRoutineProxy* _locationManagerRoutineProxy;

}

@property (assign,nonatomic) id<CLLocationManagerDelegate> delegate; 
@property (nonatomic,retain) _CLLocationManagerRoutineProxy * locationManagerRoutineProxy;              //@synthesize locationManagerRoutineProxy=_locationManagerRoutineProxy - In the implementation block
-(_CLLocationManagerRoutineProxy *)locationManagerRoutineProxy;
-(void)setLocationManagerRoutineProxy:(_CLLocationManagerRoutineProxy *)arg1 ;
-(void)dealloc;
-(void)setDelegate:(id<CLLocationManagerDelegate>)arg1 ;
-(id)init;
-(id<CLLocationManagerDelegate>)delegate;
-(void)startUpdatingLocation;
-(void)stopUpdatingLocation;
@end

