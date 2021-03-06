/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 1:50:40 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/GameKitServices.framework/Frameworks/AVConference.framework/AVConference
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <AVConference/AVConference-Structs.h>
@interface VCServerBag : NSObject {

	opaque_pthread_cond_t isLoadedCondition;
	opaque_pthread_mutex_t isLoadedMutex;
	char isLoaded;
	id observer;

}
+(id)sharedInstance;
+(void)pullStoreBagKeys;
+(char)verifyRequiredKeys:(id*)arg1 ;
+(char)verifyRequiredVoiceChatKeys:(id*)arg1 ;
+(char)verifyRequiredKeys:(id)arg1 withError:(id*)arg2 ;
+(void)checkKeysAgainstHardcodedPrefs:(id)arg1 ;
+(void)retrieveBag;
-(id)init;
-(void)waitForBagLoad;
@end

