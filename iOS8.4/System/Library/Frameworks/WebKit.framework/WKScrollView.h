/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:19:28 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <WebKit/WebKit-Structs.h>
#import <UIKit/UIWebScrollView.h>

@protocol UIScrollViewDelegate;
@class WKScrollViewDelegateForwarder, WKWebView;

@interface WKScrollView : UIWebScrollView {

	id<UIScrollViewDelegate> _externalDelegate;
	WKScrollViewDelegateForwarder* _delegateForwarder;
	WKWebView*<UIScrollViewDelegate> _internalDelegate;

}

@property (assign,nonatomic) WKWebView*<UIScrollViewDelegate> internalDelegate;              //@synthesize internalDelegate=_internalDelegate - In the implementation block
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(id)delegate;
-(double)_rubberBandOffsetForOffset:(double)arg1 maxOffset:(double)arg2 minOffset:(double)arg3 range:(double)arg4 outside:(BOOL*)arg5 ;
-(void)setContentInset:(UIEdgeInsets)arg1 ;
-(void)_setContentSizePreservingContentOffsetDuringRubberband:(CGSize)arg1 ;
-(void)_updateDelegate;
-(CGSize)_currentTopLeftRubberbandAmount;
-(void)_restoreContentOffsetWithRubberbandAmount:(CGSize)arg1 ;
-(void)setInternalDelegate:(WKWebView*<UIScrollViewDelegate>)arg1 ;
-(WKWebView*<UIScrollViewDelegate>)internalDelegate;
@end

