/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:25:40 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/Stocks.framework/Stocks
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NPSDomainAccessor;

@interface StocksWatchPreferences : NSObject {

	NPSDomainAccessor* _watchDefaults;

}
+(id)sharedPreferences;
-(id)init;
-(id)defaultStockSymbol;
-(void)setDefaultStockSymbol:(id)arg1 ;
-(long long)complicationDisplayMode;
-(void)setComplicationDisplayMode:(long long)arg1 ;
@end

