/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:25:22 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/GameKitServices.framework/Frameworks/AVConference.framework/AVConference
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString;

@interface AVPingTest : NSObject {

	NSString* ipAsString;
	char usingWifi;
	NSString* interfaceNameToTest;
	float min;
	float max;
	float avg;
	float stddev;
	float packetLossRate;
	int lastReturnedError;

}

@property (nonatomic,readonly) char usingWifi; 
@property (nonatomic,readonly) float min; 
@property (nonatomic,readonly) float max; 
@property (nonatomic,readonly) float avg; 
@property (nonatomic,readonly) float stddev; 
@property (nonatomic,readonly) float packetLossRate; 
-(void)dealloc;
-(id)description;
-(int)start;
-(float)packetLossRate;
-(void)calculateInterfaceName;
-(int)parseResults:(char*)arg1 secondLastLine:(char*)arg2 ;
-(id)initWithIPAsString:(id)arg1 usingWifi:(char)arg2 ;
-(char)usingWifi;
-(float)avg;
-(float)stddev;
-(char)parsePingLineForBadInterface:(char*)arg1 ;
-(char)parsePingLineForBadCommand:(char*)arg1 ;
-(char)parsePingLineForPLR:(char*)arg1 ;
-(char)parsePingLineForLatencyStats:(char*)arg1 ;
-(float)max;
-(float)min;
@end

