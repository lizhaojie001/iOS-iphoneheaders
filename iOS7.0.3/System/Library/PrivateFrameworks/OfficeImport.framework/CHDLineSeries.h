/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:56:01 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <OfficeImport/CHDSeries.h>
#import <OfficeImport/CHDMarkerOwner.h>

@class CHDMarker;

@interface CHDLineSeries : CHDSeries <CHDMarkerOwner> {

	CHDMarker* mMarker;
	bool mSmooth;

}
-(void)dealloc;
-(id)marker;
-(id)initWithChart:(id)arg1 ;
-(void)setMarker:(id)arg1 ;
-(void)setSmooth:(bool)arg1 ;
-(bool)isSmooth;
@end

