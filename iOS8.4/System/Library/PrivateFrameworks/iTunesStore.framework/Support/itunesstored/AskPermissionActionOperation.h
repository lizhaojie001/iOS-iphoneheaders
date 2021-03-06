/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:27:03 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/Support/itunesstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <iTunesStore/ISOperation.h>

@class NSString, NSURL;

@interface AskPermissionActionOperation : ISOperation {

	NSString* _requestIdentifier;
	NSURL* _url;

}

@property (nonatomic,readonly) NSURL * URL;                          //@synthesize url=_url - In the implementation block
@property (copy,readonly) NSString * requestIdentifier; 
-(void)dealloc;
-(id)initWithURL:(id)arg1 ;
-(NSURL *)URL;
-(void)run;
-(NSString *)requestIdentifier;
@end

