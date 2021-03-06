/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:35:22 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSARenderingExporterDelegate.h>

@class TSARenderingExporter, NSString;

@interface TSAPdfRenderingExporterDelegate : NSObject <TSARenderingExporterDelegate> {

	TSARenderingExporter* mRenderingExporter;
	NSString* mPassphraseOpen;
	NSString* mPassphrasePrintCopy;
	BOOL mRequireOpenPassword;
	BOOL mRequireCopyPassword;
	BOOL mRequirePrintPassword;
	int mRenderingQuality;
	double mMaxPixels;

}
-(void)setPassphrase:(id)arg1 hint:(id)arg2 ;
-(void)setPrintPassphrase:(id)arg1 hint:(id)arg2 ;
-(void)setCopyPassphrase:(id)arg1 hint:(id)arg2 ;
-(double)viewScale;
-(CGContextRef)newCGContextForURL:(id)arg1 ;
-(void)releaseCGContext:(CGContextRef)arg1 ;
-(BOOL)supportsPaging;
-(BOOL)supportsRenderingQuality;
-(int)renderingQuality;
-(void)setMaxPixels:(double)arg1 ;
-(id)initWithRenderingExporter:(id)arg1 ;
-(void)setRenderingQuality:(int)arg1 ;
-(void)dealloc;
-(void)setup;
-(void)teardown;
@end

