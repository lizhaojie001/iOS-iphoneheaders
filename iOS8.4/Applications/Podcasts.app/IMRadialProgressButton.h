/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 7:10:07 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /Applications/Podcasts.app/Podcasts
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Podcasts/Podcasts-Structs.h>
#import <UIKit/UIButton.h>

@class UIColor;

@interface IMRadialProgressButton : UIButton {

	float _progress;
	UIColor* _progressColor;
	UIColor* _emptyProgressColor;
	UIColor* _selectedProgressColor;

}

@property (assign,nonatomic) float progress;                               //@synthesize progress=_progress - In the implementation block
@property (nonatomic,retain) UIColor * progressColor;                      //@synthesize progressColor=_progressColor - In the implementation block
@property (nonatomic,retain) UIColor * emptyProgressColor;                 //@synthesize emptyProgressColor=_emptyProgressColor - In the implementation block
@property (nonatomic,retain) UIColor * selectedProgressColor;              //@synthesize selectedProgressColor=_selectedProgressColor - In the implementation block
-(void)setEmptyProgressColor:(UIColor *)arg1 ;
-(void)setSelectedProgressColor:(UIColor *)arg1 ;
-(UIColor *)selectedProgressColor;
-(UIColor *)emptyProgressColor;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)drawRect:(CGRect)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setProgress:(float)arg1 ;
-(CGRect)backgroundRectForBounds:(CGRect)arg1 ;
-(CGRect)contentRectForBounds:(CGRect)arg1 ;
-(float)progress;
-(void)setProgressColor:(UIColor *)arg1 ;
-(UIColor *)progressColor;
@end

