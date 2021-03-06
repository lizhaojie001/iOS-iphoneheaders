/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 8:59:12 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /Applications/MobileTimer.app/MobileTimer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MobileTimer/MobileTimer-Structs.h>
#import <UIKit/UICollectionViewCell.h>

@class AlarmScheduleLayoutAttributes, UIView, UILabel, NSString;

@interface AlarmScheduleCollectionCell : UICollectionViewCell {

	AlarmScheduleLayoutAttributes* _attributes;
	UIView* _tileView;
	UILabel* _titleLabel;

}

@property (nonatomic,readonly) NSString * alarmId; 
+(float)height;
-(BOOL)bodyContainsPoint:(CGPoint)arg1 ;
-(void)updateTitleLabel;
-(void)updateColor;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)layoutSubviews;
-(id)description;
-(void)setSelected:(BOOL)arg1 ;
-(void)applyLayoutAttributes:(id)arg1 ;
-(id)alarmId;
@end

