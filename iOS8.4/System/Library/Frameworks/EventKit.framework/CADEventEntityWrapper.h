/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:17:39 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/EventKit.framework/EventKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <EventKit/CADEntityWrapper.h>

@interface CADEventEntityWrapper : CADEntityWrapper {

	double _occurrenceDate;

}
+(BOOL)supportsSecureCoding;
-(id)initWithCalEntity:(void*)arg1 propertiesToLoad:(id)arg2 occurrenceDate:(double)arg3 ;
-(id)occurrenceDate;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
@end

