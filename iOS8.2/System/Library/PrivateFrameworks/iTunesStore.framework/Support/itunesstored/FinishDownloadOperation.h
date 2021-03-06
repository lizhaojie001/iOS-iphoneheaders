/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:26:57 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/Support/itunesstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iTunesStore/ISOperation.h>
#import <itunesstored/ISOperationDelegate.h>

@class FinishDownloadMemoryEntity, NSString;

@interface FinishDownloadOperation : ISOperation <ISOperationDelegate> {

	FinishDownloadMemoryEntity* _download;
	NSString* _handlerReleasedDownloadPhase;
	NSString* _initialDownloadPhase;
	/*^block*/id _outputBlock;
	int _stopResult;

}

@property (nonatomic,readonly) long long downloadIdentifier; 
@property (nonatomic,copy) NSString * handlerReleasedDownloadPhase; 
@property (nonatomic,copy) NSString * initialDownloadPhase; 
@property (copy) id outputBlock; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)stopWithFinishResult:(int)arg1 ;
-(void)setInitialDownloadPhase:(NSString *)arg1 ;
-(id)initWithDownloadIdentifier:(long long)arg1 databaseSession:(id)arg2 ;
-(void)setHandlerReleasedDownloadPhase:(NSString *)arg1 ;
-(id)_stepOperations;
-(NSString *)handlerReleasedDownloadPhase;
-(NSString *)initialDownloadPhase;
-(id)_downloadSessionPropertiesWithDownloadPhase:(id)arg1 ;
-(void)_sendProgressToDelegate:(id)arg1 ;
-(char)_needsDRMOperationForDownloadKind:(id)arg1 ;
-(long long)downloadIdentifier;
-(void)run;
-(void)setOutputBlock:(id)arg1 ;
-(id)outputBlock;
-(void)operation:(id)arg1 updatedProgress:(id)arg2 ;
@end

