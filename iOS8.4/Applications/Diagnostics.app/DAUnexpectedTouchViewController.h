/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 7:09:27 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /Applications/Diagnostics.app/Diagnostics
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Diagnostics/DATestViewController.h>

@class NSDictionary, NSString, UIView, UIProgressView, UILabel, NSTimer, NSMutableArray;

@interface DAUnexpectedTouchViewController : DATestViewController {

	NSDictionary* _touchMap;
	NSString* _fadeColor;
	NSString* _touchColor;
	int _minutesToRun;
	UIView* _progressView;
	UIProgressView* _progressBar;
	UILabel* _progressLabel;
	UILabel* _doNotDisturbLabel;
	NSTimer* _progressTimer;
	NSMutableArray* _hitPixels;
	NSMutableArray* _hitPixelTimes;
	NSMutableArray* _touchEvents;
	int _secondsTicked;
	NSMutableArray* _allResults;

}

@property (nonatomic,retain) NSDictionary * touchMap;                     //@synthesize touchMap=_touchMap - In the implementation block
@property (nonatomic,copy) NSString * fadeColor;                          //@synthesize fadeColor=_fadeColor - In the implementation block
@property (nonatomic,copy) NSString * touchColor;                         //@synthesize touchColor=_touchColor - In the implementation block
@property (assign,nonatomic) int minutesToRun;                            //@synthesize minutesToRun=_minutesToRun - In the implementation block
@property (nonatomic,retain) UIView * progressView;                       //@synthesize progressView=_progressView - In the implementation block
@property (nonatomic,retain) UIProgressView * progressBar;                //@synthesize progressBar=_progressBar - In the implementation block
@property (nonatomic,retain) UILabel * progressLabel;                     //@synthesize progressLabel=_progressLabel - In the implementation block
@property (nonatomic,retain) UILabel * doNotDisturbLabel;                 //@synthesize doNotDisturbLabel=_doNotDisturbLabel - In the implementation block
@property (nonatomic,retain) NSTimer * progressTimer;                     //@synthesize progressTimer=_progressTimer - In the implementation block
@property (nonatomic,retain) NSMutableArray * hitPixels;                  //@synthesize hitPixels=_hitPixels - In the implementation block
@property (nonatomic,retain) NSMutableArray * hitPixelTimes;              //@synthesize hitPixelTimes=_hitPixelTimes - In the implementation block
@property (nonatomic,retain) NSMutableArray * touchEvents;                //@synthesize touchEvents=_touchEvents - In the implementation block
@property (assign,nonatomic) int secondsTicked;                           //@synthesize secondsTicked=_secondsTicked - In the implementation block
@property (nonatomic,retain) NSMutableArray * allResults;                 //@synthesize allResults=_allResults - In the implementation block
-(void)endTest;
-(id)initWithTest:(id)arg1 fullScreen:(char)arg2 delegate:(id)arg3 ;
-(char)parameterize:(id)arg1 ;
-(void)setAllResults:(NSMutableArray *)arg1 ;
-(NSMutableArray *)allResults;
-(void)cancelTestWithCompletion:(/*^block*/id)arg1 ;
-(void)setTouchMap:(NSDictionary *)arg1 ;
-(NSDictionary *)touchMap;
-(void)testFailedToExecute;
-(void)setHitPixels:(NSMutableArray *)arg1 ;
-(void)setHitPixelTimes:(NSMutableArray *)arg1 ;
-(void)setTouchEvents:(NSMutableArray *)arg1 ;
-(void)setSecondsTicked:(int)arg1 ;
-(void)setFadeColor:(NSString *)arg1 ;
-(void)setTouchColor:(NSString *)arg1 ;
-(void)setMinutesToRun:(int)arg1 ;
-(void)setProgressLabel:(UILabel *)arg1 ;
-(UILabel *)progressLabel;
-(int)minutesToRun;
-(void)setDoNotDisturbLabel:(UILabel *)arg1 ;
-(UILabel *)doNotDisturbLabel;
-(void)updateTimer:(id)arg1 ;
-(int)secondsTicked;
-(NSMutableArray *)hitPixels;
-(NSMutableArray *)hitPixelTimes;
-(NSMutableArray *)touchEvents;
-(void)hideProgressView;
-(void)highlightView:(id)arg1 touchEvent:(id)arg2 ;
-(NSString *)touchColor;
-(NSString *)fadeColor;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)viewWillAppear:(char)arg1 ;
-(void)updateViewConstraints;
-(void)setProgressView:(UIView *)arg1 ;
-(UIView *)progressView;
-(void)setProgressTimer:(NSTimer *)arg1 ;
-(NSTimer *)progressTimer;
-(UIProgressView *)progressBar;
-(void)setProgressBar:(UIProgressView *)arg1 ;
-(void)setupView;
@end
