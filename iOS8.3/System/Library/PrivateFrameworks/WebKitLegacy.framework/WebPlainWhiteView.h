/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 4:21:25 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <WebKitLegacy/WebKitLegacy-Structs.h>
#import <WebCore/WAKView.h>
#import <WebKitLegacy/WebDocumentView.h>
#import <WebKitLegacy/WebDocumentElement.h>

@class NSString;

@interface WebPlainWhiteView : WAKView <WebDocumentView, WebDocumentElement>

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(oneway void)release;
-(oneway void)_webcore_releaseOnWebThread;
-(void)drawRect:(CGRect)arg1 ;
-(void)setDataSource:(id)arg1 ;
-(void)layout;
-(void)setNeedsLayout:(char)arg1 ;
-(id)elementAtPoint:(CGPoint)arg1 ;
-(void)dataSourceUpdated:(id)arg1 ;
-(void)viewWillMoveToHostWindow:(id)arg1 ;
-(void)viewDidMoveToHostWindow;
-(id)elementAtPoint:(CGPoint)arg1 allowShadowContent:(char)arg2 ;
@end

