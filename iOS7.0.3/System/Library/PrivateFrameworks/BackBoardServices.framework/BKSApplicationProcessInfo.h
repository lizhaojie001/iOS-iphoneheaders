/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:54:19 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/BackBoardServices.framework/BackBoardServices
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <BackBoardServices/BackBoardServices-Structs.h>
#import <CoreFoundation/NSCopying.h>
#import <BackBoardServices/BKSXPCCoding.h>

@class NSString, NSNumber, BKSMachSendRight;

@interface BKSApplicationProcessInfo : NSObject <NSCopying, BKSXPCCoding> {

	BOOL _suspended;
	BOOL _classic;
	NSString* _bundleIdentifier;
	NSNumber* _pidNumber;
	NSNumber* _beingDebugged;
	BKSMachSendRight* _eventPort;

}

@property (nonatomic,copy) NSString * bundleIdentifier;                 //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (nonatomic,retain) NSNumber * pidNumber;                      //@synthesize pidNumber=_pidNumber - In the implementation block
@property (nonatomic,retain) NSNumber * beingDebugged;                  //@synthesize beingDebugged=_beingDebugged - In the implementation block
@property (nonatomic,retain) BKSMachSendRight * eventPort;              //@synthesize eventPort=_eventPort - In the implementation block
@property (assign,nonatomic) BOOL suspended;                            //@synthesize suspended=_suspended - In the implementation block
@property (assign,nonatomic) BOOL classic;                              //@synthesize classic=_classic - In the implementation block
-(BOOL)suspended;
-(void)dealloc;
-(id)description;
-(id)bundleIdentifier;
-(id)copyWithZone:(NSZoneRef)arg1 ;
-(void)setSuspended:(BOOL)arg1 ;
-(id)pidNumber;
-(id)beingDebugged;
-(void)encodeWithXPCDictionary:(id)arg1 ;
-(id)initWithXPCDictionary:(id)arg1 ;
-(BOOL)classic;
-(void)setClassic:(BOOL)arg1 ;
-(id)eventPort;
-(id)initWithInfo:(id)arg1 zone:(NSZoneRef)arg2 ;
-(void)setPidNumber:(id)arg1 ;
-(void)setBeingDebugged:(id)arg1 ;
-(void)setEventPort:(id)arg1 ;
-(void)setBundleIdentifier:(id)arg1 ;
@end

