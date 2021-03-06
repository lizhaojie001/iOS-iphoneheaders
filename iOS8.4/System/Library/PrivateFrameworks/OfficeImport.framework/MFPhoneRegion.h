/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:24:12 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <OfficeImport/MFRegion.h>

@class OITSDBezierPath;

@interface MFPhoneRegion : MFRegion {

	OITSDBezierPath* m_path;
	CGRect m_bounds;

}
-(void)dealloc;
-(id)initWithRects:(id)arg1 :(CGRect)arg2 :(id)arg3 ;
-(id)initWithPath:(id)arg1 :(CGRect)arg2 ;
-(int)setClip:(id)arg1 :(int)arg2 ;
-(int)fill:(id)arg1 :(id)arg2 ;
-(int)frame:(id)arg1 :(id)arg2 ;
-(int)invert:(id)arg1 ;
@end

