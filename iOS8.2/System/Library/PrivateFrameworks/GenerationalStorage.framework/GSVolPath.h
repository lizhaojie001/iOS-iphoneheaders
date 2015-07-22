/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:25:23 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/GenerationalStorage.framework/revisiond
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <revisiond/revisiond-Structs.h>
@class NSString, GSManager;

@interface GSVolPath : NSObject {

	long long _storageID;
	int _device;
	NSString* _path;
	GSManager* _library;
	unsigned long long _fileID;
	unsigned long long _parentID;
	unsigned long long _docID;

}

@property (nonatomic,readonly) unsigned long long fileID;                //@synthesize fileID=_fileID - In the implementation block
@property (nonatomic,readonly) unsigned long long parentID;              //@synthesize parentID=_parentID - In the implementation block
@property (nonatomic,readonly) unsigned long long docID;                 //@synthesize docID=_docID - In the implementation block
@property (nonatomic,readonly) int device;                               //@synthesize device=_device - In the implementation block
@property (nonatomic,readonly) NSString * path;                          //@synthesize path=_path - In the implementation block
@property (nonatomic,readonly) GSManager * library;                      //@synthesize library=_library - In the implementation block
@property (nonatomic,readonly) char isInIgnoredLocation; 
+(id)_volPathOnVolume:(id)arg1 withFD:(int)arg2 byPath:(const char*)arg3 how:(id)arg4 error:(id*)arg5 ;
+(id)volPathOnVolume:(id)arg1 withFD:(int)arg2 error:(id*)arg3 ;
+(id)volPathOnVolume:(id)arg1 byFileID:(unsigned long long)arg2 error:(id*)arg3 ;
+(id)volPathOnVolume:(id)arg1 byParentID:(unsigned long long)arg2 andName:(const char*)arg3 error:(id*)arg4 ;
+(id)volPathOnVolume:(id)arg1 byVolPath:(id)arg2 error:(id*)arg3 ;
+(id)volPathOnVolume:(id)arg1 byPath:(id)arg2 error:(id*)arg3 ;
+(id)volPathOnVolume:(id)arg1 byURL:(id)arg2 error:(id*)arg3 ;
-(char)isInIgnoredLocation;
-(char)_canReadFileWithCreds:(const GSCredential*)arg1 ;
-(char)setCopyOnWrite;
-(char)isValidForCreds:(const GSCredential*)arg1 documentIdentifier:(id)arg2 error:(id*)arg3 ;
-(void)performOnResolvedPath:(/*^block*/id)arg1 ;
-(unsigned long long)docID;
-(id)description;
-(NSString *)path;
-(unsigned long long)parentID;
-(unsigned long long)fileID;
-(GSManager *)library;
-(int)device;
@end
