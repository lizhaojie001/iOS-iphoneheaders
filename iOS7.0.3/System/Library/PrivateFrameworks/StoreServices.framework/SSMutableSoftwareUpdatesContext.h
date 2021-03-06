/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:57:41 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <StoreServices/SSSoftwareUpdatesContext.h>
#import <StoreServices/SSXPCCoding.h>

@class NSArray, NSString;

@interface SSMutableSoftwareUpdatesContext : SSSoftwareUpdatesContext <SSXPCCoding>

@property (assign,getter=isForced,nonatomic,@dynamic) BOOL forced; 
@property (nonatomic,@dynamic,copy) NSArray * softwareTypes; 
@property (nonatomic,@dynamic,copy) NSString * clientIdentifierHeader; 
-(id)initWithXPCEncoding:(id)arg1 ;
-(id)copyXPCEncoding;
-(void)setClientIdentifierHeader:(id)arg1 ;
-(void)setForced:(BOOL)arg1 ;
-(void)setSoftwareTypes:(id)arg1 ;
@end

