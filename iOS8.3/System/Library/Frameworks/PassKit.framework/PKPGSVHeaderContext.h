/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, June 24, 2015 at 11:04:34 PM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/Frameworks/PassKit.framework/PassKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <PassKit/PassKit-Structs.h>
@class UIView;

@interface PKPGSVHeaderContext : NSObject {

	UIView* _headerView;
	UIView* _subheaderView;
	UIEdgeInsets _headerMargins;
	UIEdgeInsets _subheaderMargins;

}

@property (nonatomic,readonly) UIView * headerView;                      //@synthesize headerView=_headerView - In the implementation block
@property (assign,nonatomic) UIEdgeInsets headerMargins;                 //@synthesize headerMargins=_headerMargins - In the implementation block
@property (nonatomic,readonly) UIView * subheaderView;                   //@synthesize subheaderView=_subheaderView - In the implementation block
@property (assign,nonatomic) UIEdgeInsets subheaderMargins;              //@synthesize subheaderMargins=_subheaderMargins - In the implementation block
@property (nonatomic,readonly) float totalHeight; 
@property (nonatomic,readonly) float headerHeight; 
+(id)createUpdatedHeaderContextForGroupStackView:(id)arg1 passType:(unsigned)arg2 currentContext:(id)arg3 allowSubheader:(char)arg4 ;
+(void)animateAppearanceForLayer:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
+(void)animateDisappearanceForLayer:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(float)_headerHeight;
-(UIView *)subheaderView;
-(id)initWithHeaderView:(id)arg1 headerMargins:(UIEdgeInsets)arg2 subheaderView:(id)arg3 subheaderMargins:(UIEdgeInsets)arg4 ;
-(UIEdgeInsets)headerMargins;
-(UIEdgeInsets)subheaderMargins;
-(CGRect)boundsForHeaderViewInContainerFrame:(CGRect)arg1 ;
-(CGRect)boundsForSubheaderViewInContainerFrame:(CGRect)arg1 ;
-(float)_subheaderHeight;
-(CGPoint)positionForHeaderViewInContainerFrame:(CGRect)arg1 ;
-(CGPoint)positionForSubheaderViewInContainerFrame:(CGRect)arg1 ;
-(float)totalHeight;
-(void)setHeaderMargins:(UIEdgeInsets)arg1 ;
-(void)setSubheaderMargins:(UIEdgeInsets)arg1 ;
-(void)dealloc;
-(id)init;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(UIView *)headerView;
-(float)headerHeight;
@end

