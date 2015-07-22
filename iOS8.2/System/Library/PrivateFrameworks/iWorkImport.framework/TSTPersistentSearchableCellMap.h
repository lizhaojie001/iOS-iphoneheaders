/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:27:18 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSTPersistentCellMap.h>
#import <iWorkImport/TSTSearchableCellMap.h>

@class NSMutableDictionary, NSString;

@interface TSTPersistentSearchableCellMap : TSTPersistentCellMap <TSTSearchableCellMap> {

	NSMutableDictionary* mCellIDToIndexMap;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) char appliesToHidden; 
-(void)addCell:(id)arg1 andCellID:(SCD_Struct_TS271)arg2 ;
-(id)initWithArchive:(const CellMapArchive*)arg1 unarchiver:(id)arg2 owner:(id)arg3 ;
-(id)findCellFromCellMap:(SCD_Struct_TS271)arg1 ;
-(void)popLastCell;
-(id)initWithOwner:(id)arg1 andCapacity:(unsigned)arg2 ;
-(void)dealloc;
@end
