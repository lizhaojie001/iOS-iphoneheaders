/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:26:36 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/VoiceMemos.framework/VoiceMemos
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <VoiceMemos/VoiceMemos-Structs.h>
#import <QuartzCore/CALayer.h>

@class NSString, UIFont, UIColor;

@interface RCTextLayer : CALayer {

	CGSize _cachedSize;
	unsigned long long _cachedSizeHash;
	NSString* _text;
	UIFont* _font;
	UIColor* _textColor;
	long long _preferredAlignment;
	long long _textAlignment;

}

@property (nonatomic,copy) NSString * text;                             //@synthesize text=_text - In the implementation block
@property (nonatomic,retain) UIFont * font;                             //@synthesize font=_font - In the implementation block
@property (nonatomic,retain) UIColor * textColor;                       //@synthesize textColor=_textColor - In the implementation block
@property (assign,nonatomic) long long preferredAlignment;              //@synthesize preferredAlignment=_preferredAlignment - In the implementation block
@property (assign,nonatomic) long long textAlignment;                   //@synthesize textAlignment=_textAlignment - In the implementation block
-(id)init;
-(void)setFrame:(CGRect)arg1 ;
-(void)setTextAlignment:(long long)arg1 ;
-(void)setTextColor:(UIColor *)arg1 ;
-(void)setFont:(UIFont *)arg1 ;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(void)sizeToFit;
-(UIFont *)font;
-(UIColor *)textColor;
-(long long)textAlignment;
-(void)drawInContext:(CGContextRef)arg1 ;
-(void)setPreferredAlignment:(long long)arg1 ;
-(long long)preferredAlignment;
-(CGRect)textRectWithAlignment:(long long)arg1 inLayoutBounds:(CGRect)arg2 ;
-(CGSize)_displaySize;
-(id)_attributes;
@end

