/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:55:57 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableArray;

@interface WMListLevelTextMapper : NSObject {

	NSMutableArray* m_tokens;
	int m_format;
	unsigned m_initNumber;

}
-(void)dealloc;
-(id)initWithText:(id)arg1 ;
-(unsigned)tokenCount;
-(id)initWithText:(id)arg1 format:(int)arg2 initNumber:(int)arg3 ;
-(id)initWithText:(id)arg1 format:(int)arg2 ;
-(id)listLevelTextforOutline:(id)arg1 ;
-(id)token:(unsigned)arg1 ;
@end

