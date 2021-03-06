/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:26:45 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <WebCore/DOMObject.h>
#import <WebCore/DOMNodeFilter.h>

@protocol DOMNodeFilter <NSObject>
@required
-(short)acceptNode:(id)arg1;

@end


@class NSString;

@interface DOMNodeFilter : DOMObject <DOMNodeFilter>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)finalize;
-(short)acceptNode:(id)arg1 ;
@end

