/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:33:39 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SAObjects/SABaseCommand.h>
#import <SAObjects/SAServerBoundCommand.h>

@class NSNumber, NSArray, NSURL, NSString;

@interface SAFmfSearchCompleted : SABaseCommand <SAServerBoundCommand>

@property (nonatomic,copy) NSNumber * atRequestedLocation; 
@property (nonatomic,copy) NSArray * fmfLocations; 
@property (nonatomic,copy) NSURL * searchContext; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSString * aceId; 
@property (nonatomic,copy) NSString * refId; 
+(id)searchCompleted;
+(id)searchCompletedWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(void)setSearchContext:(NSURL *)arg1 ;
-(NSURL *)searchContext;
-(id)encodedClassName;
-(NSNumber *)atRequestedLocation;
-(void)setAtRequestedLocation:(NSNumber *)arg1 ;
-(NSArray *)fmfLocations;
-(void)setFmfLocations:(NSArray *)arg1 ;
@end

