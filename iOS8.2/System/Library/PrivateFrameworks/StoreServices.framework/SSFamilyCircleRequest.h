/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:21:16 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <StoreServices/SSRequest.h>
#import <StoreServices/SSXPCCoding.h>

@class NSString;

@interface SSFamilyCircleRequest : SSRequest <SSXPCCoding> {

	int _authenticationPromptStyle;
	char _fetchITunesAccountNames;

}

@property (assign,nonatomic) int authenticationPromptStyle;              //@synthesize authenticationPromptStyle=_authenticationPromptStyle - In the implementation block
@property (assign,nonatomic) char fetchITunesAccountNames;               //@synthesize fetchITunesAccountNames=_fetchITunesAccountNames - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)startWithCompletionBlock:(/*^block*/id)arg1 ;
-(id)initWithXPCEncoding:(id)arg1 ;
-(id)copyXPCEncoding;
-(void)setAuthenticationPromptStyle:(int)arg1 ;
-(void)startWithResponseBlock:(/*^block*/id)arg1 ;
-(int)authenticationPromptStyle;
-(char)fetchITunesAccountNames;
-(void)setFetchITunesAccountNames:(char)arg1 ;
@end
