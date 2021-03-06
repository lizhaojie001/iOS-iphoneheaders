/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:21:33 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/MessageUI.framework/MessageUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol MFContactsSearchConsumer;
@class NSString, NSMutableSet;

@interface MFContactsSearchTaskContext : NSObject {

	<MFContactsSearchConsumer>* _consumer;
	NSString* _text;
	NSMutableSet* _operations;
	NSMutableSet* _searchQueries;

}

@property (nonatomic,readonly) <MFContactsSearchConsumer> * consumer;              //@synthesize consumer=_consumer - In the implementation block
@property (nonatomic,readonly) NSString * text;                                    //@synthesize text=_text - In the implementation block
@property (nonatomic,readonly) NSMutableSet * operations;                          //@synthesize operations=_operations - In the implementation block
@property (nonatomic,readonly) NSMutableSet * searchQueries;                       //@synthesize searchQueries=_searchQueries - In the implementation block
+(id)contextWithConsumer:(id)arg1 text:(id)arg2 operations:(id)arg3 searchQueries:(id)arg4 ;
-(id)searchQueries;
-(void)dealloc;
-(id)text;
-(bool)done;
-(id)operations;
-(id)consumer;
@end

