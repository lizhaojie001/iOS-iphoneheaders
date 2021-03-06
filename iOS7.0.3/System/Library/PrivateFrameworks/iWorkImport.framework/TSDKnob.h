/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:09:47 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


#import <iWorkImport/iWorkImport-Structs.h>
@class TSDRep, CALayer, TSDBezierPath, CAShapeLayer;

@interface TSDKnob : NSObject {

	int mType;
	CGPoint mPosition;
	BOOL mOffsetValid;
	CGPoint mOffset;
	float mRadius;
	unsigned mTag;
	TSDRep* mRep;
	BOOL mWorksWhenRepLocked;
	BOOL mWorksWhenInVersionBrowsingMode;
	BOOL mShouldDisplayDirectlyOverRep;
	CALayer* mLayer;
	TSDBezierPath* mHitRegionPath;
	CAShapeLayer* mHitRegionLayer;

}

@property (assign,nonatomic) int type; 
@property (assign,nonatomic) CGPoint position; 
@property (assign,nonatomic) BOOL offsetValid; 
@property (assign,nonatomic) CGPoint offset; 
@property (assign,nonatomic) float radius; 
@property (assign,nonatomic) unsigned tag; 
@property (nonatomic,readonly) CALayer * layer; 
@property (nonatomic,copy) TSDBezierPath * hitRegionPath; 
@property (nonatomic,readonly) TSDRep * rep; 
@property (assign,nonatomic) BOOL worksWhenRepLocked; 
@property (assign,nonatomic) BOOL worksWhenInVersionBrowsingMode; 
@property (assign,nonatomic) BOOL shouldDisplayDirectlyOverRep; 
-(id)initWithType:(int)arg1 position:(CGPoint)arg2 radius:(float)arg3 tag:(unsigned)arg4 onRep:(id)arg5 ;
-(id)knobImage;
-(BOOL)isHitByUnscaledPoint:(CGPoint)arg1 andRep:(id)arg2 returningDistance:(float*)arg3 ;
-(void)updateHitRegionPathForRep:(id)arg1 ;
-(BOOL)overlapsWithKnob:(id)arg1 ;
-(BOOL)obscuresKnob:(id)arg1 ;
-(id)rep;
-(int)dragType;
-(void)setWorksWhenRepLocked:(BOOL)arg1 ;
-(void)setWorksWhenInVersionBrowsingMode:(BOOL)arg1 ;
-(void)setShouldDisplayDirectlyOverRep:(BOOL)arg1 ;
-(void)setHitRegionPath:(id)arg1 ;
-(BOOL)offsetValid;
-(void)setOffsetValid:(BOOL)arg1 ;
-(BOOL)shouldDisplayDirectlyOverRep;
-(float)i_rotationInDegreesForKnobOnRep:(id)arg1 ;
-(BOOL)worksWhenRepLocked;
-(BOOL)worksWhenInVersionBrowsingMode;
-(BOOL)isHitByUnscaledPoint:(CGPoint)arg1 andRep:(id)arg2 ;
-(id)hitRegionLayerForRep:(id)arg1 ;
-(CGRect)boundingBoxOfHitRegionForRep:(id)arg1 scale:(float)arg2 ;
-(id)hitRegionPath;
-(void)dealloc;
-(id)layer;
-(id)init;
-(id)description;
-(void)setType:(int)arg1 ;
-(int)type;
-(void)setTag:(unsigned)arg1 ;
-(void)setPosition:(CGPoint)arg1 ;
-(CGPoint)position;
-(unsigned)tag;
-(void)setOffset:(CGPoint)arg1 ;
-(CGPoint)offset;
-(void)setRadius:(float)arg1 ;
-(float)radius;
@end

