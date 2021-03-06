/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:21:22 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/VUSocialUpload.framework/VUSocialUpload
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <VUSocialUpload/VUSocialUpload-Structs.h>
@class NSFileHandle, NSURL;

@interface VUDataReader : NSObject {

	NSFileHandle* _readHandle;
	NSURL* _URL;

}

@property (nonatomic,retain) NSFileHandle * readHandle;              //@synthesize readHandle=_readHandle - In the implementation block
@property (nonatomic,retain) NSURL * URL;                            //@synthesize URL=_URL - In the implementation block
+(id)dataReaderWithURL:(id)arg1 error:(id*)arg2 ;
-(NSFileHandle *)readHandle;
-(void)dealloc;
-(unsigned)length;
-(NSURL *)URL;
-(void)setURL:(NSURL *)arg1 ;
-(char)_openFileIfNeededWithError:(id*)arg1 ;
-(id)dataWithRange:(NSRange)arg1 ;
-(void)setReadHandle:(NSFileHandle *)arg1 ;
@end

