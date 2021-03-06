/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 2:29:06 AM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/PassKit.framework/passd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Foundation/NSFilePresenter.h>

@protocol OS_dispatch_queue, PDUbiquityManagerDelegate;
@class NSURL, NSOperationQueue, NSObject;

@interface PDUbiquityManager : NSObject <NSFilePresenter> {

	NSObject<OS_dispatch_queue>* _queue;
	NSOperationQueue* _operationQueue;
	<PDUbiquityManagerDelegate>* _delegate;
	NSURL* _ubiquitousURL;

}

@property (assign,nonatomic) <PDUbiquityManagerDelegate> * delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (retain) NSURL * ubiquitousURL;                                         //@synthesize ubiquitousURL=_ubiquitousURL - In the implementation block
@property (readonly) NSURL * presentedItemURL; 
@property (readonly) NSOperationQueue * presentedItemOperationQueue; 
@property (readonly) NSURL * primaryPresentedItemURL; 
+(void)removeLastEventIdentifier;
-(id)_queue_cardUniqueIDs;
-(void)updateUbiquitousPass:(id)arg1 ;
-(void)updateUbiquitousCatalog:(id)arg1 ;
-(void)removeUbiquitousPassWithUniqueID:(id)arg1 ;
-(void)_handleUbiquityIdentityChanged:(id)arg1 ;
-(void)setUbiquitousURL:(id)arg1 ;
-(void)_queue_startAlreadyUbiquitousWithPassbookSyncEnabled:(BOOL)arg1 ;
-(void)_queue_startNotYetUbiquitousWithPassbookSyncEnabled:(BOOL)arg1 destinationURL:(id)arg2 ;
-(id)ubiquitousURL;
-(id)_urlForCardWithUniqueID:(id)arg1 relativeToDirectoryURL:(id)arg2 ;
-(id)_urlForCatalogRelativeToDirectoryURL:(id)arg1 ;
-(void)_queue_mergeUbiquityWithLocalStore;
-(void)_queue_copyPassesFromUbiquityToLocalStore:(id)arg1 ;
-(void)_queue_copyPassesFromLocalStoreToUbiquity:(id)arg1 ;
-(void)_queue_comparePassesAndTakeNewerVersion:(id)arg1 ;
-(void)_queue_compareCatalogsAndTakeNewerVersion;
-(void)_attemptCoordinatedReadWithoutChangesAtURL:(id)arg1 withAccessor:(/*^block*/ id)arg2 ;
-(void)_queue_copyCatalogToUbiquity:(id)arg1 ;
-(void)_queue_copyCatalogToLocalStore:(id)arg1 ;
-(void)_queue_handlePassUpdate:(id)arg1 ;
-(void)_queue_handleCatalogUpdate;
-(unsigned long long)lastPresentedItemEventIdentifier;
-(void)setLastPresentedItemEventIdentifier:(unsigned long long)arg1 ;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(id)delegate;
-(void)start;
-(void)presentedItemDidMoveToURL:(id)arg1 ;
-(void)presentedItemDidGainVersion:(id)arg1 ;
-(void)accommodatePresentedSubitemDeletionAtURL:(id)arg1 completionHandler:(/*^block*/ id)arg2 ;
-(void)presentedSubitemDidAppearAtURL:(id)arg1 ;
-(void)presentedSubitemDidChangeAtURL:(id)arg1 ;
-(id)presentedItemURL;
-(id)presentedItemOperationQueue;
-(void)restart;
-(id)initWithDelegate:(id)arg1 ;
@end

