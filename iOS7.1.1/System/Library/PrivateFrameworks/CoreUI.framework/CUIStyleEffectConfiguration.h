/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:23:12 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreUI/CoreUI-Structs.h>
#import <CoreFoundation/NSCopying.h>

@interface CUIStyleEffectConfiguration : NSObject <NSCopying> {

	long long _state;
	long long _presentationState;
	long long _value;
	bool _useSimplifiedEffect;
	bool _foregroundColorShouldTintEffects;

}

@property (assign,nonatomic) long long state;                                    //@synthesize state=_state - In the implementation block
@property (assign,nonatomic) long long presentationState;                        //@synthesize presentationState=_presentationState - In the implementation block
@property (assign,nonatomic) long long value;                                    //@synthesize value=_value - In the implementation block
@property (assign,nonatomic) bool useSimplifiedEffect;                           //@synthesize useSimplifiedEffect=_useSimplifiedEffect - In the implementation block
@property (assign,nonatomic) bool foregroundColorShouldTintEffects;              //@synthesize foregroundColorShouldTintEffects=_foregroundColorShouldTintEffects - In the implementation block
-(id)init;
-(long long)state;
-(void)setState:(long long)arg1 ;
-(id)copyWithZone:(NSZone)arg1 ;
-(void)setValue:(long long)arg1 ;
-(void)setForegroundColorShouldTintEffects:(bool)arg1 ;
-(long long)value;
-(bool)shouldIgnoreForegroundColor;
-(void)setPresentationState:(long long)arg1 ;
-(bool)useSimplifiedEffect;
-(bool)foregroundColorShouldTintEffects;
-(long long)presentationState;
-(void)setUseSimplifiedEffect:(bool)arg1 ;
@end

