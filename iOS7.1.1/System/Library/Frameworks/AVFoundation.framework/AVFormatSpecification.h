/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:20:35 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <AVFoundation/AVFoundation-Structs.h>
@class AVOutputSettings;

@interface AVFormatSpecification : NSObject {

	AVOutputSettings* _outputSettings;
	opaqueCMFormatDescriptionRef _sourceFormatDescription;

}
+(id)formatSpecificationWithOutputSettings:(id)arg1 sourceFormatDescription:(opaqueCMFormatDescriptionRef)arg2 ;
-(opaqueCMFormatDescriptionRef)sourceFormatDescription;
-(id)initWithOutputSettings:(id)arg1 sourceFormatDescription:(opaqueCMFormatDescriptionRef)arg2 ;
-(void)dealloc;
-(id)outputSettings;
@end

