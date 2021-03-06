/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:56:17 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <OfficeImport/WDRun.h>

@class WDText, WDCharacterRun, NSDate, NSString;

@interface WDAnnotation : WDRun {

	int mType;
	WDText* mText;
	WDCharacterRun* mReference;
	BOOL mReferencePopertiesFixed;
	NSDate* mDate;
	NSString* mOwner;
	WDAnnotation* mOtherEndOfRangedAnnotation;

}
-(void)dealloc;
-(id)date;
-(id)text;
-(void)setDate:(id)arg1 ;
-(id)reference;
-(int)runType;
-(BOOL)referencePropertiesFixed;
-(void)setReferencePropertiesFixed;
-(id)initWithParagraph:(id)arg1 type:(int)arg2 ;
-(int)annotationType;
-(id)owner;
-(id)otherEndOfRangedAnnotation;
-(void)setOtherEndOfRangedAnnotation:(id)arg1 ;
-(void)setOwner:(id)arg1 ;
@end

