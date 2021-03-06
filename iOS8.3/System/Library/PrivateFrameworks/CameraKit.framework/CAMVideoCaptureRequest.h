/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 12:53:50 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/CameraKit.framework/CameraKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CameraKit/CameraKit-Structs.h>
#import <CameraKit/CAMCaptureRequest.h>
#import <CameraKit/NSCopying.h>
#import <CameraKit/NSMutableCopying.h>

@interface CAMVideoCaptureRequest : CAMCaptureRequest <NSCopying, NSMutableCopying> {

	int _deviceOrientation;
	int _captureDevice;
	int _torchMode;

}

@property (nonatomic,readonly) int deviceOrientation;              //@synthesize deviceOrientation=_deviceOrientation - In the implementation block
@property (nonatomic,readonly) int captureDevice;                  //@synthesize captureDevice=_captureDevice - In the implementation block
@property (nonatomic,readonly) int torchMode;                      //@synthesize torchMode=_torchMode - In the implementation block
-(int)torchMode;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(int)deviceOrientation;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(int)captureDevice;
@end

