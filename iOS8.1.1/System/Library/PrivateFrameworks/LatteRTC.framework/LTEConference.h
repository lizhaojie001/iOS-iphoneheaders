/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:32:21 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/LatteRTC.framework/LatteRTC
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <LatteRTC/LatteRTC-Structs.h>
#import <LatteRTC/WRMClientDelegate.h>

@protocol OS_dispatch_source, OS_dispatch_queue, LTEConferenceDelegate;
@class NSObject, NSMutableArray, DTMFEventHandler, WRMClient, AVAudioPayload, VCJitterBuffer, LTEAudioSessionConfig;

@interface LTEConference : NSObject <WRMClientDelegate> {

	int numBufferBytesAvailable;
	NSObject*<OS_dispatch_source> pausedAudioHeartBeat;
	double dAudioHostTime;
	double _rtpTimeoutEnabledTime;
	double _rtcpTimeoutEnabledTime;
	BOOL lastVoiceActive;
	double lastRTPTimeoutReportTime;
	double lastRTCPTimeoutReportTime;
	tagHANDLE* rtpHandle;
	char* bundleBuffer;
	unsigned conferenceID;
	unsigned lastInputAudioTimeStamp;
	unsigned lastSentAudioSampleTime;
	unsigned packetTimeoutCheckCounter;
	long long sampleRate;
	long long samplesPerFrame;
	opaque_pthread_rwlock_t stateLock;
	opaque_pthread_mutex_t sessionLock;
	NSMutableArray* audioPayloads;
	AudioStreamBasicDescription vpioFormat;
	int preferredAudioCodec;
	DTMFEventHandler* dtmfEventHandler;
	WRMClient* wrmClient;
	AVAudioPayload* currentAudioPayload;
	VCJitterBuffer* vcJitterBuffer;
	NSObject*<OS_dispatch_queue> delegateNotificationQueue;
	int state;
	BOOL isValid;
	NSObject*<LTEConferenceDelegate> _delegate;
	LTEAudioSessionConfig* _sessionConfig;

}

@property (assign,nonatomic) NSObject*<LTEConferenceDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned conferenceID; 
@property (assign) BOOL isValid; 
@property (nonatomic,retain) LTEAudioSessionConfig * sessionConfig;                  //@synthesize sessionConfig=_sessionConfig - In the implementation block
-(void)dealloc;
-(void)setDelegate:(NSObject*<LTEConferenceDelegate>)arg1 ;
-(id)init;
-(NSObject*<LTEConferenceDelegate>)delegate;
-(BOOL)isValid;
-(void)lock;
-(void)unlock;
-(void)stopPausedHeartbeat;
-(void)startPausedHeartbeat;
-(int)encodeAudio:(void*)arg1 numInputBytes:(int)arg2 outputBytes:(void*)arg3 numOutputBytes:(int)arg4 withPayload:(int*)arg5 ;
-(void)startAudioWithCompletionHandler:(/*^block*/id)arg1 ;
-(BOOL)setRTPPayloads:(int*)arg1 numPayloads:(int)arg2 withError:(id*)arg3 ;
-(BOOL)choosePayload:(int*)arg1 count:(int)arg2 ;
-(BOOL)setupAudioEncoders;
-(BOOL)allocateBundleBuffer;
-(id)addAudioPayload:(int)arg1 ;
-(BOOL)setupAudioCodecWithPayload:(int)arg1 ;
-(void)setIsValid:(BOOL)arg1 ;
-(void)pullDecodedMeshMode:(char*)arg1 timestamp:(unsigned)arg2 numBytes:(int)arg3 numSamples:(int)arg4 ;
-(BOOL)onCaptureSound:(char*)arg1 numBytes:(int)arg2 numSamples:(int)arg3 timeStamp:(unsigned)arg4 timeStampDelta:(int)arg5 bufferedSamples:(int)arg6 hostTime:(double)arg7 averagePower:(float)arg8 voiceActivity:(unsigned)arg9 ;
-(BOOL)onPlaySound:(char*)arg1 numBytes:(int)arg2 numSamples:(int)arg3 timeStamp:(unsigned)arg4 averagePower:(float)arg5 ;
-(void)setPauseAudio:(BOOL)arg1 ;
-(unsigned)conferenceID;
-(void)setRtcpEnabled:(BOOL)arg1 ;
-(void)setRtcpSendInterval:(double)arg1 ;
-(void)setRtcpTimeOutEnabled:(BOOL)arg1 ;
-(void)setRtcpTimeOutInterval:(double)arg1 ;
-(void)setRtpTimeOutEnabled:(BOOL)arg1 ;
-(void)setRtpTimeOutInterval:(double)arg1 ;
-(void)wrmClient:(id)arg1 setMetricConfig:(SCD_Struct_LT7*)arg2 ;
-(void)prepareForCall;
-(int)sendSamples:(char*)arg1 numEncodedBytes:(int)arg2 withPayload:(int)arg3 timeStamp:(unsigned)arg4 bufferedSamples:(int)arg5 hasNewSamples:(BOOL)arg6 voiceActivity:(BOOL)arg7 ;
-(void)checkPacketTimeouts;
-(unsigned)codecTypeFromAudioPayload:(int)arg1 ;
-(LTEAudioSessionConfig *)sessionConfig;
-(unsigned)AMRModeToBitrate;
-(id)setupRTPWithSockets:(id)arg1 error:(id*)arg2 ;
-(id)setupRTPWithLocalParticipantInfo:(id)arg1 error:(id*)arg2 ;
-(id)supportedAudioPayloads;
-(void)setSessionConfig:(LTEAudioSessionConfig *)arg1 ;
-(void)setupRTPPayloadsWithDestinationIPPort:(tagIPPORT*)arg1 ;
-(BOOL)configureAudioSessionWithConfiguration:(id)arg1 error:(id*)arg2 ;
-(void)stopCall;
-(void)stopAudioWithCompletionHandler:(/*^block*/id)arg1 ;
-(int)captureMeshMode:(char*)arg1 numBytes:(int)arg2 numSamples:(int)arg3 timeStamp:(unsigned)arg4 bufferedSamples:(int)arg5 hostTime:(double)arg6 voiceActivity:(BOOL)arg7 ;
-(void)reportWRMMetrics:(SCD_Struct_WR1*)arg1 ;
-(void)reportRTCPPackets:(tagRTCPPACKET*)arg1 withCount:(int)arg2 ;
-(id)setLocalParticipantInfo:(id)arg1 networkSockets:(id)arg2 withError:(id*)arg3 ;
-(void)setAudioSessionConfig:(id)arg1 withError:(id*)arg2 ;
-(void)setStreamDirection:(long long)arg1 ;
-(void)startCall;
-(void)sendDTMFEvent:(id)arg1 ;
-(void)stopSendDTMFEvent;
@end
