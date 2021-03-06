/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:34:05 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <StoreKitUI/SKUIItemCellLayout.h>

@class SKUISearchAppBundleView, UILabel, SKUIBadgeLabel, UIImageView, NSString, UIImage;

@interface SKUICardCellLayout : SKUIItemCellLayout {

	SKUISearchAppBundleView* _appBundleView;
	UILabel* _artistLabel;
	SKUIBadgeLabel* _editorialBadgeLabel;
	long long _numberOfUserRatings;
	UIImageView* _screenshotImageView;
	UILabel* _titleLabel;
	double _userRating;
	UIImageView* _userRatingImageView;
	UILabel* _userRatingLabel;
	UILabel* _hasInAppPurchasesLabel;
	BOOL _appBundle;
	BOOL _hasInAppPurchases;

}

@property (nonatomic,copy) NSString * artistName; 
@property (assign,nonatomic) long long numberOfUserRatings;                          //@synthesize numberOfUserRatings=_numberOfUserRatings - In the implementation block
@property (assign,nonatomic) double userRating;                                      //@synthesize userRating=_userRating - In the implementation block
@property (nonatomic,retain) UIImage * screenshotImage; 
@property (assign,nonatomic) BOOL appBundle;                                         //@synthesize appBundle=_appBundle - In the implementation block
@property (nonatomic,readonly) SKUISearchAppBundleView * appBundleView;              //@synthesize appBundleView=_appBundleView - In the implementation block
@property (nonatomic,copy) NSString * title; 
@property (assign,nonatomic) BOOL hasInAppPurchases;                                 //@synthesize hasInAppPurchases=_hasInAppPurchases - In the implementation block
@property (nonatomic,copy) NSString * editorialBadge; 
-(void)setBackgroundColor:(id)arg1 ;
-(void)layoutSubviews;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)title;
-(void)prepareForReuse;
-(void)setUserRating:(double)arg1 ;
-(double)userRating;
-(NSString *)artistName;
-(void)setArtistName:(NSString *)arg1 ;
-(BOOL)hasInAppPurchases;
-(long long)numberOfUserRatings;
-(NSString *)editorialBadge;
-(void)setNumberOfUserRatings:(long long)arg1 ;
-(void)resetLayout;
-(void)setScreenshotImage:(UIImage *)arg1 ;
-(void)layoutForItemOfferChange;
-(void)setEditorialBadge:(NSString *)arg1 ;
-(void)setAppBundle:(BOOL)arg1 ;
-(void)setHasInAppPurchases:(BOOL)arg1 ;
-(UIImage *)screenshotImage;
-(BOOL)appBundle;
-(SKUISearchAppBundleView *)appBundleView;
@end

