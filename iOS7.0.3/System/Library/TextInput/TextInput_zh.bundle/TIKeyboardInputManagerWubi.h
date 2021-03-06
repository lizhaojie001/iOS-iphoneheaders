/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:58:55 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/TextInput/TextInput_zh.bundle/TextInput_zh
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <TextInput_zh/TextInput_zh-Structs.h>
#import <TextInput_zh/TIKeyboardInputManagerShapeBased.h>
#import <TextInput_zh/TIKeyboardInputManagerChineseCompletion.h>

@interface TIKeyboardInputManagerWubi : TIKeyboardInputManagerShapeBased <TIKeyboardInputManagerChineseCompletion>
+(Class)wordSearchClass;
+(id)wubiToASCIIMap;
-(void)setInput:(id)arg1 ;
-(void)dealloc;
-(void)setInSplitKeyboardMode:(BOOL)arg1 ;
-(BOOL)acceptInputString:(id)arg1 ;
-(id)keyEventMap;
-(void)notifyUpdateCandidates:(id)arg1 forOperation:(id)arg2 ;
-(BOOL)supportsPairedPunctutationInput;
-(BOOL)isWubi:(id)arg1 ;
-(id)wubiToAscii:(id)arg1 ;
-(void)checkAutocorrectionDictionaries;
-(id)addInput:(id)arg1 flags:(unsigned)arg2 point:(CGPoint)arg3 firstDelete:(unsigned*)arg4 fromVariantKey:(BOOL)arg5 ;
-(BOOL)shouldAddModifierSymbolsToWordCharacters;
-(id)inputsToReject;
@end

