/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 1:44:14 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <FrontBoard/FBProcessExecutionContext.h>

@class NSArray, NSDictionary, NSURL;

@interface FBMutableProcessExecutionContext : FBProcessExecutionContext

@property (nonatomic,retain) NSArray * arguments; 
@property (nonatomic,retain) NSDictionary * environment; 
@property (nonatomic,retain) NSURL * standardOutputURL; 
@property (nonatomic,retain) NSURL * standardErrorURL; 
@property (assign,nonatomic) char waitForDebugger; 
@property (assign,nonatomic) char disableASLR; 
@property (assign,nonatomic) char checkForLeaks; 
@property (assign,nonatomic) int launchIntent; 
@property (assign,nonatomic) double watchdogExtension; 
@property (assign,nonatomic) unsigned launchAssertionFlags; 
@end

