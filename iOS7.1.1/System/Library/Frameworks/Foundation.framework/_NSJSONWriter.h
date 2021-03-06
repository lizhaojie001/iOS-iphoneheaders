/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:21:10 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <Foundation/Foundation-Structs.h>
@class NSOutputStream;

@interface _NSJSONWriter : NSObject {

	NSOutputStream* outputStream;
	int kind;
	char* dataBuffer;
	unsigned long long dataBufferLen;
	unsigned long long dataLen;
	bool freeDataBuffer;
	char* tempBuffer;
	unsigned long long tempBufferLen;
	long long totalDataWritten;

}
-(void)resizeTemporaryBuffer:(unsigned long long)arg1 ;
-(id)dataWithRootObject:(id)arg1 options:(unsigned long long)arg2 error:(id*)arg3 ;
-(long long)writeRootObject:(id)arg1 toStream:(id)arg2 options:(unsigned long long)arg3 error:(id*)arg4 ;
-(long long)appendString:(id)arg1 range:(NSRange)arg2 ;
-(void)dealloc;
-(id)init;
-(void)finalize;
@end

