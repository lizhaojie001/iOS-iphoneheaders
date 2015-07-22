/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 1:50:38 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/GameKitServices.framework/Frameworks/AVConference.framework/AVConference
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AVConference/AVConference-Structs.h>
#import <AVConference/VCSecureDataChannelDelegate.h>
#import <AVConference/AVTelephonyInterfaceDelegate.h>
#import <AVConference/LoopbackSocketTunnelDelegate.h>

@protocol VCCallSessionDelegate, VideoConferenceRealTimeChannel, OS_dispatch_queue, OS_dispatch_source, VideoConferenceChannelQualityDelegate;
@class NSObject, VCCallInfo, NSMutableArray, AVAudioPayload, AVAudioTierPicker, AVAudioTier, LoopbackSocketTunnel, VCImageAttributeRules, VCCapabilities, GKRingBuffer, NSDictionary, NSMutableDictionary, NSArray, TCPTunnelClient, LoopbackIDSTunnel, TimingCollection, NSString, VCCallLinkCongestionDetector, NSData, VCSessionMessaging, VCBitrateArbiter, VCJitterBuffer, VideoAttributes, GKInterfaceListener, VCWCMClient, NSCondition, VCTransport, VCSecureDataChannel, VCClientRelay, NSNumber, AVTelephonyInterface;

@interface VCCallSession : NSObject <VCSecureDataChannelDelegate, AVTelephonyInterfaceDelegate, LoopbackSocketTunnelDelegate> {

