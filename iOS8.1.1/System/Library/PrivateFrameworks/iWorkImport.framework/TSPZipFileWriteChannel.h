/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:35:19 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/TSUStreamWriteChannel.h>

@class TSUZipFileWriter, NSString;

@interface TSPZipFileWriteChannel : NSObject <TSUStreamWriteChannel> {

	TSUZipFileWriter* _archiveWriter;
	BOOL _isClosed;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) BOOL isValid; 
-(void)setLowWater:(unsigned long long)arg1 ;
-(void)writeData:(id)arg1 queue:(id)arg2 handler:(/*^block*/id)arg3 ;
-(void)addBarrier:(/*^block*/id)arg1 ;
-(id)initWithArchiveWriter:(id)arg1 ;
-(id)init;
-(BOOL)isValid;
-(void)close;
@end
