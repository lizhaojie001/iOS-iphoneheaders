/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:55:48 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <MobileTimer/MobileTimer-Structs.h>
#import <UIKit/UIView.h>
#import <MobileTimer/Clock.h>

@protocol WorldClockCellViewDelegate;
@class NSTimeZone, AnalogClockView, DigitalClockLabel, UILabel;

@interface WorldClockCellView : UIView <Clock> {

	NSTimeZone* _timeZone;
	int _nowInMinutes;
	BOOL _editing;
	BOOL _started;
	<WorldClockCellViewDelegate>* _delegate;
	int _style;
	AnalogClockView* _analogClock;
	DigitalClockLabel* _digitalClock;
	UILabel* _nameLabel;
	UILabel* _combinedLabel;

}

@property (assign,nonatomic) <WorldClockCellViewDelegate> * delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) int style;                                            //@synthesize style=_style - In the implementation block
@property (nonatomic,readonly) AnalogClockView * analogClock;                      //@synthesize analogClock=_analogClock - In the implementation block
@property (nonatomic,readonly) DigitalClockLabel * digitalClock;                   //@synthesize digitalClock=_digitalClock - In the implementation block
@property (nonatomic,readonly) UILabel * nameLabel;                                //@synthesize nameLabel=_nameLabel - In the implementation block
@property (nonatomic,readonly) UILabel * combinedLabel;                            //@synthesize combinedLabel=_combinedLabel - In the implementation block
@property (nonatomic,readonly) BOOL started;                                       //@synthesize started=_started - In the implementation block
@property (nonatomic,readonly) int runMode; 
+(id)combinedStringFromDate:(id)arg1 withTimezoneOffset:(int)arg2 dayText:(id*)arg3 hourText:(id*)arg4 usesSeparateLines:(BOOL)arg5 ;
-(id)nameLabel;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(void)layoutSubviews;
-(id)delegate;
-(void)setStyle:(int)arg1 ;
-(void)setTimeZone:(id)arg1 ;
-(int)style;
-(void)setStyle:(int)arg1 animated:(BOOL)arg2 ;
-(void)setEditing:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)start;
-(double)updateInterval;
-(void)stop;
-(BOOL)started;
-(double)coarseUpdateInterval;
-(void)significantTimeChange:(id)arg1 ;
-(void)localeChange:(id)arg1 ;
-(id)stringFromDate:(id)arg1 withTimezoneOffset:(int)arg2 ;
-(void)updateTimeContinuously:(int)arg1 ;
-(int)runMode;
-(id)analogClock;
-(id)digitalClock;
-(id)combinedLabel;
-(void)updateTime;
@end

