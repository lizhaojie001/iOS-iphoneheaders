/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 12:34:26 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/AirPlayReceiver.framework/AirPlayReceiver
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol AirPlayControllerAsync
@required
-(void)performCommand:(id)arg1 qualifier:(id)arg2 params:(id)arg3 completion:(/*^block*/id)arg4;
-(void)postEvent:(id)arg1 qualifier:(id)arg2 params:(id)arg3 completion:(/*^block*/id)arg4;
-(void)getProperty:(id)arg1 qualifier:(id)arg2 completion:(/*^block*/id)arg3;
-(void)setProperty:(id)arg1 qualifier:(id)arg2 value:(id)arg3 completion:(/*^block*/id)arg4;

@end

