/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:32:08 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/identityservicesd.app/identityservicesd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <identityservicesd/identityservicesd-Structs.h>
#import <IDSFoundation/IDSBaseMessage.h>
#import <identityservicesd/NSCopying.h>

@class NSData;

@interface IDSValidationCertificateMessage : IDSBaseMessage <NSCopying> {

	NSData* _responseCertificateData;
	NSData* _pushToken;

}

@property (nonatomic,copy) NSData * responseCertificateData;              //@synthesize responseCertificateData=_responseCertificateData - In the implementation block
@property (nonatomic,copy) NSData * pushToken;                            //@synthesize pushToken=_pushToken - In the implementation block
-(NSData *)responseCertificateData;
-(void)setResponseCertificateData:(NSData *)arg1 ;
-(long long)command;
-(void)dealloc;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSData *)pushToken;
-(void)setPushToken:(NSData *)arg1 ;
-(void)handleResponseDictionary:(id)arg1 ;
-(BOOL)wantsHTTPGet;
-(id)additionalMessageHeaders;
-(BOOL)wantsIDSServer;
-(BOOL)wantsHTTPHeaders;
-(BOOL)wantsCompressedBody;
-(BOOL)wantsBagKey;
-(BOOL)wantsBinaryPush;
-(long long)responseCommand;
-(id)bagKey;
-(id)messageBody;
-(id)requiredKeys;
@end
