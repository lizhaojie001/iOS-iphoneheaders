/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 4:31:12 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/iLifeSlideshow.framework/iLifeSlideshow
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <iLifeSlideshow/iLifeSlideshow-Structs.h>
@interface MPVector : NSObject {

	float _vector[4];
	int _length;

}
+(id)vectorFromString:(id)arg1 ;
+(id)vectorWithValues:(id)arg1 ;
+(id)vectorFromCGColor:(CGColorRef)arg1 ;
+(id)vectorFromMCVector:(SCD_Struct_MP3)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(CGColorRef)CGColor;
-(void)encodeWithCoder:(id)arg1 ;
-(int)count;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)string;
-(void)setValues:(id)arg1 ;
-(id)values;
-(char)isEqualTo:(id)arg1 ;
-(float)valueAtIndex:(int)arg1 ;
-(void)setVector:(SCD_Struct_MP3)arg1 ;
-(id)CIColorString;
-(SCD_Struct_MP3)vector;
@end

