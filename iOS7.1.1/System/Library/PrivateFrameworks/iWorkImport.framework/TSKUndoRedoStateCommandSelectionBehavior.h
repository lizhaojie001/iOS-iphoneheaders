/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:26:45 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSKCommandSelectionBehavior.h>

@protocol TSKPersistentUndoRedoState;
@class TSPObject;

@interface TSKUndoRedoStateCommandSelectionBehavior : TSKCommandSelectionBehavior {

	TSPObject<TSKPersistentUndoRedoState>* mPersistentUndoRedoState;

}

@property (nonatomic,readonly) <TSKUndoRedoState> * undoRedoState; 
@property (setter=p_setPersistentUndoRedoState:,nonatomic,retain) <TSKPersistentUndoRedoState> * p_persistentUndoRedoState; 
-(id)initFromUnarchiver:(id)arg1 ;
-(void)saveToArchiver:(id)arg1 ;
-(void)saveToArchive:(UndoRedoStateCommandSelectionBehaviorArchive*)arg1 archiver:(id)arg2 ;
-(void)loadFromArchive:(const UndoRedoStateCommandSelectionBehaviorArchive*)arg1 unarchiver:(id)arg2 ;
-(void)registerSelectionChangesForCommit;
-(void)registerSelectionChangesForUndo;
-(void)registerSelectionChangesForRedo;
-(bool)modifiesUndoRedoState;
-(id)undoRedoState;
-(id)initWithContext:(id)arg1 initialUndoRedoState:(id)arg2 ;
-(id)p_persistentUndoRedoState;
-(void)p_swapUndoRedoStateWithDocument;
-(void)p_setPersistentUndoRedoState:(id)arg1 ;
-(void)dealloc;
-(id)initWithContext:(id)arg1 ;
@end

