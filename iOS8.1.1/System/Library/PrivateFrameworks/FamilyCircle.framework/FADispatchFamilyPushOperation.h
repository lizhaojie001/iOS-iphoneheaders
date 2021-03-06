/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:31:38 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/FamilyCircle.framework/familycircled
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <familycircled/FAFamilyCircleOperation.h>

@class NSString, NSDictionary;

@interface FADispatchFamilyPushOperation : FAFamilyCircleOperation {

	NSString* _appleIDorDSID;
	NSString* _passwordOrAuthToken;
	NSDictionary* _payload;
	/*^block*/id _dispatchPushCompletionHandler;

}

@property (readonly) NSDictionary * payload;                    //@synthesize payload=_payload - In the implementation block
@property (copy) id dispatchPushCompletionHandler;              //@synthesize dispatchPushCompletionHandler=_dispatchPushCompletionHandler - In the implementation block
-(id)dispatchPushCompletionHandler;
-(id)initWithUsername:(id)arg1 password:(id)arg2 pushPayload:(id)arg3 ;
-(id)_authHeaderString;
-(void)didReceivePropertyListResponse:(id)arg1 ;
-(void)setDispatchPushCompletionHandler:(id)arg1 ;
-(NSDictionary *)payload;
-(id)urlRequest;
-(void)didFailWithError:(id)arg1 ;
@end

