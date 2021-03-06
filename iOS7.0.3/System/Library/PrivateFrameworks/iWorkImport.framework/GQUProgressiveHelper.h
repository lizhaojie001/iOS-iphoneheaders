/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:09:10 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


#import <iWorkImport/iWorkImport-Structs.h>
@interface GQUProgressiveHelper : NSObject {

	const void* mClient;
	SCD_Struct_GQ20* mCallBacks;
	unsigned char started;
	CFStringRef mNumbersSheetUri;
	float mPreviewHeight;
	float mPreviewWidth;
	BOOL mStartedMainHTML;

}
-(void)closeAttachment:(CFURLRef)arg1 ;
-(void)appendDataToAttachment:(CFURLRef)arg1 chunk:(CFDataRef)arg2 ;
-(void)setPreviewHeight:(float)arg1 andWidth:(float)arg2 ;
-(void)startDataWithOptions:(CFDictionaryRef)arg1 ;
-(CFURLRef)createAttachment:(CFStringRef)arg1 options:(CFDictionaryRef)arg2 ;
-(void)setNumbersSheetUri:(CFStringRef)arg1 ;
-(id)initWithClient:(const void*)arg1 andCallbacks:(SCD_Struct_GQ20*)arg2 ;
-(BOOL)progressiveStreamStarted;
-(BOOL)previewHasStreamedMainHTML;
-(CFStringRef)getNumbersSheetUri;
-(float)getPreviewWidth;
-(float)getPreviewHeight;
-(void)displayGenericError:(CFErrorRef)arg1 ;
-(void)dealloc;
@end

