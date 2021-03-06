/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:54:50 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DACalDAV.framework/DACalDAV
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


@protocol CalDAVSubscribedCalendar <CalDAVCalendar>
@property (retain) NSURL * subscriptionURL; 
@property (assign) BOOL hasAlarmFilter; 
@property (assign) BOOL hasAttachmentFilter; 
@property (assign) BOOL hasTaskFilter; 
@property (assign) double refreshInterval; 
@property (assign) BOOL autoprovisioned; 
@property (retain) NSString * locationCode; 
@property (retain) NSString * languageCode; 
@optional
-(id)languageCode;
-(BOOL)autoprovisioned;
-(void)setAutoprovisioned:(BOOL)arg1;
-(id)locationCode;
-(void)setLocationCode:(id)arg1;
-(void)setLanguageCode:(id)arg1;

@required
-(id)subscriptionURL;
-(double)refreshInterval;
-(void)setSubscriptionURL:(id)arg1;
-(void)setRefreshInterval:(double)arg1;
-(BOOL)hasAlarmFilter;
-(BOOL)hasAttachmentFilter;
-(BOOL)hasTaskFilter;
-(void)setHasAlarmFilter:(BOOL)arg1;
-(void)setHasAttachmentFilter:(BOOL)arg1;
-(void)setHasTaskFilter:(BOOL)arg1;
@end

