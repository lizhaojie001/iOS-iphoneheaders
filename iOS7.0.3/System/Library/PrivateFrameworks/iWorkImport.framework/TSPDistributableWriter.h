/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:09:17 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


#import <iWorkImport/iWorkImport-Structs.h>
@class TSPDistributableArchiveOutputStream, TSPDatabase, TSPDistributableFileManager;

@interface TSPDistributableWriter : NSObject {

	TSPDistributableArchiveOutputStream* _outputStream;
	set<long long, std::__1::less<long long>, std::__1::allocator<long long> >* _encodedIds;
	set<int, std::__1::less<int>, std::__1::allocator<int> >* _typesSeen;
	BOOL _isCancelled;
	TSPDatabase* _database;
	TSPDistributableFileManager* _fileManager;
	unsigned long long _processedEntriesCount;

}
-(id)_initWithDatabase:(id)arg1 fileManager:(id)arg2 outputStream:(id)arg3 checkCrc:(unsigned)arg4 includeToc:(BOOL)arg5 ;
-(BOOL)_processEntry:(id)arg1 tocEntries:(id)arg2 progressContext:(id)arg3 error:(id*)arg4 ;
-(id)initWithTangierPath:(id)arg1 fileManager:(id)arg2 outputStream:(id)arg3 checkCrc:(unsigned)arg4 ;
-(BOOL)goAndReportProgress:(BOOL)arg1 error:(id*)arg2 context:(id)arg3 ;
-(void)dealloc;
-(void)cancel;
-(void).cxx_destruct;
@end

