/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:34:32 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol MDRenderTarget <NSObject>
@property (nonatomic,readonly) CGSize size; 
@property (nonatomic,readonly) double contentScale; 
@property (nonatomic,readonly) CGSize sizeInPixels; 
@property (nonatomic,readonly) float averageFPS; 
@optional
-(float)averageFPS;
-(void)willDrawView;
-(void)didDrawView;

@required
-(CGSize)size;
-(double)contentScale;
-(CGSize)sizeInPixels;

@end

