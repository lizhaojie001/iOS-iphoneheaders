/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:33:57 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/Stocks.framework/Stocks
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Stocks/YQLRequest.h>

@class NSArray;

@interface SymbolValidator : YQLRequest {

	NSArray* _symbols;
	id _delegate;

}

@property (assign,nonatomic,__weak) id delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)failWithError:(id)arg1 ;
-(void)setDelegate:(id)arg1 ;
-(id)delegate;
-(id)initWithDelegate:(id)arg1 ;
-(void)parseData:(id)arg1 ;
-(void)didParseData;
-(void)validateSymbol:(id)arg1 withMaxResults:(int)arg2 ;
-(id)aggregateDictionaryDomain;
@end
