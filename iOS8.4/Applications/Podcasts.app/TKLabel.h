/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 7:10:08 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /Applications/Podcasts.app/Podcasts
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Podcasts/Podcasts-Structs.h>
#import <Podcasts/TKView.h>
#import <Podcasts/TKLabelRunDelegate.h>

@class NSArray, NSAttributedString, NSMutableDictionary, NSString, UIFont, UIColor, NSDictionary;

@interface TKLabel : TKView <TKLabelRunDelegate> {

	CTFramesetterRef _framesetter;
	CTFrameRef _frame;
	NSArray* _lines;
	CGPoint* _origins;
	CGRect _oldBounds;
	CTLineRef _truncationToken;
	NSAttributedString* _truncationString;
	NSAttributedString* _attributedString;
	char _needsStringUpdate;
	NSMutableDictionary* _runDelegates;
	unsigned char _textAlignment;
	unsigned char _lineBreakMode;
	NSString* _text;
	UIFont* _font;
	UIColor* _textColor;
	NSDictionary* _viewDictionary;
	float _lineHeightScaler;

}

@property (nonatomic,copy) NSString * text;                            //@synthesize text=_text - In the implementation block
@property (nonatomic,retain) UIFont * font;                            //@synthesize font=_font - In the implementation block
@property (nonatomic,retain) UIColor * textColor;                      //@synthesize textColor=_textColor - In the implementation block
@property (nonatomic,copy) NSDictionary * viewDictionary;              //@synthesize viewDictionary=_viewDictionary - In the implementation block
@property (assign,nonatomic) float lineHeightScaler;                   //@synthesize lineHeightScaler=_lineHeightScaler - In the implementation block
@property (assign,nonatomic) unsigned char textAlignment;              //@synthesize textAlignment=_textAlignment - In the implementation block
@property (assign,nonatomic) unsigned char lineBreakMode;              //@synthesize lineBreakMode=_lineBreakMode - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(CGRect)rectForBounds:(CGRect)arg1 withTop:(float)arg2 withTheme:(id)arg3 withComponent:(id)arg4 ;
-(void)setLineHeightScaler:(float)arg1 ;
-(void)setViewDictionary:(NSDictionary *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 withComponent:(id)arg2 withTheme:(id)arg3 ;
-(float)ascentForIdentifier:(id)arg1 ;
-(float)descentForIdentifier:(id)arg1 ;
-(float)widthForIdentifier:(id)arg1 ;
-(void)updateString;
-(float)lineHeightScaler;
-(NSDictionary *)viewDictionary;
-(id)attributedStringByTrimmingCharactersInCharacterSet:(id)arg1 withString:(id)arg2 ;
-(void)dealloc;
-(void)drawRect:(CGRect)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setTextAlignment:(unsigned char)arg1 ;
-(void)setTextColor:(UIColor *)arg1 ;
-(void)setFont:(UIFont *)arg1 ;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(void)setLineBreakMode:(unsigned char)arg1 ;
-(UIFont *)font;
-(UIColor *)textColor;
-(unsigned char)textAlignment;
-(unsigned char)lineBreakMode;
@end

