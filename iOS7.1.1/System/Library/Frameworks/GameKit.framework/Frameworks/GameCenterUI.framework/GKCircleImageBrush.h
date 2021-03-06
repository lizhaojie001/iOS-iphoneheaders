/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:21:18 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/GameKit.framework/Frameworks/GameCenterUI.framework/GameCenterUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GameCenterUI/GameCenterUI-Structs.h>
#import <GameCenterUI/GKImageBrush.h>
#import <GameCenterUI/GKBrushIdentification.h>

@interface GKCircleImageBrush : GKImageBrush <GKBrushIdentification> {

	CGSize _sizeOverride;

}

@property (assign,nonatomic) CGSize sizeOverride;              //@synthesize sizeOverride=_sizeOverride - In the implementation block
-(CGSize)sizeForInput:(id)arg1 ;
-(void)drawInRect:(CGRect)arg1 withContext:(CGContextRef)arg2 input:(id)arg3 ;
-(id)renderedImageIdentifier;
-(double)scaleForInput:(id)arg1 ;
-(CGSize)sizeOverride;
-(void)setSizeOverride:(CGSize)arg1 ;
@end

