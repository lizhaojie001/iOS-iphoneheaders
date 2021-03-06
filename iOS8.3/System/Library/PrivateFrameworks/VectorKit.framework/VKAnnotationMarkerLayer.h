/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 3:59:58 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <VectorKit/VectorKit-Structs.h>
@class VKAnnotationModel, NSMutableArray, VKAnnotationMarker, NSArray;

@interface VKAnnotationMarkerLayer : NSObject {

	VKAnnotationModel* _model;
	VKAnnotationMarkerLayer* _superlayer;
	NSMutableArray* _sublayers;
	VKAnnotationMarker* _annotationMarker;
	CGPoint _centerOffset;
	CGPoint _accumulatedCenterOffset;
	char _hasScreenRect;
	SCD_Struct_VK11 _screenRect;
	char _hasMass;
	int _styleType;
	float _contentScale;

}

@property (assign,nonatomic) VKAnnotationMarkerLayer * superlayer;               //@synthesize superlayer=_superlayer - In the implementation block
@property (nonatomic,copy,readonly) NSArray * sublayers;                         //@synthesize sublayers=_sublayers - In the implementation block
@property (assign,nonatomic) int styleType;                                      //@synthesize styleType=_styleType - In the implementation block
@property (assign,nonatomic) CGPoint centerOffset;                               //@synthesize centerOffset=_centerOffset - In the implementation block
@property (assign,nonatomic) char hasMass;                                       //@synthesize hasMass=_hasMass - In the implementation block
@property (nonatomic,readonly) float contentScale;                               //@synthesize contentScale=_contentScale - In the implementation block
@property (assign,nonatomic) VKAnnotationModel * model;                          //@synthesize model=_model - In the implementation block
@property (assign,nonatomic) VKAnnotationMarker * annotationMarker;              //@synthesize annotationMarker=_annotationMarker - In the implementation block
@property (assign,nonatomic) CGPoint accumulatedCenterOffset;                    //@synthesize accumulatedCenterOffset=_accumulatedCenterOffset - In the implementation block
@property (nonatomic,readonly) char hasScreenRect;                               //@synthesize hasScreenRect=_hasScreenRect - In the implementation block
@property (assign,nonatomic) SCD_Struct_VK11 screenRect;                         //@synthesize screenRect=_screenRect - In the implementation block
-(void)dealloc;
-(id)init;
-(void)addSublayer:(id)arg1 ;
-(VKAnnotationMarkerLayer *)superlayer;
-(NSArray *)sublayers;
-(void)removeFromSuperlayer;
-(void)_updateStyle;
-(VKAnnotationModel *)model;
-(float)contentScale;
-(void)setModel:(VKAnnotationModel *)arg1 ;
-(void)runAnimation:(id)arg1 ;
-(void)layoutWithContext:(id)arg1 ;
-(void)stylesheetDidChange;
-(int)_vectorType;
-(void)willLayoutWithContext:(id)arg1 ;
-(void)appendCommandsToBuffer:(CommandBuffer*)arg1 inContext:(id)arg2 ;
-(float)distanceFromPoint:(VKPoint)arg1 canvasSize:(CGSize)arg2 ;
-(void)setAnnotationMarker:(VKAnnotationMarker *)arg1 ;
-(SCD_Struct_VK11)screenRect;
-(void)setStyleType:(int)arg1 ;
-(void)setScreenRect:(SCD_Struct_VK11)arg1 ;
-(void)updateWithStyleQuery:(const shared_ptr<md::StyleQuery>*)arg1 ;
-(void)setSuperlayer:(VKAnnotationMarkerLayer *)arg1 ;
-(void)setAccumulatedCenterOffset:(CGPoint)arg1 ;
-(void)removeSublayer:(id)arg1 ;
-(void)updateWithContentScale:(float)arg1 ;
-(char)shouldSnapToPixelsWithContext:(id)arg1 ;
-(char)hasMass;
-(char)hasScreenRect;
-(int)styleType;
-(VKAnnotationMarker *)annotationMarker;
-(id)_styleAttributes;
-(void)insertSublayer:(id)arg1 belowSublayer:(id)arg2 ;
-(void)insertSublayer:(id)arg1 aboveSublayer:(id)arg2 ;
-(void)setCenterOffset:(CGPoint)arg1 ;
-(CGPoint)centerOffset;
-(CGPoint)accumulatedCenterOffset;
-(void)setHasMass:(char)arg1 ;
@end

