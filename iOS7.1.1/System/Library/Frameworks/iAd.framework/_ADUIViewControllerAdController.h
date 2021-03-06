/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:22:11 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/iAd.framework/iAd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iAd/_UIViewControllerContentViewEmbedding.h>
#import <MediaPlayer/ADBannerViewDelegate.h>
#import <iAd/ADInterstitialAdDelegate.h>

@class UIViewController, NSURL, NSString, ADBannerView, ADInterstitialAd;

@interface _ADUIViewControllerAdController : NSObject <_UIViewControllerContentViewEmbedding, ADBannerViewDelegate, ADInterstitialAdDelegate> {

	UIViewController* _contentViewController;
	bool _canDisplayBannerAds;
	bool _canOwnSharedBanner;
	bool _presentingFullScreenAd;
	NSURL* _bannerServerURL;
	NSString* _bannerAdSection;
	NSString* _bannerAuthUserName;
	NSURL* _interstitialServerURL;
	NSString* _interstitialAdSection;
	NSString* _interstitialAuthUserName;
	long long _interstitialPresentationPolicy;
	ADBannerView* _bannerView;
	ADInterstitialAd* _interstitialAd;

}

@property (nonatomic,copy) NSURL * bannerServerURL;                                                    //@synthesize bannerServerURL=_bannerServerURL - In the implementation block
@property (nonatomic,copy) NSString * bannerAdSection;                                                 //@synthesize bannerAdSection=_bannerAdSection - In the implementation block
@property (nonatomic,copy) NSString * bannerAuthUserName;                                              //@synthesize bannerAuthUserName=_bannerAuthUserName - In the implementation block
@property (nonatomic,copy) NSURL * interstitialServerURL;                                              //@synthesize interstitialServerURL=_interstitialServerURL - In the implementation block
@property (nonatomic,copy) NSString * interstitialAdSection;                                           //@synthesize interstitialAdSection=_interstitialAdSection - In the implementation block
@property (nonatomic,copy) NSString * interstitialAuthUserName;                                        //@synthesize interstitialAuthUserName=_interstitialAuthUserName - In the implementation block
@property (nonatomic,readonly) UIViewController * contentViewController; 
@property (assign,nonatomic) long long interstitialPresentationPolicy;                                 //@synthesize interstitialPresentationPolicy=_interstitialPresentationPolicy - In the implementation block
@property (assign,nonatomic) bool canDisplayBannerAds;                                                 //@synthesize canDisplayBannerAds=_canDisplayBannerAds - In the implementation block
@property (assign,nonatomic) bool canOwnSharedBanner;                                                  //@synthesize canOwnSharedBanner=_canOwnSharedBanner - In the implementation block
@property (assign,getter=isPresentingFullScreenAd,nonatomic) bool presentingFullScreenAd;              //@synthesize presentingFullScreenAd=_presentingFullScreenAd - In the implementation block
@property (getter=isDisplayingBannerAd,nonatomic,readonly) bool displayingBannerAd; 
@property (nonatomic,retain) ADBannerView * bannerView;                                                //@synthesize bannerView=_bannerView - In the implementation block
@property (nonatomic,retain) ADInterstitialAd * interstitialAd;                                        //@synthesize interstitialAd=_interstitialAd - In the implementation block
+(void)prepareInterstitialAds;
+(id)_sharedBannerView;
-(void)bannerViewDidLoadAd:(id)arg1 ;
-(void)bannerView:(id)arg1 didFailToReceiveAdWithError:(id)arg2 ;
-(bool)bannerViewActionShouldBegin:(id)arg1 willLeaveApplication:(bool)arg2 ;
-(void)bannerViewActionDidFinish:(id)arg1 ;
-(void)dealloc;
-(void)viewControllerViewWillLayoutSubviews:(id)arg1 ;
-(void)viewControllerViewDidLayoutSubviews:(id)arg1 ;
-(id)contentViewController;
-(void)viewController:(id)arg1 viewWillAppear:(bool)arg2 ;
-(void)viewController:(id)arg1 viewDidAppear:(bool)arg2 ;
-(void)viewController:(id)arg1 viewWillDisappear:(bool)arg2 ;
-(void)viewController:(id)arg1 viewDidDisappear:(bool)arg2 ;
-(id)initWithContentViewController:(id)arg1 ;
-(void)interstitialAdDidUnload:(id)arg1 ;
-(void)interstitialAd:(id)arg1 didFailWithError:(id)arg2 ;
-(void)interstitialAdActionDidFinish:(id)arg1 ;
-(id)interstitialAd;
-(long long)interstitialPresentationPolicy;
-(void)setInterstitialPresentationPolicy:(long long)arg1 ;
-(bool)canDisplayBannerAds;
-(void)setCanDisplayBannerAds:(bool)arg1 ;
-(bool)isPresentingFullScreenAd;
-(bool)isDisplayingBannerAd;
-(bool)requestInterstitialAdPresentation;
-(void)_layoutContentAndBannerViewAnimated:(bool)arg1 ;
-(void)setCanOwnSharedBanner:(bool)arg1 ;
-(void)_considerTakingBannerView;
-(bool)_presentInterstitialIfReady;
-(void)setInterstitialAd:(id)arg1 ;
-(void)setPresentingFullScreenAd:(bool)arg1 ;
-(void)_hideBannerView;
-(bool)canOwnSharedBanner;
-(void)setBannerView:(id)arg1 ;
-(id)bannerAdSection;
-(id)bannerServerURL;
-(id)bannerAuthUserName;
-(void)setBannerAdSection:(id)arg1 ;
-(void)setBannerServerURL:(id)arg1 ;
-(void)setBannerAuthUserName:(id)arg1 ;
-(void)setInterstitialAdSection:(id)arg1 ;
-(void)setInterstitialServerURL:(id)arg1 ;
-(void)setInterstitialAuthUserName:(id)arg1 ;
-(id)interstitialServerURL;
-(id)interstitialAdSection;
-(id)interstitialAuthUserName;
-(id)bannerView;
@end

