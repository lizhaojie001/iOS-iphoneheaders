/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 1:57:47 AM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableDictionary;

@interface SBApplicationTerminationAssertionManager : NSObject {

	NSMutableDictionary* _assertionsByDisplayId;

}
+(id)sharedInstance;
-(id)terminationAssertionsForDisplayId:(id)arg1 ;
-(id)terminationAssertionsForDisplayId:(id)arg1 withReason:(unsigned char)arg2 ;
-(id)acquireTerminationAssertionForDisplayId:(id)arg1 withReason:(unsigned char)arg2 error:(char*)arg3 ;
-(BOOL)_canAcquireTerminationAssertionForDisplayId:(id)arg1 reason:(unsigned char)arg2 error:(char*)arg3 ;
-(void)_addTerminationAssertion:(id)arg1 ;
-(void)_removeTerminationAssertion:(id)arg1 ;
-(void)dealloc;
-(id)init;
@end