	NSObject*<VCCallSessionDelegate> delegate;
	VCCallInfo* localCallInfo;
	VCCallInfo* remoteCallInfo;
	tagHANDLE* rtpHandle;
	tagHANDLE* rtpVideo;
	int numEncodedBytes;
	int numBufferBytesAvailable;
	char didUseICE;
	tagCONNRESULT* connectionResult;
	tagCONNRESULT* origConnectionResult;
	int state;
	NSMutableArray* audioPayloads;
	AVAudioPayload* currentAudioPayload;
	AVAudioTierPicker* audioTierPicker_AppleCalling;
	AVAudioTierPicker* audioTierPicker_FaceTime;
	AVAudioTier* currentAudioTier;
	AVAudioTier* requestedAudioTier;
	int audioTierChangeRequestCount;
	int videoPayload;
	int sampleRate;
	int samplesPerFrame;
	int blockSize;
	float blockSeconds;
	tagHANDLE* hAUIO;
	tagHANDLE* hSIP;
	double lastReceivedAudio;
	char launchedShutdownThread;
	char isAudioRunning;
	char isVideoRunning;
	char isWaitingForICEResult;
	char didSend200OK;
	float remoteParticipantVolume;
	NSObject*<VideoConferenceRealTimeChannel> rtChannel;
	LoopbackSocketTunnel* tunnel;
	opaque_pthread_mutex_t mutex;
	char useLoopback;
	char receivedSIPInvite;
	VCImageAttributeRules* imageAttributeRules;
	char szRemoteRTPIP[48];
	int iRemoteRTPPort;
	int iRemoteRTCPPort;
	VCCapabilities* caps;
	int _deviceRole;
	tagHANDLE* hMediaQueue;
	tagHANDLE* hAFRC;
	GKRingBuffer* ringBuf;
	unsigned lastReceived;
	char* bundleBuffer;
	int bundledPackets;
	int packetsPerBundle;
	unsigned bundleTimestamp;
	int bundlePayload;
	int canUseSpecialAACBundle;
	int preferredAudioCodec;
	int audioTxBitrate;
	int audioHeaderSize;
	unsigned afrcBitrate;
	double audioInterval;
	char useSBR;
	char useControlByte;
	char useUEP;
	NSDictionary* _allPayloadsLocalFeaturesString;
	NSMutableDictionary* featuresListStringDict;
	unsigned char inputMeter;
	char audioIsPaused;
	opaque_pthread_mutex_t pauseLock;
	NSObject*<OS_dispatch_queue> videoQueue;
	NSArray* mutedPeers;
	int bandwidthUpstream;
	int bandwidthDownstream;
	char allowAudioRecording;
	int aacBlockSize;
	char fInitialBandwidthDetection;
	int carrierBitrateCap;
	AudioStreamBasicDescription vpioFormat;
	char allowAudioSwitching;
	char shouldUpdateLastReceivedPacketTimestamp;
	double lastReceivedPacketTimestamp;
	char isRemoteMediaStalled;
	int packetsSinceStall;
	char isAttemptingRelay;
	int relayState;
	char allowsRelay;
	int pendingRelayCount;
	char initialSecondaryRelaySetupDone;
	char requiresWifi;
	char useCompressedConnectionData;
	int natType;
	unsigned lastSentAudioSampleTime;
	NSObject*<OS_dispatch_source> pausedAudioHeartBeat;
	TCPTunnelClient* _tcpTunnelClient;
	LoopbackIDSTunnel* _idsTunnel;
	TimingCollection* perfTimers;
	double packetLossRate;
	double timeLastCheckedNetworkConditions;
	double timeLastKnowGoodNetworkPLR;
	double timeLastKnowGoodNetworkRTT;
	double networkConditionsTimeoutInSeconds;
	NSString* peerCN;
	NSString* sessionID;
	unsigned roundTripTime;
	float packetLateAndMissingRatio;
	float callerPreEmptiveTimeoutInSecs;
	int sampleLogCount;
	double timeSinceLastReportedNoPackets;
	double noRemotePacketsTimeout;
	char didAttemptSIPInvite;
	NSObject*<VideoConferenceChannelQualityDelegate> qualityDelegate;
	opaque_pthread_mutex_t qualityDelegateLock;
	NSObject*<OS_dispatch_queue> qualityQueue;
	NSObject*<OS_dispatch_queue> managerQueue;
	char shouldTimeoutPackets;
	opaque_pthread_mutex_t srtpLock;
	char didPrepareSRTP;
	char useAFRC;
	char isRTCPFBEnabled;
	VCCallLinkCongestionDetector* congestionDetector;
	char shouldSendAudio;
	char isRemoteDevice4x;
	char isGKVoiceChat;
	void* packetThread;
	int signalStrength;
	int signalRaw;
	int signalGrade;
	BOOL bBWEstOperatingModeInitialized;
	BOOL bBWEstNewBWEstModeEnabled;
	BOOL bBWEstFakeLargeFrameModeEnabled;
	BOOL bBWEstActiveProbingSenderLog;
	CGSize remoteScreenPortraitAspectRatio;
	CGSize remoteScreenLandscapeAspectRatio;
	CGSize remoteExpectedPortraitAspectRatio;
	CGSize remoteExpectedLandscapeAspectRatio;
	char isStarted;
	NSData* srtpKeyBytes;
	char isInitiator;
	char sentClientSuccessfulDidStart;
	double videoThrottlingTimeout;
	unsigned awdCallNonce;
	VCSessionMessaging* messaging;
	char isCurrentNetworkBad;
	char requestedTimeoutRelay;
	unsigned callSessionBitrate;
	NSObject*<OS_dispatch_queue> cellTechQueue;
	NSObject*<OS_dispatch_source> cellTechChangeSource;
	TimingCollection* cameraTimers;
	VCBitrateArbiter* callSessionBitrateArbiter;
	NSObject*<OS_dispatch_source> connectionTimeoutSource;
	unsigned short maxPacketLength;
	char lastAudioStalled;
	double lastTierSwitch;
	char audioTierHysteresis;
	long long initialSentBytes;
	long long initialReceivedBytes;
	VCJitterBuffer* vcJitterBuffer;
	tagHANDLE* hVideoReceiver;
	tagHANDLE* hVideoTransmitter;
	char remoteSupportsVisibleRect;
	char remoteSupportsExpectedAspectRatio;
	char canLocalResizePIP;
	char canRemoteResizePIP;
	char receivedFirstRemoteFrame;
	int fecMode;
	NSObject*<OS_dispatch_source> sessionHealthMonitor;
	VideoAttributes* remoteVideoAttributes;
	double lastVideoQualityNotificationUpdate;
	unsigned remoteFrameWidth;
	unsigned remoteFrameHeight;
	GKInterfaceListener* interfaceListener;
	VCWCMClient* vcWCMClient;
	NSCondition* connectionDataTimeoutCondVar;
	VCTransport* transport;
	OpaqueVTPixelTransferSessionRef hdTransferSession;
	CVPixelBufferPoolRef hdBufferPool;
	CGSize expectedDecodeSize;
	opaqueRTCReportingRef reportingAgent;
	int reportUpdateInterval;
	int reportReportFrequency;
	char enableAFRCDump;
	int operatingMode;
	unsigned receivedAudioBytes;
	unsigned sentAudioBytes;
	double lastVCLogCallbackTime;
	SKEStateOpaqueRef skeState;
	CFDataRef secretKey;
	VCSecureDataChannel* secureDataChannel;
	VCClientRelay* _vcClientRelay;
	NSString* basebandCodecType;
	NSNumber* basebandCodecSampleRate;
	char _didSendBasebandCodec;
	AVTelephonyInterface* telephonyInterface;
	double lastUpdateQualityIndicator;
	unsigned dwRTT_ice;
	NSObject*<OS_dispatch_queue> timestampQueue;
	char shouldSendBlackFrame;
	NSObject*<OS_dispatch_source> relaySetupTimer;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSString * peerCN; 
@property (readonly) VCJitterBuffer * vcJitterBuffer; 
@property (nonatomic,readonly) char isCaller; 
@property (nonatomic,copy) NSString * sessionID; 
@property (assign,nonatomic) char isStarted; 
@property (nonatomic,retain) VCImageAttributeRules * imageAttributeRules; 
@property (assign,nonatomic) char shouldSendAudio; 
@property (assign,nonatomic) unsigned roundTripTime; 
@property (assign,nonatomic) char useAFRC; 
@property (assign,nonatomic) char isRTCPFBEnabled; 
@property (assign,nonatomic) double packetLossRate; 
@property (assign,nonatomic) float packetLateAndMissingRatio; 
@property (readonly) double networkQuality; 
@property (assign,nonatomic) double networkConditionsTimeoutInSeconds; 
@property (assign,nonatomic) int signalStrength; 
@property (assign,nonatomic) int signalRaw; 
@property (assign,nonatomic) int signalGrade; 
@property (assign,nonatomic) unsigned lastSentAudioSampleTime; 
@property (assign,nonatomic) int natType; 
@property (assign,nonatomic) char requiresWifi; 
@property (assign,nonatomic) char useCompressedConnectionData; 
@property (retain) NSObject*<VCCallSessionDelegate> delegate; 
@property (assign) NSObject*<VideoConferenceRealTimeChannel> rtChannel; 
@property (assign) tagHANDLE* rtpHandle; 
@property (assign) int numEncodedBytes; 
@property (assign) int numBufferBytesAvailable; 
@property (assign) tagCONNRESULT* connectionResult; 
@property (assign) tagCONNRESULT* origConnectionResult; 
@property (assign) unsigned short maxPacketLength; 
@property (assign) int state; 
@property (assign) char didUseICE; 
@property (assign) int videoPayload; 
@property (assign) int sampleRate; 
@property (readonly) char isAudioRunning; 
@property (readonly) char isVideoRunning; 
@property (readonly) char videoIsPaused; 
@property (readonly) char audioIsPaused; 
@property (assign) char isGKVoiceChat; 
@property (nonatomic,readonly) AVAudioPayload * currentAudioPayload; 
@property (assign) char isWaitingForICEResult; 
@property (assign) char receivedSIPInvite; 
@property (assign) tagHANDLE* hMediaQueue; 
@property (assign) tagHANDLE* hAFRC; 
@property (nonatomic,retain) GKRingBuffer * ringBuf; 
@property (assign) unsigned lastReceived; 
@property (assign) int bundledPackets; 
@property (assign) int packetsPerBundle; 
@property (assign) int preferredAudioCodec; 
@property (nonatomic,readonly) int audioTxBitrate; 
@property (assign) char useControlByte; 
@property (assign) char useUEP; 
@property (assign) unsigned char inputMeter; 
@property (assign) int bandwidthUpstream; 
@property (assign) int bandwidthDownstream; 
@property (nonatomic,retain) NSArray * mutedPeers; 
@property (assign) NSObject*<VideoConferenceChannelQualityDelegate> qualityDelegate; 
@property (assign) char shouldTimeoutPackets; 
@property (retain) NSData * srtpKeyBytes; 
@property (nonatomic,retain) VideoAttributes * remoteVideoAttributes; 
@property (assign) unsigned remoteFrameWidth; 
@property (assign) unsigned remoteFrameHeight; 
@property (assign,nonatomic) int operatingMode; 
@property (readonly) char isSKEOptimizationEnabled; 
@property (readonly) char isRemoteMediaStalled; 
@property (retain) VCCapabilities * capabilities; 
@property (assign) int deviceRole;                                                                //@synthesize deviceRole=_deviceRole - In the implementation block
@property (assign) int pendingRelayCount; 
@property (assign) char initialSecondaryRelaySetupDone; 
@property (nonatomic,retain) NSNumber * basebandCodecSampleRate; 
@property (nonatomic,copy) NSString * basebandCodecType; 
@property (nonatomic,readonly) int audioTierNetworkBitrate; 
@property (nonatomic,readonly) int audioTierAudioBitrate; 
@property (nonatomic,readonly) int audioTierPacketsPerBundle; 
@property (nonatomic,readonly) int audioTierPayload; 
+(id)keyPathsForValuesAffectingNetworkQuality;
-(void)dealloc;
-(void)setDelegate:(NSObject*<VCCallSessionDelegate>)arg1 ;
-(id)init;
-(NSString *)description;
-(NSObject*<VCCallSessionDelegate>)delegate;
-(int)state;
-(void)setState:(int)arg1 ;
-(void)lock;
-(void)unlock;
-(char)isStarted;
-(void)setCapabilities:(VCCapabilities *)arg1 ;
-(void)setDeviceRole:(int)arg1 ;
-(double)networkQuality;
-(void)sendARPLData:(id)arg1 toCallID:(unsigned long)arg2 ;
-(char)requiresWifi;
-(void)setRequiresWifi:(char)arg1 ;
-(void)receivedRealTimeData:(id)arg1 fromParticipantID:(id)arg2 ;
-(void)processRemoteIPChange:(id)arg1 callID:(unsigned long)arg2 ;
-(int)natType;
-(void)networkStateDidChange;
-(unsigned long)callID;
-(void)loopbackSocketTunnel:(id)arg1 receivedData:(id)arg2 from:(tagIPPORT*)arg3 ;
-(VCImageAttributeRules *)imageAttributeRules;
-(void)setImageAttributeRules:(VCImageAttributeRules *)arg1 ;
-(unsigned)audioRTPID;
-(unsigned)videoRTPID;
-(NSString *)basebandCodecType;
-(NSNumber *)basebandCodecSampleRate;
-(unsigned)connectionType;
-(id)initWithDeviceRole:(int)arg1 ;
-(void)setupTransport;
-(char)getRealAudioTxBitrate:(unsigned short*)arg1 RxBitrate:(unsigned short*)arg2 duplication:(unsigned short*)arg3 ;
-(char)isCaller;
-(char)videoIsPaused;
-(char)resultMatchesIPInRemoteConnectionData:(tagCONNRESULT*)arg1 ;
-(char)didUseICE;
-(char)isCallOngoing;
-(void)updateMaxPktLength:(tagCONNRESULT*)arg1 ;
-(char)evaluateEnableRRxForConnectioResult:(tagCONNRESULT*)arg1 useCellular:(int*)arg2 ;
-(unsigned)audioCapForConnectionResult:(const tagCONNRESULT*)arg1 ;
-(char)findFeatureString:(const char*)arg1 value:(char*)arg2 valueLength:(unsigned)arg3 withPrefix:(const char*)arg4 ;
-(id)newRemoteScreenAttributesForOrientation:(int)arg1 ;
-(long)Conference_SetBWEstMode:(BOOL)arg1 bFakeLargeFrameMode:(BOOL)arg2 ;
-(void)setUseControlByte:(char)arg1 ;
-(void)setUseUEP:(char)arg1 ;
-(char)chooseVideoPayload:(int*)arg1 count:(int)arg2 forConnectionResult:(tagCONNRESULT*)arg3 ;
-(char)disconnect:(id)arg1 didRemoteCancel:(char)arg2 ;
-(void)getVideoSettings:(int)arg1 forInterface:(int)arg2 width:(int*)arg3 height:(int*)arg4 framerate:(int*)arg5 bitRate:(int*)arg6 ;
-(char)chooseVideoPayloadForInterface:(int)arg1 connectionResult:(tagCONNRESULT*)arg2 ;
-(id)getVideoRuleForVideoMode:(unsigned)arg1 interface:(int)arg2 ;
-(id)getFeaturesListStringForPayload:(int)arg1 ;
-(long)applyFeaturesListStringForPayload:(int)arg1 ;
-(void)setConnectionResult:(tagCONNRESULT*)arg1 ;
-(void)resetVideoRulesForConnectionResult:(tagCONNRESULT*)arg1 interface:(int)arg2 videoReportingDictionary:(id)arg3 ;
-(void)notifyDelegateToCancelRelay;
-(void)setupSecondaryRelayForCall:(unsigned long)arg1 callerRequired:(id)arg2 ;
-(void)setupWCMClient;
-(void)cleanupWCMClient;
-(void)disconnectWithNoRemotePackets:(int)arg1 ;
-(void)logDetailedNetworkInformation;
-(void)updateNetworkCheckHint:(double)arg1 ;
-(void)updateRemoteMediaStallState:(double)arg1 ;
-(void)updateLastReceivedPacketWithTimestamp:(double)arg1 ;
-(void)sendTimings;
-(void)resetLoopback;
-(void)setRemoteVideoAttributes:(VideoAttributes *)arg1 ;
-(void)setupConnectionTimeoutTimerWithErrorCode:(int)arg1 detailedCode:(int)arg2 description:(id)arg3 reason:(id)arg4 ;
-(void)cancelConnectionTimeoutTimer;
-(int)bundleAndSendSamples:(char*)arg1 numEncodedBytes:(int)arg2 withPayload:(int)arg3 timeStamp:(unsigned)arg4 bufferedSamples:(int)arg5 hasNewSamples:(char)arg6 ;
-(char)chooseAudioNetworkBitrate;
-(float)nextAudioInterval:(int)arg1 ;
-(int)sendAudioBundle:(char)arg1 atTimeStamp:(unsigned)arg2 nextInterval:(float)arg3 ;
-(char)bundleAudio:(void*)arg1 withPayload:(int)arg2 numInputBytes:(int)arg3 ;
-(int)deviceRole;
-(void)setupPeerInfo:(id)arg1 usingInviteData:(id)arg2 isCaller:(char)arg3 capabilities:(id)arg4 ;
-(void)setupNonConnectionCheckCall;
-(char)createIDSTunnelWithSocket:(int)arg1 error:(id*)arg2 ;
-(char)createClientRelayWithIDSSocket:(int)arg1 error:(id*)arg2 ;
-(char)startConnectionWithParticipantID:(id)arg1 callID:(unsigned long)arg2 usingBlob:(id)arg3 isCaller:(char)arg4 capabilities:(id)arg5 useRelay:(char)arg6 error:(id*)arg7 ;
-(void)reportDashboardEndResult;
-(void)cleanupMedia;
-(void)notifyDelegateAndEndCall:(int)arg1 didRemoteCancel:(char)arg2 error:(id)arg3 ;
-(void)initWithRelevantStorebagEntries;
-(char)createConnectionDataForParticipantID:(id)arg1 pCallID:(unsigned*)arg2 nonCellularCandidateTimeout:(double)arg3 error:(id*)arg4 useRelay:(char)arg5 ;
-(id)createSKEBlobWithRemoteSKEBlob:(id)arg1 ;
-(void)processRemoteIPChange:(char*)arg1 dataLength:(int)arg2 callID:(unsigned long)arg3 remoteCandidateVersion:(unsigned short)arg4 ;
-(void)stopPausedHeartbeat;
-(void)startPausedHeartbeat;
-(void)stopAudioIO;
-(char)setPauseAudio:(char)arg1 force:(char)arg2 error:(id*)arg3 ;
-(char)startVideo:(char)arg1 error:(id*)arg2 ;
-(char)stopVideo:(char)arg1 error:(id*)arg2 ;
-(char)setPauseVideo:(char)arg1 force:(char)arg2 error:(id*)arg3 ;
-(char)allowAdditionalConnection:(unsigned long)arg1 ;
-(void)deleteTCPTunnel;
-(char)createTCPTunnelForParticipantID:(id)arg1 relayDictionary:(id)arg2 didOriginateRequest:(char)arg3 relayType:(unsigned char)arg4 error:(id*)arg5 ;
-(void)resetICETimeoutToLongTimeout;
-(id)createRelayUpdateDictionary:(id)arg1 ;
-(void)sendData:(id)arg1 encrypted:(char)arg2 ;
-(void)getFrontCaptureTime:(float*)arg1 backCaptureTime:(float*)arg2 ;
-(VCJitterBuffer *)vcJitterBuffer;
-(char)pullAudioSamples:(char*)arg1 timestamp:(unsigned*)arg2 byteCount:(int*)arg3 sampleCount:(int*)arg4 sampleRate:(int*)arg5 receivedBytes:(int*)arg6 lastReceivedAudioTime:(double*)arg7 padding:(char*)arg8 paddingLength:(char*)arg9 silence:(int*)arg10 ;
-(void)enableAudio:(char)arg1 ;
-(int)packetsPerBundle;
-(id)createInitiateRelayDictionaryForCall:(unsigned long)arg1 primaryConnection:(tagCONNRESULT*)arg2 ;
-(void)setOperatingMode:(int)arg1 ;
-(void)startAWDStats;
-(void)setUseAFRC:(char)arg1 ;
-(void)updateVideoQualityStatus:(double)arg1 bitrate:(double)arg2 time:(double)arg3 isRemote:(char)arg4 ;
-(char)isBetterForIncomingSIPThanOtherSession:(id)arg1 result:(tagCONNRESULT*)arg2 ;
-(void)handleCellTechChange:(int)arg1 cellularMaxPktLen:(unsigned short)arg2 ;
-(void)remoteCellTechStateUpdate:(int)arg1 maxRemoteBitrate:(unsigned)arg2 ;
-(void)handlePrimaryConnChange:(tagCONNRESULT*)arg1 oldResult:(tagCONNRESULT*)arg2 ;
-(void)setQualityDelegate:(NSObject*<VideoConferenceChannelQualityDelegate>)arg1 ;
-(NSObject*<VideoConferenceChannelQualityDelegate>)qualityDelegate;
-(void)updateLastReceivedAudioTime;
-(void)updateLastReceivedPacket:(char)arg1 ;
-(char)handshakeComplete:(SSLContextRef)arg1 withError:(_CFError*)arg2 ;
-(void)timeoutUnfinishedConnection;
-(int)encodeAudio:(void*)arg1 numInputBytes:(int)arg2 outputBytes:(void*)arg3 numOutputBytes:(int)arg4 withPayload:(int*)arg5 ;
-(void)sendThreadedAudio:(tagEncodedAudio*)arg1 buffer:(char*)arg2 bufferSize:(unsigned long)arg3 ;
-(int)sendAudioHeartbeat:(unsigned)arg1 ;
-(char)startConnectionWithParticipantID:(id)arg1 callID:(unsigned long)arg2 usingInviteData:(id)arg3 isCaller:(char)arg4 capabilities:(id)arg5 idsSocket:(int)arg6 error:(id*)arg7 ;
-(int)rtcpDescriptor;
-(id)inviteDataForParticipantID:(id)arg1 callID:(unsigned*)arg2 remoteInviteData:(id)arg3 nonCellularCandidateTimeout:(double)arg4 error:(id*)arg5 ;
-(void)setShouldSendAudio:(char)arg1 ;
-(void)setPacketsPerBundle:(int)arg1 ;
-(void)setIsGKVoiceChat:(char)arg1 ;
-(char)isGKVoiceChat;
-(char)setPauseAudio:(char)arg1 error:(id*)arg2 ;
-(char)setPauseVideo:(char)arg1 error:(id*)arg2 ;
-(char)stillWantsToRelay;
-(void)processRelayRequestResponseDict:(id)arg1 didOriginateRequest:(char)arg2 ;
-(void)processRelayUpdateDict:(id)arg1 didOriginateRequest:(char)arg2 ;
-(void)processCancelRelayRequest:(id)arg1 didOriginateRequest:(char)arg2 ;
-(void)rcvdFirstRemoteFrame;
-(id)remoteParticipantID;
-(id)localParticipantID;
-(void)localCameraSwitchedFrom:(int)arg1 to:(int)arg2 ;
-(id)callMetadata;
-(char)isSKEOptimizationEnabled;
-(VCCapabilities *)capabilities;
-(int)audioTierNetworkBitrate;
-(int)audioTierAudioBitrate;
-(int)audioTierPacketsPerBundle;
-(int)audioTierPayload;
-(tagHANDLE*)rtpHandle;
-(void)setRtpHandle:(tagHANDLE*)arg1 ;
-(tagCONNRESULT*)connectionResult;
-(tagCONNRESULT*)origConnectionResult;
-(void)setOrigConnectionResult:(tagCONNRESULT*)arg1 ;
-(unsigned short)maxPacketLength;
-(void)setMaxPacketLength:(unsigned short)arg1 ;
-(void)setDidUseICE:(char)arg1 ;
-(int)videoPayload;
-(void)setVideoPayload:(int)arg1 ;
-(char)isVideoRunning;
-(char)isVideoRunning;
-(char)isAudioRunning;
-(char)isWaitingForICEResult;
-(void)setIsWaitingForICEResult:(char)arg1 ;
-(char)receivedSIPInvite;
-(void)setReceivedSIPInvite:(char)arg1 ;
-(NSObject*<VideoConferenceRealTimeChannel>)rtChannel;
-(void)setRtChannel:(NSObject*<VideoConferenceRealTimeChannel>)arg1 ;
-(int)numEncodedBytes;
-(void)setNumEncodedBytes:(int)arg1 ;
-(int)numBufferBytesAvailable;
-(void)setNumBufferBytesAvailable:(int)arg1 ;
-(tagHANDLE*)hMediaQueue;
-(void)setHMediaQueue:(tagHANDLE*)arg1 ;
-(tagHANDLE*)hAFRC;
-(void)setHAFRC:(tagHANDLE*)arg1 ;
-(GKRingBuffer *)ringBuf;
-(void)setRingBuf:(GKRingBuffer *)arg1 ;
-(unsigned)lastReceived;
-(void)setLastReceived:(unsigned)arg1 ;
-(int)bundledPackets;
-(void)setBundledPackets:(int)arg1 ;
-(int)audioTxBitrate;
-(int)preferredAudioCodec;
-(void)setPreferredAudioCodec:(int)arg1 ;
-(char)useControlByte;
-(char)useUEP;
-(unsigned char)inputMeter;
-(void)setInputMeter:(unsigned char)arg1 ;
-(char)useCompressedConnectionData;
-(void)setUseCompressedConnectionData:(char)arg1 ;
-(int)bandwidthUpstream;
-(void)setBandwidthUpstream:(int)arg1 ;
-(int)bandwidthDownstream;
-(void)setBandwidthDownstream:(int)arg1 ;
-(NSArray *)mutedPeers;
-(void)setMutedPeers:(NSArray *)arg1 ;
-(char)audioIsPaused;
-(void)setNatType:(int)arg1 ;
-(unsigned)lastSentAudioSampleTime;
-(void)setLastSentAudioSampleTime:(unsigned)arg1 ;
-(NSString *)peerCN;
-(void)setPeerCN:(NSString *)arg1 ;
-(double)packetLossRate;
-(void)setPacketLossRate:(double)arg1 ;
-(double)networkConditionsTimeoutInSeconds;
-(void)setNetworkConditionsTimeoutInSeconds:(double)arg1 ;
-(unsigned)roundTripTime;
-(void)setRoundTripTime:(unsigned)arg1 ;
-(int)signalStrength;
-(void)setSignalStrength:(int)arg1 ;
-(int)signalRaw;
-(void)setSignalRaw:(int)arg1 ;
-(int)signalGrade;
-(void)setSignalGrade:(int)arg1 ;
-(AVAudioPayload *)currentAudioPayload;
-(float)packetLateAndMissingRatio;
-(void)setPacketLateAndMissingRatio:(float)arg1 ;
-(NSString *)sessionID;
-(void)setSessionID:(NSString *)arg1 ;
-(char)shouldTimeoutPackets;
-(void)setShouldTimeoutPackets:(char)arg1 ;
-(char)useAFRC;
-(char)isRTCPFBEnabled;
-(void)setIsRTCPFBEnabled:(char)arg1 ;
-(char)shouldSendAudio;
-(void)setIsStarted:(char)arg1 ;
-(VideoAttributes *)remoteVideoAttributes;
-(unsigned)remoteFrameWidth;
-(void)setRemoteFrameWidth:(unsigned)arg1 ;
-(unsigned)remoteFrameHeight;
-(void)setRemoteFrameHeight:(unsigned)arg1 ;
-(int)operatingMode;
-(char)isRemoteMediaStalled;
-(void)setBasebandCodecSampleRate:(NSNumber *)arg1 ;
-(void)setBasebandCodecType:(NSString *)arg1 ;
-(int)pendingRelayCount;
-(void)setPendingRelayCount:(int)arg1 ;
-(char)initialSecondaryRelaySetupDone;
-(void)setInitialSecondaryRelaySetupDone:(char)arg1 ;
-(NSData *)srtpKeyBytes;
-(void)setSrtpKeyBytes:(NSData *)arg1 ;
-(void)vcSecureDataChannel:(id)arg1 receivedData:(id)arg2 ;
-(void)sendBasebandCodecMessage;
-(void)avTelephonyInterface:(id)arg1 vocoderInfoChangedToType:(id)arg2 sampleRate:(id)arg3 ;
-(void)wcmSetCallConfig:(unsigned)arg1 interferenceLevel:(unsigned)arg2 ;
-(void)wcmGetCallConfig:(unsigned*)arg1 targetBitrate:(unsigned*)arg2 ;
-(void)setupLoopback;
-(void)sipConnectThreadProc:(id)arg1 ;
-(void)deleteIDSTunnel;
-(void)logConnectionSuccess;
-(void)logConnectionType:(int)arg1 ;
-(void)inviteeICEResultTimer:(float)arg1 shouldBailIfRelay:(char)arg2 ;
-(void)connectionResultFromSIP:(tagSIPCallbackData*)arg1 ;
-(int)handleIncomingWithCallID:(unsigned long)arg1 msgIn:(const char*)arg2 msgOut:(char*)arg3 optional:(void*)arg4 confIndex:(int*)arg5 error:(id*)arg6 ;
-(void)setupEncryptionWithKey:(const _CFData*)arg1 confIndex:(int*)arg2 ;
-(char)doBandwidthDetection:(tagHANDLE*)arg1 error:(id*)arg2 ;
-(char)startMediaQueue:(id*)arg1 ;
-(void)processSIPMessage:(char*)arg1 msgOut:(char*)arg2 optional:(void*)arg3 confIndex:(int*)arg4 ;
-(char)shouldNotifyDelegateDidStartBeforeAudioSetup;
-(void)notifyDelegateSessionStarted;
-(void)startAudioWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)enableSessionHealthMonitor;
-(void)shutdownVoiceChatFromRemoteSIPSignal:(int)arg1 ;
-(void)destroySecondaryRelayDispatchTimer;
-(void)setupInitialSecondaryRelayWithCallbackRelayFlag:(char)arg1 callID:(unsigned long)arg2 ;
-(unsigned)connectionResultCallback:(tagCONNRESULT*)arg1 didReceiveICEPacket:(char)arg2 didUseRelay:(char)arg3 secretKey:(CFDataRef)arg4 skeResult:(int)arg5 ;
-(int)sipCallback:(int)arg1 callID:(unsigned long)arg2 msgIn:(const char*)arg3 msgOut:(char*)arg4 optional:(void*)arg5 confIndex:(int*)arg6 ;
-(SecIdentityRef)retrieveIdentity;
-(void)updateQOS;
-(void)setupDTLSDefaults;
-(void)setLocalIdentityForKeyExchange;
-(void)setupMessaging;
-(void)initiateRelayRequest;
-(double)iceTimeoutInSeconds:(char)arg1 ;
-(void)logIdentity:(SecIdentityRef)arg1 ;
-(int)calculateSIPEndAction:(char)arg1 currentState:(int)arg2 error:(id)arg3 ;
-(void)doSipEndAction:(int)arg1 callID:(unsigned long)arg2 error:(id)arg3 ;
-(void)disableSessionHealthMonitor;
-(void)stopAudio;
-(char)stopMediaQueue:(id*)arg1 ;
-(char)stopAFRC:(id*)arg1 ;
-(void)stopLoopback;
-(long)generateConnectionData:(char**)arg1 forCallID:(unsigned long)arg2 connectionDataSize:(int*)arg3 nonCellularCandidateTimeout:(double)arg4 ;
-(void)disconnectWithNoRemotePackets:(int)arg1 timeoutUsed:(double)arg2 ;
-(char)createRTPHandles:(id*)arg1 ;
-(char)createMediaQueueHandle:(id*)arg1 ;
-(char)negotiatePayloads:(int*)arg1 numPayloads:(int*)arg2 withError:(id*)arg3 ;
-(char)setRTPDestinationWithError:(id*)arg1 ;
-(char)setRTPPayloads:(int*)arg1 numPayloads:(int)arg2 withError:(id*)arg3 ;
-(char)negotiateMaxBandwidth:(int*)arg1 ;
-(int)getAllCompatibleVideoPayloads:(int*)arg1 ;
-(id)getCompatibleLocalFeaturesListForPayloads:(int*)arg1 count:(int)arg2 ;
-(char)createSDP:(int*)arg1 audioPayloadCount:(int)arg2 secondaryPayloadTypes:(int*)arg3 secondaryPayloadCount:(int)arg4 videoPayloadTypes:(int*)arg5 videoPayloadCount:(int)arg6 localFeaturesList:(id)arg7 answerBandwidth:(int)arg8 maxBandwidth:(int)arg9 imageSizesSend:(imageTag*)arg10 imageSendCount:(int*)arg11 imageSizesRecv:(imageTag*)arg12 imageRecvCount:(int*)arg13 sdp:(char*)arg14 numSDPBytes:(int*)arg15 error:(id*)arg16 ;
-(void)launchDeadlineExitTimer;
-(char)getForcedPayload:(int*)arg1 ;
-(void)getAllPayloadsForAudio:(int*)arg1 count:(int*)arg2 secondaryPayloads:(int*)arg3 secondaryCount:(int*)arg4 ;
-(void)getAllPayloadsForVideo:(int*)arg1 count:(int*)arg2 ;
-(char)treatAsCellular;
-(id)allPayloadsLocalFeaturesString;
-(char)is3GCall;
-(id)pickFeaturesStringForPayload:(int)arg1 featuresListDict:(id)arg2 remote:(char)arg3 ;
-(char)setMatchedFeaturesString:(char*)arg1 localFeaturesString:(id)arg2 remoteFeaturesString:(id)arg3 ;
-(char)choosePayload:(int*)arg1 count:(int)arg2 ;
-(char)chooseSecondaryPayloads:(int*)arg1 count:(int)arg2 ;
-(void)getDecodePayloads:(int*)arg1 numPayloads:(int*)arg2 withPayload:(int)arg3 secondaryPayloads:(int*)arg4 numSecondaryPayloads:(int)arg5 ;
-(void)negotiateFeaturesString:(id)arg1 forPayload:(int)arg2 ;
-(char)startAFRC:(id*)arg1 ;
-(char)canNegotiateVideoPayload:(int)arg1 forConnectionResult:(tagCONNRESULT*)arg2 ;
-(char)isValidVideoPayloadOverride:(id)arg1 ;
-(char)startRTPWithError:(id*)arg1 ;
-(char)sendSIPInviteWithError:(id*)arg1 ;
-(char)setupCallerRTPChannelWithError:(id*)arg1 ;
-(void)stopAudioIOProc:(id)arg1 ;
-(void)setupAudioHeaderSize;
-(char)setupAudioEncoders;
-(char)allocateBundleBuffer;
-(char)setupAudioTierPicker;
-(char)setupAudioCookies;
-(void)startAudioIOWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)useAudioTier:(id)arg1 ;
-(void)updateAudioTxBitrate;
-(void)useAudioPayload:(id)arg1 withBitrate:(unsigned long)arg2 ;
-(int)interfaceForConnectionResult:(tagCONNRESULT*)arg1 ;
-(void)adjustBitrateForConnectionType;
-(char)initializeVideoTransmitter:(id*)arg1 encodeRule:(id)arg2 unpausing:(char)arg3 reportingAgent:(opaqueRTCReportingRef)arg4 ;
-(char)initializeVideoReceiver:(id*)arg1 reportingAgent:(opaqueRTCReportingRef)arg2 ;
-(void)setupAACELDPayload:(int)arg1 ;
-(id)addAudioPayload:(int)arg1 ;
-(unsigned)codecBitmapForPayloads:(int*)arg1 count:(int)arg2 ;
-(char)setupAudioCodecWithPayload:(int)arg1 ;
-(char)sipConnectWithError:(id*)arg1 ;
-(void)stopLoopbackProc:(id)arg1 ;
-(id)createInitiateRelayDictionary;
-(id)deriveAspectRatioFLS;
-(id)retrieveRawFeaturesString;
-(id)createLocalFeaturesString;
-(unsigned)maxBitrateForConnectionType;
-(double)sessionReceivingBitrate;
-(double)sessionReceivingFramerate;
-(double)sessionTransmittingBitrate;
-(double)sessionTransmittingFramerate;
-(void)remotePauseDidChangeToState:(char)arg1 forVideo:(char)arg2 ;
-(void)doSipEndProc:(id)arg1 ;
-(const char*)matchedFeaturesStringForPayload:(int)arg1 ;
-(void)setupBitrateNegotation;
-(void)shouldSendBlackFrame:(char)arg1 ;
-(void)handleDuplication:(char)arg1 ;
-(void)createSecondaryRelayDispatchTimer:(float)arg1 callID:(unsigned long)arg2 callerRequired:(char)arg3 ;
-(void)setupVideoPauseMessages;
-(void)setupAudioPauseMessages;
-(void)setupCellTechChangeMessages;
-(void)setupAudioPausedHBMessages;
-(void)setupAudioOnOffStateMessages;
-(void)setupHandoverCandidateChangeMessage;
-(void)setupBasebandCodecInfoMessages;
-(void)callAlarmsWithRTPTimeStamp:(unsigned)arg1 ;
-(void)processResolutionChangeToVideoRule:(id)arg1 captureRule:(id)arg2 featuresListString:(id)arg3 ;
-(char)onCaptureFrame:(CVBufferRef)arg1 audioTS:(unsigned)arg2 audioHT:(double)arg3 videoHT:(double)arg4 cameraBits:(unsigned char)arg5 ;
-(void)processBlackFrame:(CVBufferRef)arg1 ;
-(void)updateVideoQualityNotification:(double)arg1 ;
-(void)onPlayVideo:(CVBufferRef)arg1 frameTime:(SCD_Struct_AV9)arg2 cameraStatusBits:(unsigned char)arg3 ;
-(void)setSampleRate:(int)arg1 ;
-(int)sampleRate;
-(void)resetState;
@end
