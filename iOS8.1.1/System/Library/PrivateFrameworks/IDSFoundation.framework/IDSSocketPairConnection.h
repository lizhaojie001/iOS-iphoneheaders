/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:32:10 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue, OS_dispatch_source;
@class NSMutableData, NSMapTable, NSData, NSMutableArray, NSObject;

@interface IDSSocketPairConnection : NSObject {

	NSMutableData* _headerData;
	NSMutableData* _currentMessageData;
	NSMapTable* _delegateToInfo;
	unsigned long long _currentOutgoingDataIndex;
	NSData* _outgoingData;
	NSMutableArray* _outgoingDataArray;
	NSObject*<OS_dispatch_queue> _readQueue;
	NSObject*<OS_dispatch_source> _readSource;
	NSObject*<OS_dispatch_source> _writeSource;
	BOOL _writeSourceIsResumed;
	BOOL _isConnected;
	unsigned _currentDataLength;
	long long _bytesReceived;
	double _prevBPS;
	int _connectedSocket;
	double _lastDateCheck;

}

@property (nonatomic,readonly) int socket;                    //@synthesize connectedSocket=_connectedSocket - In the implementation block
@property (nonatomic,readonly) BOOL isConnected;              //@synthesize isConnected=_isConnected - In the implementation block
@property (nonatomic,readonly) BOOL isEmpty; 
-(int)socket;
-(void)dealloc;
-(BOOL)isEmpty;
-(void)endSession;
-(void)_endSession;
-(void)_startServer;
-(void)_callDelegatesWithBlock:(/*^block*/id)arg1 ;
-(id)initWithSocket:(int)arg1 queue:(id)arg2 delegate:(id)arg3 ;
-(id)initWithQueue:(id)arg1 delegate:(id)arg2 ;
-(void)_processBytesAvailable;
-(void)_sendToConnectedSocket;
-(void)_setupWriteSource;
-(long long)_read:(char*)arg1 maxLength:(unsigned long long)arg2 ;
-(void)_sourceCancelled;
-(BOOL)sendDataMessage:(id)arg1 ;
-(BOOL)isConnected;
@end
