/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:56:20 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


@interface OISFUCryptoUtils : NSObject
+(id)sha256HashFromString:(id)arg1 ;
+(unsigned)ivLengthForKey:(id)arg1 ;
+(BOOL)generateRandomDataInBuffer:(char*)arg1 length:(unsigned long)arg2 ;
+(id)sha256HashFromData:(id)arg1 ;
+(id)generateRandomSalt;
+(id)hashForPassphrase:(id)arg1 withSalt:(id)arg2 ;
+(id)generatePassphraseVerifierForKey:(id)arg1 ;
+(unsigned)iterationCountFromPassphraseVerifier:(id)arg1 ;
+(BOOL)checkKey:(id)arg1 againstPassphraseVerifier:(id)arg2 ;
+(BOOL)isEncryptionVersionAndFormatSupportedInPassphraseVerifier:(id)arg1 ;
+(id)newBufferedInputStreamForDecryptingFile:(id)arg1 key:(id)arg2 isDeflated:(BOOL)arg3 zipStream:(id*)arg4 ;
+(id)encodePassphraseHint:(id)arg1 ;
+(id)decodePassphraseHint:(id)arg1 ;
+(id)sha256HashFromStorage:(id)arg1 ;
+(id)sha1HashFromStorage:(id)arg1 ;
@end

