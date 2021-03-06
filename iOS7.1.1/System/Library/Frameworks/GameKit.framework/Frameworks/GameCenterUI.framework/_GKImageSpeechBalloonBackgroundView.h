/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:21:20 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/GameKit.framework/Frameworks/GameCenterUI.framework/GameCenterUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GameCenterUI/GameCenterUI-Structs.h>
#import <UIKit/UIImageView.h>

@class UIImage;

@interface _GKImageSpeechBalloonBackgroundView : UIImageView {

	unsigned char _tipDirection;
	UIImage* _templateImage;

}

@property (assign,nonatomic) unsigned char tipDirection;              //@synthesize tipDirection=_tipDirection - In the implementation block
@property (nonatomic,retain) UIImage * templateImage;                 //@synthesize templateImage=_templateImage - In the implementation block
-(unsigned char)tipDirection;
-(void)setTipDirection:(unsigned char)arg1 ;
-(void)setTemplateImage:(id)arg1 ;
-(id)templateImage;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)tintColorDidChange;
-(void)updateImage;
-(void)updateTransform;
@end

