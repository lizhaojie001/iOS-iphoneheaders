/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:26:14 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIFoundation/UIFoundation-Structs.h>
#import <Foundation/NSMutableAttributedString.h>

@class NSAttributeDictionary;

@interface _NSCachedAttributedString : NSMutableAttributedString {

	id _contents;
	NSAttributeDictionary* _baseAttributes;
	long long _length;
	unsigned long long _hashValue;
	SCD_Struct_NS25* _runs;
	long long _numRuns;
	long long _allocedRunsSize;
	long long _numHits;

}
+(void)initialize;
+(id)allocWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)initWithString:(id)arg1 attributes:(id)arg2 ;
-(unsigned long long)length;
-(id)string;
-(BOOL)_tryRetain;
-(BOOL)_isDeallocating;
-(id)initWithString:(id)arg1 ;
-(void)setAttributes:(id)arg1 range:(NSRange)arg2 ;
-(id)initWithAttributedString:(id)arg1 ;
-(id)attributesAtIndex:(unsigned long long)arg1 effectiveRange:(NSRange*)arg2 ;
-(id)attributesAtIndex:(unsigned long long)arg1 longestEffectiveRange:(NSRange*)arg2 inRange:(NSRange)arg3 ;
-(void)cache;
-(oneway void)release;
-(BOOL)_isStringDrawingTextStorage;
-(BOOL)_baselineMode;
-(id)copyCachedInstance;
-(void)finalize;
@end

