/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:25:05 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/SiriUI.framework/SiriUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SiriUI/SiriUI-Structs.h>
#import <SiriUI/SiriUIClearBackgroundCell.h>

@class SiriUIKeyline, UIImageView, UIView, UILabel;

@interface SiriUIContentCollectionViewCell : SiriUIClearBackgroundCell {

	SiriUIKeyline* _keyline;
	UIImageView* _chevronView;
	bool _hasChevron;
	long long _verticalAlignment;
	UIView* _accessoryView;
	UILabel* _textLabel;
	long long _keylineType;
	UIOffset _textOffset;
	UIOffset _accessoryOffset;
	UIEdgeInsets _textAndAccessoryInsets;

}

@property (assign,nonatomic) long long verticalAlignment;                      //@synthesize verticalAlignment=_verticalAlignment - In the implementation block
@property (assign,nonatomic) UIEdgeInsets textAndAccessoryInsets;              //@synthesize textAndAccessoryInsets=_textAndAccessoryInsets - In the implementation block
@property (nonatomic,retain) UIView * accessoryView;                           //@synthesize accessoryView=_accessoryView - In the implementation block
@property (nonatomic,retain) UILabel * textLabel;                              //@synthesize textLabel=_textLabel - In the implementation block
@property (assign,nonatomic) UIOffset textOffset;                              //@synthesize textOffset=_textOffset - In the implementation block
@property (assign,nonatomic) UIOffset accessoryOffset;                         //@synthesize accessoryOffset=_accessoryOffset - In the implementation block
@property (nonatomic,readonly) SiriUIKeyline * keyline;                        //@synthesize keyline=_keyline - In the implementation block
@property (assign,nonatomic) long long keylineType;                            //@synthesize keylineType=_keylineType - In the implementation block
@property (assign,nonatomic) bool hasChevron;                                  //@synthesize hasChevron=_hasChevron - In the implementation block
+(id)reuseIdentifier;
-(void)setTextLabel:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)prepareForReuse;
-(id)textLabel;
-(void)setAccessoryView:(id)arg1 ;
-(id)accessoryView;
-(void)setTextOffset:(UIOffset)arg1 ;
-(UIOffset)textOffset;
-(void).cxx_destruct;
-(long long)verticalAlignment;
-(void)setVerticalAlignment:(long long)arg1 ;
-(void)setKeylineType:(long long)arg1 ;
-(void)setHasChevron:(bool)arg1 ;
-(UIEdgeInsets)textAndAccessoryInsets;
-(void)setTextAndAccessoryInsets:(UIEdgeInsets)arg1 ;
-(UIOffset)accessoryOffset;
-(void)setAccessoryOffset:(UIOffset)arg1 ;
-(id)keyline;
-(long long)keylineType;
-(bool)hasChevron;
@end

