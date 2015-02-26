/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:30:48 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Celestial/Celestial-Structs.h>
#import <Celestial/FigCaptureConnectionConfiguration.h>

@interface FigMetadataItemCaptureConnectionConfiguration : FigCaptureConnectionConfiguration {

	opaqueCMFormatDescriptionRef _formatDescription;
	OpaqueCMClockRef _clock;

}

@property (nonatomic,retain) opaqueCMFormatDescriptionRef formatDescription;              //@synthesize formatDescription=_formatDescription - In the implementation block
@property (nonatomic,retain) OpaqueCMClockRef clock;                                      //@synthesize clock=_clock - In the implementation block
-(opaqueCMFormatDescriptionRef)formatDescription;
-(void)setFormatDescription:(opaqueCMFormatDescriptionRef)arg1 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithXPCEncoding:(id)arg1 ;
-(id)copyXPCEncoding;
-(void)setClock:(OpaqueCMClockRef)arg1 ;
-(OpaqueCMClockRef)clock;
@end
