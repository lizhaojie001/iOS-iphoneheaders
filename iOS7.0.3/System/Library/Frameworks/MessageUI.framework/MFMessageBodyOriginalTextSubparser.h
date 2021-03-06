/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:52:57 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/MessageUI.framework/MessageUI
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <MessageUI/MFMessageBodySubparser.h>

@protocol MFMessageBodyElement_Private;
@class NSMutableArray;

@interface MFMessageBodyOriginalTextSubparser : MFMessageBodySubparser {

	NSMutableArray* _lastTextElements;
	<MFMessageBodyElement_Private>* _lastNonWhitespaceTextElement;
	/*^block*/ id _foundTextBlock;
	/*^block*/ id _foundWhitespaceBlock;
	BOOL _foundText;
	BOOL _foundForwardSeparator;

}
-(void)copyBlocks;
-(void)setFoundTextBlock:(/*^block*/ id)arg1 ;
-(void)messageBodyParser:(id)arg1 foundMessageBodyElement:(id)arg2 ;
-(void)messageBodyParserDidFinishParsing:(id)arg1 ;
-(void)_consumeTextElement:(id)arg1 isAttribution:(BOOL)arg2 ;
-(void)_consumeAnyLastTextElementAsAttribution:(BOOL)arg1 ;
-(void)setFoundWhitespaceBlock:(/*^block*/ id)arg1 ;
-(void)dealloc;
@end

