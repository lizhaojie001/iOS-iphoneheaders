/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:21:35 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/MultipeerConnectivity.framework/MultipeerConnectivity
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol MCSessionPrivateDelegate <NSObject>
@optional
-(void)session:(id)arg1 didReceiveCertificate:(id)arg2 fromPeer:(id)arg3 certificateHandler:(/*^block*/ id)arg4 propagate:(bool*)arg5;

@required
-(void)session:(id)arg1 didFinishReceivingResourceWithName:(id)arg2 fromPeer:(id)arg3 atURL:(id)arg4 withError:(id)arg5 propagate:(bool*)arg6;
-(void)session:(id)arg1 peer:(id)arg2 didChangeState:(long long)arg3 propagate:(bool*)arg4;
-(void)session:(id)arg1 didReceiveData:(id)arg2 fromPeer:(id)arg3 propagate:(bool*)arg4;
-(void)session:(id)arg1 didStartReceivingResourceWithName:(id)arg2 fromPeer:(id)arg3 withProgress:(id)arg4 propagate:(bool*)arg5;
-(void)session:(id)arg1 didReceiveStream:(id)arg2 withName:(id)arg3 fromPeer:(id)arg4 propagate:(bool*)arg5;
@end

