/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:26:37 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject;

@interface VKMapSnapshotServer : NSObject {

	char _softwareRendering;
	NSObject*<OS_dispatch_queue> _homeQueue;

}
-(void)dealloc;
-(void)renderRequest:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_renderRequest:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)initWithSoftwareRendering:(char)arg1 homeQueue:(id)arg2 ;
@end

