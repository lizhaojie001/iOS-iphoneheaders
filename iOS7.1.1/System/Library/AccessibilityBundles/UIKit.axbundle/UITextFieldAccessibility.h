/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:19:48 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/AccessibilityBundles/UIKit.axbundle/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UITextFieldAccessibility_super.h>

@interface UITextFieldAccessibility : UITextFieldAccessibility_super
+(void)_initializeSafeCategory;
+(id)_accessibilityTargetClassName;
+(id)_installSafeCategoryValidationMethod;
+(id)_initializeSafeCategoryFromValidationManager;
-(id)_accessibilityInternalData;
-(void)_accessibilityUpdateButtons;
-(id)_accessibilityTextFieldElement;
-(bool)_axTextFieldIsHidden;
-(id)_accessibilityInternalButton;
-(long long)_accessibilityCountAccessibleChildren:(id)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(id)accessibilityLabel;
-(bool)keyboardInput:(id)arg1 shouldInsertText:(id)arg2 isMarkedText:(bool)arg3 ;
-(void)keyboardInputChangedSelection:(id)arg1 ;
-(bool)fieldEditor:(id)arg1 shouldInsertText:(id)arg2 replacingRange:(NSRange)arg3 ;
-(void)setSelectedTextRange:(id)arg1 ;
-(void)selectAll:(id)arg1 ;
-(void)cut:(id)arg1 ;
-(void)copy:(id)arg1 ;
-(void)paste:(id)arg1 ;
-(void)_clearButtonClicked:(id)arg1 ;
-(void)_updateButtons;
-(id)accessibilityValue;
-(CGPoint)accessibilityActivationPoint;
-(unsigned long long)accessibilityTraits;
-(bool)isAccessibilityElement;
-(long long)accessibilityElementCount;
-(id)accessibilityElementAtIndex:(long long)arg1 ;
-(long long)indexOfAccessibilityElement:(id)arg1 ;
-(id)_accessibilityHitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(bool)_accessibilityHitTestShouldFallbackToNearestChild;
-(NSRange)_accessibilitySelectedTextRange;
-(void)_accessibilitySetSelectedTextRange:(NSRange)arg1 ;
-(void)_accessibilitySetValue:(id)arg1 ;
-(void)_accessibilitySwitchOrderedChildrenFrom:(id)arg1 ;
-(id)accessibilityPlaceholderValue;
@end
