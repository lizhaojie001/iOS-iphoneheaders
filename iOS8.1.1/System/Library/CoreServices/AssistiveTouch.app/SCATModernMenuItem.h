/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:26:59 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/CoreServices/AssistiveTouch.app/assistivetouchd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@protocol SCATModernMenuItemDelegate;
#import <assistivetouchd/assistivetouchd-Structs.h>
@class NSString, AXDispatchTimer, NSIndexPath, SCATModernMenuItemCell, SCATModernMenuItemSupplementaryView, HNDCustomGesture, UIImage;

@interface SCATModernMenuItem : NSObject {

	BOOL _didActivate;
	BOOL _allowedWithGuidedAccess;
	NSString* _identifier;
	id<SCATModernMenuItemDelegate> _delegate;
	NSString* _title;
	NSString* _imageName;
	unsigned long long _activateBehavior;
	AXDispatchTimer* _repeatItemWithDismissTimer;
	NSIndexPath* _cellIndex;
	SCATModernMenuItemCell* _cell;
	SCATModernMenuItemSupplementaryView* _supplementaryView;
	NSIndexPath* _supplementaryViewIndex;
	HNDCustomGesture* _customGesture;
	UIImage* _image;
	unsigned long long _style;

}

@property (assign,nonatomic) id<SCATModernMenuItemDelegate> delegate;                                    //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSString * identifier;                                                      //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,retain) NSString * title;                                                           //@synthesize title=_title - In the implementation block
@property (nonatomic,retain) NSString * imageName;                                                       //@synthesize imageName=_imageName - In the implementation block
@property (nonatomic,retain) UIImage * image;                                                            //@synthesize image=_image - In the implementation block
@property (assign,nonatomic) unsigned long long style;                                                   //@synthesize style=_style - In the implementation block
@property (assign,nonatomic) unsigned long long activateBehavior;                                        //@synthesize activateBehavior=_activateBehavior - In the implementation block
@property (assign,getter=isAllowedWithGuidedAccess,nonatomic) BOOL allowedWithGuidedAccess;              //@synthesize allowedWithGuidedAccess=_allowedWithGuidedAccess - In the implementation block
@property (nonatomic,retain) SCATModernMenuItemCell * cell;                                              //@synthesize cell=_cell - In the implementation block
@property (nonatomic,retain) NSIndexPath * cellIndex;                                                    //@synthesize cellIndex=_cellIndex - In the implementation block
@property (nonatomic,retain) SCATModernMenuItemSupplementaryView * supplementaryView;                    //@synthesize supplementaryView=_supplementaryView - In the implementation block
@property (nonatomic,retain) NSIndexPath * supplementaryViewIndex;                                       //@synthesize supplementaryViewIndex=_supplementaryViewIndex - In the implementation block
@property (nonatomic,retain) HNDCustomGesture * customGesture;                                           //@synthesize customGesture=_customGesture - In the implementation block
@property (nonatomic,retain) AXDispatchTimer * repeatItemWithDismissTimer;                               //@synthesize repeatItemWithDismissTimer=_repeatItemWithDismissTimer - In the implementation block
@property (assign,nonatomic) BOOL didActivate;                                                           //@synthesize didActivate=_didActivate - In the implementation block
+(id)itemWithIdentifier:(id)arg1 delegate:(id)arg2 title:(id)arg3 imageName:(id)arg4 activateBehavior:(unsigned long long)arg5 ;
+(id)itemWithIdentifier:(id)arg1 delegate:(id)arg2 title:(id)arg3 imageName:(id)arg4 activateBehavior:(unsigned long long)arg5 allowedWithGuidedAccess:(BOOL)arg6 ;
+(id)titleTextAttributes;
+(CGSize)imageSize;
-(void)updateButtonState;
-(void)setSupplementaryView:(SCATModernMenuItemSupplementaryView *)arg1 ;
-(void)setSupplementaryViewIndex:(NSIndexPath *)arg1 ;
-(BOOL)_itemTitleIsContiguous;
-(void)setCustomGesture:(HNDCustomGesture *)arg1 ;
-(HNDCustomGesture *)customGesture;
-(void)setCellIndex:(NSIndexPath *)arg1 ;
-(SCATModernMenuItemSupplementaryView *)supplementaryView;
-(BOOL)handleActivateWithElement:(id)arg1 ;
-(void)setActivateBehavior:(unsigned long long)arg1 ;
-(void)setAllowedWithGuidedAccess:(BOOL)arg1 ;
-(void)setRepeatItemWithDismissTimer:(AXDispatchTimer *)arg1 ;
-(CGSize)_requiredSizeForText:(id)arg1 withMaxSize:(CGSize)arg2 ;
-(void)setDidActivate:(BOOL)arg1 ;
-(unsigned long long)activateBehavior;
-(CGSize)requiredSizeForTitleTextWithMaxSize:(CGSize)arg1 ;
-(void)resetActivation;
-(AXDispatchTimer *)repeatItemWithDismissTimer;
-(NSIndexPath *)supplementaryViewIndex;
-(BOOL)isAllowedWithGuidedAccess;
-(void)dealloc;
-(void)setImage:(UIImage *)arg1 ;
-(void)setDelegate:(id<SCATModernMenuItemDelegate>)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(id)description;
-(id<SCATModernMenuItemDelegate>)delegate;
-(NSString *)identifier;
-(NSString *)title;
-(UIImage *)image;
-(unsigned long long)style;
-(id)accessibilityLabel;
-(void)setStyle:(unsigned long long)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(SCATModernMenuItemCell *)cell;
-(void)flash;
-(void)setCell:(SCATModernMenuItemCell *)arg1 ;
-(void)setImageName:(NSString *)arg1 ;
-(NSString *)imageName;
-(BOOL)didActivate;
-(NSIndexPath *)cellIndex;
@end
