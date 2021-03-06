/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:18:30 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/PassKit.framework/passd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <passd/passd-Structs.h>
#import <passd/PDWebServiceConnectionTask.h>

@class NSArray;

@interface PDLogTask : PDWebServiceConnectionTask {

	NSArray* _logs;

}

@property (nonatomic,retain) NSArray * logs;              //@synthesize logs=_logs - In the implementation block
+(id)taskWithWebService:(id)arg1 error:(id)arg2 ;
+(id)taskWithWebService:(id)arg1 warnings:(id)arg2 ;
-(BOOL)coalescesWithTaskSubclass:(Class)arg1 ;
-(long long)actionForInactiveTask:(id)arg1 ;
-(void)mergeWithNewerTask:(id)arg1 ;
-(long long)actionForActiveTask:(id)arg1 ;
-(unsigned long long)numberOfBackoffLevels;
-(const SCD_Struct_PD2*)backoffLevels;
-(void)handleResponse:(id)arg1 data:(id)arg2 ;
-(id)endpointComponents;
-(void)setLogs:(NSArray *)arg1 ;
-(BOOL)_matchesLogTask:(id)arg1 ;
-(BOOL)_hasRoomForAdditionalLogs;
-(NSArray *)logs;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(id)method;
-(void)handleError:(id)arg1 ;
-(id)bodyDictionary;
@end

