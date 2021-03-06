/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:25:14 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/_UISettings.h>

@interface SBFGlintyStringSettings : _UISettings {

	bool _designMode;
	double _speed;
	double _spotlightOpacity;
	double _spotlightAnimationDuration;

}

@property (assign,setter=setDesignMode:,nonatomic) bool designMode;              //@synthesize designMode=_designMode - In the implementation block
@property (assign,nonatomic) double speed;                                       //@synthesize speed=_speed - In the implementation block
@property (assign,nonatomic) double spotlightOpacity;                            //@synthesize spotlightOpacity=_spotlightOpacity - In the implementation block
@property (assign,nonatomic) double spotlightAnimationDuration;                  //@synthesize spotlightAnimationDuration=_spotlightAnimationDuration - In the implementation block
+(id)archivedSettingsGroup;
-(void)setSpeed:(double)arg1 ;
-(double)speed;
-(void)setDefaultValues;
-(bool)designMode;
-(void)setDesignMode:(bool)arg1 ;
-(id)settingsHUDConfiguration;
-(void)setSpotlightOpacity:(double)arg1 ;
-(void)setSpotlightAnimationDuration:(double)arg1 ;
-(double)spotlightOpacity;
-(double)spotlightAnimationDuration;
@end

