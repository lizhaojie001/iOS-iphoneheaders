/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:19:03 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/_UIViewVisitor.h>

@interface _UIViewBlockVisitor : _UIViewVisitor {

	/*^block*/id _visitorBlock;

}

@property (nonatomic,copy) id visitorBlock;              //@synthesize visitorBlock=_visitorBlock - In the implementation block
-(void)dealloc;
-(id)initWithTraversalDirection:(unsigned long long)arg1 visitorBlock:(/*^block*/id)arg2 ;
-(BOOL)_visitView:(id)arg1 ;
-(void)setVisitorBlock:(id)arg1 ;
-(id)visitorBlock;
@end

