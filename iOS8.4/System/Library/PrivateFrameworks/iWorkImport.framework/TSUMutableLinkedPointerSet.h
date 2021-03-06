/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:27:18 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/NSFastEnumeration.h>

@class TSULinkedPointerSetEntry;

@interface TSUMutableLinkedPointerSet : NSObject <NSFastEnumeration> {

	CFDictionaryRef mDictionary;
	TSULinkedPointerSetEntry* mHead;
	TSULinkedPointerSetEntry* mTail;

}
-(void)encodeToReferenceMessage:(RepeatedPtrField<TSP::Reference>*)arg1 archiver:(id)arg2 ;
-(void)encodeToOwnedReferenceMessage:(RepeatedPtrField<TSP::Reference>*)arg1 archiver:(id)arg2 ;
-(unsigned long long)countByEnumeratingWithState:(SCD_Struct_TS25*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3 ;
-(void)dealloc;
-(void)removeObject:(id)arg1 ;
-(unsigned long long)count;
-(id)init;
-(void)addObject:(id)arg1 ;
-(void)removeAllObjects;
-(id)firstObject;
-(BOOL)isEqual:(id)arg1 ;
-(id)array;
-(BOOL)containsObject:(id)arg1 ;
-(id)reverseObjectEnumerator;
-(id)objectEnumerator;
-(id)objectEnumeratorAfterObject:(id)arg1 ;
-(BOOL)hasObjects;
-(void)insertFirstObject:(id)arg1 ;
@end

