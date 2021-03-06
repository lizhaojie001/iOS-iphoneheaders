/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 7:09:21 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /Applications/AdSheet.app/AdSheet
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol ADStoreJSO_Bindings <JSExport>
@optional
-(void)lookupItemWithID:(id)arg1 listener:(id)arg2 __JS_EXPORT_AS__lookupItemWithID:(id)arg3;
-(void)redeemiTunesGiftCode:(id)arg1 listener:(id)arg2 __JS_EXPORT_AS__redeemiTunesGiftCode:(id)arg3;
-(void)purchaseItemWithID:(id)arg1 offerIdentifier:(id)arg2 listener:(id)arg3 __JS_EXPORT_AS__purchaseItemWithID:(id)arg4;
-(void)loadStorePageForAdamID:(id)arg1 completionHandler:(id)arg2 __JS_EXPORT_AS__loadStorePageForAdamID:(id)arg3;

@required
-(void)registerItemsForPurchase:(id)arg1;
-(void)lookupItemWithID:(id)arg1 listener:(id)arg2;
-(void)purchaseItemWithID:(id)arg1 offerIdentifier:(id)arg2 listener:(id)arg3;
-(void)redeemiTunesGiftCode:(id)arg1 listener:(id)arg2;
-(void)loadStorePageForAdamID:(id)arg1 completionHandler:(id)arg2;
-(void)presentStorePage:(id)arg1;

@end

