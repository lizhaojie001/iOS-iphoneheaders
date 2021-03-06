/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:09:22 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSCH3DAbstractLimitingSeriesUpgrader.h>

@class TSCH3DChartResizerHelper, TSCH3DChartBoundsLayout;

@interface TSCH3DSageGeometryHelperLimitingSeriesUpgrader : TSCH3DAbstractLimitingSeriesUpgrader {

	TSCH3DChartResizerHelper* mResizerHelper;
	TSCH3DChartBoundsLayout* mBoundsLayout;

}

@property (nonatomic,readonly) TSCH3DChartResizerHelper * resizerHelper; 
@property (nonatomic,readonly) TSCH3DChartBoundsLayout * boundsLayout; 
-(id)sceneResetWithLayoutSettings:(SCD_Struct_TS339)arg1 ;
-(CGRect)oldResizingFrame;
-(id)containingViewportByResizingScene:(id)arg1 toResizingFrame:(CGRect)arg2 ;
-(id)boundsLayoutByResizingToLayoutSize:(const tvec2<float>*)arg1 ;
-(id)resizerHelper;
-(id)boundsLayout;
-(void)dealloc;
@end

