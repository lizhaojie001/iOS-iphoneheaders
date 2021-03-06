/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:19:14 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <UIKit/UIKit-Structs.h>
@class NSMutableDictionary;

@interface UIStatusBarForegroundStyleAttributes : NSObject {

	float _height;
	int _legibilityStyle;
	NSMutableDictionary* _cachedFonts;

}
-(void)dealloc;
-(float)scale;
-(id)imageNamed:(id)arg1 ;
-(id)tintColor;
-(id)textColorForStyle:(int)arg1 ;
-(float)height;
-(id)uniqueIdentifier;
-(int)legibilityStyle;
-(char)usesVerticalLayout;
-(float)edgePadding;
-(id)textFontForStyle:(int)arg1 ;
-(float)standardPadding;
-(float)shadowPadding;
-(id)imageWithText:(id)arg1 ofItemType:(int)arg2 forWidth:(float)arg3 lineBreakMode:(int)arg4 letterSpacing:(float)arg5 textAlignment:(int)arg6 style:(int)arg7 withLegibilityStyle:(int)arg8 legibilityStrength:(float)arg9 ;
-(id)imageNamed:(id)arg1 withLegibilityStyle:(int)arg2 legibilityStrength:(float)arg3 ;
-(id)textForNetworkType:(int)arg1 ;
-(id)cachedImageWithText:(id)arg1 forWidth:(float)arg2 lineBreakMode:(int)arg3 letterSpacing:(float)arg4 textAlignment:(int)arg5 style:(int)arg6 itemType:(int)arg7 ;
-(id)batteryImageNameWithCapacity:(float)arg1 ;
-(id)cachedImageNamed:(id)arg1 inTempGroup:(id)arg2 ;
-(float)batteryAccessoryMargin;
-(void)drawBatteryInsidesWithSize:(CGSize)arg1 capacity:(float)arg2 charging:(char)arg3 ;
-(void)cacheImage:(id)arg1 named:(id)arg2 inTempGroup:(id)arg3 ;
-(float)airplaneItemExtraMargin;
-(id)bluetoothBatteryImageNameWithCapacity:(float)arg1 ;
-(void)drawBluetoothBatteryInsidesWithSize:(CGSize)arg1 capacity:(float)arg2 ;
-(float)bluetoothBatteryExtraPadding;
-(int)activityIndicatorStyleWithSyncActivity:(char)arg1 ;
-(void)setThermalColorShadow;
-(float)sizeForMoonMaskVisible:(char)arg1 ;
-(CGPoint)positionForMoonMaskInBounds:(CGRect)arg1 ;
-(id)untintedImageNamed:(id)arg1 ;
-(float)textOffsetForStyle:(int)arg1 ;
-(void)_drawText:(id)arg1 inRect:(CGRect)arg2 withFont:(id)arg3 lineBreakMode:(int)arg4 letterSpacing:(float)arg5 textAlignment:(int)arg6 ;
-(void)drawTextInRect:(CGRect)arg1 withColor:(id)arg2 withBlock:(/*^block*/id)arg3 ;
-(id)expandedNameForImageName:(id)arg1 ;
-(id)_cachedImageNamed:(id)arg1 ;
-(id)uncachedImageNamed:(id)arg1 ;
-(void)_cacheImage:(id)arg1 named:(id)arg2 ;
-(id)shadowImageForImage:(id)arg1 withIdentifier:(id)arg2 forStyle:(int)arg3 withStrength:(float)arg4 ;
-(id)shadowImageForImage:(id)arg1 withIdentifier:(id)arg2 forStyle:(int)arg3 withStrength:(float)arg4 inTempGroup:(id)arg5 ;
-(void)drawText:(id)arg1 forWidth:(float)arg2 lineBreakMode:(int)arg3 letterSpacing:(float)arg4 textAlignment:(int)arg5 style:(int)arg6 textSize:(CGSize)arg7 textHeight:(float)arg8 ;
-(id)makeTextFontForStyle:(int)arg1 ;
-(id)initWithHeight:(float)arg1 legibilityStyle:(int)arg2 ;
-(int)legacyStyle;
@end

