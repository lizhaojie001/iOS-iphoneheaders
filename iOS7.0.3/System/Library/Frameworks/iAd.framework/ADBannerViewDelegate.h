/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:53:56 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/iAd.framework/iAd
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


@protocol ADBannerViewDelegate <NSObject>
@optional
-(void)bannerViewWillLoadAd:(id)arg1;
-(void)bannerViewDidLoadAd:(id)arg1;
-(void)bannerView:(id)arg1 didFailToReceiveAdWithError:(id)arg2;
-(BOOL)bannerViewActionShouldBegin:(id)arg1 willLeaveApplication:(BOOL)arg2;
-(void)bannerViewActionDidFinish:(id)arg1;
@end
