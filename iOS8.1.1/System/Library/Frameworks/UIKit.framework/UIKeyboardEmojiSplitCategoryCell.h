/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:29:18 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UITableViewCell.h>

@class UIImageView, UILabel;

@interface UIKeyboardEmojiSplitCategoryCell : UITableViewCell {

	UIImageView* _symbol;
	UILabel* _title;

}

@property (nonatomic,retain) UIImageView * symbol;              //@synthesize symbol=_symbol - In the implementation block
@property (nonatomic,retain) UILabel * title;                   //@synthesize title=_title - In the implementation block
-(void)dealloc;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)setTitle:(UILabel *)arg1 ;
-(UILabel *)title;
-(UIImageView *)symbol;
-(void)setTitleText:(id)arg1 ;
-(id)titleFont;
-(id)symbolFont;
-(void)setSymbol:(UIImageView *)arg1 ;
@end

