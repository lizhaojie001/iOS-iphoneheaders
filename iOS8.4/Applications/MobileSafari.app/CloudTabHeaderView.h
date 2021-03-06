/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 7:09:54 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /Applications/MobileSafari.app/MobileSafari
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MobileSafari/MobileSafari-Structs.h>
#import <UIKit/UIView.h>

@class UILabel, UIImageView, UIView, NSString;

@interface CloudTabHeaderView : UIView {

	UILabel* _label;
	UIImageView* _icon;
	UIView* _separatorView;
	int _style;
	float _bottomPadding;
	float _paddingBetweenIconAndLabel;
	float _iconVerticalAdjustment;
	float _leftEdgeInset;

}

@property (nonatomic,copy) NSString * text; 
+(float)defaultHeightForStyle:(int)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(id)initWithStyle:(int)arg1 ;
@end

