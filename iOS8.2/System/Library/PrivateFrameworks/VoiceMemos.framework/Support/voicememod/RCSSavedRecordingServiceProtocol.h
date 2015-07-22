/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:26:44 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/VoiceMemos.framework/Support/voicememod
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol RCSSavedRecordingServiceProtocol <NSObject>
@required
-(oneway void)disableOrphanedFragmentCleanupForCompositionAVURL:(id)arg1 completionBlock:(/*^block*/id)arg2;
-(oneway void)enableOrphanedFragmentCleanupForCompositionAVURL:(id)arg1;
-(oneway void)endAccessSessionWithToken:(id)arg1;
-(oneway void)prepareToCaptureToCompositionAVURL:(id)arg1 accessRequestHandler:(/*^block*/id)arg2;
-(oneway void)prepareToPreviewCompositionAVURL:(id)arg1 accessRequestHandler:(/*^block*/id)arg2;
-(oneway void)prepareToExportCompositionAVURL:(id)arg1 cacheWaveform:(char)arg2 accessRequestHandler:(/*^block*/id)arg3;
-(oneway void)prepareToTrimCompositionAVURL:(id)arg1 accessRequestHandler:(/*^block*/id)arg2;
-(oneway void)disableOrphanHandlingWithCompletionBlock:(/*^block*/id)arg1;
-(oneway void)enableOrphanHandlingWithCompletionBlock:(/*^block*/id)arg1;
-(oneway void)fetchExportingCompositionAVURLs:(/*^block*/id)arg1;

@end
