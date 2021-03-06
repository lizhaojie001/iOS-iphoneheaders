/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:18:48 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/StoreKit.framework/StoreKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIAlertViewDelegate.h>

@class SKStarRatingAlertView, NSString;

@interface SKStarRatingAlertViewDelegate : NSObject <UIAlertViewDelegate> {

	SKStarRatingAlertView* _alertView;
	/*^block*/id _completionBlock;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)showAlertView:(id)arg1 withCompletionBlock:(/*^block*/id)arg2 ;
-(void)dealloc;
-(void)alertViewCancel:(id)arg1 ;
-(BOOL)alertViewShouldEnableFirstOtherButton:(id)arg1 ;
-(void)alertView:(id)arg1 willDismissWithButtonIndex:(long long)arg2 ;
@end

