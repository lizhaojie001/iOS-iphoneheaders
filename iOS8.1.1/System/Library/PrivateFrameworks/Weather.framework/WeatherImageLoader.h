/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:34:45 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/Weather.framework/Weather
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class CPBitmapStore;

@interface WeatherImageLoader : NSObject {

	double _scale;
	CPBitmapStore* _store;

}

@property (nonatomic,retain) CPBitmapStore * store;              //@synthesize store=_store - In the implementation block
+(id)sharedImageLoader;
+(id)conditionImageBundle;
+(void)cacheImageIfNecessary:(id)arg1 ;
+(id)conditionImageNameWithConditionIndex:(long long)arg1 ;
+(id)conditionImageNamed:(id)arg1 ;
+(void)preCacheMiniIcons;
+(id)conditionImageWithConditionIndex:(long long)arg1 ;
+(id)cachedImageNamed:(id)arg1 completion:(/*^block*/id)arg2 ;
-(CPBitmapStore *)store;
-(void)setStore:(CPBitmapStore *)arg1 ;
-(void)dealloc;
-(id)init;
-(id)cachedImageForKey:(id)arg1 ;
-(void)setImage:(id)arg1 forKey:(id)arg2 ;
@end

