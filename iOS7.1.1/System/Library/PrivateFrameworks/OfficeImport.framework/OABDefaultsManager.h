/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:24:08 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <OfficeImport/OABPropertiesManager.h>

@interface OABDefaultsManager : NSObject <OABPropertiesManager>
-(EshColor)shadowColor;
-(int)shadowAlpha;
-(int)strokeWidth;
-(EshColor)fillFgColor;
-(bool)isStroked;
-(EshColor)strokeFgColor;
-(EshColor)fillBgColor;
-(EshColor)strokeBgColor;
-(bool)isFilled;
-(bool)isFillOK;
-(bool)isStrokeOK;
-(bool)isShadowOK;
-(bool)isTextPath;
-(id)textPathUnicodeString;
-(int)textPathTextAlignment;
-(int)textPathFontSize;
-(id)textPathFontFamily;
-(bool)textPathBold;
-(bool)textPathItalic;
-(bool)textPathUnderline;
-(bool)textPathSmallcaps;
-(bool)textPathStrikethrough;
-(int)strokeFillType;
-(unsigned)strokeFillBlipID;
-(id)strokeFillBlipName;
-(int)strokeFgAlpha;
-(int)strokeMiterLimit;
-(int)strokeCompoundType;
-(int)strokePresetDash;
-(const EshTablePropVal<int>Ref)strokeCustomDash;
-(int)strokeCapStyle;
-(int)strokeJoinStyle;
-(int)strokeStartArrowType;
-(int)strokeStartArrowWidth;
-(int)strokeStartArrowLength;
-(int)strokeEndArrowType;
-(int)strokeEndArrowWidth;
-(int)strokeEndArrowLength;
-(bool)isShadowed;
-(int)shadowType;
-(int)shadowOffsetX;
-(int)shadowOffsetY;
-(int)shadowSoftness;
-(int)fillType;
-(int)fillFgAlpha;
-(int)fillBgAlpha;
-(int)fillAngle;
-(int)fillFocus;
-(int)fillFocusLeft;
-(int)fillFocusTop;
-(int)fillFocusRight;
-(int)fillFocusBottom;
-(const EshTablePropVal<EshGradientStop>Ref)fillGradientColors;
-(unsigned)fillBlipID;
-(id)fillBlipName;
-(EshBlip*)fillBlipDataReference;
-(bool)hidden;
@end

