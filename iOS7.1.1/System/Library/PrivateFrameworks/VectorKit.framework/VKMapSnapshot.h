/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:25:46 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <VectorKit/VectorKit-Structs.h>
@class VKCamera;

@interface VKMapSnapshot : NSObject {

	CGImageRef _image;
	unsigned long long _width;
	unsigned long long _height;
	double _scale;
	VKCamera* _camera;

}

@property (nonatomic,readonly) double scale;                  //@synthesize scale=_scale - In the implementation block
@property (nonatomic,readonly) CGImageRef image;              //@synthesize image=_image - In the implementation block
-(void)dealloc;
-(id)description;
-(double)scale;
-(CGImageRef)image;
-(id)_initWithImage:(CGImageRef)arg1 scale:(double)arg2 camera:(id)arg3 ;
-(CGPoint)pointForCoordinate:(CGPoint)arg1 ;
-(CGPoint)coordinateForPoint:(CGPoint)arg1 ;
@end

