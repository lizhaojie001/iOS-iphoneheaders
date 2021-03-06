/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:35:12 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iTunesStoreUI/SUScriptObject.h>

@class SLRequest, SUScriptAppleAccount, NSURL;

@interface SUScriptFacebookRequest : SUScriptObject {

	SLRequest* _request;
	long long _requestMethod;
	SUScriptAppleAccount* _scriptAccount;
	NSURL* _url;

}

@property (retain) SUScriptAppleAccount * account; 
@property (readonly) long long requestMethod; 
@property (copy,readonly) NSURL * URL; 
@property (readonly) long long requestMethodDelete; 
@property (readonly) long long requestMethodGet; 
@property (readonly) long long requestMethodPost; 
+(void)initialize;
+(id)webScriptNameForSelector:(SEL)arg1 ;
+(id)webScriptNameForKeyName:(id)arg1 ;
-(void)dealloc;
-(NSURL *)URL;
-(SUScriptAppleAccount *)account;
-(void)setAccount:(SUScriptAppleAccount *)arg1 ;
-(void)setParameters:(id)arg1 ;
-(id)scriptAttributeKeys;
-(id)_className;
-(id)attributeKeys;
-(long long)requestMethodGet;
-(long long)requestMethodPost;
-(long long)requestMethodDelete;
-(BOOL)_isRequestAllowed:(id*)arg1 ;
-(void)_performRequest:(id)arg1 withScriptFunction:(id)arg2 ;
-(void)addMultiPartData:(id)arg1 withName:(id)arg2 type:(id)arg3 ;
-(void)addParameterWithKey:(id)arg1 value:(id)arg2 ;
-(void)performRequestWithFunction:(id)arg1 ;
-(id)initWithURL:(id)arg1 requestMethod:(id)arg2 ;
-(long long)requestMethod;
@end

