/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:26:51 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <WebKitLegacy/WebKitLegacy-Structs.h>
@class WebFrameView;

@interface WebFramePrivate : NSObject {

	Frame* coreFrame;
	WebFrameView* webFrameView;
	unique_ptr<WebScriptDebugger, std::__1::default_delete<WebScriptDebugger> >* scriptDebugger;
	id internalLoadDelegate;
	char shouldCreateRenderers;
	char includedInWebKitStatistics;
	RetainPtr<NSString>* url;
	RetainPtr<NSString>* provisionalURL;
	char isCommitting;
	unique_ptr<WebCore::ContentFilter, std::__1::default_delete<WebCore::ContentFilter> >* contentFilterForBlockedLoad;

}
-(void)dealloc;
-(void)finalize;
-(void)setWebFrameView:(id)arg1 ;
@end

