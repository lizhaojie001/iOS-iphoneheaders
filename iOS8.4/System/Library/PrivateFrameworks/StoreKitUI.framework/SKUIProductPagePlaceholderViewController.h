/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:25:50 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <UIKit/UIScrollViewDelegate.h>
#import <StoreKitUI/SKUIProductPageChildViewController.h>

@protocol SKUIProductPageChildViewControllerDelegate;
@class SKUIClientContext, SKUIColorScheme, SKUIProductPageHeaderViewController, SKUIProductPagePlaceholderScrollView, UIActivityIndicatorView, NSString, UIScrollView;

@interface SKUIProductPagePlaceholderViewController : UIViewController <UIScrollViewDelegate, SKUIProductPageChildViewController> {

	SKUIClientContext* _clientContext;
	SKUIColorScheme* _colorScheme;
	SKUIProductPageHeaderViewController* _headerViewController;
	SKUIProductPagePlaceholderScrollView* _scrollView;
	id<SKUIProductPageChildViewControllerDelegate> _delegate;
	long long _style;
	UIActivityIndicatorView* _indicator;

}

@property (nonatomic,retain) SKUIClientContext * clientContext;                                           //@synthesize clientContext=_clientContext - In the implementation block
@property (nonatomic,retain) SKUIColorScheme * colorScheme;                                               //@synthesize colorScheme=_colorScheme - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) UIScrollView * scrollView; 
@property (nonatomic,retain) SKUIProductPageHeaderViewController * headerViewController;                  //@synthesize headerViewController=_headerViewController - In the implementation block
@property (assign,nonatomic,__weak) id<SKUIProductPageChildViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)setDelegate:(id<SKUIProductPageChildViewControllerDelegate>)arg1 ;
-(void)scrollViewDidScroll:(id)arg1 ;
-(id<SKUIProductPageChildViewControllerDelegate>)delegate;
-(void)loadView;
-(id)initWithStyle:(long long)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(UIScrollView *)scrollView;
-(void)setClientContext:(SKUIClientContext *)arg1 ;
-(SKUIColorScheme *)colorScheme;
-(void)setColorScheme:(SKUIColorScheme *)arg1 ;
-(SKUIClientContext *)clientContext;
-(void)_addHeaderView;
-(SKUIProductPageHeaderViewController *)headerViewController;
-(void)setHeaderViewController:(SKUIProductPageHeaderViewController *)arg1 ;
@end

