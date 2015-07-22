/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:26:52 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol WebGeolocationProvider <NSObject>
@required
-(void)setEnableHighAccuracy:(char)arg1;
-(void)registerWebView:(id)arg1;
-(void)unregisterWebView:(id)arg1;
-(void)initializeGeolocationForWebView:(id)arg1 listener:(id)arg2;
-(id)lastPosition;
-(void)stopTrackingWebView:(id)arg1;

@end
