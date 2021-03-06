/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 1:12:42 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CorePDF/CorePDF-Structs.h>
#import <CorePDF/CPDisposable.h>

@interface CPFontInfo : NSObject <CPDisposable> {

	CFDataRef fontData;
	const char* dataPtr;
	unsigned offset;
	unsigned fontDataLength;
	char valid;

}
-(void)dealloc;
-(void)dispose;
-(int)kernUnitsPerEm;
-(unsigned char)readByte;
-(unsigned)readUnsignedLong;
-(float)readFloat;
-(CGRect)readRect;
-(int)readLong;
-(id)initWithFontData:(CFDataRef)arg1 ;
-(char)getDescriptor:(SCD_Struct_CP27*)arg1 ;
-(CFDataRef)newKernData;
-(void)finalize;
@end

