/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 2:34:23 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/MobileBackup.framework/MobileBackup
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface MBFileManager : NSObject
+(id)defaultManager;
-(id)fileAttributesAtPath:(id)arg1 traverseLink:(char)arg2 ;
-(id)directoryContentsAtPath:(id)arg1 ;
-(char)createDirectoryAtPath:(id)arg1 attributes:(id)arg2 ;
-(char)fileExistsAtPath:(id)arg1 ;
-(char)movePath:(id)arg1 toPath:(id)arg2 ;
-(char)removeFileAtPath:(id)arg1 ;
-(char)copyPath:(id)arg1 toPath:(id)arg2 ;
@end

