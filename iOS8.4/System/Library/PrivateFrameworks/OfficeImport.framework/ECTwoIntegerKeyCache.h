/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:24:18 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class OITSUIntegerKeyDictionary;

@interface ECTwoIntegerKeyCache : NSObject {

	OITSUIntegerKeyDictionary* mCache;
	BOOL _assertForCollisions;

}

@property (assign,nonatomic) BOOL assertForCollisions;              //@synthesize assertForCollisions=_assertForCollisions - In the implementation block
-(void)dealloc;
-(id)init;
-(id)objectForKey1:(long long)arg1 key2:(long long)arg2 ;
-(void)setObject:(id)arg1 forKey1:(long long)arg2 key2:(long long)arg3 ;
-(BOOL)assertForCollisions;
-(void)setAssertForCollisions:(BOOL)arg1 ;
@end
