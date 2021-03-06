/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:26:44 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/WebContentAnalysis.framework/WebContentAnalysis
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class WFLSMResult, NSString;

@interface WFVerdict : NSObject {

	BOOL restricted;
	WFLSMResult* LSMEvaluationResult;
	NSString* message;
	NSString* URL;
	int evidence;

}
+(id)verdictWithRestriction:(BOOL)arg1 URL:(id)arg2 evidence:(int)arg3 LSMEvaluationResult:(id)arg4 message:(id)arg5 ;
-(void)dealloc;
-(id)description;
-(id)message;
-(id)URL;
-(void)setMessage:(id)arg1 ;
-(void)setURL:(id)arg1 ;
-(void)setRestricted:(BOOL)arg1 ;
-(void)setEvidence:(int)arg1 ;
-(void)setLSMEvaluationResult:(id)arg1 ;
-(id)LSMEvaluationResult;
-(int)evidence;
-(BOOL)restricted;
@end

