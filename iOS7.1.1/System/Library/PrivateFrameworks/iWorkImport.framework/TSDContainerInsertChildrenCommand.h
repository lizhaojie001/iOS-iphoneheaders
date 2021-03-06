/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:26:44 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/TSKCommand.h>

@protocol TSDMutableContainerInfo;
@class TSPObject, NSArray;

@interface TSDContainerInsertChildrenCommand : TSKCommand {

	TSPObject<TSDMutableContainerInfo>* mContainer;
	NSArray* mChildren;
	unsigned long long mIndex;

}

@property (nonatomic,readonly) NSArray * children; 
@property (nonatomic,readonly) TSPObject<TSDMutableContainerInfo> * container; 
-(id)initFromUnarchiver:(id)arg1 ;
-(void)saveToArchiver:(id)arg1 ;
-(bool)canCoalesceWithCommand:(id)arg1 ;
-(void)p_do;
-(id)initWithContainer:(id)arg1 insertingChildren:(id)arg2 atIndex:(unsigned long long)arg3 objectContext:(id)arg4 ;
-(void)dealloc;
-(void)undo;
-(void)redo;
-(void)commit;
-(id)container;
-(bool)process;
-(id)actionString;
-(id)children;
@end

