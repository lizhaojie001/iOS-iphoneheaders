/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:19:28 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/BackBoardServices.framework/BackBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <BackBoardServices/BackBoardServices-Structs.h>
#import <BackBoardServices/NSSecureCoding.h>

@interface BKSTouchDeliveryPolicy : NSObject <NSSecureCoding>

@property (nonatomic,retain) NSObject*<OS_xpc_object> assertionEndpoint; 
+(id)allocWithZone:(NSZone*)arg1 ;
+(char)supportsSecureCoding;
+(id)policyRequiringSharingOfTouchesDeliveredToChildContextId:(unsigned)arg1 withHostContextId:(unsigned)arg2 ;
+(id)policyCancelingTouchesDeliveredToContextId:(unsigned)arg1 withInitialTouchTimestamp:(double)arg2 ;
+(id)policyByCombiningPolicies:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(void)setAssertionEndpoint:(NSObject*<OS_xpc_object>)arg1 ;
-(id)matchSharingTouchesPolicy:(/*^block*/id)arg1 orCancelTouchesPolicy:(/*^block*/id)arg2 orCombinedPolicy:(/*^block*/id)arg3 ;
-(id)reducePolicyToObjectWithBlock:(/*^block*/id)arg1 ;
-(id)policyByMappingContainedPoliciesWithBlock:(/*^block*/id)arg1 ;
-(NSObject*<OS_xpc_object>)assertionEndpoint;
-(id)policyIncludingPolicy:(id)arg1 ;
-(id)policyExcludingPolicy:(id)arg1 ;
@end

