/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:29:54 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PreferenceBundles/BatteryUsageUI.bundle/BatteryUsageUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <BatteryUsageUI/BatteryUsageUI-Structs.h>
#import <UIKit/UIView.h>

@class NSDate, NSMutableArray;

@interface PLBatteryUIGraphView : UIView {

	NSDate* startDate;
	NSDate* endDate;
	float maxPower;
	float minPower;
	int _errValue;
	int _graphType;
	NSMutableArray* _inputData;

}

@property (nonatomic,copy) NSMutableArray * inputData;              //@synthesize inputData=_inputData - In the implementation block
@property (assign,nonatomic) int graphType;                         //@synthesize graphType=_graphType - In the implementation block
+(int)graphHeight;
-(void)drawErrorText:(CGContextRef)arg1 andRect:(CGRect)arg2 ;
-(void)drawPoints:(CGContextRef)arg1 andRect:(CGRect)arg2 ;
-(int)graphType;
-(void)setInputData:(NSMutableArray *)arg1 ;
-(void)setRangesFromArray:(id)arg1 ;
-(void)drawGrid:(CGContextRef)arg1 andRect:(CGRect)arg2 ;
-(NSMutableArray *)inputData;
-(void)setGraphType:(int)arg1 ;
-(void)setDefaultRange;
-(id)initWithFrame:(CGRect)arg1 andData:(id)arg2 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
@end
