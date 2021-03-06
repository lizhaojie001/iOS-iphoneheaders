/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, June 24, 2015 at 10:55:05 PM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/Frameworks/LocalAuthentication.framework/Support/coreauthd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <coreauthd/MechanismBase.h>

@class NSMutableArray, NSArray;

@interface MechanismKofN : MechanismBase {

	NSMutableArray* _runningMechanisms;
	char _serial;
	char _AND;
	char _OR;
	unsigned _k;
	unsigned _n;
	NSArray* _submechanisms;

}

@property (k,nonatomic,readonly) unsigned k;                             //@synthesize k=_k - In the implementation block
@property (n,nonatomic,readonly) unsigned n;                             //@synthesize n=_n - In the implementation block
@property (nonatomic,readonly) NSArray * submechanisms;                  //@synthesize submechanisms=_submechanisms - In the implementation block
@property (getter=isSerial,nonatomic,readonly) char serial;              //@synthesize serial=_serial - In the implementation block
@property (getter=isAND,nonatomic,readonly) char AND;                    //@synthesize AND=_AND - In the implementation block
@property (getter=isOR,nonatomic,readonly) char OR;                      //@synthesize OR=_OR - In the implementation block
+(id)mechanismWithK:(unsigned)arg1 ofSubmechanisms:(id)arg2 serial:(char)arg3 ;
-(void)finishRunWithResult:(id)arg1 error:(id)arg2 ;
-(char)requiresRemoteViewControllerUiWithEventProcessing:(id)arg1 ;
-(void)runWithHints:(id)arg1 eventsDelegate:(id)arg2 reply:(/*^block*/id)arg3 ;
-(id)bestEffortAvailableMechanismWithError:(id*)arg1 ;
-(id)findMechanismWithEventIdentifier:(int)arg1 ;
-(id)findMechanismWithClass:(Class)arg1 ;
-(id)availabilityEvents;
-(char)requiresUiWithEventProcessing:(id)arg1 ;
-(id)initWithK:(unsigned)arg1 ofSubmechanisms:(id)arg2 serial:(char)arg3 ;
-(void)_runSubmechanismAtIndex:(int)arg1 hints:(id)arg2 eventsDelegate:(id)arg3 succeeded:(int)arg4 failed:(int)arg5 results:(id)arg6 reply:(/*^block*/id)arg7 ;
-(unsigned)k;
-(NSArray *)submechanisms;
-(char)isSerial;
-(char)isAND;
-(char)isOR;
-(id)description;
-(unsigned)n;
@end

