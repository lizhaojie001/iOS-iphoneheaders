/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:25:44 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <StoreKitUI/_UIBasicAnimationFactory.h>

@class CAMediaTimingFunction, NSString;

@interface SKUISimpleAnimationFactory : NSObject <_UIBasicAnimationFactory> {

	CAMediaTimingFunction* _timingFunction;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)backOutTimingFunction;
+(id)easeQuadInTimingFunction;
+(id)easeQuadInOutTimingFunction;
+(id)easeQuadOutTimingFunction;
+(id)factoryWithTimingFunction:(id)arg1 ;
-(id)_basicAnimationForView:(id)arg1 withKeyPath:(id)arg2 ;
-(id)_timingFunctionForAnimation;
@end

