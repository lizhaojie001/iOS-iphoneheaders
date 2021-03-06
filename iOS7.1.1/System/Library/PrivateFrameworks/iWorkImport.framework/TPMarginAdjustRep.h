/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:26:56 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSDRep.h>

@class TPPaginatedPageInfo;

@interface TPMarginAdjustRep : TSDRep {

	bool _hideKnobs;
	bool _topKnobEncroachingHeader;
	bool _bottomKnobEncroachingFooter;
	double _minTopMargin;
	double _minBottomMargin;

}

@property (nonatomic,readonly) TPPaginatedPageInfo * pageInfo; 
@property (assign,nonatomic) bool hideKnobs;                                //@synthesize hideKnobs=_hideKnobs - In the implementation block
@property (assign,nonatomic) double minTopMargin;                           //@synthesize minTopMargin=_minTopMargin - In the implementation block
@property (assign,nonatomic) double minBottomMargin;                        //@synthesize minBottomMargin=_minBottomMargin - In the implementation block
-(CGRect)boundsForStandardKnobs;
-(bool)directlyManagesLayerContent;
-(void)updateFromLayout;
-(void)dynamicallyResizingWithTracker:(id)arg1 ;
-(void)addKnobsToArray:(id)arg1 ;
-(bool)shouldCreateKnobs;
-(bool)wantsGuidesWhileResizing;
-(id)pageInfo;
-(void)setHideKnobs:(bool)arg1 ;
-(bool)hideKnobs;
-(void)hideKnobsEncroachingHeader:(double)arg1 orFooter:(double)arg2 ;
-(double)minTopMargin;
-(void)setMinTopMargin:(double)arg1 ;
-(double)minBottomMargin;
-(void)setMinBottomMargin:(double)arg1 ;
-(bool)containsPoint:(CGPoint)arg1 ;
@end

