/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:53:04 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <QuartzCore/QuartzCore-Structs.h>
#import <QuartzCore/CALayer.h>

@class NSString, NSArray;

@interface CABackdropLayer : CALayer

@property (getter=isEnabled) BOOL enabled; 
@property (copy) NSString * groupName; 
@property (assign) float scale; 
@property (assign) CGRect backdropRect; 
@property (assign) float marginWidth; 
@property (copy) NSArray * groupFilters; 
@property (copy) NSString * statisticsType; 
@property (assign) double statisticsInterval; 
+(id)defaultValueForKey:(id)arg1 ;
+(BOOL)CA_automaticallyNotifiesObservers:(Class)arg1 ;
+(BOOL)_hasRenderLayerSubclass;
-(void)layerDidBecomeVisible:(BOOL)arg1 ;
-(bool)_renderLayerDefinesProperty:(unsigned)arg1 ;
-(unsigned)_renderLayerPropertyAnimationFlags:(unsigned)arg1 ;
-(Layer*)_copyRenderLayer:(Transaction*)arg1 layerFlags:(unsigned)arg2 commitFlags:(unsigned*)arg3 ;
-(id)statisticsType;
-(CGRect)backdropRect;
-(id)groupFilters;
-(void)setBackdropRect:(CGRect)arg1 ;
-(void)setGroupFilters:(id)arg1 ;
-(float)scale;
-(void)didChangeValueForKey:(id)arg1 ;
-(BOOL)isEnabled;
-(void)setEnabled:(BOOL)arg1 ;
-(void)setScale:(float)arg1 ;
-(void)setGroupName:(id)arg1 ;
-(id)groupName;
-(void)setStatisticsInterval:(double)arg1 ;
-(double)statisticsInterval;
-(void)setStatisticsType:(id)arg1 ;
-(id)statisticsValues;
-(float)marginWidth;
-(void)setMarginWidth:(float)arg1 ;
@end

