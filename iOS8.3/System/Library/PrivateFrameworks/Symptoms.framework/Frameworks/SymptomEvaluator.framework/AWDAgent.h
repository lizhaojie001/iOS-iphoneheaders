/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 3:44:12 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, AWDServerConnection;

@interface AWDAgent : NSObject {

	NSObject*<OS_dispatch_queue> queue;
	AWDServerConnection* conn;

}
-(id)initWithQueue:(id)arg1 ;
-(void)_handleQuery:(unsigned long)arg1 ;
@end
