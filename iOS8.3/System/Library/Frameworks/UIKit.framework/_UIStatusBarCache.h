/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, June 24, 2015 at 11:17:56 PM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class CPBitmapStore;

@interface _UIStatusBarCache : NSObject {

	CPBitmapStore* _store;

}
+(id)sharedInstance;
-(void)dealloc;
-(id)init;
-(char)_canCacheImages;
-(id)imageNamed:(id)arg1 forGroup:(id)arg2 withScale:(float)arg3 ;
-(void)cacheImage:(id)arg1 named:(id)arg2 forGroup:(id)arg3 ;
-(void)removeImagesInGroup:(id)arg1 ;
@end
