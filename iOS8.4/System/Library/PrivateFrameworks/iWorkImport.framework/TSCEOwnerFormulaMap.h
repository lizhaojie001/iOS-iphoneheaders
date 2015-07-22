/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:27:24 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <iWorkImport/iWorkImport-Structs.h>
@interface TSCEOwnerFormulaMap : NSObject {

	vector<std::__1::pair<TSUColumnRowCoordinate, TSCEFormula>, std::__1::allocator<std::__1::pair<TSUColumnRowCoordinate, TSCEFormula> > >* mFormulas;
	vector<TSUColumnRowCoordinate, std::__1::allocator<TSUColumnRowCoordinate> >* mNonFormulaCells;

}
-(void)saveToArchive:(OwnerFormulaMapArchive*)arg1 archiver:(id)arg2 ;
-(void)addFormula:(TSCEFormula*)arg1 atCellCoordinate:(SCD_Struct_TS288)arg2 ;
-(TSCEFormula*)formulaAtIndex:(unsigned long long)arg1 outCellCoordinate:(SCD_Struct_TS288*)arg2 ;
-(unsigned long long)count;
-(id)initWithArchive:(const OwnerFormulaMapArchive*)arg1 ;
@end
