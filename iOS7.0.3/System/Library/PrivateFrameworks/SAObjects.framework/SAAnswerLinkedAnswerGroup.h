/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:57:16 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SAAceSerializable.h>

@class NSArray, NSString;

@interface SAAnswerLinkedAnswerGroup : AceObject <SAAceSerializable>

@property (nonatomic,copy) NSArray * linkedAnswers; 
@property (nonatomic,copy) NSString * title; 
+(id)linkedAnswerGroup;
+(id)linkedAnswerGroupWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(void)setTitle:(id)arg1 ;
-(id)title;
-(id)encodedClassName;
-(id)linkedAnswers;
-(void)setLinkedAnswers:(id)arg1 ;
@end
