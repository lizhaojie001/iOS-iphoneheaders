/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:27:58 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <CoreFoundation/CoreFoundation-Structs.h>
@interface _NSRefcountedPthreadMutex : NSObject {

	opaque_pthread_mutex_t lock;

}
-(void)dealloc;
-(id)init;
-(void)lock;
-(void)unlock;
-(void)finalize;
@end

