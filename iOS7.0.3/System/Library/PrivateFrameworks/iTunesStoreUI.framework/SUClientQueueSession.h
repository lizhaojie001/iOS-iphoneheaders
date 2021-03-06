/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:58:49 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


@class NSArray, SSDownloadManagerOptions;

@interface SUClientQueueSession : NSObject {

	int _count;
	NSArray* _downloadKinds;
	SSDownloadManagerOptions* _managerOptions;
	id _queue;

}

@property (assign,nonatomic) int count;                                            //@synthesize count=_count - In the implementation block
@property (nonatomic,copy) NSArray * downloadKinds;                                //@synthesize downloadKinds=_downloadKinds - In the implementation block
@property (nonatomic,copy) SSDownloadManagerOptions * managerOptions;              //@synthesize managerOptions=_managerOptions - In the implementation block
@property (nonatomic,retain) id queue;                                             //@synthesize queue=_queue - In the implementation block
-(id)initWithQueue:(id)arg1 ;
-(void)setDownloadKinds:(id)arg1 ;
-(void)dealloc;
-(int)count;
-(void)setCount:(int)arg1 ;
-(id)queue;
-(void)setQueue:(id)arg1 ;
-(id)managerOptions;
-(id)downloadKinds;
-(void)setManagerOptions:(id)arg1 ;
@end

