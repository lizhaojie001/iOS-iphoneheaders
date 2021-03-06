/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:54:55 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


@protocol DATask <NSObject>
@optional
-(void)startModal;
-(void)requestCancelTaskWithReason:(int)arg1;
-(BOOL)shouldHoldPowerAssertion;
-(void)setTaskManager:(id)arg1;
-(BOOL)shouldForceNetworking;

@required
-(void)finishWithError:(id)arg1;
-(void)performTask;
-(void)cancelTaskWithReason:(int)arg1 underlyingError:(id)arg2;
@end

