/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:24:11 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class OADParagraphProperties, NSMutableArray, OADCharacterProperties;

@interface OADParagraph : NSObject {

	OADParagraphProperties* mProperties;
	NSMutableArray* mTextRuns;
	OADCharacterProperties* mParagraphEndCharacterProperties;

}
-(id)plainText;
-(id)addSlideNumberField;
-(id)findFirstTextRunOfClass:(Class)arg1 ;
-(void)dealloc;
-(id)init;
-(bool)isEmpty;
-(id)properties;
-(void)setProperties:(id)arg1 ;
-(unsigned long long)textRunCount;
-(id)textRunAtIndex:(unsigned long long)arg1 ;
-(id)paragraphEndCharacterProperties;
-(void)setParentTextListStyle:(id)arg1 ;
-(id)addRegularTextRun;
-(void)removeUnnecessaryOverrides;
-(void)removeAllTextRuns;
-(id)addTextLineBreak;
-(id)addGenericTextField;
-(id)addDateTimeField;
-(id)addFooterField;
-(void)setParagraphEndCharacterProperties:(id)arg1 ;
-(bool)hasBulletCharacterProperties;
-(id)bulletCharacterProperties;
-(void)applyProperties:(id)arg1 ;
@end

