/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:21:29 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iTunesStore/ISOperation.h>

@class ISOpenURLRequest;

@interface ISOpenURLOperation : ISOperation {

	ISOpenURLRequest* _request;

}

@property (readonly) ISOpenURLRequest * openURLRequest; 
-(void)dealloc;
-(id)init;
-(void)run;
-(id)initWithOpenURLRequest:(id)arg1 ;
-(char)_openURL:(id)arg1 ;
-(id)_newSortedTargetsArray;
-(ISOpenURLRequest *)openURLRequest;
@end

