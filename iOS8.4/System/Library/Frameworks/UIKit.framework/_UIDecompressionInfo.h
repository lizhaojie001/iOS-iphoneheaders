/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:18:51 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_semaphore;
#import <UIKit/UIKit-Structs.h>
@class NSObject, NSData;

@interface _UIDecompressionInfo : NSObject {

	unsigned long long jpegDecodeRequestID;
	NSObject*<OS_dispatch_semaphore> syncSemaphore;
	NSObject*<OS_dispatch_semaphore> metadataSemaphore;
	NSData* imageData;
	CGSize maxSize;
	int renderingIntent;
	BOOL decompressionComplete;
	BOOL metadataComplete;

}
-(void)dealloc;
-(id)initWithData:(id)arg1 maxSize:(CGSize)arg2 renderingIntent:(int)arg3 ;
@end
