/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 4:00:17 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <VectorKit/VectorKit-Structs.h>
@interface VKAnchor : NSObject {

	shared_ptr<vk::Anchor>* _anchor;

}

@property (nonatomic,readonly) char isMercator; 
@property (nonatomic,readonly) char isGeocentric; 
@property (nonatomic,readonly) char followsTerrain; 
@property (nonatomic,readonly) VKPoint worldPoint; 
@property (nonatomic,readonly) VKPoint mercatorPoint; 
@property (assign,nonatomic) SCD_Struct_VK262 coordinate; 
@property (assign,nonatomic) id<VKAnchorDelegate> delegate; 
-(void)setDelegate:(id<VKAnchorDelegate>)arg1 ;
-(id<VKAnchorDelegate>)delegate;
-(SCD_Struct_VK262)coordinate;
-(char)isMercator;
-(char)isGeocentric;
-(char)followsTerrain;
-(void)setCoordinate:(SCD_Struct_VK262)arg1 ;
-(VKPoint)worldPoint;
-(int)worldIndexWithContext:(id)arg1 ;
-(id)initWithAnchor:(shared_ptr<vk::Anchor>*)arg1 ;
-(void)worldPointDidChange;
-(void)setMercatorPoint:(VKPoint)arg1 ;
-(VKPoint)mercatorPoint;
@end

