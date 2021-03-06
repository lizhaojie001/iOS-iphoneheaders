/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:20:59 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CalDAV/CalDAVGetDelegatesBaseTaskGroup.h>

@interface CalDAVGetGrantedDelegatesTaskGroup : CalDAVGetDelegatesBaseTaskGroup {

	int _state;
	BOOL _fetchPrincipalDetails;

}

@property (assign,nonatomic) BOOL fetchPrincipalDetails;              //@synthesize fetchPrincipalDetails=_fetchPrincipalDetails - In the implementation block
@property (assign,nonatomic) int state;                               //@synthesize state=_state - In the implementation block
-(int)state;
-(void)setState:(int)arg1 ;
-(id)initWithAccountInfoProvider:(id)arg1 principalURL:(id)arg2 taskManager:(id)arg3 ;
-(void)_getChildProperties;
-(void)setFetchPrincipalDetails:(BOOL)arg1 ;
-(id)_urlAppendingSegmentWithAllowWrite:(BOOL)arg1 ;
-(BOOL)fetchPrincipalDetails;
-(void)_expandPropertiesWithAllowWrite:(BOOL)arg1 ;
-(void)_fetchOnlyHrefs;
-(void)task:(id)arg1 didFinishWithError:(id)arg2 ;
-(void)startTaskGroup;
-(void)taskGroup:(id)arg1 didFinishWithError:(id)arg2 ;
-(void)_finishWithError:(id)arg1 state:(int)arg2 ;
@end

