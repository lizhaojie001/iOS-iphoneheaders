/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:52:21 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <Foundation/Foundation-Structs.h>
#import <CoreFoundation/NSCopying.h>
#import <CoreFoundation/NSCoding.h>

@class NSString;

@interface NSRegularExpression : NSObject <NSCopying, NSCoding> {

	NSString* _pattern;
	unsigned _options;
	void* _internal;
	id _reserved1;
	int _checkout;
	int _reserved2;

}

@property (readonly) NSString * pattern; 
@property (readonly) unsigned options; 
@property (readonly) unsigned numberOfCaptureGroups; 
+(id)escapedPatternForString:(id)arg1 ;
+(id)escapedTemplateForString:(id)arg1 ;
+(void)initialize;
+(id)regularExpressionWithPattern:(id)arg1 options:(unsigned)arg2 error:(id*)arg3 ;
-(NSRange)rangeOfFirstMatchInString:(id)arg1 options:(unsigned)arg2 range:(NSRange)arg3 ;
-(id)stringByReplacingMatchesInString:(id)arg1 options:(unsigned)arg2 range:(NSRange)arg3 withTemplate:(id)arg4 ;
-(unsigned)numberOfCaptureGroups;
-(void)enumerateMatchesInString:(id)arg1 options:(unsigned)arg2 range:(NSRange)arg3 usingBlock:(/*^block*/ id)arg4 ;
-(id)matchesInString:(id)arg1 options:(unsigned)arg2 range:(NSRange)arg3 ;
-(id)replacementStringForResult:(id)arg1 inString:(id)arg2 offset:(int)arg3 template:(id)arg4 ;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)copyWithZone:(NSZoneRef)arg1 ;
-(unsigned)options;
-(unsigned)replaceMatchesInString:(id)arg1 options:(unsigned)arg2 range:(NSRange)arg3 withTemplate:(id)arg4 ;
-(id)firstMatchInString:(id)arg1 options:(unsigned)arg2 range:(NSRange)arg3 ;
-(unsigned)numberOfMatchesInString:(id)arg1 options:(unsigned)arg2 range:(NSRange)arg3 ;
-(id)initWithPattern:(id)arg1 options:(unsigned)arg2 error:(id*)arg3 ;
-(void)finalize;
-(id)pattern;
@end

