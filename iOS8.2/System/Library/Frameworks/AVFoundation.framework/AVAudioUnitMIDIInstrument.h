/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:18:09 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/libAVFAudio.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libAVFAudio.dylib/libAVFAudio.dylib-Structs.h>
#import <libAVFAudio.dylib/AVAudioUnit.h>

@interface AVAudioUnitMIDIInstrument : AVAudioUnit
-(id)initWithAudioComponentDescription:(AudioComponentDescription)arg1 ;
-(void)startNote:(unsigned char)arg1 withVelocity:(unsigned char)arg2 onChannel:(unsigned char)arg3 ;
-(void)stopNote:(unsigned char)arg1 onChannel:(unsigned char)arg2 ;
-(void)sendController:(unsigned char)arg1 withValue:(unsigned char)arg2 onChannel:(unsigned char)arg3 ;
-(void)sendPitchBend:(unsigned short)arg1 onChannel:(unsigned char)arg2 ;
-(void)sendPressure:(unsigned char)arg1 onChannel:(unsigned char)arg2 ;
-(void)sendPressureForKey:(unsigned char)arg1 withValue:(unsigned char)arg2 onChannel:(unsigned char)arg3 ;
-(void)sendProgramChange:(unsigned char)arg1 onChannel:(unsigned char)arg2 ;
-(void)sendProgramChange:(unsigned char)arg1 bankMSB:(unsigned char)arg2 bankLSB:(unsigned char)arg3 onChannel:(unsigned char)arg4 ;
-(void)sendMIDIEvent:(unsigned char)arg1 data1:(unsigned char)arg2 data2:(unsigned char)arg3 ;
-(void)sendMIDIEvent:(unsigned char)arg1 data1:(unsigned char)arg2 ;
-(void)sendMIDISysExEvent:(id)arg1 ;
@end

