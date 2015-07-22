/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, June 24, 2015 at 11:04:54 PM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/Frameworks/PassKit.framework/PassKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <PassKit/PKPaymentSetupPrivacyFooterViewDelegate.h>

@protocol PKPaymentSetupViewControllerDelegate;
@class ACAccountStore, PKPaymentWebService, NSArray;

@interface PKPaymentSetupViewController : UIViewController <PKPaymentSetupPrivacyFooterViewDelegate> {

	ACAccountStore* _accountStore;
	PKPaymentWebService* _webService;
	id<PKPaymentSetupViewControllerDelegate> _delegate;
	NSArray* _eligibleCards;
	int _context;

}

@property (assign,nonatomic) id<PKPaymentSetupViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSArray * eligibleCards;                                        //@synthesize eligibleCards=_eligibleCards - In the implementation block
@property (nonatomic,retain) PKPaymentWebService * webService;                               //@synthesize webService=_webService - In the implementation block
@property (assign,nonatomic) int context;                                                    //@synthesize context=_context - In the implementation block
-(id)_deviceSpecificLocalizedStringKeyForKey:(id)arg1 ;
-(id)initWithPaymentWebService:(id)arg1 eligibleCards:(id)arg2 context:(int)arg3 delegate:(id)arg4 ;
-(PKPaymentWebService *)webService;
-(void)setEligibleCards:(NSArray *)arg1 ;
-(id)_contextSpecificStringForAggdKey:(id)arg1 ;
-(void)setWebService:(PKPaymentWebService *)arg1 ;
-(void)privacyFooterLinkTapped:(id)arg1 ;
-(void)_pushCardList:(id)arg1 ;
-(void)_pushCardDetailsViewControllerForCredential:(id)arg1 ;
-(void)_pushCardEntryViewController;
-(void)dismissAboutView:(id)arg1 ;
-(NSArray *)eligibleCards;
-(void)dealloc;
-(void)setDelegate:(id<PKPaymentSetupViewControllerDelegate>)arg1 ;
-(id<PKPaymentSetupViewControllerDelegate>)delegate;
-(int)context;
-(void)setContext:(int)arg1 ;
-(void)loadView;
-(void)viewDidLoad;
-(void)viewDidAppear:(char)arg1 ;
-(void)viewDidDisappear:(char)arg1 ;
-(unsigned)edgesForExtendedLayout;
-(void)_next:(id)arg1 ;
@end
