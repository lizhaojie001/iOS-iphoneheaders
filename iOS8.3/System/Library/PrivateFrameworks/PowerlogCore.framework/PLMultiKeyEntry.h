/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 3:08:22 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/PowerlogCore.framework/PowerlogCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PowerlogCore/PLEntry.h>

@class NSMutableDictionary;

@interface PLMultiKeyEntry : PLEntry {

	NSMutableDictionary* _multiKeys;

}

@property (retain) NSMutableDictionary * multiKeys;              //@synthesize multiKeys=_multiKeys - In the implementation block
+(void)load;
-(id)init;
-(NSMutableDictionary *)multiKeys;
-(id)keysForSubKey:(id)arg1 ofSubKeyType:(id)arg2 ;
-(id)objectsForSubKey:(id)arg1 ofSubKeyType:(id)arg2 ;
-(void)setMultiKeys:(NSMutableDictionary *)arg1 ;
-(id)serializedForJSON;
-(void)setObject:(id)arg1 forKey:(id)arg2 ;
@end

