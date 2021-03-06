/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:03:43 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/CoreServices/ReportCrash
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <ReportCrash/ReportCrash-Structs.h>
#import <ReportCrash/AppleErrorReport.h>

@class NSString, NSArray;

@interface JetsamReport : AppleErrorReport {

	NSString* _largestApp;
	NSString* _largestActiveApp;
	NSArray* _killedApps;
	NSArray* _killedActiveApps;
	NSArray* _suspendedApps;
	BOOL _writeToSyslog;
	unsigned long long _wiredBytes;
	BOOL _emptyReport;
	BOOL _isSuspendedOnlyJetsam;
	jetsam_snapshot* _snapshot;

}

@property (nonatomic,readonly) NSString * largestApp;                      //@synthesize largestApp=_largestApp - In the implementation block
@property (nonatomic,readonly) NSString * largestActiveApp;                //@synthesize largestActiveApp=_largestActiveApp - In the implementation block
@property (nonatomic,readonly) NSArray * killedApps;                       //@synthesize killedApps=_killedApps - In the implementation block
@property (nonatomic,readonly) NSArray * killedActiveApps;                 //@synthesize killedActiveApps=_killedActiveApps - In the implementation block
@property (nonatomic,readonly) NSArray * suspendedApps;                    //@synthesize suspendedApps=_suspendedApps - In the implementation block
@property (nonatomic,readonly) unsigned long long wiredBytes;              //@synthesize wiredBytes=_wiredBytes - In the implementation block
@property (nonatomic,readonly) BOOL emptyReport;                           //@synthesize emptyReport=_emptyReport - In the implementation block
@property (nonatomic,readonly) BOOL isSuspendedOnlyJetsam;                 //@synthesize isSuspendedOnlyJetsam=_isSuspendedOnlyJetsam - In the implementation block
+(int)_daysSince1970;
-(id)initWithIncidentID:(id)arg1 ;
-(BOOL)emptyReport;
-(BOOL)isSuspendedOnlyJetsam;
-(bool)alreadyDumpedSuspendedJetsamLogToday;
-(id)killedApps;
-(id)suspendedApps;
-(id)killedActiveApps;
-(id)largestActiveApp;
-(unsigned long long)wiredBytes;
-(id)largestApp;
-(id)setJetsamSnapshot;
-(void)_setDumpedSuspendedJetsamLog;
-(void)dealloc;
-(id)description;
-(unsigned)uid;
@end

