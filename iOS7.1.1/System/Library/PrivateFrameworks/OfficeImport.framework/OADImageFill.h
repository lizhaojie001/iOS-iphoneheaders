/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:24:10 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <OfficeImport/OADFill.h>

@class OADBlipRef, OADRelativeRect, OADImageFillTechnique;

@interface OADImageFill : OADFill {

	OADBlipRef* mBlipRef;
	bool mIsBlipRefOverridden;
	OADRelativeRect* mSourceRect;
	bool mIsSourceRectOverridden;
	int mDpi;
	bool mIsDpiOverridden;
	bool mRotateWithShape;
	bool mIsRotateWithShapeOverridden;
	OADImageFillTechnique* mTechnique;
	bool mIsTechniqueOverridden;

}
+(id)defaultProperties;
-(void)dealloc;
-(bool)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone)arg1 ;
-(id)color;
-(bool)isBlipRefOverridden;
-(id)blipRef;
-(bool)isSourceRectOverridden;
-(id)sourceRect;
-(id)technique;
-(void)setTechnique:(id)arg1 ;
-(void)setBlipRef:(id)arg1 ;
-(void)setSourceRect:(id)arg1 ;
-(id)initWithDefaults;
-(void)setStyleColor:(id)arg1 ;
-(void)setRotateWithShape:(bool)arg1 ;
-(bool)isRotateWithShapeOverridden;
-(bool)rotateWithShape;
-(void)setDpi:(int)arg1 ;
-(bool)isDpiOverridden;
-(bool)isTechniqueOverridden;
-(int)dpi;
-(void)setParent:(id)arg1 ;
@end
