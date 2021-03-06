/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:29:31 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UITextInputStringTokenizer.h>

@class UITextInputController;

@interface _UITextInputControllerTokenizer : UITextInputStringTokenizer {

	UITextInputController* _textInput;
	CFStringTokenizerRef _tokenizer;
	int _tokenizerType;

}
-(void)dealloc;
-(long long)_indexForTextPosition:(id)arg1 ;
-(BOOL)_isDownstreamForDirection:(long long)arg1 atPosition:(id)arg2 ;
-(NSRange)_getClosestTokenRangeForPosition:(id)arg1 granularity:(long long)arg2 downstream:(BOOL)arg3 ;
-(id)_positionFromPosition:(id)arg1 offset:(unsigned long long)arg2 affinity:(long long)arg3 ;
-(void)invalidateTokenizer;
-(id)initWithTextInputController:(id)arg1 ;
-(long long)_writingDirectionAtPosition:(id)arg1 ;
@end

