/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:24:30 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString, NSURL, NSArray;

@interface PLFilesystemDeletionInfo : NSObject {

	NSString* _directory;
	NSString* _filename;
	NSURL* _objectIDURI;
	NSArray* _fileURLs;
	unsigned long long _thumbnailIndex;
	NSString* _thumbnailIdentifier;
	NSString* _uuid;
	unsigned long long _timestamp;

}

@property (readonly) NSURL * objectIDURI;                            //@synthesize objectIDURI=_objectIDURI - In the implementation block
@property (retain) NSArray * fileURLs;                               //@synthesize fileURLs=_fileURLs - In the implementation block
@property (readonly) unsigned long long thumbnailIndex;              //@synthesize thumbnailIndex=_thumbnailIndex - In the implementation block
@property (retain) NSString * thumbnailIdentifier;                   //@synthesize thumbnailIdentifier=_thumbnailIdentifier - In the implementation block
@property (readonly) NSString * uuid;                                //@synthesize uuid=_uuid - In the implementation block
@property (readonly) unsigned long long timestamp;                   //@synthesize timestamp=_timestamp - In the implementation block
@property (readonly) NSString * directory;                           //@synthesize directory=_directory - In the implementation block
@property (readonly) NSString * filename;                            //@synthesize filename=_filename - In the implementation block
+(id)deletionInfoWithAsset:(id)arg1 ;
-(void)dealloc;
-(id)description;
-(unsigned long long)timestamp;
-(id)uuid;
-(id)filename;
-(id)directory;
-(id)thumbnailIdentifier;
-(unsigned long long)thumbnailIndex;
-(id)initWithObjectIDURI:(id)arg1 directory:(id)arg2 filename:(id)arg3 fileURLs:(id)arg4 thumbnailIndex:(unsigned long long)arg5 thumbnailIdentifier:(id)arg6 uuid:(id)arg7 timestamp:(unsigned long long)arg8 ;
-(id)objectIDURI;
-(id)fileURLs;
-(void)setFileURLs:(id)arg1 ;
-(void)setThumbnailIdentifier:(id)arg1 ;
@end

