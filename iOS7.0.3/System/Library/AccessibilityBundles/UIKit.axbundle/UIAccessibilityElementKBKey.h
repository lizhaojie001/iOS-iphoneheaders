/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:02:45 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/AccessibilityBundles/UIKit.axbundle/UIKit
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIAccessibilityElement.h>

@class UIKBTree;

@interface UIAccessibilityElementKBKey : UIAccessibilityElement {

	UIKBTree* _key;
	BOOL _changesOnShiftDown;

}

@property (nonatomic,retain) UIKBTree * key;                       //@synthesize key=_key - In the implementation block
@property (assign,nonatomic) BOOL changesOnShiftDown;              //@synthesize changesOnShiftDown=_changesOnShiftDown - In the implementation block
-(BOOL)_accessibilityIsDeleteKey;
-(BOOL)_allowCachingAccessibilityLabel;
-(id)_accessibilityLabel;
-(void)_applyCapitalLetterTransform;
-(BOOL)allowsCaseChangeOnShift;
-(BOOL)changesOnShiftDown;
-(BOOL)isUnaffectedByShiftLock;
-(void)setChangesOnShiftDown:(BOOL)arg1 ;
-(id)_accessibilityLocalizedStringForKeyboardLocale:(id)arg1 ;
-(BOOL)_axIsDictationKey;
-(BOOL)_accessibilityWasForcedToUseForeignKB;
-(id)initWithAccessibilityContainer:(id)arg1 key:(id)arg2 ;
-(BOOL)isButtonType;
-(void)dealloc;
-(id)accessibilityLabel;
-(id)key;
-(CGRect)accessibilityFrame;
-(id)accessibilityValue;
-(id)accessibilityHint;
-(CGPoint)accessibilityActivationPoint;
-(unsigned long long)accessibilityTraits;
-(BOOL)isAccessibilityElement;
-(id)accessibilityIdentifier;
-(BOOL)accessibilityActivate;
-(void)setKey:(id)arg1 ;
-(BOOL)_accessibilitySupportsActivateAction;
-(id)_accessibilityKeyboardKeyEnteredString;
-(BOOL)_accessibilityKeyboardKeyAllowsTouchTyping;
-(BOOL)_accessibilityAllowsAlternativeCharacterActivation;
-(id)_accessibilityVariantKeys;
-(BOOL)_accessibilityHasVariantKeys;
@end

