/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:25:33 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/identityservicesd.app/identityservicesd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <identityservicesd/identityservicesd-Structs.h>
@class NSString, IDSGenericConnectionID, IDSSockAddrWrapperPair, NSError, IDSHCInfo, NSObject;

@interface IDSGenericConnection : NSObject {

	NSString* _localConnectionGUID;
	NSString* _remoteConnectionGUID;
	IDSGenericConnectionID* _connectionID;
	IDSSockAddrWrapperPair* _addressPair;
	int _protocol;
	int _sd;
	int _sdCopy;
	int _sdOriginal;
	NSError* _connectError;
	/*^block*/id _openSocketCompletionHandler;
	unsigned _firstIncomingSYNSequenceNumber;
	unsigned _expectedNextOutgoingSequenceNumber;
	unsigned _expectedNextIncomingSequenceNumber;
	int _stateFlags;
	double _creationTime;
	int _priority;
	int _socketTrafficClass;
	char _hasMoreData;
	double _lastSuccessfulSentTime;
	IDSHCInfo* _compressionInfo;
	int _compressionState;
	char _suspended;
	NSObject*<OS_dispatch_queue> _completionQueue;
	unsigned _uint32Key;
	SCD_Struct_ID11* _encryptionState;
	char _encryptionEnabled;
	int _keyMaterialLength;
	char* _localKeyMaterial;
	unsigned _SSRCSend;
	unsigned _SSRCRecv;
	unsigned short _seqSendStart;
	unsigned short _seqRecvStart;
	unsigned short _seqSend;
	unsigned long long _packetsReceived;
	unsigned long long _packetsSent;
	unsigned long long _bytesReceived;
	unsigned long long _bytesSent;

}

