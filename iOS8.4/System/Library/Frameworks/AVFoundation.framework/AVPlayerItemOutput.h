/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:17:04 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <AVFoundation/AVFoundation-Structs.h>
@class AVPlayerItemOutputInternal;

@interface AVPlayerItemOutput : NSObject {

	AVPlayerItemOutputInternal* _outputInternal;

}

@property (assign,nonatomic) BOOL suppressesPlayerRendering; 
-(id)_weakReference;
-(OpaqueCMTimebaseRef)_copyTimebase;
-(BOOL)suppressesPlayerRendering;
-(BOOL)_attachToPlayerItem:(id)arg1 ;
-(void)_setTimebase:(OpaqueCMTimebaseRef)arg1 ;
-(void)_detachFromPlayerItem;
-(SCD_Struct_CM4)_itemTimeForHostTimeAsCMTime:(SCD_Struct_CM4)arg1 ;
-(SCD_Struct_CM4)itemTimeForHostTime:(double)arg1 ;
-(SCD_Struct_CM4)itemTimeForMachAbsoluteTime:(long long)arg1 ;
-(void)dealloc;
-(id)init;
-(void)finalize;
-(void)setSuppressesPlayerRendering:(BOOL)arg1 ;
@end

