/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, June 24, 2015 at 10:06:32 PM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/Assistant/UIPlugins/Phone.siriUIBundle/Phone
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Phone/SiriPhoneCall.h>

@class SAPhoneCallHistory;

@interface SiriPhoneCallHistory : SiriPhoneCall {

	SAPhoneCallHistory* _callHistory;

}

@property (nonatomic,retain) SAPhoneCallHistory * callHistory;              //@synthesize callHistory=_callHistory - In the implementation block
-(void)_setStatusImage;
-(void)setCallHistory:(SAPhoneCallHistory *)arg1 ;
-(void)_setFormattedCallCount;
-(id)date;
-(SAPhoneCallHistory *)callHistory;
@end
