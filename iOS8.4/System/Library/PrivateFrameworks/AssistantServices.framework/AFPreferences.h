/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:20:45 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject;

@interface AFPreferences : NSObject {

	BOOL _registeredForInternalPrefs;
	BOOL _registeredForLanguageCode;
	BOOL _registeredForOutputVoice;
	NSObject*<OS_dispatch_queue> _navTokenQueue;
	BOOL _navTokenIsValid;
	int _navToken;

}
+(id)sharedPreferences;
-(void)dealloc;
-(id)init;
-(void)synchronize;
-(BOOL)ignoreServerManualEndpointingThreshold;
-(id)manualEndpointingThreshold;
-(BOOL)dictationIsEnabled;
-(id)languageCode;
-(id)birthCertificateDataForLanguageCode:(id)arg1 ;
-(id)outputVoice;
-(void)setOutputVoice:(id)arg1 ;
-(void)_registerForInteralPrefs;
-(void)_registerForLanguageCode;
-(BOOL)assistantIsEnabled;
-(void)_registerForOutputVoice;
-(void)_registerForNavStatusIfNeeded;
-(void)setBirthCertificateData:(id)arg1 forLanguageCode:(id)arg2 ;
-(id)whitelistedLanguages;
-(void)_setLoggingDefaultValue:(id)arg1 forKey:(id)arg2 ;
-(void)_preferencesDidChangeExternally;
-(void)_internalPreferencesDidChangeExternally;
-(void)_languageCodeDidChangeExternally;
-(void)_ouputVoiceDidChangeExternally;
-(void)_setAssistantIsEnabledLocal:(BOOL)arg1 ;
-(void)_setDictationIsEnabledLocal:(BOOL)arg1 ;
-(void)setAssistantIsEnabled:(BOOL)arg1 ;
-(void)setDictationIsEnabled:(BOOL)arg1 ;
-(long long)bugReportingMode;
-(void)setBugReportingMode:(long long)arg1 ;
-(BOOL)debugButtonIsEnabled;
-(void)setDebugButtonIsEnabled:(BOOL)arg1 ;
-(long long)handsFreeMode;
-(void)setHandsFreeMode:(long long)arg1 ;
-(void)setIgnoreServerManualEndpointingThreshold:(BOOL)arg1 ;
-(void)setManualEndpointingThreshold:(id)arg1 ;
-(BOOL)streamingDictationEnabled;
-(void)setStreamingDictationEnabled:(BOOL)arg1 ;
-(BOOL)disableAssistantWhilePasscodeLocked;
-(void)setDisableAssistantWhilePasscodeLocked:(BOOL)arg1 ;
-(BOOL)shouldShowReadyForLanguageCode:(id)arg1 ;
-(void)didShowReadyForLanguageCode:(id)arg1 ;
-(void)setShouldShowReadyForLanguageCode:(id)arg1 ;
-(void)synchronizeVoiceServicesLanguageCode;
-(id)valueForSessionContextPreferenceKey:(id)arg1 ;
-(void)setValue:(id)arg1 forSessionContextKey:(id)arg2 ;
-(id)languagesMissingBirthCertificates;
-(void)setLanguageCode:(id)arg1 ;
-(BOOL)fileLoggingIsEnabled;
-(void)setFileLoggingIsEnabled:(BOOL)arg1 ;
@end

