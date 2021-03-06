/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 5:51:29 AM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/Support/itunesstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableDictionary, NSDictionary;

@interface ErrorHandlerSession : NSObject {

	long long _sessionID;
	NSMutableDictionary* _sessionProperties;

}

@property (nonatomic,readonly) long long sessionIdentifier;               //@synthesize sessionID=_sessionID - In the implementation block
@property (nonatomic,copy) NSDictionary * sessionProperties;              //@synthesize sessionProperties=_sessionProperties - In the implementation block
-(id)sessionProperties;
-(void)setValue:(id)arg1 forSessionProperty:(id)arg2 ;
-(id)valueForSessionProperty:(id)arg1 ;
-(long long)sessionIdentifier;
-(void)setSessionProperties:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned)hash;
@end

