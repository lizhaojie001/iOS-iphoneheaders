/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:18:51 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /usr/libexec/backboardd
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


@class BKSBasicServerClient, NSSet;

@interface BKApplicationStateServerClient : NSObject {

	BKSBasicServerClient* _connectionWrapper;
	NSSet* _interestedBundleIDs;
	unsigned _states;
	unsigned _interestedStates;

}

@property (nonatomic,readonly) NSObject<OS_xpc_object> * connection; 
@property (nonatomic,copy) NSSet * interestedBundleIDs;                             //@synthesize interestedBundleIDs=_interestedBundleIDs - In the implementation block
@property (assign,nonatomic) unsigned interestedStates;                             //@synthesize interestedStates=_interestedStates - In the implementation block
@property (nonatomic,retain) BKSBasicServerClient * connectionWrapper;              //@synthesize connectionWrapper=_connectionWrapper - In the implementation block
+(id)clientWithConnection:(id)arg1 ;
-(BOOL)interestedInApplication:(id)arg1 changeFromState:(unsigned)arg2 toState:(unsigned)arg3 ;
-(void)setConnectionWrapper:(id)arg1 ;
-(id)connectionWrapper;
-(void)dealloc;
-(id)description;
-(void)invalidate;
-(id)connection;
-(id)initWithConnection:(id)arg1 ;
-(void)setInterestedBundleIDs:(id)arg1 ;
-(void)setInterestedStates:(unsigned)arg1 ;
-(id)interestedBundleIDs;
-(unsigned)interestedStates;
@end

