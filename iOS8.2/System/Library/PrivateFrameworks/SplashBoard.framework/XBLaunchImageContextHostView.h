/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:21:05 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/SplashBoard.framework/SplashBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIView.h>

@class NSString, CALayerHost;

@interface XBLaunchImageContextHostView : UIView {

	id _delegate;
	NSString* _bundleID;
	CALayerHost* _contentLayer;
	char _saved;
	float _remoteScale;
	/*^block*/id _captureBlock;

}

@property (assign,getter=isSaved,nonatomic) char saved;              //@synthesize saved=_saved - In the implementation block
@property (assign,nonatomic) float remoteScale;                      //@synthesize remoteScale=_remoteScale - In the implementation block
@property (nonatomic,copy) id captureBlock;                          //@synthesize captureBlock=_captureBlock - In the implementation block
-(void)dealloc;
-(unsigned)contextId;
-(void)didMoveToSuperview;
-(void)disconnect;
-(void)setRemoteScale:(float)arg1 ;
-(float)remoteScale;
-(char)isSaved;
-(void)connectToContextID:(unsigned)arg1 bundleID:(id)arg2 ;
-(void)setSaved:(char)arg1 ;
-(id)captureBlock;
-(void)setCaptureBlock:(id)arg1 ;
@end

