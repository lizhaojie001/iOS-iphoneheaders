/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:20:55 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/Radio.framework/Radio
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <Radio/Radio-Structs.h>
@interface RadioFairPlaySAPContext : NSObject {

	FPSAPContextOpaque_Ref _session;

}
-(void)dealloc;
-(id)_initWithFPSAPContext:(void*)arg1 ;
-(char)verifyData:(id)arg1 withSignature:(id)arg2 error:(id*)arg3 ;
-(id)signatureWithData:(id)arg1 error:(id*)arg2 ;
@end

