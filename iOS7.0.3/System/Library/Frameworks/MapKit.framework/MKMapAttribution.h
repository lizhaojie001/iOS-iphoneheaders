/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:52:43 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


@class NSAttributedString, NSURL;

@interface MKMapAttribution : NSObject {

	NSAttributedString* _string;
	NSURL* _url;

}

@property (nonatomic,readonly) NSAttributedString * string;                       //@synthesize string=_string - In the implementation block
@property (nonatomic,readonly) NSURL * url;                                       //@synthesize url=_url - In the implementation block
@property (nonatomic,readonly) NSAttributedString * disclosureArrow; 
-(id)initWithStringAttributes:(id)arg1 regionalAttributions:(id)arg2 globalAttributions:(id)arg3 ;
-(id)attributedStringWithImage:(id)arg1 ;
-(id)disclosureArrow;
-(void)dealloc;
-(id)string;
-(id)url;
@end

