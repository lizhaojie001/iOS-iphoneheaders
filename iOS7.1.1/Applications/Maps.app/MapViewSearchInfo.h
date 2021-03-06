/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 8:59:04 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class GEOMapRegion, NSDate;

@interface MapViewSearchInfo : NSObject {

	GEOMapRegion* _mapRegion;
	NSDate* _mapEnteredForegroundDate;
	NSDate* _mapViewportChangedDate;

}

@property (nonatomic,retain) GEOMapRegion * mapRegion;                       //@synthesize mapRegion=_mapRegion - In the implementation block
@property (nonatomic,retain) NSDate * mapEnteredForegroundDate;              //@synthesize mapEnteredForegroundDate=_mapEnteredForegroundDate - In the implementation block
@property (nonatomic,retain) NSDate * mapViewportChangedDate;                //@synthesize mapViewportChangedDate=_mapViewportChangedDate - In the implementation block
-(id)mapEnteredForegroundDate;
-(id)mapViewportChangedDate;
-(void)setMapViewportChangedDate:(id)arg1 ;
-(void)setMapEnteredForegroundDate:(id)arg1 ;
-(void).cxx_destruct;
-(id)mapRegion;
-(void)setMapRegion:(id)arg1 ;
@end

