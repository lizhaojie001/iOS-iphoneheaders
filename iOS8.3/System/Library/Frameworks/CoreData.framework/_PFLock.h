/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, June 24, 2015 at 10:40:57 PM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreData/CoreData-Structs.h>
#import <CoreData/NSLocking.h>

@interface _PFLock : NSObject <NSLocking> {

	int _cd_rc;
	opaque_pthread_mutex_t _lock;
	opaque_pthread_t* _owner;
	unsigned _count;

}
+(void)initialize;
-(char)tryLock;
-(void)dealloc;
-(id)init;
-(void)lock;
-(void)unlock;
-(void)finalize;
@end

