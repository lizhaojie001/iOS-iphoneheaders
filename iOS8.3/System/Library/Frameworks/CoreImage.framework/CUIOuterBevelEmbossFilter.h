/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, June 24, 2015 at 10:43:12 PM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreImage/CIFilter.h>

@class CIImage, NSNumber, CIColor;

@interface CUIOuterBevelEmbossFilter : CIFilter {

	CIImage* inputImage;
	NSNumber* inputRadius;
	NSNumber* inputSize;
	NSNumber* inputSoften;
	NSNumber* inputAngle;
	CIColor* inputHighlightColor;
	CIColor* inputShadowColor;

}

@property (nonatomic,retain) CIImage * inputImage; 
@property (nonatomic,retain) NSNumber * inputRadius; 
@property (nonatomic,retain) NSNumber * inputSize; 
@property (nonatomic,retain) NSNumber * inputSoften; 
@property (nonatomic,retain) NSNumber * inputAngle; 
@property (nonatomic,retain) CIColor * inputHighlightColor; 
@property (nonatomic,retain) CIColor * inputShadowColor; 
+(id)customAttributes;
-(void)setInputImage:(CIImage *)arg1 ;
-(void)setInputRadius:(NSNumber *)arg1 ;
-(NSNumber *)inputRadius;
-(id)_kernel;
-(NSNumber *)inputAngle;
-(void)setInputAngle:(NSNumber *)arg1 ;
-(id)_kernelC;
-(void)setInputSize:(NSNumber *)arg1 ;
-(NSNumber *)inputSize;
-(void)setInputSoften:(NSNumber *)arg1 ;
-(void)setInputHighlightColor:(CIColor *)arg1 ;
-(void)setInputShadowColor:(CIColor *)arg1 ;
-(NSNumber *)inputSoften;
-(CIColor *)inputHighlightColor;
-(CIColor *)inputShadowColor;
-(CIImage *)inputImage;
-(void)setDefaults;
-(id)outputImage;
@end

