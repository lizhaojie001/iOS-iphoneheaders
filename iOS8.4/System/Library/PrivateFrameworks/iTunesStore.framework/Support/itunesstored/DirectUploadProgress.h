/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:27:03 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/Support/itunesstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <itunesstored/itunesstored-Structs.h>
#import <itunesstored/NSCopying.h>

@interface DirectUploadProgress : NSObject <NSCopying> {

	long long _countOfBytesExpectedToSend;
	long long _countOfBytesSent;
	long long _uploadDatabaseIdentifier;

}

@property (assign,nonatomic) long long uploadDatabaseIdentifier;                //@synthesize uploadDatabaseIdentifier=_uploadDatabaseIdentifier - In the implementation block
@property (assign,nonatomic) long long countOfBytesExpectedToSend;              //@synthesize countOfBytesExpectedToSend=_countOfBytesExpectedToSend - In the implementation block
@property (assign,nonatomic) long long countOfBytesSent;                        //@synthesize countOfBytesSent=_countOfBytesSent - In the implementation block
-(long long)uploadDatabaseIdentifier;
-(void)setUploadDatabaseIdentifier:(long long)arg1 ;
-(void)setCountOfBytesSent:(long long)arg1 ;
-(void)setCountOfBytesExpectedToSend:(long long)arg1 ;
-(long long)countOfBytesSent;
-(long long)countOfBytesExpectedToSend;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

