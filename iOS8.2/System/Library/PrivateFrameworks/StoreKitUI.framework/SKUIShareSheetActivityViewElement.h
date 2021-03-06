/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:21:11 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <StoreKitUI/SKUIViewElement.h>

@class NSString, NSURL, SKUIImageViewElement, SKUILabelViewElement, SKUIURLViewElement;

@interface SKUIShareSheetActivityViewElement : SKUIViewElement {

	NSString* _activityType;
	NSURL* _contentSourceURL;

}

@property (nonatomic,readonly) NSString * activityType;                     //@synthesize activityType=_activityType - In the implementation block
@property (nonatomic,readonly) NSURL * contentSourceURL;                    //@synthesize contentSourceURL=_contentSourceURL - In the implementation block
@property (nonatomic,readonly) SKUIImageViewElement * image; 
@property (nonatomic,readonly) SKUILabelViewElement * message; 
@property (nonatomic,readonly) SKUILabelViewElement * title; 
@property (nonatomic,readonly) SKUIURLViewElement * URL; 
-(SKUILabelViewElement *)title;
-(SKUIImageViewElement *)image;
-(SKUILabelViewElement *)message;
-(SKUIURLViewElement *)URL;
-(NSString *)activityType;
-(id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3 ;
-(id)applyUpdatesWithElement:(id)arg1 ;
-(NSURL *)contentSourceURL;
@end

