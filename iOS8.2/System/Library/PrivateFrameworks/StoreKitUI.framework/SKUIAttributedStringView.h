/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:21:13 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <UIKit/UIView.h>

@class SKUIAttributedStringLayout, NSMutableArray, UIColor, NSArray;

@interface SKUIAttributedStringView : UIView {

	float _calculatedTopInset;
	int _firstLineTopInset;
	SKUIAttributedStringLayout* _layout;
	NSMutableArray* _requiredBadges;
	int _stringTreatment;
	UIColor* _textColor;
	UIColor* _treatmentColor;

}

@property (nonatomic,readonly) float baselineOffset; 
@property (nonatomic,readonly) float firstBaselineOffset; 
@property (assign,nonatomic) int firstLineTopInset;                            //@synthesize firstLineTopInset=_firstLineTopInset - In the implementation block
@property (nonatomic,retain) SKUIAttributedStringLayout * layout;              //@synthesize layout=_layout - In the implementation block
@property (nonatomic,copy) NSArray * requiredBadges;                           //@synthesize requiredBadges=_requiredBadges - In the implementation block
@property (assign,nonatomic) int stringTreatment;                              //@synthesize stringTreatment=_stringTreatment - In the implementation block
@property (nonatomic,retain) UIColor * treatmentColor;                         //@synthesize treatmentColor=_treatmentColor - In the implementation block
@property (nonatomic,retain) UIColor * textColor;                              //@synthesize textColor=_textColor - In the implementation block
+(CGSize)sizeWithLayout:(id)arg1 treatment:(int)arg2 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(id)description;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setTextColor:(UIColor *)arg1 ;
-(SKUIAttributedStringLayout *)layout;
-(UIColor *)textColor;
-(float)baselineOffset;
-(void)setLayout:(SKUIAttributedStringLayout *)arg1 ;
-(float)firstBaselineOffset;
-(void)setStringTreatment:(int)arg1 ;
-(void)setTreatmentColor:(UIColor *)arg1 ;
-(void)setRequiredBadges:(NSArray *)arg1 ;
-(void)_reloadTopInset;
-(void)setFirstLineTopInset:(int)arg1 ;
-(NSArray *)requiredBadges;
-(int)stringTreatment;
-(UIColor *)treatmentColor;
-(int)firstLineTopInset;
@end

