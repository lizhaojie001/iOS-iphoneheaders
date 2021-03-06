/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:57:38 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <StoreKitUI/SKUIDonationStepViewController.h>
#import <StoreKitUI/SKUIDonationConfigurationObserver.h>

@class SKUIDonationAmountView, SKUIGiftValidationResponse, SKUIGiftPurchaseRequest, SKUIGiftValidator;

@interface SKUIDonationAmountViewController : SKUIDonationStepViewController <SKUIDonationConfigurationObserver> {

	SKUIDonationAmountView* _amountView;
	SKUIGiftValidationResponse* _lastValidationResponse;
	SKUIGiftPurchaseRequest* _purchaseRequest;
	BOOL _tappedNextWhileValidating;
	SKUIGiftValidator* _validator;

}
-(void)_cancelButtonAction:(id)arg1 ;
-(void)dealloc;
-(void)loadView;
-(void)_finishValidationWithResponse:(id)arg1 error:(id)arg2 ;
-(void)_finishPurchaseWithResult:(BOOL)arg1 errorMessage:(id)arg2 ;
-(id)initWithCharity:(id)arg1 configuration:(id)arg2 ;
-(void)_donateButtonAction:(id)arg1 ;
-(void)_amountChangedNotification:(id)arg1 ;
-(void)_validateDonation:(id)arg1 ;
-(void)_performActionAfterValidation;
-(void)_setDonationButtonEnabled:(BOOL)arg1 ;
-(void)_reenableAfterFailure;
-(void)donationConfigurationController:(id)arg1 didLoadLogoForCharity:(id)arg2 ;
-(void).cxx_destruct;
@end

