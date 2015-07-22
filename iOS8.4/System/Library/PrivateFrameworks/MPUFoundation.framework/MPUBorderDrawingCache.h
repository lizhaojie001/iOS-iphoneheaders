/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:23:19 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/MPUFoundation.framework/MPUFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class MPUBorderView, NSCache;

@interface MPUBorderDrawingCache : NSObject {

	MPUBorderView* _borderView;
	NSCache* _images;
	double _displayScale;

}

@property (assign,nonatomic) double displayScale;              //@synthesize displayScale=_displayScale - In the implementation block
-(void)dealloc;
-(id)init;
-(double)displayScale;
-(void)_invalidate;
-(id)imageForBorderConfiguration:(id)arg1 ;
-(void)_applicationDidReceiveMemoryWarning:(id)arg1 ;
-(id)_borderView;
-(void)setDisplayScale:(double)arg1 ;
@end
