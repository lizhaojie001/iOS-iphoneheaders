/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:21:19 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/GameKit.framework/Frameworks/GameCenterUI.framework/GameCenterUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GameCenterUI/GameCenterUI-Structs.h>
#import <UIKit/UIView.h>

@class UILabel, NSString;

@interface GKMultiplayerActivityView : UIView {

	UILabel* _label;

}

@property (nonatomic,copy) NSString * text; 
@property (assign,nonatomic) UILabel * label;              //@synthesize label=_label - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(id)text;
-(void)setText:(id)arg1 ;
-(id)label;
-(void)setLabel:(id)arg1 ;
@end
