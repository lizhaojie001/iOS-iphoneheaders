/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, June 24, 2015 at 10:50:33 PM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Foundation/Foundation-Structs.h>
#import <Foundation/NSTextCheckingResult.h>

@class NSString;

@interface NSSubstitutionCheckingResult : NSTextCheckingResult {

	NSRange _range;
	NSString* _replacementString;

}
-(id)resultByAdjustingRangesWithOffset:(int)arg1 ;
-(char)_adjustRangesWithOffset:(int)arg1 ;
-(id)replacementString;
-(id)initWithRange:(NSRange)arg1 replacementString:(id)arg2 ;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(NSRange)range;
@end

