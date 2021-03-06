/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:57:20 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/SiriUI.framework/SiriUI
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <SiriUI/SiriUI-Structs.h>
#import <UIKit/UIView.h>

@class UIImage;

@interface SiriUIStarsView : UIView {

	double _rating;
	double _maxRating;
	int _numberOfStars;
	UIImage* _starsImage;
	BOOL _snapsToHalfStar;
	int _style;

}

@property (assign,nonatomic) int style;                         //@synthesize style=_style - In the implementation block
@property (assign,nonatomic) BOOL snapsToHalfStar;              //@synthesize snapsToHalfStar=_snapsToHalfStar - In the implementation block
+(id)_starsImageCache;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setStyle:(int)arg1 ;
-(int)style;
-(id)_starMaskSmall;
-(id)_starMaskMedium;
-(id)_starMaskLarge;
-(void)_updateStarsForStyleAndTotalNumber;
-(id)_cacheKeyForStyle:(int)arg1 numberOfStars:(int)arg2 ;
-(id)_starMaskForStyle:(int)arg1 ;
-(float)_starSpacingForStyle:(int)arg1 ;
-(CGSize)_sizeForStar:(id)arg1 spacing:(float)arg2 ;
-(float)_xForFractionalPartOfStars:(float)arg1 inWidth:(float)arg2 ;
-(void)setRating:(double)arg1 maxRating:(double)arg2 ;
-(BOOL)snapsToHalfStar;
-(void)setSnapsToHalfStar:(BOOL)arg1 ;
-(void).cxx_destruct;
@end

