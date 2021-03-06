/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:33:16 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSArray, NSProgress;

@interface PLCloudScenario : NSObject {

	NSArray* _operations;
	NSProgress* _progress;
	unsigned long long _priority;

}

@property (nonatomic,retain) NSArray * operations;                     //@synthesize operations=_operations - In the implementation block
@property (nonatomic,retain) NSProgress * progress;                    //@synthesize progress=_progress - In the implementation block
@property (assign,nonatomic) unsigned long long priority;              //@synthesize priority=_priority - In the implementation block
-(void)dealloc;
-(void)setProgress:(NSProgress *)arg1 ;
-(void)setPriority:(unsigned long long)arg1 ;
-(NSProgress *)progress;
-(unsigned long long)priority;
-(void)setOperations:(NSArray *)arg1 ;
-(NSArray *)operations;
-(void)requestCancel;
@end

