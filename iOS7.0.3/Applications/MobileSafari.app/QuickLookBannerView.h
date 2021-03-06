/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:00:27 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/MobileSafari.app/MobileSafari
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <MobileSafari/MobileSafari-Structs.h>
#import <UIKit/UIToolbar.h>

@class UILabel, UIBarButtonItem, OpenInApplicationBarButtonItem;

@interface QuickLookBannerView : UIToolbar {

	UILabel* _filenameLabel;
	UIBarButtonItem* _flexibleSpaceItem;
	OpenInApplicationBarButtonItem* _openInApplicationItem;
	UIBarButtonItem* _openInOtherApplicationsItem;

}

@property (assign,nonatomic) <QuickLookBannerViewDelegate> * quickLookDelegate; 
+(float)defaultHeight;
-(BOOL)updateWithQuickLookDocument:(id)arg1 ;
-(id)initWithQuickLookBannerViewDelegate:(id)arg1 ;
-(void)_layoutFilenameLabel;
-(void)_animateTo:(float)arg1 ;
-(void)setQuickLookDelegate:(id)arg1 ;
-(id)quickLookDelegate;
-(void)dealloc;
-(void)setFrame:(CGRect)arg1 ;
-(void)animateOut;
-(void)animateIn;
@end

