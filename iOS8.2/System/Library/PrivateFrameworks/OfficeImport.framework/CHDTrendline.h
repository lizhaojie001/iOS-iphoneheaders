/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:20:37 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class OADGraphicProperties, CHDTrendlineLabel, EDString;

@interface CHDTrendline : NSObject {

	BOOL mDisplayEquation;
	BOOL mDisplayRSquaredValue;
	double mBackward;
	double mForward;
	double mInterceptYAxis;
	int mPolynomialOrder;
	long mMovingAveragePeriod;
	int mType;
	OADGraphicProperties* mGraphicProperties;
	CHDTrendlineLabel* mLabel;
	EDString* mName;

}
+(id)trendline;
-(void)dealloc;
-(id)init;
-(void)setType:(int)arg1 ;
-(int)type;
-(void)setName:(id)arg1 ;
-(id)name;
-(id)label;
-(void)setLabel:(id)arg1 ;
-(id)graphicProperties;
-(void)setGraphicProperties:(id)arg1 ;
-(BOOL)isDisplayEquation;
-(void)setDisplayEquation:(BOOL)arg1 ;
-(BOOL)isDisplayRSquaredValue;
-(void)setDisplayRSquaredValue:(BOOL)arg1 ;
-(double)backward;
-(void)setBackward:(double)arg1 ;
-(double)forward;
-(void)setForward:(double)arg1 ;
-(double)interceptYAxis;
-(void)setInterceptYAxis:(double)arg1 ;
-(int)polynomialOrder;
-(void)setPolynomialOrder:(int)arg1 ;
-(long)movingAveragePeriod;
-(void)setMovingAveragePeriod:(long)arg1 ;
-(id)defaultNameWithSeriesName:(id)arg1 ;
@end

