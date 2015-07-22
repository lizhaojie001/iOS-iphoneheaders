/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 1:02:17 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/CloudDocs.framework/CloudDocs
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_source;
#import <CloudDocs/CloudDocs-Structs.h>
@class NSURL, NSString, NSObject;

@interface BRCLogState : NSObject {

	asl_object_sRef _asl_store;
	asl_object_sRef _asl_client;
	NSURL* _directory;
	NSString* _basename;
	int _fd;
	NSObject*<OS_dispatch_source> _fdDeletionWatcher;

}

@property (nonatomic,retain) NSURL * directory;                //@synthesize directory=_directory - In the implementation block
@property (nonatomic,retain) NSString * basename;              //@synthesize basename=_basename - In the implementation block
+(id)defaultLogState;
-(id)init;
-(void)setLevel:(int)arg1 ;
-(int)indentationLevel;
-(NSString *)basename;
-(void)closeLog;
-(void)setBasename:(NSString *)arg1 ;
-(void)openASLStoreIfNeeded;
-(void)setPath:(const char*)arg1 base:(const char*)arg2 ;
-(const char*)currentSectionID;
-(void)logMsg:(int)arg1 facility:(const char*)arg2 func:(const char*)arg3 src:(const char*)arg4 lno:(int)arg5 msg:(const char*)arg6 aslmsg:(asl_object_sRef)arg7 ;
-(NSURL *)directory;
-(void)setDirectory:(NSURL *)arg1 ;
@end
