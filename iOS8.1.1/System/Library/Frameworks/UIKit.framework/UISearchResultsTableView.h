/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:29:19 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UITableView.h>

@class UISearchDisplayController, UIView;

@interface UISearchResultsTableView : UITableView {

	UISearchDisplayController* _controller;
	double _offsetForNoResultsMessage;
	UIView* _topShadowView;

}

@property (assign,nonatomic) UISearchDisplayController * controller;                                               //@synthesize controller=_controller - In the implementation block
@property (setter=_setTopShadowView:,getter=_topShadowView,nonatomic,retain) UIView * _topShadowView; 
-(void)setContentOffset:(CGPoint)arg1 ;
-(void)_numberOfRowsDidChange;
-(id)initWithFrame:(CGRect)arg1 style:(long long)arg2 ;
-(UIView *)_topShadowView;
-(UISearchDisplayController *)controller;
-(void)setController:(UISearchDisplayController *)arg1 ;
-(void)_setOffsetForNoResultsMessage:(double)arg1 ;
-(double)_offsetForNoResultsMessage;
-(void)_setTopShadowView:(id)arg1 ;
@end

