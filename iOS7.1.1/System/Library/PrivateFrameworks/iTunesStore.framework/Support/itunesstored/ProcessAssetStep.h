/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 5:51:11 AM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/Support/itunesstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class ISOperation;

@interface ProcessAssetStep : NSObject {

	ISOperation* _operation;
	float _progressWeight;

}

@property (nonatomic,retain) ISOperation * operation;              //@synthesize operation=_operation - In the implementation block
@property (assign,nonatomic) float progressWeight;                 //@synthesize progressWeight=_progressWeight - In the implementation block
-(void)setProgressWeight:(float)arg1 ;
-(void)dealloc;
-(id)operation;
-(void)setOperation:(id)arg1 ;
-(float)progressWeight;
@end
