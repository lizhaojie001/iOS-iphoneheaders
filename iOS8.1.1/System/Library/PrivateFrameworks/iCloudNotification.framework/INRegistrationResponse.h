/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:35:01 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/iCloudNotification.framework/ind
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <AppleAccount/AAResponse.h>

@interface INRegistrationResponse : AAResponse {

	BOOL _isResponseEmpty;

}

@property (nonatomic,readonly) BOOL isResponseEmpty;                       //@synthesize isResponseEmpty=_isResponseEmpty - In the implementation block
@property (nonatomic,readonly) unsigned long long timeToLive; 
-(BOOL)isResponseEmpty;
-(id)initWithHTTPResponse:(id)arg1 data:(id)arg2 ;
-(unsigned long long)timeToLive;
@end

