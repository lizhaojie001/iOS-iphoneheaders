/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 7:09:28 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /Applications/Feedback Assistant iOS.app/Feedback Assistant iOS
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Feedback Assistant iOS/ACMTicketVerificationResponse.h>

@class NSNumber, NSDictionary, NSError, NSString;

@interface ACMTicketVerificationResponseImpl : NSObject <ACMTicketVerificationResponse> {

	NSDictionary* _rawResponseData;
	NSError* _error;
	id _userInfo;

}

@property (retain) id userInfo;                                     //@synthesize userInfo=_userInfo - In the implementation block
@property (retain) NSDictionary * rawResponseData;                  //@synthesize rawResponseData=_rawResponseData - In the implementation block
@property (retain) NSError * error;                                 //@synthesize error=_error - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (retain,readonly) NSNumber * personDSID; 
-(void)dealloc;
-(void)setUserInfo:(id)arg1 ;
-(id)userInfo;
-(NSError *)error;
-(void)setError:(NSError *)arg1 ;
-(void)setRawResponseData:(NSDictionary *)arg1 ;
-(NSDictionary *)rawResponseData;
-(NSNumber *)personDSID;
@end

