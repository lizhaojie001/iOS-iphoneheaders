/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:25:22 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <StoreKitUI/SKUIRedeemStepViewController.h>
#import <iTunesStoreUI/SKUIPassbookLoaderDelegate.h>

@class SKUIRedeemITunesPassLearnMoreView, SKUIPassbookLoader, NSURL;

@interface SKUIRedeemITunesPassLearnMoreViewController : SKUIRedeemStepViewController <SKUIPassbookLoaderDelegate> {

	bool _didTapAddPassbookButton;
	SKUIRedeemITunesPassLearnMoreView* _learnMoreView;
	SKUIPassbookLoader* _passbookLoader;
	NSURL* _passbookURL;

}
-(void)_doneButtonAction:(id)arg1 ;
-(void)dealloc;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)loadView;
-(void)viewWillAppear:(bool)arg1 ;
-(void)viewDidAppear:(bool)arg1 ;
-(void).cxx_destruct;
-(id)_existingPass;
-(void)_passButtonAction:(id)arg1 ;
-(void)_loadPassbookPass;
-(void)_loadPassbookURL;
-(void)_showErrorDialog;
-(void)_didLoadPassbookURLString:(id)arg1 ;
-(id)presentationViewControllerForPassbookLoader:(id)arg1 ;
-(void)passbookLoaderDidFinish:(id)arg1 ;
@end

