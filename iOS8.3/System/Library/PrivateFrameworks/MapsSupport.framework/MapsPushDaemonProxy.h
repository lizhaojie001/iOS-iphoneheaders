/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 2:23:43 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/MapsSupport.framework/mapspushd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol MapsPushDaemonProxy
@required
-(void)simulateProblemResolution;
-(void)clearBulletinWithRecordID:(id)arg1;
-(void)clearCurrentAnnouncement;
-(void)registerForTopic;
-(void)fetchProblemStatus;
-(void)fetchDevicePushToken:(/*^block*/id)arg1;
-(void)simulateAnnouncement:(id)arg1;
-(void)resetShownAnnouncements;
-(void)fetchCurrentAnnouncement:(/*^block*/id)arg1;
-(void)checkin;

@end
