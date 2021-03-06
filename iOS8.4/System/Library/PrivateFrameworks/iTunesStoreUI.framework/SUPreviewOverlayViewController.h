/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:27:13 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iTunesStoreUI/iTunesStoreUI-Structs.h>
#import <iTunesStoreUI/SUViewController.h>

@class SUPreviewOverlayStorePageViewController, NSString;

@interface SUPreviewOverlayViewController : SUViewController {

	CGSize _contentSize;
	/*^block*/id _loadBlock;
	BOOL _loaded;
	double _paddingRight;
	double _paddingTop;
	SUPreviewOverlayStorePageViewController* _storePageViewController;
	NSString* _userInfoString;
	BOOL _visible;

}

@property (getter=isContentLoaded,nonatomic,readonly) BOOL contentLoaded; 
@property (assign,nonatomic) CGSize contentSize;                                       //@synthesize contentSize=_contentSize - In the implementation block
@property (assign,nonatomic) double paddingRight;                                      //@synthesize paddingRight=_paddingRight - In the implementation block
@property (assign,nonatomic) double paddingTop;                                        //@synthesize paddingTop=_paddingTop - In the implementation block
@property (nonatomic,copy) NSString * userInfoString;                                  //@synthesize userInfoString=_userInfoString - In the implementation block
+(id)defaultRequestProperties;
+(double)defaultAnimationDuration;
+(void)offsetScrollView:(id)arg1 forViewController:(id)arg2 ;
+(void)_setContentInsetsForScrollView:(id)arg1 viewController:(id)arg2 ;
-(void)loadWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)dealloc;
-(CGSize)contentSize;
-(void)setContentSize:(CGSize)arg1 ;
-(void)loadView;
-(double)paddingTop;
-(void)setPaddingTop:(double)arg1 ;
-(double)paddingRight;
-(void)setPaddingRight:(double)arg1 ;
-(void)hideInNavigationController:(id)arg1 animated:(BOOL)arg2 completionBlock:(/*^block*/id)arg3 ;
-(BOOL)isContentLoaded;
-(void)loadWithRequestProperties:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)showInNavigationController:(id)arg1 animated:(BOOL)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)storePage:(id)arg1 finishedWithSuccess:(BOOL)arg2 ;
-(id)_storePageViewController;
-(void)hideInViewController:(id)arg1 animated:(BOOL)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)showInViewController:(id)arg1 animated:(BOOL)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)invalidateForMemoryPurge;
-(void)setUserInfoString:(NSString *)arg1 ;
-(id)_previewOverlayContainerForViewController:(id)arg1 ;
-(id)_scrollViewForViewController:(id)arg1 ;
-(NSString *)userInfoString;
@end

