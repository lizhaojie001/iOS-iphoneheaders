/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:26:41 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <VectorKit/VectorKit-Structs.h>
#import <VectorKit/VKRenderStyle.h>

@interface VKLabelDrawStyle : VKRenderStyle
+(int)renderStyleID;
-(unsigned)layer;
-(id)genericShieldStyle;
-(unsigned)minVisibleZoom;
-(unsigned)maxVisibleZoom;
-(char)areTextBoxesEverVisible;
-(char)isPOITextEverVisible;
-(unsigned)minArrowZoom;
-(unsigned char)dedupeRank;
-(void)getLabelStyle:(VKLabelStyle*)arg1 atZoom:(float)arg2 updateOnlyContinuousValues:(char)arg3 contentScale:(float)arg4 scaleFactor:(int)arg5 ;
-(double)mapWidthInEmsForZoom:(int)arg1 scaleFactor:(int)arg2 ;
-(double)minimumRoadArrowSpacingForZoom:(int)arg1 ;
-(double)minimumRoadLabelSpacingForZoom:(int)arg1 scaleFactor:(int)arg2 ;
-(double)minimumShieldSpacingForZoom:(int)arg1 ;
-(double)minimumMultiShieldGapForZoom:(int)arg1 ;
-(void)getRoadSignStyle:(SCD_Struct_VK603*)arg1 atZoom:(float)arg2 contentScale:(float)arg3 scaleFactor:(int)arg4 ;
-(void)getNavShieldStyle:(SCD_Struct_VK603*)arg1 atZoom:(float)arg2 contentScale:(float)arg3 scaleFactor:(int)arg4 ;
-(char)areNavSignsVisible;
-(char)areNavShieldsVisible;
-(void)getFontOptions:(FontOptions*)arg1 atZoom:(float)arg2 contentScale:(float)arg3 scaleFactor:(int)arg4 ;
-(char)arrowVisibleAtZoom:(float)arg1 ;
-(char)showShieldTextAsLabelAtZoom:(float)arg1 ;
-(unsigned)arrowLayer;
-(char)visibleAtMaxZoom:(float)arg1 ;
-(char)areShieldsEverVisible;
@end

