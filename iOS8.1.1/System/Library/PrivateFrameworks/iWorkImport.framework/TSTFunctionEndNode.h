/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:35:40 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSTExpressionNode.h>

@class TSTFunctionNode;

@interface TSTFunctionEndNode : TSTExpressionNode {

	TSTFunctionNode* mFunctionNode;

}

@property (assign,nonatomic) TSTFunctionNode * functionNode; 
-(id)initFromUnarchiver:(id)arg1 ;
-(void)saveToArchiver:(id)arg1 ;
-(void)saveToArchive:(FunctionEndNodeArchive*)arg1 archiver:(id)arg2 ;
-(id)initFromArchive:(const FunctionEndNodeArchive*)arg1 unarchiver:(id)arg2 ;
-(id)initWithContext:(id)arg1 functionNode:(id)arg2 firstIndex:(unsigned long long)arg3 lastIndex:(unsigned long long)arg4 ;
-(TSTFunctionNode *)functionNode;
-(void)buildASTNodeArray:(TSCEASTNodeArray*)arg1 hostCell:(SCD_Struct_TS272)arg2 ;
-(id)initWithContext:(id)arg1 children:(id)arg2 firstIndex:(unsigned long long)arg3 lastIndex:(unsigned long long)arg4 ;
-(void)insertFormulaText:(id)arg1 includeWhitespace:(BOOL)arg2 ;
-(id)exportString;
-(void)setFunctionNode:(TSTFunctionNode *)arg1 ;
-(void)dealloc;
-(id)string;
-(int)tokenType;
@end

