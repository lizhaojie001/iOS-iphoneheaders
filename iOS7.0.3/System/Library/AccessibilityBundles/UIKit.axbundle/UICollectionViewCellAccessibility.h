/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:02:42 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/AccessibilityBundles/UIKit.axbundle/UIKit
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UICollectionViewCellAccessibility_super.h>

@interface UICollectionViewCellAccessibility : UICollectionViewCellAccessibility_super
+(void)_initializeSafeCategory;
+(id)_accessibilityTargetClassName;
+(id)_installSafeCategoryValidationMethod;
+(void)_accessibilityPerformValidations:(id)arg1 ;
+(id)_initializeSafeCategoryFromValidationManager;
-(id)_accessibilityChildren;
-(void)accessibilityClearInternalData;
-(void)accessibilityReuseChildren:(id)arg1 forMockParent:(id)arg2 ;
-(id)accessibilityIndexPath;
-(BOOL)_accessibilityIsOutsideParentBounds;
-(id)axData;
-(void)addSubview:(id)arg1 ;
-(void)insertSubview:(id)arg1 atIndex:(int)arg2 ;
-(void)insertSubview:(id)arg1 belowSubview:(id)arg2 ;
-(void)insertSubview:(id)arg1 aboveSubview:(id)arg2 ;
-(void)willRemoveSubview:(id)arg1 ;
-(void)prepareForReuse;
-(unsigned long long)accessibilityTraits;
-(int)accessibilityElementCount;
-(id)accessibilityElementAtIndex:(int)arg1 ;
-(int)indexOfAccessibilityElement:(id)arg1 ;
-(id)_accessibilityHitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(BOOL)accessibilityScrollToVisible;
@end

