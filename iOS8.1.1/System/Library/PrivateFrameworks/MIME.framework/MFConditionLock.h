/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:32:21 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/MIME.framework/MIME
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Foundation/NSConditionLock.h>
#import <MIME/MFLockObject.h>

@class NSString;

@interface MFConditionLock : NSConditionLock <MFLockObject> {

	NSString* _name;
	id _delegate;

}
+(void)initialize;
-(BOOL)lockBeforeDate:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(id)description;
-(void)unlock;
-(void)unlockWithCondition:(long long)arg1 ;
-(BOOL)isLockedByMe;
-(id)initWithName:(id)arg1 andDelegate:(id)arg2 ;
-(id)initWithName:(id)arg1 condition:(long long)arg2 andDelegate:(id)arg3 ;
-(BOOL)lockWhenCondition:(long long)arg1 beforeDate:(id)arg2 ;
@end

