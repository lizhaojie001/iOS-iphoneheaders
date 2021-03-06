/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:21:09 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <StoreKitUI/SKUICachedLayout.h>

@class NSString;

@interface SKUITextLayout : NSObject <SKUICachedLayout> {

	CTFramesetterRef _framesetter;
	char _requiresTruncation;
	CGSize _size;
	CTFrameRef _textFrame;
	CGSize _truncatedSize;

}

@property (nonatomic,readonly) char requiresTruncation;              //@synthesize requiresTruncation=_requiresTruncation - In the implementation block
@property (nonatomic,readonly) CTFrameRef textFrame;                 //@synthesize textFrame=_textFrame - In the implementation block
@property (nonatomic,readonly) CGSize textSize;                      //@synthesize size=_size - In the implementation block
@property (nonatomic,readonly) CGSize truncatedSize;                 //@synthesize truncatedSize=_truncatedSize - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(CFAttributedStringRef)_newAttributedStringWithRequest:(id)arg1 ;
+(CFAttributedStringRef)newAttributedStringWithText:(id)arg1 ;
-(void)dealloc;
-(CGSize)textSize;
-(id)initWithLayoutRequest:(id)arg1 ;
-(char)requiresTruncation;
-(CGSize)truncatedSize;
-(CTFrameRef)textFrame;
@end

