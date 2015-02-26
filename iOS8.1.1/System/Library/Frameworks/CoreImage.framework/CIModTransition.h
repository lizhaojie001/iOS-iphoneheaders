/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:28:01 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreImage/CIFilter.h>

@class CIImage, CIVector, NSNumber;

@interface CIModTransition : CIFilter {

	CIImage* inputImage;
	CIImage* inputTargetImage;
	CIVector* inputCenter;
	NSNumber* inputTime;
	NSNumber* inputAngle;
	NSNumber* inputRadius;
	NSNumber* inputCompression;

}

@property (nonatomic,retain) CIImage * inputImage; 
@property (nonatomic,retain) CIImage * inputTargetImage; 
@property (nonatomic,retain) CIVector * inputCenter; 
@property (nonatomic,retain) NSNumber * inputTime; 
@property (nonatomic,retain) NSNumber * inputAngle; 
@property (nonatomic,retain) NSNumber * inputRadius; 
@property (nonatomic,retain) NSNumber * inputCompression; 
+(id)customAttributes;
-(void)setInputImage:(CIImage *)arg1 ;
-(void)setInputRadius:(NSNumber *)arg1 ;
-(NSNumber *)inputRadius;
-(id)_kernel;
-(void)setInputAngle:(NSNumber *)arg1 ;
-(NSNumber *)inputAngle;
-(void)setInputCenter:(CIVector *)arg1 ;
-(CIVector *)inputCenter;
-(CIImage *)inputTargetImage;
-(void)setInputTargetImage:(CIImage *)arg1 ;
-(NSNumber *)inputTime;
-(void)setInputCompression:(NSNumber *)arg1 ;
-(NSNumber *)inputCompression;
-(CIImage *)inputImage;
-(void)setDefaults;
-(void)setInputTime:(NSNumber *)arg1 ;
-(id)outputImage;
@end
