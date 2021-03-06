/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:25:59 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/WebKit.framework/WebKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <WebKit/WebKit-Structs.h>
#import <WebKit/WebGeolocationProvider.h>

@interface WebGeolocationProviderIOS : NSObject <WebGeolocationProvider> {

	RetainPtr<WebGeolocationCoreLocationProvider>* _coreLocationProvider;
	RetainPtr<_WebCoreLocationUpdateThreadingProxy>* _coreLocationUpdateListenerProxy;
	bool _enableHighAccuracy;
	bool _isSuspended;
	bool _shouldResetOnResume;
	HashMap<WTF::RetainPtr<WebView>, WTF::RetainPtr<id<WebGeolocationProviderInitializationListener> >, WTF::PtrHash<WTF::RetainPtr<WebView> >, WTF::HashTraits<WTF::RetainPtr<WebView> >, WTF::HashTraits<WTF::RetainPtr<id<WebGeolocationProviderInitializationListener> > > >* _webViewsWaitingForCoreLocationStart;
	HashSet<WebView *, WTF::PtrHash<WebView *>, WTF::HashTraits<WebView *> >* _warmUpWebViews;
	HashSet<WebView *, WTF::PtrHash<WebView *>, WTF::HashTraits<WebView *> >* _pendingInitialPositionWebView;
	HashSet<WebView *, WTF::PtrHash<WebView *>, WTF::HashTraits<WebView *> >* _registeredWebViews;
	HashSet<WebView *, WTF::PtrHash<WebView *>, WTF::HashTraits<WebView *> >* _trackedWebViews;
	RetainPtr<NSTimer>* _sendLastPositionAsynchronouslyTimer;
	RetainPtr<WebGeolocationPosition>* _lastPosition;

}
+(id)sharedGeolocationProvider;
-(void)dealloc;
-(void)suspend;
-(void)resume;
-(id).cxx_construct;
-(void).cxx_destruct;
-(void)registerWebView:(id)arg1 ;
-(void)unregisterWebView:(id)arg1 ;
-(void)setEnableHighAccuracy:(bool)arg1 ;
-(void)initializeGeolocationForWebView:(id)arg1 listener:(id)arg2 ;
-(id)lastPosition;
-(void)cancelWarmUpForWebView:(id)arg1 ;
-(void)resetGeolocation;
-(void)geolocationDelegateUnableToStart;
-(void)geolocationDelegateStarted;
-(void)positionChanged:(id)arg1 ;
-(void)errorOccurred:(id)arg1 ;
-(void)_startCoreLocationDelegate;
-(void)_handlePendingInitialPosition:(id)arg1 ;
-(void)_stopCoreLocationDelegateIfNeeded;
-(void)stopTrackingWebView:(id)arg1 ;
@end

