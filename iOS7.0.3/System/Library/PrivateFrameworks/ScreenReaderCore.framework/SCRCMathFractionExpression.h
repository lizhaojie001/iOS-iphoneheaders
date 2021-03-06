/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:57:18 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/ScreenReaderCore.framework/ScreenReaderCore
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <ScreenReaderCore/SCRCMathExpression.h>

@class SCRCMathExpression;

@interface SCRCMathFractionExpression : SCRCMathExpression {

	SCRCMathExpression* _numerator;
	SCRCMathExpression* _denominator;
	SCRCMathExpression* _operator;
	double _lineThickness;

}

@property (nonatomic,retain) SCRCMathExpression * numerator;                //@synthesize numerator=_numerator - In the implementation block
@property (nonatomic,retain) SCRCMathExpression * denominator;              //@synthesize denominator=_denominator - In the implementation block
@property (nonatomic,retain) SCRCMathExpression * operator;                 //@synthesize operator=_operator - In the implementation block
@property (assign,nonatomic) double lineThickness;                          //@synthesize lineThickness=_lineThickness - In the implementation block
-(void)dealloc;
-(id)description;
-(id)initWithDictionary:(id)arg1 ;
-(id)operator;
-(id)speakableDescriptionWithSpeakingStyle:(int)arg1 arePausesAllowed:(BOOL)arg2 ;
-(id)dollarCodeDescriptionWithNumberOfOuterRadicals:(unsigned)arg1 treePosition:(id)arg2 ;
-(id)subExpressions;
-(id)speakableSegmentsWithSpeakingStyle:(int)arg1 upToDepth:(unsigned)arg2 treePosition:(id)arg3 ;
-(id)latexMathModeDescription;
-(unsigned)fractionLevel;
-(id)speakableDescriptionAsBinomialCoefficientWithSpeakingStyle:(int)arg1 ;
-(id)dollarCodeDescriptionAsMixedNumberFractionWithTreePosition:(id)arg1 ;
-(id)dollarCodeDescriptionAsBinomialCoefficientWithTreePosition:(id)arg1 numberOfOuterRadicals:(unsigned)arg2 ;
-(id)speakableSegmentsAsBinomialCoefficientWithSpeakingStyle:(int)arg1 upToDepth:(unsigned)arg2 treePosition:(id)arg3 ;
-(id)mathMLString;
-(BOOL)isSimpleNumericalFraction;
-(BOOL)isUnlinedFraction;
-(void)setNumerator:(id)arg1 ;
-(void)setDenominator:(id)arg1 ;
-(void)setOperator:(id)arg1 ;
-(void)setLineThickness:(double)arg1 ;
-(id)numerator;
-(id)denominator;
-(double)lineThickness;
-(id)_speakableDescriptionWithSpeakingStyle:(int)arg1 arePausesAllowed:(BOOL)arg2 asBinomialCoefficient:(BOOL)arg3 ;
-(id)_speakableSegmentsWithSpeakingStyle:(int)arg1 upToDepth:(unsigned)arg2 treePosition:(id)arg3 asBinomialCoefficient:(BOOL)arg4 ;
-(id)_dollarCodeDescriptionAsBinomialCoefficient:(BOOL)arg1 orMixedNumberFraction:(BOOL)arg2 withNumberOfOuterRadicals:(unsigned)arg3 treePosition:(id)arg4 ;
@end

