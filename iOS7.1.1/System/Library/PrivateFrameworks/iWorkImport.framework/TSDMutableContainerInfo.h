/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:26:39 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol TSDMutableContainerInfo <TSDContainerInfo>
@required
-(void)setChildInfos:(id)arg1;
-(void)addChildInfo:(id)arg1;
-(void)insertChildInfo:(id)arg1 atIndex:(unsigned long long)arg2;
-(void)insertChildInfo:(id)arg1 below:(id)arg2;
-(void)insertChildInfo:(id)arg1 above:(id)arg2;
-(void)moveChildren:(id)arg1 toIndexes:(id)arg2;
-(void)removeChildInfo:(id)arg1;
-(void)replaceChildInfo:(id)arg1 with:(id)arg2;
@end

