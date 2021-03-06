/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:21:22 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <MapKit/MapKit-Structs.h>
@class NSString, NSArray, MKMapItem;

@interface MKSearchCompletion : NSObject {

	NSString* _sourceID;
	NSString* _localizedSectionHeader;

}

@property (nonatomic,readonly) NSArray * displayLines; 
@property (nonatomic,readonly) MKMapItem * mapItem; 
@property (nonatomic,copy) NSString * sourceID;                            //@synthesize sourceID=_sourceID - In the implementation block
@property (nonatomic,copy) NSString * localizedSectionHeader;              //@synthesize localizedSectionHeader=_localizedSectionHeader - In the implementation block
-(id)queryLine;
-(bool)getCoordinate:(SCD_Struct_MK0*)arg1 ;
-(id)highlightsForLine:(unsigned long long)arg1 ;
-(id)iconWithScale:(double)arg1 ;
-(void)sendFeedback;
-(void)applyToLocalSearchRequest:(id)arg1 ;
-(void)applyToPlaceSearchRequest:(id)arg1 ;
-(void)setSourceID:(id)arg1 ;
-(id)description;
-(void).cxx_destruct;
-(void)setLocalizedSectionHeader:(id)arg1 ;
-(id)localizedSectionHeader;
-(id)displayLines;
-(id)calloutTitle;
-(id)sourceID;
-(id)mapItem;
@end

