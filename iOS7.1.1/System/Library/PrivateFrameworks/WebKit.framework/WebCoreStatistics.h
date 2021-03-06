/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:25:59 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/WebKit.framework/WebKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface WebCoreStatistics : NSObject
+(int)cachedPageCount;
+(id)statistics;
+(id)javaScriptRootObjectTypeCounts;
+(unsigned long long)javaScriptProtectedGlobalObjectsCount;
+(id)javaScriptProtectedObjectTypeCounts;
+(unsigned long long)javaScriptObjectsCount;
+(unsigned long long)javaScriptGlobalObjectsCount;
+(unsigned long long)javaScriptProtectedObjectsCount;
+(id)javaScriptObjectTypeCounts;
+(void)garbageCollectJavaScriptObjects;
+(void)garbageCollectJavaScriptObjectsOnAlternateThreadForDebugging:(bool)arg1 ;
+(void)setJavaScriptGarbageCollectorTimerEnabled:(bool)arg1 ;
+(unsigned long long)iconPageURLMappingCount;
+(unsigned long long)iconRetainedPageURLCount;
+(unsigned long long)iconRecordCount;
+(unsigned long long)iconsWithDataCount;
+(unsigned long long)cachedFontDataCount;
+(unsigned long long)cachedFontDataInactiveCount;
+(void)purgeInactiveFontData;
+(unsigned long long)glyphPageCount;
+(bool)shouldPrintExceptions;
+(void)setShouldPrintExceptions:(bool)arg1 ;
+(void)emptyCache;
+(void)setCacheDisabled:(bool)arg1 ;
+(void)startIgnoringWebCoreNodeLeaks;
+(void)stopIgnoringWebCoreNodeLeaks;
+(id)memoryStatistics;
+(void)returnFreeMemoryToSystem;
+(int)cachedFrameCount;
+(int)autoreleasedPageCount;
+(unsigned long long)javaScriptNoGCAllowedObjectsCount;
+(unsigned long long)javaScriptReferencedObjectsCount;
+(id)javaScriptRootObjectClasses;
+(unsigned long long)javaScriptInterpretersCount;
@end

