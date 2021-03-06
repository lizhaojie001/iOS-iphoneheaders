/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, June 24, 2015 at 10:46:19 PM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/Frameworks/EventKit.framework/EventKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol EKTravelAdvice;
@class NSString;

@interface EKTravelEngineThrottledAdvice : NSObject {

	NSString* _eventExternalURL;
	id<EKTravelAdvice> _advice;

}

@property (nonatomic,retain,readonly) NSString * eventExternalURL;              //@synthesize eventExternalURL=_eventExternalURL - In the implementation block
@property (nonatomic,retain) id<EKTravelAdvice> advice;                         //@synthesize advice=_advice - In the implementation block
-(id<EKTravelAdvice>)advice;
-(NSString *)eventExternalURL;
-(id)initWithEventExternalURL:(id)arg1 ;
-(void)setAdvice:(id<EKTravelAdvice>)arg1 ;
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
@end

