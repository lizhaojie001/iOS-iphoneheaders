/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:08:21 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/StoreBookkeeperClient.framework/Support/storebookkeeperd
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


@class NSString;

@interface XPCTransaction : NSObject {

	BOOL _isInTransaction;
	NSString* _identifier;

}

@property (readonly) NSString * identifier;              //@synthesize identifier=_identifier - In the implementation block
-(void)dealloc;
-(id)description;
-(id)identifier;
-(void)close;
-(id)initWithIdentifier:(id)arg1 ;
-(void).cxx_destruct;
-(void)open;
@end

