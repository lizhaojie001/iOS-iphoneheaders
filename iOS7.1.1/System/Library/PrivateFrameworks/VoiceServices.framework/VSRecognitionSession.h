/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:25:50 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/VoiceServices.framework/VoiceServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol VSRecognitionSessionDelegate;
#import <VoiceServices/VoiceServices-Structs.h>
@class NSString, VSKeepAlive, VSRecognitionAction, NSArray, VSSpeechSynthesizer;

@interface VSRecognitionSession : NSObject {

	NSString* _modelIdentifier;
	VSKeepAlive* _keepAlive;
	<VSRecognitionSessionDelegate>* _delegate;
	VSRecognitionAction* _currentAction;
	NSArray* _topLevelKeywords;
	id _handlingThread;
	VSSpeechSynthesizer* _synthesizer;
	NSString* _languageID;
	NSString* _debugDumpPath;
	NSString* _audioInputPath;
	double _levelInterval;
	unsigned long long _keywordPhase;
	struct {
		unsigned delegateWillBegin : 1;
		unsigned delegateBegin : 1;
		unsigned delegateOpenURL : 1;
		unsigned delegateFinishedSpeaking : 1;
		unsigned delegateComplete : 1;
		unsigned debugDumpEnabled : 1;
		unsigned preferredEngine : 2;
		unsigned performHandlerActions : 1;
		unsigned allowSensitiveActions : 1;
		unsigned bluetoothAllowed : 1;
		unsigned resetNextAction : 1;
		unsigned isSpeaking : 1;
		unsigned actionBegan : 1;
		unsigned actionBeginning : 1;
		unsigned actionBeginDeferred : 1;
		unsigned invalid : 1;
		unsigned observeKeywordChange : 1;
	}  _sessionFlags;

}
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(id)init;
-(void)_init;
-(bool)isValid;
-(id)cancel;
-(id)reset;
-(bool)isFinished;
-(void)_setAction:(id)arg1 ;
-(void)speechSynthesizer:(id)arg1 didFinishSpeaking:(bool)arg2 withError:(id)arg3 ;
-(bool)isBusy;
-(void)_notifyDelegateActionStarted;
-(id)_currentRecognizeAction;
-(id)initWithModelIdentifier:(id)arg1 ;
-(id)cancelMaintainingKeepAlive:(bool)arg1 ;
-(id)spokenFeedbackString;
-(id)spokenFeedbackAttributedString;
-(CFDictionaryRef)_createKeywordIndex;
-(id)_createPhaseSortedKeywordsFromArray:(id)arg1 ;
-(id)_topLevelKeywords;
-(void)_keywordIndexChanged;
-(id)_beginSpeakingAttributedString:(id)arg1 ;
-(id)beginSpeakingString:(id)arg1 ;
-(id)_beginSpeakingString:(id)arg1 attributedString:(id)arg2 ;
-(void)_notifyDelegateFinishedSpeakingWithError:(id)arg1 ;
-(id)beginNextAction;
-(bool)isRecognizing;
-(bool)isActivelyRecognizing;
-(bool)hasDeferredAction;
-(bool)nextActionWillTerminateSession;
-(bool)nextActionWillRecognize;
-(void)setSensitiveActionsEnabled:(bool)arg1 ;
-(bool)sensitiveActionsEnabled;
-(bool)setBluetoothInputAllowed:(bool)arg1 ;
-(void)_actionCompleted:(id)arg1 nextAction:(id)arg2 error:(id)arg3 ;
-(bool)_actionStarted:(id)arg1 ;
-(id)_notifyDelegateOpenURL:(id)arg1 ;
-(id)_recognitionResultHandlingThread;
-(void)recognitionResultHandlingThread:(id)arg1 didHandleResults:(id)arg2 nextAction:(id)arg3 ;
-(id)displayResultString;
-(id)displayStatusString;
-(void)setInputLevelUpdateInterval:(double)arg1 ;
-(float)inputLevel;
-(float)inputLevelDB;
-(void)setKeywordPhase:(unsigned long long)arg1 ;
-(id)keywordAtIndex:(long long)arg1 ;
-(long long)keywordCount;
-(id)_keywordsForModelIdentifier:(id)arg1 ;
-(id)beginSpeakingFeedbackString;
-(bool)setDebugDumpEnabled:(bool)arg1 ;
-(id)debugDumpPath;
-(bool)setNextRecognitionAudioInputPath:(id)arg1 ;
-(bool)setNextRecognitionRequiresReset:(bool)arg1 ;
-(bool)setPreferredEngine:(int)arg1 ;
-(void)setPerformRecognitionHandlerActions:(bool)arg1 ;
@end

