/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:26:09 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iTunesStore/ISInvocationRecorder.h>

@class Protocol;

@interface SUResponderChainInvocationRecorder : ISInvocationRecorder {

	Protocol* _protocol;

}
-(id)initWithTarget:(id)arg1 protocol:(id)arg2 ;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(void)invokeInvocation:(id)arg1 ;
-(id)_targetForSelector:(SEL)arg1 sender:(id)arg2 ;
-(id)adjustedTargetForSelector:(SEL)arg1 ;
@end
