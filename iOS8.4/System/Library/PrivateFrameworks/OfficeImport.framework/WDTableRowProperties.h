/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:24:20 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <OfficeImport/NSCopying.h>

@class WDTableProperties, WDCharacterProperties;

@interface WDTableRowProperties : NSObject <NSCopying> {

	WDTableProperties* mTableProperties;
	WDCharacterProperties* mCharacterProperties;
	unsigned mOriginal : 1;
	unsigned mTracked : 1;
	unsigned mResolved : 1;
	SCD_Struct_WD101 mOriginalProperties;
	SCD_Struct_WD101 mTrackedProperties;

}
-(void)addPropertiesValues:(SCD_Struct_WD101*)arg1 to:(SCD_Struct_WD101*)arg2 ;
-(void)addProperties:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)height;
-(id)initWithDocument:(id)arg1 ;
-(void)setHeight:(long long)arg1 ;
-(void)setHeader:(BOOL)arg1 ;
-(BOOL)header;
-(id)characterProperties;
-(BOOL)isHeightOverridden;
-(id)tableProperties;
-(void)setResolveMode:(int)arg1 ;
-(int)resolveMode;
-(void)setWidthBefore:(short)arg1 ;
-(void)setWidthBeforeType:(int)arg1 ;
-(void)setWidthAfter:(short)arg1 ;
-(void)setWidthAfterType:(int)arg1 ;
-(void)setHeightType:(int)arg1 ;
-(BOOL)isWidthBeforeOverridden;
-(short)widthBefore;
-(BOOL)isWidthBeforeTypeOverridden;
-(int)widthBeforeType;
-(BOOL)isWidthAfterOverridden;
-(short)widthAfter;
-(BOOL)isWidthAfterTypeOverridden;
-(int)widthAfterType;
-(BOOL)isHeaderOverridden;
-(BOOL)isHeightTypeOverridden;
-(int)heightType;
@end

