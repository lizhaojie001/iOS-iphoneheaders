/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:32:17 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ITMLKit/IKCollectionElement.h>

@class NSString;

@interface IKGridElement : IKCollectionElement {

	BOOL _paged;

}

@property (nonatomic,readonly) unsigned long long columnCount; 
@property (nonatomic,readonly) NSString * rowHeight; 
@property (getter=isPaged,nonatomic,readonly) BOOL paged;                   //@synthesize paged=_paged - In the implementation block
@property (nonatomic,readonly) unsigned long long rowCount; 
-(NSString *)rowHeight;
-(unsigned long long)columnCount;
-(BOOL)isPaged;
-(unsigned long long)rowCount;
-(id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3 ;
@end
