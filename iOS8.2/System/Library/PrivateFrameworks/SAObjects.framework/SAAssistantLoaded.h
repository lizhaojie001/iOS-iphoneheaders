/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:21:01 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSString, NSNumber, NSArray;

@interface SAAssistantLoaded : SABaseClientBoundCommand

@property (nonatomic,copy) NSString * dataAnchor; 
@property (nonatomic,copy) NSNumber * requestSync; 
@property (nonatomic,copy) NSArray * syncAnchors; 
@property (nonatomic,copy) NSString * version; 
+(id)assistantLoaded;
+(id)assistantLoadedWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(void)setVersion:(NSString *)arg1 ;
-(NSString *)version;
-(id)encodedClassName;
-(char)requiresResponse;
-(NSString *)dataAnchor;
-(void)setDataAnchor:(NSString *)arg1 ;
-(NSNumber *)requestSync;
-(void)setRequestSync:(NSNumber *)arg1 ;
-(NSArray *)syncAnchors;
-(void)setSyncAnchors:(NSArray *)arg1 ;
@end

