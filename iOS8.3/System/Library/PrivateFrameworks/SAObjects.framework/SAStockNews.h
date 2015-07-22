/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 3:25:29 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SAObjects/SADomainObject.h>

@class NSDate, NSString;

@interface SAStockNews : SADomainObject

@property (nonatomic,copy) NSDate * timeStamp; 
@property (nonatomic,copy) NSString * title; 
@property (nonatomic,copy) NSString * url; 
+(id)news;
+(id)newsWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)url;
-(NSString *)title;
-(void)setUrl:(NSString *)arg1 ;
-(NSDate *)timeStamp;
-(void)setTimeStamp:(NSDate *)arg1 ;
-(id)encodedClassName;
-(void)updateUsingSet:(id)arg1 add:(id)arg2 remove:(id)arg3 ;
@end
