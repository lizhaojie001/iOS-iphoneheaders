/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 4:36:21 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/Support/itunesstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iTunesStore/ISOperation.h>

@class NSNumber, NSString, NSArray, SSURLConnectionResponse;

@interface CheckoutRentalKeysOperation : ISOperation {

	NSNumber* _accountIdentifier;
	char _backgroundCheckout;
	NSString* _clientIdentifierHeader;
	NSNumber* _rentalKeyIdentifier;
	NSArray* _sinfs;
	SSURLConnectionResponse* _urlResponse;
	NSString* _userAgent;
	char _shouldValidateRentalInfo;

}

@property (readonly) NSArray * sinfs; 
@property (readonly) NSNumber * accountIdentifier; 
@property (readonly) NSNumber * rentalKeyIdentifier; 
@property (getter=isBackgroundCheckout) char backgroundCheckout;              //@synthesize backgroundCheckout=_backgroundCheckout - In the implementation block
@property (copy) NSString * clientIdentifierHeader; 
@property (copy) NSString * userAgent; 
@property (assign,nonatomic) char shouldValidateRentalInfo;                   //@synthesize shouldValidateRentalInfo=_shouldValidateRentalInfo - In the implementation block
@property (readonly) SSURLConnectionResponse * URLResponse; 
-(id)_primarySINF;
-(id)_copyAccountIdentifier;
-(id)_copyRentalIdentifier;
-(void)_showErrorDialogForOutput:(id)arg1 ;
-(char)isBackgroundCheckout;
-(char)_performCheckout:(id*)arg1 ;
-(char)_haveValidRentalInformation;
-(id)initWithStoreDownloadSinfs:(id)arg1 ;
-(void)setBackgroundCheckout:(char)arg1 ;
-(NSString *)userAgent;
-(id)initWithAccountIdentifier:(id)arg1 rentalKeyIdentifier:(id)arg2 ;
-(NSArray *)sinfs;
-(char)_handleResponse:(id)arg1 error:(id*)arg2 ;
-(void)dealloc;
-(id)init;
-(void)_run;
-(void)run;
-(NSNumber *)accountIdentifier;
-(void)setUserAgent:(NSString *)arg1 ;
-(SSURLConnectionResponse *)URLResponse;
-(id)_bodyData;
-(id)initWithSinfs:(id)arg1 ;
-(NSNumber *)rentalKeyIdentifier;
-(char)shouldValidateRentalInfo;
-(void)setShouldValidateRentalInfo:(char)arg1 ;
-(NSString *)clientIdentifierHeader;
-(void)setClientIdentifierHeader:(NSString *)arg1 ;
@end
