/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:26:46 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <iWorkImport/iWorkImport-Structs.h>
@class TSTTableModel, TSTCellRegion, TSTTableDataStore, TSTTableTileRowInfo, TSTTableTile, TSTCell;

@interface TSTCellIterator : NSObject {

	TSTTableModel* mTableModel;
	TSTCellRegion* mModelRegion;
	NSObject* mModelRegionIterator;
	TSTTableDataStore* mTableDataStore;
	SCD_Struct_TS267 mPreviousCellID;
	TSTTableTileRowInfo* mCurRow;
	TSTTableTile* mCurTile;
	unsigned short mCurRowID;
	NSRange mCurTileRange;
	TSTCell* mCell;
	bool mSkipStyleOnlyCells;
	bool mSkipCommentStorageOnlyCells;
	bool mDontExpandCellRefs;
	int mRowWalkDirection;
	bool mDontCheckSize;
	bool mDontReturnMergeRegions;
	bool mReturnHiddenCells;
	bool mDontInflateFormulas;
	bool mReturnEmptyCells;

}

@property (readonly) bool dontExpandCellRefs; 
@property (readonly) int rowWalkDirection; 
-(id)initWithTableModel:(id)arg1 flags:(unsigned long long)arg2 ;
-(id)initWithTableModel:(id)arg1 region:(id)arg2 flags:(unsigned long long)arg3 ;
-(bool)getNext:(SCD_Struct_TS497*)arg1 ;
-(id)initWithTableModel:(id)arg1 range:(SCD_Struct_TS494)arg2 ;
-(id)initWithTableModel:(id)arg1 ;
-(id)initWithTableModel:(id)arg1 range:(SCD_Struct_TS494)arg2 flags:(unsigned long long)arg3 ;
-(void)p_resetIterData:(SCD_Struct_TS497*)arg1 ;
-(bool)p_getData:(SCD_Struct_TS497*)arg1 forCellID:(SCD_Struct_TS267)arg2 ;
-(id)initWithTableModel:(id)arg1 region:(id)arg2 ;
-(bool)dontExpandCellRefs;
-(int)rowWalkDirection;
-(void)terminate;
-(void)dealloc;
-(id).cxx_construct;
@end
