/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:19:53 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/CoreRoutine.framework/CoreRoutine
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol GEOMapServiceTicket;
@interface RTGeocoder : NSObject {

	id<GEOMapServiceTicket> _ticket;

}

@property (nonatomic,retain) id<GEOMapServiceTicket> ticket;              //@synthesize ticket=_ticket - In the implementation block
-(void)dealloc;
-(void)geocodeLatitude:(double)arg1 longitude:(double)arg2 handler:(/*^block*/id)arg3 ;
-(void)geocodeAddressDictionary:(id)arg1 withHandler:(/*^block*/id)arg2 ;
-(void)_cancelTicket:(id)arg1 ;
-(id)geocodeLatitude:(double)arg1 longitude:(double)arg2 ;
-(id)geocodeAddressDictionary:(id)arg1 ;
-(id<GEOMapServiceTicket>)ticket;
-(void)setTicket:(id<GEOMapServiceTicket>)arg1 ;
@end

