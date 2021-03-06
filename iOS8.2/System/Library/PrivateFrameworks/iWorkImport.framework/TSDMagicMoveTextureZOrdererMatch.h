/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:27:13 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class TSDTextureSet, TSDMagicMoveAnimationMatch;

@interface TSDMagicMoveTextureZOrdererMatch : NSObject {

	char _isOutgoingZIndexUnmatched;
	char _isIncomingZIndexUnmatched;
	TSDTextureSet* _outgoingTexture;
	TSDTextureSet* _incomingTexture;
	int _outgoingZIndex;
	int _incomingZIndex;
	TSDMagicMoveAnimationMatch* _animationMatch;

}

@property (nonatomic,readonly) TSDTextureSet * outgoingTexture;                          //@synthesize outgoingTexture=_outgoingTexture - In the implementation block
@property (nonatomic,readonly) TSDTextureSet * incomingTexture;                          //@synthesize incomingTexture=_incomingTexture - In the implementation block
@property (assign,nonatomic) int outgoingZIndex;                                         //@synthesize outgoingZIndex=_outgoingZIndex - In the implementation block
@property (assign,nonatomic) int incomingZIndex;                                         //@synthesize incomingZIndex=_incomingZIndex - In the implementation block
@property (nonatomic,readonly) char isOutgoingZIndexUnmatched;                           //@synthesize isOutgoingZIndexUnmatched=_isOutgoingZIndexUnmatched - In the implementation block
@property (nonatomic,readonly) char isIncomingZIndexUnmatched;                           //@synthesize isIncomingZIndexUnmatched=_isIncomingZIndexUnmatched - In the implementation block
@property (nonatomic,readonly) TSDMagicMoveAnimationMatch * animationMatch;              //@synthesize animationMatch=_animationMatch - In the implementation block
-(TSDTextureSet *)incomingTexture;
-(TSDTextureSet *)outgoingTexture;
-(TSDMagicMoveAnimationMatch *)animationMatch;
-(int)outgoingZIndex;
-(int)incomingZIndex;
-(id)initWithAnimationMatch:(id)arg1 ;
-(char)intersectsZOrdererMatch:(id)arg1 withAttemptedZIndex:(int)arg2 ;
-(char)intersectsZOrdererMatch:(id)arg1 ;
-(float)intersectionPercentWithZOrdererMatch:(id)arg1 ;
-(float)interpolatedZIndexAtPercent:(float)arg1 ;
-(void)setOutgoingZIndex:(int)arg1 ;
-(void)setIncomingZIndex:(int)arg1 ;
-(char)isOutgoingZIndexUnmatched;
-(char)isIncomingZIndexUnmatched;
-(id)description;
@end

