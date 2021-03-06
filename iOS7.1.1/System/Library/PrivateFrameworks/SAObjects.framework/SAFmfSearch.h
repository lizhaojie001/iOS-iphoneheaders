/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:24:53 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSURL, SALocation, NSArray, NSString;

@interface SAFmfSearch : SABaseClientBoundCommand

@property (nonatomic,copy) NSURL * targetAppId; 
@property (nonatomic,retain) SALocation * currentLocation; 
@property (nonatomic,copy) NSArray * emailAddresses; 
@property (nonatomic,copy) NSArray * friends; 
@property (nonatomic,copy) NSString * proximity; 
@property (nonatomic,retain) SALocation * requestedLocation; 
+(id)searchWithDictionary:(id)arg1 context:(id)arg2 ;
+(id)search;
-(id)currentLocation;
-(void)setCurrentLocation:(id)arg1 ;
-(id)proximity;
-(void)setProximity:(id)arg1 ;
-(id)groupIdentifier;
-(void)setFriends:(id)arg1 ;
-(id)emailAddresses;
-(void)setEmailAddresses:(id)arg1 ;
-(id)encodedClassName;
-(bool)requiresResponse;
-(id)targetAppId;
-(void)setTargetAppId:(id)arg1 ;
-(id)requestedLocation;
-(void)setRequestedLocation:(id)arg1 ;
-(id)friends;
@end

