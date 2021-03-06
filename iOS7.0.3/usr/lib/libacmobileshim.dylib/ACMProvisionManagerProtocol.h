/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:59:08 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /usr/lib/libacmobileshim.dylib
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


@protocol ACMProvisionManagerProtocol <NSObject>
@required
-(id)publicKeyVersionForRealm:(id)arg1;
-(SecKeyRef)publicKeyForRealm:(id)arg1;
-(void)clearPublicKeyForRealm:(id)arg1;
-(SecIdentityRef)deviceIdentityForRealm:(id)arg1;
-(id)deviceIdentityCertificatesForRealm:(id)arg1;
-(void)clearDeviceIdentityForRealm:(id)arg1;
-(BOOL)isDeviceIdentityValidForRealm:(id)arg1;
-(SecCertificateRef)defaultPublicKeyCertificateForRealm:(id)arg1;
-(id)defaultPublicKeyVersionForRealm:(id)arg1;
-(BOOL)setPublicKeyWithCertificate:(SecCertificateRef)arg1 version:(id)arg2 forRealm:(id)arg3;
@end

