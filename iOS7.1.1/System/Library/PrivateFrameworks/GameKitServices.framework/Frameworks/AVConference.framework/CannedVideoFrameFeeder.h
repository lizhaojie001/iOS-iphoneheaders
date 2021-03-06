/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:23:24 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/GameKitServices.framework/Frameworks/AVConference.framework/AVConference
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol CannedVideoFrameFeeder <NSObject>
@required
-(CVBufferRef)createPixelBufferForFrameIndex:(int)arg1;
-(void)getFrameRate:(double*)arg1 frameCount:(int*)arg2;
-(int)setWidth:(int)arg1 height:(int)arg2;
-(int)rotatePixelBuffer:(CVBufferRef)arg1 andStoreTo:(_CVBuffer*)arg2;
@end

