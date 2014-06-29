/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:20:50 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreFoundation/CoreFoundation-Structs.h>
#import <CoreFoundation/NSOutputStream.h>

@interface __NSCFOutputStream : NSOutputStream
+(id)allocWithZone:(NSZone)arg1 ;
+(bool)automaticallyNotifiesObserversForKey:(id)arg1 ;
-(id)propertyForKey:(id)arg1 ;
-(bool)setProperty:(id)arg1 forKey:(id)arg2 ;
-(void)scheduleInRunLoop:(id)arg1 forMode:(id)arg2 ;
-(void)removeFromRunLoop:(id)arg1 forMode:(id)arg2 ;
-(unsigned long long)streamStatus;
-(id)streamError;
-(bool)_setCFClientFlags:(unsigned long long)arg1 callback:(/*function pointer*/ void*)arg2 context:(SCD_Struct_NS4*)arg3 ;
-(void)_scheduleInCFRunLoop:(CFRunLoopRef)arg1 forMode:(CFStringRef)arg2 ;
-(void)_unscheduleFromCFRunLoop:(CFRunLoopRef)arg1 forMode:(CFStringRef)arg2 ;
-(id)initWithURL:(id)arg1 append:(bool)arg2 ;
-(id)initToMemory;
-(id)initToBuffer:(char*)arg1 capacity:(unsigned long long)arg2 ;
-(long long)write:(const char*)arg1 maxLength:(unsigned long long)arg2 ;
-(bool)hasSpaceAvailable;
-(oneway void)release;
-(id)retain;
-(void)setDelegate:(id)arg1 ;
-(bool)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(unsigned long long)retainCount;
-(id)delegate;
-(bool)_tryRetain;
-(bool)_isDeallocating;
-(void)close;
-(id)initToFileAtPath:(id)arg1 append:(bool)arg2 ;
-(void)finalize;
-(void)open;
@end
