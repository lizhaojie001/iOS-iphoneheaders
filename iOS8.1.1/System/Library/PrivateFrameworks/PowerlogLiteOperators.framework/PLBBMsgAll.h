/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:33:23 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/PowerlogLiteOperators.framework/PowerlogLiteOperators
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PowerlogLiteOperators/PLBBMsgRoot.h>

@class NSNumber, NSDate, NSString, NSMutableDictionary;

@interface PLBBMsgAll : PLBBMsgRoot {

	NSNumber* _seqNum;
	NSDate* _bbDate;
	NSString* _payload;
	NSString* _error;
	NSMutableDictionary* _info;
	NSNumber* _iseqNum;
	NSDate* _ibbDate;
	NSString* _ieventCode;
	NSString* _ipayload;
	NSString* _ierror;

}

@property (retain) NSNumber * seqNum;                       //@synthesize seqNum=_seqNum - In the implementation block
@property (retain) NSDate * bbDate;                         //@synthesize bbDate=_bbDate - In the implementation block
@property (retain) NSString * payload;                      //@synthesize payload=_payload - In the implementation block
@property (retain) NSString * error;                        //@synthesize error=_error - In the implementation block
@property (retain) NSMutableDictionary * info;              //@synthesize info=_info - In the implementation block
@property (retain) NSNumber * iseqNum;                      //@synthesize iseqNum=_iseqNum - In the implementation block
@property (retain) NSDate * ibbDate;                        //@synthesize ibbDate=_ibbDate - In the implementation block
@property (retain) NSString * ieventCode;                   //@synthesize ieventCode=_ieventCode - In the implementation block
@property (retain) NSString * ipayload;                     //@synthesize ipayload=_ipayload - In the implementation block
@property (retain) NSString * ierror;                       //@synthesize ierror=_ierror - In the implementation block
+(id)entryEventNoneBBMsgAll;
-(NSString *)payload;
-(NSMutableDictionary *)info;
-(void)setPayload:(NSString *)arg1 ;
-(void)setInfo:(NSMutableDictionary *)arg1 ;
-(NSString *)error;
-(void)setError:(NSString *)arg1 ;
-(NSNumber *)seqNum;
-(void)sendAndLogPLEntry:(id)arg1 withName:(id)arg2 withType:(id)arg3 ;
-(NSDate *)bbDate;
-(void)setISeqNum:(id)arg1 ;
-(void)refreshBBMsgAll;
-(void)logEventNoneBBMsgAll;
-(void)setSeqNum:(NSNumber *)arg1 ;
-(void)setBbDate:(NSDate *)arg1 ;
-(NSNumber *)iseqNum;
-(void)setIseqNum:(NSNumber *)arg1 ;
-(NSDate *)ibbDate;
-(void)setIbbDate:(NSDate *)arg1 ;
-(NSString *)ieventCode;
-(void)setIeventCode:(NSString *)arg1 ;
-(NSString *)ipayload;
-(void)setIpayload:(NSString *)arg1 ;
-(NSString *)ierror;
-(void)setIerror:(NSString *)arg1 ;
@end

