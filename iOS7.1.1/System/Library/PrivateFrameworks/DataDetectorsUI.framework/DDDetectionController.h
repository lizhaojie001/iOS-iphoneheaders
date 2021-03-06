/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:23:19 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/DataDetectorsUI.framework/DataDetectorsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <DataDetectorsUI/DataDetectorsUI-Structs.h>
#import <UIKit/UIActionSheetDelegate.h>

@protocol OS_dispatch_queue, DDDetectionControllerDelegate;
@class NSOperationQueue, NSObject, NSMapTable, DDActionController;

@interface DDDetectionController : NSObject <UIActionSheetDelegate> {

	NSOperationQueue* _fullScannerQueue;
	NSOperationQueue* _urlScannerQueue;
	NSObject<OS_dispatch_queue>* _protectQueue;
	NSMapTable* _containerToOperationsTable;
	NSMapTable* _containerToResultsTable;
	NSMapTable* _containerToContextsTable;
	DDActionController* _actionController;
	NSObject<DDDetectionControllerDelegate>* _delegate;

}

@property (assign) NSObject<DDDetectionControllerDelegate> * delegate;              //@synthesize delegate=_delegate - In the implementation block
+(id)sharedController;
+(id)tapAndHoldSchemes;
-(bool)shouldImmediatelyShowActionSheetForTapAtIndex:(unsigned long long)arg1 ofStorage:(id)arg2 ;
-(id)actionsAtIndex:(unsigned long long)arg1 ofStorage:(id)arg2 context:(id)arg3 ;
-(id)defaultActionAtIndex:(unsigned long long)arg1 ofStorage:(id)arg2 context:(id)arg3 ;
-(void)resetResultsForTextView:(id)arg1 ;
-(id)_subResultAtIndex:(unsigned long long)arg1 ofResult:(id)arg2 ;
-(id)_resultForLinkAtIndex:(unsigned long long)arg1 inTextStorage:(id)arg2 subResult:(id*)arg3 url:(id*)arg4 ;
-(id)_applyBlock:(/*^block*/ id)arg1 withResultsAtIndex:(unsigned long long)arg2 ofStorage:(id)arg3 context:(id)arg4 ;
-(DDResultRef)resultForLinkAtIndex:(unsigned long long)arg1 inTextStorage:(id)arg2 ;
-(void)startURLificationForFrame:(id)arg1 detectedTypes:(unsigned long long)arg2 options:(int)arg3 ;
-(void)setResults:(CFArrayRef)arg1 forFrame:(id)arg2 ;
-(void)setContext:(id)arg1 forFrame:(id)arg2 ;
-(void)frameWillBeRemoved:(id)arg1 ;
-(void)cancelURLificationForFrame:(id)arg1 ;
-(void)startURLificationForFrame:(id)arg1 detectedTypes:(unsigned long long)arg2 ;
-(void)resetResultsForFrame:(id)arg1 ;
-(id)actionsForDOMNode:(id)arg1 forFrame:(id)arg2 ;
-(bool)shouldImmediatelyShowActionSheetForURL:(id)arg1 forFrame:(id)arg2 ;
-(id)defaultActionForDOMNode:(id)arg1 forFrame:(id)arg2 ;
-(DDResultRef)_resultForAnchor:(id)arg1 forFrame:(id)arg2 context:(id*)arg3 ;
-(DDResultRef)resultForNode:(id)arg1 url:(id)arg2 frame:(id)arg3 contextRef:(id*)arg4 ;
-(id)actionsForAnchor:(id)arg1 url:(id)arg2 forFrame:(id)arg3 ;
-(id)defaultActionForAnchor:(id)arg1 url:(id)arg2 forFrame:(id)arg3 ;
-(DDResultRef)resultForDOMNode:(id)arg1 forFrame:(id)arg2 ;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(id)init;
-(id)delegate;
-(void)performAction:(id)arg1 inView:(id)arg2 withPopoverController:(id)arg3 interactionDelegate:(id)arg4 ;
-(void)cancelURLificationForContainer:(id)arg1 ;
-(void)startURLificationForContainer:(id)arg1 detectedTypes:(unsigned long long)arg2 ;
-(void)resetResultsForContainer:(id)arg1 ;
-(id)_newOperationForContainer:(id)arg1 ;
-(void)_startCoalescedURLification:(id)arg1 ;
-(void)startURLificationForContainer:(id)arg1 detectedTypes:(unsigned long long)arg2 options:(int)arg3 ;
-(void)_doURLification:(id)arg1 ;
-(_DDResult*)_resultForIdentifier:(id)arg1 forContainer:(id)arg2 context:(id*)arg3 ;
-(void)setResults:(CFArrayRef)arg1 forContainer:(id)arg2 ;
-(void)setContext:(id)arg1 forContainer:(id)arg2 ;
-(void)_commonResetResultsForContainer:(id)arg1 ;
-(void)containerWillBeRemoved:(id)arg1 ;
-(_DDResult*)_resultForURL:(id)arg1 forContainer:(id)arg2 context:(id*)arg3 ;
-(bool)_shouldImmediatelyShowActionSheetForCoreResult:(_DDResult*)arg1 ;
-(bool)_shouldImmediatelyShowActionSheetForURL:(id)arg1 ;
-(void)_enqueueOperation:(id)arg1 ;
@end

