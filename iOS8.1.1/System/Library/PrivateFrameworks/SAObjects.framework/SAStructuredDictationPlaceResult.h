/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:33:43 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SAAceSerializable.h>

@class NSString, NSData;

@interface SAStructuredDictationPlaceResult : AceObject <SAAceSerializable>

@property (nonatomic,copy) NSString * placeResultType; 
@property (nonatomic,copy) NSData * resultData; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)structuredDictationPlaceResult;
+(id)structuredDictationPlaceResultWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(NSString *)placeResultType;
-(void)setPlaceResultType:(NSString *)arg1 ;
-(NSData *)resultData;
-(void)setResultData:(NSData *)arg1 ;
@end

