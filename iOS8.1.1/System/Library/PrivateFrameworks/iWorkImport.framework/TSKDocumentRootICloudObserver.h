/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:35:38 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSOperationQueue;

@interface TSKDocumentRootICloudObserver : NSObject {

	long long _identifier;
	NSOperationQueue* _operationQueue;
	/*^block*/id _block;
	long long _identifer;

}

@property (nonatomic,readonly) long long identifer;              //@synthesize identifer=_identifer - In the implementation block
-(void)invokeWithDocumentRoot:(id)arg1 ;
-(id)initWithBlock:(/*^block*/id)arg1 ;
-(void)dealloc;
-(long long)identifer;
@end

