/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:36:06 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/SpringBoardPlugins/MapsLockScreen.lockbundle/MapsLockScreen
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MapsLockScreen/MapsLockScreen-Structs.h>
#import <UIKit/UIView.h>

@class NSString, UIColor;

@interface MNGuidanceSignDistanceLabel : UIView {

	NSString* _text;
	long long _textAlignment;
	UIColor* _textColor;
	UIColor* _accentColor;
	CTFrameRef _frame;
	int _framing;
	double _maximumWidth;
	NSString* _fontName;
	NSString* _digitsFontName;
	double _fontSize;
	double _digitsFontSize;

}

@property (nonatomic,copy) NSString * text;                        //@synthesize text=_text - In the implementation block
@property (assign,nonatomic) long long textAlignment;              //@synthesize textAlignment=_textAlignment - In the implementation block
@property (nonatomic,retain) UIColor * textColor;                  //@synthesize textColor=_textColor - In the implementation block
@property (nonatomic,retain) UIColor * accentColor;                //@synthesize accentColor=_accentColor - In the implementation block
@property (assign,nonatomic) int framing;                          //@synthesize framing=_framing - In the implementation block
@property (assign,nonatomic) double maximumWidth;                  //@synthesize maximumWidth=_maximumWidth - In the implementation block
@property (nonatomic,readonly) double textWidth; 
@property (nonatomic,copy) NSString * fontName;                    //@synthesize fontName=_fontName - In the implementation block
@property (nonatomic,copy) NSString * digitsFontName;              //@synthesize digitsFontName=_digitsFontName - In the implementation block
@property (assign,nonatomic) double fontSize;                      //@synthesize fontSize=_fontSize - In the implementation block
@property (assign,nonatomic) double digitsFontSize;                //@synthesize digitsFontSize=_digitsFontSize - In the implementation block
+(id)stringAttributesWithFont:(CTFontRef)arg1 alignment:(long long)arg2 color:(id)arg3 ;
+(id)attributedStringWithText:(id)arg1 font:(CTFontRef)arg2 digitsFont:(CTFontRef)arg3 alignment:(long long)arg4 color:(id)arg5 ;
-(int)framing;
-(double)textWidthForSize:(CGSize)arg1 ;
-(double)digitsFontSize;
-(void)clearCTFrame;
-(CTFrameRef)CTFrame;
-(NSString *)digitsFontName;
-(void)setAccentColor:(UIColor *)arg1 ;
-(void)setDigitsFontName:(NSString *)arg1 ;
-(void)setDigitsFontSize:(double)arg1 ;
-(CTFrameRef)CTFrameForSize:(CGSize)arg1 ;
-(void)setFraming:(int)arg1 ;
-(UIColor *)accentColor;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)drawRect:(CGRect)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setTextColor:(UIColor *)arg1 ;
-(void)setTextAlignment:(long long)arg1 ;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(void)setMaximumWidth:(double)arg1 ;
-(double)maximumWidth;
-(UIColor *)textColor;
-(long long)textAlignment;
-(NSString *)fontName;
-(void)setFontSize:(double)arg1 ;
-(void)setFontName:(NSString *)arg1 ;
-(double)textWidth;
-(double)fontSize;
@end

