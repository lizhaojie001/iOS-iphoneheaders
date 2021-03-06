/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:55:17 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/HomeSharing.framework/HomeSharing
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


@class NSData, NSDictionary, NSError, NSString;

@interface HSResponse : NSObject {

	NSData* _responseData;
	unsigned _responseCode;
	NSDictionary* _responseHeaderFields;
	NSError* _error;
	NSString* _MIMEType;

}

@property (nonatomic,readonly) NSString * MIMEType;                              //@synthesize MIMEType=_MIMEType - In the implementation block
@property (nonatomic,readonly) unsigned responseCode;                            //@synthesize responseCode=_responseCode - In the implementation block
@property (nonatomic,readonly) NSDictionary * responseHeaderFields;              //@synthesize responseHeaderFields=_responseHeaderFields - In the implementation block
@property (nonatomic,readonly) NSData * responseData;                            //@synthesize responseData=_responseData - In the implementation block
@property (nonatomic,readonly) NSError * error;                                  //@synthesize error=_error - In the implementation block
+(id)responseWithCode:(unsigned)arg1 headerFields:(id)arg2 data:(id)arg3 MIMEType:(id)arg4 error:(id)arg5 ;
+(id)responseWithResponse:(id)arg1 ;
-(unsigned)responseCode;
-(id)responseData;
-(void)dealloc;
-(id)description;
-(id)MIMEType;
-(id)initWithCode:(unsigned)arg1 headerFields:(id)arg2 data:(id)arg3 MIMEType:(id)arg4 error:(id)arg5 ;
-(id)error;
-(id)responseHeaderFields;
@end

