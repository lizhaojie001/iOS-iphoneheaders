/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:21:35 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/CompanionCamera.framework/Support/companioncamerad
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@protocol CCCameraServerProtocol
@required
-(void)checkin;
-(void)photoTaken:(id)arg1;
-(oneway void)xpc_modeSelected:(int)arg1;
-(oneway void)xpc_orientationChanged:(int)arg1;
-(oneway void)xpc_mirroringChanged:(BOOL)arg1;
-(oneway void)xpc_countdownCanceled;

@end

