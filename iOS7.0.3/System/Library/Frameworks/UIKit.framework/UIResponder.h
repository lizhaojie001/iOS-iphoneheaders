/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:53:21 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UITextInput_Internal.h>
#import <UIKit/UITextInputAdditions.h>

@class UIView, UITextInputMode, NSString, NSArray, NSUndoManager;

@interface UIResponder : NSObject <UITextInput_Internal, UITextInputAdditions>

@property (readonly) UIView * inputView; 
@property (readonly) UIView * inputAccessoryView; 
@property (readonly) UITextInputMode * textInputMode; 
@property (readonly) NSString * textInputContextIdentifier; 
@property (nonatomic,readonly) NSArray * keyCommands; 
@property (nonatomic,readonly) UIResponder * _editingDelegate; 
@property (nonatomic,readonly) UIResponder * _responderForEditing; 
@property (getter=_proxyTextInput,nonatomic,readonly) UIResponder<UITextInput> * __content; 
@property (nonatomic,readonly) UIView<UITextInputPrivate> * _textSelectingContainer; 
@property (getter=isEditable,nonatomic,readonly) BOOL editable; 
@property (getter=isEditing,nonatomic,readonly) BOOL editing; 
@property (getter=_caretRect,nonatomic,readonly) CGRect caretRect; 
@property (nonatomic,copy) NSString * restorationIdentifier; 
@property (nonatomic,readonly) NSUndoManager * undoManager; 
+(void)_startDeferredTrackingObjectsWithIdentifiers;
+(void)_cleanupAllStateRestorationTables;
+(void)_updateStateRestorationIdentifierMap;
+(id)objectWithRestorationIdentifierPath:(id)arg1 ;
+(void)_setRestoredIdentifierPathForObject:(id)arg1 identifierPath:(id)arg2 ;
+(void)_prepareForSecondPassStateRestoration;
+(void)_finishStateRestoration;
+(void)clearTextInputContextIdentifier:(id)arg1 ;
+(void)_stopDeferredTrackingObjectsWithIdentifiers;
+(void)_cleanupStateRestorationObjectIdentifierTrackingTables;
-(id)nextResponder;
-(id)firstResponder;
-(id)_responderForEditing;
-(BOOL)canPerformAction:(SEL)arg1 withSender:(id)arg2 ;
-(id)targetForAction:(SEL)arg1 withSender:(id)arg2 ;
-(void)_physicalButtonsBegan:(id)arg1 withEvent:(id)arg2 ;
-(id)undoManager;
-(BOOL)resignFirstResponder;
-(id)_deepestUnambiguousResponder;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(id)_keyCommandForEvent:(id)arg1 ;
-(void)_handleKeyUIEvent:(id)arg1 ;
-(void)_handleKeyEvent:(GSEventRef)arg1 ;
-(void)_wheelChangedWithEvent:(id)arg1 ;
-(BOOL)becomeFirstResponder;
-(void)_physicalButtonsEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)_physicalButtonsCancelled:(id)arg1 withEvent:(id)arg2 ;
-(void)motionEnded:(int)arg1 withEvent:(id)arg2 ;
-(id)keyCommands;
-(id)textInputMode;
-(BOOL)_canShowTextServices;
-(id)_showServiceForText:(id)arg1 type:(int)arg2 fromRect:(CGRect)arg3 inView:(id)arg4 ;
-(void)_rebuildStateRestorationIdentifierPath;
-(id)restorationIdentifier;
-(void)encodeRestorableStateWithCoder:(id)arg1 ;
-(void)decodeRestorableStateWithCoder:(id)arg1 ;
-(id)_restorationIdentifierPath;
-(BOOL)isEditable;
-(void)_setFirstResponder:(id)arg1 ;
-(CGRect)_responderSelectionRectForWindow:(id)arg1 ;
-(id)_window;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)_completeForwardingTouches:(id)arg1 phase:(int)arg2 event:(id)arg3 ;
-(void)_windowResignedKey;
-(void)_windowBecameKey;
-(void)gestureEnded:(GSEventRef)arg1 ;
-(BOOL)_containedInAbsoluteResponderChain;
-(id)_firstResponder;
-(BOOL)_becomeFirstResponderWhenPossible;
-(BOOL)_supportsBecomeFirstResponderWhenPossible;
-(id)_responderSelectionContainerViewForResponder:(id)arg1 ;
-(void)setRestorationIdentifier:(id)arg1 ;
-(id)_responderForBecomeFirstResponder;
-(BOOL)_containsResponder:(id)arg1 ;
-(BOOL)canBecomeFirstResponder;
-(id)_nextKeyResponder;
-(id)_previousKeyResponder;
-(void)_clearBecomeFirstResponderWhenCapable;
-(BOOL)_canBecomeFirstResponderWhenPossible;
-(id)nextFirstResponder;
-(BOOL)_resignIfContainsFirstResponder;
-(BOOL)isFirstResponder;
-(id)_responderWindow;
-(BOOL)_isRootForKeyResponderCycle;
-(BOOL)_requiresKeyboardWhenFirstResponder;
-(BOOL)isEditing;
-(void)_moveWithEvent:(id)arg1 ;
-(BOOL)_isTransitioningFromView:(id)arg1 ;
-(void)_controlTouchBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)_controlTouchMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)_controlTouchEnded:(id)arg1 withEvent:(id)arg2 ;
-(id)interactionAssistant;
-(CGRect)_selectionClipRect;
-(id)textInputView;
-(void)beginSelectionChange;
-(void)endSelectionChange;
-(int)selectionAffinity;
-(id)_textSelectingContainer;
-(BOOL)_canBecomeFirstResponder;
-(id)_nextViewControllerInResponderChain;
-(void)_beginPinningInputViews;
-(void)_endPinningInputViews;
-(BOOL)_isViewController;
-(id)_keyCommands;
-(id)_editingDelegate;
-(BOOL)_canChangeFirstResponder:(id)arg1 toResponder:(id)arg2 ;
-(void)_finishResignFirstResponder;
-(void)_becomeFirstResponder;
-(void)reloadInputViews;
-(void)_resignFirstResponder;
-(BOOL)canResignFirstResponder;
-(void)motionBegan:(int)arg1 withEvent:(id)arg2 ;
-(void)motionCancelled:(int)arg1 withEvent:(id)arg2 ;
-(void)remoteControlReceivedWithEvent:(id)arg1 ;
-(void)scrollWheel:(GSEventRef)arg1 ;
-(void)gestureStarted:(GSEventRef)arg1 ;
-(void)gestureChanged:(GSEventRef)arg1 ;
-(id)inputView;
-(id)inputAccessoryView;
-(id)textInputContextIdentifier;
-(void)reloadInputViewsWithoutReset;
-(id)_keyboardResponder;
-(void)_completeForwardingTouches:(id)arg1 phase:(int)arg2 event:(id)arg3 index:(unsigned)arg4 ;
-(BOOL)_requiresKeyboardWindowWhenFirstResponder;
-(BOOL)_requiresKeyboardResetOnReload;
-(void)_becomeFirstResponderAndMakeVisible;
-(BOOL)_isPinningInputViews;
-(id)_responderSelectionImage;
-(void)_didChangeToFirstResponder:(id)arg1 ;
-(id)_proxyTextInput;
-(NSRange)_selectedNSRange;
-(void)_expandSelectionToStartOfWordsBeforeCaretSelection:(int)arg1 ;
-(void)_extendCurrentSelection:(int)arg1 ;
-(void)_setCaretSelectionAtEndOfSelection;
-(id)_moveToEndOfWord:(BOOL)arg1 withHistory:(id)arg2 ;
-(id)_moveToEndOfLine:(BOOL)arg1 withHistory:(id)arg2 ;
-(id)_moveRight:(BOOL)arg1 withHistory:(id)arg2 ;
-(id)_moveToStartOfWord:(BOOL)arg1 withHistory:(id)arg2 ;
-(id)_moveToStartOfLine:(BOOL)arg1 withHistory:(id)arg2 ;
-(id)_moveLeft:(BOOL)arg1 withHistory:(id)arg2 ;
-(id)_moveToEndOfParagraph:(BOOL)arg1 withHistory:(id)arg2 ;
-(id)_moveToEndOfDocument:(BOOL)arg1 withHistory:(id)arg2 ;
-(id)_moveDown:(BOOL)arg1 withHistory:(id)arg2 ;
-(id)_moveToStartOfParagraph:(BOOL)arg1 withHistory:(id)arg2 ;
-(id)_moveToStartOfDocument:(BOOL)arg1 withHistory:(id)arg2 ;
-(id)_moveUp:(BOOL)arg1 withHistory:(id)arg2 ;
-(void)_deleteByWord;
-(void)_deleteToStartOfLine;
-(void)_deleteToEndOfLine;
-(void)_setMarkedText:(id)arg1 selectedRange:(NSRange)arg2 ;
-(void)_unmarkText;
-(void)_setGestureRecognizers;
-(unsigned long)_characterBeforeCaretSelection;
-(unsigned long)_characterInRelationToRangedSelection:(int)arg1 ;
-(void)_moveCurrentSelection:(int)arg1 ;
-(void)_expandSelectionToBackwardDeletionCluster;
-(void)_deleteBackwardAndNotify:(BOOL)arg1 ;
-(void)_deleteForwardAndNotify:(BOOL)arg1 ;
-(unsigned long)_characterInRelationToCaretSelection:(int)arg1 ;
-(id)_wordContainingCaretSelection;
-(unsigned long)_characterAfterCaretSelection;
-(id)_rangeOfEnclosingWord:(id)arg1 ;
-(id)_positionAtStartOfWords:(unsigned)arg1 beforePosition:(id)arg2 ;
-(id)_fullText;
-(CGRect)_lastRectForRange:(id)arg1 ;
-(id)_rangeOfText:(id)arg1 endingAtPosition:(id)arg2 ;
-(void)_replaceCurrentWordWithText:(id)arg1 ;
-(void)_selectAll;
-(BOOL)_selectionAtDocumentStart;
-(NSRange)_nsrangeForTextRange:(id)arg1 ;
-(BOOL)_selectionAtDocumentEnd;
-(id)_positionFromPosition:(id)arg1 inDirection:(int)arg2 offset:(int)arg3 withAffinityDownstream:(BOOL)arg4 ;
-(void)_scrollRectToVisible:(CGRect)arg1 animated:(BOOL)arg2 ;
-(int)_selectionAffinity;
-(id)_fontForCaretSelection;
-(id)_textColorForCaretSelection;
-(id)_newPhraseBoundaryGestureRecognizer;
-(id)_selectableText;
-(id)_fullRange;
-(int)_indexForTextPosition:(id)arg1 ;
-(id)_clampedpositionFromPosition:(id)arg1 offset:(int)arg2 ;
-(id)_keyInput;
-(void)_setSelectedTextRange:(id)arg1 withAffinityDownstream:(BOOL)arg2 ;
-(void)_updateSelectionWithTextRange:(id)arg1 withAffinityDownstream:(BOOL)arg2 ;
-(BOOL)_isEmptySelection;
-(id)_setHistory:(id)arg1 withExtending:(BOOL)arg2 withAnchor:(int)arg3 withAffinityDownstream:(BOOL)arg4 ;
-(id)_setSelectionRangeWithHistory:(id)arg1 ;
-(void)_phraseBoundaryGesture:(id)arg1 ;
-(BOOL)_selectionAtWordStart;
-(BOOL)_hasMarkedTextOrRangedSelection;
-(void)_expandSelectionToStartOfWordBeforeCaretSelection;
-(id)_rangeOfLineEnclosingPosition:(id)arg1 ;
-(id)_rangeOfParagraphEnclosingPosition:(id)arg1 ;
-(id)_findPleasingWordBoundaryFromPosition:(id)arg1 ;
-(id)_asTextSelection;
-(CGRect)_caretRect;
@end