@property (nonatomic,readonly) NSString * localConnectionGUID;                          //@synthesize localConnectionGUID=_localConnectionGUID - In the implementation block
@property (nonatomic,copy) NSString * remoteConnectionGUID;                             //@synthesize remoteConnectionGUID=_remoteConnectionGUID - In the implementation block
@property (nonatomic,retain) IDSGenericConnectionID * connectionID;                     //@synthesize connectionID=_connectionID - In the implementation block
@property (nonatomic,copy) IDSSockAddrWrapperPair * addressPair;                        //@synthesize addressPair=_addressPair - In the implementation block
@property (nonatomic,readonly) int protocol;                                            //@synthesize protocol=_protocol - In the implementation block
@property (assign,nonatomic) int sd;                                                    //@synthesize sd=_sd - In the implementation block
@property (assign,nonatomic) int sdCopy;                                                //@synthesize sdCopy=_sdCopy - In the implementation block
@property (assign,nonatomic) int sdOriginal;                                            //@synthesize sdOriginal=_sdOriginal - In the implementation block
@property (nonatomic,retain) NSError * connectError;                                    //@synthesize connectError=_connectError - In the implementation block
@property (assign,nonatomic) NSObject*<OS_dispatch_queue> completionQueue; 
@property (nonatomic,copy) id openSocketCompletionHandler;                              //@synthesize openSocketCompletionHandler=_openSocketCompletionHandler - In the implementation block
@property (assign,nonatomic) unsigned firstIncomingSYNSequenceNumber;                   //@synthesize firstIncomingSYNSequenceNumber=_firstIncomingSYNSequenceNumber - In the implementation block
@property (assign,nonatomic) unsigned expectedNextIncomingSequenceNumber;               //@synthesize expectedNextIncomingSequenceNumber=_expectedNextIncomingSequenceNumber - In the implementation block
@property (assign,nonatomic) unsigned expectedNextOutgoingSequenceNumber;               //@synthesize expectedNextOutgoingSequenceNumber=_expectedNextOutgoingSequenceNumber - In the implementation block
@property (assign,nonatomic) int stateFlags;                                            //@synthesize stateFlags=_stateFlags - In the implementation block
@property (nonatomic,readonly) double creationTime;                                     //@synthesize creationTime=_creationTime - In the implementation block
@property (assign,nonatomic) int priority;                                              //@synthesize priority=_priority - In the implementation block
@property (assign,nonatomic) int socketTrafficClass;                                    //@synthesize socketTrafficClass=_socketTrafficClass - In the implementation block
@property (assign,nonatomic) char hasMoreData;                                          //@synthesize hasMoreData=_hasMoreData - In the implementation block
@property (assign,nonatomic) double lastSuccessfulSentTime;                             //@synthesize lastSuccessfulSentTime=_lastSuccessfulSentTime - In the implementation block
@property (nonatomic,retain) IDSHCInfo * compressionInfo;                               //@synthesize compressionInfo=_compressionInfo - In the implementation block
@property (assign,nonatomic) int compressionState;                                      //@synthesize compressionState=_compressionState - In the implementation block
@property (assign,nonatomic) char suspended;                                            //@synthesize suspended=_suspended - In the implementation block
@property (assign,nonatomic) unsigned uint32Key;                                        //@synthesize uint32Key=_uint32Key - In the implementation block
@property (assign,nonatomic) char encryptionEnabled;                                    //@synthesize encryptionEnabled=_encryptionEnabled - In the implementation block
@property (assign,nonatomic) int keyMaterialLength;                                     //@synthesize keyMaterialLength=_keyMaterialLength - In the implementation block
@property (assign,nonatomic) char* localKeyMaterial;                                    //@synthesize localKeyMaterial=_localKeyMaterial - In the implementation block
@property (assign,setter=SRCSend,nonatomic) unsigned SSRCSend;                          //@synthesize SSRCSend=_SSRCSend - In the implementation block
@property (assign,setter=SRCRecv,nonatomic) unsigned SSRCRecv;                          //@synthesize SSRCRecv=_SSRCRecv - In the implementation block
@property (assign,nonatomic) unsigned short seqSendStart;                               //@synthesize seqSendStart=_seqSendStart - In the implementation block
@property (assign,nonatomic) unsigned short seqRecvStart;                               //@synthesize seqRecvStart=_seqRecvStart - In the implementation block
@property (assign,nonatomic) unsigned short seqSend;                                    //@synthesize seqSend=_seqSend - In the implementation block
@property (assign,nonatomic) unsigned long long packetsReceived;                        //@synthesize packetsReceived=_packetsReceived - In the implementation block
@property (assign,nonatomic) unsigned long long packetsSent;                            //@synthesize packetsSent=_packetsSent - In the implementation block
@property (assign,nonatomic) unsigned long long bytesReceived;                          //@synthesize bytesReceived=_bytesReceived - In the implementation block
@property (assign,nonatomic) unsigned long long bytesSent;                              //@synthesize bytesSent=_bytesSent - In the implementation block
-(unsigned)SSRCRecv;
-(void)setSSRCRecv:(unsigned)arg1 ;
-(unsigned short)seqRecvStart;
-(void)setSeqRecvStart:(unsigned short)arg1 ;
-(id)initWithConnectionID:(id)arg1 protocol:(int)arg2 ;
-(id)initWithConnectionID:(id)arg1 protocol:(int)arg2 keyMaterialLength:(int)arg3 ;
-(SCD_Struct_ID11*)encryptionState;
-(id)flagsString;
-(id)initWithAddressPair:(id)arg1 protocol:(int)arg2 ;
-(id)openSocketCompletionHandler;
-(NSString *)localConnectionGUID;
-(NSString *)remoteConnectionGUID;
-(void)setRemoteConnectionGUID:(NSString *)arg1 ;
-(IDSSockAddrWrapperPair *)addressPair;
-(void)setAddressPair:(IDSSockAddrWrapperPair *)arg1 ;
-(int)sd;
-(void)setSd:(int)arg1 ;
-(int)sdCopy;
-(void)setSdCopy:(int)arg1 ;
-(int)sdOriginal;
-(void)setSdOriginal:(int)arg1 ;
-(NSError *)connectError;
-(void)setConnectError:(NSError *)arg1 ;
-(void)setOpenSocketCompletionHandler:(id)arg1 ;
-(unsigned)firstIncomingSYNSequenceNumber;
-(void)setFirstIncomingSYNSequenceNumber:(unsigned)arg1 ;
-(unsigned)expectedNextOutgoingSequenceNumber;
-(void)setExpectedNextOutgoingSequenceNumber:(unsigned)arg1 ;
-(unsigned)expectedNextIncomingSequenceNumber;
-(void)setExpectedNextIncomingSequenceNumber:(unsigned)arg1 ;
-(int)stateFlags;
-(void)setStateFlags:(int)arg1 ;
-(int)socketTrafficClass;
-(void)setSocketTrafficClass:(int)arg1 ;
-(void)setHasMoreData:(char)arg1 ;
-(double)lastSuccessfulSentTime;
-(void)setLastSuccessfulSentTime:(double)arg1 ;
-(IDSHCInfo *)compressionInfo;
-(void)setCompressionInfo:(IDSHCInfo *)arg1 ;
-(int)compressionState;
-(void)setCompressionState:(int)arg1 ;
-(unsigned)uint32Key;
-(void)setUint32Key:(unsigned)arg1 ;
-(char)encryptionEnabled;
-(void)setEncryptionEnabled:(char)arg1 ;
-(int)keyMaterialLength;
-(void)setKeyMaterialLength:(int)arg1 ;
-(char*)localKeyMaterial;
-(void)setLocalKeyMaterial:(char*)arg1 ;
-(unsigned)SSRCSend;
-(void)setSSRCSend:(unsigned)arg1 ;
-(unsigned short)seqSendStart;
-(void)setSeqSendStart:(unsigned short)arg1 ;
-(unsigned short)seqSend;
-(void)setSeqSend:(unsigned short)arg1 ;
-(void)setConnectionID:(IDSGenericConnectionID *)arg1 ;
-(double)creationTime;
-(char)suspended;
-(void)dealloc;
-(id)description;
-(void)setPriority:(int)arg1 ;
-(int)priority;
-(void)setSuspended:(char)arg1 ;
-(int)protocol;
-(IDSGenericConnectionID *)connectionID;
-(void)setCompletionQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)completionQueue;
-(void)setBytesSent:(unsigned long long)arg1 ;
-(unsigned long long)bytesSent;
-(char)hasMoreData;
-(void)setPacketsSent:(unsigned long long)arg1 ;
-(void)setBytesReceived:(unsigned long long)arg1 ;
-(void)setPacketsReceived:(unsigned long long)arg1 ;
-(unsigned long long)packetsSent;
-(unsigned long long)bytesReceived;
-(unsigned long long)packetsReceived;
@end

