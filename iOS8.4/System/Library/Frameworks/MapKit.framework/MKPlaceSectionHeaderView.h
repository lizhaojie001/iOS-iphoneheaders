/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:18:04 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MapKit/MapKit-Structs.h>
#import <UIKit/UIView.h>

@class NSString, UILabel, _MKRightImageButton, UIView, NSArray, NSMutableArray;

@interface MKPlaceSectionHeaderView : UIView {

	BOOL _showSeeMoreButton;
	BOOL _showSeparator;
	NSString* _sectionHeaderText;
	UILabel* _sectionHeaderLabel;
	_MKRightImageButton* _seeMoreButton;
	UIView* _separator;
	NSArray* _seeMoreButtonConstraints;
	NSArray* _marginConstraints;
	NSMutableArray* _scaledConstraints;
	SEL _action;
	id _target;

}

@property (assign,nonatomic) BOOL showSeeMoreButton;                           //@synthesize showSeeMoreButton=_showSeeMoreButton - In the implementation block
@property (nonatomic,copy) NSString * sectionHeaderText;                       //@synthesize sectionHeaderText=_sectionHeaderText - In the implementation block
@property (assign,nonatomic) BOOL showSeparator;                               //@synthesize showSeparator=_showSeparator - In the implementation block
@property (nonatomic,retain) UILabel * sectionHeaderLabel;                     //@synthesize sectionHeaderLabel=_sectionHeaderLabel - In the implementation block
@property (nonatomic,retain) _MKRightImageButton * seeMoreButton;              //@synthesize seeMoreButton=_seeMoreButton - In the implementation block
@property (nonatomic,retain) UIView * separator;                               //@synthesize separator=_separator - In the implementation block
@property (nonatomic,retain) NSArray * seeMoreButtonConstraints;               //@synthesize seeMoreButtonConstraints=_seeMoreButtonConstraints - In the implementation block
@property (nonatomic,retain) NSArray * marginConstraints;                      //@synthesize marginConstraints=_marginConstraints - In the implementation block
@property (nonatomic,retain) NSMutableArray * scaledConstraints;               //@synthesize scaledConstraints=_scaledConstraints - In the implementation block
@property (assign,nonatomic) SEL action;                                       //@synthesize action=_action - In the implementation block
@property (assign,nonatomic,__weak) id target;                                 //@synthesize target=_target - In the implementation block
+(double)intrinsicContentHeight;
-(void)setShowSeparator:(BOOL)arg1 ;
-(BOOL)showSeparator;
-(void)contentSizeDidChange;
-(void)refreshMarginConstraints;
-(NSArray *)marginConstraints;
-(void)setMarginConstraints:(NSArray *)arg1 ;
-(NSMutableArray *)scaledConstraints;
-(void)setScaledConstraints:(NSMutableArray *)arg1 ;
-(void)setSeeMoreButtonConstraints:(NSArray *)arg1 ;
-(BOOL)showSeeMoreButton;
-(NSArray *)seeMoreButtonConstraints;
-(_MKRightImageButton *)seeMoreButton;
-(void)setShowSeeMoreButton:(BOOL)arg1 ;
-(void)setSectionHeaderText:(NSString *)arg1 ;
-(NSString *)sectionHeaderText;
-(UILabel *)sectionHeaderLabel;
-(void)setSectionHeaderLabel:(UILabel *)arg1 ;
-(void)setSeeMoreButton:(_MKRightImageButton *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)setTarget:(id)arg1 ;
-(SEL)action;
-(id)target;
-(void)layoutMarginsDidChange;
-(void)setAction:(SEL)arg1 ;
-(void)updateConstraints;
-(void)setTarget:(id)arg1 action:(SEL)arg2 ;
-(id)chevronImage;
-(void)setSeparator:(UIView *)arg1 ;
-(UIView *)separator;
@end

