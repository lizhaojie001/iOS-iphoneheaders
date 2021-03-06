/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:22:15 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PowerlogPlugins/PLRegistrationLogger.bundle/PLRegistrationLogger
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PowerlogLoggerSupport/PLTelephonyConnectedLogger.h>

@class NSNumber, NSString;

@interface PLRegistrationLogger : PLTelephonyConnectedLogger {

	NSNumber* cellID;
	NSNumber* lac;
	NSNumber* dataAttached;
	NSNumber* dataActive;
	NSString* dataIndicator;
	NSNumber* homeNetwork;
	NSString* registrationStatus;
	NSString* operatorName;
	bool changed;

}

@property (nonatomic,copy) NSNumber * cellID; 
@property (nonatomic,copy) NSNumber * lac; 
@property (nonatomic,copy) NSNumber * dataAttached; 
@property (nonatomic,copy) NSNumber * dataActive; 
@property (nonatomic,copy) NSString * dataIndicator; 
@property (nonatomic,copy) NSNumber * homeNetwork; 
@property (nonatomic,copy) NSString * registrationStatus; 
@property (nonatomic,copy) NSString * operatorName; 
@property (assign,getter=isChanged,nonatomic) bool changed; 
-(id)humanReadableDataIndicator:(id)arg1 ;
-(void)setDataIndicator:(id)arg1 ;
-(id)dataAttached;
-(void)setHomeNetwork:(id)arg1 ;
-(void)setCellID:(id)arg1 ;
-(id)humanReadableRegistrationStatus:(id)arg1 ;
-(id)homeNetwork;
-(void)setDataAttached:(id)arg1 ;
-(id)dataIndicator;
-(void)setLac:(id)arg1 ;
-(id)lac;
-(void)setDataActive:(id)arg1 ;
-(id)cellID;
-(id)dataActive;
-(void)dealloc;
-(void)log;
-(id)initWithConnection:(id)arg1 ;
-(id)registrationStatus;
-(void)setRegistrationStatus:(id)arg1 ;
-(void)setChanged:(bool)arg1 ;
-(id)operatorName;
-(void)setOperatorName:(id)arg1 ;
-(bool)isChanged;
@end

