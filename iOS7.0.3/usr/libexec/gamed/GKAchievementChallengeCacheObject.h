/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:18:55 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /usr/libexec/gamed
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <gamed/GKChallengeCacheObject.h>

@class NSDate, NSString, NSNumber;

@interface GKAchievementChallengeCacheObject : GKChallengeCacheObject

@property (nonatomic,@dynamic,retain) NSDate * date; 
@property (assign,nonatomic,@dynamic) float percentComplete; 
@property (nonatomic,@dynamic,retain) NSString * title; 
@property (nonatomic,@dynamic,retain) NSString * achievedDescription; 
@property (nonatomic,@dynamic,retain) NSString * unachievedDescription; 
@property (nonatomic,@dynamic,retain) NSNumber * maximumPoints; 
@property (assign,nonatomic,@dynamic) BOOL hidden; 
@property (assign,nonatomic,@dynamic) BOOL replayable; 
+(id)entityName;
-(void)updateWithServerRepresentation:(id)arg1 ;
-(Class)classForInternalRepresentation;
-(BOOL)hasDetails;
-(id)internalRepresentation;
@end

