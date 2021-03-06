/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:23:45 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/Frameworks/CoreTelephony.framework/Support/CommCenter
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <CommCenter/CommCenter-Structs.h>
@interface CryptoHelper : NSObject {

	_SecKey* myPrivateKeyRef;

}
+(id)sharedCryptoHelper;
-(id)getHashBytes:(id)arg1 ;
-(_SecKey*)getPrivateKeyRef;
-(_SecKey*)getPubKeyFromCert:(id)arg1 ;
-(id)getHashBytes_SHA256:(id)arg1 ;
-(long)verifySignature:(_SecKey*)arg1 rawData:(const char*)arg2 rawDataLen:(unsigned long)arg3 sigData:(const char*)arg4 sigDataLen:(unsigned long)arg5 ;
-(id)createSignature:(id)arg1 ;
-(id)wrapSymmetricKey:(id)arg1 keyRef:(_SecKey*)arg2 ;
-(id)unwrapSymmetricKey:(id)arg1 ;
-(id)doCipher:(id)arg1 key:(id)arg2 context:(unsigned)arg3 padding:(unsigned*)arg4 ;
-(id)init;
@end

