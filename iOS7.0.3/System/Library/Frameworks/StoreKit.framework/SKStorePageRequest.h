/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:53:13 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/StoreKit.framework/StoreKit
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


@class NSDictionary, NSURL;

@interface SKStorePageRequest : NSObject {

	int _pageStyle;
	NSDictionary* _productParameters;
	NSURL* _productURL;

}

@property (assign,nonatomic) int productPageStyle;                        //@synthesize pageStyle=_pageStyle - In the implementation block
@property (nonatomic,copy) NSDictionary * productParameters;              //@synthesize productParameters=_productParameters - In the implementation block
@property (nonatomic,copy) NSURL * productURL;                            //@synthesize productURL=_productURL - In the implementation block
-(void)dealloc;
-(id)productParameters;
-(void)setProductParameters:(id)arg1 ;
-(void)setProductURL:(id)arg1 ;
-(id)initWithXPCEncoding:(id)arg1 ;
-(id)copyXPCEncoding;
-(id)productURL;
-(int)productPageStyle;
-(void)setProductPageStyle:(int)arg1 ;
@end

