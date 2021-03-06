/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:18:28 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString, NSArray;

@interface NSMetadataQueryResultGroup : NSObject {

	id _private[9];
	unsigned _private2[1];
	void* _reserved;

}

@property (copy,readonly) NSString * attribute; 
@property (retain,readonly) id value; 
@property (copy,readonly) NSArray * subgroups; 
@property (readonly) unsigned resultCount; 
@property (copy,readonly) NSArray * results; 
-(NSString *)attribute;
-(unsigned)resultCount;
-(id)_init:(id)arg1 attributes:(id)arg2 index:(unsigned)arg3 value:(id)arg4 ;
-(void)_addResult:(unsigned)arg1 ;
-(NSArray *)subgroups;
-(void)_zapResultArray;
-(void)dealloc;
-(id)value;
-(NSArray *)results;
-(id)resultAtIndex:(unsigned)arg1 ;
@end

