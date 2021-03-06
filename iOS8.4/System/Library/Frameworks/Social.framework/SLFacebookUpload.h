/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:18:42 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/Social.framework/Social
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Social/NSSecureCoding.h>

@class NSString;

@interface SLFacebookUpload : NSObject <NSSecureCoding> {

	NSString* _uploadID;
	long long _uploadType;
	unsigned long long _totalBytes;
	unsigned long long _transferredBytes;

}

@property (nonatomic,retain) NSString * uploadID;                              //@synthesize uploadID=_uploadID - In the implementation block
@property (assign,nonatomic) long long uploadType;                             //@synthesize uploadType=_uploadType - In the implementation block
@property (assign,nonatomic) unsigned long long totalBytes;                    //@synthesize totalBytes=_totalBytes - In the implementation block
@property (assign,nonatomic) unsigned long long transferredBytes;              //@synthesize transferredBytes=_transferredBytes - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSString *)uploadID;
-(void)setUploadID:(NSString *)arg1 ;
-(long long)uploadType;
-(void)setUploadType:(long long)arg1 ;
-(unsigned long long)transferredBytes;
-(void)setTransferredBytes:(unsigned long long)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned long long)totalBytes;
-(void)setTotalBytes:(unsigned long long)arg1 ;
@end

