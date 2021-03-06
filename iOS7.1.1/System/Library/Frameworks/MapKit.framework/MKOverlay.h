/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:21:24 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol MKOverlay <MKAnnotation>
@property (nonatomic,readonly) SCD_Struct_MK1 coordinate; 
@property (nonatomic,readonly) SCD_Struct_MK2 boundingMapRect; 
@optional
-(bool)canReplaceMapContent;
-(bool)intersectsMapRect:(SCD_Struct_MK2)arg1;

@required
-(SCD_Struct_MK2*)boundingMapRect;
-(SCD_Struct_MK1*)coordinate;
@end

