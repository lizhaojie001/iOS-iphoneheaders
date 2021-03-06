/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:19:49 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/AccessibilityBundles/UIKit.axbundle/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIAccessibilityElement.h>

@class NSIndexPath, UITableViewCell, NSMutableArray;

@interface UITableViewCellAccessibilityElement : UIAccessibilityElement {

	NSIndexPath* _indexPath;
	UITableViewCell* _tableViewCell;
	NSMutableArray* _mockChildren;
	bool _usingRealTableViewCell;

}

@property (nonatomic,retain) NSIndexPath * indexPath;                                     //@synthesize indexPath=_indexPath - In the implementation block
@property (nonatomic,retain) UITableViewCell * tableViewCell;                             //@synthesize tableViewCell=_tableViewCell - In the implementation block
@property (nonatomic,@dynamic,readonly) UITableViewCell * realTableViewCell; 
@property (assign,nonatomic) bool usingRealTableViewCell;                                 //@synthesize usingRealTableViewCell=_usingRealTableViewCell - In the implementation block
-(void)setTableViewCell:(id)arg1 ;
-(void)setUsingRealTableViewCell:(bool)arg1 ;
-(id)tableViewCell;
-(void)registerMockChild:(id)arg1 ;
-(void)unregisterAllChildren;
-(bool)usingRealTableViewCell;
-(void)unregisterMockChild:(id)arg1 ;
-(CGRect)_accessibilityChargedLineBoundsForRange:(NSRange)arg1 ;
-(bool)_accessibilityIsOutsideParentBounds;
-(void)dealloc;
-(id)description;
-(id)accessibilityLabel;
-(id)indexPath;
-(CGRect)accessibilityFrame;
-(id)accessibilityValue;
-(id)accessibilityHint;
-(CGPoint)accessibilityActivationPoint;
-(unsigned long long)accessibilityTraits;
-(bool)isAccessibilityElement;
-(id)accessibilityLanguage;
-(id)accessibilityIdentifier;
-(bool)shouldGroupAccessibilityChildren;
-(void)accessibilityElementDidBecomeFocused;
-(void)accessibilityElementDidLoseFocus;
-(void)accessibilityIncrement;
-(void)accessibilityDecrement;
-(bool)accessibilityPerformEscape;
-(bool)accessibilityActivate;
-(long long)accessibilityElementCount;
-(id)accessibilityElementAtIndex:(long long)arg1 ;
-(long long)indexOfAccessibilityElement:(id)arg1 ;
-(void)setIndexPath:(id)arg1 ;
-(id)_accessibilityHitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(id)realTableViewCell;
-(bool)accessibilityScrollToVisibleWithChild:(id)arg1 ;
-(bool)_accessibilitySupportsActivateAction;
-(id)accessibilityCustomRotorTitles;
-(id)accessibilityCustomRotorItemsAtIndex:(long long)arg1 ;
-(bool)_accessibilityIsInTableCell;
-(id)_accessibilityLineNumberAndColumnForPoint:(CGPoint)arg1 ;
-(NSRange)_accessibilityRangeForLineNumberAndColumn:(id)arg1 ;
-(CGRect)_accessibilityBoundsForRange:(NSRange)arg1 ;
-(id)_accessibilityDataDetectorScheme:(CGPoint)arg1 ;
-(bool)_accessibilityHasTextOperations;
-(NSRange)_accessibilitySelectedTextRange;
-(bool)_accessibilityRetainsCustomRotorActionSetting;
-(bool)_allowCustomActionHintSpeakOverride;
-(bool)_accessibilityIsTableCell;
-(id)_accessibilityTextOperations;
-(id)_accessibilityUserTestingChildren;
-(CGPoint)_accessibilityMinScrubberPosition;
-(CGPoint)_accessibilityMaxScrubberPosition;
-(id)_accessibilityAbsoluteValue;
-(bool)_accessibilityIsAwayAlertElement;
-(bool)_accessibilityBackingElementIsValid;
-(id)accessibilityCustomActions;
-(bool)_accessibilityIsScannerElement;
-(id)_accessibilityEquivalenceTag;
-(void)_accessibilitySetSelectedTextRange:(NSRange)arg1 ;
-(double)_accessibilityAllowedGeometryOverlap;
-(id)_accessibilityTextViewTextOperationResponder;
-(void)_accessibilityCopy;
-(void)_accessibilityCut;
-(void)_accessibilityPaste;
-(void)_accessibilitySelectAll;
-(void)_accessibilitySelect;
-(bool)accessibilityPerformCustomAction:(long long)arg1 ;
-(bool)_accessibilityIsScannerGroup;
-(bool)_accessibilityUserTestingIsDefaultButton;
-(bool)_accessibilityUserTestingIsCancelButton;
-(NSRange)accessibilityRowRange;
@end

