/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:21:33 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/MessageUI.framework/MessageUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString, NSMutableDictionary;

@interface MFFontMetricCache : NSObject {

	NSString* _preferredSizeValidationKey;
	NSMutableDictionary* _metricCacheDictionary;

}
+(id)sharedFontMetricCache;
-(id)cachedFont:(/*^block*/ id)arg1 forKey:(id)arg2 ;
-(double)cachedFloat:(/*^block*/ id)arg1 forKey:(id)arg2 ;
-(bool)ensureCacheIsValid;
-(void)_didReceivePreferredFontChangedNotification:(id)arg1 ;
-(void)_invalidateCache;
-(void)dealloc;
-(id)init;
@end
